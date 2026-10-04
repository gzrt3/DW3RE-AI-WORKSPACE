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


void FUN_0019b5e8_part214(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x2035f8u: goto label_2035f8;
        case 0x2035fcu: goto label_2035fc;
        case 0x203600u: goto label_203600;
        case 0x203604u: goto label_203604;
        case 0x203608u: goto label_203608;
        case 0x20360cu: goto label_20360c;
        case 0x203610u: goto label_203610;
        case 0x203614u: goto label_203614;
        case 0x203618u: goto label_203618;
        case 0x20361cu: goto label_20361c;
        case 0x203620u: goto label_203620;
        case 0x203624u: goto label_203624;
        case 0x203628u: goto label_203628;
        case 0x20362cu: goto label_20362c;
        case 0x203630u: goto label_203630;
        case 0x203634u: goto label_203634;
        case 0x203638u: goto label_203638;
        case 0x20363cu: goto label_20363c;
        case 0x203640u: goto label_203640;
        case 0x203644u: goto label_203644;
        case 0x203648u: goto label_203648;
        case 0x20364cu: goto label_20364c;
        case 0x203650u: goto label_203650;
        case 0x203654u: goto label_203654;
        case 0x203658u: goto label_203658;
        case 0x20365cu: goto label_20365c;
        case 0x203660u: goto label_203660;
        case 0x203664u: goto label_203664;
        case 0x203668u: goto label_203668;
        case 0x20366cu: goto label_20366c;
        case 0x203670u: goto label_203670;
        case 0x203674u: goto label_203674;
        case 0x203678u: goto label_203678;
        case 0x20367cu: goto label_20367c;
        case 0x203680u: goto label_203680;
        case 0x203684u: goto label_203684;
        case 0x203688u: goto label_203688;
        case 0x20368cu: goto label_20368c;
        case 0x203690u: goto label_203690;
        case 0x203694u: goto label_203694;
        case 0x203698u: goto label_203698;
        case 0x20369cu: goto label_20369c;
        case 0x2036a0u: goto label_2036a0;
        case 0x2036a4u: goto label_2036a4;
        case 0x2036a8u: goto label_2036a8;
        case 0x2036acu: goto label_2036ac;
        case 0x2036b0u: goto label_2036b0;
        case 0x2036b4u: goto label_2036b4;
        case 0x2036b8u: goto label_2036b8;
        case 0x2036bcu: goto label_2036bc;
        case 0x2036c0u: goto label_2036c0;
        case 0x2036c4u: goto label_2036c4;
        case 0x2036c8u: goto label_2036c8;
        case 0x2036ccu: goto label_2036cc;
        case 0x2036d0u: goto label_2036d0;
        case 0x2036d4u: goto label_2036d4;
        case 0x2036d8u: goto label_2036d8;
        case 0x2036dcu: goto label_2036dc;
        case 0x2036e0u: goto label_2036e0;
        case 0x2036e4u: goto label_2036e4;
        case 0x2036e8u: goto label_2036e8;
        case 0x2036ecu: goto label_2036ec;
        case 0x2036f0u: goto label_2036f0;
        case 0x2036f4u: goto label_2036f4;
        case 0x2036f8u: goto label_2036f8;
        case 0x2036fcu: goto label_2036fc;
        case 0x203700u: goto label_203700;
        case 0x203704u: goto label_203704;
        case 0x203708u: goto label_203708;
        case 0x20370cu: goto label_20370c;
        case 0x203710u: goto label_203710;
        case 0x203714u: goto label_203714;
        case 0x203718u: goto label_203718;
        case 0x20371cu: goto label_20371c;
        case 0x203720u: goto label_203720;
        case 0x203724u: goto label_203724;
        case 0x203728u: goto label_203728;
        case 0x20372cu: goto label_20372c;
        case 0x203730u: goto label_203730;
        case 0x203734u: goto label_203734;
        case 0x203738u: goto label_203738;
        case 0x20373cu: goto label_20373c;
        case 0x203740u: goto label_203740;
        case 0x203744u: goto label_203744;
        case 0x203748u: goto label_203748;
        case 0x20374cu: goto label_20374c;
        case 0x203750u: goto label_203750;
        case 0x203754u: goto label_203754;
        case 0x203758u: goto label_203758;
        case 0x20375cu: goto label_20375c;
        case 0x203760u: goto label_203760;
        case 0x203764u: goto label_203764;
        case 0x203768u: goto label_203768;
        case 0x20376cu: goto label_20376c;
        case 0x203770u: goto label_203770;
        case 0x203774u: goto label_203774;
        case 0x203778u: goto label_203778;
        case 0x20377cu: goto label_20377c;
        case 0x203780u: goto label_203780;
        case 0x203784u: goto label_203784;
        case 0x203788u: goto label_203788;
        case 0x20378cu: goto label_20378c;
        case 0x203790u: goto label_203790;
        case 0x203794u: goto label_203794;
        case 0x203798u: goto label_203798;
        case 0x20379cu: goto label_20379c;
        case 0x2037a0u: goto label_2037a0;
        case 0x2037a4u: goto label_2037a4;
        case 0x2037a8u: goto label_2037a8;
        case 0x2037acu: goto label_2037ac;
        case 0x2037b0u: goto label_2037b0;
        case 0x2037b4u: goto label_2037b4;
        case 0x2037b8u: goto label_2037b8;
        case 0x2037bcu: goto label_2037bc;
        case 0x2037c0u: goto label_2037c0;
        case 0x2037c4u: goto label_2037c4;
        case 0x2037c8u: goto label_2037c8;
        case 0x2037ccu: goto label_2037cc;
        case 0x2037d0u: goto label_2037d0;
        case 0x2037d4u: goto label_2037d4;
        case 0x2037d8u: goto label_2037d8;
        case 0x2037dcu: goto label_2037dc;
        case 0x2037e0u: goto label_2037e0;
        case 0x2037e4u: goto label_2037e4;
        case 0x2037e8u: goto label_2037e8;
        case 0x2037ecu: goto label_2037ec;
        case 0x2037f0u: goto label_2037f0;
        case 0x2037f4u: goto label_2037f4;
        case 0x2037f8u: goto label_2037f8;
        case 0x2037fcu: goto label_2037fc;
        case 0x203800u: goto label_203800;
        case 0x203804u: goto label_203804;
        case 0x203808u: goto label_203808;
        case 0x20380cu: goto label_20380c;
        case 0x203810u: goto label_203810;
        case 0x203814u: goto label_203814;
        case 0x203818u: goto label_203818;
        case 0x20381cu: goto label_20381c;
        case 0x203820u: goto label_203820;
        case 0x203824u: goto label_203824;
        case 0x203828u: goto label_203828;
        case 0x20382cu: goto label_20382c;
        case 0x203830u: goto label_203830;
        case 0x203834u: goto label_203834;
        case 0x203838u: goto label_203838;
        case 0x20383cu: goto label_20383c;
        case 0x203840u: goto label_203840;
        case 0x203844u: goto label_203844;
        case 0x203848u: goto label_203848;
        case 0x20384cu: goto label_20384c;
        case 0x203850u: goto label_203850;
        case 0x203854u: goto label_203854;
        case 0x203858u: goto label_203858;
        case 0x20385cu: goto label_20385c;
        case 0x203860u: goto label_203860;
        case 0x203864u: goto label_203864;
        case 0x203868u: goto label_203868;
        case 0x20386cu: goto label_20386c;
        case 0x203870u: goto label_203870;
        case 0x203874u: goto label_203874;
        case 0x203878u: goto label_203878;
        case 0x20387cu: goto label_20387c;
        case 0x203880u: goto label_203880;
        case 0x203884u: goto label_203884;
        case 0x203888u: goto label_203888;
        case 0x20388cu: goto label_20388c;
        case 0x203890u: goto label_203890;
        case 0x203894u: goto label_203894;
        case 0x203898u: goto label_203898;
        case 0x20389cu: goto label_20389c;
        case 0x2038a0u: goto label_2038a0;
        case 0x2038a4u: goto label_2038a4;
        case 0x2038a8u: goto label_2038a8;
        case 0x2038acu: goto label_2038ac;
        case 0x2038b0u: goto label_2038b0;
        case 0x2038b4u: goto label_2038b4;
        case 0x2038b8u: goto label_2038b8;
        case 0x2038bcu: goto label_2038bc;
        case 0x2038c0u: goto label_2038c0;
        case 0x2038c4u: goto label_2038c4;
        case 0x2038c8u: goto label_2038c8;
        case 0x2038ccu: goto label_2038cc;
        case 0x2038d0u: goto label_2038d0;
        case 0x2038d4u: goto label_2038d4;
        case 0x2038d8u: goto label_2038d8;
        case 0x2038dcu: goto label_2038dc;
        case 0x2038e0u: goto label_2038e0;
        case 0x2038e4u: goto label_2038e4;
        case 0x2038e8u: goto label_2038e8;
        case 0x2038ecu: goto label_2038ec;
        case 0x2038f0u: goto label_2038f0;
        case 0x2038f4u: goto label_2038f4;
        case 0x2038f8u: goto label_2038f8;
        case 0x2038fcu: goto label_2038fc;
        case 0x203900u: goto label_203900;
        case 0x203904u: goto label_203904;
        case 0x203908u: goto label_203908;
        case 0x20390cu: goto label_20390c;
        case 0x203910u: goto label_203910;
        case 0x203914u: goto label_203914;
        case 0x203918u: goto label_203918;
        case 0x20391cu: goto label_20391c;
        case 0x203920u: goto label_203920;
        case 0x203924u: goto label_203924;
        case 0x203928u: goto label_203928;
        case 0x20392cu: goto label_20392c;
        case 0x203930u: goto label_203930;
        case 0x203934u: goto label_203934;
        case 0x203938u: goto label_203938;
        case 0x20393cu: goto label_20393c;
        case 0x203940u: goto label_203940;
        case 0x203944u: goto label_203944;
        case 0x203948u: goto label_203948;
        case 0x20394cu: goto label_20394c;
        case 0x203950u: goto label_203950;
        case 0x203954u: goto label_203954;
        case 0x203958u: goto label_203958;
        case 0x20395cu: goto label_20395c;
        case 0x203960u: goto label_203960;
        case 0x203964u: goto label_203964;
        case 0x203968u: goto label_203968;
        case 0x20396cu: goto label_20396c;
        case 0x203970u: goto label_203970;
        case 0x203974u: goto label_203974;
        case 0x203978u: goto label_203978;
        case 0x20397cu: goto label_20397c;
        case 0x203980u: goto label_203980;
        case 0x203984u: goto label_203984;
        case 0x203988u: goto label_203988;
        case 0x20398cu: goto label_20398c;
        case 0x203990u: goto label_203990;
        case 0x203994u: goto label_203994;
        case 0x203998u: goto label_203998;
        case 0x20399cu: goto label_20399c;
        case 0x2039a0u: goto label_2039a0;
        case 0x2039a4u: goto label_2039a4;
        case 0x2039a8u: goto label_2039a8;
        case 0x2039acu: goto label_2039ac;
        case 0x2039b0u: goto label_2039b0;
        case 0x2039b4u: goto label_2039b4;
        case 0x2039b8u: goto label_2039b8;
        case 0x2039bcu: goto label_2039bc;
        case 0x2039c0u: goto label_2039c0;
        case 0x2039c4u: goto label_2039c4;
        case 0x2039c8u: goto label_2039c8;
        case 0x2039ccu: goto label_2039cc;
        case 0x2039d0u: goto label_2039d0;
        case 0x2039d4u: goto label_2039d4;
        case 0x2039d8u: goto label_2039d8;
        case 0x2039dcu: goto label_2039dc;
        case 0x2039e0u: goto label_2039e0;
        case 0x2039e4u: goto label_2039e4;
        case 0x2039e8u: goto label_2039e8;
        case 0x2039ecu: goto label_2039ec;
        case 0x2039f0u: goto label_2039f0;
        case 0x2039f4u: goto label_2039f4;
        case 0x2039f8u: goto label_2039f8;
        case 0x2039fcu: goto label_2039fc;
        case 0x203a00u: goto label_203a00;
        case 0x203a04u: goto label_203a04;
        case 0x203a08u: goto label_203a08;
        case 0x203a0cu: goto label_203a0c;
        case 0x203a10u: goto label_203a10;
        case 0x203a14u: goto label_203a14;
        case 0x203a18u: goto label_203a18;
        case 0x203a1cu: goto label_203a1c;
        case 0x203a20u: goto label_203a20;
        case 0x203a24u: goto label_203a24;
        case 0x203a28u: goto label_203a28;
        case 0x203a2cu: goto label_203a2c;
        case 0x203a30u: goto label_203a30;
        case 0x203a34u: goto label_203a34;
        case 0x203a38u: goto label_203a38;
        case 0x203a3cu: goto label_203a3c;
        case 0x203a40u: goto label_203a40;
        case 0x203a44u: goto label_203a44;
        case 0x203a48u: goto label_203a48;
        case 0x203a4cu: goto label_203a4c;
        case 0x203a50u: goto label_203a50;
        case 0x203a54u: goto label_203a54;
        case 0x203a58u: goto label_203a58;
        case 0x203a5cu: goto label_203a5c;
        case 0x203a60u: goto label_203a60;
        case 0x203a64u: goto label_203a64;
        case 0x203a68u: goto label_203a68;
        case 0x203a6cu: goto label_203a6c;
        case 0x203a70u: goto label_203a70;
        case 0x203a74u: goto label_203a74;
        case 0x203a78u: goto label_203a78;
        case 0x203a7cu: goto label_203a7c;
        case 0x203a80u: goto label_203a80;
        case 0x203a84u: goto label_203a84;
        case 0x203a88u: goto label_203a88;
        case 0x203a8cu: goto label_203a8c;
        case 0x203a90u: goto label_203a90;
        case 0x203a94u: goto label_203a94;
        case 0x203a98u: goto label_203a98;
        case 0x203a9cu: goto label_203a9c;
        case 0x203aa0u: goto label_203aa0;
        case 0x203aa4u: goto label_203aa4;
        case 0x203aa8u: goto label_203aa8;
        case 0x203aacu: goto label_203aac;
        case 0x203ab0u: goto label_203ab0;
        case 0x203ab4u: goto label_203ab4;
        case 0x203ab8u: goto label_203ab8;
        case 0x203abcu: goto label_203abc;
        case 0x203ac0u: goto label_203ac0;
        case 0x203ac4u: goto label_203ac4;
        case 0x203ac8u: goto label_203ac8;
        case 0x203accu: goto label_203acc;
        case 0x203ad0u: goto label_203ad0;
        case 0x203ad4u: goto label_203ad4;
        case 0x203ad8u: goto label_203ad8;
        case 0x203adcu: goto label_203adc;
        case 0x203ae0u: goto label_203ae0;
        case 0x203ae4u: goto label_203ae4;
        case 0x203ae8u: goto label_203ae8;
        case 0x203aecu: goto label_203aec;
        case 0x203af0u: goto label_203af0;
        case 0x203af4u: goto label_203af4;
        case 0x203af8u: goto label_203af8;
        case 0x203afcu: goto label_203afc;
        case 0x203b00u: goto label_203b00;
        case 0x203b04u: goto label_203b04;
        case 0x203b08u: goto label_203b08;
        case 0x203b0cu: goto label_203b0c;
        case 0x203b10u: goto label_203b10;
        case 0x203b14u: goto label_203b14;
        case 0x203b18u: goto label_203b18;
        case 0x203b1cu: goto label_203b1c;
        case 0x203b20u: goto label_203b20;
        case 0x203b24u: goto label_203b24;
        case 0x203b28u: goto label_203b28;
        case 0x203b2cu: goto label_203b2c;
        case 0x203b30u: goto label_203b30;
        case 0x203b34u: goto label_203b34;
        case 0x203b38u: goto label_203b38;
        case 0x203b3cu: goto label_203b3c;
        case 0x203b40u: goto label_203b40;
        case 0x203b44u: goto label_203b44;
        case 0x203b48u: goto label_203b48;
        case 0x203b4cu: goto label_203b4c;
        case 0x203b50u: goto label_203b50;
        case 0x203b54u: goto label_203b54;
        case 0x203b58u: goto label_203b58;
        case 0x203b5cu: goto label_203b5c;
        case 0x203b60u: goto label_203b60;
        case 0x203b64u: goto label_203b64;
        case 0x203b68u: goto label_203b68;
        case 0x203b6cu: goto label_203b6c;
        case 0x203b70u: goto label_203b70;
        case 0x203b74u: goto label_203b74;
        case 0x203b78u: goto label_203b78;
        case 0x203b7cu: goto label_203b7c;
        case 0x203b80u: goto label_203b80;
        case 0x203b84u: goto label_203b84;
        case 0x203b88u: goto label_203b88;
        case 0x203b8cu: goto label_203b8c;
        case 0x203b90u: goto label_203b90;
        case 0x203b94u: goto label_203b94;
        case 0x203b98u: goto label_203b98;
        case 0x203b9cu: goto label_203b9c;
        case 0x203ba0u: goto label_203ba0;
        case 0x203ba4u: goto label_203ba4;
        case 0x203ba8u: goto label_203ba8;
        case 0x203bacu: goto label_203bac;
        case 0x203bb0u: goto label_203bb0;
        case 0x203bb4u: goto label_203bb4;
        case 0x203bb8u: goto label_203bb8;
        case 0x203bbcu: goto label_203bbc;
        case 0x203bc0u: goto label_203bc0;
        case 0x203bc4u: goto label_203bc4;
        case 0x203bc8u: goto label_203bc8;
        case 0x203bccu: goto label_203bcc;
        case 0x203bd0u: goto label_203bd0;
        case 0x203bd4u: goto label_203bd4;
        case 0x203bd8u: goto label_203bd8;
        case 0x203bdcu: goto label_203bdc;
        case 0x203be0u: goto label_203be0;
        case 0x203be4u: goto label_203be4;
        case 0x203be8u: goto label_203be8;
        case 0x203becu: goto label_203bec;
        case 0x203bf0u: goto label_203bf0;
        case 0x203bf4u: goto label_203bf4;
        case 0x203bf8u: goto label_203bf8;
        case 0x203bfcu: goto label_203bfc;
        case 0x203c00u: goto label_203c00;
        case 0x203c04u: goto label_203c04;
        case 0x203c08u: goto label_203c08;
        case 0x203c0cu: goto label_203c0c;
        case 0x203c10u: goto label_203c10;
        case 0x203c14u: goto label_203c14;
        case 0x203c18u: goto label_203c18;
        case 0x203c1cu: goto label_203c1c;
        case 0x203c20u: goto label_203c20;
        case 0x203c24u: goto label_203c24;
        case 0x203c28u: goto label_203c28;
        case 0x203c2cu: goto label_203c2c;
        case 0x203c30u: goto label_203c30;
        case 0x203c34u: goto label_203c34;
        case 0x203c38u: goto label_203c38;
        case 0x203c3cu: goto label_203c3c;
        case 0x203c40u: goto label_203c40;
        case 0x203c44u: goto label_203c44;
        case 0x203c48u: goto label_203c48;
        case 0x203c4cu: goto label_203c4c;
        case 0x203c50u: goto label_203c50;
        case 0x203c54u: goto label_203c54;
        case 0x203c58u: goto label_203c58;
        case 0x203c5cu: goto label_203c5c;
        case 0x203c60u: goto label_203c60;
        case 0x203c64u: goto label_203c64;
        case 0x203c68u: goto label_203c68;
        case 0x203c6cu: goto label_203c6c;
        case 0x203c70u: goto label_203c70;
        case 0x203c74u: goto label_203c74;
        case 0x203c78u: goto label_203c78;
        case 0x203c7cu: goto label_203c7c;
        case 0x203c80u: goto label_203c80;
        case 0x203c84u: goto label_203c84;
        case 0x203c88u: goto label_203c88;
        case 0x203c8cu: goto label_203c8c;
        case 0x203c90u: goto label_203c90;
        case 0x203c94u: goto label_203c94;
        case 0x203c98u: goto label_203c98;
        case 0x203c9cu: goto label_203c9c;
        case 0x203ca0u: goto label_203ca0;
        case 0x203ca4u: goto label_203ca4;
        case 0x203ca8u: goto label_203ca8;
        case 0x203cacu: goto label_203cac;
        case 0x203cb0u: goto label_203cb0;
        case 0x203cb4u: goto label_203cb4;
        case 0x203cb8u: goto label_203cb8;
        case 0x203cbcu: goto label_203cbc;
        case 0x203cc0u: goto label_203cc0;
        case 0x203cc4u: goto label_203cc4;
        case 0x203cc8u: goto label_203cc8;
        case 0x203cccu: goto label_203ccc;
        case 0x203cd0u: goto label_203cd0;
        case 0x203cd4u: goto label_203cd4;
        case 0x203cd8u: goto label_203cd8;
        case 0x203cdcu: goto label_203cdc;
        case 0x203ce0u: goto label_203ce0;
        case 0x203ce4u: goto label_203ce4;
        case 0x203ce8u: goto label_203ce8;
        case 0x203cecu: goto label_203cec;
        case 0x203cf0u: goto label_203cf0;
        case 0x203cf4u: goto label_203cf4;
        case 0x203cf8u: goto label_203cf8;
        case 0x203cfcu: goto label_203cfc;
        case 0x203d00u: goto label_203d00;
        case 0x203d04u: goto label_203d04;
        case 0x203d08u: goto label_203d08;
        case 0x203d0cu: goto label_203d0c;
        case 0x203d10u: goto label_203d10;
        case 0x203d14u: goto label_203d14;
        case 0x203d18u: goto label_203d18;
        case 0x203d1cu: goto label_203d1c;
        case 0x203d20u: goto label_203d20;
        case 0x203d24u: goto label_203d24;
        case 0x203d28u: goto label_203d28;
        case 0x203d2cu: goto label_203d2c;
        case 0x203d30u: goto label_203d30;
        case 0x203d34u: goto label_203d34;
        case 0x203d38u: goto label_203d38;
        case 0x203d3cu: goto label_203d3c;
        case 0x203d40u: goto label_203d40;
        case 0x203d44u: goto label_203d44;
        case 0x203d48u: goto label_203d48;
        case 0x203d4cu: goto label_203d4c;
        case 0x203d50u: goto label_203d50;
        case 0x203d54u: goto label_203d54;
        case 0x203d58u: goto label_203d58;
        case 0x203d5cu: goto label_203d5c;
        case 0x203d60u: goto label_203d60;
        case 0x203d64u: goto label_203d64;
        case 0x203d68u: goto label_203d68;
        case 0x203d6cu: goto label_203d6c;
        case 0x203d70u: goto label_203d70;
        case 0x203d74u: goto label_203d74;
        case 0x203d78u: goto label_203d78;
        case 0x203d7cu: goto label_203d7c;
        case 0x203d80u: goto label_203d80;
        case 0x203d84u: goto label_203d84;
        case 0x203d88u: goto label_203d88;
        case 0x203d8cu: goto label_203d8c;
        case 0x203d90u: goto label_203d90;
        case 0x203d94u: goto label_203d94;
        case 0x203d98u: goto label_203d98;
        case 0x203d9cu: goto label_203d9c;
        case 0x203da0u: goto label_203da0;
        case 0x203da4u: goto label_203da4;
        case 0x203da8u: goto label_203da8;
        case 0x203dacu: goto label_203dac;
        case 0x203db0u: goto label_203db0;
        case 0x203db4u: goto label_203db4;
        case 0x203db8u: goto label_203db8;
        case 0x203dbcu: goto label_203dbc;
        case 0x203dc0u: goto label_203dc0;
        case 0x203dc4u: goto label_203dc4;
        default: return;
    }

label_2035f8:
    // 0x2035f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2035f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2035fc:
    // 0x2035fc: 0x3e00008  jr          $ra
label_203600:
    if (ctx->pc == 0x203600u) {
        ctx->pc = 0x203600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2035FCu;
        // 0x203600: 0x27bd0630  addiu       $sp, $sp, 0x630 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1584));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203604u;
        goto label_203604;
    }
    ctx->pc = 0x2035FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2035FCu;
        // 0x203600: 0x27bd0630  addiu       $sp, $sp, 0x630 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1584));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2035FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x203604u;
label_203604:
    // 0x203604: 0x0  nop
    ctx->pc = 0x203604u;
    // NOP
label_203608:
    // 0x203608: 0x0  nop
    ctx->pc = 0x203608u;
    // NOP
label_20360c:
    // 0x20360c: 0x0  nop
    ctx->pc = 0x20360cu;
    // NOP
label_203610:
    // 0x203610: 0x27bdf8e0  addiu       $sp, $sp, -0x720
    ctx->pc = 0x203610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965472));
label_203614:
    // 0x203614: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x203614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_203618:
    // 0x203618: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x203618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_20361c:
    // 0x20361c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20361cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_203620:
    // 0x203620: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x203620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_203624:
    // 0x203624: 0x1062005f  beq         $v1, $v0, . + 4 + (0x5F << 2)
label_203628:
    if (ctx->pc == 0x203628u) {
        ctx->pc = 0x203628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203624u;
        // 0x203628: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20362Cu;
        goto label_20362c;
    }
    ctx->pc = 0x203624u;
    {
        const bool branch_taken_0x203624 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x203628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203624u;
        // 0x203628: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203624) {
            ctx->pc = 0x2037A4u;
            goto label_2037a4;
        }
    }
    ctx->pc = 0x20362Cu;
label_20362c:
    // 0x20362c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x20362cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_203630:
    // 0x203630: 0x1062005d  beq         $v1, $v0, . + 4 + (0x5D << 2)
label_203634:
    if (ctx->pc == 0x203634u) {
        ctx->pc = 0x203634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203630u;
        // 0x203634: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203638u;
        goto label_203638;
    }
    ctx->pc = 0x203630u;
    {
        const bool branch_taken_0x203630 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x203634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203630u;
        // 0x203634: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203630) {
            ctx->pc = 0x2037A8u;
            goto label_2037a8;
        }
    }
    ctx->pc = 0x203638u;
label_203638:
    // 0x203638: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x203638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_20363c:
    // 0x20363c: 0x10620059  beq         $v1, $v0, . + 4 + (0x59 << 2)
label_203640:
    if (ctx->pc == 0x203640u) {
        ctx->pc = 0x203640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20363Cu;
        // 0x203640: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203644u;
        goto label_203644;
    }
    ctx->pc = 0x20363Cu;
    {
        const bool branch_taken_0x20363c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x203640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20363Cu;
        // 0x203640: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20363c) {
            ctx->pc = 0x2037A4u;
            goto label_2037a4;
        }
    }
    ctx->pc = 0x203644u;
label_203644:
    // 0x203644: 0x1062004b  beq         $v1, $v0, . + 4 + (0x4B << 2)
label_203648:
    if (ctx->pc == 0x203648u) {
        ctx->pc = 0x203648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203644u;
        // 0x203648: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20364Cu;
        goto label_20364c;
    }
    ctx->pc = 0x203644u;
    {
        const bool branch_taken_0x203644 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x203648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203644u;
        // 0x203648: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203644) {
            ctx->pc = 0x203774u;
            goto label_203774;
        }
    }
    ctx->pc = 0x20364Cu;
label_20364c:
    // 0x20364c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_203650:
    if (ctx->pc == 0x203650u) {
        ctx->pc = 0x203650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20364Cu;
        // 0x203650: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203654u;
        goto label_203654;
    }
    ctx->pc = 0x20364Cu;
    {
        const bool branch_taken_0x20364c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x203650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20364Cu;
        // 0x203650: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20364c) {
            ctx->pc = 0x20365Cu;
            goto label_20365c;
        }
    }
    ctx->pc = 0x203654u;
label_203654:
    // 0x203654: 0x10000060  b           . + 4 + (0x60 << 2)
label_203658:
    if (ctx->pc == 0x203658u) {
        ctx->pc = 0x203658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203654u;
        // 0x203658: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20365Cu;
        goto label_20365c;
    }
    ctx->pc = 0x203654u;
    {
        const bool branch_taken_0x203654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203654u;
        // 0x203658: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203654) {
            ctx->pc = 0x2037D8u;
            goto label_2037d8;
        }
    }
    ctx->pc = 0x20365Cu;
label_20365c:
    // 0x20365c: 0x14e20002  bne         $a3, $v0, . + 4 + (0x2 << 2)
label_203660:
    if (ctx->pc == 0x203660u) {
        ctx->pc = 0x203660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20365Cu;
        // 0x203660: 0x2403001f  addiu       $v1, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203664u;
        goto label_203664;
    }
    ctx->pc = 0x20365Cu;
    {
        const bool branch_taken_0x20365c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x203660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20365Cu;
        // 0x203660: 0x2403001f  addiu       $v1, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20365c) {
            ctx->pc = 0x203668u;
            goto label_203668;
        }
    }
    ctx->pc = 0x203664u;
label_203664:
    // 0x203664: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x203664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_203668:
    // 0x203668: 0x8cc40480  lw          $a0, 0x480($a2)
    ctx->pc = 0x203668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1152)));
label_20366c:
    // 0x20366c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x20366cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_203670:
    // 0x203670: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x203670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_203674:
    // 0x203674: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_203678:
    if (ctx->pc == 0x203678u) {
        ctx->pc = 0x203678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203674u;
        // 0x203678: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20367Cu;
        goto label_20367c;
    }
    ctx->pc = 0x203674u;
    {
        const bool branch_taken_0x203674 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x203678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203674u;
        // 0x203678: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203674) {
            ctx->pc = 0x2036B0u;
            goto label_2036b0;
        }
    }
    ctx->pc = 0x20367Cu;
label_20367c:
    // 0x20367c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x20367cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_203680:
    // 0x203680: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x203680u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_203684:
    // 0x203684: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x203684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_203688:
    // 0x203688: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x203688u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20368c:
    // 0x20368c: 0xc08104c  jal         func_204130
label_203690:
    if (ctx->pc == 0x203690u) {
        ctx->pc = 0x203690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20368Cu;
        // 0x203690: 0x27a80020  addiu       $t0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203694u;
        goto label_203694;
    }
    ctx->pc = 0x20368Cu;
    SET_GPR_U32(ctx, 31, 0x203694u);
    ctx->pc = 0x203690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20368Cu;
    // 0x203690: 0x27a80020  addiu       $t0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204130u;
    { ctx->pc = 0x204130; return; }
    ctx->pc = 0x203694u;
label_203694:
    // 0x203694: 0xc07aaa8  jal         func_1EAAA0
label_203698:
    if (ctx->pc == 0x203698u) {
        ctx->pc = 0x203698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203694u;
        // 0x203698: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20369Cu;
        goto label_20369c;
    }
    ctx->pc = 0x203694u;
    SET_GPR_U32(ctx, 31, 0x20369Cu);
    ctx->pc = 0x203698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203694u;
    // 0x203698: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAA0u;
    { ctx->pc = 0x1eaaa0; return; }
    ctx->pc = 0x20369Cu;
label_20369c:
    // 0x20369c: 0xc07aa84  jal         func_1EAA10
label_2036a0:
    if (ctx->pc == 0x2036A0u) {
        ctx->pc = 0x2036A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20369Cu;
        // 0x2036a0: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2036A4u;
        goto label_2036a4;
    }
    ctx->pc = 0x20369Cu;
    SET_GPR_U32(ctx, 31, 0x2036A4u);
    ctx->pc = 0x2036A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20369Cu;
    // 0x2036a0: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAA10u;
    { ctx->pc = 0x1eaa10; return; }
    ctx->pc = 0x2036A4u;
label_2036a4:
    // 0x2036a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2036a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2036a8:
    // 0x2036a8: 0x10000056  b           . + 4 + (0x56 << 2)
label_2036ac:
    if (ctx->pc == 0x2036ACu) {
        ctx->pc = 0x2036ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2036A8u;
        // 0x2036ac: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2036B0u;
        goto label_2036b0;
    }
    ctx->pc = 0x2036A8u;
    {
        const bool branch_taken_0x2036a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2036ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2036A8u;
        // 0x2036ac: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2036a8) {
            ctx->pc = 0x203804u;
            goto label_203804;
        }
    }
    ctx->pc = 0x2036B0u;
label_2036b0:
    // 0x2036b0: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x2036b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_2036b4:
    // 0x2036b4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_2036b8:
    if (ctx->pc == 0x2036B8u) {
        ctx->pc = 0x2036BCu;
        goto label_2036bc;
    }
    ctx->pc = 0x2036B4u;
    {
        const bool branch_taken_0x2036b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2036b4) {
            ctx->pc = 0x203700u;
            goto label_203700;
        }
    }
    ctx->pc = 0x2036BCu;
label_2036bc:
    // 0x2036bc: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x2036bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_2036c0:
    // 0x2036c0: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_2036c4:
    if (ctx->pc == 0x2036C4u) {
        ctx->pc = 0x2036C8u;
        goto label_2036c8;
    }
    ctx->pc = 0x2036C0u;
    {
        const bool branch_taken_0x2036c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2036c0) {
            ctx->pc = 0x2036CCu;
            goto label_2036cc;
        }
    }
    ctx->pc = 0x2036C8u;
label_2036c8:
    // 0x2036c8: 0x24030023  addiu       $v1, $zero, 0x23
    ctx->pc = 0x2036c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_2036cc:
    // 0x2036cc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2036ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2036d0:
    // 0x2036d0: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x2036d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2036d4:
    // 0x2036d4: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x2036d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_2036d8:
    // 0x2036d8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2036d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2036dc:
    // 0x2036dc: 0xc08104c  jal         func_204130
label_2036e0:
    if (ctx->pc == 0x2036E0u) {
        ctx->pc = 0x2036E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2036DCu;
        // 0x2036e0: 0x27a80120  addiu       $t0, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2036E4u;
        goto label_2036e4;
    }
    ctx->pc = 0x2036DCu;
    SET_GPR_U32(ctx, 31, 0x2036E4u);
    ctx->pc = 0x2036E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2036DCu;
    // 0x2036e0: 0x27a80120  addiu       $t0, $sp, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204130u;
    { ctx->pc = 0x204130; return; }
    ctx->pc = 0x2036E4u;
label_2036e4:
    // 0x2036e4: 0xc07aaa8  jal         func_1EAAA0
label_2036e8:
    if (ctx->pc == 0x2036E8u) {
        ctx->pc = 0x2036E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2036E4u;
        // 0x2036e8: 0x27a40120  addiu       $a0, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2036ECu;
        goto label_2036ec;
    }
    ctx->pc = 0x2036E4u;
    SET_GPR_U32(ctx, 31, 0x2036ECu);
    ctx->pc = 0x2036E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2036E4u;
    // 0x2036e8: 0x27a40120  addiu       $a0, $sp, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAA0u;
    { ctx->pc = 0x1eaaa0; return; }
    ctx->pc = 0x2036ECu;
label_2036ec:
    // 0x2036ec: 0xc07aa84  jal         func_1EAA10
label_2036f0:
    if (ctx->pc == 0x2036F0u) {
        ctx->pc = 0x2036F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2036ECu;
        // 0x2036f0: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2036F4u;
        goto label_2036f4;
    }
    ctx->pc = 0x2036ECu;
    SET_GPR_U32(ctx, 31, 0x2036F4u);
    ctx->pc = 0x2036F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2036ECu;
    // 0x2036f0: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAA10u;
    { ctx->pc = 0x1eaa10; return; }
    ctx->pc = 0x2036F4u;
label_2036f4:
    // 0x2036f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2036f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2036f8:
    // 0x2036f8: 0x10000042  b           . + 4 + (0x42 << 2)
label_2036fc:
    if (ctx->pc == 0x2036FCu) {
        ctx->pc = 0x2036FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2036F8u;
        // 0x2036fc: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203700u;
        goto label_203700;
    }
    ctx->pc = 0x2036F8u;
    {
        const bool branch_taken_0x2036f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2036FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2036F8u;
        // 0x2036fc: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2036f8) {
            ctx->pc = 0x203804u;
            goto label_203804;
        }
    }
    ctx->pc = 0x203700u;
label_203700:
    // 0x203700: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x203700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_203704:
    // 0x203704: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_203708:
    if (ctx->pc == 0x203708u) {
        ctx->pc = 0x20370Cu;
        goto label_20370c;
    }
    ctx->pc = 0x203704u;
    {
        const bool branch_taken_0x203704 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x203704) {
            ctx->pc = 0x203740u;
            goto label_203740;
        }
    }
    ctx->pc = 0x20370Cu;
label_20370c:
    // 0x20370c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x20370cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_203710:
    // 0x203710: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x203710u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_203714:
    // 0x203714: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x203714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_203718:
    // 0x203718: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x203718u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20371c:
    // 0x20371c: 0xc08104c  jal         func_204130
label_203720:
    if (ctx->pc == 0x203720u) {
        ctx->pc = 0x203720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20371Cu;
        // 0x203720: 0x27a80220  addiu       $t0, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203724u;
        goto label_203724;
    }
    ctx->pc = 0x20371Cu;
    SET_GPR_U32(ctx, 31, 0x203724u);
    ctx->pc = 0x203720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20371Cu;
    // 0x203720: 0x27a80220  addiu       $t0, $sp, 0x220 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204130u;
    { ctx->pc = 0x204130; return; }
    ctx->pc = 0x203724u;
label_203724:
    // 0x203724: 0xc07aaa8  jal         func_1EAAA0
label_203728:
    if (ctx->pc == 0x203728u) {
        ctx->pc = 0x203728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203724u;
        // 0x203728: 0x27a40220  addiu       $a0, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20372Cu;
        goto label_20372c;
    }
    ctx->pc = 0x203724u;
    SET_GPR_U32(ctx, 31, 0x20372Cu);
    ctx->pc = 0x203728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203724u;
    // 0x203728: 0x27a40220  addiu       $a0, $sp, 0x220 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAA0u;
    { ctx->pc = 0x1eaaa0; return; }
    ctx->pc = 0x20372Cu;
label_20372c:
    // 0x20372c: 0xc07aa84  jal         func_1EAA10
label_203730:
    if (ctx->pc == 0x203730u) {
        ctx->pc = 0x203730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20372Cu;
        // 0x203730: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203734u;
        goto label_203734;
    }
    ctx->pc = 0x20372Cu;
    SET_GPR_U32(ctx, 31, 0x203734u);
    ctx->pc = 0x203730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20372Cu;
    // 0x203730: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAA10u;
    { ctx->pc = 0x1eaa10; return; }
    ctx->pc = 0x203734u;
label_203734:
    // 0x203734: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x203734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_203738:
    // 0x203738: 0x10000032  b           . + 4 + (0x32 << 2)
label_20373c:
    if (ctx->pc == 0x20373Cu) {
        ctx->pc = 0x20373Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203738u;
        // 0x20373c: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203740u;
        goto label_203740;
    }
    ctx->pc = 0x203738u;
    {
        const bool branch_taken_0x203738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20373Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203738u;
        // 0x20373c: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203738) {
            ctx->pc = 0x203804u;
            goto label_203804;
        }
    }
    ctx->pc = 0x203740u;
label_203740:
    // 0x203740: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x203740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_203744:
    // 0x203744: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x203744u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_203748:
    // 0x203748: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x203748u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_20374c:
    // 0x20374c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20374cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_203750:
    // 0x203750: 0xc08104c  jal         func_204130
label_203754:
    if (ctx->pc == 0x203754u) {
        ctx->pc = 0x203754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203750u;
        // 0x203754: 0x27a80320  addiu       $t0, $sp, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203758u;
        goto label_203758;
    }
    ctx->pc = 0x203750u;
    SET_GPR_U32(ctx, 31, 0x203758u);
    ctx->pc = 0x203754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203750u;
    // 0x203754: 0x27a80320  addiu       $t0, $sp, 0x320 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204130u;
    { ctx->pc = 0x204130; return; }
    ctx->pc = 0x203758u;
label_203758:
    // 0x203758: 0xc07aaa8  jal         func_1EAAA0
label_20375c:
    if (ctx->pc == 0x20375Cu) {
        ctx->pc = 0x20375Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203758u;
        // 0x20375c: 0x27a40320  addiu       $a0, $sp, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203760u;
        goto label_203760;
    }
    ctx->pc = 0x203758u;
    SET_GPR_U32(ctx, 31, 0x203760u);
    ctx->pc = 0x20375Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203758u;
    // 0x20375c: 0x27a40320  addiu       $a0, $sp, 0x320 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAA0u;
    { ctx->pc = 0x1eaaa0; return; }
    ctx->pc = 0x203760u;
label_203760:
    // 0x203760: 0xc07aa84  jal         func_1EAA10
label_203764:
    if (ctx->pc == 0x203764u) {
        ctx->pc = 0x203764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203760u;
        // 0x203764: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203768u;
        goto label_203768;
    }
    ctx->pc = 0x203760u;
    SET_GPR_U32(ctx, 31, 0x203768u);
    ctx->pc = 0x203764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203760u;
    // 0x203764: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAA10u;
    { ctx->pc = 0x1eaa10; return; }
    ctx->pc = 0x203768u;
label_203768:
    // 0x203768: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x203768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20376c:
    // 0x20376c: 0x10000025  b           . + 4 + (0x25 << 2)
label_203770:
    if (ctx->pc == 0x203770u) {
        ctx->pc = 0x203770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20376Cu;
        // 0x203770: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203774u;
        goto label_203774;
    }
    ctx->pc = 0x20376Cu;
    {
        const bool branch_taken_0x20376c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20376Cu;
        // 0x203770: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20376c) {
            ctx->pc = 0x203804u;
            goto label_203804;
        }
    }
    ctx->pc = 0x203774u;
label_203774:
    // 0x203774: 0x24060023  addiu       $a2, $zero, 0x23
    ctx->pc = 0x203774u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_203778:
    // 0x203778: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x203778u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_20377c:
    // 0x20377c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20377cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_203780:
    // 0x203780: 0xc08104c  jal         func_204130
label_203784:
    if (ctx->pc == 0x203784u) {
        ctx->pc = 0x203784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203780u;
        // 0x203784: 0x27a80420  addiu       $t0, $sp, 0x420 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203788u;
        goto label_203788;
    }
    ctx->pc = 0x203780u;
    SET_GPR_U32(ctx, 31, 0x203788u);
    ctx->pc = 0x203784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203780u;
    // 0x203784: 0x27a80420  addiu       $t0, $sp, 0x420 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204130u;
    { ctx->pc = 0x204130; return; }
    ctx->pc = 0x203788u;
label_203788:
    // 0x203788: 0xc07aaa8  jal         func_1EAAA0
label_20378c:
    if (ctx->pc == 0x20378Cu) {
        ctx->pc = 0x20378Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203788u;
        // 0x20378c: 0x27a40420  addiu       $a0, $sp, 0x420 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203790u;
        goto label_203790;
    }
    ctx->pc = 0x203788u;
    SET_GPR_U32(ctx, 31, 0x203790u);
    ctx->pc = 0x20378Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203788u;
    // 0x20378c: 0x27a40420  addiu       $a0, $sp, 0x420 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAA0u;
    { ctx->pc = 0x1eaaa0; return; }
    ctx->pc = 0x203790u;
label_203790:
    // 0x203790: 0xc07aa84  jal         func_1EAA10
label_203794:
    if (ctx->pc == 0x203794u) {
        ctx->pc = 0x203794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203790u;
        // 0x203794: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203798u;
        goto label_203798;
    }
    ctx->pc = 0x203790u;
    SET_GPR_U32(ctx, 31, 0x203798u);
    ctx->pc = 0x203794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203790u;
    // 0x203794: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAA10u;
    { ctx->pc = 0x1eaa10; return; }
    ctx->pc = 0x203798u;
label_203798:
    // 0x203798: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x203798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20379c:
    // 0x20379c: 0x10000019  b           . + 4 + (0x19 << 2)
label_2037a0:
    if (ctx->pc == 0x2037A0u) {
        ctx->pc = 0x2037A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20379Cu;
        // 0x2037a0: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2037A4u;
        goto label_2037a4;
    }
    ctx->pc = 0x20379Cu;
    {
        const bool branch_taken_0x20379c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2037A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20379Cu;
        // 0x2037a0: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20379c) {
            ctx->pc = 0x203804u;
            goto label_203804;
        }
    }
    ctx->pc = 0x2037A4u;
label_2037a4:
    // 0x2037a4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2037a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2037a8:
    // 0x2037a8: 0x24060023  addiu       $a2, $zero, 0x23
    ctx->pc = 0x2037a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_2037ac:
    // 0x2037ac: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2037acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2037b0:
    // 0x2037b0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2037b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2037b4:
    // 0x2037b4: 0xc08104c  jal         func_204130
label_2037b8:
    if (ctx->pc == 0x2037B8u) {
        ctx->pc = 0x2037B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2037B4u;
        // 0x2037b8: 0x27a80520  addiu       $t0, $sp, 0x520 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1312));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2037BCu;
        goto label_2037bc;
    }
    ctx->pc = 0x2037B4u;
    SET_GPR_U32(ctx, 31, 0x2037BCu);
    ctx->pc = 0x2037B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2037B4u;
    // 0x2037b8: 0x27a80520  addiu       $t0, $sp, 0x520 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204130u;
    { ctx->pc = 0x204130; return; }
    ctx->pc = 0x2037BCu;
label_2037bc:
    // 0x2037bc: 0xc07aaa8  jal         func_1EAAA0
label_2037c0:
    if (ctx->pc == 0x2037C0u) {
        ctx->pc = 0x2037C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2037BCu;
        // 0x2037c0: 0x27a40520  addiu       $a0, $sp, 0x520 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1312));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2037C4u;
        goto label_2037c4;
    }
    ctx->pc = 0x2037BCu;
    SET_GPR_U32(ctx, 31, 0x2037C4u);
    ctx->pc = 0x2037C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2037BCu;
    // 0x2037c0: 0x27a40520  addiu       $a0, $sp, 0x520 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAA0u;
    { ctx->pc = 0x1eaaa0; return; }
    ctx->pc = 0x2037C4u;
label_2037c4:
    // 0x2037c4: 0xc07aa84  jal         func_1EAA10
label_2037c8:
    if (ctx->pc == 0x2037C8u) {
        ctx->pc = 0x2037C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2037C4u;
        // 0x2037c8: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2037CCu;
        goto label_2037cc;
    }
    ctx->pc = 0x2037C4u;
    SET_GPR_U32(ctx, 31, 0x2037CCu);
    ctx->pc = 0x2037C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2037C4u;
    // 0x2037c8: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAA10u;
    { ctx->pc = 0x1eaa10; return; }
    ctx->pc = 0x2037CCu;
label_2037cc:
    // 0x2037cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2037ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2037d0:
    // 0x2037d0: 0x1000000c  b           . + 4 + (0xC << 2)
label_2037d4:
    if (ctx->pc == 0x2037D4u) {
        ctx->pc = 0x2037D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2037D0u;
        // 0x2037d4: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2037D8u;
        goto label_2037d8;
    }
    ctx->pc = 0x2037D0u;
    {
        const bool branch_taken_0x2037d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2037D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2037D0u;
        // 0x2037d4: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2037d0) {
            ctx->pc = 0x203804u;
            goto label_203804;
        }
    }
    ctx->pc = 0x2037D8u;
label_2037d8:
    // 0x2037d8: 0x24060023  addiu       $a2, $zero, 0x23
    ctx->pc = 0x2037d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_2037dc:
    // 0x2037dc: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x2037dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_2037e0:
    // 0x2037e0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2037e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2037e4:
    // 0x2037e4: 0xc08104c  jal         func_204130
label_2037e8:
    if (ctx->pc == 0x2037E8u) {
        ctx->pc = 0x2037E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2037E4u;
        // 0x2037e8: 0x27a80620  addiu       $t0, $sp, 0x620 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1568));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2037ECu;
        goto label_2037ec;
    }
    ctx->pc = 0x2037E4u;
    SET_GPR_U32(ctx, 31, 0x2037ECu);
    ctx->pc = 0x2037E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2037E4u;
    // 0x2037e8: 0x27a80620  addiu       $t0, $sp, 0x620 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204130u;
    { ctx->pc = 0x204130; return; }
    ctx->pc = 0x2037ECu;
label_2037ec:
    // 0x2037ec: 0xc07aaa8  jal         func_1EAAA0
label_2037f0:
    if (ctx->pc == 0x2037F0u) {
        ctx->pc = 0x2037F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2037ECu;
        // 0x2037f0: 0x27a40620  addiu       $a0, $sp, 0x620 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1568));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2037F4u;
        goto label_2037f4;
    }
    ctx->pc = 0x2037ECu;
    SET_GPR_U32(ctx, 31, 0x2037F4u);
    ctx->pc = 0x2037F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2037ECu;
    // 0x2037f0: 0x27a40620  addiu       $a0, $sp, 0x620 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAA0u;
    { ctx->pc = 0x1eaaa0; return; }
    ctx->pc = 0x2037F4u;
label_2037f4:
    // 0x2037f4: 0xc07aa84  jal         func_1EAA10
label_2037f8:
    if (ctx->pc == 0x2037F8u) {
        ctx->pc = 0x2037F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2037F4u;
        // 0x2037f8: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2037FCu;
        goto label_2037fc;
    }
    ctx->pc = 0x2037F4u;
    SET_GPR_U32(ctx, 31, 0x2037FCu);
    ctx->pc = 0x2037F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2037F4u;
    // 0x2037f8: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAA10u;
    { ctx->pc = 0x1eaa10; return; }
    ctx->pc = 0x2037FCu;
label_2037fc:
    // 0x2037fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2037fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_203800:
    // 0x203800: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x203800u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_203804:
    // 0x203804: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x203804u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_203808:
    // 0x203808: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x203808u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_20380c:
    // 0x20380c: 0x3e00008  jr          $ra
label_203810:
    if (ctx->pc == 0x203810u) {
        ctx->pc = 0x203810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20380Cu;
        // 0x203810: 0x27bd0720  addiu       $sp, $sp, 0x720 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1824));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203814u;
        goto label_203814;
    }
    ctx->pc = 0x20380Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20380Cu;
        // 0x203810: 0x27bd0720  addiu       $sp, $sp, 0x720 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1824));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20380Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x203814u;
label_203814:
    // 0x203814: 0x0  nop
    ctx->pc = 0x203814u;
    // NOP
label_203818:
    // 0x203818: 0x0  nop
    ctx->pc = 0x203818u;
    // NOP
label_20381c:
    // 0x20381c: 0x0  nop
    ctx->pc = 0x20381cu;
    // NOP
label_203820:
    // 0x203820: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x203820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_203824:
    // 0x203824: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x203824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_203828:
    // 0x203828: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x203828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_20382c:
    // 0x20382c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20382cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_203830:
    // 0x203830: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x203830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_203834:
    // 0x203834: 0x1083006a  beq         $a0, $v1, . + 4 + (0x6A << 2)
label_203838:
    if (ctx->pc == 0x203838u) {
        ctx->pc = 0x203838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203834u;
        // 0x203838: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20383Cu;
        goto label_20383c;
    }
    ctx->pc = 0x203834u;
    {
        const bool branch_taken_0x203834 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x203838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203834u;
        // 0x203838: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203834) {
            ctx->pc = 0x2039E0u;
            goto label_2039e0;
        }
    }
    ctx->pc = 0x20383Cu;
label_20383c:
    // 0x20383c: 0x24030015  addiu       $v1, $zero, 0x15
    ctx->pc = 0x20383cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_203840:
    // 0x203840: 0x10830053  beq         $a0, $v1, . + 4 + (0x53 << 2)
label_203844:
    if (ctx->pc == 0x203844u) {
        ctx->pc = 0x203844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203840u;
        // 0x203844: 0x3c010058  lui         $at, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203848u;
        goto label_203848;
    }
    ctx->pc = 0x203840u;
    {
        const bool branch_taken_0x203840 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x203844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203840u;
        // 0x203844: 0x3c010058  lui         $at, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203840) {
            ctx->pc = 0x203990u;
            goto label_203990;
        }
    }
    ctx->pc = 0x203848u;
label_203848:
    // 0x203848: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x203848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_20384c:
    // 0x20384c: 0x1083003f  beq         $a0, $v1, . + 4 + (0x3F << 2)
label_203850:
    if (ctx->pc == 0x203850u) {
        ctx->pc = 0x203850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20384Cu;
        // 0x203850: 0x3c010058  lui         $at, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203854u;
        goto label_203854;
    }
    ctx->pc = 0x20384Cu;
    {
        const bool branch_taken_0x20384c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x203850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20384Cu;
        // 0x203850: 0x3c010058  lui         $at, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20384c) {
            ctx->pc = 0x20394Cu;
            goto label_20394c;
        }
    }
    ctx->pc = 0x203854u;
label_203854:
    // 0x203854: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x203854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_203858:
    // 0x203858: 0x1083001b  beq         $a0, $v1, . + 4 + (0x1B << 2)
label_20385c:
    if (ctx->pc == 0x20385Cu) {
        ctx->pc = 0x20385Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203858u;
        // 0x20385c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203860u;
        goto label_203860;
    }
    ctx->pc = 0x203858u;
    {
        const bool branch_taken_0x203858 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x20385Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203858u;
        // 0x20385c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203858) {
            ctx->pc = 0x2038C8u;
            goto label_2038c8;
        }
    }
    ctx->pc = 0x203860u;
label_203860:
    // 0x203860: 0x1083000f  beq         $a0, $v1, . + 4 + (0xF << 2)
label_203864:
    if (ctx->pc == 0x203864u) {
        ctx->pc = 0x203868u;
        goto label_203868;
    }
    ctx->pc = 0x203860u;
    {
        const bool branch_taken_0x203860 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x203860) {
            ctx->pc = 0x2038A0u;
            goto label_2038a0;
        }
    }
    ctx->pc = 0x203868u;
label_203868:
    // 0x203868: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_20386c:
    if (ctx->pc == 0x20386Cu) {
        ctx->pc = 0x203870u;
        goto label_203870;
    }
    ctx->pc = 0x203868u;
    {
        const bool branch_taken_0x203868 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x203868) {
            ctx->pc = 0x203878u;
            goto label_203878;
        }
    }
    ctx->pc = 0x203870u;
label_203870:
    // 0x203870: 0x1000005e  b           . + 4 + (0x5E << 2)
label_203874:
    if (ctx->pc == 0x203874u) {
        ctx->pc = 0x203874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203870u;
        // 0x203874: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203878u;
        goto label_203878;
    }
    ctx->pc = 0x203870u;
    {
        const bool branch_taken_0x203870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203870u;
        // 0x203874: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203870) {
            ctx->pc = 0x2039ECu;
            goto label_2039ec;
        }
    }
    ctx->pc = 0x203878u;
label_203878:
    // 0x203878: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x203878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20387c:
    // 0x20387c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20387cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_203880:
    // 0x203880: 0x24060023  addiu       $a2, $zero, 0x23
    ctx->pc = 0x203880u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_203884:
    // 0x203884: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x203884u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_203888:
    // 0x203888: 0xc08104c  jal         func_204130
label_20388c:
    if (ctx->pc == 0x20388Cu) {
        ctx->pc = 0x20388Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203888u;
        // 0x20388c: 0x27a80020  addiu       $t0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203890u;
        goto label_203890;
    }
    ctx->pc = 0x203888u;
    SET_GPR_U32(ctx, 31, 0x203890u);
    ctx->pc = 0x20388Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203888u;
    // 0x20388c: 0x27a80020  addiu       $t0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204130u;
    { ctx->pc = 0x204130; return; }
    ctx->pc = 0x203890u;
label_203890:
    // 0x203890: 0xc07aaa8  jal         func_1EAAA0
label_203894:
    if (ctx->pc == 0x203894u) {
        ctx->pc = 0x203894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203890u;
        // 0x203894: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203898u;
        goto label_203898;
    }
    ctx->pc = 0x203890u;
    SET_GPR_U32(ctx, 31, 0x203898u);
    ctx->pc = 0x203894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203890u;
    // 0x203894: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAA0u;
    { ctx->pc = 0x1eaaa0; return; }
    ctx->pc = 0x203898u;
label_203898:
    // 0x203898: 0x10000053  b           . + 4 + (0x53 << 2)
label_20389c:
    if (ctx->pc == 0x20389Cu) {
        ctx->pc = 0x20389Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203898u;
        // 0x20389c: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2038A0u;
        goto label_2038a0;
    }
    ctx->pc = 0x203898u;
    {
        const bool branch_taken_0x203898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20389Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203898u;
        // 0x20389c: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203898) {
            ctx->pc = 0x2039E8u;
            goto label_2039e8;
        }
    }
    ctx->pc = 0x2038A0u;
label_2038a0:
    // 0x2038a0: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x2038a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_2038a4:
    // 0x2038a4: 0xc080fe4  jal         func_203F90
label_2038a8:
    if (ctx->pc == 0x2038A8u) {
        ctx->pc = 0x2038A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2038A4u;
        // 0x2038a8: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2038ACu;
        goto label_2038ac;
    }
    ctx->pc = 0x2038A4u;
    SET_GPR_U32(ctx, 31, 0x2038ACu);
    ctx->pc = 0x2038A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2038A4u;
    // 0x2038a8: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203F90u;
    { ctx->pc = 0x203f90; return; }
    ctx->pc = 0x2038ACu;
label_2038ac:
    // 0x2038ac: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x2038acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_2038b0:
    // 0x2038b0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2038b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2038b4:
    // 0x2038b4: 0xc08f390  jal         func_23CE40
label_2038b8:
    if (ctx->pc == 0x2038B8u) {
        ctx->pc = 0x2038B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2038B4u;
        // 0x2038b8: 0x2484f47c  addiu       $a0, $a0, -0xB84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964348));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2038BCu;
        goto label_2038bc;
    }
    ctx->pc = 0x2038B4u;
    SET_GPR_U32(ctx, 31, 0x2038BCu);
    ctx->pc = 0x2038B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2038B4u;
    // 0x2038b8: 0x2484f47c  addiu       $a0, $a0, -0xB84 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964348));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CE40u;
    { ctx->pc = 0x23ce40; return; }
    ctx->pc = 0x2038BCu;
label_2038bc:
    // 0x2038bc: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x2038bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2038c0:
    // 0x2038c0: 0x10000049  b           . + 4 + (0x49 << 2)
label_2038c4:
    if (ctx->pc == 0x2038C4u) {
        ctx->pc = 0x2038C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2038C0u;
        // 0x2038c4: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2038C8u;
        goto label_2038c8;
    }
    ctx->pc = 0x2038C0u;
    {
        const bool branch_taken_0x2038c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2038C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2038C0u;
        // 0x2038c4: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2038c0) {
            ctx->pc = 0x2039E8u;
            goto label_2039e8;
        }
    }
    ctx->pc = 0x2038C8u;
label_2038c8:
    // 0x2038c8: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x2038c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2038cc:
    // 0x2038cc: 0xc080fe4  jal         func_203F90
label_2038d0:
    if (ctx->pc == 0x2038D0u) {
        ctx->pc = 0x2038D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2038CCu;
        // 0x2038d0: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2038D4u;
        goto label_2038d4;
    }
    ctx->pc = 0x2038CCu;
    SET_GPR_U32(ctx, 31, 0x2038D4u);
    ctx->pc = 0x2038D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2038CCu;
    // 0x2038d0: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203F90u;
    { ctx->pc = 0x203f90; return; }
    ctx->pc = 0x2038D4u;
label_2038d4:
    // 0x2038d4: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2038d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_2038d8:
    // 0x2038d8: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x2038d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
label_2038dc:
    // 0x2038dc: 0x8c26f468  lw          $a2, -0xB98($at)
    ctx->pc = 0x2038dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964328)));
label_2038e0:
    // 0x2038e0: 0x2463f500  addiu       $v1, $v1, -0xB00
    ctx->pc = 0x2038e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964480));
label_2038e4:
    // 0x2038e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2038e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2038e8:
    // 0x2038e8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2038e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2038ec:
    // 0x2038ec: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x2038ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_2038f0:
    // 0x2038f0: 0x862023  subu        $a0, $a0, $a2
    ctx->pc = 0x2038f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_2038f4:
    // 0x2038f4: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x2038f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_2038f8:
    // 0x2038f8: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x2038f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_2038fc:
    // 0x2038fc: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x2038fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_203900:
    // 0x203900: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x203900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_203904:
    // 0x203904: 0xac620130  sw          $v0, 0x130($v1)
    ctx->pc = 0x203904u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 304), GPR_U32(ctx, 2));
label_203908:
    // 0x203908: 0x24620130  addiu       $v0, $v1, 0x130
    ctx->pc = 0x203908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 304));
label_20390c:
    // 0x20390c: 0xc08f390  jal         func_23CE40
label_203910:
    if (ctx->pc == 0x203910u) {
        ctx->pc = 0x203910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20390Cu;
        // 0x203910: 0x24440018  addiu       $a0, $v0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203914u;
        goto label_203914;
    }
    ctx->pc = 0x20390Cu;
    SET_GPR_U32(ctx, 31, 0x203914u);
    ctx->pc = 0x203910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20390Cu;
    // 0x203910: 0x24440018  addiu       $a0, $v0, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CE40u;
    { ctx->pc = 0x23ce40; return; }
    ctx->pc = 0x203914u;
label_203914:
    // 0x203914: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x203914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_203918:
    // 0x203918: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x203918u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_20391c:
    // 0x20391c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20391cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_203920:
    // 0x203920: 0xac22f474  sw          $v0, -0xB8C($at)
    ctx->pc = 0x203920u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294964340), GPR_U32(ctx, 2));
label_203924:
    // 0x203924: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x203924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_203928:
    // 0x203928: 0x2406001e  addiu       $a2, $zero, 0x1E
    ctx->pc = 0x203928u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_20392c:
    // 0x20392c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20392cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_203930:
    // 0x203930: 0xc08104c  jal         func_204130
label_203934:
    if (ctx->pc == 0x203934u) {
        ctx->pc = 0x203934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203930u;
        // 0x203934: 0x27a80020  addiu       $t0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203938u;
        goto label_203938;
    }
    ctx->pc = 0x203930u;
    SET_GPR_U32(ctx, 31, 0x203938u);
    ctx->pc = 0x203934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203930u;
    // 0x203934: 0x27a80020  addiu       $t0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204130u;
    { ctx->pc = 0x204130; return; }
    ctx->pc = 0x203938u;
label_203938:
    // 0x203938: 0xc07aaa8  jal         func_1EAAA0
label_20393c:
    if (ctx->pc == 0x20393Cu) {
        ctx->pc = 0x20393Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203938u;
        // 0x20393c: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203940u;
        goto label_203940;
    }
    ctx->pc = 0x203938u;
    SET_GPR_U32(ctx, 31, 0x203940u);
    ctx->pc = 0x20393Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203938u;
    // 0x20393c: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAA0u;
    { ctx->pc = 0x1eaaa0; return; }
    ctx->pc = 0x203940u;
label_203940:
    // 0x203940: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x203940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_203944:
    // 0x203944: 0x10000028  b           . + 4 + (0x28 << 2)
label_203948:
    if (ctx->pc == 0x203948u) {
        ctx->pc = 0x203948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203944u;
        // 0x203948: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20394Cu;
        goto label_20394c;
    }
    ctx->pc = 0x203944u;
    {
        const bool branch_taken_0x203944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203944u;
        // 0x203948: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203944) {
            ctx->pc = 0x2039E8u;
            goto label_2039e8;
        }
    }
    ctx->pc = 0x20394Cu;
label_20394c:
    // 0x20394c: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x20394cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_203950:
    // 0x203950: 0x8c27f468  lw          $a3, -0xB98($at)
    ctx->pc = 0x203950u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964328)));
label_203954:
    // 0x203954: 0x24a5f500  addiu       $a1, $a1, -0xB00
    ctx->pc = 0x203954u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964480));
label_203958:
    // 0x203958: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x203958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20395c:
    // 0x20395c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x20395cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_203960:
    // 0x203960: 0x730c0  sll         $a2, $a3, 3
    ctx->pc = 0x203960u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_203964:
    // 0x203964: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x203964u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_203968:
    // 0x203968: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x203968u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_20396c:
    // 0x20396c: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x20396cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_203970:
    // 0x203970: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x203970u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_203974:
    // 0x203974: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x203974u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_203978:
    // 0x203978: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x203978u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_20397c:
    // 0x20397c: 0xaca00134  sw          $zero, 0x134($a1)
    ctx->pc = 0x20397cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 308), GPR_U32(ctx, 0));
label_203980:
    // 0x203980: 0xaca0013c  sw          $zero, 0x13C($a1)
    ctx->pc = 0x203980u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 316), GPR_U32(ctx, 0));
label_203984:
    // 0x203984: 0xac24f474  sw          $a0, -0xB8C($at)
    ctx->pc = 0x203984u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294964340), GPR_U32(ctx, 4));
label_203988:
    // 0x203988: 0x10000017  b           . + 4 + (0x17 << 2)
label_20398c:
    if (ctx->pc == 0x20398Cu) {
        ctx->pc = 0x20398Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203988u;
        // 0x20398c: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203990u;
        goto label_203990;
    }
    ctx->pc = 0x203988u;
    {
        const bool branch_taken_0x203988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20398Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203988u;
        // 0x20398c: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203988) {
            ctx->pc = 0x2039E8u;
            goto label_2039e8;
        }
    }
    ctx->pc = 0x203990u;
label_203990:
    // 0x203990: 0x3c070058  lui         $a3, 0x58
    ctx->pc = 0x203990u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)88 << 16));
label_203994:
    // 0x203994: 0x8c29f468  lw          $t1, -0xB98($at)
    ctx->pc = 0x203994u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964328)));
label_203998:
    // 0x203998: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x203998u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_20399c:
    // 0x20399c: 0x34655400  ori         $a1, $v1, 0x5400
    ctx->pc = 0x20399cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21504);
label_2039a0:
    // 0x2039a0: 0x8f8690f0  lw          $a2, -0x6F10($gp)
    ctx->pc = 0x2039a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938864)));
label_2039a4:
    // 0x2039a4: 0x24e7f500  addiu       $a3, $a3, -0xB00
    ctx->pc = 0x2039a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294964480));
label_2039a8:
    // 0x2039a8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2039a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2039ac:
    // 0x2039ac: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2039acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2039b0:
    // 0x2039b0: 0x940c0  sll         $t0, $t1, 3
    ctx->pc = 0x2039b0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
label_2039b4:
    // 0x2039b4: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2039b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_2039b8:
    // 0x2039b8: 0x1094023  subu        $t0, $t0, $t1
    ctx->pc = 0x2039b8u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_2039bc:
    // 0x2039bc: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x2039bcu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
label_2039c0:
    // 0x2039c0: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x2039c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_2039c4:
    // 0x2039c4: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x2039c4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
label_2039c8:
    // 0x2039c8: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x2039c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_2039cc:
    // 0x2039cc: 0xace60144  sw          $a2, 0x144($a3)
    ctx->pc = 0x2039ccu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 324), GPR_U32(ctx, 6));
label_2039d0:
    // 0x2039d0: 0xace50140  sw          $a1, 0x140($a3)
    ctx->pc = 0x2039d0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 320), GPR_U32(ctx, 5));
label_2039d4:
    // 0x2039d4: 0xac24f474  sw          $a0, -0xB8C($at)
    ctx->pc = 0x2039d4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294964340), GPR_U32(ctx, 4));
label_2039d8:
    // 0x2039d8: 0x10000003  b           . + 4 + (0x3 << 2)
label_2039dc:
    if (ctx->pc == 0x2039DCu) {
        ctx->pc = 0x2039DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2039D8u;
        // 0x2039dc: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2039E0u;
        goto label_2039e0;
    }
    ctx->pc = 0x2039D8u;
    {
        const bool branch_taken_0x2039d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2039DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2039D8u;
        // 0x2039dc: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2039d8) {
            ctx->pc = 0x2039E8u;
            goto label_2039e8;
        }
    }
    ctx->pc = 0x2039E0u;
label_2039e0:
    // 0x2039e0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2039e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2039e4:
    // 0x2039e4: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x2039e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_2039e8:
    // 0x2039e8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2039e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2039ec:
    // 0x2039ec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2039ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2039f0:
    // 0x2039f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2039f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2039f4:
    // 0x2039f4: 0x3e00008  jr          $ra
label_2039f8:
    if (ctx->pc == 0x2039F8u) {
        ctx->pc = 0x2039F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2039F4u;
        // 0x2039f8: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2039FCu;
        goto label_2039fc;
    }
    ctx->pc = 0x2039F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2039F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2039F4u;
        // 0x2039f8: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2039F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2039FCu;
label_2039fc:
    // 0x2039fc: 0x0  nop
    ctx->pc = 0x2039fcu;
    // NOP
label_203a00:
    // 0x203a00: 0x27bdf9d0  addiu       $sp, $sp, -0x630
    ctx->pc = 0x203a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965712));
label_203a04:
    // 0x203a04: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x203a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_203a08:
    // 0x203a08: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x203a08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_203a0c:
    // 0x203a0c: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x203a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_203a10:
    // 0x203a10: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x203a10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_203a14:
    // 0x203a14: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x203a14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_203a18:
    // 0x203a18: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x203a18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_203a1c:
    // 0x203a1c: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x203a1cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_203a20:
    // 0x203a20: 0x10e3005b  beq         $a3, $v1, . + 4 + (0x5B << 2)
label_203a24:
    if (ctx->pc == 0x203A24u) {
        ctx->pc = 0x203A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203A20u;
        // 0x203a24: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203A28u;
        goto label_203a28;
    }
    ctx->pc = 0x203A20u;
    {
        const bool branch_taken_0x203a20 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        ctx->pc = 0x203A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203A20u;
        // 0x203a24: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203a20) {
            ctx->pc = 0x203B90u;
            goto label_203b90;
        }
    }
    ctx->pc = 0x203A28u;
label_203a28:
    // 0x203a28: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x203a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_203a2c:
    // 0x203a2c: 0x10e40056  beq         $a3, $a0, . + 4 + (0x56 << 2)
label_203a30:
    if (ctx->pc == 0x203A30u) {
        ctx->pc = 0x203A34u;
        goto label_203a34;
    }
    ctx->pc = 0x203A2Cu;
    {
        const bool branch_taken_0x203a2c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 4));
        if (branch_taken_0x203a2c) {
            ctx->pc = 0x203B88u;
            goto label_203b88;
        }
    }
    ctx->pc = 0x203A34u;
label_203a34:
    // 0x203a34: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x203a34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_203a38:
    // 0x203a38: 0x10e30051  beq         $a3, $v1, . + 4 + (0x51 << 2)
label_203a3c:
    if (ctx->pc == 0x203A3Cu) {
        ctx->pc = 0x203A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203A38u;
        // 0x203a3c: 0x24050013  addiu       $a1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203A40u;
        goto label_203a40;
    }
    ctx->pc = 0x203A38u;
    {
        const bool branch_taken_0x203a38 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        ctx->pc = 0x203A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203A38u;
        // 0x203a3c: 0x24050013  addiu       $a1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203a38) {
            ctx->pc = 0x203B80u;
            goto label_203b80;
        }
    }
    ctx->pc = 0x203A40u;
label_203a40:
    // 0x203a40: 0x10e5004d  beq         $a3, $a1, . + 4 + (0x4D << 2)
label_203a44:
    if (ctx->pc == 0x203A44u) {
        ctx->pc = 0x203A48u;
        goto label_203a48;
    }
    ctx->pc = 0x203A40u;
    {
        const bool branch_taken_0x203a40 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 5));
        if (branch_taken_0x203a40) {
            ctx->pc = 0x203B78u;
            goto label_203b78;
        }
    }
    ctx->pc = 0x203A48u;
label_203a48:
    // 0x203a48: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x203a48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_203a4c:
    // 0x203a4c: 0x10e30028  beq         $a3, $v1, . + 4 + (0x28 << 2)
label_203a50:
    if (ctx->pc == 0x203A50u) {
        ctx->pc = 0x203A54u;
        goto label_203a54;
    }
    ctx->pc = 0x203A4Cu;
    {
        const bool branch_taken_0x203a4c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x203a4c) {
            ctx->pc = 0x203AF0u;
            goto label_203af0;
        }
    }
    ctx->pc = 0x203A54u;
label_203a54:
    // 0x203a54: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
label_203a58:
    if (ctx->pc == 0x203A58u) {
        ctx->pc = 0x203A5Cu;
        goto label_203a5c;
    }
    ctx->pc = 0x203A54u;
    {
        const bool branch_taken_0x203a54 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x203a54) {
            ctx->pc = 0x203A64u;
            goto label_203a64;
        }
    }
    ctx->pc = 0x203A5Cu;
label_203a5c:
    // 0x203a5c: 0x1000006f  b           . + 4 + (0x6F << 2)
label_203a60:
    if (ctx->pc == 0x203A60u) {
        ctx->pc = 0x203A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203A5Cu;
        // 0x203a60: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203A64u;
        goto label_203a64;
    }
    ctx->pc = 0x203A5Cu;
    {
        const bool branch_taken_0x203a5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203A5Cu;
        // 0x203a60: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203a5c) {
            ctx->pc = 0x203C1Cu;
            goto label_203c1c;
        }
    }
    ctx->pc = 0x203A64u;
label_203a64:
    // 0x203a64: 0x8cc40480  lw          $a0, 0x480($a2)
    ctx->pc = 0x203a64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1152)));
label_203a68:
    // 0x203a68: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x203a68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
label_203a6c:
    // 0x203a6c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x203a6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_203a70:
    // 0x203a70: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_203a74:
    if (ctx->pc == 0x203A74u) {
        ctx->pc = 0x203A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203A70u;
        // 0x203a74: 0x30820400  andi        $v0, $a0, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
        ctx->pc = 0x203A78u;
        goto label_203a78;
    }
    ctx->pc = 0x203A70u;
    {
        const bool branch_taken_0x203a70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x203A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203A70u;
        // 0x203a74: 0x30820400  andi        $v0, $a0, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
        if (branch_taken_0x203a70) {
            ctx->pc = 0x203AACu;
            goto label_203aac;
        }
    }
    ctx->pc = 0x203A78u;
label_203a78:
    // 0x203a78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x203a78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_203a7c:
    // 0x203a7c: 0x2406001f  addiu       $a2, $zero, 0x1F
    ctx->pc = 0x203a7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_203a80:
    // 0x203a80: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x203a80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_203a84:
    // 0x203a84: 0xc08104c  jal         func_204130
label_203a88:
    if (ctx->pc == 0x203A88u) {
        ctx->pc = 0x203A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203A84u;
        // 0x203a88: 0x27a80030  addiu       $t0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203A8Cu;
        goto label_203a8c;
    }
    ctx->pc = 0x203A84u;
    SET_GPR_U32(ctx, 31, 0x203A8Cu);
    ctx->pc = 0x203A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203A84u;
    // 0x203a88: 0x27a80030  addiu       $t0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204130u;
    { ctx->pc = 0x204130; return; }
    ctx->pc = 0x203A8Cu;
label_203a8c:
    // 0x203a8c: 0xc07aaa8  jal         func_1EAAA0
label_203a90:
    if (ctx->pc == 0x203A90u) {
        ctx->pc = 0x203A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203A8Cu;
        // 0x203a90: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203A94u;
        goto label_203a94;
    }
    ctx->pc = 0x203A8Cu;
    SET_GPR_U32(ctx, 31, 0x203A94u);
    ctx->pc = 0x203A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203A8Cu;
    // 0x203a90: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAA0u;
    { ctx->pc = 0x1eaaa0; return; }
    ctx->pc = 0x203A94u;
label_203a94:
    // 0x203a94: 0xc07aa84  jal         func_1EAA10
label_203a98:
    if (ctx->pc == 0x203A98u) {
        ctx->pc = 0x203A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203A94u;
        // 0x203a98: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203A9Cu;
        goto label_203a9c;
    }
    ctx->pc = 0x203A94u;
    SET_GPR_U32(ctx, 31, 0x203A9Cu);
    ctx->pc = 0x203A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203A94u;
    // 0x203a98: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAA10u;
    { ctx->pc = 0x1eaa10; return; }
    ctx->pc = 0x203A9Cu;
label_203a9c:
    // 0x203a9c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x203a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_203aa0:
    // 0x203aa0: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x203aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_203aa4:
    // 0x203aa4: 0x1000005c  b           . + 4 + (0x5C << 2)
label_203aa8:
    if (ctx->pc == 0x203AA8u) {
        ctx->pc = 0x203AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203AA4u;
        // 0x203aa8: 0xae23000c  sw          $v1, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203AACu;
        goto label_203aac;
    }
    ctx->pc = 0x203AA4u;
    {
        const bool branch_taken_0x203aa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203AA4u;
        // 0x203aa8: 0xae23000c  sw          $v1, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203aa4) {
            ctx->pc = 0x203C18u;
            goto label_203c18;
        }
    }
    ctx->pc = 0x203AACu;
label_203aac:
    // 0x203aac: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_203ab0:
    if (ctx->pc == 0x203AB0u) {
        ctx->pc = 0x203AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203AACu;
        // 0x203ab0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203AB4u;
        goto label_203ab4;
    }
    ctx->pc = 0x203AACu;
    {
        const bool branch_taken_0x203aac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x203AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203AACu;
        // 0x203ab0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203aac) {
            ctx->pc = 0x203AE8u;
            goto label_203ae8;
        }
    }
    ctx->pc = 0x203AB4u;
label_203ab4:
    // 0x203ab4: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x203ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_203ab8:
    // 0x203ab8: 0x24060023  addiu       $a2, $zero, 0x23
    ctx->pc = 0x203ab8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_203abc:
    // 0x203abc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x203abcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_203ac0:
    // 0x203ac0: 0xc08104c  jal         func_204130
label_203ac4:
    if (ctx->pc == 0x203AC4u) {
        ctx->pc = 0x203AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203AC0u;
        // 0x203ac4: 0x27a80130  addiu       $t0, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203AC8u;
        goto label_203ac8;
    }
    ctx->pc = 0x203AC0u;
    SET_GPR_U32(ctx, 31, 0x203AC8u);
    ctx->pc = 0x203AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203AC0u;
    // 0x203ac4: 0x27a80130  addiu       $t0, $sp, 0x130 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204130u;
    { ctx->pc = 0x204130; return; }
    ctx->pc = 0x203AC8u;
label_203ac8:
    // 0x203ac8: 0xc07aaa8  jal         func_1EAAA0
label_203acc:
    if (ctx->pc == 0x203ACCu) {
        ctx->pc = 0x203ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203AC8u;
        // 0x203acc: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203AD0u;
        goto label_203ad0;
    }
    ctx->pc = 0x203AC8u;
    SET_GPR_U32(ctx, 31, 0x203AD0u);
    ctx->pc = 0x203ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203AC8u;
    // 0x203acc: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAA0u;
    { ctx->pc = 0x1eaaa0; return; }
    ctx->pc = 0x203AD0u;
label_203ad0:
    // 0x203ad0: 0xc07aa84  jal         func_1EAA10
label_203ad4:
    if (ctx->pc == 0x203AD4u) {
        ctx->pc = 0x203AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203AD0u;
        // 0x203ad4: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203AD8u;
        goto label_203ad8;
    }
    ctx->pc = 0x203AD0u;
    SET_GPR_U32(ctx, 31, 0x203AD8u);
    ctx->pc = 0x203AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203AD0u;
    // 0x203ad4: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAA10u;
    { ctx->pc = 0x1eaa10; return; }
    ctx->pc = 0x203AD8u;
label_203ad8:
    // 0x203ad8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x203ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_203adc:
    // 0x203adc: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x203adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_203ae0:
    // 0x203ae0: 0x1000004d  b           . + 4 + (0x4D << 2)
label_203ae4:
    if (ctx->pc == 0x203AE4u) {
        ctx->pc = 0x203AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203AE0u;
        // 0x203ae4: 0xae23000c  sw          $v1, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203AE8u;
        goto label_203ae8;
    }
    ctx->pc = 0x203AE0u;
    {
        const bool branch_taken_0x203ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203AE0u;
        // 0x203ae4: 0xae23000c  sw          $v1, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203ae0) {
            ctx->pc = 0x203C18u;
            goto label_203c18;
        }
    }
    ctx->pc = 0x203AE8u;
label_203ae8:
    // 0x203ae8: 0x1000004b  b           . + 4 + (0x4B << 2)
label_203aec:
    if (ctx->pc == 0x203AECu) {
        ctx->pc = 0x203AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203AE8u;
        // 0x203aec: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203AF0u;
        goto label_203af0;
    }
    ctx->pc = 0x203AE8u;
    {
        const bool branch_taken_0x203ae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203AE8u;
        // 0x203aec: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203ae8) {
            ctx->pc = 0x203C18u;
            goto label_203c18;
        }
    }
    ctx->pc = 0x203AF0u;
label_203af0:
    // 0x203af0: 0x8cc2048c  lw          $v0, 0x48C($a2)
    ctx->pc = 0x203af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1164)));
label_203af4:
    // 0x203af4: 0x18400013  blez        $v0, . + 4 + (0x13 << 2)
label_203af8:
    if (ctx->pc == 0x203AF8u) {
        ctx->pc = 0x203AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203AF4u;
        // 0x203af8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203AFCu;
        goto label_203afc;
    }
    ctx->pc = 0x203AF4u;
    {
        const bool branch_taken_0x203af4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x203AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203AF4u;
        // 0x203af8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203af4) {
            ctx->pc = 0x203B44u;
            goto label_203b44;
        }
    }
    ctx->pc = 0x203AFCu;
label_203afc:
    // 0x203afc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x203afcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_203b00:
    // 0x203b00: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x203b00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_203b04:
    // 0x203b04: 0x2406001d  addiu       $a2, $zero, 0x1D
    ctx->pc = 0x203b04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
label_203b08:
    // 0x203b08: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x203b08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_203b0c:
    // 0x203b0c: 0xc08104c  jal         func_204130
label_203b10:
    if (ctx->pc == 0x203B10u) {
        ctx->pc = 0x203B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203B0Cu;
        // 0x203b10: 0x27a80230  addiu       $t0, $sp, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203B14u;
        goto label_203b14;
    }
    ctx->pc = 0x203B0Cu;
    SET_GPR_U32(ctx, 31, 0x203B14u);
    ctx->pc = 0x203B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203B0Cu;
    // 0x203b10: 0x27a80230  addiu       $t0, $sp, 0x230 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204130u;
    { ctx->pc = 0x204130; return; }
    ctx->pc = 0x203B14u;
label_203b14:
    // 0x203b14: 0xc07aaa8  jal         func_1EAAA0
label_203b18:
    if (ctx->pc == 0x203B18u) {
        ctx->pc = 0x203B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203B14u;
        // 0x203b18: 0x27a40230  addiu       $a0, $sp, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203B1Cu;
        goto label_203b1c;
    }
    ctx->pc = 0x203B14u;
    SET_GPR_U32(ctx, 31, 0x203B1Cu);
    ctx->pc = 0x203B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203B14u;
    // 0x203b18: 0x27a40230  addiu       $a0, $sp, 0x230 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAA0u;
    { ctx->pc = 0x1eaaa0; return; }
    ctx->pc = 0x203B1Cu;
label_203b1c:
    // 0x203b1c: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x203b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_203b20:
    // 0x203b20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x203b20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_203b24:
    // 0x203b24: 0xc07aa94  jal         func_1EAA50
label_203b28:
    if (ctx->pc == 0x203B28u) {
        ctx->pc = 0x203B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203B24u;
        // 0x203b28: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203B2Cu;
        goto label_203b2c;
    }
    ctx->pc = 0x203B24u;
    SET_GPR_U32(ctx, 31, 0x203B2Cu);
    ctx->pc = 0x203B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203B24u;
    // 0x203b28: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAA50u;
    { ctx->pc = 0x1eaa50; return; }
    ctx->pc = 0x203B2Cu;
label_203b2c:
    // 0x203b2c: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x203b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_203b30:
    // 0x203b30: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x203b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_203b34:
    // 0x203b34: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x203b34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
label_203b38:
    // 0x203b38: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x203b38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_203b3c:
    // 0x203b3c: 0x1000000c  b           . + 4 + (0xC << 2)
label_203b40:
    if (ctx->pc == 0x203B40u) {
        ctx->pc = 0x203B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203B3Cu;
        // 0x203b40: 0xae20000c  sw          $zero, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203B44u;
        goto label_203b44;
    }
    ctx->pc = 0x203B3Cu;
    {
        const bool branch_taken_0x203b3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203B3Cu;
        // 0x203b40: 0xae20000c  sw          $zero, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203b3c) {
            ctx->pc = 0x203B70u;
            goto label_203b70;
        }
    }
    ctx->pc = 0x203B44u;
label_203b44:
    // 0x203b44: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x203b44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_203b48:
    // 0x203b48: 0x24060023  addiu       $a2, $zero, 0x23
    ctx->pc = 0x203b48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_203b4c:
    // 0x203b4c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x203b4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_203b50:
    // 0x203b50: 0xc08104c  jal         func_204130
label_203b54:
    if (ctx->pc == 0x203B54u) {
        ctx->pc = 0x203B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203B50u;
        // 0x203b54: 0x27a80330  addiu       $t0, $sp, 0x330 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 816));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203B58u;
        goto label_203b58;
    }
    ctx->pc = 0x203B50u;
    SET_GPR_U32(ctx, 31, 0x203B58u);
    ctx->pc = 0x203B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203B50u;
    // 0x203b54: 0x27a80330  addiu       $t0, $sp, 0x330 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204130u;
    { ctx->pc = 0x204130; return; }
    ctx->pc = 0x203B58u;
label_203b58:
    // 0x203b58: 0xc07aaa8  jal         func_1EAAA0
label_203b5c:
    if (ctx->pc == 0x203B5Cu) {
        ctx->pc = 0x203B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203B58u;
        // 0x203b5c: 0x27a40330  addiu       $a0, $sp, 0x330 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 816));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203B60u;
        goto label_203b60;
    }
    ctx->pc = 0x203B58u;
    SET_GPR_U32(ctx, 31, 0x203B60u);
    ctx->pc = 0x203B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203B58u;
    // 0x203b5c: 0x27a40330  addiu       $a0, $sp, 0x330 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAA0u;
    { ctx->pc = 0x1eaaa0; return; }
    ctx->pc = 0x203B60u;
label_203b60:
    // 0x203b60: 0xc07aa84  jal         func_1EAA10
label_203b64:
    if (ctx->pc == 0x203B64u) {
        ctx->pc = 0x203B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203B60u;
        // 0x203b64: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203B68u;
        goto label_203b68;
    }
    ctx->pc = 0x203B60u;
    SET_GPR_U32(ctx, 31, 0x203B68u);
    ctx->pc = 0x203B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203B60u;
    // 0x203b64: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAA10u;
    { ctx->pc = 0x1eaa10; return; }
    ctx->pc = 0x203B68u;
label_203b68:
    // 0x203b68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x203b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_203b6c:
    // 0x203b6c: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x203b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_203b70:
    // 0x203b70: 0x10000029  b           . + 4 + (0x29 << 2)
label_203b74:
    if (ctx->pc == 0x203B74u) {
        ctx->pc = 0x203B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203B70u;
        // 0x203b74: 0x24020017  addiu       $v0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203B78u;
        goto label_203b78;
    }
    ctx->pc = 0x203B70u;
    {
        const bool branch_taken_0x203b70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203B70u;
        // 0x203b74: 0x24020017  addiu       $v0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203b70) {
            ctx->pc = 0x203C18u;
            goto label_203c18;
        }
    }
    ctx->pc = 0x203B78u;
label_203b78:
    // 0x203b78: 0x10000027  b           . + 4 + (0x27 << 2)
label_203b7c:
    if (ctx->pc == 0x203B7Cu) {
        ctx->pc = 0x203B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203B78u;
        // 0x203b7c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203B80u;
        goto label_203b80;
    }
    ctx->pc = 0x203B78u;
    {
        const bool branch_taken_0x203b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203B78u;
        // 0x203b7c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203b78) {
            ctx->pc = 0x203C18u;
            goto label_203c18;
        }
    }
    ctx->pc = 0x203B80u;
label_203b80:
    // 0x203b80: 0x10000025  b           . + 4 + (0x25 << 2)
label_203b84:
    if (ctx->pc == 0x203B84u) {
        ctx->pc = 0x203B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203B80u;
        // 0x203b84: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203B88u;
        goto label_203b88;
    }
    ctx->pc = 0x203B80u;
    {
        const bool branch_taken_0x203b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203B80u;
        // 0x203b84: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203b80) {
            ctx->pc = 0x203C18u;
            goto label_203c18;
        }
    }
    ctx->pc = 0x203B88u;
label_203b88:
    // 0x203b88: 0x10000023  b           . + 4 + (0x23 << 2)
label_203b8c:
    if (ctx->pc == 0x203B8Cu) {
        ctx->pc = 0x203B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203B88u;
        // 0x203b8c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203B90u;
        goto label_203b90;
    }
    ctx->pc = 0x203B88u;
    {
        const bool branch_taken_0x203b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203B88u;
        // 0x203b8c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203b88) {
            ctx->pc = 0x203C18u;
            goto label_203c18;
        }
    }
    ctx->pc = 0x203B90u;
label_203b90:
    // 0x203b90: 0x8f8490f0  lw          $a0, -0x6F10($gp)
    ctx->pc = 0x203b90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938864)));
label_203b94:
    // 0x203b94: 0xc083d30  jal         func_20F4C0
label_203b98:
    if (ctx->pc == 0x203B98u) {
        ctx->pc = 0x203B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203B94u;
        // 0x203b98: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203B9Cu;
        goto label_203b9c;
    }
    ctx->pc = 0x203B94u;
    SET_GPR_U32(ctx, 31, 0x203B9Cu);
    ctx->pc = 0x203B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203B94u;
    // 0x203b98: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20F4C0u;
    { ctx->pc = 0x20f4c0; return; }
    ctx->pc = 0x203B9Cu;
label_203b9c:
    // 0x203b9c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_203ba0:
    if (ctx->pc == 0x203BA0u) {
        ctx->pc = 0x203BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203B9Cu;
        // 0x203ba0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203BA4u;
        goto label_203ba4;
    }
    ctx->pc = 0x203B9Cu;
    {
        const bool branch_taken_0x203b9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x203BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203B9Cu;
        // 0x203ba0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203b9c) {
            ctx->pc = 0x203BE8u;
            goto label_203be8;
        }
    }
    ctx->pc = 0x203BA4u;
label_203ba4:
    // 0x203ba4: 0x8f8490f0  lw          $a0, -0x6F10($gp)
    ctx->pc = 0x203ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938864)));
label_203ba8:
    // 0x203ba8: 0xc083cc8  jal         func_20F320
label_203bac:
    if (ctx->pc == 0x203BACu) {
        ctx->pc = 0x203BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203BA8u;
        // 0x203bac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203BB0u;
        goto label_203bb0;
    }
    ctx->pc = 0x203BA8u;
    SET_GPR_U32(ctx, 31, 0x203BB0u);
    ctx->pc = 0x203BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203BA8u;
    // 0x203bac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20F320u;
    { ctx->pc = 0x20f320; return; }
    ctx->pc = 0x203BB0u;
label_203bb0:
    // 0x203bb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x203bb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_203bb4:
    // 0x203bb4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x203bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_203bb8:
    // 0x203bb8: 0x24060023  addiu       $a2, $zero, 0x23
    ctx->pc = 0x203bb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_203bbc:
    // 0x203bbc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x203bbcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_203bc0:
    // 0x203bc0: 0xc08104c  jal         func_204130
label_203bc4:
    if (ctx->pc == 0x203BC4u) {
        ctx->pc = 0x203BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203BC0u;
        // 0x203bc4: 0x27a80430  addiu       $t0, $sp, 0x430 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203BC8u;
        goto label_203bc8;
    }
    ctx->pc = 0x203BC0u;
    SET_GPR_U32(ctx, 31, 0x203BC8u);
    ctx->pc = 0x203BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203BC0u;
    // 0x203bc4: 0x27a80430  addiu       $t0, $sp, 0x430 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204130u;
    { ctx->pc = 0x204130; return; }
    ctx->pc = 0x203BC8u;
label_203bc8:
    // 0x203bc8: 0xc07aaa8  jal         func_1EAAA0
label_203bcc:
    if (ctx->pc == 0x203BCCu) {
        ctx->pc = 0x203BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203BC8u;
        // 0x203bcc: 0x27a40430  addiu       $a0, $sp, 0x430 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203BD0u;
        goto label_203bd0;
    }
    ctx->pc = 0x203BC8u;
    SET_GPR_U32(ctx, 31, 0x203BD0u);
    ctx->pc = 0x203BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203BC8u;
    // 0x203bcc: 0x27a40430  addiu       $a0, $sp, 0x430 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAA0u;
    { ctx->pc = 0x1eaaa0; return; }
    ctx->pc = 0x203BD0u;
label_203bd0:
    // 0x203bd0: 0xc07aa84  jal         func_1EAA10
label_203bd4:
    if (ctx->pc == 0x203BD4u) {
        ctx->pc = 0x203BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203BD0u;
        // 0x203bd4: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203BD8u;
        goto label_203bd8;
    }
    ctx->pc = 0x203BD0u;
    SET_GPR_U32(ctx, 31, 0x203BD8u);
    ctx->pc = 0x203BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203BD0u;
    // 0x203bd4: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAA10u;
    { ctx->pc = 0x1eaa10; return; }
    ctx->pc = 0x203BD8u;
label_203bd8:
    // 0x203bd8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x203bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_203bdc:
    // 0x203bdc: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x203bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_203be0:
    // 0x203be0: 0x1000000c  b           . + 4 + (0xC << 2)
label_203be4:
    if (ctx->pc == 0x203BE4u) {
        ctx->pc = 0x203BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203BE0u;
        // 0x203be4: 0xae220018  sw          $v0, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203BE8u;
        goto label_203be8;
    }
    ctx->pc = 0x203BE0u;
    {
        const bool branch_taken_0x203be0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203BE0u;
        // 0x203be4: 0xae220018  sw          $v0, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203be0) {
            ctx->pc = 0x203C14u;
            goto label_203c14;
        }
    }
    ctx->pc = 0x203BE8u;
label_203be8:
    // 0x203be8: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x203be8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_203bec:
    // 0x203bec: 0x24060023  addiu       $a2, $zero, 0x23
    ctx->pc = 0x203becu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_203bf0:
    // 0x203bf0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x203bf0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_203bf4:
    // 0x203bf4: 0xc08104c  jal         func_204130
label_203bf8:
    if (ctx->pc == 0x203BF8u) {
        ctx->pc = 0x203BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203BF4u;
        // 0x203bf8: 0x27a80530  addiu       $t0, $sp, 0x530 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1328));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203BFCu;
        goto label_203bfc;
    }
    ctx->pc = 0x203BF4u;
    SET_GPR_U32(ctx, 31, 0x203BFCu);
    ctx->pc = 0x203BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203BF4u;
    // 0x203bf8: 0x27a80530  addiu       $t0, $sp, 0x530 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204130u;
    { ctx->pc = 0x204130; return; }
    ctx->pc = 0x203BFCu;
label_203bfc:
    // 0x203bfc: 0xc07aaa8  jal         func_1EAAA0
label_203c00:
    if (ctx->pc == 0x203C00u) {
        ctx->pc = 0x203C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203BFCu;
        // 0x203c00: 0x27a40530  addiu       $a0, $sp, 0x530 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1328));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203C04u;
        goto label_203c04;
    }
    ctx->pc = 0x203BFCu;
    SET_GPR_U32(ctx, 31, 0x203C04u);
    ctx->pc = 0x203C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203BFCu;
    // 0x203c00: 0x27a40530  addiu       $a0, $sp, 0x530 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAA0u;
    { ctx->pc = 0x1eaaa0; return; }
    ctx->pc = 0x203C04u;
label_203c04:
    // 0x203c04: 0xc07aa84  jal         func_1EAA10
label_203c08:
    if (ctx->pc == 0x203C08u) {
        ctx->pc = 0x203C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203C04u;
        // 0x203c08: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203C0Cu;
        goto label_203c0c;
    }
    ctx->pc = 0x203C04u;
    SET_GPR_U32(ctx, 31, 0x203C0Cu);
    ctx->pc = 0x203C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203C04u;
    // 0x203c08: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAA10u;
    { ctx->pc = 0x1eaa10; return; }
    ctx->pc = 0x203C0Cu;
label_203c0c:
    // 0x203c0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x203c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_203c10:
    // 0x203c10: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x203c10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_203c14:
    // 0x203c14: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x203c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_203c18:
    // 0x203c18: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x203c18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_203c1c:
    // 0x203c1c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x203c1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_203c20:
    // 0x203c20: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x203c20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_203c24:
    // 0x203c24: 0x3e00008  jr          $ra
label_203c28:
    if (ctx->pc == 0x203C28u) {
        ctx->pc = 0x203C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203C24u;
        // 0x203c28: 0x27bd0630  addiu       $sp, $sp, 0x630 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1584));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203C2Cu;
        goto label_203c2c;
    }
    ctx->pc = 0x203C24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203C24u;
        // 0x203c28: 0x27bd0630  addiu       $sp, $sp, 0x630 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1584));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203C24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x203C2Cu;
label_203c2c:
    // 0x203c2c: 0x0  nop
    ctx->pc = 0x203c2cu;
    // NOP
label_203c30:
    // 0x203c30: 0x27bdf9e0  addiu       $sp, $sp, -0x620
    ctx->pc = 0x203c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965728));
label_203c34:
    // 0x203c34: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x203c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_203c38:
    // 0x203c38: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x203c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_203c3c:
    // 0x203c3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x203c3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_203c40:
    // 0x203c40: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x203c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_203c44:
    // 0x203c44: 0x10620042  beq         $v1, $v0, . + 4 + (0x42 << 2)
label_203c48:
    if (ctx->pc == 0x203C48u) {
        ctx->pc = 0x203C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203C44u;
        // 0x203c48: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203C4Cu;
        goto label_203c4c;
    }
    ctx->pc = 0x203C44u;
    {
        const bool branch_taken_0x203c44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x203C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203C44u;
        // 0x203c48: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203c44) {
            ctx->pc = 0x203D50u;
            goto label_203d50;
        }
    }
    ctx->pc = 0x203C4Cu;
label_203c4c:
    // 0x203c4c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_203c50:
    if (ctx->pc == 0x203C50u) {
        ctx->pc = 0x203C54u;
        goto label_203c54;
    }
    ctx->pc = 0x203C4Cu;
    {
        const bool branch_taken_0x203c4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x203c4c) {
            ctx->pc = 0x203C5Cu;
            goto label_203c5c;
        }
    }
    ctx->pc = 0x203C54u;
label_203c54:
    // 0x203c54: 0x1000004b  b           . + 4 + (0x4B << 2)
label_203c58:
    if (ctx->pc == 0x203C58u) {
        ctx->pc = 0x203C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203C54u;
        // 0x203c58: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203C5Cu;
        goto label_203c5c;
    }
    ctx->pc = 0x203C54u;
    {
        const bool branch_taken_0x203c54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203C54u;
        // 0x203c58: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203c54) {
            ctx->pc = 0x203D84u;
            goto label_203d84;
        }
    }
    ctx->pc = 0x203C5Cu;
label_203c5c:
    // 0x203c5c: 0x8cc30480  lw          $v1, 0x480($a2)
    ctx->pc = 0x203c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1152)));
label_203c60:
    // 0x203c60: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x203c60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_203c64:
    // 0x203c64: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x203c64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_203c68:
    // 0x203c68: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_203c6c:
    if (ctx->pc == 0x203C6Cu) {
        ctx->pc = 0x203C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203C68u;
        // 0x203c6c: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203C70u;
        goto label_203c70;
    }
    ctx->pc = 0x203C68u;
    {
        const bool branch_taken_0x203c68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x203C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203C68u;
        // 0x203c6c: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203c68) {
            ctx->pc = 0x203CA4u;
            goto label_203ca4;
        }
    }
    ctx->pc = 0x203C70u;
label_203c70:
    // 0x203c70: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x203c70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_203c74:
    // 0x203c74: 0x2406001f  addiu       $a2, $zero, 0x1F
    ctx->pc = 0x203c74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_203c78:
    // 0x203c78: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x203c78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_203c7c:
    // 0x203c7c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x203c7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_203c80:
    // 0x203c80: 0xc08104c  jal         func_204130
label_203c84:
    if (ctx->pc == 0x203C84u) {
        ctx->pc = 0x203C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203C80u;
        // 0x203c84: 0x27a80020  addiu       $t0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203C88u;
        goto label_203c88;
    }
    ctx->pc = 0x203C80u;
    SET_GPR_U32(ctx, 31, 0x203C88u);
    ctx->pc = 0x203C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203C80u;
    // 0x203c84: 0x27a80020  addiu       $t0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204130u;
    { ctx->pc = 0x204130; return; }
    ctx->pc = 0x203C88u;
label_203c88:
    // 0x203c88: 0xc07aaa8  jal         func_1EAAA0
label_203c8c:
    if (ctx->pc == 0x203C8Cu) {
        ctx->pc = 0x203C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203C88u;
        // 0x203c8c: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203C90u;
        goto label_203c90;
    }
    ctx->pc = 0x203C88u;
    SET_GPR_U32(ctx, 31, 0x203C90u);
    ctx->pc = 0x203C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203C88u;
    // 0x203c8c: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAA0u;
    { ctx->pc = 0x1eaaa0; return; }
    ctx->pc = 0x203C90u;
label_203c90:
    // 0x203c90: 0xc07aa84  jal         func_1EAA10
label_203c94:
    if (ctx->pc == 0x203C94u) {
        ctx->pc = 0x203C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203C90u;
        // 0x203c94: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203C98u;
        goto label_203c98;
    }
    ctx->pc = 0x203C90u;
    SET_GPR_U32(ctx, 31, 0x203C98u);
    ctx->pc = 0x203C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203C90u;
    // 0x203c94: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAA10u;
    { ctx->pc = 0x1eaa10; return; }
    ctx->pc = 0x203C98u;
label_203c98:
    // 0x203c98: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x203c98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_203c9c:
    // 0x203c9c: 0x10000044  b           . + 4 + (0x44 << 2)
label_203ca0:
    if (ctx->pc == 0x203CA0u) {
        ctx->pc = 0x203CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203C9Cu;
        // 0x203ca0: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203CA4u;
        goto label_203ca4;
    }
    ctx->pc = 0x203C9Cu;
    {
        const bool branch_taken_0x203c9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203C9Cu;
        // 0x203ca0: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203c9c) {
            ctx->pc = 0x203DB0u;
            goto label_203db0;
        }
    }
    ctx->pc = 0x203CA4u;
label_203ca4:
    // 0x203ca4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x203ca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_203ca8:
    // 0x203ca8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_203cac:
    if (ctx->pc == 0x203CACu) {
        ctx->pc = 0x203CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203CA8u;
        // 0x203cac: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203CB0u;
        goto label_203cb0;
    }
    ctx->pc = 0x203CA8u;
    {
        const bool branch_taken_0x203ca8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x203CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203CA8u;
        // 0x203cac: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203ca8) {
            ctx->pc = 0x203CE0u;
            goto label_203ce0;
        }
    }
    ctx->pc = 0x203CB0u;
label_203cb0:
    // 0x203cb0: 0x24060023  addiu       $a2, $zero, 0x23
    ctx->pc = 0x203cb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_203cb4:
    // 0x203cb4: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x203cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_203cb8:
    // 0x203cb8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x203cb8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_203cbc:
    // 0x203cbc: 0xc08104c  jal         func_204130
label_203cc0:
    if (ctx->pc == 0x203CC0u) {
        ctx->pc = 0x203CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203CBCu;
        // 0x203cc0: 0x27a80120  addiu       $t0, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203CC4u;
        goto label_203cc4;
    }
    ctx->pc = 0x203CBCu;
    SET_GPR_U32(ctx, 31, 0x203CC4u);
    ctx->pc = 0x203CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203CBCu;
    // 0x203cc0: 0x27a80120  addiu       $t0, $sp, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204130u;
    { ctx->pc = 0x204130; return; }
    ctx->pc = 0x203CC4u;
label_203cc4:
    // 0x203cc4: 0xc07aaa8  jal         func_1EAAA0
label_203cc8:
    if (ctx->pc == 0x203CC8u) {
        ctx->pc = 0x203CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203CC4u;
        // 0x203cc8: 0x27a40120  addiu       $a0, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203CCCu;
        goto label_203ccc;
    }
    ctx->pc = 0x203CC4u;
    SET_GPR_U32(ctx, 31, 0x203CCCu);
    ctx->pc = 0x203CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203CC4u;
    // 0x203cc8: 0x27a40120  addiu       $a0, $sp, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAA0u;
    { ctx->pc = 0x1eaaa0; return; }
    ctx->pc = 0x203CCCu;
label_203ccc:
    // 0x203ccc: 0xc07aa84  jal         func_1EAA10
label_203cd0:
    if (ctx->pc == 0x203CD0u) {
        ctx->pc = 0x203CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203CCCu;
        // 0x203cd0: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203CD4u;
        goto label_203cd4;
    }
    ctx->pc = 0x203CCCu;
    SET_GPR_U32(ctx, 31, 0x203CD4u);
    ctx->pc = 0x203CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203CCCu;
    // 0x203cd0: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAA10u;
    { ctx->pc = 0x1eaa10; return; }
    ctx->pc = 0x203CD4u;
label_203cd4:
    // 0x203cd4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x203cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_203cd8:
    // 0x203cd8: 0x10000035  b           . + 4 + (0x35 << 2)
label_203cdc:
    if (ctx->pc == 0x203CDCu) {
        ctx->pc = 0x203CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203CD8u;
        // 0x203cdc: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203CE0u;
        goto label_203ce0;
    }
    ctx->pc = 0x203CD8u;
    {
        const bool branch_taken_0x203cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203CD8u;
        // 0x203cdc: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203cd8) {
            ctx->pc = 0x203DB0u;
            goto label_203db0;
        }
    }
    ctx->pc = 0x203CE0u;
label_203ce0:
    // 0x203ce0: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x203ce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_203ce4:
    // 0x203ce4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_203ce8:
    if (ctx->pc == 0x203CE8u) {
        ctx->pc = 0x203CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203CE4u;
        // 0x203ce8: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203CECu;
        goto label_203cec;
    }
    ctx->pc = 0x203CE4u;
    {
        const bool branch_taken_0x203ce4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x203CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203CE4u;
        // 0x203ce8: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203ce4) {
            ctx->pc = 0x203D20u;
            goto label_203d20;
        }
    }
    ctx->pc = 0x203CECu;
label_203cec:
    // 0x203cec: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x203cecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_203cf0:
    // 0x203cf0: 0x2406001f  addiu       $a2, $zero, 0x1F
    ctx->pc = 0x203cf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_203cf4:
    // 0x203cf4: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x203cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_203cf8:
    // 0x203cf8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x203cf8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_203cfc:
    // 0x203cfc: 0xc08104c  jal         func_204130
label_203d00:
    if (ctx->pc == 0x203D00u) {
        ctx->pc = 0x203D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203CFCu;
        // 0x203d00: 0x27a80220  addiu       $t0, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203D04u;
        goto label_203d04;
    }
    ctx->pc = 0x203CFCu;
    SET_GPR_U32(ctx, 31, 0x203D04u);
    ctx->pc = 0x203D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203CFCu;
    // 0x203d00: 0x27a80220  addiu       $t0, $sp, 0x220 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204130u;
    { ctx->pc = 0x204130; return; }
    ctx->pc = 0x203D04u;
label_203d04:
    // 0x203d04: 0xc07aaa8  jal         func_1EAAA0
label_203d08:
    if (ctx->pc == 0x203D08u) {
        ctx->pc = 0x203D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203D04u;
        // 0x203d08: 0x27a40220  addiu       $a0, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203D0Cu;
        goto label_203d0c;
    }
    ctx->pc = 0x203D04u;
    SET_GPR_U32(ctx, 31, 0x203D0Cu);
    ctx->pc = 0x203D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203D04u;
    // 0x203d08: 0x27a40220  addiu       $a0, $sp, 0x220 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAA0u;
    { ctx->pc = 0x1eaaa0; return; }
    ctx->pc = 0x203D0Cu;
label_203d0c:
    // 0x203d0c: 0xc07aa84  jal         func_1EAA10
label_203d10:
    if (ctx->pc == 0x203D10u) {
        ctx->pc = 0x203D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203D0Cu;
        // 0x203d10: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203D14u;
        goto label_203d14;
    }
    ctx->pc = 0x203D0Cu;
    SET_GPR_U32(ctx, 31, 0x203D14u);
    ctx->pc = 0x203D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203D0Cu;
    // 0x203d10: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAA10u;
    { ctx->pc = 0x1eaa10; return; }
    ctx->pc = 0x203D14u;
label_203d14:
    // 0x203d14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x203d14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_203d18:
    // 0x203d18: 0x10000025  b           . + 4 + (0x25 << 2)
label_203d1c:
    if (ctx->pc == 0x203D1Cu) {
        ctx->pc = 0x203D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203D18u;
        // 0x203d1c: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203D20u;
        goto label_203d20;
    }
    ctx->pc = 0x203D18u;
    {
        const bool branch_taken_0x203d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203D18u;
        // 0x203d1c: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203d18) {
            ctx->pc = 0x203DB0u;
            goto label_203db0;
        }
    }
    ctx->pc = 0x203D20u;
label_203d20:
    // 0x203d20: 0x2406001f  addiu       $a2, $zero, 0x1F
    ctx->pc = 0x203d20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_203d24:
    // 0x203d24: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x203d24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_203d28:
    // 0x203d28: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x203d28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_203d2c:
    // 0x203d2c: 0xc08104c  jal         func_204130
label_203d30:
    if (ctx->pc == 0x203D30u) {
        ctx->pc = 0x203D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203D2Cu;
        // 0x203d30: 0x27a80320  addiu       $t0, $sp, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203D34u;
        goto label_203d34;
    }
    ctx->pc = 0x203D2Cu;
    SET_GPR_U32(ctx, 31, 0x203D34u);
    ctx->pc = 0x203D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203D2Cu;
    // 0x203d30: 0x27a80320  addiu       $t0, $sp, 0x320 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204130u;
    { ctx->pc = 0x204130; return; }
    ctx->pc = 0x203D34u;
label_203d34:
    // 0x203d34: 0xc07aaa8  jal         func_1EAAA0
label_203d38:
    if (ctx->pc == 0x203D38u) {
        ctx->pc = 0x203D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203D34u;
        // 0x203d38: 0x27a40320  addiu       $a0, $sp, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203D3Cu;
        goto label_203d3c;
    }
    ctx->pc = 0x203D34u;
    SET_GPR_U32(ctx, 31, 0x203D3Cu);
    ctx->pc = 0x203D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203D34u;
    // 0x203d38: 0x27a40320  addiu       $a0, $sp, 0x320 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAA0u;
    { ctx->pc = 0x1eaaa0; return; }
    ctx->pc = 0x203D3Cu;
label_203d3c:
    // 0x203d3c: 0xc07aa84  jal         func_1EAA10
label_203d40:
    if (ctx->pc == 0x203D40u) {
        ctx->pc = 0x203D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203D3Cu;
        // 0x203d40: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203D44u;
        goto label_203d44;
    }
    ctx->pc = 0x203D3Cu;
    SET_GPR_U32(ctx, 31, 0x203D44u);
    ctx->pc = 0x203D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203D3Cu;
    // 0x203d40: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAA10u;
    { ctx->pc = 0x1eaa10; return; }
    ctx->pc = 0x203D44u;
label_203d44:
    // 0x203d44: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x203d44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_203d48:
    // 0x203d48: 0x10000019  b           . + 4 + (0x19 << 2)
label_203d4c:
    if (ctx->pc == 0x203D4Cu) {
        ctx->pc = 0x203D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203D48u;
        // 0x203d4c: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203D50u;
        goto label_203d50;
    }
    ctx->pc = 0x203D48u;
    {
        const bool branch_taken_0x203d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203D48u;
        // 0x203d4c: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203d48) {
            ctx->pc = 0x203DB0u;
            goto label_203db0;
        }
    }
    ctx->pc = 0x203D50u;
label_203d50:
    // 0x203d50: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x203d50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_203d54:
    // 0x203d54: 0x24060023  addiu       $a2, $zero, 0x23
    ctx->pc = 0x203d54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_203d58:
    // 0x203d58: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x203d58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_203d5c:
    // 0x203d5c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x203d5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_203d60:
    // 0x203d60: 0xc08104c  jal         func_204130
label_203d64:
    if (ctx->pc == 0x203D64u) {
        ctx->pc = 0x203D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203D60u;
        // 0x203d64: 0x27a80420  addiu       $t0, $sp, 0x420 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203D68u;
        goto label_203d68;
    }
    ctx->pc = 0x203D60u;
    SET_GPR_U32(ctx, 31, 0x203D68u);
    ctx->pc = 0x203D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203D60u;
    // 0x203d64: 0x27a80420  addiu       $t0, $sp, 0x420 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204130u;
    { ctx->pc = 0x204130; return; }
    ctx->pc = 0x203D68u;
label_203d68:
    // 0x203d68: 0xc07aaa8  jal         func_1EAAA0
label_203d6c:
    if (ctx->pc == 0x203D6Cu) {
        ctx->pc = 0x203D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203D68u;
        // 0x203d6c: 0x27a40420  addiu       $a0, $sp, 0x420 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203D70u;
        goto label_203d70;
    }
    ctx->pc = 0x203D68u;
    SET_GPR_U32(ctx, 31, 0x203D70u);
    ctx->pc = 0x203D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203D68u;
    // 0x203d6c: 0x27a40420  addiu       $a0, $sp, 0x420 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAA0u;
    { ctx->pc = 0x1eaaa0; return; }
    ctx->pc = 0x203D70u;
label_203d70:
    // 0x203d70: 0xc07aa84  jal         func_1EAA10
label_203d74:
    if (ctx->pc == 0x203D74u) {
        ctx->pc = 0x203D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203D70u;
        // 0x203d74: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203D78u;
        goto label_203d78;
    }
    ctx->pc = 0x203D70u;
    SET_GPR_U32(ctx, 31, 0x203D78u);
    ctx->pc = 0x203D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203D70u;
    // 0x203d74: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAA10u;
    { ctx->pc = 0x1eaa10; return; }
    ctx->pc = 0x203D78u;
label_203d78:
    // 0x203d78: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x203d78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_203d7c:
    // 0x203d7c: 0x1000000c  b           . + 4 + (0xC << 2)
label_203d80:
    if (ctx->pc == 0x203D80u) {
        ctx->pc = 0x203D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203D7Cu;
        // 0x203d80: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203D84u;
        goto label_203d84;
    }
    ctx->pc = 0x203D7Cu;
    {
        const bool branch_taken_0x203d7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203D7Cu;
        // 0x203d80: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203d7c) {
            ctx->pc = 0x203DB0u;
            goto label_203db0;
        }
    }
    ctx->pc = 0x203D84u;
label_203d84:
    // 0x203d84: 0x24060023  addiu       $a2, $zero, 0x23
    ctx->pc = 0x203d84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_203d88:
    // 0x203d88: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x203d88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_203d8c:
    // 0x203d8c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x203d8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_203d90:
    // 0x203d90: 0xc08104c  jal         func_204130
label_203d94:
    if (ctx->pc == 0x203D94u) {
        ctx->pc = 0x203D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203D90u;
        // 0x203d94: 0x27a80520  addiu       $t0, $sp, 0x520 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1312));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203D98u;
        goto label_203d98;
    }
    ctx->pc = 0x203D90u;
    SET_GPR_U32(ctx, 31, 0x203D98u);
    ctx->pc = 0x203D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203D90u;
    // 0x203d94: 0x27a80520  addiu       $t0, $sp, 0x520 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204130u;
    { ctx->pc = 0x204130; return; }
    ctx->pc = 0x203D98u;
label_203d98:
    // 0x203d98: 0xc07aaa8  jal         func_1EAAA0
label_203d9c:
    if (ctx->pc == 0x203D9Cu) {
        ctx->pc = 0x203D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203D98u;
        // 0x203d9c: 0x27a40520  addiu       $a0, $sp, 0x520 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1312));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203DA0u;
        goto label_203da0;
    }
    ctx->pc = 0x203D98u;
    SET_GPR_U32(ctx, 31, 0x203DA0u);
    ctx->pc = 0x203D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203D98u;
    // 0x203d9c: 0x27a40520  addiu       $a0, $sp, 0x520 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAA0u;
    { ctx->pc = 0x1eaaa0; return; }
    ctx->pc = 0x203DA0u;
label_203da0:
    // 0x203da0: 0xc07aa84  jal         func_1EAA10
label_203da4:
    if (ctx->pc == 0x203DA4u) {
        ctx->pc = 0x203DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203DA0u;
        // 0x203da4: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203DA8u;
        goto label_203da8;
    }
    ctx->pc = 0x203DA0u;
    SET_GPR_U32(ctx, 31, 0x203DA8u);
    ctx->pc = 0x203DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203DA0u;
    // 0x203da4: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAA10u;
    { ctx->pc = 0x1eaa10; return; }
    ctx->pc = 0x203DA8u;
label_203da8:
    // 0x203da8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x203da8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_203dac:
    // 0x203dac: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x203dacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_203db0:
    // 0x203db0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x203db0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_203db4:
    // 0x203db4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x203db4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_203db8:
    // 0x203db8: 0x3e00008  jr          $ra
label_203dbc:
    if (ctx->pc == 0x203DBCu) {
        ctx->pc = 0x203DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203DB8u;
        // 0x203dbc: 0x27bd0620  addiu       $sp, $sp, 0x620 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1568));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203DC0u;
        goto label_203dc0;
    }
    ctx->pc = 0x203DB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203DB8u;
        // 0x203dbc: 0x27bd0620  addiu       $sp, $sp, 0x620 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1568));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203DB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x203DC0u;
label_203dc0:
    // 0x203dc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x203dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_203dc4:
    // 0x203dc4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x203dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    ctx->pc = 0x203dc8u;
    return;
}

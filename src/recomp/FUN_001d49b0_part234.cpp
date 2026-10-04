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

// Function: FUN_001d49b0
// Address: 0x1d49b0 - 0x254d4c
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_001d49b0_part234(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x246600u: goto label_246600;
        case 0x246604u: goto label_246604;
        case 0x246608u: goto label_246608;
        case 0x24660cu: goto label_24660c;
        case 0x246610u: goto label_246610;
        case 0x246614u: goto label_246614;
        case 0x246618u: goto label_246618;
        case 0x24661cu: goto label_24661c;
        case 0x246620u: goto label_246620;
        case 0x246624u: goto label_246624;
        case 0x246628u: goto label_246628;
        case 0x24662cu: goto label_24662c;
        case 0x246630u: goto label_246630;
        case 0x246634u: goto label_246634;
        case 0x246638u: goto label_246638;
        case 0x24663cu: goto label_24663c;
        case 0x246640u: goto label_246640;
        case 0x246644u: goto label_246644;
        case 0x246648u: goto label_246648;
        case 0x24664cu: goto label_24664c;
        case 0x246650u: goto label_246650;
        case 0x246654u: goto label_246654;
        case 0x246658u: goto label_246658;
        case 0x24665cu: goto label_24665c;
        case 0x246660u: goto label_246660;
        case 0x246664u: goto label_246664;
        case 0x246668u: goto label_246668;
        case 0x24666cu: goto label_24666c;
        case 0x246670u: goto label_246670;
        case 0x246674u: goto label_246674;
        case 0x246678u: goto label_246678;
        case 0x24667cu: goto label_24667c;
        case 0x246680u: goto label_246680;
        case 0x246684u: goto label_246684;
        case 0x246688u: goto label_246688;
        case 0x24668cu: goto label_24668c;
        case 0x246690u: goto label_246690;
        case 0x246694u: goto label_246694;
        case 0x246698u: goto label_246698;
        case 0x24669cu: goto label_24669c;
        case 0x2466a0u: goto label_2466a0;
        case 0x2466a4u: goto label_2466a4;
        case 0x2466a8u: goto label_2466a8;
        case 0x2466acu: goto label_2466ac;
        case 0x2466b0u: goto label_2466b0;
        case 0x2466b4u: goto label_2466b4;
        case 0x2466b8u: goto label_2466b8;
        case 0x2466bcu: goto label_2466bc;
        case 0x2466c0u: goto label_2466c0;
        case 0x2466c4u: goto label_2466c4;
        case 0x2466c8u: goto label_2466c8;
        case 0x2466ccu: goto label_2466cc;
        case 0x2466d0u: goto label_2466d0;
        case 0x2466d4u: goto label_2466d4;
        case 0x2466d8u: goto label_2466d8;
        case 0x2466dcu: goto label_2466dc;
        case 0x2466e0u: goto label_2466e0;
        case 0x2466e4u: goto label_2466e4;
        case 0x2466e8u: goto label_2466e8;
        case 0x2466ecu: goto label_2466ec;
        case 0x2466f0u: goto label_2466f0;
        case 0x2466f4u: goto label_2466f4;
        case 0x2466f8u: goto label_2466f8;
        case 0x2466fcu: goto label_2466fc;
        case 0x246700u: goto label_246700;
        case 0x246704u: goto label_246704;
        case 0x246708u: goto label_246708;
        case 0x24670cu: goto label_24670c;
        case 0x246710u: goto label_246710;
        case 0x246714u: goto label_246714;
        case 0x246718u: goto label_246718;
        case 0x24671cu: goto label_24671c;
        case 0x246720u: goto label_246720;
        case 0x246724u: goto label_246724;
        case 0x246728u: goto label_246728;
        case 0x24672cu: goto label_24672c;
        case 0x246730u: goto label_246730;
        case 0x246734u: goto label_246734;
        case 0x246738u: goto label_246738;
        case 0x24673cu: goto label_24673c;
        case 0x246740u: goto label_246740;
        case 0x246744u: goto label_246744;
        case 0x246748u: goto label_246748;
        case 0x24674cu: goto label_24674c;
        case 0x246750u: goto label_246750;
        case 0x246754u: goto label_246754;
        case 0x246758u: goto label_246758;
        case 0x24675cu: goto label_24675c;
        case 0x246760u: goto label_246760;
        case 0x246764u: goto label_246764;
        case 0x246768u: goto label_246768;
        case 0x24676cu: goto label_24676c;
        case 0x246770u: goto label_246770;
        case 0x246774u: goto label_246774;
        case 0x246778u: goto label_246778;
        case 0x24677cu: goto label_24677c;
        case 0x246780u: goto label_246780;
        case 0x246784u: goto label_246784;
        case 0x246788u: goto label_246788;
        case 0x24678cu: goto label_24678c;
        case 0x246790u: goto label_246790;
        case 0x246794u: goto label_246794;
        case 0x246798u: goto label_246798;
        case 0x24679cu: goto label_24679c;
        case 0x2467a0u: goto label_2467a0;
        case 0x2467a4u: goto label_2467a4;
        case 0x2467a8u: goto label_2467a8;
        case 0x2467acu: goto label_2467ac;
        case 0x2467b0u: goto label_2467b0;
        case 0x2467b4u: goto label_2467b4;
        case 0x2467b8u: goto label_2467b8;
        case 0x2467bcu: goto label_2467bc;
        case 0x2467c0u: goto label_2467c0;
        case 0x2467c4u: goto label_2467c4;
        case 0x2467c8u: goto label_2467c8;
        case 0x2467ccu: goto label_2467cc;
        case 0x2467d0u: goto label_2467d0;
        case 0x2467d4u: goto label_2467d4;
        case 0x2467d8u: goto label_2467d8;
        case 0x2467dcu: goto label_2467dc;
        case 0x2467e0u: goto label_2467e0;
        case 0x2467e4u: goto label_2467e4;
        case 0x2467e8u: goto label_2467e8;
        case 0x2467ecu: goto label_2467ec;
        case 0x2467f0u: goto label_2467f0;
        case 0x2467f4u: goto label_2467f4;
        case 0x2467f8u: goto label_2467f8;
        case 0x2467fcu: goto label_2467fc;
        case 0x246800u: goto label_246800;
        case 0x246804u: goto label_246804;
        case 0x246808u: goto label_246808;
        case 0x24680cu: goto label_24680c;
        case 0x246810u: goto label_246810;
        case 0x246814u: goto label_246814;
        case 0x246818u: goto label_246818;
        case 0x24681cu: goto label_24681c;
        case 0x246820u: goto label_246820;
        case 0x246824u: goto label_246824;
        case 0x246828u: goto label_246828;
        case 0x24682cu: goto label_24682c;
        case 0x246830u: goto label_246830;
        case 0x246834u: goto label_246834;
        case 0x246838u: goto label_246838;
        case 0x24683cu: goto label_24683c;
        case 0x246840u: goto label_246840;
        case 0x246844u: goto label_246844;
        case 0x246848u: goto label_246848;
        case 0x24684cu: goto label_24684c;
        case 0x246850u: goto label_246850;
        case 0x246854u: goto label_246854;
        case 0x246858u: goto label_246858;
        case 0x24685cu: goto label_24685c;
        case 0x246860u: goto label_246860;
        case 0x246864u: goto label_246864;
        case 0x246868u: goto label_246868;
        case 0x24686cu: goto label_24686c;
        case 0x246870u: goto label_246870;
        case 0x246874u: goto label_246874;
        case 0x246878u: goto label_246878;
        case 0x24687cu: goto label_24687c;
        case 0x246880u: goto label_246880;
        case 0x246884u: goto label_246884;
        case 0x246888u: goto label_246888;
        case 0x24688cu: goto label_24688c;
        case 0x246890u: goto label_246890;
        case 0x246894u: goto label_246894;
        case 0x246898u: goto label_246898;
        case 0x24689cu: goto label_24689c;
        case 0x2468a0u: goto label_2468a0;
        case 0x2468a4u: goto label_2468a4;
        case 0x2468a8u: goto label_2468a8;
        case 0x2468acu: goto label_2468ac;
        case 0x2468b0u: goto label_2468b0;
        case 0x2468b4u: goto label_2468b4;
        case 0x2468b8u: goto label_2468b8;
        case 0x2468bcu: goto label_2468bc;
        case 0x2468c0u: goto label_2468c0;
        case 0x2468c4u: goto label_2468c4;
        case 0x2468c8u: goto label_2468c8;
        case 0x2468ccu: goto label_2468cc;
        case 0x2468d0u: goto label_2468d0;
        case 0x2468d4u: goto label_2468d4;
        case 0x2468d8u: goto label_2468d8;
        case 0x2468dcu: goto label_2468dc;
        case 0x2468e0u: goto label_2468e0;
        case 0x2468e4u: goto label_2468e4;
        case 0x2468e8u: goto label_2468e8;
        case 0x2468ecu: goto label_2468ec;
        case 0x2468f0u: goto label_2468f0;
        case 0x2468f4u: goto label_2468f4;
        case 0x2468f8u: goto label_2468f8;
        case 0x2468fcu: goto label_2468fc;
        case 0x246900u: goto label_246900;
        case 0x246904u: goto label_246904;
        case 0x246908u: goto label_246908;
        case 0x24690cu: goto label_24690c;
        case 0x246910u: goto label_246910;
        case 0x246914u: goto label_246914;
        case 0x246918u: goto label_246918;
        case 0x24691cu: goto label_24691c;
        case 0x246920u: goto label_246920;
        case 0x246924u: goto label_246924;
        case 0x246928u: goto label_246928;
        case 0x24692cu: goto label_24692c;
        case 0x246930u: goto label_246930;
        case 0x246934u: goto label_246934;
        case 0x246938u: goto label_246938;
        case 0x24693cu: goto label_24693c;
        case 0x246940u: goto label_246940;
        case 0x246944u: goto label_246944;
        case 0x246948u: goto label_246948;
        case 0x24694cu: goto label_24694c;
        case 0x246950u: goto label_246950;
        case 0x246954u: goto label_246954;
        case 0x246958u: goto label_246958;
        case 0x24695cu: goto label_24695c;
        case 0x246960u: goto label_246960;
        case 0x246964u: goto label_246964;
        case 0x246968u: goto label_246968;
        case 0x24696cu: goto label_24696c;
        case 0x246970u: goto label_246970;
        case 0x246974u: goto label_246974;
        case 0x246978u: goto label_246978;
        case 0x24697cu: goto label_24697c;
        case 0x246980u: goto label_246980;
        case 0x246984u: goto label_246984;
        case 0x246988u: goto label_246988;
        case 0x24698cu: goto label_24698c;
        case 0x246990u: goto label_246990;
        case 0x246994u: goto label_246994;
        case 0x246998u: goto label_246998;
        case 0x24699cu: goto label_24699c;
        case 0x2469a0u: goto label_2469a0;
        case 0x2469a4u: goto label_2469a4;
        case 0x2469a8u: goto label_2469a8;
        case 0x2469acu: goto label_2469ac;
        case 0x2469b0u: goto label_2469b0;
        case 0x2469b4u: goto label_2469b4;
        case 0x2469b8u: goto label_2469b8;
        case 0x2469bcu: goto label_2469bc;
        case 0x2469c0u: goto label_2469c0;
        case 0x2469c4u: goto label_2469c4;
        case 0x2469c8u: goto label_2469c8;
        case 0x2469ccu: goto label_2469cc;
        case 0x2469d0u: goto label_2469d0;
        case 0x2469d4u: goto label_2469d4;
        case 0x2469d8u: goto label_2469d8;
        case 0x2469dcu: goto label_2469dc;
        case 0x2469e0u: goto label_2469e0;
        case 0x2469e4u: goto label_2469e4;
        case 0x2469e8u: goto label_2469e8;
        case 0x2469ecu: goto label_2469ec;
        case 0x2469f0u: goto label_2469f0;
        case 0x2469f4u: goto label_2469f4;
        case 0x2469f8u: goto label_2469f8;
        case 0x2469fcu: goto label_2469fc;
        case 0x246a00u: goto label_246a00;
        case 0x246a04u: goto label_246a04;
        case 0x246a08u: goto label_246a08;
        case 0x246a0cu: goto label_246a0c;
        case 0x246a10u: goto label_246a10;
        case 0x246a14u: goto label_246a14;
        case 0x246a18u: goto label_246a18;
        case 0x246a1cu: goto label_246a1c;
        case 0x246a20u: goto label_246a20;
        case 0x246a24u: goto label_246a24;
        case 0x246a28u: goto label_246a28;
        case 0x246a2cu: goto label_246a2c;
        case 0x246a30u: goto label_246a30;
        case 0x246a34u: goto label_246a34;
        case 0x246a38u: goto label_246a38;
        case 0x246a3cu: goto label_246a3c;
        case 0x246a40u: goto label_246a40;
        case 0x246a44u: goto label_246a44;
        case 0x246a48u: goto label_246a48;
        case 0x246a4cu: goto label_246a4c;
        case 0x246a50u: goto label_246a50;
        case 0x246a54u: goto label_246a54;
        case 0x246a58u: goto label_246a58;
        case 0x246a5cu: goto label_246a5c;
        case 0x246a60u: goto label_246a60;
        case 0x246a64u: goto label_246a64;
        case 0x246a68u: goto label_246a68;
        case 0x246a6cu: goto label_246a6c;
        case 0x246a70u: goto label_246a70;
        case 0x246a74u: goto label_246a74;
        case 0x246a78u: goto label_246a78;
        case 0x246a7cu: goto label_246a7c;
        case 0x246a80u: goto label_246a80;
        case 0x246a84u: goto label_246a84;
        case 0x246a88u: goto label_246a88;
        case 0x246a8cu: goto label_246a8c;
        case 0x246a90u: goto label_246a90;
        case 0x246a94u: goto label_246a94;
        case 0x246a98u: goto label_246a98;
        case 0x246a9cu: goto label_246a9c;
        case 0x246aa0u: goto label_246aa0;
        case 0x246aa4u: goto label_246aa4;
        case 0x246aa8u: goto label_246aa8;
        case 0x246aacu: goto label_246aac;
        case 0x246ab0u: goto label_246ab0;
        case 0x246ab4u: goto label_246ab4;
        case 0x246ab8u: goto label_246ab8;
        case 0x246abcu: goto label_246abc;
        case 0x246ac0u: goto label_246ac0;
        case 0x246ac4u: goto label_246ac4;
        case 0x246ac8u: goto label_246ac8;
        case 0x246accu: goto label_246acc;
        case 0x246ad0u: goto label_246ad0;
        case 0x246ad4u: goto label_246ad4;
        case 0x246ad8u: goto label_246ad8;
        case 0x246adcu: goto label_246adc;
        case 0x246ae0u: goto label_246ae0;
        case 0x246ae4u: goto label_246ae4;
        case 0x246ae8u: goto label_246ae8;
        case 0x246aecu: goto label_246aec;
        case 0x246af0u: goto label_246af0;
        case 0x246af4u: goto label_246af4;
        case 0x246af8u: goto label_246af8;
        case 0x246afcu: goto label_246afc;
        case 0x246b00u: goto label_246b00;
        case 0x246b04u: goto label_246b04;
        case 0x246b08u: goto label_246b08;
        case 0x246b0cu: goto label_246b0c;
        case 0x246b10u: goto label_246b10;
        case 0x246b14u: goto label_246b14;
        case 0x246b18u: goto label_246b18;
        case 0x246b1cu: goto label_246b1c;
        case 0x246b20u: goto label_246b20;
        case 0x246b24u: goto label_246b24;
        case 0x246b28u: goto label_246b28;
        case 0x246b2cu: goto label_246b2c;
        case 0x246b30u: goto label_246b30;
        case 0x246b34u: goto label_246b34;
        case 0x246b38u: goto label_246b38;
        case 0x246b3cu: goto label_246b3c;
        case 0x246b40u: goto label_246b40;
        case 0x246b44u: goto label_246b44;
        case 0x246b48u: goto label_246b48;
        case 0x246b4cu: goto label_246b4c;
        case 0x246b50u: goto label_246b50;
        case 0x246b54u: goto label_246b54;
        case 0x246b58u: goto label_246b58;
        case 0x246b5cu: goto label_246b5c;
        case 0x246b60u: goto label_246b60;
        case 0x246b64u: goto label_246b64;
        case 0x246b68u: goto label_246b68;
        case 0x246b6cu: goto label_246b6c;
        case 0x246b70u: goto label_246b70;
        case 0x246b74u: goto label_246b74;
        case 0x246b78u: goto label_246b78;
        case 0x246b7cu: goto label_246b7c;
        case 0x246b80u: goto label_246b80;
        case 0x246b84u: goto label_246b84;
        case 0x246b88u: goto label_246b88;
        case 0x246b8cu: goto label_246b8c;
        case 0x246b90u: goto label_246b90;
        case 0x246b94u: goto label_246b94;
        case 0x246b98u: goto label_246b98;
        case 0x246b9cu: goto label_246b9c;
        case 0x246ba0u: goto label_246ba0;
        case 0x246ba4u: goto label_246ba4;
        case 0x246ba8u: goto label_246ba8;
        case 0x246bacu: goto label_246bac;
        case 0x246bb0u: goto label_246bb0;
        case 0x246bb4u: goto label_246bb4;
        case 0x246bb8u: goto label_246bb8;
        case 0x246bbcu: goto label_246bbc;
        case 0x246bc0u: goto label_246bc0;
        case 0x246bc4u: goto label_246bc4;
        case 0x246bc8u: goto label_246bc8;
        case 0x246bccu: goto label_246bcc;
        case 0x246bd0u: goto label_246bd0;
        case 0x246bd4u: goto label_246bd4;
        case 0x246bd8u: goto label_246bd8;
        case 0x246bdcu: goto label_246bdc;
        case 0x246be0u: goto label_246be0;
        case 0x246be4u: goto label_246be4;
        case 0x246be8u: goto label_246be8;
        case 0x246becu: goto label_246bec;
        case 0x246bf0u: goto label_246bf0;
        case 0x246bf4u: goto label_246bf4;
        case 0x246bf8u: goto label_246bf8;
        case 0x246bfcu: goto label_246bfc;
        case 0x246c00u: goto label_246c00;
        case 0x246c04u: goto label_246c04;
        case 0x246c08u: goto label_246c08;
        case 0x246c0cu: goto label_246c0c;
        case 0x246c10u: goto label_246c10;
        case 0x246c14u: goto label_246c14;
        case 0x246c18u: goto label_246c18;
        case 0x246c1cu: goto label_246c1c;
        case 0x246c20u: goto label_246c20;
        case 0x246c24u: goto label_246c24;
        case 0x246c28u: goto label_246c28;
        case 0x246c2cu: goto label_246c2c;
        case 0x246c30u: goto label_246c30;
        case 0x246c34u: goto label_246c34;
        case 0x246c38u: goto label_246c38;
        case 0x246c3cu: goto label_246c3c;
        case 0x246c40u: goto label_246c40;
        case 0x246c44u: goto label_246c44;
        case 0x246c48u: goto label_246c48;
        case 0x246c4cu: goto label_246c4c;
        case 0x246c50u: goto label_246c50;
        case 0x246c54u: goto label_246c54;
        case 0x246c58u: goto label_246c58;
        case 0x246c5cu: goto label_246c5c;
        case 0x246c60u: goto label_246c60;
        case 0x246c64u: goto label_246c64;
        case 0x246c68u: goto label_246c68;
        case 0x246c6cu: goto label_246c6c;
        case 0x246c70u: goto label_246c70;
        case 0x246c74u: goto label_246c74;
        case 0x246c78u: goto label_246c78;
        case 0x246c7cu: goto label_246c7c;
        case 0x246c80u: goto label_246c80;
        case 0x246c84u: goto label_246c84;
        case 0x246c88u: goto label_246c88;
        case 0x246c8cu: goto label_246c8c;
        case 0x246c90u: goto label_246c90;
        case 0x246c94u: goto label_246c94;
        case 0x246c98u: goto label_246c98;
        case 0x246c9cu: goto label_246c9c;
        case 0x246ca0u: goto label_246ca0;
        case 0x246ca4u: goto label_246ca4;
        case 0x246ca8u: goto label_246ca8;
        case 0x246cacu: goto label_246cac;
        case 0x246cb0u: goto label_246cb0;
        case 0x246cb4u: goto label_246cb4;
        case 0x246cb8u: goto label_246cb8;
        case 0x246cbcu: goto label_246cbc;
        case 0x246cc0u: goto label_246cc0;
        case 0x246cc4u: goto label_246cc4;
        case 0x246cc8u: goto label_246cc8;
        case 0x246cccu: goto label_246ccc;
        case 0x246cd0u: goto label_246cd0;
        case 0x246cd4u: goto label_246cd4;
        case 0x246cd8u: goto label_246cd8;
        case 0x246cdcu: goto label_246cdc;
        case 0x246ce0u: goto label_246ce0;
        case 0x246ce4u: goto label_246ce4;
        case 0x246ce8u: goto label_246ce8;
        case 0x246cecu: goto label_246cec;
        case 0x246cf0u: goto label_246cf0;
        case 0x246cf4u: goto label_246cf4;
        case 0x246cf8u: goto label_246cf8;
        case 0x246cfcu: goto label_246cfc;
        case 0x246d00u: goto label_246d00;
        case 0x246d04u: goto label_246d04;
        case 0x246d08u: goto label_246d08;
        case 0x246d0cu: goto label_246d0c;
        case 0x246d10u: goto label_246d10;
        case 0x246d14u: goto label_246d14;
        case 0x246d18u: goto label_246d18;
        case 0x246d1cu: goto label_246d1c;
        case 0x246d20u: goto label_246d20;
        case 0x246d24u: goto label_246d24;
        case 0x246d28u: goto label_246d28;
        case 0x246d2cu: goto label_246d2c;
        case 0x246d30u: goto label_246d30;
        case 0x246d34u: goto label_246d34;
        case 0x246d38u: goto label_246d38;
        case 0x246d3cu: goto label_246d3c;
        case 0x246d40u: goto label_246d40;
        case 0x246d44u: goto label_246d44;
        case 0x246d48u: goto label_246d48;
        case 0x246d4cu: goto label_246d4c;
        case 0x246d50u: goto label_246d50;
        case 0x246d54u: goto label_246d54;
        case 0x246d58u: goto label_246d58;
        case 0x246d5cu: goto label_246d5c;
        case 0x246d60u: goto label_246d60;
        case 0x246d64u: goto label_246d64;
        case 0x246d68u: goto label_246d68;
        case 0x246d6cu: goto label_246d6c;
        case 0x246d70u: goto label_246d70;
        case 0x246d74u: goto label_246d74;
        case 0x246d78u: goto label_246d78;
        case 0x246d7cu: goto label_246d7c;
        case 0x246d80u: goto label_246d80;
        case 0x246d84u: goto label_246d84;
        case 0x246d88u: goto label_246d88;
        case 0x246d8cu: goto label_246d8c;
        case 0x246d90u: goto label_246d90;
        case 0x246d94u: goto label_246d94;
        case 0x246d98u: goto label_246d98;
        case 0x246d9cu: goto label_246d9c;
        case 0x246da0u: goto label_246da0;
        case 0x246da4u: goto label_246da4;
        case 0x246da8u: goto label_246da8;
        case 0x246dacu: goto label_246dac;
        case 0x246db0u: goto label_246db0;
        case 0x246db4u: goto label_246db4;
        case 0x246db8u: goto label_246db8;
        case 0x246dbcu: goto label_246dbc;
        case 0x246dc0u: goto label_246dc0;
        case 0x246dc4u: goto label_246dc4;
        case 0x246dc8u: goto label_246dc8;
        case 0x246dccu: goto label_246dcc;
        default: return;
    }

label_246600:
    // 0x246600: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x246600u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_246604:
    // 0x246604: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x246604u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_246608:
    // 0x246608: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x246608u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_24660c:
    // 0x24660c: 0x42c3c  dsll32      $a1, $a0, 16
    ctx->pc = 0x24660cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 16));
label_246610:
    // 0x246610: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x246610u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_246614:
    // 0x246614: 0x18a00286  blez        $a1, . + 4 + (0x286 << 2)
label_246618:
    if (ctx->pc == 0x246618u) {
        ctx->pc = 0x24661Cu;
        goto label_24661c;
    }
    ctx->pc = 0x246614u;
    {
        const bool branch_taken_0x246614 = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x246614) {
            ctx->pc = 0x247030u;
            { ctx->pc = 0x247030; return; }
        }
    }
    ctx->pc = 0x24661Cu;
label_24661c:
    // 0x24661c: 0x8464000e  lh          $a0, 0xE($v1)
    ctx->pc = 0x24661cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
label_246620:
    // 0x246620: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x246620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_246624:
    // 0x246624: 0x28810064  slti        $at, $a0, 0x64
    ctx->pc = 0x246624u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)100) ? 1 : 0);
label_246628:
    // 0x246628: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_24662c:
    if (ctx->pc == 0x24662Cu) {
        ctx->pc = 0x246630u;
        goto label_246630;
    }
    ctx->pc = 0x246628u;
    {
        const bool branch_taken_0x246628 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x246628) {
            ctx->pc = 0x246638u;
            goto label_246638;
        }
    }
    ctx->pc = 0x246630u;
label_246630:
    // 0x246630: 0x10000003  b           . + 4 + (0x3 << 2)
label_246634:
    if (ctx->pc == 0x246634u) {
        ctx->pc = 0x246634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246630u;
        // 0x246634: 0xa464000e  sh          $a0, 0xE($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246638u;
        goto label_246638;
    }
    ctx->pc = 0x246630u;
    {
        const bool branch_taken_0x246630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246630u;
        // 0x246634: 0xa464000e  sh          $a0, 0xE($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246630) {
            ctx->pc = 0x246640u;
            goto label_246640;
        }
    }
    ctx->pc = 0x246638u;
label_246638:
    // 0x246638: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x246638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_24663c:
    // 0x24663c: 0xa464000e  sh          $a0, 0xE($v1)
    ctx->pc = 0x24663cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 4));
label_246640:
    // 0x246640: 0x1000027b  b           . + 4 + (0x27B << 2)
label_246644:
    if (ctx->pc == 0x246644u) {
        ctx->pc = 0x246644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246640u;
        // 0x246644: 0xa0600006  sb          $zero, 0x6($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 6), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246648u;
        goto label_246648;
    }
    ctx->pc = 0x246640u;
    {
        const bool branch_taken_0x246640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246640u;
        // 0x246644: 0xa0600006  sb          $zero, 0x6($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 6), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246640) {
            ctx->pc = 0x247030u;
            { ctx->pc = 0x247030; return; }
        }
    }
    ctx->pc = 0x246648u;
label_246648:
    // 0x246648: 0x10a40004  beq         $a1, $a0, . + 4 + (0x4 << 2)
label_24664c:
    if (ctx->pc == 0x24664Cu) {
        ctx->pc = 0x246650u;
        goto label_246650;
    }
    ctx->pc = 0x246648u;
    {
        const bool branch_taken_0x246648 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x246648) {
            ctx->pc = 0x24665Cu;
            goto label_24665c;
        }
    }
    ctx->pc = 0x246650u;
label_246650:
    // 0x246650: 0x240400ed  addiu       $a0, $zero, 0xED
    ctx->pc = 0x246650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 237));
label_246654:
    // 0x246654: 0x14a4003d  bne         $a1, $a0, . + 4 + (0x3D << 2)
label_246658:
    if (ctx->pc == 0x246658u) {
        ctx->pc = 0x246658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246654u;
        // 0x246658: 0x240400a3  addiu       $a0, $zero, 0xA3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 163));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24665Cu;
        goto label_24665c;
    }
    ctx->pc = 0x246654u;
    {
        const bool branch_taken_0x246654 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x246658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246654u;
        // 0x246658: 0x240400a3  addiu       $a0, $zero, 0xA3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 163));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246654) {
            ctx->pc = 0x24674Cu;
            goto label_24674c;
        }
    }
    ctx->pc = 0x24665Cu;
label_24665c:
    // 0x24665c: 0x30e40400  andi        $a0, $a3, 0x400
    ctx->pc = 0x24665cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1024);
label_246660:
    // 0x246660: 0x14800273  bnez        $a0, . + 4 + (0x273 << 2)
label_246664:
    if (ctx->pc == 0x246664u) {
        ctx->pc = 0x246668u;
        goto label_246668;
    }
    ctx->pc = 0x246660u;
    {
        const bool branch_taken_0x246660 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x246660) {
            ctx->pc = 0x247030u;
            { ctx->pc = 0x247030; return; }
        }
    }
    ctx->pc = 0x246668u;
label_246668:
    // 0x246668: 0x8c640014  lw          $a0, 0x14($v1)
    ctx->pc = 0x246668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_24666c:
    // 0x24666c: 0x34840400  ori         $a0, $a0, 0x400
    ctx->pc = 0x24666cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1024);
label_246670:
    // 0x246670: 0xac640014  sw          $a0, 0x14($v1)
    ctx->pc = 0x246670u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 4));
label_246674:
    // 0x246674: 0x8465000c  lh          $a1, 0xC($v1)
    ctx->pc = 0x246674u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
label_246678:
    // 0x246678: 0x28a10003  slti        $at, $a1, 0x3
    ctx->pc = 0x246678u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
label_24667c:
    // 0x24667c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_246680:
    if (ctx->pc == 0x246680u) {
        ctx->pc = 0x246680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24667Cu;
        // 0x246680: 0x24a4fffe  addiu       $a0, $a1, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246684u;
        goto label_246684;
    }
    ctx->pc = 0x24667Cu;
    {
        const bool branch_taken_0x24667c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x246680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24667Cu;
        // 0x246680: 0x24a4fffe  addiu       $a0, $a1, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24667c) {
            ctx->pc = 0x24668Cu;
            goto label_24668c;
        }
    }
    ctx->pc = 0x246684u;
label_246684:
    // 0x246684: 0x10000004  b           . + 4 + (0x4 << 2)
label_246688:
    if (ctx->pc == 0x246688u) {
        ctx->pc = 0x246688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246684u;
        // 0x246688: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24668Cu;
        goto label_24668c;
    }
    ctx->pc = 0x246684u;
    {
        const bool branch_taken_0x246684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246684u;
        // 0x246688: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246684) {
            ctx->pc = 0x246698u;
            goto label_246698;
        }
    }
    ctx->pc = 0x24668Cu;
label_24668c:
    // 0x24668c: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x24668cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_246690:
    // 0x246690: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x246690u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
label_246694:
    // 0x246694: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x246694u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_246698:
    // 0x246698: 0x4343c  dsll32      $a2, $a0, 16
    ctx->pc = 0x246698u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 16));
label_24669c:
    // 0x24669c: 0x3c01002d  lui         $at, 0x2D
    ctx->pc = 0x24669cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)45 << 16));
label_2466a0:
    // 0x2466a0: 0x9024eafa  lbu         $a0, -0x1506($at)
    ctx->pc = 0x2466a0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294961914)));
label_2466a4:
    // 0x2466a4: 0x52c3c  dsll32      $a1, $a1, 16
    ctx->pc = 0x2466a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
label_2466a8:
    // 0x2466a8: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x2466a8u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_2466ac:
    // 0x2466ac: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x2466acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
label_2466b0:
    // 0x2466b0: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x2466b0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_2466b4:
    // 0x2466b4: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x2466b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_2466b8:
    // 0x2466b8: 0x2881001a  slti        $at, $a0, 0x1A
    ctx->pc = 0x2466b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)26) ? 1 : 0);
label_2466bc:
    // 0x2466bc: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_2466c0:
    if (ctx->pc == 0x2466C0u) {
        ctx->pc = 0x2466C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2466BCu;
        // 0x2466c0: 0x6343f  dsra32      $a2, $a2, 16 (Delay Slot)
        SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2466C4u;
        goto label_2466c4;
    }
    ctx->pc = 0x2466BCu;
    {
        const bool branch_taken_0x2466bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2466C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2466BCu;
        // 0x2466c0: 0x6343f  dsra32      $a2, $a2, 16 (Delay Slot)
        SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2466bc) {
            ctx->pc = 0x2466CCu;
            goto label_2466cc;
        }
    }
    ctx->pc = 0x2466C4u;
label_2466c4:
    // 0x2466c4: 0x10000003  b           . + 4 + (0x3 << 2)
label_2466c8:
    if (ctx->pc == 0x2466C8u) {
        ctx->pc = 0x2466C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2466C4u;
        // 0x2466c8: 0xa464000c  sh          $a0, 0xC($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2466CCu;
        goto label_2466cc;
    }
    ctx->pc = 0x2466C4u;
    {
        const bool branch_taken_0x2466c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2466C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2466C4u;
        // 0x2466c8: 0xa464000c  sh          $a0, 0xC($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2466c4) {
            ctx->pc = 0x2466D4u;
            goto label_2466d4;
        }
    }
    ctx->pc = 0x2466CCu;
label_2466cc:
    // 0x2466cc: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x2466ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_2466d0:
    // 0x2466d0: 0xa464000c  sh          $a0, 0xC($v1)
    ctx->pc = 0x2466d0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 4));
label_2466d4:
    // 0x2466d4: 0x8464000c  lh          $a0, 0xC($v1)
    ctx->pc = 0x2466d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
label_2466d8:
    // 0x2466d8: 0x28810003  slti        $at, $a0, 0x3
    ctx->pc = 0x2466d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
label_2466dc:
    // 0x2466dc: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_2466e0:
    if (ctx->pc == 0x2466E0u) {
        ctx->pc = 0x2466E4u;
        goto label_2466e4;
    }
    ctx->pc = 0x2466DCu;
    {
        const bool branch_taken_0x2466dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2466dc) {
            ctx->pc = 0x2466ECu;
            goto label_2466ec;
        }
    }
    ctx->pc = 0x2466E4u;
label_2466e4:
    // 0x2466e4: 0x10000005  b           . + 4 + (0x5 << 2)
label_2466e8:
    if (ctx->pc == 0x2466E8u) {
        ctx->pc = 0x2466E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2466E4u;
        // 0x2466e8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2466ECu;
        goto label_2466ec;
    }
    ctx->pc = 0x2466E4u;
    {
        const bool branch_taken_0x2466e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2466E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2466E4u;
        // 0x2466e8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2466e4) {
            ctx->pc = 0x2466FCu;
            goto label_2466fc;
        }
    }
    ctx->pc = 0x2466ECu;
label_2466ec:
    // 0x2466ec: 0x2484fffe  addiu       $a0, $a0, -0x2
    ctx->pc = 0x2466ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967294));
label_2466f0:
    // 0x2466f0: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x2466f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_2466f4:
    // 0x2466f4: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x2466f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
label_2466f8:
    // 0x2466f8: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x2466f8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_2466fc:
    // 0x2466fc: 0x42c3c  dsll32      $a1, $a0, 16
    ctx->pc = 0x2466fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 16));
label_246700:
    // 0x246700: 0x6243c  dsll32      $a0, $a2, 16
    ctx->pc = 0x246700u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 16));
label_246704:
    // 0x246704: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x246704u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_246708:
    // 0x246708: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x246708u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_24670c:
    // 0x24670c: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x24670cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_246710:
    // 0x246710: 0x42c3c  dsll32      $a1, $a0, 16
    ctx->pc = 0x246710u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 16));
label_246714:
    // 0x246714: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x246714u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_246718:
    // 0x246718: 0x18a00245  blez        $a1, . + 4 + (0x245 << 2)
label_24671c:
    if (ctx->pc == 0x24671Cu) {
        ctx->pc = 0x246720u;
        goto label_246720;
    }
    ctx->pc = 0x246718u;
    {
        const bool branch_taken_0x246718 = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x246718) {
            ctx->pc = 0x247030u;
            { ctx->pc = 0x247030; return; }
        }
    }
    ctx->pc = 0x246720u;
label_246720:
    // 0x246720: 0x8464000e  lh          $a0, 0xE($v1)
    ctx->pc = 0x246720u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
label_246724:
    // 0x246724: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x246724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_246728:
    // 0x246728: 0x28810064  slti        $at, $a0, 0x64
    ctx->pc = 0x246728u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)100) ? 1 : 0);
label_24672c:
    // 0x24672c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_246730:
    if (ctx->pc == 0x246730u) {
        ctx->pc = 0x246734u;
        goto label_246734;
    }
    ctx->pc = 0x24672Cu;
    {
        const bool branch_taken_0x24672c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x24672c) {
            ctx->pc = 0x24673Cu;
            goto label_24673c;
        }
    }
    ctx->pc = 0x246734u;
label_246734:
    // 0x246734: 0x10000003  b           . + 4 + (0x3 << 2)
label_246738:
    if (ctx->pc == 0x246738u) {
        ctx->pc = 0x246738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246734u;
        // 0x246738: 0xa464000e  sh          $a0, 0xE($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24673Cu;
        goto label_24673c;
    }
    ctx->pc = 0x246734u;
    {
        const bool branch_taken_0x246734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246734u;
        // 0x246738: 0xa464000e  sh          $a0, 0xE($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246734) {
            ctx->pc = 0x246744u;
            goto label_246744;
        }
    }
    ctx->pc = 0x24673Cu;
label_24673c:
    // 0x24673c: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x24673cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_246740:
    // 0x246740: 0xa464000e  sh          $a0, 0xE($v1)
    ctx->pc = 0x246740u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 4));
label_246744:
    // 0x246744: 0x1000023a  b           . + 4 + (0x23A << 2)
label_246748:
    if (ctx->pc == 0x246748u) {
        ctx->pc = 0x246748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246744u;
        // 0x246748: 0xa0600006  sb          $zero, 0x6($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 6), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24674Cu;
        goto label_24674c;
    }
    ctx->pc = 0x246744u;
    {
        const bool branch_taken_0x246744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246744u;
        // 0x246748: 0xa0600006  sb          $zero, 0x6($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 6), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246744) {
            ctx->pc = 0x247030u;
            { ctx->pc = 0x247030; return; }
        }
    }
    ctx->pc = 0x24674Cu;
label_24674c:
    // 0x24674c: 0x10a40004  beq         $a1, $a0, . + 4 + (0x4 << 2)
label_246750:
    if (ctx->pc == 0x246750u) {
        ctx->pc = 0x246754u;
        goto label_246754;
    }
    ctx->pc = 0x24674Cu;
    {
        const bool branch_taken_0x24674c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x24674c) {
            ctx->pc = 0x246760u;
            goto label_246760;
        }
    }
    ctx->pc = 0x246754u;
label_246754:
    // 0x246754: 0x240400ee  addiu       $a0, $zero, 0xEE
    ctx->pc = 0x246754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 238));
label_246758:
    // 0x246758: 0x14a4003d  bne         $a1, $a0, . + 4 + (0x3D << 2)
label_24675c:
    if (ctx->pc == 0x24675Cu) {
        ctx->pc = 0x24675Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246758u;
        // 0x24675c: 0x240400a4  addiu       $a0, $zero, 0xA4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 164));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246760u;
        goto label_246760;
    }
    ctx->pc = 0x246758u;
    {
        const bool branch_taken_0x246758 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x24675Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246758u;
        // 0x24675c: 0x240400a4  addiu       $a0, $zero, 0xA4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 164));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246758) {
            ctx->pc = 0x246850u;
            goto label_246850;
        }
    }
    ctx->pc = 0x246760u;
label_246760:
    // 0x246760: 0x30e41000  andi        $a0, $a3, 0x1000
    ctx->pc = 0x246760u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4096);
label_246764:
    // 0x246764: 0x14800232  bnez        $a0, . + 4 + (0x232 << 2)
label_246768:
    if (ctx->pc == 0x246768u) {
        ctx->pc = 0x24676Cu;
        goto label_24676c;
    }
    ctx->pc = 0x246764u;
    {
        const bool branch_taken_0x246764 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x246764) {
            ctx->pc = 0x247030u;
            { ctx->pc = 0x247030; return; }
        }
    }
    ctx->pc = 0x24676Cu;
label_24676c:
    // 0x24676c: 0x8c640014  lw          $a0, 0x14($v1)
    ctx->pc = 0x24676cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_246770:
    // 0x246770: 0x34841000  ori         $a0, $a0, 0x1000
    ctx->pc = 0x246770u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4096);
label_246774:
    // 0x246774: 0xac640014  sw          $a0, 0x14($v1)
    ctx->pc = 0x246774u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 4));
label_246778:
    // 0x246778: 0x8465000c  lh          $a1, 0xC($v1)
    ctx->pc = 0x246778u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
label_24677c:
    // 0x24677c: 0x28a10003  slti        $at, $a1, 0x3
    ctx->pc = 0x24677cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
label_246780:
    // 0x246780: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_246784:
    if (ctx->pc == 0x246784u) {
        ctx->pc = 0x246784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246780u;
        // 0x246784: 0x24a4fffe  addiu       $a0, $a1, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246788u;
        goto label_246788;
    }
    ctx->pc = 0x246780u;
    {
        const bool branch_taken_0x246780 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x246784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246780u;
        // 0x246784: 0x24a4fffe  addiu       $a0, $a1, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246780) {
            ctx->pc = 0x246790u;
            goto label_246790;
        }
    }
    ctx->pc = 0x246788u;
label_246788:
    // 0x246788: 0x10000004  b           . + 4 + (0x4 << 2)
label_24678c:
    if (ctx->pc == 0x24678Cu) {
        ctx->pc = 0x24678Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246788u;
        // 0x24678c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246790u;
        goto label_246790;
    }
    ctx->pc = 0x246788u;
    {
        const bool branch_taken_0x246788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24678Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246788u;
        // 0x24678c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246788) {
            ctx->pc = 0x24679Cu;
            goto label_24679c;
        }
    }
    ctx->pc = 0x246790u;
label_246790:
    // 0x246790: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x246790u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_246794:
    // 0x246794: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x246794u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
label_246798:
    // 0x246798: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x246798u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_24679c:
    // 0x24679c: 0x4343c  dsll32      $a2, $a0, 16
    ctx->pc = 0x24679cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 16));
label_2467a0:
    // 0x2467a0: 0x3c01002d  lui         $at, 0x2D
    ctx->pc = 0x2467a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)45 << 16));
label_2467a4:
    // 0x2467a4: 0x9024eafc  lbu         $a0, -0x1504($at)
    ctx->pc = 0x2467a4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294961916)));
label_2467a8:
    // 0x2467a8: 0x52c3c  dsll32      $a1, $a1, 16
    ctx->pc = 0x2467a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
label_2467ac:
    // 0x2467ac: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x2467acu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_2467b0:
    // 0x2467b0: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x2467b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
label_2467b4:
    // 0x2467b4: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x2467b4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_2467b8:
    // 0x2467b8: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x2467b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_2467bc:
    // 0x2467bc: 0x2881001a  slti        $at, $a0, 0x1A
    ctx->pc = 0x2467bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)26) ? 1 : 0);
label_2467c0:
    // 0x2467c0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_2467c4:
    if (ctx->pc == 0x2467C4u) {
        ctx->pc = 0x2467C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2467C0u;
        // 0x2467c4: 0x6343f  dsra32      $a2, $a2, 16 (Delay Slot)
        SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2467C8u;
        goto label_2467c8;
    }
    ctx->pc = 0x2467C0u;
    {
        const bool branch_taken_0x2467c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2467C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2467C0u;
        // 0x2467c4: 0x6343f  dsra32      $a2, $a2, 16 (Delay Slot)
        SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2467c0) {
            ctx->pc = 0x2467D0u;
            goto label_2467d0;
        }
    }
    ctx->pc = 0x2467C8u;
label_2467c8:
    // 0x2467c8: 0x10000003  b           . + 4 + (0x3 << 2)
label_2467cc:
    if (ctx->pc == 0x2467CCu) {
        ctx->pc = 0x2467CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2467C8u;
        // 0x2467cc: 0xa464000c  sh          $a0, 0xC($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2467D0u;
        goto label_2467d0;
    }
    ctx->pc = 0x2467C8u;
    {
        const bool branch_taken_0x2467c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2467CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2467C8u;
        // 0x2467cc: 0xa464000c  sh          $a0, 0xC($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2467c8) {
            ctx->pc = 0x2467D8u;
            goto label_2467d8;
        }
    }
    ctx->pc = 0x2467D0u;
label_2467d0:
    // 0x2467d0: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x2467d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_2467d4:
    // 0x2467d4: 0xa464000c  sh          $a0, 0xC($v1)
    ctx->pc = 0x2467d4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 4));
label_2467d8:
    // 0x2467d8: 0x8464000c  lh          $a0, 0xC($v1)
    ctx->pc = 0x2467d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
label_2467dc:
    // 0x2467dc: 0x28810003  slti        $at, $a0, 0x3
    ctx->pc = 0x2467dcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
label_2467e0:
    // 0x2467e0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_2467e4:
    if (ctx->pc == 0x2467E4u) {
        ctx->pc = 0x2467E8u;
        goto label_2467e8;
    }
    ctx->pc = 0x2467E0u;
    {
        const bool branch_taken_0x2467e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2467e0) {
            ctx->pc = 0x2467F0u;
            goto label_2467f0;
        }
    }
    ctx->pc = 0x2467E8u;
label_2467e8:
    // 0x2467e8: 0x10000005  b           . + 4 + (0x5 << 2)
label_2467ec:
    if (ctx->pc == 0x2467ECu) {
        ctx->pc = 0x2467ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2467E8u;
        // 0x2467ec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2467F0u;
        goto label_2467f0;
    }
    ctx->pc = 0x2467E8u;
    {
        const bool branch_taken_0x2467e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2467ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2467E8u;
        // 0x2467ec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2467e8) {
            ctx->pc = 0x246800u;
            goto label_246800;
        }
    }
    ctx->pc = 0x2467F0u;
label_2467f0:
    // 0x2467f0: 0x2484fffe  addiu       $a0, $a0, -0x2
    ctx->pc = 0x2467f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967294));
label_2467f4:
    // 0x2467f4: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x2467f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_2467f8:
    // 0x2467f8: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x2467f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
label_2467fc:
    // 0x2467fc: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x2467fcu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_246800:
    // 0x246800: 0x42c3c  dsll32      $a1, $a0, 16
    ctx->pc = 0x246800u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 16));
label_246804:
    // 0x246804: 0x6243c  dsll32      $a0, $a2, 16
    ctx->pc = 0x246804u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 16));
label_246808:
    // 0x246808: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x246808u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_24680c:
    // 0x24680c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x24680cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_246810:
    // 0x246810: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x246810u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_246814:
    // 0x246814: 0x42c3c  dsll32      $a1, $a0, 16
    ctx->pc = 0x246814u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 16));
label_246818:
    // 0x246818: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x246818u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_24681c:
    // 0x24681c: 0x18a00204  blez        $a1, . + 4 + (0x204 << 2)
label_246820:
    if (ctx->pc == 0x246820u) {
        ctx->pc = 0x246824u;
        goto label_246824;
    }
    ctx->pc = 0x24681Cu;
    {
        const bool branch_taken_0x24681c = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x24681c) {
            ctx->pc = 0x247030u;
            { ctx->pc = 0x247030; return; }
        }
    }
    ctx->pc = 0x246824u;
label_246824:
    // 0x246824: 0x8464000e  lh          $a0, 0xE($v1)
    ctx->pc = 0x246824u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
label_246828:
    // 0x246828: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x246828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_24682c:
    // 0x24682c: 0x28810064  slti        $at, $a0, 0x64
    ctx->pc = 0x24682cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)100) ? 1 : 0);
label_246830:
    // 0x246830: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_246834:
    if (ctx->pc == 0x246834u) {
        ctx->pc = 0x246838u;
        goto label_246838;
    }
    ctx->pc = 0x246830u;
    {
        const bool branch_taken_0x246830 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x246830) {
            ctx->pc = 0x246840u;
            goto label_246840;
        }
    }
    ctx->pc = 0x246838u;
label_246838:
    // 0x246838: 0x10000003  b           . + 4 + (0x3 << 2)
label_24683c:
    if (ctx->pc == 0x24683Cu) {
        ctx->pc = 0x24683Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246838u;
        // 0x24683c: 0xa464000e  sh          $a0, 0xE($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246840u;
        goto label_246840;
    }
    ctx->pc = 0x246838u;
    {
        const bool branch_taken_0x246838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24683Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246838u;
        // 0x24683c: 0xa464000e  sh          $a0, 0xE($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246838) {
            ctx->pc = 0x246848u;
            goto label_246848;
        }
    }
    ctx->pc = 0x246840u;
label_246840:
    // 0x246840: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x246840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_246844:
    // 0x246844: 0xa464000e  sh          $a0, 0xE($v1)
    ctx->pc = 0x246844u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 4));
label_246848:
    // 0x246848: 0x100001f9  b           . + 4 + (0x1F9 << 2)
label_24684c:
    if (ctx->pc == 0x24684Cu) {
        ctx->pc = 0x24684Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246848u;
        // 0x24684c: 0xa0600006  sb          $zero, 0x6($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 6), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246850u;
        goto label_246850;
    }
    ctx->pc = 0x246848u;
    {
        const bool branch_taken_0x246848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24684Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246848u;
        // 0x24684c: 0xa0600006  sb          $zero, 0x6($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 6), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246848) {
            ctx->pc = 0x247030u;
            { ctx->pc = 0x247030; return; }
        }
    }
    ctx->pc = 0x246850u;
label_246850:
    // 0x246850: 0x14a4003c  bne         $a1, $a0, . + 4 + (0x3C << 2)
label_246854:
    if (ctx->pc == 0x246854u) {
        ctx->pc = 0x246858u;
        goto label_246858;
    }
    ctx->pc = 0x246850u;
    {
        const bool branch_taken_0x246850 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x246850) {
            ctx->pc = 0x246944u;
            goto label_246944;
        }
    }
    ctx->pc = 0x246858u;
label_246858:
    // 0x246858: 0x30e40800  andi        $a0, $a3, 0x800
    ctx->pc = 0x246858u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)2048);
label_24685c:
    // 0x24685c: 0x148001f4  bnez        $a0, . + 4 + (0x1F4 << 2)
label_246860:
    if (ctx->pc == 0x246860u) {
        ctx->pc = 0x246860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24685Cu;
        // 0x246860: 0x34e40800  ori         $a0, $a3, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)2048);
        ctx->in_delay_slot = false;
        ctx->pc = 0x246864u;
        goto label_246864;
    }
    ctx->pc = 0x24685Cu;
    {
        const bool branch_taken_0x24685c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x246860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24685Cu;
        // 0x246860: 0x34e40800  ori         $a0, $a3, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)2048);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24685c) {
            ctx->pc = 0x247030u;
            { ctx->pc = 0x247030; return; }
        }
    }
    ctx->pc = 0x246864u;
label_246864:
    // 0x246864: 0xac640014  sw          $a0, 0x14($v1)
    ctx->pc = 0x246864u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 4));
label_246868:
    // 0x246868: 0x8465000c  lh          $a1, 0xC($v1)
    ctx->pc = 0x246868u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
label_24686c:
    // 0x24686c: 0x28a10003  slti        $at, $a1, 0x3
    ctx->pc = 0x24686cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
label_246870:
    // 0x246870: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_246874:
    if (ctx->pc == 0x246874u) {
        ctx->pc = 0x246878u;
        goto label_246878;
    }
    ctx->pc = 0x246870u;
    {
        const bool branch_taken_0x246870 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x246870) {
            ctx->pc = 0x246880u;
            goto label_246880;
        }
    }
    ctx->pc = 0x246878u;
label_246878:
    // 0x246878: 0x10000005  b           . + 4 + (0x5 << 2)
label_24687c:
    if (ctx->pc == 0x24687Cu) {
        ctx->pc = 0x24687Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246878u;
        // 0x24687c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246880u;
        goto label_246880;
    }
    ctx->pc = 0x246878u;
    {
        const bool branch_taken_0x246878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24687Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246878u;
        // 0x24687c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246878) {
            ctx->pc = 0x246890u;
            goto label_246890;
        }
    }
    ctx->pc = 0x246880u;
label_246880:
    // 0x246880: 0x24a4fffe  addiu       $a0, $a1, -0x2
    ctx->pc = 0x246880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967294));
label_246884:
    // 0x246884: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x246884u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_246888:
    // 0x246888: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x246888u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
label_24688c:
    // 0x24688c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x24688cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_246890:
    // 0x246890: 0x4343c  dsll32      $a2, $a0, 16
    ctx->pc = 0x246890u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 16));
label_246894:
    // 0x246894: 0x3c01002d  lui         $at, 0x2D
    ctx->pc = 0x246894u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)45 << 16));
label_246898:
    // 0x246898: 0x9024eafb  lbu         $a0, -0x1505($at)
    ctx->pc = 0x246898u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294961915)));
label_24689c:
    // 0x24689c: 0x52c3c  dsll32      $a1, $a1, 16
    ctx->pc = 0x24689cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
label_2468a0:
    // 0x2468a0: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x2468a0u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_2468a4:
    // 0x2468a4: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x2468a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
label_2468a8:
    // 0x2468a8: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x2468a8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_2468ac:
    // 0x2468ac: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x2468acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_2468b0:
    // 0x2468b0: 0x2881001a  slti        $at, $a0, 0x1A
    ctx->pc = 0x2468b0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)26) ? 1 : 0);
label_2468b4:
    // 0x2468b4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_2468b8:
    if (ctx->pc == 0x2468B8u) {
        ctx->pc = 0x2468B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2468B4u;
        // 0x2468b8: 0x6343f  dsra32      $a2, $a2, 16 (Delay Slot)
        SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2468BCu;
        goto label_2468bc;
    }
    ctx->pc = 0x2468B4u;
    {
        const bool branch_taken_0x2468b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2468B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2468B4u;
        // 0x2468b8: 0x6343f  dsra32      $a2, $a2, 16 (Delay Slot)
        SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2468b4) {
            ctx->pc = 0x2468C4u;
            goto label_2468c4;
        }
    }
    ctx->pc = 0x2468BCu;
label_2468bc:
    // 0x2468bc: 0x10000003  b           . + 4 + (0x3 << 2)
label_2468c0:
    if (ctx->pc == 0x2468C0u) {
        ctx->pc = 0x2468C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2468BCu;
        // 0x2468c0: 0xa464000c  sh          $a0, 0xC($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2468C4u;
        goto label_2468c4;
    }
    ctx->pc = 0x2468BCu;
    {
        const bool branch_taken_0x2468bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2468C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2468BCu;
        // 0x2468c0: 0xa464000c  sh          $a0, 0xC($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2468bc) {
            ctx->pc = 0x2468CCu;
            goto label_2468cc;
        }
    }
    ctx->pc = 0x2468C4u;
label_2468c4:
    // 0x2468c4: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x2468c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_2468c8:
    // 0x2468c8: 0xa464000c  sh          $a0, 0xC($v1)
    ctx->pc = 0x2468c8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 4));
label_2468cc:
    // 0x2468cc: 0x8464000c  lh          $a0, 0xC($v1)
    ctx->pc = 0x2468ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
label_2468d0:
    // 0x2468d0: 0x28810003  slti        $at, $a0, 0x3
    ctx->pc = 0x2468d0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
label_2468d4:
    // 0x2468d4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_2468d8:
    if (ctx->pc == 0x2468D8u) {
        ctx->pc = 0x2468DCu;
        goto label_2468dc;
    }
    ctx->pc = 0x2468D4u;
    {
        const bool branch_taken_0x2468d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2468d4) {
            ctx->pc = 0x2468E4u;
            goto label_2468e4;
        }
    }
    ctx->pc = 0x2468DCu;
label_2468dc:
    // 0x2468dc: 0x10000005  b           . + 4 + (0x5 << 2)
label_2468e0:
    if (ctx->pc == 0x2468E0u) {
        ctx->pc = 0x2468E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2468DCu;
        // 0x2468e0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2468E4u;
        goto label_2468e4;
    }
    ctx->pc = 0x2468DCu;
    {
        const bool branch_taken_0x2468dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2468E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2468DCu;
        // 0x2468e0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2468dc) {
            ctx->pc = 0x2468F4u;
            goto label_2468f4;
        }
    }
    ctx->pc = 0x2468E4u;
label_2468e4:
    // 0x2468e4: 0x2484fffe  addiu       $a0, $a0, -0x2
    ctx->pc = 0x2468e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967294));
label_2468e8:
    // 0x2468e8: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x2468e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_2468ec:
    // 0x2468ec: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x2468ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
label_2468f0:
    // 0x2468f0: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x2468f0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_2468f4:
    // 0x2468f4: 0x42c3c  dsll32      $a1, $a0, 16
    ctx->pc = 0x2468f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 16));
label_2468f8:
    // 0x2468f8: 0x6243c  dsll32      $a0, $a2, 16
    ctx->pc = 0x2468f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 16));
label_2468fc:
    // 0x2468fc: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x2468fcu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_246900:
    // 0x246900: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x246900u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_246904:
    // 0x246904: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x246904u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_246908:
    // 0x246908: 0x42c3c  dsll32      $a1, $a0, 16
    ctx->pc = 0x246908u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 16));
label_24690c:
    // 0x24690c: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x24690cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_246910:
    // 0x246910: 0x18a001c7  blez        $a1, . + 4 + (0x1C7 << 2)
label_246914:
    if (ctx->pc == 0x246914u) {
        ctx->pc = 0x246918u;
        goto label_246918;
    }
    ctx->pc = 0x246910u;
    {
        const bool branch_taken_0x246910 = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x246910) {
            ctx->pc = 0x247030u;
            { ctx->pc = 0x247030; return; }
        }
    }
    ctx->pc = 0x246918u;
label_246918:
    // 0x246918: 0x8464000e  lh          $a0, 0xE($v1)
    ctx->pc = 0x246918u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
label_24691c:
    // 0x24691c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x24691cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_246920:
    // 0x246920: 0x28810064  slti        $at, $a0, 0x64
    ctx->pc = 0x246920u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)100) ? 1 : 0);
label_246924:
    // 0x246924: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_246928:
    if (ctx->pc == 0x246928u) {
        ctx->pc = 0x24692Cu;
        goto label_24692c;
    }
    ctx->pc = 0x246924u;
    {
        const bool branch_taken_0x246924 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x246924) {
            ctx->pc = 0x246934u;
            goto label_246934;
        }
    }
    ctx->pc = 0x24692Cu;
label_24692c:
    // 0x24692c: 0x10000003  b           . + 4 + (0x3 << 2)
label_246930:
    if (ctx->pc == 0x246930u) {
        ctx->pc = 0x246930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24692Cu;
        // 0x246930: 0xa464000e  sh          $a0, 0xE($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246934u;
        goto label_246934;
    }
    ctx->pc = 0x24692Cu;
    {
        const bool branch_taken_0x24692c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24692Cu;
        // 0x246930: 0xa464000e  sh          $a0, 0xE($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24692c) {
            ctx->pc = 0x24693Cu;
            goto label_24693c;
        }
    }
    ctx->pc = 0x246934u;
label_246934:
    // 0x246934: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x246934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_246938:
    // 0x246938: 0xa464000e  sh          $a0, 0xE($v1)
    ctx->pc = 0x246938u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 4));
label_24693c:
    // 0x24693c: 0x100001bc  b           . + 4 + (0x1BC << 2)
label_246940:
    if (ctx->pc == 0x246940u) {
        ctx->pc = 0x246940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24693Cu;
        // 0x246940: 0xa0600006  sb          $zero, 0x6($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 6), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246944u;
        goto label_246944;
    }
    ctx->pc = 0x24693Cu;
    {
        const bool branch_taken_0x24693c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24693Cu;
        // 0x246940: 0xa0600006  sb          $zero, 0x6($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 6), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24693c) {
            ctx->pc = 0x247030u;
            { ctx->pc = 0x247030; return; }
        }
    }
    ctx->pc = 0x246944u;
label_246944:
    // 0x246944: 0x30e42000  andi        $a0, $a3, 0x2000
    ctx->pc = 0x246944u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)8192);
label_246948:
    // 0x246948: 0x148001b9  bnez        $a0, . + 4 + (0x1B9 << 2)
label_24694c:
    if (ctx->pc == 0x24694Cu) {
        ctx->pc = 0x24694Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246948u;
        // 0x24694c: 0x34e42000  ori         $a0, $a3, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
        ctx->pc = 0x246950u;
        goto label_246950;
    }
    ctx->pc = 0x246948u;
    {
        const bool branch_taken_0x246948 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x24694Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246948u;
        // 0x24694c: 0x34e42000  ori         $a0, $a3, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
        if (branch_taken_0x246948) {
            ctx->pc = 0x247030u;
            { ctx->pc = 0x247030; return; }
        }
    }
    ctx->pc = 0x246950u;
label_246950:
    // 0x246950: 0xac640014  sw          $a0, 0x14($v1)
    ctx->pc = 0x246950u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 4));
label_246954:
    // 0x246954: 0x8465000c  lh          $a1, 0xC($v1)
    ctx->pc = 0x246954u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
label_246958:
    // 0x246958: 0x28a10003  slti        $at, $a1, 0x3
    ctx->pc = 0x246958u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
label_24695c:
    // 0x24695c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_246960:
    if (ctx->pc == 0x246960u) {
        ctx->pc = 0x246964u;
        goto label_246964;
    }
    ctx->pc = 0x24695Cu;
    {
        const bool branch_taken_0x24695c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x24695c) {
            ctx->pc = 0x24696Cu;
            goto label_24696c;
        }
    }
    ctx->pc = 0x246964u;
label_246964:
    // 0x246964: 0x10000005  b           . + 4 + (0x5 << 2)
label_246968:
    if (ctx->pc == 0x246968u) {
        ctx->pc = 0x246968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246964u;
        // 0x246968: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24696Cu;
        goto label_24696c;
    }
    ctx->pc = 0x246964u;
    {
        const bool branch_taken_0x246964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246964u;
        // 0x246968: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246964) {
            ctx->pc = 0x24697Cu;
            goto label_24697c;
        }
    }
    ctx->pc = 0x24696Cu;
label_24696c:
    // 0x24696c: 0x24a4fffe  addiu       $a0, $a1, -0x2
    ctx->pc = 0x24696cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967294));
label_246970:
    // 0x246970: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x246970u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_246974:
    // 0x246974: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x246974u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
label_246978:
    // 0x246978: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x246978u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_24697c:
    // 0x24697c: 0x4343c  dsll32      $a2, $a0, 16
    ctx->pc = 0x24697cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 16));
label_246980:
    // 0x246980: 0x3c01002d  lui         $at, 0x2D
    ctx->pc = 0x246980u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)45 << 16));
label_246984:
    // 0x246984: 0x9024eafd  lbu         $a0, -0x1503($at)
    ctx->pc = 0x246984u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294961917)));
label_246988:
    // 0x246988: 0x52c3c  dsll32      $a1, $a1, 16
    ctx->pc = 0x246988u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
label_24698c:
    // 0x24698c: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x24698cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_246990:
    // 0x246990: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x246990u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
label_246994:
    // 0x246994: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x246994u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_246998:
    // 0x246998: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x246998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_24699c:
    // 0x24699c: 0x2881001a  slti        $at, $a0, 0x1A
    ctx->pc = 0x24699cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)26) ? 1 : 0);
label_2469a0:
    // 0x2469a0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_2469a4:
    if (ctx->pc == 0x2469A4u) {
        ctx->pc = 0x2469A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2469A0u;
        // 0x2469a4: 0x6343f  dsra32      $a2, $a2, 16 (Delay Slot)
        SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2469A8u;
        goto label_2469a8;
    }
    ctx->pc = 0x2469A0u;
    {
        const bool branch_taken_0x2469a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2469A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2469A0u;
        // 0x2469a4: 0x6343f  dsra32      $a2, $a2, 16 (Delay Slot)
        SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2469a0) {
            ctx->pc = 0x2469B0u;
            goto label_2469b0;
        }
    }
    ctx->pc = 0x2469A8u;
label_2469a8:
    // 0x2469a8: 0x10000003  b           . + 4 + (0x3 << 2)
label_2469ac:
    if (ctx->pc == 0x2469ACu) {
        ctx->pc = 0x2469ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2469A8u;
        // 0x2469ac: 0xa464000c  sh          $a0, 0xC($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2469B0u;
        goto label_2469b0;
    }
    ctx->pc = 0x2469A8u;
    {
        const bool branch_taken_0x2469a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2469ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2469A8u;
        // 0x2469ac: 0xa464000c  sh          $a0, 0xC($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2469a8) {
            ctx->pc = 0x2469B8u;
            goto label_2469b8;
        }
    }
    ctx->pc = 0x2469B0u;
label_2469b0:
    // 0x2469b0: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x2469b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_2469b4:
    // 0x2469b4: 0xa464000c  sh          $a0, 0xC($v1)
    ctx->pc = 0x2469b4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 4));
label_2469b8:
    // 0x2469b8: 0x8464000c  lh          $a0, 0xC($v1)
    ctx->pc = 0x2469b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
label_2469bc:
    // 0x2469bc: 0x28810003  slti        $at, $a0, 0x3
    ctx->pc = 0x2469bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
label_2469c0:
    // 0x2469c0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_2469c4:
    if (ctx->pc == 0x2469C4u) {
        ctx->pc = 0x2469C8u;
        goto label_2469c8;
    }
    ctx->pc = 0x2469C0u;
    {
        const bool branch_taken_0x2469c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2469c0) {
            ctx->pc = 0x2469D0u;
            goto label_2469d0;
        }
    }
    ctx->pc = 0x2469C8u;
label_2469c8:
    // 0x2469c8: 0x10000005  b           . + 4 + (0x5 << 2)
label_2469cc:
    if (ctx->pc == 0x2469CCu) {
        ctx->pc = 0x2469CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2469C8u;
        // 0x2469cc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2469D0u;
        goto label_2469d0;
    }
    ctx->pc = 0x2469C8u;
    {
        const bool branch_taken_0x2469c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2469CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2469C8u;
        // 0x2469cc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2469c8) {
            ctx->pc = 0x2469E0u;
            goto label_2469e0;
        }
    }
    ctx->pc = 0x2469D0u;
label_2469d0:
    // 0x2469d0: 0x2484fffe  addiu       $a0, $a0, -0x2
    ctx->pc = 0x2469d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967294));
label_2469d4:
    // 0x2469d4: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x2469d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_2469d8:
    // 0x2469d8: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x2469d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
label_2469dc:
    // 0x2469dc: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x2469dcu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_2469e0:
    // 0x2469e0: 0x42c3c  dsll32      $a1, $a0, 16
    ctx->pc = 0x2469e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 16));
label_2469e4:
    // 0x2469e4: 0x6243c  dsll32      $a0, $a2, 16
    ctx->pc = 0x2469e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 16));
label_2469e8:
    // 0x2469e8: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x2469e8u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_2469ec:
    // 0x2469ec: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x2469ecu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_2469f0:
    // 0x2469f0: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x2469f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_2469f4:
    // 0x2469f4: 0x42c3c  dsll32      $a1, $a0, 16
    ctx->pc = 0x2469f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 16));
label_2469f8:
    // 0x2469f8: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x2469f8u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_2469fc:
    // 0x2469fc: 0x18a0018c  blez        $a1, . + 4 + (0x18C << 2)
label_246a00:
    if (ctx->pc == 0x246A00u) {
        ctx->pc = 0x246A04u;
        goto label_246a04;
    }
    ctx->pc = 0x2469FCu;
    {
        const bool branch_taken_0x2469fc = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x2469fc) {
            ctx->pc = 0x247030u;
            { ctx->pc = 0x247030; return; }
        }
    }
    ctx->pc = 0x246A04u;
label_246a04:
    // 0x246a04: 0x8464000e  lh          $a0, 0xE($v1)
    ctx->pc = 0x246a04u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
label_246a08:
    // 0x246a08: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x246a08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_246a0c:
    // 0x246a0c: 0x28810064  slti        $at, $a0, 0x64
    ctx->pc = 0x246a0cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)100) ? 1 : 0);
label_246a10:
    // 0x246a10: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_246a14:
    if (ctx->pc == 0x246A14u) {
        ctx->pc = 0x246A18u;
        goto label_246a18;
    }
    ctx->pc = 0x246A10u;
    {
        const bool branch_taken_0x246a10 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x246a10) {
            ctx->pc = 0x246A20u;
            goto label_246a20;
        }
    }
    ctx->pc = 0x246A18u;
label_246a18:
    // 0x246a18: 0x10000003  b           . + 4 + (0x3 << 2)
label_246a1c:
    if (ctx->pc == 0x246A1Cu) {
        ctx->pc = 0x246A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246A18u;
        // 0x246a1c: 0xa464000e  sh          $a0, 0xE($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246A20u;
        goto label_246a20;
    }
    ctx->pc = 0x246A18u;
    {
        const bool branch_taken_0x246a18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246A18u;
        // 0x246a1c: 0xa464000e  sh          $a0, 0xE($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246a18) {
            ctx->pc = 0x246A28u;
            goto label_246a28;
        }
    }
    ctx->pc = 0x246A20u;
label_246a20:
    // 0x246a20: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x246a20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_246a24:
    // 0x246a24: 0xa464000e  sh          $a0, 0xE($v1)
    ctx->pc = 0x246a24u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 4));
label_246a28:
    // 0x246a28: 0x10000181  b           . + 4 + (0x181 << 2)
label_246a2c:
    if (ctx->pc == 0x246A2Cu) {
        ctx->pc = 0x246A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246A28u;
        // 0x246a2c: 0xa0600006  sb          $zero, 0x6($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 6), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246A30u;
        goto label_246a30;
    }
    ctx->pc = 0x246A28u;
    {
        const bool branch_taken_0x246a28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246A28u;
        // 0x246a2c: 0xa0600006  sb          $zero, 0x6($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 6), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246a28) {
            ctx->pc = 0x247030u;
            { ctx->pc = 0x247030; return; }
        }
    }
    ctx->pc = 0x246A30u;
label_246a30:
    // 0x246a30: 0x8c670014  lw          $a3, 0x14($v1)
    ctx->pc = 0x246a30u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_246a34:
    // 0x246a34: 0x2405003f  addiu       $a1, $zero, 0x3F
    ctx->pc = 0x246a34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_246a38:
    // 0x246a38: 0x30e6003f  andi        $a2, $a3, 0x3F
    ctx->pc = 0x246a38u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)63);
label_246a3c:
    // 0x246a3c: 0x10c5017c  beq         $a2, $a1, . + 4 + (0x17C << 2)
label_246a40:
    if (ctx->pc == 0x246A40u) {
        ctx->pc = 0x246A44u;
        goto label_246a44;
    }
    ctx->pc = 0x246A3Cu;
    {
        const bool branch_taken_0x246a3c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x246a3c) {
            ctx->pc = 0x247030u;
            { ctx->pc = 0x247030; return; }
        }
    }
    ctx->pc = 0x246A44u;
label_246a44:
    // 0x246a44: 0x8485003c  lh          $a1, 0x3C($a0)
    ctx->pc = 0x246a44u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 60)));
label_246a48:
    // 0x246a48: 0x24040096  addiu       $a0, $zero, 0x96
    ctx->pc = 0x246a48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
label_246a4c:
    // 0x246a4c: 0x14a4003c  bne         $a1, $a0, . + 4 + (0x3C << 2)
label_246a50:
    if (ctx->pc == 0x246A50u) {
        ctx->pc = 0x246A54u;
        goto label_246a54;
    }
    ctx->pc = 0x246A4Cu;
    {
        const bool branch_taken_0x246a4c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x246a4c) {
            ctx->pc = 0x246B40u;
            goto label_246b40;
        }
    }
    ctx->pc = 0x246A54u;
label_246a54:
    // 0x246a54: 0x30e40001  andi        $a0, $a3, 0x1
    ctx->pc = 0x246a54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
label_246a58:
    // 0x246a58: 0x14800175  bnez        $a0, . + 4 + (0x175 << 2)
label_246a5c:
    if (ctx->pc == 0x246A5Cu) {
        ctx->pc = 0x246A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246A58u;
        // 0x246a5c: 0x34e40001  ori         $a0, $a3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x246A60u;
        goto label_246a60;
    }
    ctx->pc = 0x246A58u;
    {
        const bool branch_taken_0x246a58 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x246A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246A58u;
        // 0x246a5c: 0x34e40001  ori         $a0, $a3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x246a58) {
            ctx->pc = 0x247030u;
            { ctx->pc = 0x247030; return; }
        }
    }
    ctx->pc = 0x246A60u;
label_246a60:
    // 0x246a60: 0xac640014  sw          $a0, 0x14($v1)
    ctx->pc = 0x246a60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 4));
label_246a64:
    // 0x246a64: 0x8465000c  lh          $a1, 0xC($v1)
    ctx->pc = 0x246a64u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
label_246a68:
    // 0x246a68: 0x28a10003  slti        $at, $a1, 0x3
    ctx->pc = 0x246a68u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
label_246a6c:
    // 0x246a6c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_246a70:
    if (ctx->pc == 0x246A70u) {
        ctx->pc = 0x246A74u;
        goto label_246a74;
    }
    ctx->pc = 0x246A6Cu;
    {
        const bool branch_taken_0x246a6c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x246a6c) {
            ctx->pc = 0x246A7Cu;
            goto label_246a7c;
        }
    }
    ctx->pc = 0x246A74u;
label_246a74:
    // 0x246a74: 0x10000005  b           . + 4 + (0x5 << 2)
label_246a78:
    if (ctx->pc == 0x246A78u) {
        ctx->pc = 0x246A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246A74u;
        // 0x246a78: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246A7Cu;
        goto label_246a7c;
    }
    ctx->pc = 0x246A74u;
    {
        const bool branch_taken_0x246a74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246A74u;
        // 0x246a78: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246a74) {
            ctx->pc = 0x246A8Cu;
            goto label_246a8c;
        }
    }
    ctx->pc = 0x246A7Cu;
label_246a7c:
    // 0x246a7c: 0x24a4fffe  addiu       $a0, $a1, -0x2
    ctx->pc = 0x246a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967294));
label_246a80:
    // 0x246a80: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x246a80u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_246a84:
    // 0x246a84: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x246a84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
label_246a88:
    // 0x246a88: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x246a88u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_246a8c:
    // 0x246a8c: 0x4343c  dsll32      $a2, $a0, 16
    ctx->pc = 0x246a8cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 16));
label_246a90:
    // 0x246a90: 0x3c01002d  lui         $at, 0x2D
    ctx->pc = 0x246a90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)45 << 16));
label_246a94:
    // 0x246a94: 0x9024eaf0  lbu         $a0, -0x1510($at)
    ctx->pc = 0x246a94u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294961904)));
label_246a98:
    // 0x246a98: 0x52c3c  dsll32      $a1, $a1, 16
    ctx->pc = 0x246a98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
label_246a9c:
    // 0x246a9c: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x246a9cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_246aa0:
    // 0x246aa0: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x246aa0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
label_246aa4:
    // 0x246aa4: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x246aa4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_246aa8:
    // 0x246aa8: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x246aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_246aac:
    // 0x246aac: 0x2881001a  slti        $at, $a0, 0x1A
    ctx->pc = 0x246aacu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)26) ? 1 : 0);
label_246ab0:
    // 0x246ab0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_246ab4:
    if (ctx->pc == 0x246AB4u) {
        ctx->pc = 0x246AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246AB0u;
        // 0x246ab4: 0x6343f  dsra32      $a2, $a2, 16 (Delay Slot)
        SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246AB8u;
        goto label_246ab8;
    }
    ctx->pc = 0x246AB0u;
    {
        const bool branch_taken_0x246ab0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x246AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246AB0u;
        // 0x246ab4: 0x6343f  dsra32      $a2, $a2, 16 (Delay Slot)
        SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246ab0) {
            ctx->pc = 0x246AC0u;
            goto label_246ac0;
        }
    }
    ctx->pc = 0x246AB8u;
label_246ab8:
    // 0x246ab8: 0x10000003  b           . + 4 + (0x3 << 2)
label_246abc:
    if (ctx->pc == 0x246ABCu) {
        ctx->pc = 0x246ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246AB8u;
        // 0x246abc: 0xa464000c  sh          $a0, 0xC($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246AC0u;
        goto label_246ac0;
    }
    ctx->pc = 0x246AB8u;
    {
        const bool branch_taken_0x246ab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246AB8u;
        // 0x246abc: 0xa464000c  sh          $a0, 0xC($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246ab8) {
            ctx->pc = 0x246AC8u;
            goto label_246ac8;
        }
    }
    ctx->pc = 0x246AC0u;
label_246ac0:
    // 0x246ac0: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x246ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_246ac4:
    // 0x246ac4: 0xa464000c  sh          $a0, 0xC($v1)
    ctx->pc = 0x246ac4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 4));
label_246ac8:
    // 0x246ac8: 0x8464000c  lh          $a0, 0xC($v1)
    ctx->pc = 0x246ac8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
label_246acc:
    // 0x246acc: 0x28810003  slti        $at, $a0, 0x3
    ctx->pc = 0x246accu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
label_246ad0:
    // 0x246ad0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_246ad4:
    if (ctx->pc == 0x246AD4u) {
        ctx->pc = 0x246AD8u;
        goto label_246ad8;
    }
    ctx->pc = 0x246AD0u;
    {
        const bool branch_taken_0x246ad0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x246ad0) {
            ctx->pc = 0x246AE0u;
            goto label_246ae0;
        }
    }
    ctx->pc = 0x246AD8u;
label_246ad8:
    // 0x246ad8: 0x10000005  b           . + 4 + (0x5 << 2)
label_246adc:
    if (ctx->pc == 0x246ADCu) {
        ctx->pc = 0x246ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246AD8u;
        // 0x246adc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246AE0u;
        goto label_246ae0;
    }
    ctx->pc = 0x246AD8u;
    {
        const bool branch_taken_0x246ad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246AD8u;
        // 0x246adc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246ad8) {
            ctx->pc = 0x246AF0u;
            goto label_246af0;
        }
    }
    ctx->pc = 0x246AE0u;
label_246ae0:
    // 0x246ae0: 0x2484fffe  addiu       $a0, $a0, -0x2
    ctx->pc = 0x246ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967294));
label_246ae4:
    // 0x246ae4: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x246ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_246ae8:
    // 0x246ae8: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x246ae8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
label_246aec:
    // 0x246aec: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x246aecu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_246af0:
    // 0x246af0: 0x42c3c  dsll32      $a1, $a0, 16
    ctx->pc = 0x246af0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 16));
label_246af4:
    // 0x246af4: 0x6243c  dsll32      $a0, $a2, 16
    ctx->pc = 0x246af4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 16));
label_246af8:
    // 0x246af8: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x246af8u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_246afc:
    // 0x246afc: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x246afcu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_246b00:
    // 0x246b00: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x246b00u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_246b04:
    // 0x246b04: 0x42c3c  dsll32      $a1, $a0, 16
    ctx->pc = 0x246b04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 16));
label_246b08:
    // 0x246b08: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x246b08u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_246b0c:
    // 0x246b0c: 0x18a00148  blez        $a1, . + 4 + (0x148 << 2)
label_246b10:
    if (ctx->pc == 0x246B10u) {
        ctx->pc = 0x246B14u;
        goto label_246b14;
    }
    ctx->pc = 0x246B0Cu;
    {
        const bool branch_taken_0x246b0c = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x246b0c) {
            ctx->pc = 0x247030u;
            { ctx->pc = 0x247030; return; }
        }
    }
    ctx->pc = 0x246B14u;
label_246b14:
    // 0x246b14: 0x8464000e  lh          $a0, 0xE($v1)
    ctx->pc = 0x246b14u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
label_246b18:
    // 0x246b18: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x246b18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_246b1c:
    // 0x246b1c: 0x28810064  slti        $at, $a0, 0x64
    ctx->pc = 0x246b1cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)100) ? 1 : 0);
label_246b20:
    // 0x246b20: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_246b24:
    if (ctx->pc == 0x246B24u) {
        ctx->pc = 0x246B28u;
        goto label_246b28;
    }
    ctx->pc = 0x246B20u;
    {
        const bool branch_taken_0x246b20 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x246b20) {
            ctx->pc = 0x246B30u;
            goto label_246b30;
        }
    }
    ctx->pc = 0x246B28u;
label_246b28:
    // 0x246b28: 0x10000003  b           . + 4 + (0x3 << 2)
label_246b2c:
    if (ctx->pc == 0x246B2Cu) {
        ctx->pc = 0x246B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246B28u;
        // 0x246b2c: 0xa464000e  sh          $a0, 0xE($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246B30u;
        goto label_246b30;
    }
    ctx->pc = 0x246B28u;
    {
        const bool branch_taken_0x246b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246B28u;
        // 0x246b2c: 0xa464000e  sh          $a0, 0xE($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246b28) {
            ctx->pc = 0x246B38u;
            goto label_246b38;
        }
    }
    ctx->pc = 0x246B30u;
label_246b30:
    // 0x246b30: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x246b30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_246b34:
    // 0x246b34: 0xa464000e  sh          $a0, 0xE($v1)
    ctx->pc = 0x246b34u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 4));
label_246b38:
    // 0x246b38: 0x1000013d  b           . + 4 + (0x13D << 2)
label_246b3c:
    if (ctx->pc == 0x246B3Cu) {
        ctx->pc = 0x246B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246B38u;
        // 0x246b3c: 0xa0600006  sb          $zero, 0x6($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 6), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246B40u;
        goto label_246b40;
    }
    ctx->pc = 0x246B38u;
    {
        const bool branch_taken_0x246b38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246B38u;
        // 0x246b3c: 0xa0600006  sb          $zero, 0x6($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 6), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246b38) {
            ctx->pc = 0x247030u;
            { ctx->pc = 0x247030; return; }
        }
    }
    ctx->pc = 0x246B40u;
label_246b40:
    // 0x246b40: 0x24040097  addiu       $a0, $zero, 0x97
    ctx->pc = 0x246b40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 151));
label_246b44:
    // 0x246b44: 0x14a4003c  bne         $a1, $a0, . + 4 + (0x3C << 2)
label_246b48:
    if (ctx->pc == 0x246B48u) {
        ctx->pc = 0x246B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246B44u;
        // 0x246b48: 0x24040098  addiu       $a0, $zero, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246B4Cu;
        goto label_246b4c;
    }
    ctx->pc = 0x246B44u;
    {
        const bool branch_taken_0x246b44 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x246B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246B44u;
        // 0x246b48: 0x24040098  addiu       $a0, $zero, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246b44) {
            ctx->pc = 0x246C38u;
            goto label_246c38;
        }
    }
    ctx->pc = 0x246B4Cu;
label_246b4c:
    // 0x246b4c: 0x30e40002  andi        $a0, $a3, 0x2
    ctx->pc = 0x246b4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)2);
label_246b50:
    // 0x246b50: 0x14800137  bnez        $a0, . + 4 + (0x137 << 2)
label_246b54:
    if (ctx->pc == 0x246B54u) {
        ctx->pc = 0x246B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246B50u;
        // 0x246b54: 0x34e40002  ori         $a0, $a3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x246B58u;
        goto label_246b58;
    }
    ctx->pc = 0x246B50u;
    {
        const bool branch_taken_0x246b50 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x246B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246B50u;
        // 0x246b54: 0x34e40002  ori         $a0, $a3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x246b50) {
            ctx->pc = 0x247030u;
            { ctx->pc = 0x247030; return; }
        }
    }
    ctx->pc = 0x246B58u;
label_246b58:
    // 0x246b58: 0xac640014  sw          $a0, 0x14($v1)
    ctx->pc = 0x246b58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 4));
label_246b5c:
    // 0x246b5c: 0x8465000c  lh          $a1, 0xC($v1)
    ctx->pc = 0x246b5cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
label_246b60:
    // 0x246b60: 0x28a10003  slti        $at, $a1, 0x3
    ctx->pc = 0x246b60u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
label_246b64:
    // 0x246b64: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_246b68:
    if (ctx->pc == 0x246B68u) {
        ctx->pc = 0x246B6Cu;
        goto label_246b6c;
    }
    ctx->pc = 0x246B64u;
    {
        const bool branch_taken_0x246b64 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x246b64) {
            ctx->pc = 0x246B74u;
            goto label_246b74;
        }
    }
    ctx->pc = 0x246B6Cu;
label_246b6c:
    // 0x246b6c: 0x10000005  b           . + 4 + (0x5 << 2)
label_246b70:
    if (ctx->pc == 0x246B70u) {
        ctx->pc = 0x246B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246B6Cu;
        // 0x246b70: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246B74u;
        goto label_246b74;
    }
    ctx->pc = 0x246B6Cu;
    {
        const bool branch_taken_0x246b6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246B6Cu;
        // 0x246b70: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246b6c) {
            ctx->pc = 0x246B84u;
            goto label_246b84;
        }
    }
    ctx->pc = 0x246B74u;
label_246b74:
    // 0x246b74: 0x24a4fffe  addiu       $a0, $a1, -0x2
    ctx->pc = 0x246b74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967294));
label_246b78:
    // 0x246b78: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x246b78u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_246b7c:
    // 0x246b7c: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x246b7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
label_246b80:
    // 0x246b80: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x246b80u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_246b84:
    // 0x246b84: 0x4343c  dsll32      $a2, $a0, 16
    ctx->pc = 0x246b84u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 16));
label_246b88:
    // 0x246b88: 0x3c01002d  lui         $at, 0x2D
    ctx->pc = 0x246b88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)45 << 16));
label_246b8c:
    // 0x246b8c: 0x9024eaf1  lbu         $a0, -0x150F($at)
    ctx->pc = 0x246b8cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294961905)));
label_246b90:
    // 0x246b90: 0x52c3c  dsll32      $a1, $a1, 16
    ctx->pc = 0x246b90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
label_246b94:
    // 0x246b94: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x246b94u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_246b98:
    // 0x246b98: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x246b98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
label_246b9c:
    // 0x246b9c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x246b9cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_246ba0:
    // 0x246ba0: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x246ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_246ba4:
    // 0x246ba4: 0x2881001a  slti        $at, $a0, 0x1A
    ctx->pc = 0x246ba4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)26) ? 1 : 0);
label_246ba8:
    // 0x246ba8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_246bac:
    if (ctx->pc == 0x246BACu) {
        ctx->pc = 0x246BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246BA8u;
        // 0x246bac: 0x6343f  dsra32      $a2, $a2, 16 (Delay Slot)
        SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246BB0u;
        goto label_246bb0;
    }
    ctx->pc = 0x246BA8u;
    {
        const bool branch_taken_0x246ba8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x246BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246BA8u;
        // 0x246bac: 0x6343f  dsra32      $a2, $a2, 16 (Delay Slot)
        SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246ba8) {
            ctx->pc = 0x246BB8u;
            goto label_246bb8;
        }
    }
    ctx->pc = 0x246BB0u;
label_246bb0:
    // 0x246bb0: 0x10000003  b           . + 4 + (0x3 << 2)
label_246bb4:
    if (ctx->pc == 0x246BB4u) {
        ctx->pc = 0x246BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246BB0u;
        // 0x246bb4: 0xa464000c  sh          $a0, 0xC($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246BB8u;
        goto label_246bb8;
    }
    ctx->pc = 0x246BB0u;
    {
        const bool branch_taken_0x246bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246BB0u;
        // 0x246bb4: 0xa464000c  sh          $a0, 0xC($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246bb0) {
            ctx->pc = 0x246BC0u;
            goto label_246bc0;
        }
    }
    ctx->pc = 0x246BB8u;
label_246bb8:
    // 0x246bb8: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x246bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_246bbc:
    // 0x246bbc: 0xa464000c  sh          $a0, 0xC($v1)
    ctx->pc = 0x246bbcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 4));
label_246bc0:
    // 0x246bc0: 0x8464000c  lh          $a0, 0xC($v1)
    ctx->pc = 0x246bc0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
label_246bc4:
    // 0x246bc4: 0x28810003  slti        $at, $a0, 0x3
    ctx->pc = 0x246bc4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
label_246bc8:
    // 0x246bc8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_246bcc:
    if (ctx->pc == 0x246BCCu) {
        ctx->pc = 0x246BD0u;
        goto label_246bd0;
    }
    ctx->pc = 0x246BC8u;
    {
        const bool branch_taken_0x246bc8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x246bc8) {
            ctx->pc = 0x246BD8u;
            goto label_246bd8;
        }
    }
    ctx->pc = 0x246BD0u;
label_246bd0:
    // 0x246bd0: 0x10000005  b           . + 4 + (0x5 << 2)
label_246bd4:
    if (ctx->pc == 0x246BD4u) {
        ctx->pc = 0x246BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246BD0u;
        // 0x246bd4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246BD8u;
        goto label_246bd8;
    }
    ctx->pc = 0x246BD0u;
    {
        const bool branch_taken_0x246bd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246BD0u;
        // 0x246bd4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246bd0) {
            ctx->pc = 0x246BE8u;
            goto label_246be8;
        }
    }
    ctx->pc = 0x246BD8u;
label_246bd8:
    // 0x246bd8: 0x2484fffe  addiu       $a0, $a0, -0x2
    ctx->pc = 0x246bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967294));
label_246bdc:
    // 0x246bdc: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x246bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_246be0:
    // 0x246be0: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x246be0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
label_246be4:
    // 0x246be4: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x246be4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_246be8:
    // 0x246be8: 0x42c3c  dsll32      $a1, $a0, 16
    ctx->pc = 0x246be8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 16));
label_246bec:
    // 0x246bec: 0x6243c  dsll32      $a0, $a2, 16
    ctx->pc = 0x246becu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 16));
label_246bf0:
    // 0x246bf0: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x246bf0u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_246bf4:
    // 0x246bf4: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x246bf4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_246bf8:
    // 0x246bf8: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x246bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_246bfc:
    // 0x246bfc: 0x42c3c  dsll32      $a1, $a0, 16
    ctx->pc = 0x246bfcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 16));
label_246c00:
    // 0x246c00: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x246c00u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_246c04:
    // 0x246c04: 0x18a0010a  blez        $a1, . + 4 + (0x10A << 2)
label_246c08:
    if (ctx->pc == 0x246C08u) {
        ctx->pc = 0x246C0Cu;
        goto label_246c0c;
    }
    ctx->pc = 0x246C04u;
    {
        const bool branch_taken_0x246c04 = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x246c04) {
            ctx->pc = 0x247030u;
            { ctx->pc = 0x247030; return; }
        }
    }
    ctx->pc = 0x246C0Cu;
label_246c0c:
    // 0x246c0c: 0x8464000e  lh          $a0, 0xE($v1)
    ctx->pc = 0x246c0cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
label_246c10:
    // 0x246c10: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x246c10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_246c14:
    // 0x246c14: 0x28810064  slti        $at, $a0, 0x64
    ctx->pc = 0x246c14u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)100) ? 1 : 0);
label_246c18:
    // 0x246c18: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_246c1c:
    if (ctx->pc == 0x246C1Cu) {
        ctx->pc = 0x246C20u;
        goto label_246c20;
    }
    ctx->pc = 0x246C18u;
    {
        const bool branch_taken_0x246c18 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x246c18) {
            ctx->pc = 0x246C28u;
            goto label_246c28;
        }
    }
    ctx->pc = 0x246C20u;
label_246c20:
    // 0x246c20: 0x10000003  b           . + 4 + (0x3 << 2)
label_246c24:
    if (ctx->pc == 0x246C24u) {
        ctx->pc = 0x246C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246C20u;
        // 0x246c24: 0xa464000e  sh          $a0, 0xE($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246C28u;
        goto label_246c28;
    }
    ctx->pc = 0x246C20u;
    {
        const bool branch_taken_0x246c20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246C20u;
        // 0x246c24: 0xa464000e  sh          $a0, 0xE($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246c20) {
            ctx->pc = 0x246C30u;
            goto label_246c30;
        }
    }
    ctx->pc = 0x246C28u;
label_246c28:
    // 0x246c28: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x246c28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_246c2c:
    // 0x246c2c: 0xa464000e  sh          $a0, 0xE($v1)
    ctx->pc = 0x246c2cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 4));
label_246c30:
    // 0x246c30: 0x100000ff  b           . + 4 + (0xFF << 2)
label_246c34:
    if (ctx->pc == 0x246C34u) {
        ctx->pc = 0x246C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246C30u;
        // 0x246c34: 0xa0600006  sb          $zero, 0x6($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 6), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246C38u;
        goto label_246c38;
    }
    ctx->pc = 0x246C30u;
    {
        const bool branch_taken_0x246c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246C30u;
        // 0x246c34: 0xa0600006  sb          $zero, 0x6($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 6), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246c30) {
            ctx->pc = 0x247030u;
            { ctx->pc = 0x247030; return; }
        }
    }
    ctx->pc = 0x246C38u;
label_246c38:
    // 0x246c38: 0x14a4003c  bne         $a1, $a0, . + 4 + (0x3C << 2)
label_246c3c:
    if (ctx->pc == 0x246C3Cu) {
        ctx->pc = 0x246C40u;
        goto label_246c40;
    }
    ctx->pc = 0x246C38u;
    {
        const bool branch_taken_0x246c38 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x246c38) {
            ctx->pc = 0x246D2Cu;
            goto label_246d2c;
        }
    }
    ctx->pc = 0x246C40u;
label_246c40:
    // 0x246c40: 0x30e40004  andi        $a0, $a3, 0x4
    ctx->pc = 0x246c40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
label_246c44:
    // 0x246c44: 0x148000fa  bnez        $a0, . + 4 + (0xFA << 2)
label_246c48:
    if (ctx->pc == 0x246C48u) {
        ctx->pc = 0x246C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246C44u;
        // 0x246c48: 0x34e40004  ori         $a0, $a3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x246C4Cu;
        goto label_246c4c;
    }
    ctx->pc = 0x246C44u;
    {
        const bool branch_taken_0x246c44 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x246C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246C44u;
        // 0x246c48: 0x34e40004  ori         $a0, $a3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x246c44) {
            ctx->pc = 0x247030u;
            { ctx->pc = 0x247030; return; }
        }
    }
    ctx->pc = 0x246C4Cu;
label_246c4c:
    // 0x246c4c: 0xac640014  sw          $a0, 0x14($v1)
    ctx->pc = 0x246c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 4));
label_246c50:
    // 0x246c50: 0x8465000c  lh          $a1, 0xC($v1)
    ctx->pc = 0x246c50u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
label_246c54:
    // 0x246c54: 0x28a10003  slti        $at, $a1, 0x3
    ctx->pc = 0x246c54u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
label_246c58:
    // 0x246c58: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_246c5c:
    if (ctx->pc == 0x246C5Cu) {
        ctx->pc = 0x246C60u;
        goto label_246c60;
    }
    ctx->pc = 0x246C58u;
    {
        const bool branch_taken_0x246c58 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x246c58) {
            ctx->pc = 0x246C68u;
            goto label_246c68;
        }
    }
    ctx->pc = 0x246C60u;
label_246c60:
    // 0x246c60: 0x10000005  b           . + 4 + (0x5 << 2)
label_246c64:
    if (ctx->pc == 0x246C64u) {
        ctx->pc = 0x246C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246C60u;
        // 0x246c64: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246C68u;
        goto label_246c68;
    }
    ctx->pc = 0x246C60u;
    {
        const bool branch_taken_0x246c60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246C60u;
        // 0x246c64: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246c60) {
            ctx->pc = 0x246C78u;
            goto label_246c78;
        }
    }
    ctx->pc = 0x246C68u;
label_246c68:
    // 0x246c68: 0x24a4fffe  addiu       $a0, $a1, -0x2
    ctx->pc = 0x246c68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967294));
label_246c6c:
    // 0x246c6c: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x246c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_246c70:
    // 0x246c70: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x246c70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
label_246c74:
    // 0x246c74: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x246c74u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_246c78:
    // 0x246c78: 0x4343c  dsll32      $a2, $a0, 16
    ctx->pc = 0x246c78u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 16));
label_246c7c:
    // 0x246c7c: 0x3c01002d  lui         $at, 0x2D
    ctx->pc = 0x246c7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)45 << 16));
label_246c80:
    // 0x246c80: 0x9024eaf2  lbu         $a0, -0x150E($at)
    ctx->pc = 0x246c80u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294961906)));
label_246c84:
    // 0x246c84: 0x52c3c  dsll32      $a1, $a1, 16
    ctx->pc = 0x246c84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
label_246c88:
    // 0x246c88: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x246c88u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_246c8c:
    // 0x246c8c: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x246c8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
label_246c90:
    // 0x246c90: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x246c90u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_246c94:
    // 0x246c94: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x246c94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_246c98:
    // 0x246c98: 0x2881001a  slti        $at, $a0, 0x1A
    ctx->pc = 0x246c98u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)26) ? 1 : 0);
label_246c9c:
    // 0x246c9c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_246ca0:
    if (ctx->pc == 0x246CA0u) {
        ctx->pc = 0x246CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246C9Cu;
        // 0x246ca0: 0x6343f  dsra32      $a2, $a2, 16 (Delay Slot)
        SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246CA4u;
        goto label_246ca4;
    }
    ctx->pc = 0x246C9Cu;
    {
        const bool branch_taken_0x246c9c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x246CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246C9Cu;
        // 0x246ca0: 0x6343f  dsra32      $a2, $a2, 16 (Delay Slot)
        SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246c9c) {
            ctx->pc = 0x246CACu;
            goto label_246cac;
        }
    }
    ctx->pc = 0x246CA4u;
label_246ca4:
    // 0x246ca4: 0x10000003  b           . + 4 + (0x3 << 2)
label_246ca8:
    if (ctx->pc == 0x246CA8u) {
        ctx->pc = 0x246CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246CA4u;
        // 0x246ca8: 0xa464000c  sh          $a0, 0xC($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246CACu;
        goto label_246cac;
    }
    ctx->pc = 0x246CA4u;
    {
        const bool branch_taken_0x246ca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246CA4u;
        // 0x246ca8: 0xa464000c  sh          $a0, 0xC($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246ca4) {
            ctx->pc = 0x246CB4u;
            goto label_246cb4;
        }
    }
    ctx->pc = 0x246CACu;
label_246cac:
    // 0x246cac: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x246cacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_246cb0:
    // 0x246cb0: 0xa464000c  sh          $a0, 0xC($v1)
    ctx->pc = 0x246cb0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 4));
label_246cb4:
    // 0x246cb4: 0x8464000c  lh          $a0, 0xC($v1)
    ctx->pc = 0x246cb4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
label_246cb8:
    // 0x246cb8: 0x28810003  slti        $at, $a0, 0x3
    ctx->pc = 0x246cb8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
label_246cbc:
    // 0x246cbc: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_246cc0:
    if (ctx->pc == 0x246CC0u) {
        ctx->pc = 0x246CC4u;
        goto label_246cc4;
    }
    ctx->pc = 0x246CBCu;
    {
        const bool branch_taken_0x246cbc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x246cbc) {
            ctx->pc = 0x246CCCu;
            goto label_246ccc;
        }
    }
    ctx->pc = 0x246CC4u;
label_246cc4:
    // 0x246cc4: 0x10000005  b           . + 4 + (0x5 << 2)
label_246cc8:
    if (ctx->pc == 0x246CC8u) {
        ctx->pc = 0x246CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246CC4u;
        // 0x246cc8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246CCCu;
        goto label_246ccc;
    }
    ctx->pc = 0x246CC4u;
    {
        const bool branch_taken_0x246cc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246CC4u;
        // 0x246cc8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246cc4) {
            ctx->pc = 0x246CDCu;
            goto label_246cdc;
        }
    }
    ctx->pc = 0x246CCCu;
label_246ccc:
    // 0x246ccc: 0x2484fffe  addiu       $a0, $a0, -0x2
    ctx->pc = 0x246cccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967294));
label_246cd0:
    // 0x246cd0: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x246cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_246cd4:
    // 0x246cd4: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x246cd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
label_246cd8:
    // 0x246cd8: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x246cd8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_246cdc:
    // 0x246cdc: 0x42c3c  dsll32      $a1, $a0, 16
    ctx->pc = 0x246cdcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 16));
label_246ce0:
    // 0x246ce0: 0x6243c  dsll32      $a0, $a2, 16
    ctx->pc = 0x246ce0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 16));
label_246ce4:
    // 0x246ce4: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x246ce4u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_246ce8:
    // 0x246ce8: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x246ce8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_246cec:
    // 0x246cec: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x246cecu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_246cf0:
    // 0x246cf0: 0x42c3c  dsll32      $a1, $a0, 16
    ctx->pc = 0x246cf0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 16));
label_246cf4:
    // 0x246cf4: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x246cf4u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_246cf8:
    // 0x246cf8: 0x18a000cd  blez        $a1, . + 4 + (0xCD << 2)
label_246cfc:
    if (ctx->pc == 0x246CFCu) {
        ctx->pc = 0x246D00u;
        goto label_246d00;
    }
    ctx->pc = 0x246CF8u;
    {
        const bool branch_taken_0x246cf8 = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x246cf8) {
            ctx->pc = 0x247030u;
            { ctx->pc = 0x247030; return; }
        }
    }
    ctx->pc = 0x246D00u;
label_246d00:
    // 0x246d00: 0x8464000e  lh          $a0, 0xE($v1)
    ctx->pc = 0x246d00u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
label_246d04:
    // 0x246d04: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x246d04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_246d08:
    // 0x246d08: 0x28810064  slti        $at, $a0, 0x64
    ctx->pc = 0x246d08u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)100) ? 1 : 0);
label_246d0c:
    // 0x246d0c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_246d10:
    if (ctx->pc == 0x246D10u) {
        ctx->pc = 0x246D14u;
        goto label_246d14;
    }
    ctx->pc = 0x246D0Cu;
    {
        const bool branch_taken_0x246d0c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x246d0c) {
            ctx->pc = 0x246D1Cu;
            goto label_246d1c;
        }
    }
    ctx->pc = 0x246D14u;
label_246d14:
    // 0x246d14: 0x10000003  b           . + 4 + (0x3 << 2)
label_246d18:
    if (ctx->pc == 0x246D18u) {
        ctx->pc = 0x246D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246D14u;
        // 0x246d18: 0xa464000e  sh          $a0, 0xE($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246D1Cu;
        goto label_246d1c;
    }
    ctx->pc = 0x246D14u;
    {
        const bool branch_taken_0x246d14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246D14u;
        // 0x246d18: 0xa464000e  sh          $a0, 0xE($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246d14) {
            ctx->pc = 0x246D24u;
            goto label_246d24;
        }
    }
    ctx->pc = 0x246D1Cu;
label_246d1c:
    // 0x246d1c: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x246d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_246d20:
    // 0x246d20: 0xa464000e  sh          $a0, 0xE($v1)
    ctx->pc = 0x246d20u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 4));
label_246d24:
    // 0x246d24: 0x100000c2  b           . + 4 + (0xC2 << 2)
label_246d28:
    if (ctx->pc == 0x246D28u) {
        ctx->pc = 0x246D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246D24u;
        // 0x246d28: 0xa0600006  sb          $zero, 0x6($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 6), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246D2Cu;
        goto label_246d2c;
    }
    ctx->pc = 0x246D24u;
    {
        const bool branch_taken_0x246d24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246D24u;
        // 0x246d28: 0xa0600006  sb          $zero, 0x6($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 6), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246d24) {
            ctx->pc = 0x247030u;
            { ctx->pc = 0x247030; return; }
        }
    }
    ctx->pc = 0x246D2Cu;
label_246d2c:
    // 0x246d2c: 0x24a4ff67  addiu       $a0, $a1, -0x99
    ctx->pc = 0x246d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967143));
label_246d30:
    // 0x246d30: 0x2c810002  sltiu       $at, $a0, 0x2
    ctx->pc = 0x246d30u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_246d34:
    // 0x246d34: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
label_246d38:
    if (ctx->pc == 0x246D38u) {
        ctx->pc = 0x246D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246D34u;
        // 0x246d38: 0x30e40008  andi        $a0, $a3, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x246D3Cu;
        goto label_246d3c;
    }
    ctx->pc = 0x246D34u;
    {
        const bool branch_taken_0x246d34 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x246D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246D34u;
        // 0x246d38: 0x30e40008  andi        $a0, $a3, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x246d34) {
            ctx->pc = 0x246D54u;
            goto label_246d54;
        }
    }
    ctx->pc = 0x246D3Cu;
label_246d3c:
    // 0x246d3c: 0x240400e7  addiu       $a0, $zero, 0xE7
    ctx->pc = 0x246d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 231));
label_246d40:
    // 0x246d40: 0x10a40003  beq         $a1, $a0, . + 4 + (0x3 << 2)
label_246d44:
    if (ctx->pc == 0x246D44u) {
        ctx->pc = 0x246D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246D40u;
        // 0x246d44: 0x240400e6  addiu       $a0, $zero, 0xE6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 230));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246D48u;
        goto label_246d48;
    }
    ctx->pc = 0x246D40u;
    {
        const bool branch_taken_0x246d40 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x246D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246D40u;
        // 0x246d44: 0x240400e6  addiu       $a0, $zero, 0xE6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 230));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246d40) {
            ctx->pc = 0x246D50u;
            goto label_246d50;
        }
    }
    ctx->pc = 0x246D48u;
label_246d48:
    // 0x246d48: 0x14a4003d  bne         $a1, $a0, . + 4 + (0x3D << 2)
label_246d4c:
    if (ctx->pc == 0x246D4Cu) {
        ctx->pc = 0x246D50u;
        goto label_246d50;
    }
    ctx->pc = 0x246D48u;
    {
        const bool branch_taken_0x246d48 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x246d48) {
            ctx->pc = 0x246E40u;
            { ctx->pc = 0x246e40; return; }
        }
    }
    ctx->pc = 0x246D50u;
label_246d50:
    // 0x246d50: 0x30e40008  andi        $a0, $a3, 0x8
    ctx->pc = 0x246d50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)8);
label_246d54:
    // 0x246d54: 0x148000b6  bnez        $a0, . + 4 + (0xB6 << 2)
label_246d58:
    if (ctx->pc == 0x246D58u) {
        ctx->pc = 0x246D5Cu;
        goto label_246d5c;
    }
    ctx->pc = 0x246D54u;
    {
        const bool branch_taken_0x246d54 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x246d54) {
            ctx->pc = 0x247030u;
            { ctx->pc = 0x247030; return; }
        }
    }
    ctx->pc = 0x246D5Cu;
label_246d5c:
    // 0x246d5c: 0x8c640014  lw          $a0, 0x14($v1)
    ctx->pc = 0x246d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_246d60:
    // 0x246d60: 0x34840008  ori         $a0, $a0, 0x8
    ctx->pc = 0x246d60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
label_246d64:
    // 0x246d64: 0xac640014  sw          $a0, 0x14($v1)
    ctx->pc = 0x246d64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 4));
label_246d68:
    // 0x246d68: 0x8465000c  lh          $a1, 0xC($v1)
    ctx->pc = 0x246d68u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
label_246d6c:
    // 0x246d6c: 0x28a10003  slti        $at, $a1, 0x3
    ctx->pc = 0x246d6cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
label_246d70:
    // 0x246d70: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_246d74:
    if (ctx->pc == 0x246D74u) {
        ctx->pc = 0x246D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246D70u;
        // 0x246d74: 0x24a4fffe  addiu       $a0, $a1, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246D78u;
        goto label_246d78;
    }
    ctx->pc = 0x246D70u;
    {
        const bool branch_taken_0x246d70 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x246D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246D70u;
        // 0x246d74: 0x24a4fffe  addiu       $a0, $a1, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246d70) {
            ctx->pc = 0x246D80u;
            goto label_246d80;
        }
    }
    ctx->pc = 0x246D78u;
label_246d78:
    // 0x246d78: 0x10000004  b           . + 4 + (0x4 << 2)
label_246d7c:
    if (ctx->pc == 0x246D7Cu) {
        ctx->pc = 0x246D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246D78u;
        // 0x246d7c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246D80u;
        goto label_246d80;
    }
    ctx->pc = 0x246D78u;
    {
        const bool branch_taken_0x246d78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246D78u;
        // 0x246d7c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246d78) {
            ctx->pc = 0x246D8Cu;
            goto label_246d8c;
        }
    }
    ctx->pc = 0x246D80u;
label_246d80:
    // 0x246d80: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x246d80u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_246d84:
    // 0x246d84: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x246d84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
label_246d88:
    // 0x246d88: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x246d88u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_246d8c:
    // 0x246d8c: 0x4343c  dsll32      $a2, $a0, 16
    ctx->pc = 0x246d8cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 16));
label_246d90:
    // 0x246d90: 0x3c01002d  lui         $at, 0x2D
    ctx->pc = 0x246d90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)45 << 16));
label_246d94:
    // 0x246d94: 0x9024eaf3  lbu         $a0, -0x150D($at)
    ctx->pc = 0x246d94u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294961907)));
label_246d98:
    // 0x246d98: 0x52c3c  dsll32      $a1, $a1, 16
    ctx->pc = 0x246d98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
label_246d9c:
    // 0x246d9c: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x246d9cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_246da0:
    // 0x246da0: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x246da0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
label_246da4:
    // 0x246da4: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x246da4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_246da8:
    // 0x246da8: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x246da8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_246dac:
    // 0x246dac: 0x2881001a  slti        $at, $a0, 0x1A
    ctx->pc = 0x246dacu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)26) ? 1 : 0);
label_246db0:
    // 0x246db0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_246db4:
    if (ctx->pc == 0x246DB4u) {
        ctx->pc = 0x246DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246DB0u;
        // 0x246db4: 0x6343f  dsra32      $a2, $a2, 16 (Delay Slot)
        SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246DB8u;
        goto label_246db8;
    }
    ctx->pc = 0x246DB0u;
    {
        const bool branch_taken_0x246db0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x246DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246DB0u;
        // 0x246db4: 0x6343f  dsra32      $a2, $a2, 16 (Delay Slot)
        SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246db0) {
            ctx->pc = 0x246DC0u;
            goto label_246dc0;
        }
    }
    ctx->pc = 0x246DB8u;
label_246db8:
    // 0x246db8: 0x10000003  b           . + 4 + (0x3 << 2)
label_246dbc:
    if (ctx->pc == 0x246DBCu) {
        ctx->pc = 0x246DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246DB8u;
        // 0x246dbc: 0xa464000c  sh          $a0, 0xC($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246DC0u;
        goto label_246dc0;
    }
    ctx->pc = 0x246DB8u;
    {
        const bool branch_taken_0x246db8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246DB8u;
        // 0x246dbc: 0xa464000c  sh          $a0, 0xC($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246db8) {
            ctx->pc = 0x246DC8u;
            goto label_246dc8;
        }
    }
    ctx->pc = 0x246DC0u;
label_246dc0:
    // 0x246dc0: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x246dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_246dc4:
    // 0x246dc4: 0xa464000c  sh          $a0, 0xC($v1)
    ctx->pc = 0x246dc4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 4));
label_246dc8:
    // 0x246dc8: 0x8464000c  lh          $a0, 0xC($v1)
    ctx->pc = 0x246dc8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
label_246dcc:
    // 0x246dcc: 0x28810003  slti        $at, $a0, 0x3
    ctx->pc = 0x246dccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    ctx->pc = 0x246dd0u;
    return;
}

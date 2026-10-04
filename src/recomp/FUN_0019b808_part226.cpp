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

// Function: FUN_0019b808
// Address: 0x19b808 - 0x29b810
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b808_part226(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x2095d8u: goto label_2095d8;
        case 0x2095dcu: goto label_2095dc;
        case 0x2095e0u: goto label_2095e0;
        case 0x2095e4u: goto label_2095e4;
        case 0x2095e8u: goto label_2095e8;
        case 0x2095ecu: goto label_2095ec;
        case 0x2095f0u: goto label_2095f0;
        case 0x2095f4u: goto label_2095f4;
        case 0x2095f8u: goto label_2095f8;
        case 0x2095fcu: goto label_2095fc;
        case 0x209600u: goto label_209600;
        case 0x209604u: goto label_209604;
        case 0x209608u: goto label_209608;
        case 0x20960cu: goto label_20960c;
        case 0x209610u: goto label_209610;
        case 0x209614u: goto label_209614;
        case 0x209618u: goto label_209618;
        case 0x20961cu: goto label_20961c;
        case 0x209620u: goto label_209620;
        case 0x209624u: goto label_209624;
        case 0x209628u: goto label_209628;
        case 0x20962cu: goto label_20962c;
        case 0x209630u: goto label_209630;
        case 0x209634u: goto label_209634;
        case 0x209638u: goto label_209638;
        case 0x20963cu: goto label_20963c;
        case 0x209640u: goto label_209640;
        case 0x209644u: goto label_209644;
        case 0x209648u: goto label_209648;
        case 0x20964cu: goto label_20964c;
        case 0x209650u: goto label_209650;
        case 0x209654u: goto label_209654;
        case 0x209658u: goto label_209658;
        case 0x20965cu: goto label_20965c;
        case 0x209660u: goto label_209660;
        case 0x209664u: goto label_209664;
        case 0x209668u: goto label_209668;
        case 0x20966cu: goto label_20966c;
        case 0x209670u: goto label_209670;
        case 0x209674u: goto label_209674;
        case 0x209678u: goto label_209678;
        case 0x20967cu: goto label_20967c;
        case 0x209680u: goto label_209680;
        case 0x209684u: goto label_209684;
        case 0x209688u: goto label_209688;
        case 0x20968cu: goto label_20968c;
        case 0x209690u: goto label_209690;
        case 0x209694u: goto label_209694;
        case 0x209698u: goto label_209698;
        case 0x20969cu: goto label_20969c;
        case 0x2096a0u: goto label_2096a0;
        case 0x2096a4u: goto label_2096a4;
        case 0x2096a8u: goto label_2096a8;
        case 0x2096acu: goto label_2096ac;
        case 0x2096b0u: goto label_2096b0;
        case 0x2096b4u: goto label_2096b4;
        case 0x2096b8u: goto label_2096b8;
        case 0x2096bcu: goto label_2096bc;
        case 0x2096c0u: goto label_2096c0;
        case 0x2096c4u: goto label_2096c4;
        case 0x2096c8u: goto label_2096c8;
        case 0x2096ccu: goto label_2096cc;
        case 0x2096d0u: goto label_2096d0;
        case 0x2096d4u: goto label_2096d4;
        case 0x2096d8u: goto label_2096d8;
        case 0x2096dcu: goto label_2096dc;
        case 0x2096e0u: goto label_2096e0;
        case 0x2096e4u: goto label_2096e4;
        case 0x2096e8u: goto label_2096e8;
        case 0x2096ecu: goto label_2096ec;
        case 0x2096f0u: goto label_2096f0;
        case 0x2096f4u: goto label_2096f4;
        case 0x2096f8u: goto label_2096f8;
        case 0x2096fcu: goto label_2096fc;
        case 0x209700u: goto label_209700;
        case 0x209704u: goto label_209704;
        case 0x209708u: goto label_209708;
        case 0x20970cu: goto label_20970c;
        case 0x209710u: goto label_209710;
        case 0x209714u: goto label_209714;
        case 0x209718u: goto label_209718;
        case 0x20971cu: goto label_20971c;
        case 0x209720u: goto label_209720;
        case 0x209724u: goto label_209724;
        case 0x209728u: goto label_209728;
        case 0x20972cu: goto label_20972c;
        case 0x209730u: goto label_209730;
        case 0x209734u: goto label_209734;
        case 0x209738u: goto label_209738;
        case 0x20973cu: goto label_20973c;
        case 0x209740u: goto label_209740;
        case 0x209744u: goto label_209744;
        case 0x209748u: goto label_209748;
        case 0x20974cu: goto label_20974c;
        case 0x209750u: goto label_209750;
        case 0x209754u: goto label_209754;
        case 0x209758u: goto label_209758;
        case 0x20975cu: goto label_20975c;
        case 0x209760u: goto label_209760;
        case 0x209764u: goto label_209764;
        case 0x209768u: goto label_209768;
        case 0x20976cu: goto label_20976c;
        case 0x209770u: goto label_209770;
        case 0x209774u: goto label_209774;
        case 0x209778u: goto label_209778;
        case 0x20977cu: goto label_20977c;
        case 0x209780u: goto label_209780;
        case 0x209784u: goto label_209784;
        case 0x209788u: goto label_209788;
        case 0x20978cu: goto label_20978c;
        case 0x209790u: goto label_209790;
        case 0x209794u: goto label_209794;
        case 0x209798u: goto label_209798;
        case 0x20979cu: goto label_20979c;
        case 0x2097a0u: goto label_2097a0;
        case 0x2097a4u: goto label_2097a4;
        case 0x2097a8u: goto label_2097a8;
        case 0x2097acu: goto label_2097ac;
        case 0x2097b0u: goto label_2097b0;
        case 0x2097b4u: goto label_2097b4;
        case 0x2097b8u: goto label_2097b8;
        case 0x2097bcu: goto label_2097bc;
        case 0x2097c0u: goto label_2097c0;
        case 0x2097c4u: goto label_2097c4;
        case 0x2097c8u: goto label_2097c8;
        case 0x2097ccu: goto label_2097cc;
        case 0x2097d0u: goto label_2097d0;
        case 0x2097d4u: goto label_2097d4;
        case 0x2097d8u: goto label_2097d8;
        case 0x2097dcu: goto label_2097dc;
        case 0x2097e0u: goto label_2097e0;
        case 0x2097e4u: goto label_2097e4;
        case 0x2097e8u: goto label_2097e8;
        case 0x2097ecu: goto label_2097ec;
        case 0x2097f0u: goto label_2097f0;
        case 0x2097f4u: goto label_2097f4;
        case 0x2097f8u: goto label_2097f8;
        case 0x2097fcu: goto label_2097fc;
        case 0x209800u: goto label_209800;
        case 0x209804u: goto label_209804;
        case 0x209808u: goto label_209808;
        case 0x20980cu: goto label_20980c;
        case 0x209810u: goto label_209810;
        case 0x209814u: goto label_209814;
        case 0x209818u: goto label_209818;
        case 0x20981cu: goto label_20981c;
        case 0x209820u: goto label_209820;
        case 0x209824u: goto label_209824;
        case 0x209828u: goto label_209828;
        case 0x20982cu: goto label_20982c;
        case 0x209830u: goto label_209830;
        case 0x209834u: goto label_209834;
        case 0x209838u: goto label_209838;
        case 0x20983cu: goto label_20983c;
        case 0x209840u: goto label_209840;
        case 0x209844u: goto label_209844;
        case 0x209848u: goto label_209848;
        case 0x20984cu: goto label_20984c;
        case 0x209850u: goto label_209850;
        case 0x209854u: goto label_209854;
        case 0x209858u: goto label_209858;
        case 0x20985cu: goto label_20985c;
        case 0x209860u: goto label_209860;
        case 0x209864u: goto label_209864;
        case 0x209868u: goto label_209868;
        case 0x20986cu: goto label_20986c;
        case 0x209870u: goto label_209870;
        case 0x209874u: goto label_209874;
        case 0x209878u: goto label_209878;
        case 0x20987cu: goto label_20987c;
        case 0x209880u: goto label_209880;
        case 0x209884u: goto label_209884;
        case 0x209888u: goto label_209888;
        case 0x20988cu: goto label_20988c;
        case 0x209890u: goto label_209890;
        case 0x209894u: goto label_209894;
        case 0x209898u: goto label_209898;
        case 0x20989cu: goto label_20989c;
        case 0x2098a0u: goto label_2098a0;
        case 0x2098a4u: goto label_2098a4;
        case 0x2098a8u: goto label_2098a8;
        case 0x2098acu: goto label_2098ac;
        case 0x2098b0u: goto label_2098b0;
        case 0x2098b4u: goto label_2098b4;
        case 0x2098b8u: goto label_2098b8;
        case 0x2098bcu: goto label_2098bc;
        case 0x2098c0u: goto label_2098c0;
        case 0x2098c4u: goto label_2098c4;
        case 0x2098c8u: goto label_2098c8;
        case 0x2098ccu: goto label_2098cc;
        case 0x2098d0u: goto label_2098d0;
        case 0x2098d4u: goto label_2098d4;
        case 0x2098d8u: goto label_2098d8;
        case 0x2098dcu: goto label_2098dc;
        case 0x2098e0u: goto label_2098e0;
        case 0x2098e4u: goto label_2098e4;
        case 0x2098e8u: goto label_2098e8;
        case 0x2098ecu: goto label_2098ec;
        case 0x2098f0u: goto label_2098f0;
        case 0x2098f4u: goto label_2098f4;
        case 0x2098f8u: goto label_2098f8;
        case 0x2098fcu: goto label_2098fc;
        case 0x209900u: goto label_209900;
        case 0x209904u: goto label_209904;
        case 0x209908u: goto label_209908;
        case 0x20990cu: goto label_20990c;
        case 0x209910u: goto label_209910;
        case 0x209914u: goto label_209914;
        case 0x209918u: goto label_209918;
        case 0x20991cu: goto label_20991c;
        case 0x209920u: goto label_209920;
        case 0x209924u: goto label_209924;
        case 0x209928u: goto label_209928;
        case 0x20992cu: goto label_20992c;
        case 0x209930u: goto label_209930;
        case 0x209934u: goto label_209934;
        case 0x209938u: goto label_209938;
        case 0x20993cu: goto label_20993c;
        case 0x209940u: goto label_209940;
        case 0x209944u: goto label_209944;
        case 0x209948u: goto label_209948;
        case 0x20994cu: goto label_20994c;
        case 0x209950u: goto label_209950;
        case 0x209954u: goto label_209954;
        case 0x209958u: goto label_209958;
        case 0x20995cu: goto label_20995c;
        case 0x209960u: goto label_209960;
        case 0x209964u: goto label_209964;
        case 0x209968u: goto label_209968;
        case 0x20996cu: goto label_20996c;
        case 0x209970u: goto label_209970;
        case 0x209974u: goto label_209974;
        case 0x209978u: goto label_209978;
        case 0x20997cu: goto label_20997c;
        case 0x209980u: goto label_209980;
        case 0x209984u: goto label_209984;
        case 0x209988u: goto label_209988;
        case 0x20998cu: goto label_20998c;
        case 0x209990u: goto label_209990;
        case 0x209994u: goto label_209994;
        case 0x209998u: goto label_209998;
        case 0x20999cu: goto label_20999c;
        case 0x2099a0u: goto label_2099a0;
        case 0x2099a4u: goto label_2099a4;
        case 0x2099a8u: goto label_2099a8;
        case 0x2099acu: goto label_2099ac;
        case 0x2099b0u: goto label_2099b0;
        case 0x2099b4u: goto label_2099b4;
        case 0x2099b8u: goto label_2099b8;
        case 0x2099bcu: goto label_2099bc;
        case 0x2099c0u: goto label_2099c0;
        case 0x2099c4u: goto label_2099c4;
        case 0x2099c8u: goto label_2099c8;
        case 0x2099ccu: goto label_2099cc;
        case 0x2099d0u: goto label_2099d0;
        case 0x2099d4u: goto label_2099d4;
        case 0x2099d8u: goto label_2099d8;
        case 0x2099dcu: goto label_2099dc;
        case 0x2099e0u: goto label_2099e0;
        case 0x2099e4u: goto label_2099e4;
        case 0x2099e8u: goto label_2099e8;
        case 0x2099ecu: goto label_2099ec;
        case 0x2099f0u: goto label_2099f0;
        case 0x2099f4u: goto label_2099f4;
        case 0x2099f8u: goto label_2099f8;
        case 0x2099fcu: goto label_2099fc;
        case 0x209a00u: goto label_209a00;
        case 0x209a04u: goto label_209a04;
        case 0x209a08u: goto label_209a08;
        case 0x209a0cu: goto label_209a0c;
        case 0x209a10u: goto label_209a10;
        case 0x209a14u: goto label_209a14;
        case 0x209a18u: goto label_209a18;
        case 0x209a1cu: goto label_209a1c;
        case 0x209a20u: goto label_209a20;
        case 0x209a24u: goto label_209a24;
        case 0x209a28u: goto label_209a28;
        case 0x209a2cu: goto label_209a2c;
        case 0x209a30u: goto label_209a30;
        case 0x209a34u: goto label_209a34;
        case 0x209a38u: goto label_209a38;
        case 0x209a3cu: goto label_209a3c;
        case 0x209a40u: goto label_209a40;
        case 0x209a44u: goto label_209a44;
        case 0x209a48u: goto label_209a48;
        case 0x209a4cu: goto label_209a4c;
        case 0x209a50u: goto label_209a50;
        case 0x209a54u: goto label_209a54;
        case 0x209a58u: goto label_209a58;
        case 0x209a5cu: goto label_209a5c;
        case 0x209a60u: goto label_209a60;
        case 0x209a64u: goto label_209a64;
        case 0x209a68u: goto label_209a68;
        case 0x209a6cu: goto label_209a6c;
        case 0x209a70u: goto label_209a70;
        case 0x209a74u: goto label_209a74;
        case 0x209a78u: goto label_209a78;
        case 0x209a7cu: goto label_209a7c;
        case 0x209a80u: goto label_209a80;
        case 0x209a84u: goto label_209a84;
        case 0x209a88u: goto label_209a88;
        case 0x209a8cu: goto label_209a8c;
        case 0x209a90u: goto label_209a90;
        case 0x209a94u: goto label_209a94;
        case 0x209a98u: goto label_209a98;
        case 0x209a9cu: goto label_209a9c;
        case 0x209aa0u: goto label_209aa0;
        case 0x209aa4u: goto label_209aa4;
        case 0x209aa8u: goto label_209aa8;
        case 0x209aacu: goto label_209aac;
        case 0x209ab0u: goto label_209ab0;
        case 0x209ab4u: goto label_209ab4;
        case 0x209ab8u: goto label_209ab8;
        case 0x209abcu: goto label_209abc;
        case 0x209ac0u: goto label_209ac0;
        case 0x209ac4u: goto label_209ac4;
        case 0x209ac8u: goto label_209ac8;
        case 0x209accu: goto label_209acc;
        case 0x209ad0u: goto label_209ad0;
        case 0x209ad4u: goto label_209ad4;
        case 0x209ad8u: goto label_209ad8;
        case 0x209adcu: goto label_209adc;
        case 0x209ae0u: goto label_209ae0;
        case 0x209ae4u: goto label_209ae4;
        case 0x209ae8u: goto label_209ae8;
        case 0x209aecu: goto label_209aec;
        case 0x209af0u: goto label_209af0;
        case 0x209af4u: goto label_209af4;
        case 0x209af8u: goto label_209af8;
        case 0x209afcu: goto label_209afc;
        case 0x209b00u: goto label_209b00;
        case 0x209b04u: goto label_209b04;
        case 0x209b08u: goto label_209b08;
        case 0x209b0cu: goto label_209b0c;
        case 0x209b10u: goto label_209b10;
        case 0x209b14u: goto label_209b14;
        case 0x209b18u: goto label_209b18;
        case 0x209b1cu: goto label_209b1c;
        case 0x209b20u: goto label_209b20;
        case 0x209b24u: goto label_209b24;
        case 0x209b28u: goto label_209b28;
        case 0x209b2cu: goto label_209b2c;
        case 0x209b30u: goto label_209b30;
        case 0x209b34u: goto label_209b34;
        case 0x209b38u: goto label_209b38;
        case 0x209b3cu: goto label_209b3c;
        case 0x209b40u: goto label_209b40;
        case 0x209b44u: goto label_209b44;
        case 0x209b48u: goto label_209b48;
        case 0x209b4cu: goto label_209b4c;
        case 0x209b50u: goto label_209b50;
        case 0x209b54u: goto label_209b54;
        case 0x209b58u: goto label_209b58;
        case 0x209b5cu: goto label_209b5c;
        case 0x209b60u: goto label_209b60;
        case 0x209b64u: goto label_209b64;
        case 0x209b68u: goto label_209b68;
        case 0x209b6cu: goto label_209b6c;
        case 0x209b70u: goto label_209b70;
        case 0x209b74u: goto label_209b74;
        case 0x209b78u: goto label_209b78;
        case 0x209b7cu: goto label_209b7c;
        case 0x209b80u: goto label_209b80;
        case 0x209b84u: goto label_209b84;
        case 0x209b88u: goto label_209b88;
        case 0x209b8cu: goto label_209b8c;
        case 0x209b90u: goto label_209b90;
        case 0x209b94u: goto label_209b94;
        case 0x209b98u: goto label_209b98;
        case 0x209b9cu: goto label_209b9c;
        case 0x209ba0u: goto label_209ba0;
        case 0x209ba4u: goto label_209ba4;
        case 0x209ba8u: goto label_209ba8;
        case 0x209bacu: goto label_209bac;
        case 0x209bb0u: goto label_209bb0;
        case 0x209bb4u: goto label_209bb4;
        case 0x209bb8u: goto label_209bb8;
        case 0x209bbcu: goto label_209bbc;
        case 0x209bc0u: goto label_209bc0;
        case 0x209bc4u: goto label_209bc4;
        case 0x209bc8u: goto label_209bc8;
        case 0x209bccu: goto label_209bcc;
        case 0x209bd0u: goto label_209bd0;
        case 0x209bd4u: goto label_209bd4;
        case 0x209bd8u: goto label_209bd8;
        case 0x209bdcu: goto label_209bdc;
        case 0x209be0u: goto label_209be0;
        case 0x209be4u: goto label_209be4;
        case 0x209be8u: goto label_209be8;
        case 0x209becu: goto label_209bec;
        case 0x209bf0u: goto label_209bf0;
        case 0x209bf4u: goto label_209bf4;
        case 0x209bf8u: goto label_209bf8;
        case 0x209bfcu: goto label_209bfc;
        case 0x209c00u: goto label_209c00;
        case 0x209c04u: goto label_209c04;
        case 0x209c08u: goto label_209c08;
        case 0x209c0cu: goto label_209c0c;
        case 0x209c10u: goto label_209c10;
        case 0x209c14u: goto label_209c14;
        case 0x209c18u: goto label_209c18;
        case 0x209c1cu: goto label_209c1c;
        case 0x209c20u: goto label_209c20;
        case 0x209c24u: goto label_209c24;
        case 0x209c28u: goto label_209c28;
        case 0x209c2cu: goto label_209c2c;
        case 0x209c30u: goto label_209c30;
        case 0x209c34u: goto label_209c34;
        case 0x209c38u: goto label_209c38;
        case 0x209c3cu: goto label_209c3c;
        case 0x209c40u: goto label_209c40;
        case 0x209c44u: goto label_209c44;
        case 0x209c48u: goto label_209c48;
        case 0x209c4cu: goto label_209c4c;
        case 0x209c50u: goto label_209c50;
        case 0x209c54u: goto label_209c54;
        case 0x209c58u: goto label_209c58;
        case 0x209c5cu: goto label_209c5c;
        case 0x209c60u: goto label_209c60;
        case 0x209c64u: goto label_209c64;
        case 0x209c68u: goto label_209c68;
        case 0x209c6cu: goto label_209c6c;
        case 0x209c70u: goto label_209c70;
        case 0x209c74u: goto label_209c74;
        case 0x209c78u: goto label_209c78;
        case 0x209c7cu: goto label_209c7c;
        case 0x209c80u: goto label_209c80;
        case 0x209c84u: goto label_209c84;
        case 0x209c88u: goto label_209c88;
        case 0x209c8cu: goto label_209c8c;
        case 0x209c90u: goto label_209c90;
        case 0x209c94u: goto label_209c94;
        case 0x209c98u: goto label_209c98;
        case 0x209c9cu: goto label_209c9c;
        case 0x209ca0u: goto label_209ca0;
        case 0x209ca4u: goto label_209ca4;
        case 0x209ca8u: goto label_209ca8;
        case 0x209cacu: goto label_209cac;
        case 0x209cb0u: goto label_209cb0;
        case 0x209cb4u: goto label_209cb4;
        case 0x209cb8u: goto label_209cb8;
        case 0x209cbcu: goto label_209cbc;
        case 0x209cc0u: goto label_209cc0;
        case 0x209cc4u: goto label_209cc4;
        case 0x209cc8u: goto label_209cc8;
        case 0x209cccu: goto label_209ccc;
        case 0x209cd0u: goto label_209cd0;
        case 0x209cd4u: goto label_209cd4;
        case 0x209cd8u: goto label_209cd8;
        case 0x209cdcu: goto label_209cdc;
        case 0x209ce0u: goto label_209ce0;
        case 0x209ce4u: goto label_209ce4;
        case 0x209ce8u: goto label_209ce8;
        case 0x209cecu: goto label_209cec;
        case 0x209cf0u: goto label_209cf0;
        case 0x209cf4u: goto label_209cf4;
        case 0x209cf8u: goto label_209cf8;
        case 0x209cfcu: goto label_209cfc;
        case 0x209d00u: goto label_209d00;
        case 0x209d04u: goto label_209d04;
        case 0x209d08u: goto label_209d08;
        case 0x209d0cu: goto label_209d0c;
        case 0x209d10u: goto label_209d10;
        case 0x209d14u: goto label_209d14;
        case 0x209d18u: goto label_209d18;
        case 0x209d1cu: goto label_209d1c;
        case 0x209d20u: goto label_209d20;
        case 0x209d24u: goto label_209d24;
        case 0x209d28u: goto label_209d28;
        case 0x209d2cu: goto label_209d2c;
        case 0x209d30u: goto label_209d30;
        case 0x209d34u: goto label_209d34;
        case 0x209d38u: goto label_209d38;
        case 0x209d3cu: goto label_209d3c;
        case 0x209d40u: goto label_209d40;
        case 0x209d44u: goto label_209d44;
        case 0x209d48u: goto label_209d48;
        case 0x209d4cu: goto label_209d4c;
        case 0x209d50u: goto label_209d50;
        case 0x209d54u: goto label_209d54;
        case 0x209d58u: goto label_209d58;
        case 0x209d5cu: goto label_209d5c;
        case 0x209d60u: goto label_209d60;
        case 0x209d64u: goto label_209d64;
        case 0x209d68u: goto label_209d68;
        case 0x209d6cu: goto label_209d6c;
        case 0x209d70u: goto label_209d70;
        case 0x209d74u: goto label_209d74;
        case 0x209d78u: goto label_209d78;
        case 0x209d7cu: goto label_209d7c;
        case 0x209d80u: goto label_209d80;
        case 0x209d84u: goto label_209d84;
        case 0x209d88u: goto label_209d88;
        case 0x209d8cu: goto label_209d8c;
        case 0x209d90u: goto label_209d90;
        case 0x209d94u: goto label_209d94;
        case 0x209d98u: goto label_209d98;
        case 0x209d9cu: goto label_209d9c;
        case 0x209da0u: goto label_209da0;
        case 0x209da4u: goto label_209da4;
        default: return;
    }

label_2095d8:
    // 0x2095d8: 0x10000002  b           . + 4 + (0x2 << 2)
label_2095dc:
    if (ctx->pc == 0x2095DCu) {
        ctx->pc = 0x2095DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2095D8u;
        // 0x2095dc: 0x2631fff9  addiu       $s1, $s1, -0x7 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967289));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2095E0u;
        goto label_2095e0;
    }
    ctx->pc = 0x2095D8u;
    {
        const bool branch_taken_0x2095d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2095DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2095D8u;
        // 0x2095dc: 0x2631fff9  addiu       $s1, $s1, -0x7 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967289));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2095d8) {
            ctx->pc = 0x2095E4u;
            goto label_2095e4;
        }
    }
    ctx->pc = 0x2095E0u;
label_2095e0:
    // 0x2095e0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2095e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2095e4:
    // 0x2095e4: 0x8f829100  lw          $v0, -0x6F00($gp)
    ctx->pc = 0x2095e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
label_2095e8:
    // 0x2095e8: 0x2a210028  slti        $at, $s1, 0x28
    ctx->pc = 0x2095e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)40) ? 1 : 0);
label_2095ec:
    // 0x2095ec: 0x24150028  addiu       $s5, $zero, 0x28
    ctx->pc = 0x2095ecu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_2095f0:
    // 0x2095f0: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
label_2095f4:
    if (ctx->pc == 0x2095F4u) {
        ctx->pc = 0x2095F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2095F0u;
        // 0x2095f4: 0xac5157f0  sw          $s1, 0x57F0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 22512), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2095F8u;
        goto label_2095f8;
    }
    ctx->pc = 0x2095F0u;
    {
        const bool branch_taken_0x2095f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2095F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2095F0u;
        // 0x2095f4: 0xac5157f0  sw          $s1, 0x57F0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 22512), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2095f0) {
            ctx->pc = 0x20960Cu;
            goto label_20960c;
        }
    }
    ctx->pc = 0x2095F8u;
label_2095f8:
    // 0x2095f8: 0x8f829100  lw          $v0, -0x6F00($gp)
    ctx->pc = 0x2095f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
label_2095fc:
    // 0x2095fc: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x2095fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_209600:
    // 0x209600: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x209600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_209604:
    // 0x209604: 0x8c555748  lw          $s5, 0x5748($v0)
    ctx->pc = 0x209604u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22344)));
label_209608:
    // 0x209608: 0x0  nop
    ctx->pc = 0x209608u;
    // NOP
label_20960c:
    // 0x20960c: 0x0  nop
    ctx->pc = 0x20960cu;
    // NOP
label_209610:
    // 0x209610: 0x2aa10028  slti        $at, $s5, 0x28
    ctx->pc = 0x209610u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)40) ? 1 : 0);
label_209614:
    // 0x209614: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
label_209618:
    if (ctx->pc == 0x209618u) {
        ctx->pc = 0x209618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209614u;
        // 0x209618: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20961Cu;
        goto label_20961c;
    }
    ctx->pc = 0x209614u;
    {
        const bool branch_taken_0x209614 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x209618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209614u;
        // 0x209618: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209614) {
            ctx->pc = 0x209664u;
            goto label_209664;
        }
    }
    ctx->pc = 0x20961Cu;
label_20961c:
    // 0x20961c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x20961cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_209620:
    // 0x209620: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x209620u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_209624:
    // 0x209624: 0x24070198  addiu       $a3, $zero, 0x198
    ctx->pc = 0x209624u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 408));
label_209628:
    // 0x209628: 0x24080090  addiu       $t0, $zero, 0x90
    ctx->pc = 0x209628u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
label_20962c:
    // 0x20962c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x20962cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_209630:
    // 0x209630: 0xc07f734  jal         func_1FDCD0
label_209634:
    if (ctx->pc == 0x209634u) {
        ctx->pc = 0x209634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209630u;
        // 0x209634: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209638u;
        goto label_209638;
    }
    ctx->pc = 0x209630u;
    SET_GPR_U32(ctx, 31, 0x209638u);
    ctx->pc = 0x209634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209630u;
    // 0x209634: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDCD0u;
    { ctx->pc = 0x1fdcd0; return; }
    ctx->pc = 0x209638u;
label_209638:
    // 0x209638: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x209638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20963c:
    // 0x20963c: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x20963cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_209640:
    // 0x209640: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x209640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_209644:
    // 0x209644: 0x240600ab  addiu       $a2, $zero, 0xAB
    ctx->pc = 0x209644u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 171));
label_209648:
    // 0x209648: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x209648u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20964c:
    // 0x20964c: 0x24090198  addiu       $t1, $zero, 0x198
    ctx->pc = 0x20964cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 408));
label_209650:
    // 0x209650: 0x240a0030  addiu       $t2, $zero, 0x30
    ctx->pc = 0x209650u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_209654:
    // 0x209654: 0xc07f47c  jal         func_1FD1F0
label_209658:
    if (ctx->pc == 0x209658u) {
        ctx->pc = 0x209658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209654u;
        // 0x209658: 0xa0582d  daddu       $t3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20965Cu;
        goto label_20965c;
    }
    ctx->pc = 0x209654u;
    SET_GPR_U32(ctx, 31, 0x20965Cu);
    ctx->pc = 0x209658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209654u;
    // 0x209658: 0xa0582d  daddu       $t3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD1F0u;
    { ctx->pc = 0x1fd1f0; return; }
    ctx->pc = 0x20965Cu;
label_20965c:
    // 0x20965c: 0x10000006  b           . + 4 + (0x6 << 2)
label_209660:
    if (ctx->pc == 0x209660u) {
        ctx->pc = 0x209664u;
        goto label_209664;
    }
    ctx->pc = 0x20965Cu;
    {
        const bool branch_taken_0x20965c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20965c) {
            ctx->pc = 0x209678u;
            goto label_209678;
        }
    }
    ctx->pc = 0x209664u;
label_209664:
    // 0x209664: 0x0  nop
    ctx->pc = 0x209664u;
    // NOP
label_209668:
    // 0x209668: 0xc07f708  jal         func_1FDC20
label_20966c:
    if (ctx->pc == 0x20966Cu) {
        ctx->pc = 0x209670u;
        goto label_209670;
    }
    ctx->pc = 0x209668u;
    SET_GPR_U32(ctx, 31, 0x209670u);
    ctx->pc = 0x1FDC20u;
    { ctx->pc = 0x1fdc20; return; }
    ctx->pc = 0x209670u;
label_209670:
    // 0x209670: 0xc07f468  jal         func_1FD1A0
label_209674:
    if (ctx->pc == 0x209674u) {
        ctx->pc = 0x209678u;
        goto label_209678;
    }
    ctx->pc = 0x209670u;
    SET_GPR_U32(ctx, 31, 0x209678u);
    ctx->pc = 0x1FD1A0u;
    { ctx->pc = 0x1fd1a0; return; }
    ctx->pc = 0x209678u;
label_209678:
    // 0x209678: 0xc07b48c  jal         func_1ED230
label_20967c:
    if (ctx->pc == 0x20967Cu) {
        ctx->pc = 0x209680u;
        goto label_209680;
    }
    ctx->pc = 0x209678u;
    SET_GPR_U32(ctx, 31, 0x209680u);
    ctx->pc = 0x1ED230u;
    { ctx->pc = 0x1ed230; return; }
    ctx->pc = 0x209680u;
label_209680:
    // 0x209680: 0x1000fdab  b           . + 4 + (-0x255 << 2)
label_209684:
    if (ctx->pc == 0x209684u) {
        ctx->pc = 0x209688u;
        goto label_209688;
    }
    ctx->pc = 0x209680u;
    {
        const bool branch_taken_0x209680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x209680) {
            ctx->pc = 0x208D30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x208d30; return; }
        }
    }
    ctx->pc = 0x209688u;
label_209688:
    // 0x209688: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x209688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_20968c:
    // 0x20968c: 0x1682000c  bne         $s4, $v0, . + 4 + (0xC << 2)
label_209690:
    if (ctx->pc == 0x209690u) {
        ctx->pc = 0x209690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20968Cu;
        // 0x209690: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209694u;
        goto label_209694;
    }
    ctx->pc = 0x20968Cu;
    {
        const bool branch_taken_0x20968c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x209690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20968Cu;
        // 0x209690: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20968c) {
            ctx->pc = 0x2096C0u;
            goto label_2096c0;
        }
    }
    ctx->pc = 0x209694u;
label_209694:
    // 0x209694: 0x8f829100  lw          $v0, -0x6F00($gp)
    ctx->pc = 0x209694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
label_209698:
    // 0x209698: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x209698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_20969c:
    // 0x20969c: 0xc07f708  jal         func_1FDC20
label_2096a0:
    if (ctx->pc == 0x2096A0u) {
        ctx->pc = 0x2096A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20969Cu;
        // 0x2096a0: 0xac4357ec  sw          $v1, 0x57EC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 22508), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2096A4u;
        goto label_2096a4;
    }
    ctx->pc = 0x20969Cu;
    SET_GPR_U32(ctx, 31, 0x2096A4u);
    ctx->pc = 0x2096A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20969Cu;
    // 0x2096a0: 0xac4357ec  sw          $v1, 0x57EC($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 22508), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDC20u;
    { ctx->pc = 0x1fdc20; return; }
    ctx->pc = 0x2096A4u;
label_2096a4:
    // 0x2096a4: 0xc07f468  jal         func_1FD1A0
label_2096a8:
    if (ctx->pc == 0x2096A8u) {
        ctx->pc = 0x2096ACu;
        goto label_2096ac;
    }
    ctx->pc = 0x2096A4u;
    SET_GPR_U32(ctx, 31, 0x2096ACu);
    ctx->pc = 0x1FD1A0u;
    { ctx->pc = 0x1fd1a0; return; }
    ctx->pc = 0x2096ACu;
label_2096ac:
    // 0x2096ac: 0x8f829100  lw          $v0, -0x6F00($gp)
    ctx->pc = 0x2096acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
label_2096b0:
    // 0x2096b0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2096b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2096b4:
    // 0x2096b4: 0xc078078  jal         func_1E01E0
label_2096b8:
    if (ctx->pc == 0x2096B8u) {
        ctx->pc = 0x2096B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2096B4u;
        // 0x2096b8: 0xac435720  sw          $v1, 0x5720($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 22304), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2096BCu;
        goto label_2096bc;
    }
    ctx->pc = 0x2096B4u;
    SET_GPR_U32(ctx, 31, 0x2096BCu);
    ctx->pc = 0x2096B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2096B4u;
    // 0x2096b8: 0xac435720  sw          $v1, 0x5720($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 22304), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E01E0u;
    { ctx->pc = 0x1e01e0; return; }
    ctx->pc = 0x2096BCu;
label_2096bc:
    // 0x2096bc: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x2096bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2096c0:
    // 0x2096c0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2096c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2096c4:
    // 0x2096c4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2096c4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2096c8:
    // 0x2096c8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2096c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2096cc:
    // 0x2096cc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2096ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2096d0:
    // 0x2096d0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2096d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2096d4:
    // 0x2096d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2096d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2096d8:
    // 0x2096d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2096d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2096dc:
    // 0x2096dc: 0x3e00008  jr          $ra
label_2096e0:
    if (ctx->pc == 0x2096E0u) {
        ctx->pc = 0x2096E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2096DCu;
        // 0x2096e0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2096E4u;
        goto label_2096e4;
    }
    ctx->pc = 0x2096DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2096E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2096DCu;
        // 0x2096e0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2096DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2096E4u;
label_2096e4:
    // 0x2096e4: 0x0  nop
    ctx->pc = 0x2096e4u;
    // NOP
label_2096e8:
    // 0x2096e8: 0x0  nop
    ctx->pc = 0x2096e8u;
    // NOP
label_2096ec:
    // 0x2096ec: 0x0  nop
    ctx->pc = 0x2096ecu;
    // NOP
label_2096f0:
    // 0x2096f0: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x2096f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_2096f4:
    // 0x2096f4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2096f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2096f8:
    // 0x2096f8: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2096f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2096fc:
    // 0x2096fc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2096fcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_209700:
    // 0x209700: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x209700u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
label_209704:
    // 0x209704: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x209704u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_209708:
    // 0x209708: 0x24631300  addiu       $v1, $v1, 0x1300
    ctx->pc = 0x209708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4864));
label_20970c:
    // 0x20970c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x20970cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_209710:
    // 0x209710: 0x24683620  addiu       $t0, $v1, 0x3620
    ctx->pc = 0x209710u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 13856));
label_209714:
    // 0x209714: 0x24040029  addiu       $a0, $zero, 0x29
    ctx->pc = 0x209714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
label_209718:
    // 0x209718: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x209718u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_20971c:
    // 0x20971c: 0x1071821  addu        $v1, $t0, $a3
    ctx->pc = 0x20971cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
label_209720:
    // 0x209720: 0x9066005e  lbu         $a2, 0x5E($v1)
    ctx->pc = 0x209720u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 94)));
label_209724:
    // 0x209724: 0x14c50005  bne         $a2, $a1, . + 4 + (0x5 << 2)
label_209728:
    if (ctx->pc == 0x209728u) {
        ctx->pc = 0x20972Cu;
        goto label_20972c;
    }
    ctx->pc = 0x209724u;
    {
        const bool branch_taken_0x209724 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 5));
        if (branch_taken_0x209724) {
            ctx->pc = 0x20973Cu;
            goto label_20973c;
        }
    }
    ctx->pc = 0x20972Cu;
label_20972c:
    // 0x20972c: 0x8f839100  lw          $v1, -0x6F00($gp)
    ctx->pc = 0x20972cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
label_209730:
    // 0x209730: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x209730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_209734:
    // 0x209734: 0x10000005  b           . + 4 + (0x5 << 2)
label_209738:
    if (ctx->pc == 0x209738u) {
        ctx->pc = 0x209738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209734u;
        // 0x209738: 0xac645734  sw          $a0, 0x5734($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 22324), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20973Cu;
        goto label_20973c;
    }
    ctx->pc = 0x209734u;
    {
        const bool branch_taken_0x209734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x209738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209734u;
        // 0x209738: 0xac645734  sw          $a0, 0x5734($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 22324), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209734) {
            ctx->pc = 0x20974Cu;
            goto label_20974c;
        }
    }
    ctx->pc = 0x20973Cu;
label_20973c:
    // 0x20973c: 0x0  nop
    ctx->pc = 0x20973cu;
    // NOP
label_209740:
    // 0x209740: 0x8f839100  lw          $v1, -0x6F00($gp)
    ctx->pc = 0x209740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
label_209744:
    // 0x209744: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x209744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_209748:
    // 0x209748: 0xac665734  sw          $a2, 0x5734($v1)
    ctx->pc = 0x209748u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22324), GPR_U32(ctx, 6));
label_20974c:
    // 0x20974c: 0x0  nop
    ctx->pc = 0x20974cu;
    // NOP
label_209750:
    // 0x209750: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x209750u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_209754:
    // 0x209754: 0x28e30005  slti        $v1, $a3, 0x5
    ctx->pc = 0x209754u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)5) ? 1 : 0);
label_209758:
    // 0x209758: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
label_20975c:
    if (ctx->pc == 0x20975Cu) {
        ctx->pc = 0x20975Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209758u;
        // 0x20975c: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209760u;
        goto label_209760;
    }
    ctx->pc = 0x209758u;
    {
        const bool branch_taken_0x209758 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x20975Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209758u;
        // 0x20975c: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209758) {
            ctx->pc = 0x20971Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20971c;
        }
    }
    ctx->pc = 0x209760u;
label_209760:
    // 0x209760: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x209760u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_209764:
    // 0x209764: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x209764u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_209768:
    // 0x209768: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x209768u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20976c:
    // 0x20976c: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x20976cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
label_209770:
    // 0x209770: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x209770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_209774:
    // 0x209774: 0x24a5c990  addiu       $a1, $a1, -0x3670
    ctx->pc = 0x209774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953360));
label_209778:
    // 0x209778: 0xa61821  addu        $v1, $a1, $a2
    ctx->pc = 0x209778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_20977c:
    // 0x20977c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x20977cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_209780:
    // 0x209780: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x209780u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_209784:
    // 0x209784: 0x902339c0  lbu         $v1, 0x39C0($at)
    ctx->pc = 0x209784u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 14784)));
label_209788:
    // 0x209788: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
label_20978c:
    if (ctx->pc == 0x20978Cu) {
        ctx->pc = 0x209790u;
        goto label_209790;
    }
    ctx->pc = 0x209788u;
    {
        const bool branch_taken_0x209788 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x209788) {
            ctx->pc = 0x2097A0u;
            goto label_2097a0;
        }
    }
    ctx->pc = 0x209790u;
label_209790:
    // 0x209790: 0x8f839100  lw          $v1, -0x6F00($gp)
    ctx->pc = 0x209790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
label_209794:
    // 0x209794: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x209794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_209798:
    // 0x209798: 0x10000004  b           . + 4 + (0x4 << 2)
label_20979c:
    if (ctx->pc == 0x20979Cu) {
        ctx->pc = 0x20979Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209798u;
        // 0x20979c: 0xac645748  sw          $a0, 0x5748($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 22344), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2097A0u;
        goto label_2097a0;
    }
    ctx->pc = 0x209798u;
    {
        const bool branch_taken_0x209798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20979Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209798u;
        // 0x20979c: 0xac645748  sw          $a0, 0x5748($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 22344), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209798) {
            ctx->pc = 0x2097ACu;
            goto label_2097ac;
        }
    }
    ctx->pc = 0x2097A0u;
label_2097a0:
    // 0x2097a0: 0x8f839100  lw          $v1, -0x6F00($gp)
    ctx->pc = 0x2097a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
label_2097a4:
    // 0x2097a4: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2097a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_2097a8:
    // 0x2097a8: 0xac685748  sw          $t0, 0x5748($v1)
    ctx->pc = 0x2097a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22344), GPR_U32(ctx, 8));
label_2097ac:
    // 0x2097ac: 0x0  nop
    ctx->pc = 0x2097acu;
    // NOP
label_2097b0:
    // 0x2097b0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2097b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_2097b4:
    // 0x2097b4: 0x29030028  slti        $v1, $t0, 0x28
    ctx->pc = 0x2097b4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)40) ? 1 : 0);
label_2097b8:
    // 0x2097b8: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x2097b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
label_2097bc:
    // 0x2097bc: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
label_2097c0:
    if (ctx->pc == 0x2097C0u) {
        ctx->pc = 0x2097C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2097BCu;
        // 0x2097c0: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2097C4u;
        goto label_2097c4;
    }
    ctx->pc = 0x2097BCu;
    {
        const bool branch_taken_0x2097bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2097C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2097BCu;
        // 0x2097c0: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2097bc) {
            ctx->pc = 0x209778u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_209778;
        }
    }
    ctx->pc = 0x2097C4u;
label_2097c4:
    // 0x2097c4: 0x3e00008  jr          $ra
label_2097c8:
    if (ctx->pc == 0x2097C8u) {
        ctx->pc = 0x2097CCu;
        goto label_2097cc;
    }
    ctx->pc = 0x2097C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2097C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2097CCu;
label_2097cc:
    // 0x2097cc: 0x0  nop
    ctx->pc = 0x2097ccu;
    // NOP
label_2097d0:
    // 0x2097d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2097d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2097d4:
    // 0x2097d4: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x2097d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_2097d8:
    // 0x2097d8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2097d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_2097dc:
    // 0x2097dc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2097dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2097e0:
    // 0x2097e0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2097e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2097e4:
    // 0x2097e4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2097e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2097e8:
    // 0x2097e8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2097e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2097ec:
    // 0x2097ec: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2097ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2097f0:
    // 0x2097f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2097f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2097f4:
    // 0x2097f4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2097f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2097f8:
    // 0x2097f8: 0x8f859100  lw          $a1, -0x6F00($gp)
    ctx->pc = 0x2097f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
label_2097fc:
    // 0x2097fc: 0x24a25748  addiu       $v0, $a1, 0x5748
    ctx->pc = 0x2097fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 22344));
label_209800:
    // 0x209800: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x209800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_209804:
    // 0x209804: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x209804u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_209808:
    // 0x209808: 0x2a210028  slti        $at, $s1, 0x28
    ctx->pc = 0x209808u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)40) ? 1 : 0);
label_20980c:
    // 0x20980c: 0x10200062  beqz        $at, . + 4 + (0x62 << 2)
label_209810:
    if (ctx->pc == 0x209810u) {
        ctx->pc = 0x209810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20980Cu;
        // 0x209810: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209814u;
        goto label_209814;
    }
    ctx->pc = 0x20980Cu;
    {
        const bool branch_taken_0x20980c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x209810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20980Cu;
        // 0x209810: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20980c) {
            ctx->pc = 0x209998u;
            goto label_209998;
        }
    }
    ctx->pc = 0x209814u;
label_209814:
    // 0x209814: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x209814u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_209818:
    // 0x209818: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x209818u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20981c:
    // 0x20981c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x20981cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_209820:
    // 0x209820: 0x10730007  beq         $v1, $s3, . + 4 + (0x7 << 2)
label_209824:
    if (ctx->pc == 0x209824u) {
        ctx->pc = 0x209824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209820u;
        // 0x209824: 0xa41021  addu        $v0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209828u;
        goto label_209828;
    }
    ctx->pc = 0x209820u;
    {
        const bool branch_taken_0x209820 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        ctx->pc = 0x209824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209820u;
        // 0x209824: 0xa41021  addu        $v0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209820) {
            ctx->pc = 0x209840u;
            goto label_209840;
        }
    }
    ctx->pc = 0x209828u;
label_209828:
    // 0x209828: 0x8c425734  lw          $v0, 0x5734($v0)
    ctx->pc = 0x209828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22324)));
label_20982c:
    // 0x20982c: 0x16220004  bne         $s1, $v0, . + 4 + (0x4 << 2)
label_209830:
    if (ctx->pc == 0x209830u) {
        ctx->pc = 0x209834u;
        goto label_209834;
    }
    ctx->pc = 0x20982Cu;
    {
        const bool branch_taken_0x20982c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x20982c) {
            ctx->pc = 0x209840u;
            goto label_209840;
        }
    }
    ctx->pc = 0x209834u;
label_209834:
    // 0x209834: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x209834u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_209838:
    // 0x209838: 0x10000005  b           . + 4 + (0x5 << 2)
label_20983c:
    if (ctx->pc == 0x20983Cu) {
        ctx->pc = 0x20983Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209838u;
        // 0x20983c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209840u;
        goto label_209840;
    }
    ctx->pc = 0x209838u;
    {
        const bool branch_taken_0x209838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20983Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209838u;
        // 0x20983c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209838) {
            ctx->pc = 0x209850u;
            goto label_209850;
        }
    }
    ctx->pc = 0x209840u;
label_209840:
    // 0x209840: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x209840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_209844:
    // 0x209844: 0x28620005  slti        $v0, $v1, 0x5
    ctx->pc = 0x209844u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
label_209848:
    // 0x209848: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_20984c:
    if (ctx->pc == 0x20984Cu) {
        ctx->pc = 0x20984Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209848u;
        // 0x20984c: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209850u;
        goto label_209850;
    }
    ctx->pc = 0x209848u;
    {
        const bool branch_taken_0x209848 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20984Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209848u;
        // 0x20984c: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209848) {
            ctx->pc = 0x209820u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_209820;
        }
    }
    ctx->pc = 0x209850u;
label_209850:
    // 0x209850: 0x12000020  beqz        $s0, . + 4 + (0x20 << 2)
label_209854:
    if (ctx->pc == 0x209854u) {
        ctx->pc = 0x209854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209850u;
        // 0x209854: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209858u;
        goto label_209858;
    }
    ctx->pc = 0x209850u;
    {
        const bool branch_taken_0x209850 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x209854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209850u;
        // 0x209854: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209850) {
            ctx->pc = 0x2098D4u;
            goto label_2098d4;
        }
    }
    ctx->pc = 0x209858u;
label_209858:
    // 0x209858: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x209858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_20985c:
    // 0x20985c: 0xc05b420  jal         func_16D080
label_209860:
    if (ctx->pc == 0x209860u) {
        ctx->pc = 0x209860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20985Cu;
        // 0x209860: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209864u;
        goto label_209864;
    }
    ctx->pc = 0x20985Cu;
    SET_GPR_U32(ctx, 31, 0x209864u);
    ctx->pc = 0x209860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20985Cu;
    // 0x209860: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D080u, 0x20985Cu, 0x209864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209864u;
label_209864:
    // 0x209864: 0x8f829100  lw          $v0, -0x6F00($gp)
    ctx->pc = 0x209864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
label_209868:
    // 0x209868: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x209868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_20986c:
    // 0x20986c: 0x10000007  b           . + 4 + (0x7 << 2)
label_209870:
    if (ctx->pc == 0x209870u) {
        ctx->pc = 0x209870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20986Cu;
        // 0x209870: 0xac435728  sw          $v1, 0x5728($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 22312), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209874u;
        goto label_209874;
    }
    ctx->pc = 0x20986Cu;
    {
        const bool branch_taken_0x20986c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x209870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20986Cu;
        // 0x209870: 0xac435728  sw          $v1, 0x5728($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 22312), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20986c) {
            ctx->pc = 0x20988Cu;
            goto label_20988c;
        }
    }
    ctx->pc = 0x209874u;
label_209874:
    // 0x209874: 0xc07b48c  jal         func_1ED230
label_209878:
    if (ctx->pc == 0x209878u) {
        ctx->pc = 0x20987Cu;
        goto label_20987c;
    }
    ctx->pc = 0x209874u;
    SET_GPR_U32(ctx, 31, 0x20987Cu);
    ctx->pc = 0x1ED230u;
    { ctx->pc = 0x1ed230; return; }
    ctx->pc = 0x20987Cu;
label_20987c:
    // 0x20987c: 0x8f839100  lw          $v1, -0x6F00($gp)
    ctx->pc = 0x20987cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
label_209880:
    // 0x209880: 0x8c625728  lw          $v0, 0x5728($v1)
    ctx->pc = 0x209880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 22312)));
label_209884:
    // 0x209884: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x209884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_209888:
    // 0x209888: 0xac625728  sw          $v0, 0x5728($v1)
    ctx->pc = 0x209888u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22312), GPR_U32(ctx, 2));
label_20988c:
    // 0x20988c: 0x0  nop
    ctx->pc = 0x20988cu;
    // NOP
label_209890:
    // 0x209890: 0x8f839100  lw          $v1, -0x6F00($gp)
    ctx->pc = 0x209890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
label_209894:
    // 0x209894: 0x8c625728  lw          $v0, 0x5728($v1)
    ctx->pc = 0x209894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 22312)));
label_209898:
    // 0x209898: 0x1c40fff6  bgtz        $v0, . + 4 + (-0xA << 2)
label_20989c:
    if (ctx->pc == 0x20989Cu) {
        ctx->pc = 0x20989Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209898u;
        // 0x20989c: 0x24625734  addiu       $v0, $v1, 0x5734 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 22324));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2098A0u;
        goto label_2098a0;
    }
    ctx->pc = 0x209898u;
    {
        const bool branch_taken_0x209898 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x20989Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209898u;
        // 0x20989c: 0x24625734  addiu       $v0, $v1, 0x5734 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 22324));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209898) {
            ctx->pc = 0x209874u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_209874;
        }
    }
    ctx->pc = 0x2098A0u;
label_2098a0:
    // 0x2098a0: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x2098a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
label_2098a4:
    // 0x2098a4: 0x1418c0  sll         $v1, $s4, 3
    ctx->pc = 0x2098a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
label_2098a8:
    // 0x2098a8: 0x2484497e  addiu       $a0, $a0, 0x497E
    ctx->pc = 0x2098a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18814));
label_2098ac:
    // 0x2098ac: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x2098acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_2098b0:
    // 0x2098b0: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x2098b0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_2098b4:
    // 0x2098b4: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x2098b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_2098b8:
    // 0x2098b8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2098b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_2098bc:
    // 0x2098bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2098bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2098c0:
    // 0x2098c0: 0x24830000  addiu       $v1, $a0, 0x0
    ctx->pc = 0x2098c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 0));
label_2098c4:
    // 0x2098c4: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x2098c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_2098c8:
    // 0x2098c8: 0xa0710000  sb          $s1, 0x0($v1)
    ctx->pc = 0x2098c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 17));
label_2098cc:
    // 0x2098cc: 0x10000035  b           . + 4 + (0x35 << 2)
label_2098d0:
    if (ctx->pc == 0x2098D0u) {
        ctx->pc = 0x2098D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2098CCu;
        // 0x2098d0: 0xac510000  sw          $s1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2098D4u;
        goto label_2098d4;
    }
    ctx->pc = 0x2098CCu;
    {
        const bool branch_taken_0x2098cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2098D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2098CCu;
        // 0x2098d0: 0xac510000  sw          $s1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2098cc) {
            ctx->pc = 0x2099A4u;
            goto label_2099a4;
        }
    }
    ctx->pc = 0x2098D4u;
label_2098d4:
    // 0x2098d4: 0xc05b420  jal         func_16D080
label_2098d8:
    if (ctx->pc == 0x2098D8u) {
        ctx->pc = 0x2098D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2098D4u;
        // 0x2098d8: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2098DCu;
        goto label_2098dc;
    }
    ctx->pc = 0x2098D4u;
    SET_GPR_U32(ctx, 31, 0x2098DCu);
    ctx->pc = 0x2098D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2098D4u;
    // 0x2098d8: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D080u, 0x2098D4u, 0x2098DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2098DCu;
label_2098dc:
    // 0x2098dc: 0x8f829100  lw          $v0, -0x6F00($gp)
    ctx->pc = 0x2098dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
label_2098e0:
    // 0x2098e0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2098e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2098e4:
    // 0x2098e4: 0xac52572c  sw          $s2, 0x572C($v0)
    ctx->pc = 0x2098e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22316), GPR_U32(ctx, 18));
label_2098e8:
    // 0x2098e8: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2098e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2098ec:
    // 0x2098ec: 0x222001a  div         $zero, $s1, $v0
    ctx->pc = 0x2098ecu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 17);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_2098f0:
    // 0x2098f0: 0x0  nop
    ctx->pc = 0x2098f0u;
    // NOP
label_2098f4:
    // 0x2098f4: 0x0  nop
    ctx->pc = 0x2098f4u;
    // NOP
label_2098f8:
    // 0x2098f8: 0x1810  mfhi        $v1
    ctx->pc = 0x2098f8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_2098fc:
    // 0x2098fc: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_209900:
    if (ctx->pc == 0x209900u) {
        ctx->pc = 0x209904u;
        goto label_209904;
    }
    ctx->pc = 0x2098FCu;
    {
        const bool branch_taken_0x2098fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2098fc) {
            ctx->pc = 0x209914u;
            goto label_209914;
        }
    }
    ctx->pc = 0x209904u;
label_209904:
    // 0x209904: 0x8f829100  lw          $v0, -0x6F00($gp)
    ctx->pc = 0x209904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
label_209908:
    // 0x209908: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x209908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_20990c:
    // 0x20990c: 0x10000017  b           . + 4 + (0x17 << 2)
label_209910:
    if (ctx->pc == 0x209910u) {
        ctx->pc = 0x209910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20990Cu;
        // 0x209910: 0xac435730  sw          $v1, 0x5730($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 22320), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209914u;
        goto label_209914;
    }
    ctx->pc = 0x20990Cu;
    {
        const bool branch_taken_0x20990c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x209910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20990Cu;
        // 0x209910: 0xac435730  sw          $v1, 0x5730($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 22320), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20990c) {
            ctx->pc = 0x20996Cu;
            goto label_20996c;
        }
    }
    ctx->pc = 0x209914u;
label_209914:
    // 0x209914: 0x0  nop
    ctx->pc = 0x209914u;
    // NOP
label_209918:
    // 0x209918: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x209918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_20991c:
    // 0x20991c: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_209920:
    if (ctx->pc == 0x209920u) {
        ctx->pc = 0x209924u;
        goto label_209924;
    }
    ctx->pc = 0x20991Cu;
    {
        const bool branch_taken_0x20991c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x20991c) {
            ctx->pc = 0x209934u;
            goto label_209934;
        }
    }
    ctx->pc = 0x209924u;
label_209924:
    // 0x209924: 0x8f829100  lw          $v0, -0x6F00($gp)
    ctx->pc = 0x209924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
label_209928:
    // 0x209928: 0x240300c0  addiu       $v1, $zero, 0xC0
    ctx->pc = 0x209928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_20992c:
    // 0x20992c: 0x1000000f  b           . + 4 + (0xF << 2)
label_209930:
    if (ctx->pc == 0x209930u) {
        ctx->pc = 0x209930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20992Cu;
        // 0x209930: 0xac435730  sw          $v1, 0x5730($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 22320), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209934u;
        goto label_209934;
    }
    ctx->pc = 0x20992Cu;
    {
        const bool branch_taken_0x20992c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x209930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20992Cu;
        // 0x209930: 0xac435730  sw          $v1, 0x5730($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 22320), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20992c) {
            ctx->pc = 0x20996Cu;
            goto label_20996c;
        }
    }
    ctx->pc = 0x209934u;
label_209934:
    // 0x209934: 0x0  nop
    ctx->pc = 0x209934u;
    // NOP
label_209938:
    // 0x209938: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x209938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20993c:
    // 0x20993c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_209940:
    if (ctx->pc == 0x209940u) {
        ctx->pc = 0x209940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20993Cu;
        // 0x209940: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209944u;
        goto label_209944;
    }
    ctx->pc = 0x20993Cu;
    {
        const bool branch_taken_0x20993c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x209940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20993Cu;
        // 0x209940: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20993c) {
            ctx->pc = 0x20994Cu;
            goto label_20994c;
        }
    }
    ctx->pc = 0x209944u;
label_209944:
    // 0x209944: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_209948:
    if (ctx->pc == 0x209948u) {
        ctx->pc = 0x20994Cu;
        goto label_20994c;
    }
    ctx->pc = 0x209944u;
    {
        const bool branch_taken_0x209944 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x209944) {
            ctx->pc = 0x209960u;
            goto label_209960;
        }
    }
    ctx->pc = 0x20994Cu;
label_20994c:
    // 0x20994c: 0x0  nop
    ctx->pc = 0x20994cu;
    // NOP
label_209950:
    // 0x209950: 0x8f829100  lw          $v0, -0x6F00($gp)
    ctx->pc = 0x209950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
label_209954:
    // 0x209954: 0x240300a0  addiu       $v1, $zero, 0xA0
    ctx->pc = 0x209954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_209958:
    // 0x209958: 0x10000004  b           . + 4 + (0x4 << 2)
label_20995c:
    if (ctx->pc == 0x20995Cu) {
        ctx->pc = 0x20995Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209958u;
        // 0x20995c: 0xac435730  sw          $v1, 0x5730($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 22320), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209960u;
        goto label_209960;
    }
    ctx->pc = 0x209958u;
    {
        const bool branch_taken_0x209958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20995Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209958u;
        // 0x20995c: 0xac435730  sw          $v1, 0x5730($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 22320), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209958) {
            ctx->pc = 0x20996Cu;
            goto label_20996c;
        }
    }
    ctx->pc = 0x209960u;
label_209960:
    // 0x209960: 0x8f829100  lw          $v0, -0x6F00($gp)
    ctx->pc = 0x209960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
label_209964:
    // 0x209964: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x209964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_209968:
    // 0x209968: 0xac435730  sw          $v1, 0x5730($v0)
    ctx->pc = 0x209968u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22320), GPR_U32(ctx, 3));
label_20996c:
    // 0x20996c: 0x0  nop
    ctx->pc = 0x20996cu;
    // NOP
label_209970:
    // 0x209970: 0xc07b48c  jal         func_1ED230
label_209974:
    if (ctx->pc == 0x209974u) {
        ctx->pc = 0x209978u;
        goto label_209978;
    }
    ctx->pc = 0x209970u;
    SET_GPR_U32(ctx, 31, 0x209978u);
    ctx->pc = 0x1ED230u;
    { ctx->pc = 0x1ed230; return; }
    ctx->pc = 0x209978u;
label_209978:
    // 0x209978: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x209978u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_20997c:
    // 0x20997c: 0x2a22000c  slti        $v0, $s1, 0xC
    ctx->pc = 0x20997cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)12) ? 1 : 0);
label_209980:
    // 0x209980: 0x1440ffda  bnez        $v0, . + 4 + (-0x26 << 2)
label_209984:
    if (ctx->pc == 0x209984u) {
        ctx->pc = 0x209984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209980u;
        // 0x209984: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209988u;
        goto label_209988;
    }
    ctx->pc = 0x209980u;
    {
        const bool branch_taken_0x209980 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x209984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209980u;
        // 0x209984: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209980) {
            ctx->pc = 0x2098ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2098ec;
        }
    }
    ctx->pc = 0x209988u;
label_209988:
    // 0x209988: 0x8f829100  lw          $v0, -0x6F00($gp)
    ctx->pc = 0x209988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
label_20998c:
    // 0x20998c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x20998cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_209990:
    // 0x209990: 0x10000004  b           . + 4 + (0x4 << 2)
label_209994:
    if (ctx->pc == 0x209994u) {
        ctx->pc = 0x209994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209990u;
        // 0x209994: 0xac43572c  sw          $v1, 0x572C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 22316), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209998u;
        goto label_209998;
    }
    ctx->pc = 0x209990u;
    {
        const bool branch_taken_0x209990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x209994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209990u;
        // 0x209994: 0xac43572c  sw          $v1, 0x572C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 22316), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209990) {
            ctx->pc = 0x2099A4u;
            goto label_2099a4;
        }
    }
    ctx->pc = 0x209998u;
label_209998:
    // 0x209998: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x209998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_20999c:
    // 0x20999c: 0xc05b420  jal         func_16D080
label_2099a0:
    if (ctx->pc == 0x2099A0u) {
        ctx->pc = 0x2099A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20999Cu;
        // 0x2099a0: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2099A4u;
        goto label_2099a4;
    }
    ctx->pc = 0x20999Cu;
    SET_GPR_U32(ctx, 31, 0x2099A4u);
    ctx->pc = 0x2099A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20999Cu;
    // 0x2099a0: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D080u, 0x20999Cu, 0x2099A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2099A4u;
label_2099a4:
    // 0x2099a4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2099a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2099a8:
    // 0x2099a8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2099a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2099ac:
    // 0x2099ac: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2099acu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2099b0:
    // 0x2099b0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2099b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2099b4:
    // 0x2099b4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2099b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2099b8:
    // 0x2099b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2099b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2099bc:
    // 0x2099bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2099bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2099c0:
    // 0x2099c0: 0x3e00008  jr          $ra
label_2099c4:
    if (ctx->pc == 0x2099C4u) {
        ctx->pc = 0x2099C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2099C0u;
        // 0x2099c4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2099C8u;
        goto label_2099c8;
    }
    ctx->pc = 0x2099C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2099C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2099C0u;
        // 0x2099c4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2099C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2099C8u;
label_2099c8:
    // 0x2099c8: 0x0  nop
    ctx->pc = 0x2099c8u;
    // NOP
label_2099cc:
    // 0x2099cc: 0x0  nop
    ctx->pc = 0x2099ccu;
    // NOP
label_2099d0:
    // 0x2099d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2099d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2099d4:
    // 0x2099d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2099d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2099d8:
    // 0x2099d8: 0x8f849100  lw          $a0, -0x6F00($gp)
    ctx->pc = 0x2099d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
label_2099dc:
    // 0x2099dc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_2099e0:
    if (ctx->pc == 0x2099E0u) {
        ctx->pc = 0x2099E4u;
        goto label_2099e4;
    }
    ctx->pc = 0x2099DCu;
    {
        const bool branch_taken_0x2099dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2099dc) {
            ctx->pc = 0x2099F0u;
            goto label_2099f0;
        }
    }
    ctx->pc = 0x2099E4u;
label_2099e4:
    // 0x2099e4: 0xc070038  jal         func_1C00E0
label_2099e8:
    if (ctx->pc == 0x2099E8u) {
        ctx->pc = 0x2099ECu;
        goto label_2099ec;
    }
    ctx->pc = 0x2099E4u;
    SET_GPR_U32(ctx, 31, 0x2099ECu);
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x2099ECu;
label_2099ec:
    // 0x2099ec: 0xaf809100  sw          $zero, -0x6F00($gp)
    ctx->pc = 0x2099ecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938880), GPR_U32(ctx, 0));
label_2099f0:
    // 0x2099f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2099f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2099f4:
    // 0x2099f4: 0x3e00008  jr          $ra
label_2099f8:
    if (ctx->pc == 0x2099F8u) {
        ctx->pc = 0x2099F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2099F4u;
        // 0x2099f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2099FCu;
        goto label_2099fc;
    }
    ctx->pc = 0x2099F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2099F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2099F4u;
        // 0x2099f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2099F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2099FCu;
label_2099fc:
    // 0x2099fc: 0x0  nop
    ctx->pc = 0x2099fcu;
    // NOP
label_209a00:
    // 0x209a00: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x209a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_209a04:
    // 0x209a04: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x209a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_209a08:
    // 0x209a08: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x209a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_209a0c:
    // 0x209a0c: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x209a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_209a10:
    // 0x209a10: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x209a10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_209a14:
    // 0x209a14: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x209a14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_209a18:
    // 0x209a18: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x209a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_209a1c:
    // 0x209a1c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x209a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_209a20:
    // 0x209a20: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x209a20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_209a24:
    // 0x209a24: 0x8f829100  lw          $v0, -0x6F00($gp)
    ctx->pc = 0x209a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
label_209a28:
    // 0x209a28: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_209a2c:
    if (ctx->pc == 0x209A2Cu) {
        ctx->pc = 0x209A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209A28u;
        // 0x209a2c: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209A30u;
        goto label_209a30;
    }
    ctx->pc = 0x209A28u;
    {
        const bool branch_taken_0x209a28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x209A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209A28u;
        // 0x209a2c: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209a28) {
            ctx->pc = 0x209A3Cu;
            goto label_209a3c;
        }
    }
    ctx->pc = 0x209A30u;
label_209a30:
    // 0x209a30: 0xc070080  jal         func_1C0200
label_209a34:
    if (ctx->pc == 0x209A34u) {
        ctx->pc = 0x209A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209A30u;
        // 0x209a34: 0x24055800  addiu       $a1, $zero, 0x5800 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22528));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209A38u;
        goto label_209a38;
    }
    ctx->pc = 0x209A30u;
    SET_GPR_U32(ctx, 31, 0x209A38u);
    ctx->pc = 0x209A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209A30u;
    // 0x209a34: 0x24055800  addiu       $a1, $zero, 0x5800 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x209A38u;
label_209a38:
    // 0x209a38: 0xaf829100  sw          $v0, -0x6F00($gp)
    ctx->pc = 0x209a38u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938880), GPR_U32(ctx, 2));
label_209a3c:
    // 0x209a3c: 0x8f849100  lw          $a0, -0x6F00($gp)
    ctx->pc = 0x209a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
label_209a40:
    // 0x209a40: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x209a40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_209a44:
    // 0x209a44: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x209a44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_209a48:
    // 0x209a48: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x209a48u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_209a4c:
    // 0x209a4c: 0xac805720  sw          $zero, 0x5720($a0)
    ctx->pc = 0x209a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 22304), GPR_U32(ctx, 0));
label_209a50:
    // 0x209a50: 0x8f849100  lw          $a0, -0x6F00($gp)
    ctx->pc = 0x209a50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
label_209a54:
    // 0x209a54: 0xac805724  sw          $zero, 0x5724($a0)
    ctx->pc = 0x209a54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 22308), GPR_U32(ctx, 0));
label_209a58:
    // 0x209a58: 0x8f849100  lw          $a0, -0x6F00($gp)
    ctx->pc = 0x209a58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
label_209a5c:
    // 0x209a5c: 0xac805728  sw          $zero, 0x5728($a0)
    ctx->pc = 0x209a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 22312), GPR_U32(ctx, 0));
label_209a60:
    // 0x209a60: 0x8f849100  lw          $a0, -0x6F00($gp)
    ctx->pc = 0x209a60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
label_209a64:
    // 0x209a64: 0xac85572c  sw          $a1, 0x572C($a0)
    ctx->pc = 0x209a64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 22316), GPR_U32(ctx, 5));
label_209a68:
    // 0x209a68: 0x8f849100  lw          $a0, -0x6F00($gp)
    ctx->pc = 0x209a68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
label_209a6c:
    // 0x209a6c: 0xac805730  sw          $zero, 0x5730($a0)
    ctx->pc = 0x209a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 22320), GPR_U32(ctx, 0));
label_209a70:
    // 0x209a70: 0x8f849100  lw          $a0, -0x6F00($gp)
    ctx->pc = 0x209a70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
label_209a74:
    // 0x209a74: 0xac805734  sw          $zero, 0x5734($a0)
    ctx->pc = 0x209a74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 22324), GPR_U32(ctx, 0));
label_209a78:
    // 0x209a78: 0x8f849100  lw          $a0, -0x6F00($gp)
    ctx->pc = 0x209a78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
label_209a7c:
    // 0x209a7c: 0xac805738  sw          $zero, 0x5738($a0)
    ctx->pc = 0x209a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 22328), GPR_U32(ctx, 0));
label_209a80:
    // 0x209a80: 0x8f849100  lw          $a0, -0x6F00($gp)
    ctx->pc = 0x209a80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
label_209a84:
    // 0x209a84: 0xac80573c  sw          $zero, 0x573C($a0)
    ctx->pc = 0x209a84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 22332), GPR_U32(ctx, 0));
label_209a88:
    // 0x209a88: 0x8f849100  lw          $a0, -0x6F00($gp)
    ctx->pc = 0x209a88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
label_209a8c:
    // 0x209a8c: 0xac805740  sw          $zero, 0x5740($a0)
    ctx->pc = 0x209a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 22336), GPR_U32(ctx, 0));
label_209a90:
    // 0x209a90: 0x8f849100  lw          $a0, -0x6F00($gp)
    ctx->pc = 0x209a90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
label_209a94:
    // 0x209a94: 0xac805744  sw          $zero, 0x5744($a0)
    ctx->pc = 0x209a94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 22340), GPR_U32(ctx, 0));
label_209a98:
    // 0x209a98: 0x8f859100  lw          $a1, -0x6F00($gp)
    ctx->pc = 0x209a98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
label_209a9c:
    // 0x209a9c: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x209a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_209aa0:
    // 0x209aa0: 0x28440028  slti        $a0, $v0, 0x28
    ctx->pc = 0x209aa0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)40) ? 1 : 0);
label_209aa4:
    // 0x209aa4: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x209aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_209aa8:
    // 0x209aa8: 0xaca05748  sw          $zero, 0x5748($a1)
    ctx->pc = 0x209aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 22344), GPR_U32(ctx, 0));
label_209aac:
    // 0x209aac: 0x8f859100  lw          $a1, -0x6F00($gp)
    ctx->pc = 0x209aacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
label_209ab0:
    // 0x209ab0: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x209ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_209ab4:
    // 0x209ab4: 0xaca0574c  sw          $zero, 0x574C($a1)
    ctx->pc = 0x209ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 22348), GPR_U32(ctx, 0));
label_209ab8:
    // 0x209ab8: 0x8f859100  lw          $a1, -0x6F00($gp)
    ctx->pc = 0x209ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
label_209abc:
    // 0x209abc: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x209abcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_209ac0:
    // 0x209ac0: 0xaca05750  sw          $zero, 0x5750($a1)
    ctx->pc = 0x209ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 22352), GPR_U32(ctx, 0));
label_209ac4:
    // 0x209ac4: 0x8f859100  lw          $a1, -0x6F00($gp)
    ctx->pc = 0x209ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
label_209ac8:
    // 0x209ac8: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x209ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_209acc:
    // 0x209acc: 0xaca05754  sw          $zero, 0x5754($a1)
    ctx->pc = 0x209accu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 22356), GPR_U32(ctx, 0));
label_209ad0:
    // 0x209ad0: 0x8f859100  lw          $a1, -0x6F00($gp)
    ctx->pc = 0x209ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
label_209ad4:
    // 0x209ad4: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x209ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_209ad8:
    // 0x209ad8: 0xaca05758  sw          $zero, 0x5758($a1)
    ctx->pc = 0x209ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 22360), GPR_U32(ctx, 0));
label_209adc:
    // 0x209adc: 0x8f859100  lw          $a1, -0x6F00($gp)
    ctx->pc = 0x209adcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
label_209ae0:
    // 0x209ae0: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x209ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_209ae4:
    // 0x209ae4: 0xaca0575c  sw          $zero, 0x575C($a1)
    ctx->pc = 0x209ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 22364), GPR_U32(ctx, 0));
label_209ae8:
    // 0x209ae8: 0x8f859100  lw          $a1, -0x6F00($gp)
    ctx->pc = 0x209ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
label_209aec:
    // 0x209aec: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x209aecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_209af0:
    // 0x209af0: 0xaca05760  sw          $zero, 0x5760($a1)
    ctx->pc = 0x209af0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 22368), GPR_U32(ctx, 0));
label_209af4:
    // 0x209af4: 0x8f859100  lw          $a1, -0x6F00($gp)
    ctx->pc = 0x209af4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
label_209af8:
    // 0x209af8: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x209af8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_209afc:
    // 0x209afc: 0xaca05764  sw          $zero, 0x5764($a1)
    ctx->pc = 0x209afcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 22372), GPR_U32(ctx, 0));
label_209b00:
    // 0x209b00: 0x1480ffe5  bnez        $a0, . + 4 + (-0x1B << 2)
label_209b04:
    if (ctx->pc == 0x209B04u) {
        ctx->pc = 0x209B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209B00u;
        // 0x209b04: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209B08u;
        goto label_209b08;
    }
    ctx->pc = 0x209B00u;
    {
        const bool branch_taken_0x209b00 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x209B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209B00u;
        // 0x209b04: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209b00) {
            ctx->pc = 0x209A98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_209a98;
        }
    }
    ctx->pc = 0x209B08u;
label_209b08:
    // 0x209b08: 0x8f829100  lw          $v0, -0x6F00($gp)
    ctx->pc = 0x209b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
label_209b0c:
    // 0x209b0c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x209b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_209b10:
    // 0x209b10: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x209b10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_209b14:
    // 0x209b14: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x209b14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_209b18:
    // 0x209b18: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x209b18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_209b1c:
    // 0x209b1c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x209b1cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_209b20:
    // 0x209b20: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x209b20u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_209b24:
    // 0x209b24: 0xac4057e8  sw          $zero, 0x57E8($v0)
    ctx->pc = 0x209b24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22504), GPR_U32(ctx, 0));
label_209b28:
    // 0x209b28: 0x8f829100  lw          $v0, -0x6F00($gp)
    ctx->pc = 0x209b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
label_209b2c:
    // 0x209b2c: 0xac4457ec  sw          $a0, 0x57EC($v0)
    ctx->pc = 0x209b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22508), GPR_U32(ctx, 4));
label_209b30:
    // 0x209b30: 0x8f829100  lw          $v0, -0x6F00($gp)
    ctx->pc = 0x209b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
label_209b34:
    // 0x209b34: 0xac4357f0  sw          $v1, 0x57F0($v0)
    ctx->pc = 0x209b34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22512), GPR_U32(ctx, 3));
label_209b38:
    // 0x209b38: 0x8f829100  lw          $v0, -0x6F00($gp)
    ctx->pc = 0x209b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
label_209b3c:
    // 0x209b3c: 0xac4057f4  sw          $zero, 0x57F4($v0)
    ctx->pc = 0x209b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22516), GPR_U32(ctx, 0));
label_209b40:
    // 0x209b40: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x209b40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_209b44:
    // 0x209b44: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x209b44u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_209b48:
    // 0x209b48: 0x8f829100  lw          $v0, -0x6F00($gp)
    ctx->pc = 0x209b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
label_209b4c:
    // 0x209b4c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x209b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_209b50:
    // 0x209b50: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x209b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_209b54:
    // 0x209b54: 0x509821  addu        $s3, $v0, $s0
    ctx->pc = 0x209b54u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_209b58:
    // 0x209b58: 0xc05e234  jal         func_1788D0
label_209b5c:
    if (ctx->pc == 0x209B5Cu) {
        ctx->pc = 0x209B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209B58u;
        // 0x209b5c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209B60u;
        goto label_209b60;
    }
    ctx->pc = 0x209B58u;
    SET_GPR_U32(ctx, 31, 0x209B60u);
    ctx->pc = 0x209B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209B58u;
    // 0x209b5c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788D0u, 0x209B58u, 0x209B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209B60u;
label_209b60:
    // 0x209b60: 0x240400a0  addiu       $a0, $zero, 0xA0
    ctx->pc = 0x209b60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_209b64:
    // 0x209b64: 0x24050090  addiu       $a1, $zero, 0x90
    ctx->pc = 0x209b64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
label_209b68:
    // 0x209b68: 0xc07091c  jal         func_1C2470
label_209b6c:
    if (ctx->pc == 0x209B6Cu) {
        ctx->pc = 0x209B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209B68u;
        // 0x209b6c: 0x24060013  addiu       $a2, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209B70u;
        goto label_209b70;
    }
    ctx->pc = 0x209B68u;
    SET_GPR_U32(ctx, 31, 0x209B70u);
    ctx->pc = 0x209B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209B68u;
    // 0x209b6c: 0x24060013  addiu       $a2, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2470u;
    { ctx->pc = 0x1c2470; return; }
    ctx->pc = 0x209B70u;
label_209b70:
    // 0x209b70: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x209b70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_209b74:
    // 0x209b74: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x209b74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_209b78:
    // 0x209b78: 0x24020090  addiu       $v0, $zero, 0x90
    ctx->pc = 0x209b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
label_209b7c:
    // 0x209b7c: 0x26640010  addiu       $a0, $s3, 0x10
    ctx->pc = 0x209b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_209b80:
    // 0x209b80: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x209b80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_209b84:
    // 0x209b84: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x209b84u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_209b88:
    // 0x209b88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x209b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_209b8c:
    // 0x209b8c: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x209b8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_209b90:
    // 0x209b90: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x209b90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
label_209b94:
    // 0x209b94: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x209b94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_209b98:
    // 0x209b98: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x209b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_209b9c:
    // 0x209b9c: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x209b9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_209ba0:
    // 0x209ba0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x209ba0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_209ba4:
    // 0x209ba4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x209ba4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_209ba8:
    // 0x209ba8: 0xc05de30  jal         func_1778C0
label_209bac:
    if (ctx->pc == 0x209BACu) {
        ctx->pc = 0x209BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209BA8u;
        // 0x209bac: 0x240b00a0  addiu       $t3, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209BB0u;
        goto label_209bb0;
    }
    ctx->pc = 0x209BA8u;
    SET_GPR_U32(ctx, 31, 0x209BB0u);
    ctx->pc = 0x209BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209BA8u;
    // 0x209bac: 0x240b00a0  addiu       $t3, $zero, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x209BA8u, 0x209BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209BB0u;
label_209bb0:
    // 0x209bb0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x209bb0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_209bb4:
    // 0x209bb4: 0x2a420028  slti        $v0, $s2, 0x28
    ctx->pc = 0x209bb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)40) ? 1 : 0);
label_209bb8:
    // 0x209bb8: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
label_209bbc:
    if (ctx->pc == 0x209BBCu) {
        ctx->pc = 0x209BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209BB8u;
        // 0x209bbc: 0x26940160  addiu       $s4, $s4, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209BC0u;
        goto label_209bc0;
    }
    ctx->pc = 0x209BB8u;
    {
        const bool branch_taken_0x209bb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x209BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209BB8u;
        // 0x209bbc: 0x26940160  addiu       $s4, $s4, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 352));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209bb8) {
            ctx->pc = 0x209B48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_209b48;
        }
    }
    ctx->pc = 0x209BC0u;
label_209bc0:
    // 0x209bc0: 0x8f829100  lw          $v0, -0x6F00($gp)
    ctx->pc = 0x209bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
label_209bc4:
    // 0x209bc4: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x209bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_209bc8:
    // 0x209bc8: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x209bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_209bcc:
    // 0x209bcc: 0x24523f40  addiu       $s2, $v0, 0x3F40
    ctx->pc = 0x209bccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 16192));
label_209bd0:
    // 0x209bd0: 0xc05e234  jal         func_1788D0
label_209bd4:
    if (ctx->pc == 0x209BD4u) {
        ctx->pc = 0x209BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209BD0u;
        // 0x209bd4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209BD8u;
        goto label_209bd8;
    }
    ctx->pc = 0x209BD0u;
    SET_GPR_U32(ctx, 31, 0x209BD8u);
    ctx->pc = 0x209BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209BD0u;
    // 0x209bd4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788D0u, 0x209BD0u, 0x209BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209BD8u;
label_209bd8:
    // 0x209bd8: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x209bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_209bdc:
    // 0x209bdc: 0x24050280  addiu       $a1, $zero, 0x280
    ctx->pc = 0x209bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_209be0:
    // 0x209be0: 0x240601c0  addiu       $a2, $zero, 0x1C0
    ctx->pc = 0x209be0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_209be4:
    // 0x209be4: 0x3407fe00  ori         $a3, $zero, 0xFE00
    ctx->pc = 0x209be4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_209be8:
    // 0x209be8: 0x2408003c  addiu       $t0, $zero, 0x3C
    ctx->pc = 0x209be8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_209bec:
    // 0x209bec: 0x24090036  addiu       $t1, $zero, 0x36
    ctx->pc = 0x209becu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
label_209bf0:
    // 0x209bf0: 0xc07c1f4  jal         func_1F07D0
label_209bf4:
    if (ctx->pc == 0x209BF4u) {
        ctx->pc = 0x209BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209BF0u;
        // 0x209bf4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209BF8u;
        goto label_209bf8;
    }
    ctx->pc = 0x209BF0u;
    SET_GPR_U32(ctx, 31, 0x209BF8u);
    ctx->pc = 0x209BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209BF0u;
    // 0x209bf4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F07D0u;
    { ctx->pc = 0x1f07d0; return; }
    ctx->pc = 0x209BF8u;
label_209bf8:
    // 0x209bf8: 0xc07082c  jal         func_1C20B0
label_209bfc:
    if (ctx->pc == 0x209BFCu) {
        ctx->pc = 0x209BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209BF8u;
        // 0x209bfc: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209C00u;
        goto label_209c00;
    }
    ctx->pc = 0x209BF8u;
    SET_GPR_U32(ctx, 31, 0x209C00u);
    ctx->pc = 0x209BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209BF8u;
    // 0x209bfc: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20B0u;
    { ctx->pc = 0x1c20b0; return; }
    ctx->pc = 0x209C00u;
label_209c00:
    // 0x209c00: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x209c00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_209c04:
    // 0x209c04: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x209c04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_209c08:
    // 0x209c08: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x209c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_209c0c:
    // 0x209c0c: 0x264405b0  addiu       $a0, $s2, 0x5B0
    ctx->pc = 0x209c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1456));
label_209c10:
    // 0x209c10: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x209c10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_209c14:
    // 0x209c14: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x209c14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_209c18:
    // 0x209c18: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x209c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_209c1c:
    // 0x209c1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x209c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_209c20:
    // 0x209c20: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x209c20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_209c24:
    // 0x209c24: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x209c24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_209c28:
    // 0x209c28: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x209c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_209c2c:
    // 0x209c2c: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x209c2cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_209c30:
    // 0x209c30: 0x24090080  addiu       $t1, $zero, 0x80
    ctx->pc = 0x209c30u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_209c34:
    // 0x209c34: 0x240a0178  addiu       $t2, $zero, 0x178
    ctx->pc = 0x209c34u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 376));
label_209c38:
    // 0x209c38: 0xc05de30  jal         func_1778C0
label_209c3c:
    if (ctx->pc == 0x209C3Cu) {
        ctx->pc = 0x209C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209C38u;
        // 0x209c3c: 0x240b0070  addiu       $t3, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209C40u;
        goto label_209c40;
    }
    ctx->pc = 0x209C38u;
    SET_GPR_U32(ctx, 31, 0x209C40u);
    ctx->pc = 0x209C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209C38u;
    // 0x209c3c: 0x240b0070  addiu       $t3, $zero, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x209C38u, 0x209C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209C40u;
label_209c40:
    // 0x209c40: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x209c40u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_209c44:
    // 0x209c44: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x209c44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_209c48:
    // 0x209c48: 0x8f829100  lw          $v0, -0x6F00($gp)
    ctx->pc = 0x209c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
label_209c4c:
    // 0x209c4c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x209c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_209c50:
    // 0x209c50: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x209c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_209c54:
    // 0x209c54: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x209c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_209c58:
    // 0x209c58: 0x24543700  addiu       $s4, $v0, 0x3700
    ctx->pc = 0x209c58u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 14080));
label_209c5c:
    // 0x209c5c: 0xc05e234  jal         func_1788D0
label_209c60:
    if (ctx->pc == 0x209C60u) {
        ctx->pc = 0x209C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209C5Cu;
        // 0x209c60: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209C64u;
        goto label_209c64;
    }
    ctx->pc = 0x209C5Cu;
    SET_GPR_U32(ctx, 31, 0x209C64u);
    ctx->pc = 0x209C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209C5Cu;
    // 0x209c60: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788D0u, 0x209C5Cu, 0x209C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209C64u;
label_209c64:
    // 0x209c64: 0x240400a0  addiu       $a0, $zero, 0xA0
    ctx->pc = 0x209c64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_209c68:
    // 0x209c68: 0x24050090  addiu       $a1, $zero, 0x90
    ctx->pc = 0x209c68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
label_209c6c:
    // 0x209c6c: 0xc07091c  jal         func_1C2470
label_209c70:
    if (ctx->pc == 0x209C70u) {
        ctx->pc = 0x209C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209C6Cu;
        // 0x209c70: 0x24060013  addiu       $a2, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209C74u;
        goto label_209c74;
    }
    ctx->pc = 0x209C6Cu;
    SET_GPR_U32(ctx, 31, 0x209C74u);
    ctx->pc = 0x209C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209C6Cu;
    // 0x209c70: 0x24060013  addiu       $a2, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2470u;
    { ctx->pc = 0x1c2470; return; }
    ctx->pc = 0x209C74u;
label_209c74:
    // 0x209c74: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x209c74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_209c78:
    // 0x209c78: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x209c78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_209c7c:
    // 0x209c7c: 0x24020090  addiu       $v0, $zero, 0x90
    ctx->pc = 0x209c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
label_209c80:
    // 0x209c80: 0x26840010  addiu       $a0, $s4, 0x10
    ctx->pc = 0x209c80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_209c84:
    // 0x209c84: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x209c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_209c88:
    // 0x209c88: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x209c88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_209c8c:
    // 0x209c8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x209c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_209c90:
    // 0x209c90: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x209c90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_209c94:
    // 0x209c94: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x209c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
label_209c98:
    // 0x209c98: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x209c98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_209c9c:
    // 0x209c9c: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x209c9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_209ca0:
    // 0x209ca0: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x209ca0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_209ca4:
    // 0x209ca4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x209ca4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_209ca8:
    // 0x209ca8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x209ca8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_209cac:
    // 0x209cac: 0xc05de30  jal         func_1778C0
label_209cb0:
    if (ctx->pc == 0x209CB0u) {
        ctx->pc = 0x209CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209CACu;
        // 0x209cb0: 0x240b00a0  addiu       $t3, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209CB4u;
        goto label_209cb4;
    }
    ctx->pc = 0x209CACu;
    SET_GPR_U32(ctx, 31, 0x209CB4u);
    ctx->pc = 0x209CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209CACu;
    // 0x209cb0: 0x240b00a0  addiu       $t3, $zero, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x209CACu, 0x209CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209CB4u;
label_209cb4:
    // 0x209cb4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x209cb4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_209cb8:
    // 0x209cb8: 0x2a620005  slti        $v0, $s3, 0x5
    ctx->pc = 0x209cb8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)5) ? 1 : 0);
label_209cbc:
    // 0x209cbc: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
label_209cc0:
    if (ctx->pc == 0x209CC0u) {
        ctx->pc = 0x209CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209CBCu;
        // 0x209cc0: 0x26520160  addiu       $s2, $s2, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209CC4u;
        goto label_209cc4;
    }
    ctx->pc = 0x209CBCu;
    {
        const bool branch_taken_0x209cbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x209CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209CBCu;
        // 0x209cc0: 0x26520160  addiu       $s2, $s2, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 352));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209cbc) {
            ctx->pc = 0x209C48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_209c48;
        }
    }
    ctx->pc = 0x209CC4u;
label_209cc4:
    // 0x209cc4: 0x8f829100  lw          $v0, -0x6F00($gp)
    ctx->pc = 0x209cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
label_209cc8:
    // 0x209cc8: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x209cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_209ccc:
    // 0x209ccc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x209cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_209cd0:
    // 0x209cd0: 0x24523de0  addiu       $s2, $v0, 0x3DE0
    ctx->pc = 0x209cd0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 15840));
label_209cd4:
    // 0x209cd4: 0xc05e234  jal         func_1788D0
label_209cd8:
    if (ctx->pc == 0x209CD8u) {
        ctx->pc = 0x209CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209CD4u;
        // 0x209cd8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209CDCu;
        goto label_209cdc;
    }
    ctx->pc = 0x209CD4u;
    SET_GPR_U32(ctx, 31, 0x209CDCu);
    ctx->pc = 0x209CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209CD4u;
    // 0x209cd8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788D0u, 0x209CD4u, 0x209CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209CDCu;
label_209cdc:
    // 0x209cdc: 0x240400a0  addiu       $a0, $zero, 0xA0
    ctx->pc = 0x209cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_209ce0:
    // 0x209ce0: 0x24050090  addiu       $a1, $zero, 0x90
    ctx->pc = 0x209ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
label_209ce4:
    // 0x209ce4: 0xc07091c  jal         func_1C2470
label_209ce8:
    if (ctx->pc == 0x209CE8u) {
        ctx->pc = 0x209CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209CE4u;
        // 0x209ce8: 0x24060013  addiu       $a2, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209CECu;
        goto label_209cec;
    }
    ctx->pc = 0x209CE4u;
    SET_GPR_U32(ctx, 31, 0x209CECu);
    ctx->pc = 0x209CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209CE4u;
    // 0x209ce8: 0x24060013  addiu       $a2, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2470u;
    { ctx->pc = 0x1c2470; return; }
    ctx->pc = 0x209CECu;
label_209cec:
    // 0x209cec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x209cecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_209cf0:
    // 0x209cf0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x209cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_209cf4:
    // 0x209cf4: 0x24020090  addiu       $v0, $zero, 0x90
    ctx->pc = 0x209cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
label_209cf8:
    // 0x209cf8: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x209cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_209cfc:
    // 0x209cfc: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x209cfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_209d00:
    // 0x209d00: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x209d00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_209d04:
    // 0x209d04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x209d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_209d08:
    // 0x209d08: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x209d08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_209d0c:
    // 0x209d0c: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x209d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
label_209d10:
    // 0x209d10: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x209d10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_209d14:
    // 0x209d14: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x209d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_209d18:
    // 0x209d18: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x209d18u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_209d1c:
    // 0x209d1c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x209d1cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_209d20:
    // 0x209d20: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x209d20u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_209d24:
    // 0x209d24: 0xc05de30  jal         func_1778C0
label_209d28:
    if (ctx->pc == 0x209D28u) {
        ctx->pc = 0x209D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209D24u;
        // 0x209d28: 0x240b00a0  addiu       $t3, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209D2Cu;
        goto label_209d2c;
    }
    ctx->pc = 0x209D24u;
    SET_GPR_U32(ctx, 31, 0x209D2Cu);
    ctx->pc = 0x209D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209D24u;
    // 0x209d28: 0x240b00a0  addiu       $t3, $zero, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x209D24u, 0x209D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209D2Cu;
label_209d2c:
    // 0x209d2c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x209d2cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_209d30:
    // 0x209d30: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x209d30u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_209d34:
    // 0x209d34: 0x0  nop
    ctx->pc = 0x209d34u;
    // NOP
label_209d38:
    // 0x209d38: 0x8f829100  lw          $v0, -0x6F00($gp)
    ctx->pc = 0x209d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
label_209d3c:
    // 0x209d3c: 0x2405002c  addiu       $a1, $zero, 0x2C
    ctx->pc = 0x209d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_209d40:
    // 0x209d40: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x209d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_209d44:
    // 0x209d44: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x209d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_209d48:
    // 0x209d48: 0x24524be0  addiu       $s2, $v0, 0x4BE0
    ctx->pc = 0x209d48u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 19424));
label_209d4c:
    // 0x209d4c: 0xc05e234  jal         func_1788D0
label_209d50:
    if (ctx->pc == 0x209D50u) {
        ctx->pc = 0x209D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209D4Cu;
        // 0x209d50: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209D54u;
        goto label_209d54;
    }
    ctx->pc = 0x209D4Cu;
    SET_GPR_U32(ctx, 31, 0x209D54u);
    ctx->pc = 0x209D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209D4Cu;
    // 0x209d50: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788D0u, 0x209D4Cu, 0x209D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209D54u;
label_209d54:
    // 0x209d54: 0x24080028  addiu       $t0, $zero, 0x28
    ctx->pc = 0x209d54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_209d58:
    // 0x209d58: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x209d58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_209d5c:
    // 0x209d5c: 0x24050280  addiu       $a1, $zero, 0x280
    ctx->pc = 0x209d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_209d60:
    // 0x209d60: 0x240601c0  addiu       $a2, $zero, 0x1C0
    ctx->pc = 0x209d60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_209d64:
    // 0x209d64: 0x3407fe02  ori         $a3, $zero, 0xFE02
    ctx->pc = 0x209d64u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65026);
label_209d68:
    // 0x209d68: 0x240a000a  addiu       $t2, $zero, 0xA
    ctx->pc = 0x209d68u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_209d6c:
    // 0x209d6c: 0xc07c084  jal         func_1F0210
label_209d70:
    if (ctx->pc == 0x209D70u) {
        ctx->pc = 0x209D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209D6Cu;
        // 0x209d70: 0x100482d  daddu       $t1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209D74u;
        goto label_209d74;
    }
    ctx->pc = 0x209D6Cu;
    SET_GPR_U32(ctx, 31, 0x209D74u);
    ctx->pc = 0x209D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209D6Cu;
    // 0x209d70: 0x100482d  daddu       $t1, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F0210u;
    { ctx->pc = 0x1f0210; return; }
    ctx->pc = 0x209D74u;
label_209d74:
    // 0x209d74: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x209d74u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_209d78:
    // 0x209d78: 0x2a830002  slti        $v1, $s4, 0x2
    ctx->pc = 0x209d78u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
label_209d7c:
    // 0x209d7c: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
label_209d80:
    if (ctx->pc == 0x209D80u) {
        ctx->pc = 0x209D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209D7Cu;
        // 0x209d80: 0x267305a0  addiu       $s3, $s3, 0x5A0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1440));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209D84u;
        goto label_209d84;
    }
    ctx->pc = 0x209D7Cu;
    {
        const bool branch_taken_0x209d7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x209D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209D7Cu;
        // 0x209d80: 0x267305a0  addiu       $s3, $s3, 0x5A0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1440));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209d7c) {
            ctx->pc = 0x209D34u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_209d34;
        }
    }
    ctx->pc = 0x209D84u;
label_209d84:
    // 0x209d84: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x209d84u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_209d88:
    // 0x209d88: 0x261000b0  addiu       $s0, $s0, 0xB0
    ctx->pc = 0x209d88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
label_209d8c:
    // 0x209d8c: 0x2a230002  slti        $v1, $s1, 0x2
    ctx->pc = 0x209d8cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
label_209d90:
    // 0x209d90: 0x26d60650  addiu       $s6, $s6, 0x650
    ctx->pc = 0x209d90u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1616));
label_209d94:
    // 0x209d94: 0x1460ff6a  bnez        $v1, . + 4 + (-0x96 << 2)
label_209d98:
    if (ctx->pc == 0x209D98u) {
        ctx->pc = 0x209D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209D94u;
        // 0x209d98: 0x26b502d0  addiu       $s5, $s5, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 720));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209D9Cu;
        goto label_209d9c;
    }
    ctx->pc = 0x209D94u;
    {
        const bool branch_taken_0x209d94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x209D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209D94u;
        // 0x209d98: 0x26b502d0  addiu       $s5, $s5, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 720));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209d94) {
            ctx->pc = 0x209B40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_209b40;
        }
    }
    ctx->pc = 0x209D9Cu;
label_209d9c:
    // 0x209d9c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x209d9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_209da0:
    // 0x209da0: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x209da0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_209da4:
    // 0x209da4: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x209da4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    ctx->pc = 0x209da8u;
    return;
}

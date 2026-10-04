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


void FUN_0014eba0_part117(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1875e0u: goto label_1875e0;
        case 0x1875e4u: goto label_1875e4;
        case 0x1875e8u: goto label_1875e8;
        case 0x1875ecu: goto label_1875ec;
        case 0x1875f0u: goto label_1875f0;
        case 0x1875f4u: goto label_1875f4;
        case 0x1875f8u: goto label_1875f8;
        case 0x1875fcu: goto label_1875fc;
        case 0x187600u: goto label_187600;
        case 0x187604u: goto label_187604;
        case 0x187608u: goto label_187608;
        case 0x18760cu: goto label_18760c;
        case 0x187610u: goto label_187610;
        case 0x187614u: goto label_187614;
        case 0x187618u: goto label_187618;
        case 0x18761cu: goto label_18761c;
        case 0x187620u: goto label_187620;
        case 0x187624u: goto label_187624;
        case 0x187628u: goto label_187628;
        case 0x18762cu: goto label_18762c;
        case 0x187630u: goto label_187630;
        case 0x187634u: goto label_187634;
        case 0x187638u: goto label_187638;
        case 0x18763cu: goto label_18763c;
        case 0x187640u: goto label_187640;
        case 0x187644u: goto label_187644;
        case 0x187648u: goto label_187648;
        case 0x18764cu: goto label_18764c;
        case 0x187650u: goto label_187650;
        case 0x187654u: goto label_187654;
        case 0x187658u: goto label_187658;
        case 0x18765cu: goto label_18765c;
        case 0x187660u: goto label_187660;
        case 0x187664u: goto label_187664;
        case 0x187668u: goto label_187668;
        case 0x18766cu: goto label_18766c;
        case 0x187670u: goto label_187670;
        case 0x187674u: goto label_187674;
        case 0x187678u: goto label_187678;
        case 0x18767cu: goto label_18767c;
        case 0x187680u: goto label_187680;
        case 0x187684u: goto label_187684;
        case 0x187688u: goto label_187688;
        case 0x18768cu: goto label_18768c;
        case 0x187690u: goto label_187690;
        case 0x187694u: goto label_187694;
        case 0x187698u: goto label_187698;
        case 0x18769cu: goto label_18769c;
        case 0x1876a0u: goto label_1876a0;
        case 0x1876a4u: goto label_1876a4;
        case 0x1876a8u: goto label_1876a8;
        case 0x1876acu: goto label_1876ac;
        case 0x1876b0u: goto label_1876b0;
        case 0x1876b4u: goto label_1876b4;
        case 0x1876b8u: goto label_1876b8;
        case 0x1876bcu: goto label_1876bc;
        case 0x1876c0u: goto label_1876c0;
        case 0x1876c4u: goto label_1876c4;
        case 0x1876c8u: goto label_1876c8;
        case 0x1876ccu: goto label_1876cc;
        case 0x1876d0u: goto label_1876d0;
        case 0x1876d4u: goto label_1876d4;
        case 0x1876d8u: goto label_1876d8;
        case 0x1876dcu: goto label_1876dc;
        case 0x1876e0u: goto label_1876e0;
        case 0x1876e4u: goto label_1876e4;
        case 0x1876e8u: goto label_1876e8;
        case 0x1876ecu: goto label_1876ec;
        case 0x1876f0u: goto label_1876f0;
        case 0x1876f4u: goto label_1876f4;
        case 0x1876f8u: goto label_1876f8;
        case 0x1876fcu: goto label_1876fc;
        case 0x187700u: goto label_187700;
        case 0x187704u: goto label_187704;
        case 0x187708u: goto label_187708;
        case 0x18770cu: goto label_18770c;
        case 0x187710u: goto label_187710;
        case 0x187714u: goto label_187714;
        case 0x187718u: goto label_187718;
        case 0x18771cu: goto label_18771c;
        case 0x187720u: goto label_187720;
        case 0x187724u: goto label_187724;
        case 0x187728u: goto label_187728;
        case 0x18772cu: goto label_18772c;
        case 0x187730u: goto label_187730;
        case 0x187734u: goto label_187734;
        case 0x187738u: goto label_187738;
        case 0x18773cu: goto label_18773c;
        case 0x187740u: goto label_187740;
        case 0x187744u: goto label_187744;
        case 0x187748u: goto label_187748;
        case 0x18774cu: goto label_18774c;
        case 0x187750u: goto label_187750;
        case 0x187754u: goto label_187754;
        case 0x187758u: goto label_187758;
        case 0x18775cu: goto label_18775c;
        case 0x187760u: goto label_187760;
        case 0x187764u: goto label_187764;
        case 0x187768u: goto label_187768;
        case 0x18776cu: goto label_18776c;
        case 0x187770u: goto label_187770;
        case 0x187774u: goto label_187774;
        case 0x187778u: goto label_187778;
        case 0x18777cu: goto label_18777c;
        case 0x187780u: goto label_187780;
        case 0x187784u: goto label_187784;
        case 0x187788u: goto label_187788;
        case 0x18778cu: goto label_18778c;
        case 0x187790u: goto label_187790;
        case 0x187794u: goto label_187794;
        case 0x187798u: goto label_187798;
        case 0x18779cu: goto label_18779c;
        case 0x1877a0u: goto label_1877a0;
        case 0x1877a4u: goto label_1877a4;
        case 0x1877a8u: goto label_1877a8;
        case 0x1877acu: goto label_1877ac;
        case 0x1877b0u: goto label_1877b0;
        case 0x1877b4u: goto label_1877b4;
        case 0x1877b8u: goto label_1877b8;
        case 0x1877bcu: goto label_1877bc;
        case 0x1877c0u: goto label_1877c0;
        case 0x1877c4u: goto label_1877c4;
        case 0x1877c8u: goto label_1877c8;
        case 0x1877ccu: goto label_1877cc;
        case 0x1877d0u: goto label_1877d0;
        case 0x1877d4u: goto label_1877d4;
        case 0x1877d8u: goto label_1877d8;
        case 0x1877dcu: goto label_1877dc;
        case 0x1877e0u: goto label_1877e0;
        case 0x1877e4u: goto label_1877e4;
        case 0x1877e8u: goto label_1877e8;
        case 0x1877ecu: goto label_1877ec;
        case 0x1877f0u: goto label_1877f0;
        case 0x1877f4u: goto label_1877f4;
        case 0x1877f8u: goto label_1877f8;
        case 0x1877fcu: goto label_1877fc;
        case 0x187800u: goto label_187800;
        case 0x187804u: goto label_187804;
        case 0x187808u: goto label_187808;
        case 0x18780cu: goto label_18780c;
        case 0x187810u: goto label_187810;
        case 0x187814u: goto label_187814;
        case 0x187818u: goto label_187818;
        case 0x18781cu: goto label_18781c;
        case 0x187820u: goto label_187820;
        case 0x187824u: goto label_187824;
        case 0x187828u: goto label_187828;
        case 0x18782cu: goto label_18782c;
        case 0x187830u: goto label_187830;
        case 0x187834u: goto label_187834;
        case 0x187838u: goto label_187838;
        case 0x18783cu: goto label_18783c;
        case 0x187840u: goto label_187840;
        case 0x187844u: goto label_187844;
        case 0x187848u: goto label_187848;
        case 0x18784cu: goto label_18784c;
        case 0x187850u: goto label_187850;
        case 0x187854u: goto label_187854;
        case 0x187858u: goto label_187858;
        case 0x18785cu: goto label_18785c;
        case 0x187860u: goto label_187860;
        case 0x187864u: goto label_187864;
        case 0x187868u: goto label_187868;
        case 0x18786cu: goto label_18786c;
        case 0x187870u: goto label_187870;
        case 0x187874u: goto label_187874;
        case 0x187878u: goto label_187878;
        case 0x18787cu: goto label_18787c;
        case 0x187880u: goto label_187880;
        case 0x187884u: goto label_187884;
        case 0x187888u: goto label_187888;
        case 0x18788cu: goto label_18788c;
        case 0x187890u: goto label_187890;
        case 0x187894u: goto label_187894;
        case 0x187898u: goto label_187898;
        case 0x18789cu: goto label_18789c;
        case 0x1878a0u: goto label_1878a0;
        case 0x1878a4u: goto label_1878a4;
        case 0x1878a8u: goto label_1878a8;
        case 0x1878acu: goto label_1878ac;
        case 0x1878b0u: goto label_1878b0;
        case 0x1878b4u: goto label_1878b4;
        case 0x1878b8u: goto label_1878b8;
        case 0x1878bcu: goto label_1878bc;
        case 0x1878c0u: goto label_1878c0;
        case 0x1878c4u: goto label_1878c4;
        case 0x1878c8u: goto label_1878c8;
        case 0x1878ccu: goto label_1878cc;
        case 0x1878d0u: goto label_1878d0;
        case 0x1878d4u: goto label_1878d4;
        case 0x1878d8u: goto label_1878d8;
        case 0x1878dcu: goto label_1878dc;
        case 0x1878e0u: goto label_1878e0;
        case 0x1878e4u: goto label_1878e4;
        case 0x1878e8u: goto label_1878e8;
        case 0x1878ecu: goto label_1878ec;
        case 0x1878f0u: goto label_1878f0;
        case 0x1878f4u: goto label_1878f4;
        case 0x1878f8u: goto label_1878f8;
        case 0x1878fcu: goto label_1878fc;
        case 0x187900u: goto label_187900;
        case 0x187904u: goto label_187904;
        case 0x187908u: goto label_187908;
        case 0x18790cu: goto label_18790c;
        case 0x187910u: goto label_187910;
        case 0x187914u: goto label_187914;
        case 0x187918u: goto label_187918;
        case 0x18791cu: goto label_18791c;
        case 0x187920u: goto label_187920;
        case 0x187924u: goto label_187924;
        case 0x187928u: goto label_187928;
        case 0x18792cu: goto label_18792c;
        case 0x187930u: goto label_187930;
        case 0x187934u: goto label_187934;
        case 0x187938u: goto label_187938;
        case 0x18793cu: goto label_18793c;
        case 0x187940u: goto label_187940;
        case 0x187944u: goto label_187944;
        case 0x187948u: goto label_187948;
        case 0x18794cu: goto label_18794c;
        case 0x187950u: goto label_187950;
        case 0x187954u: goto label_187954;
        case 0x187958u: goto label_187958;
        case 0x18795cu: goto label_18795c;
        case 0x187960u: goto label_187960;
        case 0x187964u: goto label_187964;
        case 0x187968u: goto label_187968;
        case 0x18796cu: goto label_18796c;
        case 0x187970u: goto label_187970;
        case 0x187974u: goto label_187974;
        case 0x187978u: goto label_187978;
        case 0x18797cu: goto label_18797c;
        case 0x187980u: goto label_187980;
        case 0x187984u: goto label_187984;
        case 0x187988u: goto label_187988;
        case 0x18798cu: goto label_18798c;
        case 0x187990u: goto label_187990;
        case 0x187994u: goto label_187994;
        case 0x187998u: goto label_187998;
        case 0x18799cu: goto label_18799c;
        case 0x1879a0u: goto label_1879a0;
        case 0x1879a4u: goto label_1879a4;
        case 0x1879a8u: goto label_1879a8;
        case 0x1879acu: goto label_1879ac;
        case 0x1879b0u: goto label_1879b0;
        case 0x1879b4u: goto label_1879b4;
        case 0x1879b8u: goto label_1879b8;
        case 0x1879bcu: goto label_1879bc;
        case 0x1879c0u: goto label_1879c0;
        case 0x1879c4u: goto label_1879c4;
        case 0x1879c8u: goto label_1879c8;
        case 0x1879ccu: goto label_1879cc;
        case 0x1879d0u: goto label_1879d0;
        case 0x1879d4u: goto label_1879d4;
        case 0x1879d8u: goto label_1879d8;
        case 0x1879dcu: goto label_1879dc;
        case 0x1879e0u: goto label_1879e0;
        case 0x1879e4u: goto label_1879e4;
        case 0x1879e8u: goto label_1879e8;
        case 0x1879ecu: goto label_1879ec;
        case 0x1879f0u: goto label_1879f0;
        case 0x1879f4u: goto label_1879f4;
        case 0x1879f8u: goto label_1879f8;
        case 0x1879fcu: goto label_1879fc;
        case 0x187a00u: goto label_187a00;
        case 0x187a04u: goto label_187a04;
        case 0x187a08u: goto label_187a08;
        case 0x187a0cu: goto label_187a0c;
        case 0x187a10u: goto label_187a10;
        case 0x187a14u: goto label_187a14;
        case 0x187a18u: goto label_187a18;
        case 0x187a1cu: goto label_187a1c;
        case 0x187a20u: goto label_187a20;
        case 0x187a24u: goto label_187a24;
        case 0x187a28u: goto label_187a28;
        case 0x187a2cu: goto label_187a2c;
        case 0x187a30u: goto label_187a30;
        case 0x187a34u: goto label_187a34;
        case 0x187a38u: goto label_187a38;
        case 0x187a3cu: goto label_187a3c;
        case 0x187a40u: goto label_187a40;
        case 0x187a44u: goto label_187a44;
        case 0x187a48u: goto label_187a48;
        case 0x187a4cu: goto label_187a4c;
        case 0x187a50u: goto label_187a50;
        case 0x187a54u: goto label_187a54;
        case 0x187a58u: goto label_187a58;
        case 0x187a5cu: goto label_187a5c;
        case 0x187a60u: goto label_187a60;
        case 0x187a64u: goto label_187a64;
        case 0x187a68u: goto label_187a68;
        case 0x187a6cu: goto label_187a6c;
        case 0x187a70u: goto label_187a70;
        case 0x187a74u: goto label_187a74;
        case 0x187a78u: goto label_187a78;
        case 0x187a7cu: goto label_187a7c;
        case 0x187a80u: goto label_187a80;
        case 0x187a84u: goto label_187a84;
        case 0x187a88u: goto label_187a88;
        case 0x187a8cu: goto label_187a8c;
        case 0x187a90u: goto label_187a90;
        case 0x187a94u: goto label_187a94;
        case 0x187a98u: goto label_187a98;
        case 0x187a9cu: goto label_187a9c;
        case 0x187aa0u: goto label_187aa0;
        case 0x187aa4u: goto label_187aa4;
        case 0x187aa8u: goto label_187aa8;
        case 0x187aacu: goto label_187aac;
        case 0x187ab0u: goto label_187ab0;
        case 0x187ab4u: goto label_187ab4;
        case 0x187ab8u: goto label_187ab8;
        case 0x187abcu: goto label_187abc;
        case 0x187ac0u: goto label_187ac0;
        case 0x187ac4u: goto label_187ac4;
        case 0x187ac8u: goto label_187ac8;
        case 0x187accu: goto label_187acc;
        case 0x187ad0u: goto label_187ad0;
        case 0x187ad4u: goto label_187ad4;
        case 0x187ad8u: goto label_187ad8;
        case 0x187adcu: goto label_187adc;
        case 0x187ae0u: goto label_187ae0;
        case 0x187ae4u: goto label_187ae4;
        case 0x187ae8u: goto label_187ae8;
        case 0x187aecu: goto label_187aec;
        case 0x187af0u: goto label_187af0;
        case 0x187af4u: goto label_187af4;
        case 0x187af8u: goto label_187af8;
        case 0x187afcu: goto label_187afc;
        case 0x187b00u: goto label_187b00;
        case 0x187b04u: goto label_187b04;
        case 0x187b08u: goto label_187b08;
        case 0x187b0cu: goto label_187b0c;
        case 0x187b10u: goto label_187b10;
        case 0x187b14u: goto label_187b14;
        case 0x187b18u: goto label_187b18;
        case 0x187b1cu: goto label_187b1c;
        case 0x187b20u: goto label_187b20;
        case 0x187b24u: goto label_187b24;
        case 0x187b28u: goto label_187b28;
        case 0x187b2cu: goto label_187b2c;
        case 0x187b30u: goto label_187b30;
        case 0x187b34u: goto label_187b34;
        case 0x187b38u: goto label_187b38;
        case 0x187b3cu: goto label_187b3c;
        case 0x187b40u: goto label_187b40;
        case 0x187b44u: goto label_187b44;
        case 0x187b48u: goto label_187b48;
        case 0x187b4cu: goto label_187b4c;
        case 0x187b50u: goto label_187b50;
        case 0x187b54u: goto label_187b54;
        case 0x187b58u: goto label_187b58;
        case 0x187b5cu: goto label_187b5c;
        case 0x187b60u: goto label_187b60;
        case 0x187b64u: goto label_187b64;
        case 0x187b68u: goto label_187b68;
        case 0x187b6cu: goto label_187b6c;
        case 0x187b70u: goto label_187b70;
        case 0x187b74u: goto label_187b74;
        case 0x187b78u: goto label_187b78;
        case 0x187b7cu: goto label_187b7c;
        case 0x187b80u: goto label_187b80;
        case 0x187b84u: goto label_187b84;
        case 0x187b88u: goto label_187b88;
        case 0x187b8cu: goto label_187b8c;
        case 0x187b90u: goto label_187b90;
        case 0x187b94u: goto label_187b94;
        case 0x187b98u: goto label_187b98;
        case 0x187b9cu: goto label_187b9c;
        case 0x187ba0u: goto label_187ba0;
        case 0x187ba4u: goto label_187ba4;
        case 0x187ba8u: goto label_187ba8;
        case 0x187bacu: goto label_187bac;
        case 0x187bb0u: goto label_187bb0;
        case 0x187bb4u: goto label_187bb4;
        case 0x187bb8u: goto label_187bb8;
        case 0x187bbcu: goto label_187bbc;
        case 0x187bc0u: goto label_187bc0;
        case 0x187bc4u: goto label_187bc4;
        case 0x187bc8u: goto label_187bc8;
        case 0x187bccu: goto label_187bcc;
        case 0x187bd0u: goto label_187bd0;
        case 0x187bd4u: goto label_187bd4;
        case 0x187bd8u: goto label_187bd8;
        case 0x187bdcu: goto label_187bdc;
        case 0x187be0u: goto label_187be0;
        case 0x187be4u: goto label_187be4;
        case 0x187be8u: goto label_187be8;
        case 0x187becu: goto label_187bec;
        case 0x187bf0u: goto label_187bf0;
        case 0x187bf4u: goto label_187bf4;
        case 0x187bf8u: goto label_187bf8;
        case 0x187bfcu: goto label_187bfc;
        case 0x187c00u: goto label_187c00;
        case 0x187c04u: goto label_187c04;
        case 0x187c08u: goto label_187c08;
        case 0x187c0cu: goto label_187c0c;
        case 0x187c10u: goto label_187c10;
        case 0x187c14u: goto label_187c14;
        case 0x187c18u: goto label_187c18;
        case 0x187c1cu: goto label_187c1c;
        case 0x187c20u: goto label_187c20;
        case 0x187c24u: goto label_187c24;
        case 0x187c28u: goto label_187c28;
        case 0x187c2cu: goto label_187c2c;
        case 0x187c30u: goto label_187c30;
        case 0x187c34u: goto label_187c34;
        case 0x187c38u: goto label_187c38;
        case 0x187c3cu: goto label_187c3c;
        case 0x187c40u: goto label_187c40;
        case 0x187c44u: goto label_187c44;
        case 0x187c48u: goto label_187c48;
        case 0x187c4cu: goto label_187c4c;
        case 0x187c50u: goto label_187c50;
        case 0x187c54u: goto label_187c54;
        case 0x187c58u: goto label_187c58;
        case 0x187c5cu: goto label_187c5c;
        case 0x187c60u: goto label_187c60;
        case 0x187c64u: goto label_187c64;
        case 0x187c68u: goto label_187c68;
        case 0x187c6cu: goto label_187c6c;
        case 0x187c70u: goto label_187c70;
        case 0x187c74u: goto label_187c74;
        case 0x187c78u: goto label_187c78;
        case 0x187c7cu: goto label_187c7c;
        case 0x187c80u: goto label_187c80;
        case 0x187c84u: goto label_187c84;
        case 0x187c88u: goto label_187c88;
        case 0x187c8cu: goto label_187c8c;
        case 0x187c90u: goto label_187c90;
        case 0x187c94u: goto label_187c94;
        case 0x187c98u: goto label_187c98;
        case 0x187c9cu: goto label_187c9c;
        case 0x187ca0u: goto label_187ca0;
        case 0x187ca4u: goto label_187ca4;
        case 0x187ca8u: goto label_187ca8;
        case 0x187cacu: goto label_187cac;
        case 0x187cb0u: goto label_187cb0;
        case 0x187cb4u: goto label_187cb4;
        case 0x187cb8u: goto label_187cb8;
        case 0x187cbcu: goto label_187cbc;
        case 0x187cc0u: goto label_187cc0;
        case 0x187cc4u: goto label_187cc4;
        case 0x187cc8u: goto label_187cc8;
        case 0x187cccu: goto label_187ccc;
        case 0x187cd0u: goto label_187cd0;
        case 0x187cd4u: goto label_187cd4;
        case 0x187cd8u: goto label_187cd8;
        case 0x187cdcu: goto label_187cdc;
        case 0x187ce0u: goto label_187ce0;
        case 0x187ce4u: goto label_187ce4;
        case 0x187ce8u: goto label_187ce8;
        case 0x187cecu: goto label_187cec;
        case 0x187cf0u: goto label_187cf0;
        case 0x187cf4u: goto label_187cf4;
        case 0x187cf8u: goto label_187cf8;
        case 0x187cfcu: goto label_187cfc;
        case 0x187d00u: goto label_187d00;
        case 0x187d04u: goto label_187d04;
        case 0x187d08u: goto label_187d08;
        case 0x187d0cu: goto label_187d0c;
        case 0x187d10u: goto label_187d10;
        case 0x187d14u: goto label_187d14;
        case 0x187d18u: goto label_187d18;
        case 0x187d1cu: goto label_187d1c;
        case 0x187d20u: goto label_187d20;
        case 0x187d24u: goto label_187d24;
        case 0x187d28u: goto label_187d28;
        case 0x187d2cu: goto label_187d2c;
        case 0x187d30u: goto label_187d30;
        case 0x187d34u: goto label_187d34;
        case 0x187d38u: goto label_187d38;
        case 0x187d3cu: goto label_187d3c;
        case 0x187d40u: goto label_187d40;
        case 0x187d44u: goto label_187d44;
        case 0x187d48u: goto label_187d48;
        case 0x187d4cu: goto label_187d4c;
        case 0x187d50u: goto label_187d50;
        case 0x187d54u: goto label_187d54;
        case 0x187d58u: goto label_187d58;
        case 0x187d5cu: goto label_187d5c;
        case 0x187d60u: goto label_187d60;
        case 0x187d64u: goto label_187d64;
        case 0x187d68u: goto label_187d68;
        case 0x187d6cu: goto label_187d6c;
        case 0x187d70u: goto label_187d70;
        case 0x187d74u: goto label_187d74;
        case 0x187d78u: goto label_187d78;
        case 0x187d7cu: goto label_187d7c;
        case 0x187d80u: goto label_187d80;
        case 0x187d84u: goto label_187d84;
        case 0x187d88u: goto label_187d88;
        case 0x187d8cu: goto label_187d8c;
        case 0x187d90u: goto label_187d90;
        case 0x187d94u: goto label_187d94;
        case 0x187d98u: goto label_187d98;
        case 0x187d9cu: goto label_187d9c;
        case 0x187da0u: goto label_187da0;
        case 0x187da4u: goto label_187da4;
        case 0x187da8u: goto label_187da8;
        case 0x187dacu: goto label_187dac;
        default: return;
    }

label_1875e0:
    // 0x1875e0: 0xc6010268  lwc1        $f1, 0x268($s0)
    ctx->pc = 0x1875e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1875e4:
    // 0x1875e4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1875e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1875e8:
    // 0x1875e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1875e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1875ec:
    // 0x1875ec: 0x0  nop
    ctx->pc = 0x1875ecu;
    // NOP
label_1875f0:
    // 0x1875f0: 0x46011301  sub.s       $f12, $f2, $f1
    ctx->pc = 0x1875f0u;
    ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_1875f4:
    // 0x1875f4: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x1875f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1875f8:
    // 0x1875f8: 0x0  nop
    ctx->pc = 0x1875f8u;
    // NOP
label_1875fc:
    // 0x1875fc: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_187600:
    if (ctx->pc == 0x187600u) {
        ctx->pc = 0x187600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1875FCu;
        // 0x187600: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187604u;
        goto label_187604;
    }
    ctx->pc = 0x1875FCu;
    {
        const bool branch_taken_0x1875fc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x187600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1875FCu;
        // 0x187600: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1875fc) {
            ctx->pc = 0x187618u;
            goto label_187618;
        }
    }
    ctx->pc = 0x187604u;
label_187604:
    // 0x187604: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x187604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_187608:
    // 0x187608: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x187608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_18760c:
    // 0x18760c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18760cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_187610:
    // 0x187610: 0x1000000d  b           . + 4 + (0xD << 2)
label_187614:
    if (ctx->pc == 0x187614u) {
        ctx->pc = 0x187614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187610u;
        // 0x187614: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x187618u;
        goto label_187618;
    }
    ctx->pc = 0x187610u;
    {
        const bool branch_taken_0x187610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187610u;
        // 0x187614: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x187610) {
            ctx->pc = 0x187648u;
            goto label_187648;
        }
    }
    ctx->pc = 0x187618u;
label_187618:
    // 0x187618: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x187618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_18761c:
    // 0x18761c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18761cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_187620:
    // 0x187620: 0x0  nop
    ctx->pc = 0x187620u;
    // NOP
label_187624:
    // 0x187624: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x187624u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_187628:
    // 0x187628: 0x0  nop
    ctx->pc = 0x187628u;
    // NOP
label_18762c:
    // 0x18762c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_187630:
    if (ctx->pc == 0x187630u) {
        ctx->pc = 0x187634u;
        goto label_187634;
    }
    ctx->pc = 0x18762Cu;
    {
        const bool branch_taken_0x18762c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18762c) {
            ctx->pc = 0x187648u;
            goto label_187648;
        }
    }
    ctx->pc = 0x187634u;
label_187634:
    // 0x187634: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x187634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_187638:
    // 0x187638: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x187638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_18763c:
    // 0x18763c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18763cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_187640:
    // 0x187640: 0x10000001  b           . + 4 + (0x1 << 2)
label_187644:
    if (ctx->pc == 0x187644u) {
        ctx->pc = 0x187644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187640u;
        // 0x187644: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x187648u;
        goto label_187648;
    }
    ctx->pc = 0x187640u;
    {
        const bool branch_taken_0x187640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187640u;
        // 0x187644: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x187640) {
            ctx->pc = 0x187648u;
            goto label_187648;
        }
    }
    ctx->pc = 0x187648u;
label_187648:
    // 0x187648: 0xc06d448  jal         func_1B5120
label_18764c:
    if (ctx->pc == 0x18764Cu) {
        ctx->pc = 0x187650u;
        goto label_187650;
    }
    ctx->pc = 0x187648u;
    SET_GPR_U32(ctx, 31, 0x187650u);
    ctx->pc = 0x1B5120u;
    { ctx->pc = 0x1b5120; return; }
    ctx->pc = 0x187650u;
label_187650:
    // 0x187650: 0x3c033d16  lui         $v1, 0x3D16
    ctx->pc = 0x187650u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15638 << 16));
label_187654:
    // 0x187654: 0x34632051  ori         $v1, $v1, 0x2051
    ctx->pc = 0x187654u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8273);
label_187658:
    // 0x187658: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x187658u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18765c:
    // 0x18765c: 0x0  nop
    ctx->pc = 0x18765cu;
    // NOP
label_187660:
    // 0x187660: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x187660u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_187664:
    // 0x187664: 0x0  nop
    ctx->pc = 0x187664u;
    // NOP
label_187668:
    // 0x187668: 0x45000076  bc1f        . + 4 + (0x76 << 2)
label_18766c:
    if (ctx->pc == 0x18766Cu) {
        ctx->pc = 0x187670u;
        goto label_187670;
    }
    ctx->pc = 0x187668u;
    {
        const bool branch_taken_0x187668 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x187668) {
            ctx->pc = 0x187844u;
            goto label_187844;
        }
    }
    ctx->pc = 0x187670u;
label_187670:
    // 0x187670: 0xc60201dc  lwc1        $f2, 0x1DC($s0)
    ctx->pc = 0x187670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_187674:
    // 0x187674: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x187674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_187678:
    // 0x187678: 0xc6010264  lwc1        $f1, 0x264($s0)
    ctx->pc = 0x187678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18767c:
    // 0x18767c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18767cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_187680:
    // 0x187680: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x187680u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_187684:
    // 0x187684: 0x0  nop
    ctx->pc = 0x187684u;
    // NOP
label_187688:
    // 0x187688: 0x46011301  sub.s       $f12, $f2, $f1
    ctx->pc = 0x187688u;
    ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_18768c:
    // 0x18768c: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x18768cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_187690:
    // 0x187690: 0x0  nop
    ctx->pc = 0x187690u;
    // NOP
label_187694:
    // 0x187694: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_187698:
    if (ctx->pc == 0x187698u) {
        ctx->pc = 0x187698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187694u;
        // 0x187698: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18769Cu;
        goto label_18769c;
    }
    ctx->pc = 0x187694u;
    {
        const bool branch_taken_0x187694 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x187698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187694u;
        // 0x187698: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187694) {
            ctx->pc = 0x1876B0u;
            goto label_1876b0;
        }
    }
    ctx->pc = 0x18769Cu;
label_18769c:
    // 0x18769c: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x18769cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1876a0:
    // 0x1876a0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1876a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1876a4:
    // 0x1876a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1876a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1876a8:
    // 0x1876a8: 0x1000000d  b           . + 4 + (0xD << 2)
label_1876ac:
    if (ctx->pc == 0x1876ACu) {
        ctx->pc = 0x1876ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1876A8u;
        // 0x1876ac: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1876B0u;
        goto label_1876b0;
    }
    ctx->pc = 0x1876A8u;
    {
        const bool branch_taken_0x1876a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1876ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1876A8u;
        // 0x1876ac: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1876a8) {
            ctx->pc = 0x1876E0u;
            goto label_1876e0;
        }
    }
    ctx->pc = 0x1876B0u;
label_1876b0:
    // 0x1876b0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1876b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1876b4:
    // 0x1876b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1876b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1876b8:
    // 0x1876b8: 0x0  nop
    ctx->pc = 0x1876b8u;
    // NOP
label_1876bc:
    // 0x1876bc: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x1876bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1876c0:
    // 0x1876c0: 0x0  nop
    ctx->pc = 0x1876c0u;
    // NOP
label_1876c4:
    // 0x1876c4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_1876c8:
    if (ctx->pc == 0x1876C8u) {
        ctx->pc = 0x1876CCu;
        goto label_1876cc;
    }
    ctx->pc = 0x1876C4u;
    {
        const bool branch_taken_0x1876c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1876c4) {
            ctx->pc = 0x1876E0u;
            goto label_1876e0;
        }
    }
    ctx->pc = 0x1876CCu;
label_1876cc:
    // 0x1876cc: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1876ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1876d0:
    // 0x1876d0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1876d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1876d4:
    // 0x1876d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1876d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1876d8:
    // 0x1876d8: 0x10000001  b           . + 4 + (0x1 << 2)
label_1876dc:
    if (ctx->pc == 0x1876DCu) {
        ctx->pc = 0x1876DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1876D8u;
        // 0x1876dc: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1876E0u;
        goto label_1876e0;
    }
    ctx->pc = 0x1876D8u;
    {
        const bool branch_taken_0x1876d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1876DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1876D8u;
        // 0x1876dc: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1876d8) {
            ctx->pc = 0x1876E0u;
            goto label_1876e0;
        }
    }
    ctx->pc = 0x1876E0u;
label_1876e0:
    // 0x1876e0: 0xc06d448  jal         func_1B5120
label_1876e4:
    if (ctx->pc == 0x1876E4u) {
        ctx->pc = 0x1876E8u;
        goto label_1876e8;
    }
    ctx->pc = 0x1876E0u;
    SET_GPR_U32(ctx, 31, 0x1876E8u);
    ctx->pc = 0x1B5120u;
    { ctx->pc = 0x1b5120; return; }
    ctx->pc = 0x1876E8u;
label_1876e8:
    // 0x1876e8: 0x3c033d16  lui         $v1, 0x3D16
    ctx->pc = 0x1876e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15638 << 16));
label_1876ec:
    // 0x1876ec: 0x34632051  ori         $v1, $v1, 0x2051
    ctx->pc = 0x1876ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8273);
label_1876f0:
    // 0x1876f0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1876f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1876f4:
    // 0x1876f4: 0x0  nop
    ctx->pc = 0x1876f4u;
    // NOP
label_1876f8:
    // 0x1876f8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1876f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1876fc:
    // 0x1876fc: 0x0  nop
    ctx->pc = 0x1876fcu;
    // NOP
label_187700:
    // 0x187700: 0x45000050  bc1f        . + 4 + (0x50 << 2)
label_187704:
    if (ctx->pc == 0x187704u) {
        ctx->pc = 0x187708u;
        goto label_187708;
    }
    ctx->pc = 0x187700u;
    {
        const bool branch_taken_0x187700 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x187700) {
            ctx->pc = 0x187844u;
            goto label_187844;
        }
    }
    ctx->pc = 0x187708u;
label_187708:
    // 0x187708: 0x8202023d  lb          $v0, 0x23D($s0)
    ctx->pc = 0x187708u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 573)));
label_18770c:
    // 0x18770c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x18770cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_187710:
    // 0x187710: 0xa202023d  sb          $v0, 0x23D($s0)
    ctx->pc = 0x187710u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 573), (uint8_t)GPR_U32(ctx, 2));
label_187714:
    // 0x187714: 0x8202023d  lb          $v0, 0x23D($s0)
    ctx->pc = 0x187714u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 573)));
label_187718:
    // 0x187718: 0x304200f7  andi        $v0, $v0, 0xF7
    ctx->pc = 0x187718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)247);
label_18771c:
    // 0x18771c: 0xc08f0cc  jal         func_23C330
label_187720:
    if (ctx->pc == 0x187720u) {
        ctx->pc = 0x187720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18771Cu;
        // 0x187720: 0xa202023d  sb          $v0, 0x23D($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 573), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187724u;
        goto label_187724;
    }
    ctx->pc = 0x18771Cu;
    SET_GPR_U32(ctx, 31, 0x187724u);
    ctx->pc = 0x187720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18771Cu;
    // 0x187720: 0xa202023d  sb          $v0, 0x23D($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 573), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x187724u;
label_187724:
    // 0x187724: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x187724u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_187728:
    // 0x187728: 0x92060230  lbu         $a2, 0x230($s0)
    ctx->pc = 0x187728u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 560)));
label_18772c:
    // 0x18772c: 0x3c040028  lui         $a0, 0x28
    ctx->pc = 0x18772cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)40 << 16));
label_187730:
    // 0x187730: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x187730u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
label_187734:
    // 0x187734: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x187734u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_187738:
    // 0x187738: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x187738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
label_18773c:
    // 0x18773c: 0x3c074f00  lui         $a3, 0x4F00
    ctx->pc = 0x18773cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20224 << 16));
label_187740:
    // 0x187740: 0x24842b15  addiu       $a0, $a0, 0x2B15
    ctx->pc = 0x187740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11029));
label_187744:
    // 0x187744: 0x24632b10  addiu       $v1, $v1, 0x2B10
    ctx->pc = 0x187744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11024));
label_187748:
    // 0x187748: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x187748u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_18774c:
    // 0x18774c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x18774cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_187750:
    // 0x187750: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x187750u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_187754:
    // 0x187754: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x187754u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_187758:
    // 0x187758: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x187758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_18775c:
    // 0x18775c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x18775cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_187760:
    // 0x187760: 0x90850000  lbu         $a1, 0x0($a0)
    ctx->pc = 0x187760u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_187764:
    // 0x187764: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x187764u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_187768:
    // 0x187768: 0x24422b11  addiu       $v0, $v0, 0x2B11
    ctx->pc = 0x187768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11025));
label_18776c:
    // 0x18776c: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x18776cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_187770:
    // 0x187770: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x187770u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_187774:
    // 0x187774: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x187774u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_187778:
    // 0x187778: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x187778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_18777c:
    // 0x18777c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18777cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_187780:
    // 0x187780: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x187780u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_187784:
    // 0x187784: 0x0  nop
    ctx->pc = 0x187784u;
    // NOP
label_187788:
    // 0x187788: 0x24a50078  addiu       $a1, $a1, 0x78
    ctx->pc = 0x187788u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 120));
label_18778c:
    // 0x18778c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x18778cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_187790:
    // 0x187790: 0xa6040224  sh          $a0, 0x224($s0)
    ctx->pc = 0x187790u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 548), (uint16_t)GPR_U32(ctx, 4));
label_187794:
    // 0x187794: 0x92050230  lbu         $a1, 0x230($s0)
    ctx->pc = 0x187794u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 560)));
label_187798:
    // 0x187798: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x187798u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_18779c:
    // 0x18779c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x18779cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1877a0:
    // 0x1877a0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1877a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1877a4:
    // 0x1877a4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1877a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1877a8:
    // 0x1877a8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1877a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1877ac:
    // 0x1877ac: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1877acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1877b0:
    // 0x1877b0: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1877b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1877b4:
    // 0x1877b4: 0xc08f0cc  jal         func_23C330
label_1877b8:
    if (ctx->pc == 0x1877B8u) {
        ctx->pc = 0x1877B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1877B4u;
        // 0x1877b8: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1877BCu;
        goto label_1877bc;
    }
    ctx->pc = 0x1877B4u;
    SET_GPR_U32(ctx, 31, 0x1877BCu);
    ctx->pc = 0x1877B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1877B4u;
    // 0x1877b8: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1877BCu;
label_1877bc:
    // 0x1877bc: 0x44910800  mtc1        $s1, $f1
    ctx->pc = 0x1877bcu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1877c0:
    // 0x1877c0: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x1877c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_1877c4:
    // 0x1877c4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1877c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1877c8:
    // 0x1877c8: 0x92050230  lbu         $a1, 0x230($s0)
    ctx->pc = 0x1877c8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 560)));
label_1877cc:
    // 0x1877cc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1877ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1877d0:
    // 0x1877d0: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x1877d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_1877d4:
    // 0x1877d4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1877d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1877d8:
    // 0x1877d8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1877d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1877dc:
    // 0x1877dc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1877dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1877e0:
    // 0x1877e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1877e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1877e4:
    // 0x1877e4: 0x0  nop
    ctx->pc = 0x1877e4u;
    // NOP
label_1877e8:
    // 0x1877e8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1877e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_1877ec:
    // 0x1877ec: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x1877ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
label_1877f0:
    // 0x1877f0: 0x24632b11  addiu       $v1, $v1, 0x2B11
    ctx->pc = 0x1877f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11025));
label_1877f4:
    // 0x1877f4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1877f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1877f8:
    // 0x1877f8: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1877f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1877fc:
    // 0x1877fc: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1877fcu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_187800:
    // 0x187800: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x187800u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_187804:
    // 0x187804: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x187804u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_187808:
    // 0x187808: 0x0  nop
    ctx->pc = 0x187808u;
    // NOP
label_18780c:
    // 0x18780c: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x18780cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_187810:
    // 0x187810: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
label_187814:
    if (ctx->pc == 0x187814u) {
        ctx->pc = 0x187818u;
        goto label_187818;
    }
    ctx->pc = 0x187810u;
    {
        const bool branch_taken_0x187810 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x187810) {
            ctx->pc = 0x187838u;
            goto label_187838;
        }
    }
    ctx->pc = 0x187818u;
label_187818:
    // 0x187818: 0x9603022c  lhu         $v1, 0x22C($s0)
    ctx->pc = 0x187818u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 556)));
label_18781c:
    // 0x18781c: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x18781cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
label_187820:
    // 0x187820: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_187824:
    if (ctx->pc == 0x187824u) {
        ctx->pc = 0x187828u;
        goto label_187828;
    }
    ctx->pc = 0x187820u;
    {
        const bool branch_taken_0x187820 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x187820) {
            ctx->pc = 0x187838u;
            goto label_187838;
        }
    }
    ctx->pc = 0x187828u;
label_187828:
    // 0x187828: 0x8e030194  lw          $v1, 0x194($s0)
    ctx->pc = 0x187828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 404)));
label_18782c:
    // 0x18782c: 0x34630802  ori         $v1, $v1, 0x802
    ctx->pc = 0x18782cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2050);
label_187830:
    // 0x187830: 0x10000004  b           . + 4 + (0x4 << 2)
label_187834:
    if (ctx->pc == 0x187834u) {
        ctx->pc = 0x187834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187830u;
        // 0x187834: 0xae030194  sw          $v1, 0x194($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 404), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187838u;
        goto label_187838;
    }
    ctx->pc = 0x187830u;
    {
        const bool branch_taken_0x187830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187830u;
        // 0x187834: 0xae030194  sw          $v1, 0x194($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 404), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187830) {
            ctx->pc = 0x187844u;
            goto label_187844;
        }
    }
    ctx->pc = 0x187838u;
label_187838:
    // 0x187838: 0x8e030194  lw          $v1, 0x194($s0)
    ctx->pc = 0x187838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 404)));
label_18783c:
    // 0x18783c: 0x34630401  ori         $v1, $v1, 0x401
    ctx->pc = 0x18783cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1025);
label_187840:
    // 0x187840: 0xae030194  sw          $v1, 0x194($s0)
    ctx->pc = 0x187840u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 404), GPR_U32(ctx, 3));
label_187844:
    // 0x187844: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x187844u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_187848:
    // 0x187848: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x187848u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_18784c:
    // 0x18784c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18784cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_187850:
    // 0x187850: 0x3e00008  jr          $ra
label_187854:
    if (ctx->pc == 0x187854u) {
        ctx->pc = 0x187854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187850u;
        // 0x187854: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187858u;
        goto label_187858;
    }
    ctx->pc = 0x187850u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x187854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187850u;
        // 0x187854: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187850u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x187858u;
label_187858:
    // 0x187858: 0x0  nop
    ctx->pc = 0x187858u;
    // NOP
label_18785c:
    // 0x18785c: 0x0  nop
    ctx->pc = 0x18785cu;
    // NOP
label_187860:
    // 0x187860: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x187860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_187864:
    // 0x187864: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x187864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_187868:
    // 0x187868: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x187868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_18786c:
    // 0x18786c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18786cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_187870:
    // 0x187870: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x187870u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_187874:
    // 0x187874: 0x9086023d  lbu         $a2, 0x23D($a0)
    ctx->pc = 0x187874u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 573)));
label_187878:
    // 0x187878: 0x30c30002  andi        $v1, $a2, 0x2
    ctx->pc = 0x187878u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)2);
label_18787c:
    // 0x18787c: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_187880:
    if (ctx->pc == 0x187880u) {
        ctx->pc = 0x187880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18787Cu;
        // 0x187880: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187884u;
        goto label_187884;
    }
    ctx->pc = 0x18787Cu;
    {
        const bool branch_taken_0x18787c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x187880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18787Cu;
        // 0x187880: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18787c) {
            ctx->pc = 0x1878B8u;
            goto label_1878b8;
        }
    }
    ctx->pc = 0x187884u;
label_187884:
    // 0x187884: 0x86230224  lh          $v1, 0x224($s1)
    ctx->pc = 0x187884u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 548)));
label_187888:
    // 0x187888: 0x2463fff8  addiu       $v1, $v1, -0x8
    ctx->pc = 0x187888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
label_18788c:
    // 0x18788c: 0xa6230224  sh          $v1, 0x224($s1)
    ctx->pc = 0x18788cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 548), (uint16_t)GPR_U32(ctx, 3));
label_187890:
    // 0x187890: 0xa620019e  sh          $zero, 0x19E($s1)
    ctx->pc = 0x187890u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 414), (uint16_t)GPR_U32(ctx, 0));
label_187894:
    // 0x187894: 0xa620019c  sh          $zero, 0x19C($s1)
    ctx->pc = 0x187894u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 412), (uint16_t)GPR_U32(ctx, 0));
label_187898:
    // 0x187898: 0x86230224  lh          $v1, 0x224($s1)
    ctx->pc = 0x187898u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 548)));
label_18789c:
    // 0x18789c: 0x1c600023  bgtz        $v1, . + 4 + (0x23 << 2)
label_1878a0:
    if (ctx->pc == 0x1878A0u) {
        ctx->pc = 0x1878A4u;
        goto label_1878a4;
    }
    ctx->pc = 0x18789Cu;
    {
        const bool branch_taken_0x18789c = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x18789c) {
            ctx->pc = 0x18792Cu;
            goto label_18792c;
        }
    }
    ctx->pc = 0x1878A4u;
label_1878a4:
    // 0x1878a4: 0x8223023d  lb          $v1, 0x23D($s1)
    ctx->pc = 0x1878a4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 573)));
label_1878a8:
    // 0x1878a8: 0x306300fd  andi        $v1, $v1, 0xFD
    ctx->pc = 0x1878a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)253);
label_1878ac:
    // 0x1878ac: 0xa223023d  sb          $v1, 0x23D($s1)
    ctx->pc = 0x1878acu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 573), (uint8_t)GPR_U32(ctx, 3));
label_1878b0:
    // 0x1878b0: 0x1000001e  b           . + 4 + (0x1E << 2)
label_1878b4:
    if (ctx->pc == 0x1878B4u) {
        ctx->pc = 0x1878B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1878B0u;
        // 0x1878b4: 0xa6200224  sh          $zero, 0x224($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 548), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1878B8u;
        goto label_1878b8;
    }
    ctx->pc = 0x1878B0u;
    {
        const bool branch_taken_0x1878b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1878B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1878B0u;
        // 0x1878b4: 0xa6200224  sh          $zero, 0x224($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 548), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1878b0) {
            ctx->pc = 0x18792Cu;
            goto label_18792c;
        }
    }
    ctx->pc = 0x1878B8u;
label_1878b8:
    // 0x1878b8: 0x30c30008  andi        $v1, $a2, 0x8
    ctx->pc = 0x1878b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)8);
label_1878bc:
    // 0x1878bc: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
label_1878c0:
    if (ctx->pc == 0x1878C0u) {
        ctx->pc = 0x1878C4u;
        goto label_1878c4;
    }
    ctx->pc = 0x1878BCu;
    {
        const bool branch_taken_0x1878bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1878bc) {
            ctx->pc = 0x187900u;
            goto label_187900;
        }
    }
    ctx->pc = 0x1878C4u;
label_1878c4:
    // 0x1878c4: 0xa620019e  sh          $zero, 0x19E($s1)
    ctx->pc = 0x1878c4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 414), (uint16_t)GPR_U32(ctx, 0));
label_1878c8:
    // 0x1878c8: 0xc062400  jal         func_189000
label_1878cc:
    if (ctx->pc == 0x1878CCu) {
        ctx->pc = 0x1878CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1878C8u;
        // 0x1878cc: 0xa620019c  sh          $zero, 0x19C($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 412), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1878D0u;
        goto label_1878d0;
    }
    ctx->pc = 0x1878C8u;
    SET_GPR_U32(ctx, 31, 0x1878D0u);
    ctx->pc = 0x1878CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1878C8u;
    // 0x1878cc: 0xa620019c  sh          $zero, 0x19C($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 412), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189000u;
    { ctx->pc = 0x189000; return; }
    ctx->pc = 0x1878D0u;
label_1878d0:
    // 0x1878d0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1878d4:
    if (ctx->pc == 0x1878D4u) {
        ctx->pc = 0x1878D8u;
        goto label_1878d8;
    }
    ctx->pc = 0x1878D0u;
    {
        const bool branch_taken_0x1878d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1878d0) {
            ctx->pc = 0x1878F0u;
            goto label_1878f0;
        }
    }
    ctx->pc = 0x1878D8u;
label_1878d8:
    // 0x1878d8: 0x8e240194  lw          $a0, 0x194($s1)
    ctx->pc = 0x1878d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 404)));
label_1878dc:
    // 0x1878dc: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x1878dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_1878e0:
    // 0x1878e0: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x1878e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
label_1878e4:
    // 0x1878e4: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1878e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_1878e8:
    // 0x1878e8: 0x10000010  b           . + 4 + (0x10 << 2)
label_1878ec:
    if (ctx->pc == 0x1878ECu) {
        ctx->pc = 0x1878ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1878E8u;
        // 0x1878ec: 0xae230194  sw          $v1, 0x194($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 404), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1878F0u;
        goto label_1878f0;
    }
    ctx->pc = 0x1878E8u;
    {
        const bool branch_taken_0x1878e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1878ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1878E8u;
        // 0x1878ec: 0xae230194  sw          $v1, 0x194($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 404), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1878e8) {
            ctx->pc = 0x18792Cu;
            goto label_18792c;
        }
    }
    ctx->pc = 0x1878F0u;
label_1878f0:
    // 0x1878f0: 0x8223023d  lb          $v1, 0x23D($s1)
    ctx->pc = 0x1878f0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 573)));
label_1878f4:
    // 0x1878f4: 0x306300f7  andi        $v1, $v1, 0xF7
    ctx->pc = 0x1878f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)247);
label_1878f8:
    // 0x1878f8: 0x1000000c  b           . + 4 + (0xC << 2)
label_1878fc:
    if (ctx->pc == 0x1878FCu) {
        ctx->pc = 0x1878FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1878F8u;
        // 0x1878fc: 0xa223023d  sb          $v1, 0x23D($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 573), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187900u;
        goto label_187900;
    }
    ctx->pc = 0x1878F8u;
    {
        const bool branch_taken_0x1878f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1878FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1878F8u;
        // 0x1878fc: 0xa223023d  sb          $v1, 0x23D($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 573), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1878f8) {
            ctx->pc = 0x18792Cu;
            goto label_18792c;
        }
    }
    ctx->pc = 0x187900u;
label_187900:
    // 0x187900: 0x86230224  lh          $v1, 0x224($s1)
    ctx->pc = 0x187900u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 548)));
label_187904:
    // 0x187904: 0x1c600003  bgtz        $v1, . + 4 + (0x3 << 2)
label_187908:
    if (ctx->pc == 0x187908u) {
        ctx->pc = 0x18790Cu;
        goto label_18790c;
    }
    ctx->pc = 0x187904u;
    {
        const bool branch_taken_0x187904 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x187904) {
            ctx->pc = 0x187914u;
            goto label_187914;
        }
    }
    ctx->pc = 0x18790Cu;
label_18790c:
    // 0x18790c: 0xc061e50  jal         func_187940
label_187910:
    if (ctx->pc == 0x187910u) {
        ctx->pc = 0x187914u;
        goto label_187914;
    }
    ctx->pc = 0x18790Cu;
    SET_GPR_U32(ctx, 31, 0x187914u);
    ctx->pc = 0x187940u;
    goto label_187940;
    ctx->pc = 0x187914u;
label_187914:
    // 0x187914: 0x9223023d  lbu         $v1, 0x23D($s1)
    ctx->pc = 0x187914u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 573)));
label_187918:
    // 0x187918: 0x3063000a  andi        $v1, $v1, 0xA
    ctx->pc = 0x187918u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)10);
label_18791c:
    // 0x18791c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_187920:
    if (ctx->pc == 0x187920u) {
        ctx->pc = 0x187920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18791Cu;
        // 0x187920: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187924u;
        goto label_187924;
    }
    ctx->pc = 0x18791Cu;
    {
        const bool branch_taken_0x18791c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x187920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18791Cu;
        // 0x187920: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18791c) {
            ctx->pc = 0x18792Cu;
            goto label_18792c;
        }
    }
    ctx->pc = 0x187924u;
label_187924:
    // 0x187924: 0xc061f98  jal         func_187E60
label_187928:
    if (ctx->pc == 0x187928u) {
        ctx->pc = 0x187928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187924u;
        // 0x187928: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18792Cu;
        goto label_18792c;
    }
    ctx->pc = 0x187924u;
    SET_GPR_U32(ctx, 31, 0x18792Cu);
    ctx->pc = 0x187928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187924u;
    // 0x187928: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187E60u;
    { ctx->pc = 0x187e60; return; }
    ctx->pc = 0x18792Cu;
label_18792c:
    // 0x18792c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x18792cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_187930:
    // 0x187930: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x187930u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_187934:
    // 0x187934: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x187934u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_187938:
    // 0x187938: 0x3e00008  jr          $ra
label_18793c:
    if (ctx->pc == 0x18793Cu) {
        ctx->pc = 0x18793Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187938u;
        // 0x18793c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187940u;
        goto label_187940;
    }
    ctx->pc = 0x187938u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18793Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187938u;
        // 0x18793c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187938u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x187940u;
label_187940:
    // 0x187940: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x187940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_187944:
    // 0x187944: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x187944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_187948:
    // 0x187948: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x187948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_18794c:
    // 0x18794c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18794cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_187950:
    // 0x187950: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x187950u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_187954:
    // 0x187954: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x187954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_187958:
    // 0x187958: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x187958u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_18795c:
    // 0x18795c: 0xc062400  jal         func_189000
label_187960:
    if (ctx->pc == 0x187960u) {
        ctx->pc = 0x187960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18795Cu;
        // 0x187960: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187964u;
        goto label_187964;
    }
    ctx->pc = 0x18795Cu;
    SET_GPR_U32(ctx, 31, 0x187964u);
    ctx->pc = 0x187960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18795Cu;
    // 0x187960: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189000u;
    { ctx->pc = 0x189000; return; }
    ctx->pc = 0x187964u;
label_187964:
    // 0x187964: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_187968:
    if (ctx->pc == 0x187968u) {
        ctx->pc = 0x18796Cu;
        goto label_18796c;
    }
    ctx->pc = 0x187964u;
    {
        const bool branch_taken_0x187964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x187964) {
            ctx->pc = 0x187998u;
            goto label_187998;
        }
    }
    ctx->pc = 0x18796Cu;
label_18796c:
    // 0x18796c: 0x8264023d  lb          $a0, 0x23D($s3)
    ctx->pc = 0x18796cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 573)));
label_187970:
    // 0x187970: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x187970u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_187974:
    // 0x187974: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x187974u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
label_187978:
    // 0x187978: 0x34840008  ori         $a0, $a0, 0x8
    ctx->pc = 0x187978u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
label_18797c:
    // 0x18797c: 0xa264023d  sb          $a0, 0x23D($s3)
    ctx->pc = 0x18797cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 573), (uint8_t)GPR_U32(ctx, 4));
label_187980:
    // 0x187980: 0x8e640194  lw          $a0, 0x194($s3)
    ctx->pc = 0x187980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 404)));
label_187984:
    // 0x187984: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x187984u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_187988:
    // 0x187988: 0xae630194  sw          $v1, 0x194($s3)
    ctx->pc = 0x187988u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 404), GPR_U32(ctx, 3));
label_18798c:
    // 0x18798c: 0xa660019e  sh          $zero, 0x19E($s3)
    ctx->pc = 0x18798cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 414), (uint16_t)GPR_U32(ctx, 0));
label_187990:
    // 0x187990: 0x1000012b  b           . + 4 + (0x12B << 2)
label_187994:
    if (ctx->pc == 0x187994u) {
        ctx->pc = 0x187994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187990u;
        // 0x187994: 0xa660019c  sh          $zero, 0x19C($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 412), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187998u;
        goto label_187998;
    }
    ctx->pc = 0x187990u;
    {
        const bool branch_taken_0x187990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187990u;
        // 0x187994: 0xa660019c  sh          $zero, 0x19C($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 412), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187990) {
            ctx->pc = 0x187E40u;
            { ctx->pc = 0x187e40; return; }
        }
    }
    ctx->pc = 0x187998u;
label_187998:
    // 0x187998: 0xc08f0cc  jal         func_23C330
label_18799c:
    if (ctx->pc == 0x18799Cu) {
        ctx->pc = 0x1879A0u;
        goto label_1879a0;
    }
    ctx->pc = 0x187998u;
    SET_GPR_U32(ctx, 31, 0x1879A0u);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1879A0u;
label_1879a0:
    // 0x1879a0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1879a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1879a4:
    // 0x1879a4: 0x92660230  lbu         $a2, 0x230($s3)
    ctx->pc = 0x1879a4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 560)));
label_1879a8:
    // 0x1879a8: 0x3c074f00  lui         $a3, 0x4F00
    ctx->pc = 0x1879a8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20224 << 16));
label_1879ac:
    // 0x1879ac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1879acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1879b0:
    // 0x1879b0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1879b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1879b4:
    // 0x1879b4: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x1879b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_1879b8:
    // 0x1879b8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1879b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1879bc:
    // 0x1879bc: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x1879bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_1879c0:
    // 0x1879c0: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1879c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1879c4:
    // 0x1879c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1879c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1879c8:
    // 0x1879c8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1879c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1879cc:
    // 0x1879cc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1879ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1879d0:
    // 0x1879d0: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1879d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_1879d4:
    // 0x1879d4: 0x24422b13  addiu       $v0, $v0, 0x2B13
    ctx->pc = 0x1879d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11027));
label_1879d8:
    // 0x1879d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1879d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1879dc:
    // 0x1879dc: 0x90510000  lbu         $s1, 0x0($v0)
    ctx->pc = 0x1879dcu;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1879e0:
    // 0x1879e0: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x1879e0u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1879e4:
    // 0x1879e4: 0x0  nop
    ctx->pc = 0x1879e4u;
    // NOP
label_1879e8:
    // 0x1879e8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1879e8u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
label_1879ec:
    // 0x1879ec: 0x0  nop
    ctx->pc = 0x1879ecu;
    // NOP
label_1879f0:
    // 0x1879f0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1879f0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1879f4:
    // 0x1879f4: 0x44100000  mfc1        $s0, $f0
    ctx->pc = 0x1879f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
label_1879f8:
    // 0x1879f8: 0xc0623cc  jal         func_188F30
label_1879fc:
    if (ctx->pc == 0x1879FCu) {
        ctx->pc = 0x187A00u;
        goto label_187a00;
    }
    ctx->pc = 0x1879F8u;
    SET_GPR_U32(ctx, 31, 0x187A00u);
    ctx->pc = 0x188F30u;
    { ctx->pc = 0x188f30; return; }
    ctx->pc = 0x187A00u;
label_187a00:
    // 0x187a00: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_187a04:
    if (ctx->pc == 0x187A04u) {
        ctx->pc = 0x187A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187A00u;
        // 0x187a04: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187A08u;
        goto label_187a08;
    }
    ctx->pc = 0x187A00u;
    {
        const bool branch_taken_0x187a00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x187A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187A00u;
        // 0x187a04: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187a00) {
            ctx->pc = 0x187A14u;
            goto label_187a14;
        }
    }
    ctx->pc = 0x187A08u;
label_187a08:
    // 0x187a08: 0x211082a  slt         $at, $s0, $s1
    ctx->pc = 0x187a08u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_187a0c:
    // 0x187a0c: 0x10200055  beqz        $at, . + 4 + (0x55 << 2)
label_187a10:
    if (ctx->pc == 0x187A10u) {
        ctx->pc = 0x187A14u;
        goto label_187a14;
    }
    ctx->pc = 0x187A0Cu;
    {
        const bool branch_taken_0x187a0c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x187a0c) {
            ctx->pc = 0x187B64u;
            goto label_187b64;
        }
    }
    ctx->pc = 0x187A14u;
label_187a14:
    // 0x187a14: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x187a14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_187a18:
    // 0x187a18: 0xa6640224  sh          $a0, 0x224($s3)
    ctx->pc = 0x187a18u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 548), (uint16_t)GPR_U32(ctx, 4));
label_187a1c:
    // 0x187a1c: 0x34644000  ori         $a0, $v1, 0x4000
    ctx->pc = 0x187a1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
label_187a20:
    // 0x187a20: 0x8e630194  lw          $v1, 0x194($s3)
    ctx->pc = 0x187a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 404)));
label_187a24:
    // 0x187a24: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x187a24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_187a28:
    // 0x187a28: 0xae630194  sw          $v1, 0x194($s3)
    ctx->pc = 0x187a28u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 404), GPR_U32(ctx, 3));
label_187a2c:
    // 0x187a2c: 0x8663003c  lh          $v1, 0x3C($s3)
    ctx->pc = 0x187a2cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 60)));
label_187a30:
    // 0x187a30: 0x28630096  slti        $v1, $v1, 0x96
    ctx->pc = 0x187a30u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)150) ? 1 : 0);
label_187a34:
    // 0x187a34: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_187a38:
    if (ctx->pc == 0x187A38u) {
        ctx->pc = 0x187A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187A34u;
        // 0x187a38: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187A3Cu;
        goto label_187a3c;
    }
    ctx->pc = 0x187A34u;
    {
        const bool branch_taken_0x187a34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x187A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187A34u;
        // 0x187a38: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187a34) {
            ctx->pc = 0x187A40u;
            goto label_187a40;
        }
    }
    ctx->pc = 0x187A3Cu;
label_187a3c:
    // 0x187a3c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x187a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_187a40:
    // 0x187a40: 0x146000ff  bnez        $v1, . + 4 + (0xFF << 2)
label_187a44:
    if (ctx->pc == 0x187A44u) {
        ctx->pc = 0x187A48u;
        goto label_187a48;
    }
    ctx->pc = 0x187A40u;
    {
        const bool branch_taken_0x187a40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x187a40) {
            ctx->pc = 0x187E40u;
            { ctx->pc = 0x187e40; return; }
        }
    }
    ctx->pc = 0x187A48u;
label_187a48:
    // 0x187a48: 0x92630232  lbu         $v1, 0x232($s3)
    ctx->pc = 0x187a48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 562)));
label_187a4c:
    // 0x187a4c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x187a4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_187a50:
    // 0x187a50: 0x14660016  bne         $v1, $a2, . + 4 + (0x16 << 2)
label_187a54:
    if (ctx->pc == 0x187A54u) {
        ctx->pc = 0x187A58u;
        goto label_187a58;
    }
    ctx->pc = 0x187A50u;
    {
        const bool branch_taken_0x187a50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x187a50) {
            ctx->pc = 0x187AACu;
            goto label_187aac;
        }
    }
    ctx->pc = 0x187A58u;
label_187a58:
    // 0x187a58: 0x92640238  lbu         $a0, 0x238($s3)
    ctx->pc = 0x187a58u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 568)));
label_187a5c:
    // 0x187a5c: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x187a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
label_187a60:
    // 0x187a60: 0x24631300  addiu       $v1, $v1, 0x1300
    ctx->pc = 0x187a60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4864));
label_187a64:
    // 0x187a64: 0x2485ffb8  addiu       $a1, $a0, -0x48
    ctx->pc = 0x187a64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967224));
label_187a68:
    // 0x187a68: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x187a68u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_187a6c:
    // 0x187a6c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x187a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_187a70:
    // 0x187a70: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x187a70u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_187a74:
    // 0x187a74: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x187a74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_187a78:
    // 0x187a78: 0x24643620  addiu       $a0, $v1, 0x3620
    ctx->pc = 0x187a78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 13856));
label_187a7c:
    // 0x187a7c: 0x9063367c  lbu         $v1, 0x367C($v1)
    ctx->pc = 0x187a7cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 13948)));
label_187a80:
    // 0x187a80: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_187a84:
    if (ctx->pc == 0x187A84u) {
        ctx->pc = 0x187A88u;
        goto label_187a88;
    }
    ctx->pc = 0x187A80u;
    {
        const bool branch_taken_0x187a80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x187a80) {
            ctx->pc = 0x187AACu;
            goto label_187aac;
        }
    }
    ctx->pc = 0x187A88u;
label_187a88:
    // 0x187a88: 0x9084006b  lbu         $a0, 0x6B($a0)
    ctx->pc = 0x187a88u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 107)));
label_187a8c:
    // 0x187a8c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x187a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_187a90:
    // 0x187a90: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
label_187a94:
    if (ctx->pc == 0x187A94u) {
        ctx->pc = 0x187A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187A90u;
        // 0x187a94: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187A98u;
        goto label_187a98;
    }
    ctx->pc = 0x187A90u;
    {
        const bool branch_taken_0x187a90 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x187A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187A90u;
        // 0x187a94: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187a90) {
            ctx->pc = 0x187AACu;
            goto label_187aac;
        }
    }
    ctx->pc = 0x187A98u;
label_187a98:
    // 0x187a98: 0x24030029  addiu       $v1, $zero, 0x29
    ctx->pc = 0x187a98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
label_187a9c:
    // 0x187a9c: 0x90244af6  lbu         $a0, 0x4AF6($at)
    ctx->pc = 0x187a9cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19190)));
label_187aa0:
    // 0x187aa0: 0x14830002  bne         $a0, $v1, . + 4 + (0x2 << 2)
label_187aa4:
    if (ctx->pc == 0x187AA4u) {
        ctx->pc = 0x187AA8u;
        goto label_187aa8;
    }
    ctx->pc = 0x187AA0u;
    {
        const bool branch_taken_0x187aa0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x187aa0) {
            ctx->pc = 0x187AACu;
            goto label_187aac;
        }
    }
    ctx->pc = 0x187AA8u;
label_187aa8:
    // 0x187aa8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x187aa8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_187aac:
    // 0x187aac: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
label_187ab0:
    if (ctx->pc == 0x187AB0u) {
        ctx->pc = 0x187AB4u;
        goto label_187ab4;
    }
    ctx->pc = 0x187AACu;
    {
        const bool branch_taken_0x187aac = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x187aac) {
            ctx->pc = 0x187AD0u;
            goto label_187ad0;
        }
    }
    ctx->pc = 0x187AB4u;
label_187ab4:
    // 0x187ab4: 0x8262023d  lb          $v0, 0x23D($s3)
    ctx->pc = 0x187ab4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 573)));
label_187ab8:
    // 0x187ab8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x187ab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_187abc:
    // 0x187abc: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x187abcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
label_187ac0:
    // 0x187ac0: 0xc062948  jal         func_18A520
label_187ac4:
    if (ctx->pc == 0x187AC4u) {
        ctx->pc = 0x187AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187AC0u;
        // 0x187ac4: 0xa262023d  sb          $v0, 0x23D($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 573), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187AC8u;
        goto label_187ac8;
    }
    ctx->pc = 0x187AC0u;
    SET_GPR_U32(ctx, 31, 0x187AC8u);
    ctx->pc = 0x187AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187AC0u;
    // 0x187ac4: 0xa262023d  sb          $v0, 0x23D($s3) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 19), 573), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A520u;
    { ctx->pc = 0x18a520; return; }
    ctx->pc = 0x187AC8u;
label_187ac8:
    // 0x187ac8: 0x10000009  b           . + 4 + (0x9 << 2)
label_187acc:
    if (ctx->pc == 0x187ACCu) {
        ctx->pc = 0x187ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187AC8u;
        // 0x187acc: 0x86630224  lh          $v1, 0x224($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 548)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187AD0u;
        goto label_187ad0;
    }
    ctx->pc = 0x187AC8u;
    {
        const bool branch_taken_0x187ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187AC8u;
        // 0x187acc: 0x86630224  lh          $v1, 0x224($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 548)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187ac8) {
            ctx->pc = 0x187AF0u;
            goto label_187af0;
        }
    }
    ctx->pc = 0x187AD0u;
label_187ad0:
    // 0x187ad0: 0x8e640194  lw          $a0, 0x194($s3)
    ctx->pc = 0x187ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 404)));
label_187ad4:
    // 0x187ad4: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x187ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_187ad8:
    // 0x187ad8: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x187ad8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
label_187adc:
    // 0x187adc: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x187adcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_187ae0:
    // 0x187ae0: 0xae630194  sw          $v1, 0x194($s3)
    ctx->pc = 0x187ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 404), GPR_U32(ctx, 3));
label_187ae4:
    // 0x187ae4: 0xa660019e  sh          $zero, 0x19E($s3)
    ctx->pc = 0x187ae4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 414), (uint16_t)GPR_U32(ctx, 0));
label_187ae8:
    // 0x187ae8: 0xa660019c  sh          $zero, 0x19C($s3)
    ctx->pc = 0x187ae8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 412), (uint16_t)GPR_U32(ctx, 0));
label_187aec:
    // 0x187aec: 0x86630224  lh          $v1, 0x224($s3)
    ctx->pc = 0x187aecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 548)));
label_187af0:
    // 0x187af0: 0x1c6000d3  bgtz        $v1, . + 4 + (0xD3 << 2)
label_187af4:
    if (ctx->pc == 0x187AF4u) {
        ctx->pc = 0x187AF8u;
        goto label_187af8;
    }
    ctx->pc = 0x187AF0u;
    {
        const bool branch_taken_0x187af0 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x187af0) {
            ctx->pc = 0x187E40u;
            { ctx->pc = 0x187e40; return; }
        }
    }
    ctx->pc = 0x187AF8u;
label_187af8:
    // 0x187af8: 0x8262023d  lb          $v0, 0x23D($s3)
    ctx->pc = 0x187af8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 573)));
label_187afc:
    // 0x187afc: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x187afcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_187b00:
    // 0x187b00: 0xc08f0cc  jal         func_23C330
label_187b04:
    if (ctx->pc == 0x187B04u) {
        ctx->pc = 0x187B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187B00u;
        // 0x187b04: 0xa262023d  sb          $v0, 0x23D($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 573), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187B08u;
        goto label_187b08;
    }
    ctx->pc = 0x187B00u;
    SET_GPR_U32(ctx, 31, 0x187B08u);
    ctx->pc = 0x187B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187B00u;
    // 0x187b04: 0xa262023d  sb          $v0, 0x23D($s3) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 19), 573), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x187B08u;
label_187b08:
    // 0x187b08: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x187b08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_187b0c:
    // 0x187b0c: 0x3c034220  lui         $v1, 0x4220
    ctx->pc = 0x187b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16928 << 16));
label_187b10:
    // 0x187b10: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x187b10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_187b14:
    // 0x187b14: 0x92650230  lbu         $a1, 0x230($s3)
    ctx->pc = 0x187b14u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 560)));
label_187b18:
    // 0x187b18: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x187b18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_187b1c:
    // 0x187b1c: 0x3c064f00  lui         $a2, 0x4F00
    ctx->pc = 0x187b1cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)20224 << 16));
label_187b20:
    // 0x187b20: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x187b20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
label_187b24:
    // 0x187b24: 0x24632b15  addiu       $v1, $v1, 0x2B15
    ctx->pc = 0x187b24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11029));
label_187b28:
    // 0x187b28: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x187b28u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_187b2c:
    // 0x187b2c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x187b2cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_187b30:
    // 0x187b30: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x187b30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_187b34:
    // 0x187b34: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x187b34u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_187b38:
    // 0x187b38: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x187b38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_187b3c:
    // 0x187b3c: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x187b3cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_187b40:
    // 0x187b40: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x187b40u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_187b44:
    // 0x187b44: 0x0  nop
    ctx->pc = 0x187b44u;
    // NOP
label_187b48:
    // 0x187b48: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x187b48u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_187b4c:
    // 0x187b4c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x187b4cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_187b50:
    // 0x187b50: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x187b50u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_187b54:
    // 0x187b54: 0x0  nop
    ctx->pc = 0x187b54u;
    // NOP
label_187b58:
    // 0x187b58: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x187b58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_187b5c:
    // 0x187b5c: 0x100000b8  b           . + 4 + (0xB8 << 2)
label_187b60:
    if (ctx->pc == 0x187B60u) {
        ctx->pc = 0x187B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187B5Cu;
        // 0x187b60: 0xa6630224  sh          $v1, 0x224($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 548), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187B64u;
        goto label_187b64;
    }
    ctx->pc = 0x187B5Cu;
    {
        const bool branch_taken_0x187b5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187B5Cu;
        // 0x187b60: 0xa6630224  sh          $v1, 0x224($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 548), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187b5c) {
            ctx->pc = 0x187E40u;
            { ctx->pc = 0x187e40; return; }
        }
    }
    ctx->pc = 0x187B64u;
label_187b64:
    // 0x187b64: 0x92630232  lbu         $v1, 0x232($s3)
    ctx->pc = 0x187b64u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 562)));
label_187b68:
    // 0x187b68: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x187b68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_187b6c:
    // 0x187b6c: 0x14660016  bne         $v1, $a2, . + 4 + (0x16 << 2)
label_187b70:
    if (ctx->pc == 0x187B70u) {
        ctx->pc = 0x187B74u;
        goto label_187b74;
    }
    ctx->pc = 0x187B6Cu;
    {
        const bool branch_taken_0x187b6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x187b6c) {
            ctx->pc = 0x187BC8u;
            goto label_187bc8;
        }
    }
    ctx->pc = 0x187B74u;
label_187b74:
    // 0x187b74: 0x92640238  lbu         $a0, 0x238($s3)
    ctx->pc = 0x187b74u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 568)));
label_187b78:
    // 0x187b78: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x187b78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
label_187b7c:
    // 0x187b7c: 0x24631300  addiu       $v1, $v1, 0x1300
    ctx->pc = 0x187b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4864));
label_187b80:
    // 0x187b80: 0x2485ffb8  addiu       $a1, $a0, -0x48
    ctx->pc = 0x187b80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967224));
label_187b84:
    // 0x187b84: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x187b84u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_187b88:
    // 0x187b88: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x187b88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_187b8c:
    // 0x187b8c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x187b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_187b90:
    // 0x187b90: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x187b90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_187b94:
    // 0x187b94: 0x24643620  addiu       $a0, $v1, 0x3620
    ctx->pc = 0x187b94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 13856));
label_187b98:
    // 0x187b98: 0x9063367c  lbu         $v1, 0x367C($v1)
    ctx->pc = 0x187b98u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 13948)));
label_187b9c:
    // 0x187b9c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_187ba0:
    if (ctx->pc == 0x187BA0u) {
        ctx->pc = 0x187BA4u;
        goto label_187ba4;
    }
    ctx->pc = 0x187B9Cu;
    {
        const bool branch_taken_0x187b9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x187b9c) {
            ctx->pc = 0x187BC8u;
            goto label_187bc8;
        }
    }
    ctx->pc = 0x187BA4u;
label_187ba4:
    // 0x187ba4: 0x9084006b  lbu         $a0, 0x6B($a0)
    ctx->pc = 0x187ba4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 107)));
label_187ba8:
    // 0x187ba8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x187ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_187bac:
    // 0x187bac: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
label_187bb0:
    if (ctx->pc == 0x187BB0u) {
        ctx->pc = 0x187BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187BACu;
        // 0x187bb0: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187BB4u;
        goto label_187bb4;
    }
    ctx->pc = 0x187BACu;
    {
        const bool branch_taken_0x187bac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x187BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187BACu;
        // 0x187bb0: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187bac) {
            ctx->pc = 0x187BC8u;
            goto label_187bc8;
        }
    }
    ctx->pc = 0x187BB4u;
label_187bb4:
    // 0x187bb4: 0x24030029  addiu       $v1, $zero, 0x29
    ctx->pc = 0x187bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
label_187bb8:
    // 0x187bb8: 0x90244af6  lbu         $a0, 0x4AF6($at)
    ctx->pc = 0x187bb8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19190)));
label_187bbc:
    // 0x187bbc: 0x14830002  bne         $a0, $v1, . + 4 + (0x2 << 2)
label_187bc0:
    if (ctx->pc == 0x187BC0u) {
        ctx->pc = 0x187BC4u;
        goto label_187bc4;
    }
    ctx->pc = 0x187BBCu;
    {
        const bool branch_taken_0x187bbc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x187bbc) {
            ctx->pc = 0x187BC8u;
            goto label_187bc8;
        }
    }
    ctx->pc = 0x187BC4u;
label_187bc4:
    // 0x187bc4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x187bc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_187bc8:
    // 0x187bc8: 0x10c0004a  beqz        $a2, . + 4 + (0x4A << 2)
label_187bcc:
    if (ctx->pc == 0x187BCCu) {
        ctx->pc = 0x187BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187BC8u;
        // 0x187bcc: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187BD0u;
        goto label_187bd0;
    }
    ctx->pc = 0x187BC8u;
    {
        const bool branch_taken_0x187bc8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x187BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187BC8u;
        // 0x187bcc: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187bc8) {
            ctx->pc = 0x187CF4u;
            goto label_187cf4;
        }
    }
    ctx->pc = 0x187BD0u;
label_187bd0:
    // 0x187bd0: 0x926301a2  lbu         $v1, 0x1A2($s3)
    ctx->pc = 0x187bd0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 418)));
label_187bd4:
    // 0x187bd4: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
label_187bd8:
    if (ctx->pc == 0x187BD8u) {
        ctx->pc = 0x187BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187BD4u;
        // 0x187bd8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187BDCu;
        goto label_187bdc;
    }
    ctx->pc = 0x187BD4u;
    {
        const bool branch_taken_0x187bd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x187BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187BD4u;
        // 0x187bd8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187bd4) {
            ctx->pc = 0x187C2Cu;
            goto label_187c2c;
        }
    }
    ctx->pc = 0x187BDCu;
label_187bdc:
    // 0x187bdc: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x187bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_187be0:
    // 0x187be0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x187be0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_187be4:
    // 0x187be4: 0x30632020  andi        $v1, $v1, 0x2020
    ctx->pc = 0x187be4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8224);
label_187be8:
    // 0x187be8: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
label_187bec:
    if (ctx->pc == 0x187BECu) {
        ctx->pc = 0x187BF0u;
        goto label_187bf0;
    }
    ctx->pc = 0x187BE8u;
    {
        const bool branch_taken_0x187be8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x187be8) {
            ctx->pc = 0x187C2Cu;
            goto label_187c2c;
        }
    }
    ctx->pc = 0x187BF0u;
label_187bf0:
    // 0x187bf0: 0xc6410154  lwc1        $f1, 0x154($s2)
    ctx->pc = 0x187bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_187bf4:
    // 0x187bf4: 0x3c0342a0  lui         $v1, 0x42A0
    ctx->pc = 0x187bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17056 << 16));
label_187bf8:
    // 0x187bf8: 0xc6620154  lwc1        $f2, 0x154($s3)
    ctx->pc = 0x187bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_187bfc:
    // 0x187bfc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x187bfcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_187c00:
    // 0x187c00: 0x0  nop
    ctx->pc = 0x187c00u;
    // NOP
label_187c04:
    // 0x187c04: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x187c04u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_187c08:
    // 0x187c08: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x187c08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_187c0c:
    // 0x187c0c: 0x0  nop
    ctx->pc = 0x187c0cu;
    // NOP
label_187c10:
    // 0x187c10: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_187c14:
    if (ctx->pc == 0x187C14u) {
        ctx->pc = 0x187C18u;
        goto label_187c18;
    }
    ctx->pc = 0x187C10u;
    {
        const bool branch_taken_0x187c10 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x187c10) {
            ctx->pc = 0x187C2Cu;
            goto label_187c2c;
        }
    }
    ctx->pc = 0x187C18u;
label_187c18:
    // 0x187c18: 0x9663022c  lhu         $v1, 0x22C($s3)
    ctx->pc = 0x187c18u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 556)));
label_187c1c:
    // 0x187c1c: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x187c1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
label_187c20:
    // 0x187c20: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_187c24:
    if (ctx->pc == 0x187C24u) {
        ctx->pc = 0x187C28u;
        goto label_187c28;
    }
    ctx->pc = 0x187C20u;
    {
        const bool branch_taken_0x187c20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x187c20) {
            ctx->pc = 0x187C2Cu;
            goto label_187c2c;
        }
    }
    ctx->pc = 0x187C28u;
label_187c28:
    // 0x187c28: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x187c28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_187c2c:
    // 0x187c2c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_187c30:
    if (ctx->pc == 0x187C30u) {
        ctx->pc = 0x187C34u;
        goto label_187c34;
    }
    ctx->pc = 0x187C2Cu;
    {
        const bool branch_taken_0x187c2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x187c2c) {
            ctx->pc = 0x187C44u;
            goto label_187c44;
        }
    }
    ctx->pc = 0x187C34u;
label_187c34:
    // 0x187c34: 0x8263023d  lb          $v1, 0x23D($s3)
    ctx->pc = 0x187c34u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 573)));
label_187c38:
    // 0x187c38: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x187c38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
label_187c3c:
    // 0x187c3c: 0x10000080  b           . + 4 + (0x80 << 2)
label_187c40:
    if (ctx->pc == 0x187C40u) {
        ctx->pc = 0x187C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187C3Cu;
        // 0x187c40: 0xa263023d  sb          $v1, 0x23D($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 573), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187C44u;
        goto label_187c44;
    }
    ctx->pc = 0x187C3Cu;
    {
        const bool branch_taken_0x187c3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187C3Cu;
        // 0x187c40: 0xa263023d  sb          $v1, 0x23D($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 573), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187c3c) {
            ctx->pc = 0x187E40u;
            { ctx->pc = 0x187e40; return; }
        }
    }
    ctx->pc = 0x187C44u;
label_187c44:
    // 0x187c44: 0x92650230  lbu         $a1, 0x230($s3)
    ctx->pc = 0x187c44u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 560)));
label_187c48:
    // 0x187c48: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x187c48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
label_187c4c:
    // 0x187c4c: 0x24632b12  addiu       $v1, $v1, 0x2B12
    ctx->pc = 0x187c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11026));
label_187c50:
    // 0x187c50: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x187c50u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_187c54:
    // 0x187c54: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x187c54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_187c58:
    // 0x187c58: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x187c58u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_187c5c:
    // 0x187c5c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x187c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_187c60:
    // 0x187c60: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x187c60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_187c64:
    // 0x187c64: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x187c64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_187c68:
    // 0x187c68: 0x211082a  slt         $at, $s0, $s1
    ctx->pc = 0x187c68u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_187c6c:
    // 0x187c6c: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
label_187c70:
    if (ctx->pc == 0x187C70u) {
        ctx->pc = 0x187C74u;
        goto label_187c74;
    }
    ctx->pc = 0x187C6Cu;
    {
        const bool branch_taken_0x187c6c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x187c6c) {
            ctx->pc = 0x187CA4u;
            goto label_187ca4;
        }
    }
    ctx->pc = 0x187C74u;
label_187c74:
    // 0x187c74: 0x9663022c  lhu         $v1, 0x22C($s3)
    ctx->pc = 0x187c74u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 556)));
label_187c78:
    // 0x187c78: 0x30631000  andi        $v1, $v1, 0x1000
    ctx->pc = 0x187c78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
label_187c7c:
    // 0x187c7c: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_187c80:
    if (ctx->pc == 0x187C80u) {
        ctx->pc = 0x187C84u;
        goto label_187c84;
    }
    ctx->pc = 0x187C7Cu;
    {
        const bool branch_taken_0x187c7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x187c7c) {
            ctx->pc = 0x187CA4u;
            goto label_187ca4;
        }
    }
    ctx->pc = 0x187C84u;
label_187c84:
    // 0x187c84: 0x86640252  lh          $a0, 0x252($s3)
    ctx->pc = 0x187c84u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 594)));
label_187c88:
    // 0x187c88: 0x86630222  lh          $v1, 0x222($s3)
    ctx->pc = 0x187c88u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 546)));
label_187c8c:
    // 0x187c8c: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
label_187c90:
    if (ctx->pc == 0x187C90u) {
        ctx->pc = 0x187C94u;
        goto label_187c94;
    }
    ctx->pc = 0x187C8Cu;
    {
        const bool branch_taken_0x187c8c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x187c8c) {
            ctx->pc = 0x187CA4u;
            goto label_187ca4;
        }
    }
    ctx->pc = 0x187C94u;
label_187c94:
    // 0x187c94: 0x8263023d  lb          $v1, 0x23D($s3)
    ctx->pc = 0x187c94u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 573)));
label_187c98:
    // 0x187c98: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x187c98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
label_187c9c:
    // 0x187c9c: 0x10000068  b           . + 4 + (0x68 << 2)
label_187ca0:
    if (ctx->pc == 0x187CA0u) {
        ctx->pc = 0x187CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187C9Cu;
        // 0x187ca0: 0xa263023d  sb          $v1, 0x23D($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 573), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187CA4u;
        goto label_187ca4;
    }
    ctx->pc = 0x187C9Cu;
    {
        const bool branch_taken_0x187c9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187C9Cu;
        // 0x187ca0: 0xa263023d  sb          $v1, 0x23D($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 573), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187c9c) {
            ctx->pc = 0x187E40u;
            { ctx->pc = 0x187e40; return; }
        }
    }
    ctx->pc = 0x187CA4u;
label_187ca4:
    // 0x187ca4: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x187ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
label_187ca8:
    // 0x187ca8: 0x24632b11  addiu       $v1, $v1, 0x2B11
    ctx->pc = 0x187ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11025));
label_187cac:
    // 0x187cac: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x187cacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_187cb0:
    // 0x187cb0: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x187cb0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_187cb4:
    // 0x187cb4: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x187cb4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_187cb8:
    // 0x187cb8: 0x211082a  slt         $at, $s0, $s1
    ctx->pc = 0x187cb8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_187cbc:
    // 0x187cbc: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
label_187cc0:
    if (ctx->pc == 0x187CC0u) {
        ctx->pc = 0x187CC4u;
        goto label_187cc4;
    }
    ctx->pc = 0x187CBCu;
    {
        const bool branch_taken_0x187cbc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x187cbc) {
            ctx->pc = 0x187CE4u;
            goto label_187ce4;
        }
    }
    ctx->pc = 0x187CC4u;
label_187cc4:
    // 0x187cc4: 0x9663022c  lhu         $v1, 0x22C($s3)
    ctx->pc = 0x187cc4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 556)));
label_187cc8:
    // 0x187cc8: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x187cc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
label_187ccc:
    // 0x187ccc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_187cd0:
    if (ctx->pc == 0x187CD0u) {
        ctx->pc = 0x187CD4u;
        goto label_187cd4;
    }
    ctx->pc = 0x187CCCu;
    {
        const bool branch_taken_0x187ccc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x187ccc) {
            ctx->pc = 0x187CE4u;
            goto label_187ce4;
        }
    }
    ctx->pc = 0x187CD4u;
label_187cd4:
    // 0x187cd4: 0x8263023d  lb          $v1, 0x23D($s3)
    ctx->pc = 0x187cd4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 573)));
label_187cd8:
    // 0x187cd8: 0x34630020  ori         $v1, $v1, 0x20
    ctx->pc = 0x187cd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
label_187cdc:
    // 0x187cdc: 0x10000058  b           . + 4 + (0x58 << 2)
label_187ce0:
    if (ctx->pc == 0x187CE0u) {
        ctx->pc = 0x187CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187CDCu;
        // 0x187ce0: 0xa263023d  sb          $v1, 0x23D($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 573), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187CE4u;
        goto label_187ce4;
    }
    ctx->pc = 0x187CDCu;
    {
        const bool branch_taken_0x187cdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187CDCu;
        // 0x187ce0: 0xa263023d  sb          $v1, 0x23D($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 573), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187cdc) {
            ctx->pc = 0x187E40u;
            { ctx->pc = 0x187e40; return; }
        }
    }
    ctx->pc = 0x187CE4u;
label_187ce4:
    // 0x187ce4: 0x8263023d  lb          $v1, 0x23D($s3)
    ctx->pc = 0x187ce4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 573)));
label_187ce8:
    // 0x187ce8: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x187ce8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
label_187cec:
    // 0x187cec: 0x10000054  b           . + 4 + (0x54 << 2)
label_187cf0:
    if (ctx->pc == 0x187CF0u) {
        ctx->pc = 0x187CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187CECu;
        // 0x187cf0: 0xa263023d  sb          $v1, 0x23D($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 573), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187CF4u;
        goto label_187cf4;
    }
    ctx->pc = 0x187CECu;
    {
        const bool branch_taken_0x187cec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187CECu;
        // 0x187cf0: 0xa263023d  sb          $v1, 0x23D($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 573), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187cec) {
            ctx->pc = 0x187E40u;
            { ctx->pc = 0x187e40; return; }
        }
    }
    ctx->pc = 0x187CF4u;
label_187cf4:
    // 0x187cf4: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x187cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_187cf8:
    // 0x187cf8: 0xa6640224  sh          $a0, 0x224($s3)
    ctx->pc = 0x187cf8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 548), (uint16_t)GPR_U32(ctx, 4));
label_187cfc:
    // 0x187cfc: 0x34644000  ori         $a0, $v1, 0x4000
    ctx->pc = 0x187cfcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
label_187d00:
    // 0x187d00: 0x8e630194  lw          $v1, 0x194($s3)
    ctx->pc = 0x187d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 404)));
label_187d04:
    // 0x187d04: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x187d04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_187d08:
    // 0x187d08: 0xae630194  sw          $v1, 0x194($s3)
    ctx->pc = 0x187d08u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 404), GPR_U32(ctx, 3));
label_187d0c:
    // 0x187d0c: 0x8663003c  lh          $v1, 0x3C($s3)
    ctx->pc = 0x187d0cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 60)));
label_187d10:
    // 0x187d10: 0x28630096  slti        $v1, $v1, 0x96
    ctx->pc = 0x187d10u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)150) ? 1 : 0);
label_187d14:
    // 0x187d14: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_187d18:
    if (ctx->pc == 0x187D18u) {
        ctx->pc = 0x187D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187D14u;
        // 0x187d18: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187D1Cu;
        goto label_187d1c;
    }
    ctx->pc = 0x187D14u;
    {
        const bool branch_taken_0x187d14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x187D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187D14u;
        // 0x187d18: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187d14) {
            ctx->pc = 0x187D20u;
            goto label_187d20;
        }
    }
    ctx->pc = 0x187D1Cu;
label_187d1c:
    // 0x187d1c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x187d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_187d20:
    // 0x187d20: 0x14600047  bnez        $v1, . + 4 + (0x47 << 2)
label_187d24:
    if (ctx->pc == 0x187D24u) {
        ctx->pc = 0x187D28u;
        goto label_187d28;
    }
    ctx->pc = 0x187D20u;
    {
        const bool branch_taken_0x187d20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x187d20) {
            ctx->pc = 0x187E40u;
            { ctx->pc = 0x187e40; return; }
        }
    }
    ctx->pc = 0x187D28u;
label_187d28:
    // 0x187d28: 0x92630232  lbu         $v1, 0x232($s3)
    ctx->pc = 0x187d28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 562)));
label_187d2c:
    // 0x187d2c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x187d2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_187d30:
    // 0x187d30: 0x14660016  bne         $v1, $a2, . + 4 + (0x16 << 2)
label_187d34:
    if (ctx->pc == 0x187D34u) {
        ctx->pc = 0x187D38u;
        goto label_187d38;
    }
    ctx->pc = 0x187D30u;
    {
        const bool branch_taken_0x187d30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x187d30) {
            ctx->pc = 0x187D8Cu;
            goto label_187d8c;
        }
    }
    ctx->pc = 0x187D38u;
label_187d38:
    // 0x187d38: 0x92640238  lbu         $a0, 0x238($s3)
    ctx->pc = 0x187d38u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 568)));
label_187d3c:
    // 0x187d3c: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x187d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
label_187d40:
    // 0x187d40: 0x24631300  addiu       $v1, $v1, 0x1300
    ctx->pc = 0x187d40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4864));
label_187d44:
    // 0x187d44: 0x2485ffb8  addiu       $a1, $a0, -0x48
    ctx->pc = 0x187d44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967224));
label_187d48:
    // 0x187d48: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x187d48u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_187d4c:
    // 0x187d4c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x187d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_187d50:
    // 0x187d50: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x187d50u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_187d54:
    // 0x187d54: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x187d54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_187d58:
    // 0x187d58: 0x24643620  addiu       $a0, $v1, 0x3620
    ctx->pc = 0x187d58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 13856));
label_187d5c:
    // 0x187d5c: 0x9063367c  lbu         $v1, 0x367C($v1)
    ctx->pc = 0x187d5cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 13948)));
label_187d60:
    // 0x187d60: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_187d64:
    if (ctx->pc == 0x187D64u) {
        ctx->pc = 0x187D68u;
        goto label_187d68;
    }
    ctx->pc = 0x187D60u;
    {
        const bool branch_taken_0x187d60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x187d60) {
            ctx->pc = 0x187D8Cu;
            goto label_187d8c;
        }
    }
    ctx->pc = 0x187D68u;
label_187d68:
    // 0x187d68: 0x9084006b  lbu         $a0, 0x6B($a0)
    ctx->pc = 0x187d68u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 107)));
label_187d6c:
    // 0x187d6c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x187d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_187d70:
    // 0x187d70: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
label_187d74:
    if (ctx->pc == 0x187D74u) {
        ctx->pc = 0x187D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187D70u;
        // 0x187d74: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187D78u;
        goto label_187d78;
    }
    ctx->pc = 0x187D70u;
    {
        const bool branch_taken_0x187d70 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x187D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187D70u;
        // 0x187d74: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187d70) {
            ctx->pc = 0x187D8Cu;
            goto label_187d8c;
        }
    }
    ctx->pc = 0x187D78u;
label_187d78:
    // 0x187d78: 0x24030029  addiu       $v1, $zero, 0x29
    ctx->pc = 0x187d78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
label_187d7c:
    // 0x187d7c: 0x90244af6  lbu         $a0, 0x4AF6($at)
    ctx->pc = 0x187d7cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19190)));
label_187d80:
    // 0x187d80: 0x14830002  bne         $a0, $v1, . + 4 + (0x2 << 2)
label_187d84:
    if (ctx->pc == 0x187D84u) {
        ctx->pc = 0x187D88u;
        goto label_187d88;
    }
    ctx->pc = 0x187D80u;
    {
        const bool branch_taken_0x187d80 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x187d80) {
            ctx->pc = 0x187D8Cu;
            goto label_187d8c;
        }
    }
    ctx->pc = 0x187D88u;
label_187d88:
    // 0x187d88: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x187d88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_187d8c:
    // 0x187d8c: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
label_187d90:
    if (ctx->pc == 0x187D90u) {
        ctx->pc = 0x187D94u;
        goto label_187d94;
    }
    ctx->pc = 0x187D8Cu;
    {
        const bool branch_taken_0x187d8c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x187d8c) {
            ctx->pc = 0x187DB0u;
            { ctx->pc = 0x187db0; return; }
        }
    }
    ctx->pc = 0x187D94u;
label_187d94:
    // 0x187d94: 0x8262023d  lb          $v0, 0x23D($s3)
    ctx->pc = 0x187d94u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 573)));
label_187d98:
    // 0x187d98: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x187d98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_187d9c:
    // 0x187d9c: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x187d9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
label_187da0:
    // 0x187da0: 0xc062948  jal         func_18A520
label_187da4:
    if (ctx->pc == 0x187DA4u) {
        ctx->pc = 0x187DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187DA0u;
        // 0x187da4: 0xa262023d  sb          $v0, 0x23D($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 573), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187DA8u;
        goto label_187da8;
    }
    ctx->pc = 0x187DA0u;
    SET_GPR_U32(ctx, 31, 0x187DA8u);
    ctx->pc = 0x187DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187DA0u;
    // 0x187da4: 0xa262023d  sb          $v0, 0x23D($s3) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 19), 573), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A520u;
    { ctx->pc = 0x18a520; return; }
    ctx->pc = 0x187DA8u;
label_187da8:
    // 0x187da8: 0x10000009  b           . + 4 + (0x9 << 2)
label_187dac:
    if (ctx->pc == 0x187DACu) {
        ctx->pc = 0x187DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187DA8u;
        // 0x187dac: 0x86630224  lh          $v1, 0x224($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 548)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187DB0u;
        { ctx->pc = 0x187db0; return; }
    }
    ctx->pc = 0x187DA8u;
    {
        const bool branch_taken_0x187da8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187DA8u;
        // 0x187dac: 0x86630224  lh          $v1, 0x224($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 548)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187da8) {
            ctx->pc = 0x187DD0u;
            { ctx->pc = 0x187dd0; return; }
        }
    }
    ctx->pc = 0x187DB0u;
    ctx->pc = 0x187db0u;
    return;
}

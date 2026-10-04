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


void FUN_0014eba0_part76(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x173590u: goto label_173590;
        case 0x173594u: goto label_173594;
        case 0x173598u: goto label_173598;
        case 0x17359cu: goto label_17359c;
        case 0x1735a0u: goto label_1735a0;
        case 0x1735a4u: goto label_1735a4;
        case 0x1735a8u: goto label_1735a8;
        case 0x1735acu: goto label_1735ac;
        case 0x1735b0u: goto label_1735b0;
        case 0x1735b4u: goto label_1735b4;
        case 0x1735b8u: goto label_1735b8;
        case 0x1735bcu: goto label_1735bc;
        case 0x1735c0u: goto label_1735c0;
        case 0x1735c4u: goto label_1735c4;
        case 0x1735c8u: goto label_1735c8;
        case 0x1735ccu: goto label_1735cc;
        case 0x1735d0u: goto label_1735d0;
        case 0x1735d4u: goto label_1735d4;
        case 0x1735d8u: goto label_1735d8;
        case 0x1735dcu: goto label_1735dc;
        case 0x1735e0u: goto label_1735e0;
        case 0x1735e4u: goto label_1735e4;
        case 0x1735e8u: goto label_1735e8;
        case 0x1735ecu: goto label_1735ec;
        case 0x1735f0u: goto label_1735f0;
        case 0x1735f4u: goto label_1735f4;
        case 0x1735f8u: goto label_1735f8;
        case 0x1735fcu: goto label_1735fc;
        case 0x173600u: goto label_173600;
        case 0x173604u: goto label_173604;
        case 0x173608u: goto label_173608;
        case 0x17360cu: goto label_17360c;
        case 0x173610u: goto label_173610;
        case 0x173614u: goto label_173614;
        case 0x173618u: goto label_173618;
        case 0x17361cu: goto label_17361c;
        case 0x173620u: goto label_173620;
        case 0x173624u: goto label_173624;
        case 0x173628u: goto label_173628;
        case 0x17362cu: goto label_17362c;
        case 0x173630u: goto label_173630;
        case 0x173634u: goto label_173634;
        case 0x173638u: goto label_173638;
        case 0x17363cu: goto label_17363c;
        case 0x173640u: goto label_173640;
        case 0x173644u: goto label_173644;
        case 0x173648u: goto label_173648;
        case 0x17364cu: goto label_17364c;
        case 0x173650u: goto label_173650;
        case 0x173654u: goto label_173654;
        case 0x173658u: goto label_173658;
        case 0x17365cu: goto label_17365c;
        case 0x173660u: goto label_173660;
        case 0x173664u: goto label_173664;
        case 0x173668u: goto label_173668;
        case 0x17366cu: goto label_17366c;
        case 0x173670u: goto label_173670;
        case 0x173674u: goto label_173674;
        case 0x173678u: goto label_173678;
        case 0x17367cu: goto label_17367c;
        case 0x173680u: goto label_173680;
        case 0x173684u: goto label_173684;
        case 0x173688u: goto label_173688;
        case 0x17368cu: goto label_17368c;
        case 0x173690u: goto label_173690;
        case 0x173694u: goto label_173694;
        case 0x173698u: goto label_173698;
        case 0x17369cu: goto label_17369c;
        case 0x1736a0u: goto label_1736a0;
        case 0x1736a4u: goto label_1736a4;
        case 0x1736a8u: goto label_1736a8;
        case 0x1736acu: goto label_1736ac;
        case 0x1736b0u: goto label_1736b0;
        case 0x1736b4u: goto label_1736b4;
        case 0x1736b8u: goto label_1736b8;
        case 0x1736bcu: goto label_1736bc;
        case 0x1736c0u: goto label_1736c0;
        case 0x1736c4u: goto label_1736c4;
        case 0x1736c8u: goto label_1736c8;
        case 0x1736ccu: goto label_1736cc;
        case 0x1736d0u: goto label_1736d0;
        case 0x1736d4u: goto label_1736d4;
        case 0x1736d8u: goto label_1736d8;
        case 0x1736dcu: goto label_1736dc;
        case 0x1736e0u: goto label_1736e0;
        case 0x1736e4u: goto label_1736e4;
        case 0x1736e8u: goto label_1736e8;
        case 0x1736ecu: goto label_1736ec;
        case 0x1736f0u: goto label_1736f0;
        case 0x1736f4u: goto label_1736f4;
        case 0x1736f8u: goto label_1736f8;
        case 0x1736fcu: goto label_1736fc;
        case 0x173700u: goto label_173700;
        case 0x173704u: goto label_173704;
        case 0x173708u: goto label_173708;
        case 0x17370cu: goto label_17370c;
        case 0x173710u: goto label_173710;
        case 0x173714u: goto label_173714;
        case 0x173718u: goto label_173718;
        case 0x17371cu: goto label_17371c;
        case 0x173720u: goto label_173720;
        case 0x173724u: goto label_173724;
        case 0x173728u: goto label_173728;
        case 0x17372cu: goto label_17372c;
        case 0x173730u: goto label_173730;
        case 0x173734u: goto label_173734;
        case 0x173738u: goto label_173738;
        case 0x17373cu: goto label_17373c;
        case 0x173740u: goto label_173740;
        case 0x173744u: goto label_173744;
        case 0x173748u: goto label_173748;
        case 0x17374cu: goto label_17374c;
        case 0x173750u: goto label_173750;
        case 0x173754u: goto label_173754;
        case 0x173758u: goto label_173758;
        case 0x17375cu: goto label_17375c;
        case 0x173760u: goto label_173760;
        case 0x173764u: goto label_173764;
        case 0x173768u: goto label_173768;
        case 0x17376cu: goto label_17376c;
        case 0x173770u: goto label_173770;
        case 0x173774u: goto label_173774;
        case 0x173778u: goto label_173778;
        case 0x17377cu: goto label_17377c;
        case 0x173780u: goto label_173780;
        case 0x173784u: goto label_173784;
        case 0x173788u: goto label_173788;
        case 0x17378cu: goto label_17378c;
        case 0x173790u: goto label_173790;
        case 0x173794u: goto label_173794;
        case 0x173798u: goto label_173798;
        case 0x17379cu: goto label_17379c;
        case 0x1737a0u: goto label_1737a0;
        case 0x1737a4u: goto label_1737a4;
        case 0x1737a8u: goto label_1737a8;
        case 0x1737acu: goto label_1737ac;
        case 0x1737b0u: goto label_1737b0;
        case 0x1737b4u: goto label_1737b4;
        case 0x1737b8u: goto label_1737b8;
        case 0x1737bcu: goto label_1737bc;
        case 0x1737c0u: goto label_1737c0;
        case 0x1737c4u: goto label_1737c4;
        case 0x1737c8u: goto label_1737c8;
        case 0x1737ccu: goto label_1737cc;
        case 0x1737d0u: goto label_1737d0;
        case 0x1737d4u: goto label_1737d4;
        case 0x1737d8u: goto label_1737d8;
        case 0x1737dcu: goto label_1737dc;
        case 0x1737e0u: goto label_1737e0;
        case 0x1737e4u: goto label_1737e4;
        case 0x1737e8u: goto label_1737e8;
        case 0x1737ecu: goto label_1737ec;
        case 0x1737f0u: goto label_1737f0;
        case 0x1737f4u: goto label_1737f4;
        case 0x1737f8u: goto label_1737f8;
        case 0x1737fcu: goto label_1737fc;
        case 0x173800u: goto label_173800;
        case 0x173804u: goto label_173804;
        case 0x173808u: goto label_173808;
        case 0x17380cu: goto label_17380c;
        case 0x173810u: goto label_173810;
        case 0x173814u: goto label_173814;
        case 0x173818u: goto label_173818;
        case 0x17381cu: goto label_17381c;
        case 0x173820u: goto label_173820;
        case 0x173824u: goto label_173824;
        case 0x173828u: goto label_173828;
        case 0x17382cu: goto label_17382c;
        case 0x173830u: goto label_173830;
        case 0x173834u: goto label_173834;
        case 0x173838u: goto label_173838;
        case 0x17383cu: goto label_17383c;
        case 0x173840u: goto label_173840;
        case 0x173844u: goto label_173844;
        case 0x173848u: goto label_173848;
        case 0x17384cu: goto label_17384c;
        case 0x173850u: goto label_173850;
        case 0x173854u: goto label_173854;
        case 0x173858u: goto label_173858;
        case 0x17385cu: goto label_17385c;
        case 0x173860u: goto label_173860;
        case 0x173864u: goto label_173864;
        case 0x173868u: goto label_173868;
        case 0x17386cu: goto label_17386c;
        case 0x173870u: goto label_173870;
        case 0x173874u: goto label_173874;
        case 0x173878u: goto label_173878;
        case 0x17387cu: goto label_17387c;
        case 0x173880u: goto label_173880;
        case 0x173884u: goto label_173884;
        case 0x173888u: goto label_173888;
        case 0x17388cu: goto label_17388c;
        case 0x173890u: goto label_173890;
        case 0x173894u: goto label_173894;
        case 0x173898u: goto label_173898;
        case 0x17389cu: goto label_17389c;
        case 0x1738a0u: goto label_1738a0;
        case 0x1738a4u: goto label_1738a4;
        case 0x1738a8u: goto label_1738a8;
        case 0x1738acu: goto label_1738ac;
        case 0x1738b0u: goto label_1738b0;
        case 0x1738b4u: goto label_1738b4;
        case 0x1738b8u: goto label_1738b8;
        case 0x1738bcu: goto label_1738bc;
        case 0x1738c0u: goto label_1738c0;
        case 0x1738c4u: goto label_1738c4;
        case 0x1738c8u: goto label_1738c8;
        case 0x1738ccu: goto label_1738cc;
        case 0x1738d0u: goto label_1738d0;
        case 0x1738d4u: goto label_1738d4;
        case 0x1738d8u: goto label_1738d8;
        case 0x1738dcu: goto label_1738dc;
        case 0x1738e0u: goto label_1738e0;
        case 0x1738e4u: goto label_1738e4;
        case 0x1738e8u: goto label_1738e8;
        case 0x1738ecu: goto label_1738ec;
        case 0x1738f0u: goto label_1738f0;
        case 0x1738f4u: goto label_1738f4;
        case 0x1738f8u: goto label_1738f8;
        case 0x1738fcu: goto label_1738fc;
        case 0x173900u: goto label_173900;
        case 0x173904u: goto label_173904;
        case 0x173908u: goto label_173908;
        case 0x17390cu: goto label_17390c;
        case 0x173910u: goto label_173910;
        case 0x173914u: goto label_173914;
        case 0x173918u: goto label_173918;
        case 0x17391cu: goto label_17391c;
        case 0x173920u: goto label_173920;
        case 0x173924u: goto label_173924;
        case 0x173928u: goto label_173928;
        case 0x17392cu: goto label_17392c;
        case 0x173930u: goto label_173930;
        case 0x173934u: goto label_173934;
        case 0x173938u: goto label_173938;
        case 0x17393cu: goto label_17393c;
        case 0x173940u: goto label_173940;
        case 0x173944u: goto label_173944;
        case 0x173948u: goto label_173948;
        case 0x17394cu: goto label_17394c;
        case 0x173950u: goto label_173950;
        case 0x173954u: goto label_173954;
        case 0x173958u: goto label_173958;
        case 0x17395cu: goto label_17395c;
        case 0x173960u: goto label_173960;
        case 0x173964u: goto label_173964;
        case 0x173968u: goto label_173968;
        case 0x17396cu: goto label_17396c;
        case 0x173970u: goto label_173970;
        case 0x173974u: goto label_173974;
        case 0x173978u: goto label_173978;
        case 0x17397cu: goto label_17397c;
        case 0x173980u: goto label_173980;
        case 0x173984u: goto label_173984;
        case 0x173988u: goto label_173988;
        case 0x17398cu: goto label_17398c;
        case 0x173990u: goto label_173990;
        case 0x173994u: goto label_173994;
        case 0x173998u: goto label_173998;
        case 0x17399cu: goto label_17399c;
        case 0x1739a0u: goto label_1739a0;
        case 0x1739a4u: goto label_1739a4;
        case 0x1739a8u: goto label_1739a8;
        case 0x1739acu: goto label_1739ac;
        case 0x1739b0u: goto label_1739b0;
        case 0x1739b4u: goto label_1739b4;
        case 0x1739b8u: goto label_1739b8;
        case 0x1739bcu: goto label_1739bc;
        case 0x1739c0u: goto label_1739c0;
        case 0x1739c4u: goto label_1739c4;
        case 0x1739c8u: goto label_1739c8;
        case 0x1739ccu: goto label_1739cc;
        case 0x1739d0u: goto label_1739d0;
        case 0x1739d4u: goto label_1739d4;
        case 0x1739d8u: goto label_1739d8;
        case 0x1739dcu: goto label_1739dc;
        case 0x1739e0u: goto label_1739e0;
        case 0x1739e4u: goto label_1739e4;
        case 0x1739e8u: goto label_1739e8;
        case 0x1739ecu: goto label_1739ec;
        case 0x1739f0u: goto label_1739f0;
        case 0x1739f4u: goto label_1739f4;
        case 0x1739f8u: goto label_1739f8;
        case 0x1739fcu: goto label_1739fc;
        case 0x173a00u: goto label_173a00;
        case 0x173a04u: goto label_173a04;
        case 0x173a08u: goto label_173a08;
        case 0x173a0cu: goto label_173a0c;
        case 0x173a10u: goto label_173a10;
        case 0x173a14u: goto label_173a14;
        case 0x173a18u: goto label_173a18;
        case 0x173a1cu: goto label_173a1c;
        case 0x173a20u: goto label_173a20;
        case 0x173a24u: goto label_173a24;
        case 0x173a28u: goto label_173a28;
        case 0x173a2cu: goto label_173a2c;
        case 0x173a30u: goto label_173a30;
        case 0x173a34u: goto label_173a34;
        case 0x173a38u: goto label_173a38;
        case 0x173a3cu: goto label_173a3c;
        case 0x173a40u: goto label_173a40;
        case 0x173a44u: goto label_173a44;
        case 0x173a48u: goto label_173a48;
        case 0x173a4cu: goto label_173a4c;
        case 0x173a50u: goto label_173a50;
        case 0x173a54u: goto label_173a54;
        case 0x173a58u: goto label_173a58;
        case 0x173a5cu: goto label_173a5c;
        case 0x173a60u: goto label_173a60;
        case 0x173a64u: goto label_173a64;
        case 0x173a68u: goto label_173a68;
        case 0x173a6cu: goto label_173a6c;
        case 0x173a70u: goto label_173a70;
        case 0x173a74u: goto label_173a74;
        case 0x173a78u: goto label_173a78;
        case 0x173a7cu: goto label_173a7c;
        case 0x173a80u: goto label_173a80;
        case 0x173a84u: goto label_173a84;
        case 0x173a88u: goto label_173a88;
        case 0x173a8cu: goto label_173a8c;
        case 0x173a90u: goto label_173a90;
        case 0x173a94u: goto label_173a94;
        case 0x173a98u: goto label_173a98;
        case 0x173a9cu: goto label_173a9c;
        case 0x173aa0u: goto label_173aa0;
        case 0x173aa4u: goto label_173aa4;
        case 0x173aa8u: goto label_173aa8;
        case 0x173aacu: goto label_173aac;
        case 0x173ab0u: goto label_173ab0;
        case 0x173ab4u: goto label_173ab4;
        case 0x173ab8u: goto label_173ab8;
        case 0x173abcu: goto label_173abc;
        case 0x173ac0u: goto label_173ac0;
        case 0x173ac4u: goto label_173ac4;
        case 0x173ac8u: goto label_173ac8;
        case 0x173accu: goto label_173acc;
        case 0x173ad0u: goto label_173ad0;
        case 0x173ad4u: goto label_173ad4;
        case 0x173ad8u: goto label_173ad8;
        case 0x173adcu: goto label_173adc;
        case 0x173ae0u: goto label_173ae0;
        case 0x173ae4u: goto label_173ae4;
        case 0x173ae8u: goto label_173ae8;
        case 0x173aecu: goto label_173aec;
        case 0x173af0u: goto label_173af0;
        case 0x173af4u: goto label_173af4;
        case 0x173af8u: goto label_173af8;
        case 0x173afcu: goto label_173afc;
        case 0x173b00u: goto label_173b00;
        case 0x173b04u: goto label_173b04;
        case 0x173b08u: goto label_173b08;
        case 0x173b0cu: goto label_173b0c;
        case 0x173b10u: goto label_173b10;
        case 0x173b14u: goto label_173b14;
        case 0x173b18u: goto label_173b18;
        case 0x173b1cu: goto label_173b1c;
        case 0x173b20u: goto label_173b20;
        case 0x173b24u: goto label_173b24;
        case 0x173b28u: goto label_173b28;
        case 0x173b2cu: goto label_173b2c;
        case 0x173b30u: goto label_173b30;
        case 0x173b34u: goto label_173b34;
        case 0x173b38u: goto label_173b38;
        case 0x173b3cu: goto label_173b3c;
        case 0x173b40u: goto label_173b40;
        case 0x173b44u: goto label_173b44;
        case 0x173b48u: goto label_173b48;
        case 0x173b4cu: goto label_173b4c;
        case 0x173b50u: goto label_173b50;
        case 0x173b54u: goto label_173b54;
        case 0x173b58u: goto label_173b58;
        case 0x173b5cu: goto label_173b5c;
        case 0x173b60u: goto label_173b60;
        case 0x173b64u: goto label_173b64;
        case 0x173b68u: goto label_173b68;
        case 0x173b6cu: goto label_173b6c;
        case 0x173b70u: goto label_173b70;
        case 0x173b74u: goto label_173b74;
        case 0x173b78u: goto label_173b78;
        case 0x173b7cu: goto label_173b7c;
        case 0x173b80u: goto label_173b80;
        case 0x173b84u: goto label_173b84;
        case 0x173b88u: goto label_173b88;
        case 0x173b8cu: goto label_173b8c;
        case 0x173b90u: goto label_173b90;
        case 0x173b94u: goto label_173b94;
        case 0x173b98u: goto label_173b98;
        case 0x173b9cu: goto label_173b9c;
        case 0x173ba0u: goto label_173ba0;
        case 0x173ba4u: goto label_173ba4;
        case 0x173ba8u: goto label_173ba8;
        case 0x173bacu: goto label_173bac;
        case 0x173bb0u: goto label_173bb0;
        case 0x173bb4u: goto label_173bb4;
        case 0x173bb8u: goto label_173bb8;
        case 0x173bbcu: goto label_173bbc;
        case 0x173bc0u: goto label_173bc0;
        case 0x173bc4u: goto label_173bc4;
        case 0x173bc8u: goto label_173bc8;
        case 0x173bccu: goto label_173bcc;
        case 0x173bd0u: goto label_173bd0;
        case 0x173bd4u: goto label_173bd4;
        case 0x173bd8u: goto label_173bd8;
        case 0x173bdcu: goto label_173bdc;
        case 0x173be0u: goto label_173be0;
        case 0x173be4u: goto label_173be4;
        case 0x173be8u: goto label_173be8;
        case 0x173becu: goto label_173bec;
        case 0x173bf0u: goto label_173bf0;
        case 0x173bf4u: goto label_173bf4;
        case 0x173bf8u: goto label_173bf8;
        case 0x173bfcu: goto label_173bfc;
        case 0x173c00u: goto label_173c00;
        case 0x173c04u: goto label_173c04;
        case 0x173c08u: goto label_173c08;
        case 0x173c0cu: goto label_173c0c;
        case 0x173c10u: goto label_173c10;
        case 0x173c14u: goto label_173c14;
        case 0x173c18u: goto label_173c18;
        case 0x173c1cu: goto label_173c1c;
        case 0x173c20u: goto label_173c20;
        case 0x173c24u: goto label_173c24;
        case 0x173c28u: goto label_173c28;
        case 0x173c2cu: goto label_173c2c;
        case 0x173c30u: goto label_173c30;
        case 0x173c34u: goto label_173c34;
        case 0x173c38u: goto label_173c38;
        case 0x173c3cu: goto label_173c3c;
        case 0x173c40u: goto label_173c40;
        case 0x173c44u: goto label_173c44;
        case 0x173c48u: goto label_173c48;
        case 0x173c4cu: goto label_173c4c;
        case 0x173c50u: goto label_173c50;
        case 0x173c54u: goto label_173c54;
        case 0x173c58u: goto label_173c58;
        case 0x173c5cu: goto label_173c5c;
        case 0x173c60u: goto label_173c60;
        case 0x173c64u: goto label_173c64;
        case 0x173c68u: goto label_173c68;
        case 0x173c6cu: goto label_173c6c;
        case 0x173c70u: goto label_173c70;
        case 0x173c74u: goto label_173c74;
        case 0x173c78u: goto label_173c78;
        case 0x173c7cu: goto label_173c7c;
        case 0x173c80u: goto label_173c80;
        case 0x173c84u: goto label_173c84;
        case 0x173c88u: goto label_173c88;
        case 0x173c8cu: goto label_173c8c;
        case 0x173c90u: goto label_173c90;
        case 0x173c94u: goto label_173c94;
        case 0x173c98u: goto label_173c98;
        case 0x173c9cu: goto label_173c9c;
        case 0x173ca0u: goto label_173ca0;
        case 0x173ca4u: goto label_173ca4;
        case 0x173ca8u: goto label_173ca8;
        case 0x173cacu: goto label_173cac;
        case 0x173cb0u: goto label_173cb0;
        case 0x173cb4u: goto label_173cb4;
        case 0x173cb8u: goto label_173cb8;
        case 0x173cbcu: goto label_173cbc;
        case 0x173cc0u: goto label_173cc0;
        case 0x173cc4u: goto label_173cc4;
        case 0x173cc8u: goto label_173cc8;
        case 0x173cccu: goto label_173ccc;
        case 0x173cd0u: goto label_173cd0;
        case 0x173cd4u: goto label_173cd4;
        case 0x173cd8u: goto label_173cd8;
        case 0x173cdcu: goto label_173cdc;
        case 0x173ce0u: goto label_173ce0;
        case 0x173ce4u: goto label_173ce4;
        case 0x173ce8u: goto label_173ce8;
        case 0x173cecu: goto label_173cec;
        case 0x173cf0u: goto label_173cf0;
        case 0x173cf4u: goto label_173cf4;
        case 0x173cf8u: goto label_173cf8;
        case 0x173cfcu: goto label_173cfc;
        case 0x173d00u: goto label_173d00;
        case 0x173d04u: goto label_173d04;
        case 0x173d08u: goto label_173d08;
        case 0x173d0cu: goto label_173d0c;
        case 0x173d10u: goto label_173d10;
        case 0x173d14u: goto label_173d14;
        case 0x173d18u: goto label_173d18;
        case 0x173d1cu: goto label_173d1c;
        case 0x173d20u: goto label_173d20;
        case 0x173d24u: goto label_173d24;
        case 0x173d28u: goto label_173d28;
        case 0x173d2cu: goto label_173d2c;
        case 0x173d30u: goto label_173d30;
        case 0x173d34u: goto label_173d34;
        case 0x173d38u: goto label_173d38;
        case 0x173d3cu: goto label_173d3c;
        case 0x173d40u: goto label_173d40;
        case 0x173d44u: goto label_173d44;
        case 0x173d48u: goto label_173d48;
        case 0x173d4cu: goto label_173d4c;
        case 0x173d50u: goto label_173d50;
        case 0x173d54u: goto label_173d54;
        case 0x173d58u: goto label_173d58;
        case 0x173d5cu: goto label_173d5c;
        default: return;
    }

label_173590:
    // 0x173590: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x173590u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_173594:
    // 0x173594: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x173594u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_173598:
    // 0x173598: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x173598u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_17359c:
    // 0x17359c: 0x3e00008  jr          $ra
label_1735a0:
    if (ctx->pc == 0x1735A0u) {
        ctx->pc = 0x1735A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17359Cu;
        // 0x1735a0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1735A4u;
        goto label_1735a4;
    }
    ctx->pc = 0x17359Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1735A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17359Cu;
        // 0x1735a0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17359Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1735A4u;
label_1735a4:
    // 0x1735a4: 0x0  nop
    ctx->pc = 0x1735a4u;
    // NOP
label_1735a8:
    // 0x1735a8: 0x0  nop
    ctx->pc = 0x1735a8u;
    // NOP
label_1735ac:
    // 0x1735ac: 0x0  nop
    ctx->pc = 0x1735acu;
    // NOP
label_1735b0:
    // 0x1735b0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1735b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_1735b4:
    // 0x1735b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1735b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1735b8:
    // 0x1735b8: 0xe48c0d80  swc1        $f12, 0xD80($a0)
    ctx->pc = 0x1735b8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 3456), bits); }
label_1735bc:
    // 0x1735bc: 0x460c0003  div.s       $f0, $f0, $f12
    ctx->pc = 0x1735bcu;
    if (ctx->f[12] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[12];
label_1735c0:
    // 0x1735c0: 0x0  nop
    ctx->pc = 0x1735c0u;
    // NOP
label_1735c4:
    // 0x1735c4: 0x0  nop
    ctx->pc = 0x1735c4u;
    // NOP
label_1735c8:
    // 0x1735c8: 0x3e00008  jr          $ra
label_1735cc:
    if (ctx->pc == 0x1735CCu) {
        ctx->pc = 0x1735CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1735C8u;
        // 0x1735cc: 0xe4800d84  swc1        $f0, 0xD84($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 3460), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1735D0u;
        goto label_1735d0;
    }
    ctx->pc = 0x1735C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1735CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1735C8u;
        // 0x1735cc: 0xe4800d84  swc1        $f0, 0xD84($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 3460), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1735C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1735D0u;
label_1735d0:
    // 0x1735d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1735d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1735d4:
    // 0x1735d4: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x1735d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
label_1735d8:
    // 0x1735d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1735d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1735dc:
    // 0x1735dc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1735dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1735e0:
    // 0x1735e0: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1735e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1735e4:
    // 0x1735e4: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x1735e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
label_1735e8:
    // 0x1735e8: 0x244250b0  addiu       $v0, $v0, 0x50B0
    ctx->pc = 0x1735e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20656));
label_1735ec:
    // 0x1735ec: 0x24a54e00  addiu       $a1, $a1, 0x4E00
    ctx->pc = 0x1735ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19968));
label_1735f0:
    // 0x1735f0: 0x452023  subu        $a0, $v0, $a1
    ctx->pc = 0x1735f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1735f4:
    // 0x1735f4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1735f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1735f8:
    // 0x1735f8: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1735f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_1735fc:
    // 0x1735fc: 0x2484000f  addiu       $a0, $a0, 0xF
    ctx->pc = 0x1735fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
label_173600:
    // 0x173600: 0x24421e00  addiu       $v0, $v0, 0x1E00
    ctx->pc = 0x173600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7680));
label_173604:
    // 0x173604: 0x43102  srl         $a2, $a0, 4
    ctx->pc = 0x173604u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 4), 4));
label_173608:
    // 0x173608: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x173608u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17360c:
    // 0x17360c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x17360cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_173610:
    // 0x173610: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x173610u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_173614:
    // 0x173614: 0xc066c72  jal         func_19B1C8
label_173618:
    if (ctx->pc == 0x173618u) {
        ctx->pc = 0x173618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173614u;
        // 0x173618: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17361Cu;
        goto label_17361c;
    }
    ctx->pc = 0x173614u;
    SET_GPR_U32(ctx, 31, 0x17361Cu);
    ctx->pc = 0x173618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173614u;
    // 0x173618: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x17361Cu;
label_17361c:
    // 0x17361c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17361cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_173620:
    // 0x173620: 0x3e00008  jr          $ra
label_173624:
    if (ctx->pc == 0x173624u) {
        ctx->pc = 0x173624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173620u;
        // 0x173624: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173628u;
        goto label_173628;
    }
    ctx->pc = 0x173620u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173620u;
        // 0x173624: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x173620u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x173628u;
label_173628:
    // 0x173628: 0x0  nop
    ctx->pc = 0x173628u;
    // NOP
label_17362c:
    // 0x17362c: 0x0  nop
    ctx->pc = 0x17362cu;
    // NOP
label_173630:
    // 0x173630: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x173630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_173634:
    // 0x173634: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x173634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
label_173638:
    // 0x173638: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x173638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_17363c:
    // 0x17363c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x17363cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_173640:
    // 0x173640: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x173640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_173644:
    // 0x173644: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x173644u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
label_173648:
    // 0x173648: 0x244233f0  addiu       $v0, $v0, 0x33F0
    ctx->pc = 0x173648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13296));
label_17364c:
    // 0x17364c: 0x24a53100  addiu       $a1, $a1, 0x3100
    ctx->pc = 0x17364cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12544));
label_173650:
    // 0x173650: 0x452023  subu        $a0, $v0, $a1
    ctx->pc = 0x173650u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_173654:
    // 0x173654: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x173654u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_173658:
    // 0x173658: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x173658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_17365c:
    // 0x17365c: 0x2484000f  addiu       $a0, $a0, 0xF
    ctx->pc = 0x17365cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
label_173660:
    // 0x173660: 0x24421e00  addiu       $v0, $v0, 0x1E00
    ctx->pc = 0x173660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7680));
label_173664:
    // 0x173664: 0x43102  srl         $a2, $a0, 4
    ctx->pc = 0x173664u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 4), 4));
label_173668:
    // 0x173668: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x173668u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17366c:
    // 0x17366c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x17366cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_173670:
    // 0x173670: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x173670u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_173674:
    // 0x173674: 0xc066c72  jal         func_19B1C8
label_173678:
    if (ctx->pc == 0x173678u) {
        ctx->pc = 0x173678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173674u;
        // 0x173678: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17367Cu;
        goto label_17367c;
    }
    ctx->pc = 0x173674u;
    SET_GPR_U32(ctx, 31, 0x17367Cu);
    ctx->pc = 0x173678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173674u;
    // 0x173678: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x17367Cu;
label_17367c:
    // 0x17367c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17367cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_173680:
    // 0x173680: 0x3e00008  jr          $ra
label_173684:
    if (ctx->pc == 0x173684u) {
        ctx->pc = 0x173684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173680u;
        // 0x173684: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173688u;
        goto label_173688;
    }
    ctx->pc = 0x173680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173680u;
        // 0x173684: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x173680u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x173688u;
label_173688:
    // 0x173688: 0x0  nop
    ctx->pc = 0x173688u;
    // NOP
label_17368c:
    // 0x17368c: 0x0  nop
    ctx->pc = 0x17368cu;
    // NOP
label_173690:
    // 0x173690: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x173690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_173694:
    // 0x173694: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x173694u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
label_173698:
    // 0x173698: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x173698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_17369c:
    // 0x17369c: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x17369cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1736a0:
    // 0x1736a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1736a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1736a4:
    // 0x1736a4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1736a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1736a8:
    // 0x1736a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1736a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1736ac:
    // 0x1736ac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1736acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1736b0:
    // 0x1736b0: 0x8c263ffc  lw          $a2, 0x3FFC($at)
    ctx->pc = 0x1736b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1736b4:
    // 0x1736b4: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x1736b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
label_1736b8:
    // 0x1736b8: 0x8f838640  lw          $v1, -0x79C0($gp)
    ctx->pc = 0x1736b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936128)));
label_1736bc:
    // 0x1736bc: 0x24a51e00  addiu       $a1, $a1, 0x1E00
    ctx->pc = 0x1736bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7680));
label_1736c0:
    // 0x1736c0: 0x24429bc0  addiu       $v0, $v0, -0x6440
    ctx->pc = 0x1736c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941632));
label_1736c4:
    // 0x1736c4: 0x248445e0  addiu       $a0, $a0, 0x45E0
    ctx->pc = 0x1736c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17888));
label_1736c8:
    // 0x1736c8: 0x63140  sll         $a2, $a2, 5
    ctx->pc = 0x1736c8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
label_1736cc:
    // 0x1736cc: 0xa68021  addu        $s0, $a1, $a2
    ctx->pc = 0x1736ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1736d0:
    // 0x1736d0: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x1736d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_1736d4:
    // 0x1736d4: 0xc066e2a  jal         func_19B8A8
label_1736d8:
    if (ctx->pc == 0x1736D8u) {
        ctx->pc = 0x1736D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1736D4u;
        // 0x1736d8: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1736DCu;
        goto label_1736dc;
    }
    ctx->pc = 0x1736D4u;
    SET_GPR_U32(ctx, 31, 0x1736DCu);
    ctx->pc = 0x1736D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1736D4u;
    // 0x1736d8: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B8A8u;
    { ctx->pc = 0x19b8a8; return; }
    ctx->pc = 0x1736DCu;
label_1736dc:
    // 0x1736dc: 0x8f838640  lw          $v1, -0x79C0($gp)
    ctx->pc = 0x1736dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936128)));
label_1736e0:
    // 0x1736e0: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1736e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1736e4:
    // 0x1736e4: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x1736e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
label_1736e8:
    // 0x1736e8: 0x24429b40  addiu       $v0, $v0, -0x64C0
    ctx->pc = 0x1736e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941504));
label_1736ec:
    // 0x1736ec: 0x24844620  addiu       $a0, $a0, 0x4620
    ctx->pc = 0x1736ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17952));
label_1736f0:
    // 0x1736f0: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x1736f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_1736f4:
    // 0x1736f4: 0xc066e2a  jal         func_19B8A8
label_1736f8:
    if (ctx->pc == 0x1736F8u) {
        ctx->pc = 0x1736F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1736F4u;
        // 0x1736f8: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1736FCu;
        goto label_1736fc;
    }
    ctx->pc = 0x1736F4u;
    SET_GPR_U32(ctx, 31, 0x1736FCu);
    ctx->pc = 0x1736F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1736F4u;
    // 0x1736f8: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B8A8u;
    { ctx->pc = 0x19b8a8; return; }
    ctx->pc = 0x1736FCu;
label_1736fc:
    // 0x1736fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1736fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_173700:
    // 0x173700: 0xc066c5c  jal         func_19B170
label_173704:
    if (ctx->pc == 0x173704u) {
        ctx->pc = 0x173704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173700u;
        // 0x173704: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173708u;
        goto label_173708;
    }
    ctx->pc = 0x173700u;
    SET_GPR_U32(ctx, 31, 0x173708u);
    ctx->pc = 0x173704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173700u;
    // 0x173704: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B170u;
    { ctx->pc = 0x19b170; return; }
    ctx->pc = 0x173708u;
label_173708:
    // 0x173708: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x173708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17370c:
    // 0x17370c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x17370cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_173710:
    // 0x173710: 0xc066d10  jal         func_19B440
label_173714:
    if (ctx->pc == 0x173714u) {
        ctx->pc = 0x173714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173710u;
        // 0x173714: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173718u;
        goto label_173718;
    }
    ctx->pc = 0x173710u;
    SET_GPR_U32(ctx, 31, 0x173718u);
    ctx->pc = 0x173714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173710u;
    // 0x173714: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B440u;
    { ctx->pc = 0x19b440; return; }
    ctx->pc = 0x173718u;
label_173718:
    // 0x173718: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x173718u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_17371c:
    // 0x17371c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17371cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_173720:
    // 0x173720: 0x24a545d0  addiu       $a1, $a1, 0x45D0
    ctx->pc = 0x173720u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17872));
label_173724:
    // 0x173724: 0xc066d36  jal         func_19B4D8
label_173728:
    if (ctx->pc == 0x173728u) {
        ctx->pc = 0x173728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173724u;
        // 0x173728: 0x24060028  addiu       $a2, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17372Cu;
        goto label_17372c;
    }
    ctx->pc = 0x173724u;
    SET_GPR_U32(ctx, 31, 0x17372Cu);
    ctx->pc = 0x173728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173724u;
    // 0x173728: 0x24060028  addiu       $a2, $zero, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B4D8u;
    { ctx->pc = 0x19b4d8; return; }
    ctx->pc = 0x17372Cu;
label_17372c:
    // 0x17372c: 0xc066c46  jal         func_19B118
label_173730:
    if (ctx->pc == 0x173730u) {
        ctx->pc = 0x173730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17372Cu;
        // 0x173730: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173734u;
        goto label_173734;
    }
    ctx->pc = 0x17372Cu;
    SET_GPR_U32(ctx, 31, 0x173734u);
    ctx->pc = 0x173730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17372Cu;
    // 0x173730: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B118u;
    { ctx->pc = 0x19b118; return; }
    ctx->pc = 0x173734u;
label_173734:
    // 0x173734: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x173734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_173738:
    // 0x173738: 0xc06469c  jal         func_191A70
label_17373c:
    if (ctx->pc == 0x17373Cu) {
        ctx->pc = 0x17373Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173738u;
        // 0x17373c: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173740u;
        goto label_173740;
    }
    ctx->pc = 0x173738u;
    SET_GPR_U32(ctx, 31, 0x173740u);
    ctx->pc = 0x17373Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173738u;
    // 0x17373c: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191A70u;
    { ctx->pc = 0x191a70; return; }
    ctx->pc = 0x173740u;
label_173740:
    // 0x173740: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x173740u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
label_173744:
    // 0x173744: 0x3c060028  lui         $a2, 0x28
    ctx->pc = 0x173744u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)40 << 16));
label_173748:
    // 0x173748: 0x248445b0  addiu       $a0, $a0, 0x45B0
    ctx->pc = 0x173748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17840));
label_17374c:
    // 0x17374c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x17374cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_173750:
    // 0x173750: 0xc066d98  jal         func_19B660
label_173754:
    if (ctx->pc == 0x173754u) {
        ctx->pc = 0x173754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173750u;
        // 0x173754: 0x24c61fb0  addiu       $a2, $a2, 0x1FB0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173758u;
        goto label_173758;
    }
    ctx->pc = 0x173750u;
    SET_GPR_U32(ctx, 31, 0x173758u);
    ctx->pc = 0x173754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173750u;
    // 0x173754: 0x24c61fb0  addiu       $a2, $a2, 0x1FB0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B660u;
    { ctx->pc = 0x19b660; return; }
    ctx->pc = 0x173758u;
label_173758:
    // 0x173758: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x173758u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
label_17375c:
    // 0x17375c: 0x248445b0  addiu       $a0, $a0, 0x45B0
    ctx->pc = 0x17375cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17840));
label_173760:
    // 0x173760: 0xc066daa  jal         func_19B6A8
label_173764:
    if (ctx->pc == 0x173764u) {
        ctx->pc = 0x173764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173760u;
        // 0x173764: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173768u;
        goto label_173768;
    }
    ctx->pc = 0x173760u;
    SET_GPR_U32(ctx, 31, 0x173768u);
    ctx->pc = 0x173764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173760u;
    // 0x173764: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B6A8u;
    { ctx->pc = 0x19b6a8; return; }
    ctx->pc = 0x173768u;
label_173768:
    // 0x173768: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x173768u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
label_17376c:
    // 0x17376c: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x17376cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
label_173770:
    // 0x173770: 0x248445c0  addiu       $a0, $a0, 0x45C0
    ctx->pc = 0x173770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17856));
label_173774:
    // 0x173774: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x173774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_173778:
    // 0x173778: 0xc066d98  jal         func_19B660
label_17377c:
    if (ctx->pc == 0x17377Cu) {
        ctx->pc = 0x17377Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173778u;
        // 0x17377c: 0x24c645b0  addiu       $a2, $a2, 0x45B0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 17840));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173780u;
        goto label_173780;
    }
    ctx->pc = 0x173778u;
    SET_GPR_U32(ctx, 31, 0x173780u);
    ctx->pc = 0x17377Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173778u;
    // 0x17377c: 0x24c645b0  addiu       $a2, $a2, 0x45B0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 17840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B660u;
    { ctx->pc = 0x19b660; return; }
    ctx->pc = 0x173780u;
label_173780:
    // 0x173780: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x173780u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_173784:
    // 0x173784: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x173784u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_173788:
    // 0x173788: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x173788u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_17378c:
    // 0x17378c: 0x3e00008  jr          $ra
label_173790:
    if (ctx->pc == 0x173790u) {
        ctx->pc = 0x173790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17378Cu;
        // 0x173790: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173794u;
        goto label_173794;
    }
    ctx->pc = 0x17378Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17378Cu;
        // 0x173790: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17378Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x173794u;
label_173794:
    // 0x173794: 0x0  nop
    ctx->pc = 0x173794u;
    // NOP
label_173798:
    // 0x173798: 0x0  nop
    ctx->pc = 0x173798u;
    // NOP
label_17379c:
    // 0x17379c: 0x0  nop
    ctx->pc = 0x17379cu;
    // NOP
label_1737a0:
    // 0x1737a0: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x1737a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_1737a4:
    // 0x1737a4: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x1737a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
label_1737a8:
    // 0x1737a8: 0xac2045d4  sw          $zero, 0x45D4($at)
    ctx->pc = 0x1737a8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 17876), GPR_U32(ctx, 0));
label_1737ac:
    // 0x1737ac: 0x34630404  ori         $v1, $v1, 0x404
    ctx->pc = 0x1737acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1028);
label_1737b0:
    // 0x1737b0: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x1737b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_1737b4:
    // 0x1737b4: 0xac2045d8  sw          $zero, 0x45D8($at)
    ctx->pc = 0x1737b4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 17880), GPR_U32(ctx, 0));
label_1737b8:
    // 0x1737b8: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x1737b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_1737bc:
    // 0x1737bc: 0xac204664  sw          $zero, 0x4664($at)
    ctx->pc = 0x1737bcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 18020), GPR_U32(ctx, 0));
label_1737c0:
    // 0x1737c0: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x1737c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_1737c4:
    // 0x1737c4: 0xac2345d0  sw          $v1, 0x45D0($at)
    ctx->pc = 0x1737c4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 17872), GPR_U32(ctx, 3));
label_1737c8:
    // 0x1737c8: 0x3c036c08  lui         $v1, 0x6C08
    ctx->pc = 0x1737c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27656 << 16));
label_1737cc:
    // 0x1737cc: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x1737ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_1737d0:
    // 0x1737d0: 0xac2345dc  sw          $v1, 0x45DC($at)
    ctx->pc = 0x1737d0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 17884), GPR_U32(ctx, 3));
label_1737d4:
    // 0x1737d4: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x1737d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_1737d8:
    // 0x1737d8: 0x3c030300  lui         $v1, 0x300
    ctx->pc = 0x1737d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)768 << 16));
label_1737dc:
    // 0x1737dc: 0xac20466c  sw          $zero, 0x466C($at)
    ctx->pc = 0x1737dcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 18028), GPR_U32(ctx, 0));
label_1737e0:
    // 0x1737e0: 0x3463000e  ori         $v1, $v1, 0xE
    ctx->pc = 0x1737e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)14);
label_1737e4:
    // 0x1737e4: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x1737e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_1737e8:
    // 0x1737e8: 0xac234660  sw          $v1, 0x4660($at)
    ctx->pc = 0x1737e8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 18016), GPR_U32(ctx, 3));
label_1737ec:
    // 0x1737ec: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x1737ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
label_1737f0:
    // 0x1737f0: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x1737f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_1737f4:
    // 0x1737f4: 0x346301f7  ori         $v1, $v1, 0x1F7
    ctx->pc = 0x1737f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)503);
label_1737f8:
    // 0x1737f8: 0x3e00008  jr          $ra
label_1737fc:
    if (ctx->pc == 0x1737FCu) {
        ctx->pc = 0x1737FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1737F8u;
        // 0x1737fc: 0xac234668  sw          $v1, 0x4668($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 18024), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173800u;
        goto label_173800;
    }
    ctx->pc = 0x1737F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1737FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1737F8u;
        // 0x1737fc: 0xac234668  sw          $v1, 0x4668($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 18024), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1737F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x173800u;
label_173800:
    // 0x173800: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x173800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_173804:
    // 0x173804: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x173804u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
label_173808:
    // 0x173808: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x173808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_17380c:
    // 0x17380c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x17380cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_173810:
    // 0x173810: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x173810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_173814:
    // 0x173814: 0x24631e00  addiu       $v1, $v1, 0x1E00
    ctx->pc = 0x173814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7680));
label_173818:
    // 0x173818: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x173818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_17381c:
    // 0x17381c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x17381cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_173820:
    // 0x173820: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x173820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_173824:
    // 0x173824: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x173824u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_173828:
    // 0x173828: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x173828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_17382c:
    // 0x17382c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x17382cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_173830:
    // 0x173830: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x173830u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_173834:
    // 0x173834: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x173834u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_173838:
    // 0x173838: 0x8c283ffc  lw          $t0, 0x3FFC($at)
    ctx->pc = 0x173838u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_17383c:
    // 0x17383c: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x17383cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
label_173840:
    // 0x173840: 0x46006d06  mov.s       $f20, $f13
    ctx->pc = 0x173840u;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
label_173844:
    // 0x173844: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x173844u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_173848:
    // 0x173848: 0x83940  sll         $a3, $t0, 5
    ctx->pc = 0x173848u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 5));
label_17384c:
    // 0x17384c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x17384cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_173850:
    // 0x173850: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x173850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_173854:
    // 0x173854: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x173854u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_173858:
    // 0x173858: 0x3893c  dsll32      $s1, $v1, 4
    ctx->pc = 0x173858u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) << (32 + 4));
label_17385c:
    // 0x17385c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x17385cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_173860:
    // 0x173860: 0x11893e  dsrl32      $s1, $s1, 4
    ctx->pc = 0x173860u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) >> (32 + 4));
label_173864:
    // 0x173864: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x173864u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_173868:
    // 0x173868: 0xc066e26  jal         func_19B898
label_17386c:
    if (ctx->pc == 0x17386Cu) {
        ctx->pc = 0x17386Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173868u;
        // 0x17386c: 0xc28021  addu        $s0, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173870u;
        goto label_173870;
    }
    ctx->pc = 0x173868u;
    SET_GPR_U32(ctx, 31, 0x173870u);
    ctx->pc = 0x17386Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173868u;
    // 0x17386c: 0xc28021  addu        $s0, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x173870u;
label_173870:
    // 0x173870: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x173870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_173874:
    // 0x173874: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x173874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_173878:
    // 0x173878: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x173878u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17387c:
    // 0x17387c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x17387cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_173880:
    // 0x173880: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x173880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_173884:
    // 0x173884: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x173884u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
label_173888:
    // 0x173888: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x173888u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_17388c:
    // 0x17388c: 0xc066e44  jal         func_19B910
label_173890:
    if (ctx->pc == 0x173890u) {
        ctx->pc = 0x173890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17388Cu;
        // 0x173890: 0xe7a000b4  swc1        $f0, 0xB4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x173894u;
        goto label_173894;
    }
    ctx->pc = 0x17388Cu;
    SET_GPR_U32(ctx, 31, 0x173894u);
    ctx->pc = 0x173890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17388Cu;
    // 0x173890: 0xe7a000b4  swc1        $f0, 0xB4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B910u;
    { ctx->pc = 0x19b910; return; }
    ctx->pc = 0x173894u;
label_173894:
    // 0x173894: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x173894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_173898:
    // 0x173898: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x173898u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_17389c:
    // 0x17389c: 0xc066e96  jal         func_19BA58
label_1738a0:
    if (ctx->pc == 0x1738A0u) {
        ctx->pc = 0x1738A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17389Cu;
        // 0x1738a0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1738A4u;
        goto label_1738a4;
    }
    ctx->pc = 0x17389Cu;
    SET_GPR_U32(ctx, 31, 0x1738A4u);
    ctx->pc = 0x1738A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17389Cu;
    // 0x1738a0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BA58u;
    { ctx->pc = 0x19ba58; return; }
    ctx->pc = 0x1738A4u;
label_1738a4:
    // 0x1738a4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1738a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1738a8:
    // 0x1738a8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1738a8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1738ac:
    // 0x1738ac: 0xc066ec0  jal         func_19BB00
label_1738b0:
    if (ctx->pc == 0x1738B0u) {
        ctx->pc = 0x1738B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1738ACu;
        // 0x1738b0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1738B4u;
        goto label_1738b4;
    }
    ctx->pc = 0x1738ACu;
    SET_GPR_U32(ctx, 31, 0x1738B4u);
    ctx->pc = 0x1738B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1738ACu;
    // 0x1738b0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BB00u;
    { ctx->pc = 0x19bb00; return; }
    ctx->pc = 0x1738B4u;
label_1738b4:
    // 0x1738b4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1738b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1738b8:
    // 0x1738b8: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x1738b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1738bc:
    // 0x1738bc: 0xc066e1a  jal         func_19B868
label_1738c0:
    if (ctx->pc == 0x1738C0u) {
        ctx->pc = 0x1738C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1738BCu;
        // 0x1738c0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1738C4u;
        goto label_1738c4;
    }
    ctx->pc = 0x1738BCu;
    SET_GPR_U32(ctx, 31, 0x1738C4u);
    ctx->pc = 0x1738C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1738BCu;
    // 0x1738c0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B868u;
    { ctx->pc = 0x19b868; return; }
    ctx->pc = 0x1738C4u;
label_1738c4:
    // 0x1738c4: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1738c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1738c8:
    // 0x1738c8: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1738c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1738cc:
    // 0x1738cc: 0x121980  sll         $v1, $s2, 6
    ctx->pc = 0x1738ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
label_1738d0:
    // 0x1738d0: 0x24429bc0  addiu       $v0, $v0, -0x6440
    ctx->pc = 0x1738d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941632));
label_1738d4:
    // 0x1738d4: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x1738d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1738d8:
    // 0x1738d8: 0xc066d86  jal         func_19B618
label_1738dc:
    if (ctx->pc == 0x1738DCu) {
        ctx->pc = 0x1738DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1738D8u;
        // 0x1738dc: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1738E0u;
        goto label_1738e0;
    }
    ctx->pc = 0x1738D8u;
    SET_GPR_U32(ctx, 31, 0x1738E0u);
    ctx->pc = 0x1738DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1738D8u;
    // 0x1738dc: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B618u;
    { ctx->pc = 0x19b618; return; }
    ctx->pc = 0x1738E0u;
label_1738e0:
    // 0x1738e0: 0xc07f190  jal         func_1FC640
label_1738e4:
    if (ctx->pc == 0x1738E4u) {
        ctx->pc = 0x1738E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1738E0u;
        // 0x1738e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1738E8u;
        goto label_1738e8;
    }
    ctx->pc = 0x1738E0u;
    SET_GPR_U32(ctx, 31, 0x1738E8u);
    ctx->pc = 0x1738E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1738E0u;
    // 0x1738e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC640u;
    { ctx->pc = 0x1fc640; return; }
    ctx->pc = 0x1738E8u;
label_1738e8:
    // 0x1738e8: 0xc7a100ac  lwc1        $f1, 0xAC($sp)
    ctx->pc = 0x1738e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1738ec:
    // 0x1738ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1738ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1738f0:
    // 0x1738f0: 0x46010503  div.s       $f20, $f0, $f1
    ctx->pc = 0x1738f0u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[20] = ctx->f[0] / ctx->f[1];
label_1738f4:
    // 0x1738f4: 0x0  nop
    ctx->pc = 0x1738f4u;
    // NOP
label_1738f8:
    // 0x1738f8: 0x0  nop
    ctx->pc = 0x1738f8u;
    // NOP
label_1738fc:
    // 0x1738fc: 0xc07f198  jal         func_1FC660
label_173900:
    if (ctx->pc == 0x173900u) {
        ctx->pc = 0x173904u;
        goto label_173904;
    }
    ctx->pc = 0x1738FCu;
    SET_GPR_U32(ctx, 31, 0x173904u);
    ctx->pc = 0x1FC660u;
    { ctx->pc = 0x1fc660; return; }
    ctx->pc = 0x173904u;
label_173904:
    // 0x173904: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x173904u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_173908:
    // 0x173908: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x173908u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_17390c:
    // 0x17390c: 0x44140000  mfc1        $s4, $f0
    ctx->pc = 0x17390cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 20, bits); }
label_173910:
    // 0x173910: 0x0  nop
    ctx->pc = 0x173910u;
    // NOP
label_173914:
    // 0x173914: 0x2a810100  slti        $at, $s4, 0x100
    ctx->pc = 0x173914u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)256) ? 1 : 0);
label_173918:
    // 0x173918: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_17391c:
    if (ctx->pc == 0x17391Cu) {
        ctx->pc = 0x173920u;
        goto label_173920;
    }
    ctx->pc = 0x173918u;
    {
        const bool branch_taken_0x173918 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x173918) {
            ctx->pc = 0x173928u;
            goto label_173928;
        }
    }
    ctx->pc = 0x173920u;
label_173920:
    // 0x173920: 0x10000004  b           . + 4 + (0x4 << 2)
label_173924:
    if (ctx->pc == 0x173924u) {
        ctx->pc = 0x173924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173920u;
        // 0x173924: 0x241400ff  addiu       $s4, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173928u;
        goto label_173928;
    }
    ctx->pc = 0x173920u;
    {
        const bool branch_taken_0x173920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173920u;
        // 0x173924: 0x241400ff  addiu       $s4, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173920) {
            ctx->pc = 0x173934u;
            goto label_173934;
        }
    }
    ctx->pc = 0x173928u;
label_173928:
    // 0x173928: 0x6810003  bgez        $s4, . + 4 + (0x3 << 2)
label_17392c:
    if (ctx->pc == 0x17392Cu) {
        ctx->pc = 0x17392Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173928u;
        // 0x17392c: 0x26120020  addiu       $s2, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173930u;
        goto label_173930;
    }
    ctx->pc = 0x173928u;
    {
        const bool branch_taken_0x173928 = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x17392Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173928u;
        // 0x17392c: 0x26120020  addiu       $s2, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173928) {
            ctx->pc = 0x173938u;
            goto label_173938;
        }
    }
    ctx->pc = 0x173930u;
label_173930:
    // 0x173930: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x173930u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_173934:
    // 0x173934: 0x26120020  addiu       $s2, $s0, 0x20
    ctx->pc = 0x173934u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_173938:
    // 0x173938: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x173938u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_17393c:
    // 0x17393c: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x17393cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_173940:
    // 0x173940: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x173940u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
label_173944:
    // 0x173944: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x173944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_173948:
    // 0x173948: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x173948u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_17394c:
    // 0x17394c: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x17394cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_173950:
    // 0x173950: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x173950u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_173954:
    // 0x173954: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x173954u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
label_173958:
    // 0x173958: 0x14a100  sll         $s4, $s4, 4
    ctx->pc = 0x173958u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
label_17395c:
    // 0x17395c: 0xafa000b4  sw          $zero, 0xB4($sp)
    ctx->pc = 0x17395cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 0));
label_173960:
    // 0x173960: 0xc06703a  jal         func_19C0E8
label_173964:
    if (ctx->pc == 0x173964u) {
        ctx->pc = 0x173964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173960u;
        // 0x173964: 0xafa000b8  sw          $zero, 0xB8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173968u;
        goto label_173968;
    }
    ctx->pc = 0x173960u;
    SET_GPR_U32(ctx, 31, 0x173968u);
    ctx->pc = 0x173964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173960u;
    // 0x173964: 0xafa000b8  sw          $zero, 0xB8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C0E8u;
    { ctx->pc = 0x19c0e8; return; }
    ctx->pc = 0x173968u;
label_173968:
    // 0x173968: 0xae54000c  sw          $s4, 0xC($s2)
    ctx->pc = 0x173968u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 20));
label_17396c:
    // 0x17396c: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x17396cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
label_173970:
    // 0x173970: 0xc7a100ac  lwc1        $f1, 0xAC($sp)
    ctx->pc = 0x173970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_173974:
    // 0x173974: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x173974u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_173978:
    // 0x173978: 0x0  nop
    ctx->pc = 0x173978u;
    // NOP
label_17397c:
    // 0x17397c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x17397cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_173980:
    // 0x173980: 0x0  nop
    ctx->pc = 0x173980u;
    // NOP
label_173984:
    // 0x173984: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_173988:
    if (ctx->pc == 0x173988u) {
        ctx->pc = 0x17398Cu;
        goto label_17398c;
    }
    ctx->pc = 0x173984u;
    {
        const bool branch_taken_0x173984 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x173984) {
            ctx->pc = 0x173998u;
            goto label_173998;
        }
    }
    ctx->pc = 0x17398Cu;
label_17398c:
    // 0x17398c: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x17398cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_173990:
    // 0x173990: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x173990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_173994:
    // 0x173994: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x173994u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
label_173998:
    // 0x173998: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x173998u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_17399c:
    // 0x17399c: 0x1000005a  b           . + 4 + (0x5A << 2)
label_1739a0:
    if (ctx->pc == 0x1739A0u) {
        ctx->pc = 0x1739A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17399Cu;
        // 0x1739a0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1739A4u;
        goto label_1739a4;
    }
    ctx->pc = 0x17399Cu;
    {
        const bool branch_taken_0x17399c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1739A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17399Cu;
        // 0x1739a0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17399c) {
            ctx->pc = 0x173B08u;
            goto label_173b08;
        }
    }
    ctx->pc = 0x1739A4u;
label_1739a4:
    // 0x1739a4: 0x44931800  mtc1        $s3, $f3
    ctx->pc = 0x1739a4u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1739a8:
    // 0x1739a8: 0x3c0243b4  lui         $v0, 0x43B4
    ctx->pc = 0x1739a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17332 << 16));
label_1739ac:
    // 0x1739ac: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x1739acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1739b0:
    // 0x1739b0: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x1739b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_1739b4:
    // 0x1739b4: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x1739b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_1739b8:
    // 0x1739b8: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x1739b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
label_1739bc:
    // 0x1739bc: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x1739bcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_1739c0:
    // 0x1739c0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1739c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1739c4:
    // 0x1739c4: 0x0  nop
    ctx->pc = 0x1739c4u;
    // NOP
label_1739c8:
    // 0x1739c8: 0x46021883  div.s       $f2, $f3, $f2
    ctx->pc = 0x1739c8u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[2] = ctx->f[3] / ctx->f[2];
label_1739cc:
    // 0x1739cc: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1739ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1739d0:
    // 0x1739d0: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x1739d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1739d4:
    // 0x1739d4: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x1739d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_1739d8:
    // 0x1739d8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1739d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1739dc:
    // 0x1739dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1739dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1739e0:
    // 0x1739e0: 0x0  nop
    ctx->pc = 0x1739e0u;
    // NOP
label_1739e4:
    // 0x1739e4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1739e4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_1739e8:
    // 0x1739e8: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x1739e8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[20] = ctx->f[1] / ctx->f[0];
label_1739ec:
    // 0x1739ec: 0x0  nop
    ctx->pc = 0x1739ecu;
    // NOP
label_1739f0:
    // 0x1739f0: 0x0  nop
    ctx->pc = 0x1739f0u;
    // NOP
label_1739f4:
    // 0x1739f4: 0xc06d448  jal         func_1B5120
label_1739f8:
    if (ctx->pc == 0x1739F8u) {
        ctx->pc = 0x1739F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1739F4u;
        // 0x1739f8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1739FCu;
        goto label_1739fc;
    }
    ctx->pc = 0x1739F4u;
    SET_GPR_U32(ctx, 31, 0x1739FCu);
    ctx->pc = 0x1739F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1739F4u;
    // 0x1739f8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5120u;
    { ctx->pc = 0x1b5120; return; }
    ctx->pc = 0x1739FCu;
label_1739fc:
    // 0x1739fc: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x1739fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
label_173a00:
    // 0x173a00: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x173a00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_173a04:
    // 0x173a04: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x173a04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_173a08:
    // 0x173a08: 0x0  nop
    ctx->pc = 0x173a08u;
    // NOP
label_173a0c:
    // 0x173a0c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x173a0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_173a10:
    // 0x173a10: 0x0  nop
    ctx->pc = 0x173a10u;
    // NOP
label_173a14:
    // 0x173a14: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_173a18:
    if (ctx->pc == 0x173A18u) {
        ctx->pc = 0x173A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173A14u;
        // 0x173a18: 0x3c024334  lui         $v0, 0x4334 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173A1Cu;
        goto label_173a1c;
    }
    ctx->pc = 0x173A14u;
    {
        const bool branch_taken_0x173a14 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x173A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173A14u;
        // 0x173a18: 0x3c024334  lui         $v0, 0x4334 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173a14) {
            ctx->pc = 0x173A28u;
            goto label_173a28;
        }
    }
    ctx->pc = 0x173A1Cu;
label_173a1c:
    // 0x173a1c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x173a1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_173a20:
    // 0x173a20: 0x10000003  b           . + 4 + (0x3 << 2)
label_173a24:
    if (ctx->pc == 0x173A24u) {
        ctx->pc = 0x173A28u;
        goto label_173a28;
    }
    ctx->pc = 0x173A20u;
    {
        const bool branch_taken_0x173a20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x173a20) {
            ctx->pc = 0x173A30u;
            goto label_173a30;
        }
    }
    ctx->pc = 0x173A28u;
label_173a28:
    // 0x173a28: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x173a28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_173a2c:
    // 0x173a2c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x173a2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_173a30:
    // 0x173a30: 0x4409a000  mfc1        $t1, $f20
    ctx->pc = 0x173a30u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
label_173a34:
    // 0x173a34: 0x48a90800  qmtc2.ni    $t1, $vf1
    ctx->pc = 0x173a34u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 9));
label_173a38:
    // 0x173a38: 0x4a000138  vcallms     0x20
    ctx->pc = 0x173a38u;
    {     ctx->vu0_tpc = 0x20;     runtime->executeVU0Microprogram(rdram, ctx, 0x20); }
label_173a3c:
    // 0x173a3c: 0x48290801  qmfc2.i     $t1, $vf1
    ctx->pc = 0x173a3cu;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[1]));
label_173a40:
    // 0x173a40: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x173a40u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_173a44:
    // 0x173a44: 0x48291000  qmfc2.ni    $t1, $vf2
    ctx->pc = 0x173a44u;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[2]));
label_173a48:
    // 0x173a48: 0x44890800  mtc1        $t1, $f1
    ctx->pc = 0x173a48u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_173a4c:
    // 0x173a4c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x173a4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_173a50:
    // 0x173a50: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x173a50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_173a54:
    // 0x173a54: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x173a54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_173a58:
    // 0x173a58: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x173a58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_173a5c:
    // 0x173a5c: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x173a5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_173a60:
    // 0x173a60: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x173a60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_173a64:
    // 0x173a64: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x173a64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_173a68:
    // 0x173a68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x173a68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_173a6c:
    // 0x173a6c: 0x0  nop
    ctx->pc = 0x173a6cu;
    // NOP
label_173a70:
    // 0x173a70: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x173a70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_173a74:
    // 0x173a74: 0xc06703a  jal         func_19C0E8
label_173a78:
    if (ctx->pc == 0x173A78u) {
        ctx->pc = 0x173A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173A74u;
        // 0x173a78: 0xe7a000b0  swc1        $f0, 0xB0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x173A7Cu;
        goto label_173a7c;
    }
    ctx->pc = 0x173A74u;
    SET_GPR_U32(ctx, 31, 0x173A7Cu);
    ctx->pc = 0x173A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173A74u;
    // 0x173a78: 0xe7a000b0  swc1        $f0, 0xB0($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C0E8u;
    { ctx->pc = 0x19c0e8; return; }
    ctx->pc = 0x173A7Cu;
label_173a7c:
    // 0x173a7c: 0xae54000c  sw          $s4, 0xC($s2)
    ctx->pc = 0x173a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 20));
label_173a80:
    // 0x173a80: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x173a80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
label_173a84:
    // 0x173a84: 0xc7a100ac  lwc1        $f1, 0xAC($sp)
    ctx->pc = 0x173a84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_173a88:
    // 0x173a88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x173a88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_173a8c:
    // 0x173a8c: 0x0  nop
    ctx->pc = 0x173a8cu;
    // NOP
label_173a90:
    // 0x173a90: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x173a90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_173a94:
    // 0x173a94: 0x0  nop
    ctx->pc = 0x173a94u;
    // NOP
label_173a98:
    // 0x173a98: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_173a9c:
    if (ctx->pc == 0x173A9Cu) {
        ctx->pc = 0x173AA0u;
        goto label_173aa0;
    }
    ctx->pc = 0x173A98u;
    {
        const bool branch_taken_0x173a98 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x173a98) {
            ctx->pc = 0x173AACu;
            goto label_173aac;
        }
    }
    ctx->pc = 0x173AA0u;
label_173aa0:
    // 0x173aa0: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x173aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_173aa4:
    // 0x173aa4: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x173aa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_173aa8:
    // 0x173aa8: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x173aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
label_173aac:
    // 0x173aac: 0x0  nop
    ctx->pc = 0x173aacu;
    // NOP
label_173ab0:
    // 0x173ab0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x173ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_173ab4:
    // 0x173ab4: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x173ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_173ab8:
    // 0x173ab8: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x173ab8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
label_173abc:
    // 0x173abc: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x173abcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_173ac0:
    // 0x173ac0: 0x2463f800  addiu       $v1, $v1, -0x800
    ctx->pc = 0x173ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965248));
label_173ac4:
    // 0x173ac4: 0x2444f800  addiu       $a0, $v0, -0x800
    ctx->pc = 0x173ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965248));
label_173ac8:
    // 0x173ac8: 0x2862fe20  slti        $v0, $v1, -0x1E0
    ctx->pc = 0x173ac8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294966816) ? 1 : 0);
label_173acc:
    // 0x173acc: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_173ad0:
    if (ctx->pc == 0x173AD0u) {
        ctx->pc = 0x173AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173ACCu;
        // 0x173ad0: 0x286101e1  slti        $at, $v1, 0x1E1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)481) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x173AD4u;
        goto label_173ad4;
    }
    ctx->pc = 0x173ACCu;
    {
        const bool branch_taken_0x173acc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x173AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173ACCu;
        // 0x173ad0: 0x286101e1  slti        $at, $v1, 0x1E1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)481) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x173acc) {
            ctx->pc = 0x173AECu;
            goto label_173aec;
        }
    }
    ctx->pc = 0x173AD4u;
label_173ad4:
    // 0x173ad4: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_173ad8:
    if (ctx->pc == 0x173AD8u) {
        ctx->pc = 0x173AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173AD4u;
        // 0x173ad8: 0x2882ff20  slti        $v0, $a0, -0xE0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4294967072) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x173ADCu;
        goto label_173adc;
    }
    ctx->pc = 0x173AD4u;
    {
        const bool branch_taken_0x173ad4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x173AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173AD4u;
        // 0x173ad8: 0x2882ff20  slti        $v0, $a0, -0xE0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4294967072) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x173ad4) {
            ctx->pc = 0x173AECu;
            goto label_173aec;
        }
    }
    ctx->pc = 0x173ADCu;
label_173adc:
    // 0x173adc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_173ae0:
    if (ctx->pc == 0x173AE0u) {
        ctx->pc = 0x173AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173ADCu;
        // 0x173ae0: 0x288100e1  slti        $at, $a0, 0xE1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)225) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x173AE4u;
        goto label_173ae4;
    }
    ctx->pc = 0x173ADCu;
    {
        const bool branch_taken_0x173adc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x173AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173ADCu;
        // 0x173ae0: 0x288100e1  slti        $at, $a0, 0xE1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)225) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x173adc) {
            ctx->pc = 0x173AECu;
            goto label_173aec;
        }
    }
    ctx->pc = 0x173AE4u;
label_173ae4:
    // 0x173ae4: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
label_173ae8:
    if (ctx->pc == 0x173AE8u) {
        ctx->pc = 0x173AECu;
        goto label_173aec;
    }
    ctx->pc = 0x173AE4u;
    {
        const bool branch_taken_0x173ae4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x173ae4) {
            ctx->pc = 0x173AFCu;
            goto label_173afc;
        }
    }
    ctx->pc = 0x173AECu;
label_173aec:
    // 0x173aec: 0x0  nop
    ctx->pc = 0x173aecu;
    // NOP
label_173af0:
    // 0x173af0: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x173af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_173af4:
    // 0x173af4: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x173af4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_173af8:
    // 0x173af8: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x173af8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
label_173afc:
    // 0x173afc: 0x0  nop
    ctx->pc = 0x173afcu;
    // NOP
label_173b00:
    // 0x173b00: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x173b00u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_173b04:
    // 0x173b04: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x173b04u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_173b08:
    // 0x173b08: 0x2a620009  slti        $v0, $s3, 0x9
    ctx->pc = 0x173b08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)9) ? 1 : 0);
label_173b0c:
    // 0x173b0c: 0x1440ffa5  bnez        $v0, . + 4 + (-0x5B << 2)
label_173b10:
    if (ctx->pc == 0x173B10u) {
        ctx->pc = 0x173B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173B0Cu;
        // 0x173b10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173B14u;
        goto label_173b14;
    }
    ctx->pc = 0x173B0Cu;
    {
        const bool branch_taken_0x173b0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x173B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173B0Cu;
        // 0x173b10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173b0c) {
            ctx->pc = 0x1739A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1739a4;
        }
    }
    ctx->pc = 0x173B14u;
label_173b14:
    // 0x173b14: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x173b14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_173b18:
    // 0x173b18: 0x24060016  addiu       $a2, $zero, 0x16
    ctx->pc = 0x173b18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_173b1c:
    // 0x173b1c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x173b1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_173b20:
    // 0x173b20: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x173b20u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_173b24:
    // 0x173b24: 0xc066c72  jal         func_19B1C8
label_173b28:
    if (ctx->pc == 0x173B28u) {
        ctx->pc = 0x173B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173B24u;
        // 0x173b28: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173B2Cu;
        goto label_173b2c;
    }
    ctx->pc = 0x173B24u;
    SET_GPR_U32(ctx, 31, 0x173B2Cu);
    ctx->pc = 0x173B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173B24u;
    // 0x173b28: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x173B2Cu;
label_173b2c:
    // 0x173b2c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x173b2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_173b30:
    // 0x173b30: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x173b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_173b34:
    // 0x173b34: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x173b34u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_173b38:
    // 0x173b38: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x173b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_173b3c:
    // 0x173b3c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x173b3cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_173b40:
    // 0x173b40: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x173b40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_173b44:
    // 0x173b44: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x173b44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_173b48:
    // 0x173b48: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x173b48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_173b4c:
    // 0x173b4c: 0x3e00008  jr          $ra
label_173b50:
    if (ctx->pc == 0x173B50u) {
        ctx->pc = 0x173B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173B4Cu;
        // 0x173b50: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173B54u;
        goto label_173b54;
    }
    ctx->pc = 0x173B4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173B4Cu;
        // 0x173b50: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x173B4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x173B54u;
label_173b54:
    // 0x173b54: 0x0  nop
    ctx->pc = 0x173b54u;
    // NOP
label_173b58:
    // 0x173b58: 0x0  nop
    ctx->pc = 0x173b58u;
    // NOP
label_173b5c:
    // 0x173b5c: 0x0  nop
    ctx->pc = 0x173b5cu;
    // NOP
label_173b60:
    // 0x173b60: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x173b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_173b64:
    // 0x173b64: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x173b64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
label_173b68:
    // 0x173b68: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x173b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_173b6c:
    // 0x173b6c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x173b6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_173b70:
    // 0x173b70: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x173b70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_173b74:
    // 0x173b74: 0x24631e00  addiu       $v1, $v1, 0x1E00
    ctx->pc = 0x173b74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7680));
label_173b78:
    // 0x173b78: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x173b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_173b7c:
    // 0x173b7c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x173b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_173b80:
    // 0x173b80: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x173b80u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_173b84:
    // 0x173b84: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x173b84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_173b88:
    // 0x173b88: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x173b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_173b8c:
    // 0x173b8c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x173b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_173b90:
    // 0x173b90: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x173b90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_173b94:
    // 0x173b94: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x173b94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_173b98:
    // 0x173b98: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x173b98u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_173b9c:
    // 0x173b9c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x173b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_173ba0:
    // 0x173ba0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x173ba0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_173ba4:
    // 0x173ba4: 0x8c283ffc  lw          $t0, 0x3FFC($at)
    ctx->pc = 0x173ba4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_173ba8:
    // 0x173ba8: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x173ba8u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
label_173bac:
    // 0x173bac: 0x46006d06  mov.s       $f20, $f13
    ctx->pc = 0x173bacu;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
label_173bb0:
    // 0x173bb0: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x173bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_173bb4:
    // 0x173bb4: 0x83940  sll         $a3, $t0, 5
    ctx->pc = 0x173bb4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 5));
label_173bb8:
    // 0x173bb8: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x173bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_173bbc:
    // 0x173bbc: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x173bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_173bc0:
    // 0x173bc0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x173bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_173bc4:
    // 0x173bc4: 0x3b13c  dsll32      $s6, $v1, 4
    ctx->pc = 0x173bc4u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) << (32 + 4));
label_173bc8:
    // 0x173bc8: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x173bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_173bcc:
    // 0x173bcc: 0x16b13e  dsrl32      $s6, $s6, 4
    ctx->pc = 0x173bccu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) >> (32 + 4));
label_173bd0:
    // 0x173bd0: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x173bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_173bd4:
    // 0x173bd4: 0xc066e26  jal         func_19B898
label_173bd8:
    if (ctx->pc == 0x173BD8u) {
        ctx->pc = 0x173BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173BD4u;
        // 0x173bd8: 0xc28021  addu        $s0, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173BDCu;
        goto label_173bdc;
    }
    ctx->pc = 0x173BD4u;
    SET_GPR_U32(ctx, 31, 0x173BDCu);
    ctx->pc = 0x173BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173BD4u;
    // 0x173bd8: 0xc28021  addu        $s0, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x173BDCu;
label_173bdc:
    // 0x173bdc: 0xc7a100d4  lwc1        $f1, 0xD4($sp)
    ctx->pc = 0x173bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_173be0:
    // 0x173be0: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x173be0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_173be4:
    // 0x173be4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x173be4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_173be8:
    // 0x173be8: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x173be8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_173bec:
    // 0x173bec: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x173becu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_173bf0:
    // 0x173bf0: 0xafa200dc  sw          $v0, 0xDC($sp)
    ctx->pc = 0x173bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
label_173bf4:
    // 0x173bf4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x173bf4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_173bf8:
    // 0x173bf8: 0xc066e44  jal         func_19B910
label_173bfc:
    if (ctx->pc == 0x173BFCu) {
        ctx->pc = 0x173BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173BF8u;
        // 0x173bfc: 0xe7a000d4  swc1        $f0, 0xD4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x173C00u;
        goto label_173c00;
    }
    ctx->pc = 0x173BF8u;
    SET_GPR_U32(ctx, 31, 0x173C00u);
    ctx->pc = 0x173BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173BF8u;
    // 0x173bfc: 0xe7a000d4  swc1        $f0, 0xD4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B910u;
    { ctx->pc = 0x19b910; return; }
    ctx->pc = 0x173C00u;
label_173c00:
    // 0x173c00: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x173c00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_173c04:
    // 0x173c04: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x173c04u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_173c08:
    // 0x173c08: 0xc066e96  jal         func_19BA58
label_173c0c:
    if (ctx->pc == 0x173C0Cu) {
        ctx->pc = 0x173C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173C08u;
        // 0x173c0c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173C10u;
        goto label_173c10;
    }
    ctx->pc = 0x173C08u;
    SET_GPR_U32(ctx, 31, 0x173C10u);
    ctx->pc = 0x173C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173C08u;
    // 0x173c0c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BA58u;
    { ctx->pc = 0x19ba58; return; }
    ctx->pc = 0x173C10u;
label_173c10:
    // 0x173c10: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x173c10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_173c14:
    // 0x173c14: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x173c14u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_173c18:
    // 0x173c18: 0xc066ec0  jal         func_19BB00
label_173c1c:
    if (ctx->pc == 0x173C1Cu) {
        ctx->pc = 0x173C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173C18u;
        // 0x173c1c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173C20u;
        goto label_173c20;
    }
    ctx->pc = 0x173C18u;
    SET_GPR_U32(ctx, 31, 0x173C20u);
    ctx->pc = 0x173C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173C18u;
    // 0x173c1c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BB00u;
    { ctx->pc = 0x19bb00; return; }
    ctx->pc = 0x173C20u;
label_173c20:
    // 0x173c20: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x173c20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_173c24:
    // 0x173c24: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x173c24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_173c28:
    // 0x173c28: 0xc066e1a  jal         func_19B868
label_173c2c:
    if (ctx->pc == 0x173C2Cu) {
        ctx->pc = 0x173C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173C28u;
        // 0x173c2c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173C30u;
        goto label_173c30;
    }
    ctx->pc = 0x173C28u;
    SET_GPR_U32(ctx, 31, 0x173C30u);
    ctx->pc = 0x173C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173C28u;
    // 0x173c2c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B868u;
    { ctx->pc = 0x19b868; return; }
    ctx->pc = 0x173C30u;
label_173c30:
    // 0x173c30: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x173c30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_173c34:
    // 0x173c34: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x173c34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_173c38:
    // 0x173c38: 0x111980  sll         $v1, $s1, 6
    ctx->pc = 0x173c38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
label_173c3c:
    // 0x173c3c: 0x24429bc0  addiu       $v0, $v0, -0x6440
    ctx->pc = 0x173c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941632));
label_173c40:
    // 0x173c40: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x173c40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_173c44:
    // 0x173c44: 0xc066d86  jal         func_19B618
label_173c48:
    if (ctx->pc == 0x173C48u) {
        ctx->pc = 0x173C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173C44u;
        // 0x173c48: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173C4Cu;
        goto label_173c4c;
    }
    ctx->pc = 0x173C44u;
    SET_GPR_U32(ctx, 31, 0x173C4Cu);
    ctx->pc = 0x173C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173C44u;
    // 0x173c48: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B618u;
    { ctx->pc = 0x19b618; return; }
    ctx->pc = 0x173C4Cu;
label_173c4c:
    // 0x173c4c: 0xc07f190  jal         func_1FC640
label_173c50:
    if (ctx->pc == 0x173C50u) {
        ctx->pc = 0x173C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173C4Cu;
        // 0x173c50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173C54u;
        goto label_173c54;
    }
    ctx->pc = 0x173C4Cu;
    SET_GPR_U32(ctx, 31, 0x173C54u);
    ctx->pc = 0x173C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173C4Cu;
    // 0x173c50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC640u;
    { ctx->pc = 0x1fc640; return; }
    ctx->pc = 0x173C54u;
label_173c54:
    // 0x173c54: 0x27b300cc  addiu       $s3, $sp, 0xCC
    ctx->pc = 0x173c54u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
label_173c58:
    // 0x173c58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x173c58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_173c5c:
    // 0x173c5c: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x173c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_173c60:
    // 0x173c60: 0x46010503  div.s       $f20, $f0, $f1
    ctx->pc = 0x173c60u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[20] = ctx->f[0] / ctx->f[1];
label_173c64:
    // 0x173c64: 0x0  nop
    ctx->pc = 0x173c64u;
    // NOP
label_173c68:
    // 0x173c68: 0x0  nop
    ctx->pc = 0x173c68u;
    // NOP
label_173c6c:
    // 0x173c6c: 0xc07f198  jal         func_1FC660
label_173c70:
    if (ctx->pc == 0x173C70u) {
        ctx->pc = 0x173C74u;
        goto label_173c74;
    }
    ctx->pc = 0x173C6Cu;
    SET_GPR_U32(ctx, 31, 0x173C74u);
    ctx->pc = 0x1FC660u;
    { ctx->pc = 0x1fc660; return; }
    ctx->pc = 0x173C74u;
label_173c74:
    // 0x173c74: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x173c74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_173c78:
    // 0x173c78: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x173c78u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_173c7c:
    // 0x173c7c: 0x44120000  mfc1        $s2, $f0
    ctx->pc = 0x173c7cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 18, bits); }
label_173c80:
    // 0x173c80: 0x0  nop
    ctx->pc = 0x173c80u;
    // NOP
label_173c84:
    // 0x173c84: 0x2a410100  slti        $at, $s2, 0x100
    ctx->pc = 0x173c84u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)256) ? 1 : 0);
label_173c88:
    // 0x173c88: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_173c8c:
    if (ctx->pc == 0x173C8Cu) {
        ctx->pc = 0x173C90u;
        goto label_173c90;
    }
    ctx->pc = 0x173C88u;
    {
        const bool branch_taken_0x173c88 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x173c88) {
            ctx->pc = 0x173C98u;
            goto label_173c98;
        }
    }
    ctx->pc = 0x173C90u;
label_173c90:
    // 0x173c90: 0x10000004  b           . + 4 + (0x4 << 2)
label_173c94:
    if (ctx->pc == 0x173C94u) {
        ctx->pc = 0x173C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173C90u;
        // 0x173c94: 0x241200ff  addiu       $s2, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173C98u;
        goto label_173c98;
    }
    ctx->pc = 0x173C90u;
    {
        const bool branch_taken_0x173c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173C90u;
        // 0x173c94: 0x241200ff  addiu       $s2, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173c90) {
            ctx->pc = 0x173CA4u;
            goto label_173ca4;
        }
    }
    ctx->pc = 0x173C98u;
label_173c98:
    // 0x173c98: 0x6410003  bgez        $s2, . + 4 + (0x3 << 2)
label_173c9c:
    if (ctx->pc == 0x173C9Cu) {
        ctx->pc = 0x173C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173C98u;
        // 0x173c9c: 0x26110020  addiu       $s1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173CA0u;
        goto label_173ca0;
    }
    ctx->pc = 0x173C98u;
    {
        const bool branch_taken_0x173c98 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x173C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173C98u;
        // 0x173c9c: 0x26110020  addiu       $s1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173c98) {
            ctx->pc = 0x173CA8u;
            goto label_173ca8;
        }
    }
    ctx->pc = 0x173CA0u;
label_173ca0:
    // 0x173ca0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x173ca0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_173ca4:
    // 0x173ca4: 0x26110020  addiu       $s1, $s0, 0x20
    ctx->pc = 0x173ca4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_173ca8:
    // 0x173ca8: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x173ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_173cac:
    // 0x173cac: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x173cacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_173cb0:
    // 0x173cb0: 0x26a602d0  addiu       $a2, $s5, 0x2D0
    ctx->pc = 0x173cb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 720));
label_173cb4:
    // 0x173cb4: 0xc06703a  jal         func_19C0E8
label_173cb8:
    if (ctx->pc == 0x173CB8u) {
        ctx->pc = 0x173CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173CB4u;
        // 0x173cb8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173CBCu;
        goto label_173cbc;
    }
    ctx->pc = 0x173CB4u;
    SET_GPR_U32(ctx, 31, 0x173CBCu);
    ctx->pc = 0x173CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173CB4u;
    // 0x173cb8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C0E8u;
    { ctx->pc = 0x19c0e8; return; }
    ctx->pc = 0x173CBCu;
label_173cbc:
    // 0x173cbc: 0x12a100  sll         $s4, $s2, 4
    ctx->pc = 0x173cbcu;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_173cc0:
    // 0x173cc0: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x173cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
label_173cc4:
    // 0x173cc4: 0xae34001c  sw          $s4, 0x1C($s1)
    ctx->pc = 0x173cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 20));
label_173cc8:
    // 0x173cc8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x173cc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_173ccc:
    // 0x173ccc: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x173cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_173cd0:
    // 0x173cd0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x173cd0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_173cd4:
    // 0x173cd4: 0x0  nop
    ctx->pc = 0x173cd4u;
    // NOP
label_173cd8:
    // 0x173cd8: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_173cdc:
    if (ctx->pc == 0x173CDCu) {
        ctx->pc = 0x173CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173CD8u;
        // 0x173cdc: 0x2623001c  addiu       $v1, $s1, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173CE0u;
        goto label_173ce0;
    }
    ctx->pc = 0x173CD8u;
    {
        const bool branch_taken_0x173cd8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x173CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173CD8u;
        // 0x173cdc: 0x2623001c  addiu       $v1, $s1, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173cd8) {
            ctx->pc = 0x173CECu;
            goto label_173cec;
        }
    }
    ctx->pc = 0x173CE0u;
label_173ce0:
    // 0x173ce0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x173ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_173ce4:
    // 0x173ce4: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x173ce4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_173ce8:
    // 0x173ce8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x173ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_173cec:
    // 0x173cec: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x173cecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_173cf0:
    // 0x173cf0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x173cf0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_173cf4:
    // 0x173cf4: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x173cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_173cf8:
    // 0x173cf8: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x173cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_173cfc:
    // 0x173cfc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x173cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_173d00:
    // 0x173d00: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x173d00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_173d04:
    // 0x173d04: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x173d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_173d08:
    // 0x173d08: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x173d08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_173d0c:
    // 0x173d0c: 0xc06703a  jal         func_19C0E8
label_173d10:
    if (ctx->pc == 0x173D10u) {
        ctx->pc = 0x173D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173D0Cu;
        // 0x173d10: 0x244602d0  addiu       $a2, $v0, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 720));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173D14u;
        goto label_173d14;
    }
    ctx->pc = 0x173D0Cu;
    SET_GPR_U32(ctx, 31, 0x173D14u);
    ctx->pc = 0x173D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173D0Cu;
    // 0x173d10: 0x244602d0  addiu       $a2, $v0, 0x2D0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C0E8u;
    { ctx->pc = 0x19c0e8; return; }
    ctx->pc = 0x173D14u;
label_173d14:
    // 0x173d14: 0xae34001c  sw          $s4, 0x1C($s1)
    ctx->pc = 0x173d14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 20));
label_173d18:
    // 0x173d18: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x173d18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
label_173d1c:
    // 0x173d1c: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x173d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_173d20:
    // 0x173d20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x173d20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_173d24:
    // 0x173d24: 0x0  nop
    ctx->pc = 0x173d24u;
    // NOP
label_173d28:
    // 0x173d28: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x173d28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_173d2c:
    // 0x173d2c: 0x0  nop
    ctx->pc = 0x173d2cu;
    // NOP
label_173d30:
    // 0x173d30: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_173d34:
    if (ctx->pc == 0x173D34u) {
        ctx->pc = 0x173D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173D30u;
        // 0x173d34: 0x2623001c  addiu       $v1, $s1, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173D38u;
        goto label_173d38;
    }
    ctx->pc = 0x173D30u;
    {
        const bool branch_taken_0x173d30 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x173D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173D30u;
        // 0x173d34: 0x2623001c  addiu       $v1, $s1, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173d30) {
            ctx->pc = 0x173D44u;
            goto label_173d44;
        }
    }
    ctx->pc = 0x173D38u;
label_173d38:
    // 0x173d38: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x173d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_173d3c:
    // 0x173d3c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x173d3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_173d40:
    // 0x173d40: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x173d40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_173d44:
    // 0x173d44: 0x0  nop
    ctx->pc = 0x173d44u;
    // NOP
label_173d48:
    // 0x173d48: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x173d48u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_173d4c:
    // 0x173d4c: 0x2a420009  slti        $v0, $s2, 0x9
    ctx->pc = 0x173d4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)9) ? 1 : 0);
label_173d50:
    // 0x173d50: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
label_173d54:
    if (ctx->pc == 0x173D54u) {
        ctx->pc = 0x173D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173D50u;
        // 0x173d54: 0x26310020  addiu       $s1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173D58u;
        goto label_173d58;
    }
    ctx->pc = 0x173D50u;
    {
        const bool branch_taken_0x173d50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x173D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173D50u;
        // 0x173d54: 0x26310020  addiu       $s1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173d50) {
            ctx->pc = 0x173CF4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_173cf4;
        }
    }
    ctx->pc = 0x173D58u;
label_173d58:
    // 0x173d58: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x173d58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_173d5c:
    // 0x173d5c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x173d5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x173d60u;
    return;
}

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

// Function: FUN_0019b850
// Address: 0x19b850 - 0x29b858
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b850_part191(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1f84b0u: goto label_1f84b0;
        case 0x1f84b4u: goto label_1f84b4;
        case 0x1f84b8u: goto label_1f84b8;
        case 0x1f84bcu: goto label_1f84bc;
        case 0x1f84c0u: goto label_1f84c0;
        case 0x1f84c4u: goto label_1f84c4;
        case 0x1f84c8u: goto label_1f84c8;
        case 0x1f84ccu: goto label_1f84cc;
        case 0x1f84d0u: goto label_1f84d0;
        case 0x1f84d4u: goto label_1f84d4;
        case 0x1f84d8u: goto label_1f84d8;
        case 0x1f84dcu: goto label_1f84dc;
        case 0x1f84e0u: goto label_1f84e0;
        case 0x1f84e4u: goto label_1f84e4;
        case 0x1f84e8u: goto label_1f84e8;
        case 0x1f84ecu: goto label_1f84ec;
        case 0x1f84f0u: goto label_1f84f0;
        case 0x1f84f4u: goto label_1f84f4;
        case 0x1f84f8u: goto label_1f84f8;
        case 0x1f84fcu: goto label_1f84fc;
        case 0x1f8500u: goto label_1f8500;
        case 0x1f8504u: goto label_1f8504;
        case 0x1f8508u: goto label_1f8508;
        case 0x1f850cu: goto label_1f850c;
        case 0x1f8510u: goto label_1f8510;
        case 0x1f8514u: goto label_1f8514;
        case 0x1f8518u: goto label_1f8518;
        case 0x1f851cu: goto label_1f851c;
        case 0x1f8520u: goto label_1f8520;
        case 0x1f8524u: goto label_1f8524;
        case 0x1f8528u: goto label_1f8528;
        case 0x1f852cu: goto label_1f852c;
        case 0x1f8530u: goto label_1f8530;
        case 0x1f8534u: goto label_1f8534;
        case 0x1f8538u: goto label_1f8538;
        case 0x1f853cu: goto label_1f853c;
        case 0x1f8540u: goto label_1f8540;
        case 0x1f8544u: goto label_1f8544;
        case 0x1f8548u: goto label_1f8548;
        case 0x1f854cu: goto label_1f854c;
        case 0x1f8550u: goto label_1f8550;
        case 0x1f8554u: goto label_1f8554;
        case 0x1f8558u: goto label_1f8558;
        case 0x1f855cu: goto label_1f855c;
        case 0x1f8560u: goto label_1f8560;
        case 0x1f8564u: goto label_1f8564;
        case 0x1f8568u: goto label_1f8568;
        case 0x1f856cu: goto label_1f856c;
        case 0x1f8570u: goto label_1f8570;
        case 0x1f8574u: goto label_1f8574;
        case 0x1f8578u: goto label_1f8578;
        case 0x1f857cu: goto label_1f857c;
        case 0x1f8580u: goto label_1f8580;
        case 0x1f8584u: goto label_1f8584;
        case 0x1f8588u: goto label_1f8588;
        case 0x1f858cu: goto label_1f858c;
        case 0x1f8590u: goto label_1f8590;
        case 0x1f8594u: goto label_1f8594;
        case 0x1f8598u: goto label_1f8598;
        case 0x1f859cu: goto label_1f859c;
        case 0x1f85a0u: goto label_1f85a0;
        case 0x1f85a4u: goto label_1f85a4;
        case 0x1f85a8u: goto label_1f85a8;
        case 0x1f85acu: goto label_1f85ac;
        case 0x1f85b0u: goto label_1f85b0;
        case 0x1f85b4u: goto label_1f85b4;
        case 0x1f85b8u: goto label_1f85b8;
        case 0x1f85bcu: goto label_1f85bc;
        case 0x1f85c0u: goto label_1f85c0;
        case 0x1f85c4u: goto label_1f85c4;
        case 0x1f85c8u: goto label_1f85c8;
        case 0x1f85ccu: goto label_1f85cc;
        case 0x1f85d0u: goto label_1f85d0;
        case 0x1f85d4u: goto label_1f85d4;
        case 0x1f85d8u: goto label_1f85d8;
        case 0x1f85dcu: goto label_1f85dc;
        case 0x1f85e0u: goto label_1f85e0;
        case 0x1f85e4u: goto label_1f85e4;
        case 0x1f85e8u: goto label_1f85e8;
        case 0x1f85ecu: goto label_1f85ec;
        case 0x1f85f0u: goto label_1f85f0;
        case 0x1f85f4u: goto label_1f85f4;
        case 0x1f85f8u: goto label_1f85f8;
        case 0x1f85fcu: goto label_1f85fc;
        case 0x1f8600u: goto label_1f8600;
        case 0x1f8604u: goto label_1f8604;
        case 0x1f8608u: goto label_1f8608;
        case 0x1f860cu: goto label_1f860c;
        case 0x1f8610u: goto label_1f8610;
        case 0x1f8614u: goto label_1f8614;
        case 0x1f8618u: goto label_1f8618;
        case 0x1f861cu: goto label_1f861c;
        case 0x1f8620u: goto label_1f8620;
        case 0x1f8624u: goto label_1f8624;
        case 0x1f8628u: goto label_1f8628;
        case 0x1f862cu: goto label_1f862c;
        case 0x1f8630u: goto label_1f8630;
        case 0x1f8634u: goto label_1f8634;
        case 0x1f8638u: goto label_1f8638;
        case 0x1f863cu: goto label_1f863c;
        case 0x1f8640u: goto label_1f8640;
        case 0x1f8644u: goto label_1f8644;
        case 0x1f8648u: goto label_1f8648;
        case 0x1f864cu: goto label_1f864c;
        case 0x1f8650u: goto label_1f8650;
        case 0x1f8654u: goto label_1f8654;
        case 0x1f8658u: goto label_1f8658;
        case 0x1f865cu: goto label_1f865c;
        case 0x1f8660u: goto label_1f8660;
        case 0x1f8664u: goto label_1f8664;
        case 0x1f8668u: goto label_1f8668;
        case 0x1f866cu: goto label_1f866c;
        case 0x1f8670u: goto label_1f8670;
        case 0x1f8674u: goto label_1f8674;
        case 0x1f8678u: goto label_1f8678;
        case 0x1f867cu: goto label_1f867c;
        case 0x1f8680u: goto label_1f8680;
        case 0x1f8684u: goto label_1f8684;
        case 0x1f8688u: goto label_1f8688;
        case 0x1f868cu: goto label_1f868c;
        case 0x1f8690u: goto label_1f8690;
        case 0x1f8694u: goto label_1f8694;
        case 0x1f8698u: goto label_1f8698;
        case 0x1f869cu: goto label_1f869c;
        case 0x1f86a0u: goto label_1f86a0;
        case 0x1f86a4u: goto label_1f86a4;
        case 0x1f86a8u: goto label_1f86a8;
        case 0x1f86acu: goto label_1f86ac;
        case 0x1f86b0u: goto label_1f86b0;
        case 0x1f86b4u: goto label_1f86b4;
        case 0x1f86b8u: goto label_1f86b8;
        case 0x1f86bcu: goto label_1f86bc;
        case 0x1f86c0u: goto label_1f86c0;
        case 0x1f86c4u: goto label_1f86c4;
        case 0x1f86c8u: goto label_1f86c8;
        case 0x1f86ccu: goto label_1f86cc;
        case 0x1f86d0u: goto label_1f86d0;
        case 0x1f86d4u: goto label_1f86d4;
        case 0x1f86d8u: goto label_1f86d8;
        case 0x1f86dcu: goto label_1f86dc;
        case 0x1f86e0u: goto label_1f86e0;
        case 0x1f86e4u: goto label_1f86e4;
        case 0x1f86e8u: goto label_1f86e8;
        case 0x1f86ecu: goto label_1f86ec;
        case 0x1f86f0u: goto label_1f86f0;
        case 0x1f86f4u: goto label_1f86f4;
        case 0x1f86f8u: goto label_1f86f8;
        case 0x1f86fcu: goto label_1f86fc;
        case 0x1f8700u: goto label_1f8700;
        case 0x1f8704u: goto label_1f8704;
        case 0x1f8708u: goto label_1f8708;
        case 0x1f870cu: goto label_1f870c;
        case 0x1f8710u: goto label_1f8710;
        case 0x1f8714u: goto label_1f8714;
        case 0x1f8718u: goto label_1f8718;
        case 0x1f871cu: goto label_1f871c;
        case 0x1f8720u: goto label_1f8720;
        case 0x1f8724u: goto label_1f8724;
        case 0x1f8728u: goto label_1f8728;
        case 0x1f872cu: goto label_1f872c;
        case 0x1f8730u: goto label_1f8730;
        case 0x1f8734u: goto label_1f8734;
        case 0x1f8738u: goto label_1f8738;
        case 0x1f873cu: goto label_1f873c;
        case 0x1f8740u: goto label_1f8740;
        case 0x1f8744u: goto label_1f8744;
        case 0x1f8748u: goto label_1f8748;
        case 0x1f874cu: goto label_1f874c;
        case 0x1f8750u: goto label_1f8750;
        case 0x1f8754u: goto label_1f8754;
        case 0x1f8758u: goto label_1f8758;
        case 0x1f875cu: goto label_1f875c;
        case 0x1f8760u: goto label_1f8760;
        case 0x1f8764u: goto label_1f8764;
        case 0x1f8768u: goto label_1f8768;
        case 0x1f876cu: goto label_1f876c;
        case 0x1f8770u: goto label_1f8770;
        case 0x1f8774u: goto label_1f8774;
        case 0x1f8778u: goto label_1f8778;
        case 0x1f877cu: goto label_1f877c;
        case 0x1f8780u: goto label_1f8780;
        case 0x1f8784u: goto label_1f8784;
        case 0x1f8788u: goto label_1f8788;
        case 0x1f878cu: goto label_1f878c;
        case 0x1f8790u: goto label_1f8790;
        case 0x1f8794u: goto label_1f8794;
        case 0x1f8798u: goto label_1f8798;
        case 0x1f879cu: goto label_1f879c;
        case 0x1f87a0u: goto label_1f87a0;
        case 0x1f87a4u: goto label_1f87a4;
        case 0x1f87a8u: goto label_1f87a8;
        case 0x1f87acu: goto label_1f87ac;
        case 0x1f87b0u: goto label_1f87b0;
        case 0x1f87b4u: goto label_1f87b4;
        case 0x1f87b8u: goto label_1f87b8;
        case 0x1f87bcu: goto label_1f87bc;
        case 0x1f87c0u: goto label_1f87c0;
        case 0x1f87c4u: goto label_1f87c4;
        case 0x1f87c8u: goto label_1f87c8;
        case 0x1f87ccu: goto label_1f87cc;
        case 0x1f87d0u: goto label_1f87d0;
        case 0x1f87d4u: goto label_1f87d4;
        case 0x1f87d8u: goto label_1f87d8;
        case 0x1f87dcu: goto label_1f87dc;
        case 0x1f87e0u: goto label_1f87e0;
        case 0x1f87e4u: goto label_1f87e4;
        case 0x1f87e8u: goto label_1f87e8;
        case 0x1f87ecu: goto label_1f87ec;
        case 0x1f87f0u: goto label_1f87f0;
        case 0x1f87f4u: goto label_1f87f4;
        case 0x1f87f8u: goto label_1f87f8;
        case 0x1f87fcu: goto label_1f87fc;
        case 0x1f8800u: goto label_1f8800;
        case 0x1f8804u: goto label_1f8804;
        case 0x1f8808u: goto label_1f8808;
        case 0x1f880cu: goto label_1f880c;
        case 0x1f8810u: goto label_1f8810;
        case 0x1f8814u: goto label_1f8814;
        case 0x1f8818u: goto label_1f8818;
        case 0x1f881cu: goto label_1f881c;
        case 0x1f8820u: goto label_1f8820;
        case 0x1f8824u: goto label_1f8824;
        case 0x1f8828u: goto label_1f8828;
        case 0x1f882cu: goto label_1f882c;
        case 0x1f8830u: goto label_1f8830;
        case 0x1f8834u: goto label_1f8834;
        case 0x1f8838u: goto label_1f8838;
        case 0x1f883cu: goto label_1f883c;
        case 0x1f8840u: goto label_1f8840;
        case 0x1f8844u: goto label_1f8844;
        case 0x1f8848u: goto label_1f8848;
        case 0x1f884cu: goto label_1f884c;
        case 0x1f8850u: goto label_1f8850;
        case 0x1f8854u: goto label_1f8854;
        case 0x1f8858u: goto label_1f8858;
        case 0x1f885cu: goto label_1f885c;
        case 0x1f8860u: goto label_1f8860;
        case 0x1f8864u: goto label_1f8864;
        case 0x1f8868u: goto label_1f8868;
        case 0x1f886cu: goto label_1f886c;
        case 0x1f8870u: goto label_1f8870;
        case 0x1f8874u: goto label_1f8874;
        case 0x1f8878u: goto label_1f8878;
        case 0x1f887cu: goto label_1f887c;
        case 0x1f8880u: goto label_1f8880;
        case 0x1f8884u: goto label_1f8884;
        case 0x1f8888u: goto label_1f8888;
        case 0x1f888cu: goto label_1f888c;
        case 0x1f8890u: goto label_1f8890;
        case 0x1f8894u: goto label_1f8894;
        case 0x1f8898u: goto label_1f8898;
        case 0x1f889cu: goto label_1f889c;
        case 0x1f88a0u: goto label_1f88a0;
        case 0x1f88a4u: goto label_1f88a4;
        case 0x1f88a8u: goto label_1f88a8;
        case 0x1f88acu: goto label_1f88ac;
        case 0x1f88b0u: goto label_1f88b0;
        case 0x1f88b4u: goto label_1f88b4;
        case 0x1f88b8u: goto label_1f88b8;
        case 0x1f88bcu: goto label_1f88bc;
        case 0x1f88c0u: goto label_1f88c0;
        case 0x1f88c4u: goto label_1f88c4;
        case 0x1f88c8u: goto label_1f88c8;
        case 0x1f88ccu: goto label_1f88cc;
        case 0x1f88d0u: goto label_1f88d0;
        case 0x1f88d4u: goto label_1f88d4;
        case 0x1f88d8u: goto label_1f88d8;
        case 0x1f88dcu: goto label_1f88dc;
        case 0x1f88e0u: goto label_1f88e0;
        case 0x1f88e4u: goto label_1f88e4;
        case 0x1f88e8u: goto label_1f88e8;
        case 0x1f88ecu: goto label_1f88ec;
        case 0x1f88f0u: goto label_1f88f0;
        case 0x1f88f4u: goto label_1f88f4;
        case 0x1f88f8u: goto label_1f88f8;
        case 0x1f88fcu: goto label_1f88fc;
        case 0x1f8900u: goto label_1f8900;
        case 0x1f8904u: goto label_1f8904;
        case 0x1f8908u: goto label_1f8908;
        case 0x1f890cu: goto label_1f890c;
        case 0x1f8910u: goto label_1f8910;
        case 0x1f8914u: goto label_1f8914;
        case 0x1f8918u: goto label_1f8918;
        case 0x1f891cu: goto label_1f891c;
        case 0x1f8920u: goto label_1f8920;
        case 0x1f8924u: goto label_1f8924;
        case 0x1f8928u: goto label_1f8928;
        case 0x1f892cu: goto label_1f892c;
        case 0x1f8930u: goto label_1f8930;
        case 0x1f8934u: goto label_1f8934;
        case 0x1f8938u: goto label_1f8938;
        case 0x1f893cu: goto label_1f893c;
        case 0x1f8940u: goto label_1f8940;
        case 0x1f8944u: goto label_1f8944;
        case 0x1f8948u: goto label_1f8948;
        case 0x1f894cu: goto label_1f894c;
        case 0x1f8950u: goto label_1f8950;
        case 0x1f8954u: goto label_1f8954;
        case 0x1f8958u: goto label_1f8958;
        case 0x1f895cu: goto label_1f895c;
        case 0x1f8960u: goto label_1f8960;
        case 0x1f8964u: goto label_1f8964;
        case 0x1f8968u: goto label_1f8968;
        case 0x1f896cu: goto label_1f896c;
        case 0x1f8970u: goto label_1f8970;
        case 0x1f8974u: goto label_1f8974;
        case 0x1f8978u: goto label_1f8978;
        case 0x1f897cu: goto label_1f897c;
        case 0x1f8980u: goto label_1f8980;
        case 0x1f8984u: goto label_1f8984;
        case 0x1f8988u: goto label_1f8988;
        case 0x1f898cu: goto label_1f898c;
        case 0x1f8990u: goto label_1f8990;
        case 0x1f8994u: goto label_1f8994;
        case 0x1f8998u: goto label_1f8998;
        case 0x1f899cu: goto label_1f899c;
        case 0x1f89a0u: goto label_1f89a0;
        case 0x1f89a4u: goto label_1f89a4;
        case 0x1f89a8u: goto label_1f89a8;
        case 0x1f89acu: goto label_1f89ac;
        case 0x1f89b0u: goto label_1f89b0;
        case 0x1f89b4u: goto label_1f89b4;
        case 0x1f89b8u: goto label_1f89b8;
        case 0x1f89bcu: goto label_1f89bc;
        case 0x1f89c0u: goto label_1f89c0;
        case 0x1f89c4u: goto label_1f89c4;
        case 0x1f89c8u: goto label_1f89c8;
        case 0x1f89ccu: goto label_1f89cc;
        case 0x1f89d0u: goto label_1f89d0;
        case 0x1f89d4u: goto label_1f89d4;
        case 0x1f89d8u: goto label_1f89d8;
        case 0x1f89dcu: goto label_1f89dc;
        case 0x1f89e0u: goto label_1f89e0;
        case 0x1f89e4u: goto label_1f89e4;
        case 0x1f89e8u: goto label_1f89e8;
        case 0x1f89ecu: goto label_1f89ec;
        case 0x1f89f0u: goto label_1f89f0;
        case 0x1f89f4u: goto label_1f89f4;
        case 0x1f89f8u: goto label_1f89f8;
        case 0x1f89fcu: goto label_1f89fc;
        case 0x1f8a00u: goto label_1f8a00;
        case 0x1f8a04u: goto label_1f8a04;
        case 0x1f8a08u: goto label_1f8a08;
        case 0x1f8a0cu: goto label_1f8a0c;
        case 0x1f8a10u: goto label_1f8a10;
        case 0x1f8a14u: goto label_1f8a14;
        case 0x1f8a18u: goto label_1f8a18;
        case 0x1f8a1cu: goto label_1f8a1c;
        case 0x1f8a20u: goto label_1f8a20;
        case 0x1f8a24u: goto label_1f8a24;
        case 0x1f8a28u: goto label_1f8a28;
        case 0x1f8a2cu: goto label_1f8a2c;
        case 0x1f8a30u: goto label_1f8a30;
        case 0x1f8a34u: goto label_1f8a34;
        case 0x1f8a38u: goto label_1f8a38;
        case 0x1f8a3cu: goto label_1f8a3c;
        case 0x1f8a40u: goto label_1f8a40;
        case 0x1f8a44u: goto label_1f8a44;
        case 0x1f8a48u: goto label_1f8a48;
        case 0x1f8a4cu: goto label_1f8a4c;
        case 0x1f8a50u: goto label_1f8a50;
        case 0x1f8a54u: goto label_1f8a54;
        case 0x1f8a58u: goto label_1f8a58;
        case 0x1f8a5cu: goto label_1f8a5c;
        case 0x1f8a60u: goto label_1f8a60;
        case 0x1f8a64u: goto label_1f8a64;
        case 0x1f8a68u: goto label_1f8a68;
        case 0x1f8a6cu: goto label_1f8a6c;
        case 0x1f8a70u: goto label_1f8a70;
        case 0x1f8a74u: goto label_1f8a74;
        case 0x1f8a78u: goto label_1f8a78;
        case 0x1f8a7cu: goto label_1f8a7c;
        case 0x1f8a80u: goto label_1f8a80;
        case 0x1f8a84u: goto label_1f8a84;
        case 0x1f8a88u: goto label_1f8a88;
        case 0x1f8a8cu: goto label_1f8a8c;
        case 0x1f8a90u: goto label_1f8a90;
        case 0x1f8a94u: goto label_1f8a94;
        case 0x1f8a98u: goto label_1f8a98;
        case 0x1f8a9cu: goto label_1f8a9c;
        case 0x1f8aa0u: goto label_1f8aa0;
        case 0x1f8aa4u: goto label_1f8aa4;
        case 0x1f8aa8u: goto label_1f8aa8;
        case 0x1f8aacu: goto label_1f8aac;
        case 0x1f8ab0u: goto label_1f8ab0;
        case 0x1f8ab4u: goto label_1f8ab4;
        case 0x1f8ab8u: goto label_1f8ab8;
        case 0x1f8abcu: goto label_1f8abc;
        case 0x1f8ac0u: goto label_1f8ac0;
        case 0x1f8ac4u: goto label_1f8ac4;
        case 0x1f8ac8u: goto label_1f8ac8;
        case 0x1f8accu: goto label_1f8acc;
        case 0x1f8ad0u: goto label_1f8ad0;
        case 0x1f8ad4u: goto label_1f8ad4;
        case 0x1f8ad8u: goto label_1f8ad8;
        case 0x1f8adcu: goto label_1f8adc;
        case 0x1f8ae0u: goto label_1f8ae0;
        case 0x1f8ae4u: goto label_1f8ae4;
        case 0x1f8ae8u: goto label_1f8ae8;
        case 0x1f8aecu: goto label_1f8aec;
        case 0x1f8af0u: goto label_1f8af0;
        case 0x1f8af4u: goto label_1f8af4;
        case 0x1f8af8u: goto label_1f8af8;
        case 0x1f8afcu: goto label_1f8afc;
        case 0x1f8b00u: goto label_1f8b00;
        case 0x1f8b04u: goto label_1f8b04;
        case 0x1f8b08u: goto label_1f8b08;
        case 0x1f8b0cu: goto label_1f8b0c;
        case 0x1f8b10u: goto label_1f8b10;
        case 0x1f8b14u: goto label_1f8b14;
        case 0x1f8b18u: goto label_1f8b18;
        case 0x1f8b1cu: goto label_1f8b1c;
        case 0x1f8b20u: goto label_1f8b20;
        case 0x1f8b24u: goto label_1f8b24;
        case 0x1f8b28u: goto label_1f8b28;
        case 0x1f8b2cu: goto label_1f8b2c;
        case 0x1f8b30u: goto label_1f8b30;
        case 0x1f8b34u: goto label_1f8b34;
        case 0x1f8b38u: goto label_1f8b38;
        case 0x1f8b3cu: goto label_1f8b3c;
        case 0x1f8b40u: goto label_1f8b40;
        case 0x1f8b44u: goto label_1f8b44;
        case 0x1f8b48u: goto label_1f8b48;
        case 0x1f8b4cu: goto label_1f8b4c;
        case 0x1f8b50u: goto label_1f8b50;
        case 0x1f8b54u: goto label_1f8b54;
        case 0x1f8b58u: goto label_1f8b58;
        case 0x1f8b5cu: goto label_1f8b5c;
        case 0x1f8b60u: goto label_1f8b60;
        case 0x1f8b64u: goto label_1f8b64;
        case 0x1f8b68u: goto label_1f8b68;
        case 0x1f8b6cu: goto label_1f8b6c;
        case 0x1f8b70u: goto label_1f8b70;
        case 0x1f8b74u: goto label_1f8b74;
        case 0x1f8b78u: goto label_1f8b78;
        case 0x1f8b7cu: goto label_1f8b7c;
        case 0x1f8b80u: goto label_1f8b80;
        case 0x1f8b84u: goto label_1f8b84;
        case 0x1f8b88u: goto label_1f8b88;
        case 0x1f8b8cu: goto label_1f8b8c;
        case 0x1f8b90u: goto label_1f8b90;
        case 0x1f8b94u: goto label_1f8b94;
        case 0x1f8b98u: goto label_1f8b98;
        case 0x1f8b9cu: goto label_1f8b9c;
        case 0x1f8ba0u: goto label_1f8ba0;
        case 0x1f8ba4u: goto label_1f8ba4;
        case 0x1f8ba8u: goto label_1f8ba8;
        case 0x1f8bacu: goto label_1f8bac;
        case 0x1f8bb0u: goto label_1f8bb0;
        case 0x1f8bb4u: goto label_1f8bb4;
        case 0x1f8bb8u: goto label_1f8bb8;
        case 0x1f8bbcu: goto label_1f8bbc;
        case 0x1f8bc0u: goto label_1f8bc0;
        case 0x1f8bc4u: goto label_1f8bc4;
        case 0x1f8bc8u: goto label_1f8bc8;
        case 0x1f8bccu: goto label_1f8bcc;
        case 0x1f8bd0u: goto label_1f8bd0;
        case 0x1f8bd4u: goto label_1f8bd4;
        case 0x1f8bd8u: goto label_1f8bd8;
        case 0x1f8bdcu: goto label_1f8bdc;
        case 0x1f8be0u: goto label_1f8be0;
        case 0x1f8be4u: goto label_1f8be4;
        case 0x1f8be8u: goto label_1f8be8;
        case 0x1f8becu: goto label_1f8bec;
        case 0x1f8bf0u: goto label_1f8bf0;
        case 0x1f8bf4u: goto label_1f8bf4;
        case 0x1f8bf8u: goto label_1f8bf8;
        case 0x1f8bfcu: goto label_1f8bfc;
        case 0x1f8c00u: goto label_1f8c00;
        case 0x1f8c04u: goto label_1f8c04;
        case 0x1f8c08u: goto label_1f8c08;
        case 0x1f8c0cu: goto label_1f8c0c;
        case 0x1f8c10u: goto label_1f8c10;
        case 0x1f8c14u: goto label_1f8c14;
        case 0x1f8c18u: goto label_1f8c18;
        case 0x1f8c1cu: goto label_1f8c1c;
        case 0x1f8c20u: goto label_1f8c20;
        case 0x1f8c24u: goto label_1f8c24;
        case 0x1f8c28u: goto label_1f8c28;
        case 0x1f8c2cu: goto label_1f8c2c;
        case 0x1f8c30u: goto label_1f8c30;
        case 0x1f8c34u: goto label_1f8c34;
        case 0x1f8c38u: goto label_1f8c38;
        case 0x1f8c3cu: goto label_1f8c3c;
        case 0x1f8c40u: goto label_1f8c40;
        case 0x1f8c44u: goto label_1f8c44;
        case 0x1f8c48u: goto label_1f8c48;
        case 0x1f8c4cu: goto label_1f8c4c;
        case 0x1f8c50u: goto label_1f8c50;
        case 0x1f8c54u: goto label_1f8c54;
        case 0x1f8c58u: goto label_1f8c58;
        case 0x1f8c5cu: goto label_1f8c5c;
        case 0x1f8c60u: goto label_1f8c60;
        case 0x1f8c64u: goto label_1f8c64;
        case 0x1f8c68u: goto label_1f8c68;
        case 0x1f8c6cu: goto label_1f8c6c;
        case 0x1f8c70u: goto label_1f8c70;
        case 0x1f8c74u: goto label_1f8c74;
        case 0x1f8c78u: goto label_1f8c78;
        case 0x1f8c7cu: goto label_1f8c7c;
        default: return;
    }

label_1f84b0:
    // 0x1f84b0: 0x10400043  beqz        $v0, . + 4 + (0x43 << 2)
label_1f84b4:
    if (ctx->pc == 0x1F84B4u) {
        ctx->pc = 0x1F84B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F84B0u;
        // 0x1f84b4: 0x510c0  sll         $v0, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F84B8u;
        goto label_1f84b8;
    }
    ctx->pc = 0x1F84B0u;
    {
        const bool branch_taken_0x1f84b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F84B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F84B0u;
        // 0x1f84b4: 0x510c0  sll         $v0, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f84b0) {
            ctx->pc = 0x1F85C0u;
            goto label_1f85c0;
        }
    }
    ctx->pc = 0x1F84B8u;
label_1f84b8:
    // 0x1f84b8: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x1f84b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1f84bc:
    // 0x1f84bc: 0x3c040054  lui         $a0, 0x54
    ctx->pc = 0x1f84bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)84 << 16));
label_1f84c0:
    // 0x1f84c0: 0x451823  subu        $v1, $v0, $a1
    ctx->pc = 0x1f84c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1f84c4:
    // 0x1f84c4: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1f84c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1f84c8:
    // 0x1f84c8: 0x9022490d  lbu         $v0, 0x490D($at)
    ctx->pc = 0x1f84c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18701)));
label_1f84cc:
    // 0x1f84cc: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x1f84ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1f84d0:
    // 0x1f84d0: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x1f84d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
label_1f84d4:
    // 0x1f84d4: 0x2484a688  addiu       $a0, $a0, -0x5978
    ctx->pc = 0x1f84d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944392));
label_1f84d8:
    // 0x1f84d8: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x1f84d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1f84dc:
    // 0x1f84dc: 0x2463c4e0  addiu       $v1, $v1, -0x3B20
    ctx->pc = 0x1f84dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952160));
label_1f84e0:
    // 0x1f84e0: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x1f84e0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_1f84e4:
    // 0x1f84e4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f84e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1f84e8:
    // 0x1f84e8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1f84e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1f84ec:
    // 0x1f84ec: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1f84ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1f84f0:
    // 0x1f84f0: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x1f84f0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_1f84f4:
    // 0x1f84f4: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_1f84f8:
    if (ctx->pc == 0x1F84F8u) {
        ctx->pc = 0x1F84F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F84F4u;
        // 0x1f84f8: 0x83082a  slt         $at, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F84FCu;
        goto label_1f84fc;
    }
    ctx->pc = 0x1F84F4u;
    {
        const bool branch_taken_0x1f84f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F84F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F84F4u;
        // 0x1f84f8: 0x83082a  slt         $at, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f84f4) {
            ctx->pc = 0x1F8508u;
            goto label_1f8508;
        }
    }
    ctx->pc = 0x1F84FCu;
label_1f84fc:
    // 0x1f84fc: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x1f84fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_1f8500:
    // 0x1f8500: 0x10000004  b           . + 4 + (0x4 << 2)
label_1f8504:
    if (ctx->pc == 0x1F8504u) {
        ctx->pc = 0x1F8504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8500u;
        // 0x1f8504: 0xa0a30000  sb          $v1, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8508u;
        goto label_1f8508;
    }
    ctx->pc = 0x1F8500u;
    {
        const bool branch_taken_0x1f8500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8500u;
        // 0x1f8504: 0xa0a30000  sb          $v1, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8500) {
            ctx->pc = 0x1F8514u;
            goto label_1f8514;
        }
    }
    ctx->pc = 0x1F8508u;
label_1f8508:
    // 0x1f8508: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_1f850c:
    if (ctx->pc == 0x1F850Cu) {
        ctx->pc = 0x1F850Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8508u;
        // 0x1f850c: 0x24830001  addiu       $v1, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8510u;
        goto label_1f8510;
    }
    ctx->pc = 0x1F8508u;
    {
        const bool branch_taken_0x1f8508 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F850Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8508u;
        // 0x1f850c: 0x24830001  addiu       $v1, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8508) {
            ctx->pc = 0x1F8514u;
            goto label_1f8514;
        }
    }
    ctx->pc = 0x1F8510u;
label_1f8510:
    // 0x1f8510: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x1f8510u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
label_1f8514:
    // 0x1f8514: 0x92060010  lbu         $a2, 0x10($s0)
    ctx->pc = 0x1f8514u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
label_1f8518:
    // 0x1f8518: 0x3c040054  lui         $a0, 0x54
    ctx->pc = 0x1f8518u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)84 << 16));
label_1f851c:
    // 0x1f851c: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x1f851cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
label_1f8520:
    // 0x1f8520: 0x2484a689  addiu       $a0, $a0, -0x5977
    ctx->pc = 0x1f8520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944393));
label_1f8524:
    // 0x1f8524: 0x2463c4e1  addiu       $v1, $v1, -0x3B1F
    ctx->pc = 0x1f8524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952161));
label_1f8528:
    // 0x1f8528: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1f8528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1f852c:
    // 0x1f852c: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1f852cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1f8530:
    // 0x1f8530: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x1f8530u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_1f8534:
    // 0x1f8534: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x1f8534u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1f8538:
    // 0x1f8538: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1f8538u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1f853c:
    // 0x1f853c: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x1f853cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1f8540:
    // 0x1f8540: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x1f8540u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_1f8544:
    // 0x1f8544: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x1f8544u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_1f8548:
    // 0x1f8548: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_1f854c:
    if (ctx->pc == 0x1F854Cu) {
        ctx->pc = 0x1F854Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8548u;
        // 0x1f854c: 0x83082a  slt         $at, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8550u;
        goto label_1f8550;
    }
    ctx->pc = 0x1F8548u;
    {
        const bool branch_taken_0x1f8548 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F854Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8548u;
        // 0x1f854c: 0x83082a  slt         $at, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8548) {
            ctx->pc = 0x1F855Cu;
            goto label_1f855c;
        }
    }
    ctx->pc = 0x1F8550u;
label_1f8550:
    // 0x1f8550: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x1f8550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_1f8554:
    // 0x1f8554: 0x10000004  b           . + 4 + (0x4 << 2)
label_1f8558:
    if (ctx->pc == 0x1F8558u) {
        ctx->pc = 0x1F8558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8554u;
        // 0x1f8558: 0xa0a30000  sb          $v1, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F855Cu;
        goto label_1f855c;
    }
    ctx->pc = 0x1F8554u;
    {
        const bool branch_taken_0x1f8554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8554u;
        // 0x1f8558: 0xa0a30000  sb          $v1, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8554) {
            ctx->pc = 0x1F8568u;
            goto label_1f8568;
        }
    }
    ctx->pc = 0x1F855Cu;
label_1f855c:
    // 0x1f855c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_1f8560:
    if (ctx->pc == 0x1F8560u) {
        ctx->pc = 0x1F8560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F855Cu;
        // 0x1f8560: 0x24830001  addiu       $v1, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8564u;
        goto label_1f8564;
    }
    ctx->pc = 0x1F855Cu;
    {
        const bool branch_taken_0x1f855c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F855Cu;
        // 0x1f8560: 0x24830001  addiu       $v1, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f855c) {
            ctx->pc = 0x1F8568u;
            goto label_1f8568;
        }
    }
    ctx->pc = 0x1F8564u;
label_1f8564:
    // 0x1f8564: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x1f8564u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
label_1f8568:
    // 0x1f8568: 0x92050010  lbu         $a1, 0x10($s0)
    ctx->pc = 0x1f8568u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
label_1f856c:
    // 0x1f856c: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x1f856cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
label_1f8570:
    // 0x1f8570: 0x2463c4e2  addiu       $v1, $v1, -0x3B1E
    ctx->pc = 0x1f8570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952162));
label_1f8574:
    // 0x1f8574: 0x3c040054  lui         $a0, 0x54
    ctx->pc = 0x1f8574u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)84 << 16));
label_1f8578:
    // 0x1f8578: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1f8578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1f857c:
    // 0x1f857c: 0x2484a68a  addiu       $a0, $a0, -0x5976
    ctx->pc = 0x1f857cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944394));
label_1f8580:
    // 0x1f8580: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1f8580u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1f8584:
    // 0x1f8584: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x1f8584u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1f8588:
    // 0x1f8588: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x1f8588u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1f858c:
    // 0x1f858c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1f858cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1f8590:
    // 0x1f8590: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1f8590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1f8594:
    // 0x1f8594: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x1f8594u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_1f8598:
    // 0x1f8598: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x1f8598u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1f859c:
    // 0x1f859c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_1f85a0:
    if (ctx->pc == 0x1F85A0u) {
        ctx->pc = 0x1F85A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F859Cu;
        // 0x1f85a0: 0x62082a  slt         $at, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F85A4u;
        goto label_1f85a4;
    }
    ctx->pc = 0x1F859Cu;
    {
        const bool branch_taken_0x1f859c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F85A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F859Cu;
        // 0x1f85a0: 0x62082a  slt         $at, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f859c) {
            ctx->pc = 0x1F85B0u;
            goto label_1f85b0;
        }
    }
    ctx->pc = 0x1F85A4u;
label_1f85a4:
    // 0x1f85a4: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x1f85a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1f85a8:
    // 0x1f85a8: 0x10000045  b           . + 4 + (0x45 << 2)
label_1f85ac:
    if (ctx->pc == 0x1F85ACu) {
        ctx->pc = 0x1F85ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F85A8u;
        // 0x1f85ac: 0xa0820000  sb          $v0, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F85B0u;
        goto label_1f85b0;
    }
    ctx->pc = 0x1F85A8u;
    {
        const bool branch_taken_0x1f85a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F85ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F85A8u;
        // 0x1f85ac: 0xa0820000  sb          $v0, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f85a8) {
            ctx->pc = 0x1F86C0u;
            goto label_1f86c0;
        }
    }
    ctx->pc = 0x1F85B0u;
label_1f85b0:
    // 0x1f85b0: 0x10200043  beqz        $at, . + 4 + (0x43 << 2)
label_1f85b4:
    if (ctx->pc == 0x1F85B4u) {
        ctx->pc = 0x1F85B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F85B0u;
        // 0x1f85b4: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F85B8u;
        goto label_1f85b8;
    }
    ctx->pc = 0x1F85B0u;
    {
        const bool branch_taken_0x1f85b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F85B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F85B0u;
        // 0x1f85b4: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f85b0) {
            ctx->pc = 0x1F86C0u;
            goto label_1f86c0;
        }
    }
    ctx->pc = 0x1F85B8u;
label_1f85b8:
    // 0x1f85b8: 0x10000041  b           . + 4 + (0x41 << 2)
label_1f85bc:
    if (ctx->pc == 0x1F85BCu) {
        ctx->pc = 0x1F85BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F85B8u;
        // 0x1f85bc: 0xa0820000  sb          $v0, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F85C0u;
        goto label_1f85c0;
    }
    ctx->pc = 0x1F85B8u;
    {
        const bool branch_taken_0x1f85b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F85BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F85B8u;
        // 0x1f85bc: 0xa0820000  sb          $v0, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f85b8) {
            ctx->pc = 0x1F86C0u;
            goto label_1f86c0;
        }
    }
    ctx->pc = 0x1F85C0u;
label_1f85c0:
    // 0x1f85c0: 0x3c040054  lui         $a0, 0x54
    ctx->pc = 0x1f85c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)84 << 16));
label_1f85c4:
    // 0x1f85c4: 0x451823  subu        $v1, $v0, $a1
    ctx->pc = 0x1f85c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1f85c8:
    // 0x1f85c8: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1f85c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1f85cc:
    // 0x1f85cc: 0x9022490d  lbu         $v0, 0x490D($at)
    ctx->pc = 0x1f85ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18701)));
label_1f85d0:
    // 0x1f85d0: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x1f85d0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1f85d4:
    // 0x1f85d4: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x1f85d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
label_1f85d8:
    // 0x1f85d8: 0x2484a688  addiu       $a0, $a0, -0x5978
    ctx->pc = 0x1f85d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944392));
label_1f85dc:
    // 0x1f85dc: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x1f85dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1f85e0:
    // 0x1f85e0: 0x2463c480  addiu       $v1, $v1, -0x3B80
    ctx->pc = 0x1f85e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952064));
label_1f85e4:
    // 0x1f85e4: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x1f85e4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_1f85e8:
    // 0x1f85e8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f85e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1f85ec:
    // 0x1f85ec: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1f85ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1f85f0:
    // 0x1f85f0: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1f85f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1f85f4:
    // 0x1f85f4: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x1f85f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_1f85f8:
    // 0x1f85f8: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_1f85fc:
    if (ctx->pc == 0x1F85FCu) {
        ctx->pc = 0x1F85FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F85F8u;
        // 0x1f85fc: 0x83082a  slt         $at, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8600u;
        goto label_1f8600;
    }
    ctx->pc = 0x1F85F8u;
    {
        const bool branch_taken_0x1f85f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F85FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F85F8u;
        // 0x1f85fc: 0x83082a  slt         $at, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f85f8) {
            ctx->pc = 0x1F860Cu;
            goto label_1f860c;
        }
    }
    ctx->pc = 0x1F8600u;
label_1f8600:
    // 0x1f8600: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x1f8600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_1f8604:
    // 0x1f8604: 0x10000004  b           . + 4 + (0x4 << 2)
label_1f8608:
    if (ctx->pc == 0x1F8608u) {
        ctx->pc = 0x1F8608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8604u;
        // 0x1f8608: 0xa0a30000  sb          $v1, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F860Cu;
        goto label_1f860c;
    }
    ctx->pc = 0x1F8604u;
    {
        const bool branch_taken_0x1f8604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8604u;
        // 0x1f8608: 0xa0a30000  sb          $v1, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8604) {
            ctx->pc = 0x1F8618u;
            goto label_1f8618;
        }
    }
    ctx->pc = 0x1F860Cu;
label_1f860c:
    // 0x1f860c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_1f8610:
    if (ctx->pc == 0x1F8610u) {
        ctx->pc = 0x1F8610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F860Cu;
        // 0x1f8610: 0x24830001  addiu       $v1, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8614u;
        goto label_1f8614;
    }
    ctx->pc = 0x1F860Cu;
    {
        const bool branch_taken_0x1f860c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F860Cu;
        // 0x1f8610: 0x24830001  addiu       $v1, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f860c) {
            ctx->pc = 0x1F8618u;
            goto label_1f8618;
        }
    }
    ctx->pc = 0x1F8614u;
label_1f8614:
    // 0x1f8614: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x1f8614u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
label_1f8618:
    // 0x1f8618: 0x92060010  lbu         $a2, 0x10($s0)
    ctx->pc = 0x1f8618u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
label_1f861c:
    // 0x1f861c: 0x3c040054  lui         $a0, 0x54
    ctx->pc = 0x1f861cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)84 << 16));
label_1f8620:
    // 0x1f8620: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x1f8620u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
label_1f8624:
    // 0x1f8624: 0x2484a689  addiu       $a0, $a0, -0x5977
    ctx->pc = 0x1f8624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944393));
label_1f8628:
    // 0x1f8628: 0x2463c481  addiu       $v1, $v1, -0x3B7F
    ctx->pc = 0x1f8628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952065));
label_1f862c:
    // 0x1f862c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1f862cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1f8630:
    // 0x1f8630: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1f8630u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1f8634:
    // 0x1f8634: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x1f8634u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_1f8638:
    // 0x1f8638: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x1f8638u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1f863c:
    // 0x1f863c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1f863cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1f8640:
    // 0x1f8640: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x1f8640u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1f8644:
    // 0x1f8644: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x1f8644u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_1f8648:
    // 0x1f8648: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x1f8648u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_1f864c:
    // 0x1f864c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_1f8650:
    if (ctx->pc == 0x1F8650u) {
        ctx->pc = 0x1F8650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F864Cu;
        // 0x1f8650: 0x83082a  slt         $at, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8654u;
        goto label_1f8654;
    }
    ctx->pc = 0x1F864Cu;
    {
        const bool branch_taken_0x1f864c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F864Cu;
        // 0x1f8650: 0x83082a  slt         $at, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f864c) {
            ctx->pc = 0x1F8660u;
            goto label_1f8660;
        }
    }
    ctx->pc = 0x1F8654u;
label_1f8654:
    // 0x1f8654: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x1f8654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_1f8658:
    // 0x1f8658: 0x10000004  b           . + 4 + (0x4 << 2)
label_1f865c:
    if (ctx->pc == 0x1F865Cu) {
        ctx->pc = 0x1F865Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8658u;
        // 0x1f865c: 0xa0a30000  sb          $v1, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8660u;
        goto label_1f8660;
    }
    ctx->pc = 0x1F8658u;
    {
        const bool branch_taken_0x1f8658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F865Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8658u;
        // 0x1f865c: 0xa0a30000  sb          $v1, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8658) {
            ctx->pc = 0x1F866Cu;
            goto label_1f866c;
        }
    }
    ctx->pc = 0x1F8660u;
label_1f8660:
    // 0x1f8660: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_1f8664:
    if (ctx->pc == 0x1F8664u) {
        ctx->pc = 0x1F8664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8660u;
        // 0x1f8664: 0x24830001  addiu       $v1, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8668u;
        goto label_1f8668;
    }
    ctx->pc = 0x1F8660u;
    {
        const bool branch_taken_0x1f8660 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8660u;
        // 0x1f8664: 0x24830001  addiu       $v1, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8660) {
            ctx->pc = 0x1F866Cu;
            goto label_1f866c;
        }
    }
    ctx->pc = 0x1F8668u;
label_1f8668:
    // 0x1f8668: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x1f8668u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
label_1f866c:
    // 0x1f866c: 0x92050010  lbu         $a1, 0x10($s0)
    ctx->pc = 0x1f866cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
label_1f8670:
    // 0x1f8670: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x1f8670u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
label_1f8674:
    // 0x1f8674: 0x2463c482  addiu       $v1, $v1, -0x3B7E
    ctx->pc = 0x1f8674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952066));
label_1f8678:
    // 0x1f8678: 0x3c040054  lui         $a0, 0x54
    ctx->pc = 0x1f8678u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)84 << 16));
label_1f867c:
    // 0x1f867c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1f867cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1f8680:
    // 0x1f8680: 0x2484a68a  addiu       $a0, $a0, -0x5976
    ctx->pc = 0x1f8680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944394));
label_1f8684:
    // 0x1f8684: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1f8684u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1f8688:
    // 0x1f8688: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x1f8688u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1f868c:
    // 0x1f868c: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x1f868cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1f8690:
    // 0x1f8690: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1f8690u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1f8694:
    // 0x1f8694: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1f8694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1f8698:
    // 0x1f8698: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x1f8698u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_1f869c:
    // 0x1f869c: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x1f869cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1f86a0:
    // 0x1f86a0: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_1f86a4:
    if (ctx->pc == 0x1F86A4u) {
        ctx->pc = 0x1F86A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F86A0u;
        // 0x1f86a4: 0x62082a  slt         $at, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F86A8u;
        goto label_1f86a8;
    }
    ctx->pc = 0x1F86A0u;
    {
        const bool branch_taken_0x1f86a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F86A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F86A0u;
        // 0x1f86a4: 0x62082a  slt         $at, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f86a0) {
            ctx->pc = 0x1F86B4u;
            goto label_1f86b4;
        }
    }
    ctx->pc = 0x1F86A8u;
label_1f86a8:
    // 0x1f86a8: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x1f86a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1f86ac:
    // 0x1f86ac: 0x10000004  b           . + 4 + (0x4 << 2)
label_1f86b0:
    if (ctx->pc == 0x1F86B0u) {
        ctx->pc = 0x1F86B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F86ACu;
        // 0x1f86b0: 0xa0820000  sb          $v0, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F86B4u;
        goto label_1f86b4;
    }
    ctx->pc = 0x1F86ACu;
    {
        const bool branch_taken_0x1f86ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F86B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F86ACu;
        // 0x1f86b0: 0xa0820000  sb          $v0, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f86ac) {
            ctx->pc = 0x1F86C0u;
            goto label_1f86c0;
        }
    }
    ctx->pc = 0x1F86B4u;
label_1f86b4:
    // 0x1f86b4: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_1f86b8:
    if (ctx->pc == 0x1F86B8u) {
        ctx->pc = 0x1F86B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F86B4u;
        // 0x1f86b8: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F86BCu;
        goto label_1f86bc;
    }
    ctx->pc = 0x1F86B4u;
    {
        const bool branch_taken_0x1f86b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F86B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F86B4u;
        // 0x1f86b8: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f86b4) {
            ctx->pc = 0x1F86C0u;
            goto label_1f86c0;
        }
    }
    ctx->pc = 0x1F86BCu;
label_1f86bc:
    // 0x1f86bc: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x1f86bcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_1f86c0:
    // 0x1f86c0: 0x92070010  lbu         $a3, 0x10($s0)
    ctx->pc = 0x1f86c0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
label_1f86c4:
    // 0x1f86c4: 0x3c040029  lui         $a0, 0x29
    ctx->pc = 0x1f86c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)41 << 16));
label_1f86c8:
    // 0x1f86c8: 0x27838278  addiu       $v1, $gp, -0x7D88
    ctx->pc = 0x1f86c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935160));
label_1f86cc:
    // 0x1f86cc: 0x2484c55c  addiu       $a0, $a0, -0x3AA4
    ctx->pc = 0x1f86ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952284));
label_1f86d0:
    // 0x1f86d0: 0x8f828590  lw          $v0, -0x7A70($gp)
    ctx->pc = 0x1f86d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_1f86d4:
    // 0x1f86d4: 0x72880  sll         $a1, $a3, 2
    ctx->pc = 0x1f86d4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_1f86d8:
    // 0x1f86d8: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x1f86d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1f86dc:
    // 0x1f86dc: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x1f86dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f86e0:
    // 0x1f86e0: 0x30430400  andi        $v1, $v0, 0x400
    ctx->pc = 0x1f86e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
label_1f86e4:
    // 0x1f86e4: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x1f86e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_1f86e8:
    // 0x1f86e8: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1f86e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1f86ec:
    // 0x1f86ec: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x1f86ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_1f86f0:
    // 0x1f86f0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1f86f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1f86f4:
    // 0x1f86f4: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x1f86f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f86f8:
    // 0x1f86f8: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_1f86fc:
    if (ctx->pc == 0x1F86FCu) {
        ctx->pc = 0x1F86FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F86F8u;
        // 0x1f86fc: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8700u;
        goto label_1f8700;
    }
    ctx->pc = 0x1F86F8u;
    {
        const bool branch_taken_0x1f86f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F86FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F86F8u;
        // 0x1f86fc: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f86f8) {
            ctx->pc = 0x1F8728u;
            goto label_1f8728;
        }
    }
    ctx->pc = 0x1F8700u;
label_1f8700:
    // 0x1f8700: 0x30440004  andi        $a0, $v0, 0x4
    ctx->pc = 0x1f8700u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_1f8704:
    // 0x1f8704: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_1f8708:
    if (ctx->pc == 0x1F8708u) {
        ctx->pc = 0x1F8708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8704u;
        // 0x1f8708: 0x3c040002  lui         $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F870Cu;
        goto label_1f870c;
    }
    ctx->pc = 0x1F8704u;
    {
        const bool branch_taken_0x1f8704 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8704u;
        // 0x1f8708: 0x3c040002  lui         $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8704) {
            ctx->pc = 0x1F871Cu;
            goto label_1f871c;
        }
    }
    ctx->pc = 0x1F870Cu;
label_1f870c:
    // 0x1f870c: 0x30440020  andi        $a0, $v0, 0x20
    ctx->pc = 0x1f870cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_1f8710:
    // 0x1f8710: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_1f8714:
    if (ctx->pc == 0x1F8714u) {
        ctx->pc = 0x1F8714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8710u;
        // 0x1f8714: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8718u;
        goto label_1f8718;
    }
    ctx->pc = 0x1F8710u;
    {
        const bool branch_taken_0x1f8710 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8710u;
        // 0x1f8714: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8710) {
            ctx->pc = 0x1F872Cu;
            goto label_1f872c;
        }
    }
    ctx->pc = 0x1F8718u;
label_1f8718:
    // 0x1f8718: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x1f8718u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
label_1f871c:
    // 0x1f871c: 0x442024  and         $a0, $v0, $a0
    ctx->pc = 0x1f871cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_1f8720:
    // 0x1f8720: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
label_1f8724:
    if (ctx->pc == 0x1F8724u) {
        ctx->pc = 0x1F8724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8720u;
        // 0x1f8724: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8728u;
        goto label_1f8728;
    }
    ctx->pc = 0x1F8720u;
    {
        const bool branch_taken_0x1f8720 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8720u;
        // 0x1f8724: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8720) {
            ctx->pc = 0x1F872Cu;
            goto label_1f872c;
        }
    }
    ctx->pc = 0x1F8728u;
label_1f8728:
    // 0x1f8728: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f8728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f872c:
    // 0x1f872c: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
label_1f8730:
    if (ctx->pc == 0x1F8730u) {
        ctx->pc = 0x1F8730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F872Cu;
        // 0x1f8730: 0x728c0  sll         $a1, $a3, 3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8734u;
        goto label_1f8734;
    }
    ctx->pc = 0x1F872Cu;
    {
        const bool branch_taken_0x1f872c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F872Cu;
        // 0x1f8730: 0x728c0  sll         $a1, $a3, 3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f872c) {
            ctx->pc = 0x1F875Cu;
            goto label_1f875c;
        }
    }
    ctx->pc = 0x1F8734u;
label_1f8734:
    // 0x1f8734: 0x3c04451c  lui         $a0, 0x451C
    ctx->pc = 0x1f8734u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17692 << 16));
label_1f8738:
    // 0x1f8738: 0x34844000  ori         $a0, $a0, 0x4000
    ctx->pc = 0x1f8738u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
label_1f873c:
    // 0x1f873c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1f873cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1f8740:
    // 0x1f8740: 0x0  nop
    ctx->pc = 0x1f8740u;
    // NOP
label_1f8744:
    // 0x1f8744: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1f8744u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f8748:
    // 0x1f8748: 0x0  nop
    ctx->pc = 0x1f8748u;
    // NOP
label_1f874c:
    // 0x1f874c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_1f8750:
    if (ctx->pc == 0x1F8750u) {
        ctx->pc = 0x1F8754u;
        goto label_1f8754;
    }
    ctx->pc = 0x1F874Cu;
    {
        const bool branch_taken_0x1f874c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f874c) {
            ctx->pc = 0x1F8758u;
            goto label_1f8758;
        }
    }
    ctx->pc = 0x1F8754u;
label_1f8754:
    // 0x1f8754: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x1f8754u;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
label_1f8758:
    // 0x1f8758: 0x728c0  sll         $a1, $a3, 3
    ctx->pc = 0x1f8758u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_1f875c:
    // 0x1f875c: 0x3c040054  lui         $a0, 0x54
    ctx->pc = 0x1f875cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)84 << 16));
label_1f8760:
    // 0x1f8760: 0xa72823  subu        $a1, $a1, $a3
    ctx->pc = 0x1f8760u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_1f8764:
    // 0x1f8764: 0x2484a678  addiu       $a0, $a0, -0x5988
    ctx->pc = 0x1f8764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944376));
label_1f8768:
    // 0x1f8768: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1f8768u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1f876c:
    // 0x1f876c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1f876cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1f8770:
    // 0x1f8770: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x1f8770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f8774:
    // 0x1f8774: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1f8774u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f8778:
    // 0x1f8778: 0x0  nop
    ctx->pc = 0x1f8778u;
    // NOP
label_1f877c:
    // 0x1f877c: 0x4501003f  bc1t        . + 4 + (0x3F << 2)
label_1f8780:
    if (ctx->pc == 0x1F8780u) {
        ctx->pc = 0x1F8784u;
        goto label_1f8784;
    }
    ctx->pc = 0x1F877Cu;
    {
        const bool branch_taken_0x1f877c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f877c) {
            ctx->pc = 0x1F887Cu;
            goto label_1f887c;
        }
    }
    ctx->pc = 0x1F8784u;
label_1f8784:
    // 0x1f8784: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_1f8788:
    if (ctx->pc == 0x1F8788u) {
        ctx->pc = 0x1F8788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8784u;
        // 0x1f8788: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F878Cu;
        goto label_1f878c;
    }
    ctx->pc = 0x1F8784u;
    {
        const bool branch_taken_0x1f8784 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8784u;
        // 0x1f8788: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8784) {
            ctx->pc = 0x1F87B4u;
            goto label_1f87b4;
        }
    }
    ctx->pc = 0x1F878Cu;
label_1f878c:
    // 0x1f878c: 0x30450004  andi        $a1, $v0, 0x4
    ctx->pc = 0x1f878cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_1f8790:
    // 0x1f8790: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_1f8794:
    if (ctx->pc == 0x1F8794u) {
        ctx->pc = 0x1F8794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8790u;
        // 0x1f8794: 0x3c050002  lui         $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8798u;
        goto label_1f8798;
    }
    ctx->pc = 0x1F8790u;
    {
        const bool branch_taken_0x1f8790 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8790u;
        // 0x1f8794: 0x3c050002  lui         $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8790) {
            ctx->pc = 0x1F87A8u;
            goto label_1f87a8;
        }
    }
    ctx->pc = 0x1F8798u;
label_1f8798:
    // 0x1f8798: 0x30450020  andi        $a1, $v0, 0x20
    ctx->pc = 0x1f8798u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_1f879c:
    // 0x1f879c: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_1f87a0:
    if (ctx->pc == 0x1F87A0u) {
        ctx->pc = 0x1F87A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F879Cu;
        // 0x1f87a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F87A4u;
        goto label_1f87a4;
    }
    ctx->pc = 0x1F879Cu;
    {
        const bool branch_taken_0x1f879c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F87A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F879Cu;
        // 0x1f87a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f879c) {
            ctx->pc = 0x1F87B8u;
            goto label_1f87b8;
        }
    }
    ctx->pc = 0x1F87A4u;
label_1f87a4:
    // 0x1f87a4: 0x3c050002  lui         $a1, 0x2
    ctx->pc = 0x1f87a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
label_1f87a8:
    // 0x1f87a8: 0x452824  and         $a1, $v0, $a1
    ctx->pc = 0x1f87a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
label_1f87ac:
    // 0x1f87ac: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
label_1f87b0:
    if (ctx->pc == 0x1F87B0u) {
        ctx->pc = 0x1F87B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F87ACu;
        // 0x1f87b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F87B4u;
        goto label_1f87b4;
    }
    ctx->pc = 0x1F87ACu;
    {
        const bool branch_taken_0x1f87ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F87B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F87ACu;
        // 0x1f87b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f87ac) {
            ctx->pc = 0x1F87B8u;
            goto label_1f87b8;
        }
    }
    ctx->pc = 0x1F87B4u;
label_1f87b4:
    // 0x1f87b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f87b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f87b8:
    // 0x1f87b8: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_1f87bc:
    if (ctx->pc == 0x1F87BCu) {
        ctx->pc = 0x1F87C0u;
        goto label_1f87c0;
    }
    ctx->pc = 0x1F87B8u;
    {
        const bool branch_taken_0x1f87b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f87b8) {
            ctx->pc = 0x1F87E4u;
            goto label_1f87e4;
        }
    }
    ctx->pc = 0x1F87C0u;
label_1f87c0:
    // 0x1f87c0: 0x3c05451c  lui         $a1, 0x451C
    ctx->pc = 0x1f87c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17692 << 16));
label_1f87c4:
    // 0x1f87c4: 0x34a54000  ori         $a1, $a1, 0x4000
    ctx->pc = 0x1f87c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16384);
label_1f87c8:
    // 0x1f87c8: 0x44851800  mtc1        $a1, $f3
    ctx->pc = 0x1f87c8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1f87cc:
    // 0x1f87cc: 0x0  nop
    ctx->pc = 0x1f87ccu;
    // NOP
label_1f87d0:
    // 0x1f87d0: 0x46031036  c.le.s      $f2, $f3
    ctx->pc = 0x1f87d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f87d4:
    // 0x1f87d4: 0x0  nop
    ctx->pc = 0x1f87d4u;
    // NOP
label_1f87d8:
    // 0x1f87d8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_1f87dc:
    if (ctx->pc == 0x1F87DCu) {
        ctx->pc = 0x1F87E0u;
        goto label_1f87e0;
    }
    ctx->pc = 0x1F87D8u;
    {
        const bool branch_taken_0x1f87d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f87d8) {
            ctx->pc = 0x1F87E4u;
            goto label_1f87e4;
        }
    }
    ctx->pc = 0x1F87E0u;
label_1f87e0:
    // 0x1f87e0: 0x46001806  mov.s       $f0, $f3
    ctx->pc = 0x1f87e0u;
    ctx->f[0] = FPU_MOV_S(ctx->f[3]);
label_1f87e4:
    // 0x1f87e4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1f87e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1f87e8:
    // 0x1f87e8: 0x3c0540a0  lui         $a1, 0x40A0
    ctx->pc = 0x1f87e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16544 << 16));
label_1f87ec:
    // 0x1f87ec: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x1f87ecu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1f87f0:
    // 0x1f87f0: 0x0  nop
    ctx->pc = 0x1f87f0u;
    // NOP
label_1f87f4:
    // 0x1f87f4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1f87f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f87f8:
    // 0x1f87f8: 0x0  nop
    ctx->pc = 0x1f87f8u;
    // NOP
label_1f87fc:
    // 0x1f87fc: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_1f8800:
    if (ctx->pc == 0x1F8800u) {
        ctx->pc = 0x1F8804u;
        goto label_1f8804;
    }
    ctx->pc = 0x1F87FCu;
    {
        const bool branch_taken_0x1f87fc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f87fc) {
            ctx->pc = 0x1F8814u;
            goto label_1f8814;
        }
    }
    ctx->pc = 0x1F8804u;
label_1f8804:
    // 0x1f8804: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x1f8804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f8808:
    // 0x1f8808: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1f8808u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1f880c:
    // 0x1f880c: 0x10000077  b           . + 4 + (0x77 << 2)
label_1f8810:
    if (ctx->pc == 0x1F8810u) {
        ctx->pc = 0x1F8810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F880Cu;
        // 0x1f8810: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8814u;
        goto label_1f8814;
    }
    ctx->pc = 0x1F880Cu;
    {
        const bool branch_taken_0x1f880c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F880Cu;
        // 0x1f8810: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f880c) {
            ctx->pc = 0x1F89ECu;
            goto label_1f89ec;
        }
    }
    ctx->pc = 0x1F8814u;
label_1f8814:
    // 0x1f8814: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_1f8818:
    if (ctx->pc == 0x1F8818u) {
        ctx->pc = 0x1F8818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8814u;
        // 0x1f8818: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F881Cu;
        goto label_1f881c;
    }
    ctx->pc = 0x1F8814u;
    {
        const bool branch_taken_0x1f8814 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8814u;
        // 0x1f8818: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8814) {
            ctx->pc = 0x1F8848u;
            goto label_1f8848;
        }
    }
    ctx->pc = 0x1F881Cu;
label_1f881c:
    // 0x1f881c: 0x30450004  andi        $a1, $v0, 0x4
    ctx->pc = 0x1f881cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_1f8820:
    // 0x1f8820: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_1f8824:
    if (ctx->pc == 0x1F8824u) {
        ctx->pc = 0x1F8824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8820u;
        // 0x1f8824: 0x3c050002  lui         $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8828u;
        goto label_1f8828;
    }
    ctx->pc = 0x1F8820u;
    {
        const bool branch_taken_0x1f8820 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8820u;
        // 0x1f8824: 0x3c050002  lui         $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8820) {
            ctx->pc = 0x1F8838u;
            goto label_1f8838;
        }
    }
    ctx->pc = 0x1F8828u;
label_1f8828:
    // 0x1f8828: 0x30450020  andi        $a1, $v0, 0x20
    ctx->pc = 0x1f8828u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_1f882c:
    // 0x1f882c: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_1f8830:
    if (ctx->pc == 0x1F8830u) {
        ctx->pc = 0x1F8834u;
        goto label_1f8834;
    }
    ctx->pc = 0x1F882Cu;
    {
        const bool branch_taken_0x1f882c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f882c) {
            ctx->pc = 0x1F8844u;
            goto label_1f8844;
        }
    }
    ctx->pc = 0x1F8834u;
label_1f8834:
    // 0x1f8834: 0x3c050002  lui         $a1, 0x2
    ctx->pc = 0x1f8834u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
label_1f8838:
    // 0x1f8838: 0x452824  and         $a1, $v0, $a1
    ctx->pc = 0x1f8838u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
label_1f883c:
    // 0x1f883c: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
label_1f8840:
    if (ctx->pc == 0x1F8840u) {
        ctx->pc = 0x1F8840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F883Cu;
        // 0x1f8840: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8844u;
        goto label_1f8844;
    }
    ctx->pc = 0x1F883Cu;
    {
        const bool branch_taken_0x1f883c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F883Cu;
        // 0x1f8840: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f883c) {
            ctx->pc = 0x1F8848u;
            goto label_1f8848;
        }
    }
    ctx->pc = 0x1F8844u;
label_1f8844:
    // 0x1f8844: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f8844u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f8848:
    // 0x1f8848: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_1f884c:
    if (ctx->pc == 0x1F884Cu) {
        ctx->pc = 0x1F8850u;
        goto label_1f8850;
    }
    ctx->pc = 0x1F8848u;
    {
        const bool branch_taken_0x1f8848 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f8848) {
            ctx->pc = 0x1F8874u;
            goto label_1f8874;
        }
    }
    ctx->pc = 0x1F8850u;
label_1f8850:
    // 0x1f8850: 0x3c05451c  lui         $a1, 0x451C
    ctx->pc = 0x1f8850u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17692 << 16));
label_1f8854:
    // 0x1f8854: 0x34a54000  ori         $a1, $a1, 0x4000
    ctx->pc = 0x1f8854u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16384);
label_1f8858:
    // 0x1f8858: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1f8858u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f885c:
    // 0x1f885c: 0x0  nop
    ctx->pc = 0x1f885cu;
    // NOP
label_1f8860:
    // 0x1f8860: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x1f8860u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f8864:
    // 0x1f8864: 0x0  nop
    ctx->pc = 0x1f8864u;
    // NOP
label_1f8868:
    // 0x1f8868: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_1f886c:
    if (ctx->pc == 0x1F886Cu) {
        ctx->pc = 0x1F8870u;
        goto label_1f8870;
    }
    ctx->pc = 0x1F8868u;
    {
        const bool branch_taken_0x1f8868 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f8868) {
            ctx->pc = 0x1F8874u;
            goto label_1f8874;
        }
    }
    ctx->pc = 0x1F8870u;
label_1f8870:
    // 0x1f8870: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x1f8870u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_1f8874:
    // 0x1f8874: 0x1000005d  b           . + 4 + (0x5D << 2)
label_1f8878:
    if (ctx->pc == 0x1F8878u) {
        ctx->pc = 0x1F8878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8874u;
        // 0x1f8878: 0xe4820000  swc1        $f2, 0x0($a0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F887Cu;
        goto label_1f887c;
    }
    ctx->pc = 0x1F8874u;
    {
        const bool branch_taken_0x1f8874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8874u;
        // 0x1f8878: 0xe4820000  swc1        $f2, 0x0($a0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8874) {
            ctx->pc = 0x1F89ECu;
            goto label_1f89ec;
        }
    }
    ctx->pc = 0x1F887Cu;
label_1f887c:
    // 0x1f887c: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_1f8880:
    if (ctx->pc == 0x1F8880u) {
        ctx->pc = 0x1F8880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F887Cu;
        // 0x1f8880: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8884u;
        goto label_1f8884;
    }
    ctx->pc = 0x1F887Cu;
    {
        const bool branch_taken_0x1f887c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F887Cu;
        // 0x1f8880: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f887c) {
            ctx->pc = 0x1F88ACu;
            goto label_1f88ac;
        }
    }
    ctx->pc = 0x1F8884u;
label_1f8884:
    // 0x1f8884: 0x30450004  andi        $a1, $v0, 0x4
    ctx->pc = 0x1f8884u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_1f8888:
    // 0x1f8888: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_1f888c:
    if (ctx->pc == 0x1F888Cu) {
        ctx->pc = 0x1F888Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8888u;
        // 0x1f888c: 0x3c050002  lui         $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8890u;
        goto label_1f8890;
    }
    ctx->pc = 0x1F8888u;
    {
        const bool branch_taken_0x1f8888 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F888Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8888u;
        // 0x1f888c: 0x3c050002  lui         $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8888) {
            ctx->pc = 0x1F88A0u;
            goto label_1f88a0;
        }
    }
    ctx->pc = 0x1F8890u;
label_1f8890:
    // 0x1f8890: 0x30450020  andi        $a1, $v0, 0x20
    ctx->pc = 0x1f8890u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_1f8894:
    // 0x1f8894: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_1f8898:
    if (ctx->pc == 0x1F8898u) {
        ctx->pc = 0x1F8898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8894u;
        // 0x1f8898: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F889Cu;
        goto label_1f889c;
    }
    ctx->pc = 0x1F8894u;
    {
        const bool branch_taken_0x1f8894 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8894u;
        // 0x1f8898: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8894) {
            ctx->pc = 0x1F88B0u;
            goto label_1f88b0;
        }
    }
    ctx->pc = 0x1F889Cu;
label_1f889c:
    // 0x1f889c: 0x3c050002  lui         $a1, 0x2
    ctx->pc = 0x1f889cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
label_1f88a0:
    // 0x1f88a0: 0x452824  and         $a1, $v0, $a1
    ctx->pc = 0x1f88a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
label_1f88a4:
    // 0x1f88a4: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
label_1f88a8:
    if (ctx->pc == 0x1F88A8u) {
        ctx->pc = 0x1F88A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F88A4u;
        // 0x1f88a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F88ACu;
        goto label_1f88ac;
    }
    ctx->pc = 0x1F88A4u;
    {
        const bool branch_taken_0x1f88a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F88A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F88A4u;
        // 0x1f88a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f88a4) {
            ctx->pc = 0x1F88B0u;
            goto label_1f88b0;
        }
    }
    ctx->pc = 0x1F88ACu;
label_1f88ac:
    // 0x1f88ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f88acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f88b0:
    // 0x1f88b0: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_1f88b4:
    if (ctx->pc == 0x1F88B4u) {
        ctx->pc = 0x1F88B8u;
        goto label_1f88b8;
    }
    ctx->pc = 0x1F88B0u;
    {
        const bool branch_taken_0x1f88b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f88b0) {
            ctx->pc = 0x1F88DCu;
            goto label_1f88dc;
        }
    }
    ctx->pc = 0x1F88B8u;
label_1f88b8:
    // 0x1f88b8: 0x3c05451c  lui         $a1, 0x451C
    ctx->pc = 0x1f88b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17692 << 16));
label_1f88bc:
    // 0x1f88bc: 0x34a54000  ori         $a1, $a1, 0x4000
    ctx->pc = 0x1f88bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16384);
label_1f88c0:
    // 0x1f88c0: 0x44851800  mtc1        $a1, $f3
    ctx->pc = 0x1f88c0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1f88c4:
    // 0x1f88c4: 0x0  nop
    ctx->pc = 0x1f88c4u;
    // NOP
label_1f88c8:
    // 0x1f88c8: 0x46031036  c.le.s      $f2, $f3
    ctx->pc = 0x1f88c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f88cc:
    // 0x1f88cc: 0x0  nop
    ctx->pc = 0x1f88ccu;
    // NOP
label_1f88d0:
    // 0x1f88d0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_1f88d4:
    if (ctx->pc == 0x1F88D4u) {
        ctx->pc = 0x1F88D8u;
        goto label_1f88d8;
    }
    ctx->pc = 0x1F88D0u;
    {
        const bool branch_taken_0x1f88d0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f88d0) {
            ctx->pc = 0x1F88DCu;
            goto label_1f88dc;
        }
    }
    ctx->pc = 0x1F88D8u;
label_1f88d8:
    // 0x1f88d8: 0x46001806  mov.s       $f0, $f3
    ctx->pc = 0x1f88d8u;
    ctx->f[0] = FPU_MOV_S(ctx->f[3]);
label_1f88dc:
    // 0x1f88dc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f88dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f88e0:
    // 0x1f88e0: 0x0  nop
    ctx->pc = 0x1f88e0u;
    // NOP
label_1f88e4:
    // 0x1f88e4: 0x45000041  bc1f        . + 4 + (0x41 << 2)
label_1f88e8:
    if (ctx->pc == 0x1F88E8u) {
        ctx->pc = 0x1F88ECu;
        goto label_1f88ec;
    }
    ctx->pc = 0x1F88E4u;
    {
        const bool branch_taken_0x1f88e4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f88e4) {
            ctx->pc = 0x1F89ECu;
            goto label_1f89ec;
        }
    }
    ctx->pc = 0x1F88ECu;
label_1f88ec:
    // 0x1f88ec: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_1f88f0:
    if (ctx->pc == 0x1F88F0u) {
        ctx->pc = 0x1F88F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F88ECu;
        // 0x1f88f0: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F88F4u;
        goto label_1f88f4;
    }
    ctx->pc = 0x1F88ECu;
    {
        const bool branch_taken_0x1f88ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F88F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F88ECu;
        // 0x1f88f0: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f88ec) {
            ctx->pc = 0x1F891Cu;
            goto label_1f891c;
        }
    }
    ctx->pc = 0x1F88F4u;
label_1f88f4:
    // 0x1f88f4: 0x30450004  andi        $a1, $v0, 0x4
    ctx->pc = 0x1f88f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_1f88f8:
    // 0x1f88f8: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_1f88fc:
    if (ctx->pc == 0x1F88FCu) {
        ctx->pc = 0x1F88FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F88F8u;
        // 0x1f88fc: 0x3c050002  lui         $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8900u;
        goto label_1f8900;
    }
    ctx->pc = 0x1F88F8u;
    {
        const bool branch_taken_0x1f88f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F88FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F88F8u;
        // 0x1f88fc: 0x3c050002  lui         $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f88f8) {
            ctx->pc = 0x1F8910u;
            goto label_1f8910;
        }
    }
    ctx->pc = 0x1F8900u;
label_1f8900:
    // 0x1f8900: 0x30450020  andi        $a1, $v0, 0x20
    ctx->pc = 0x1f8900u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_1f8904:
    // 0x1f8904: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_1f8908:
    if (ctx->pc == 0x1F8908u) {
        ctx->pc = 0x1F8908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8904u;
        // 0x1f8908: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F890Cu;
        goto label_1f890c;
    }
    ctx->pc = 0x1F8904u;
    {
        const bool branch_taken_0x1f8904 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8904u;
        // 0x1f8908: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8904) {
            ctx->pc = 0x1F8920u;
            goto label_1f8920;
        }
    }
    ctx->pc = 0x1F890Cu;
label_1f890c:
    // 0x1f890c: 0x3c050002  lui         $a1, 0x2
    ctx->pc = 0x1f890cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
label_1f8910:
    // 0x1f8910: 0x452824  and         $a1, $v0, $a1
    ctx->pc = 0x1f8910u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
label_1f8914:
    // 0x1f8914: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
label_1f8918:
    if (ctx->pc == 0x1F8918u) {
        ctx->pc = 0x1F8918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8914u;
        // 0x1f8918: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F891Cu;
        goto label_1f891c;
    }
    ctx->pc = 0x1F8914u;
    {
        const bool branch_taken_0x1f8914 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8914u;
        // 0x1f8918: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8914) {
            ctx->pc = 0x1F8920u;
            goto label_1f8920;
        }
    }
    ctx->pc = 0x1F891Cu;
label_1f891c:
    // 0x1f891c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f891cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f8920:
    // 0x1f8920: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_1f8924:
    if (ctx->pc == 0x1F8924u) {
        ctx->pc = 0x1F8928u;
        goto label_1f8928;
    }
    ctx->pc = 0x1F8920u;
    {
        const bool branch_taken_0x1f8920 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f8920) {
            ctx->pc = 0x1F894Cu;
            goto label_1f894c;
        }
    }
    ctx->pc = 0x1F8928u;
label_1f8928:
    // 0x1f8928: 0x3c05451c  lui         $a1, 0x451C
    ctx->pc = 0x1f8928u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17692 << 16));
label_1f892c:
    // 0x1f892c: 0x34a54000  ori         $a1, $a1, 0x4000
    ctx->pc = 0x1f892cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16384);
label_1f8930:
    // 0x1f8930: 0x44851800  mtc1        $a1, $f3
    ctx->pc = 0x1f8930u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1f8934:
    // 0x1f8934: 0x0  nop
    ctx->pc = 0x1f8934u;
    // NOP
label_1f8938:
    // 0x1f8938: 0x46031036  c.le.s      $f2, $f3
    ctx->pc = 0x1f8938u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f893c:
    // 0x1f893c: 0x0  nop
    ctx->pc = 0x1f893cu;
    // NOP
label_1f8940:
    // 0x1f8940: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_1f8944:
    if (ctx->pc == 0x1F8944u) {
        ctx->pc = 0x1F8948u;
        goto label_1f8948;
    }
    ctx->pc = 0x1F8940u;
    {
        const bool branch_taken_0x1f8940 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f8940) {
            ctx->pc = 0x1F894Cu;
            goto label_1f894c;
        }
    }
    ctx->pc = 0x1F8948u;
label_1f8948:
    // 0x1f8948: 0x46001806  mov.s       $f0, $f3
    ctx->pc = 0x1f8948u;
    ctx->f[0] = FPU_MOV_S(ctx->f[3]);
label_1f894c:
    // 0x1f894c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1f894cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1f8950:
    // 0x1f8950: 0x3c05c0a0  lui         $a1, 0xC0A0
    ctx->pc = 0x1f8950u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49312 << 16));
label_1f8954:
    // 0x1f8954: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1f8954u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f8958:
    // 0x1f8958: 0x0  nop
    ctx->pc = 0x1f8958u;
    // NOP
label_1f895c:
    // 0x1f895c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f895cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f8960:
    // 0x1f8960: 0x0  nop
    ctx->pc = 0x1f8960u;
    // NOP
label_1f8964:
    // 0x1f8964: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_1f8968:
    if (ctx->pc == 0x1F8968u) {
        ctx->pc = 0x1F896Cu;
        goto label_1f896c;
    }
    ctx->pc = 0x1F8964u;
    {
        const bool branch_taken_0x1f8964 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f8964) {
            ctx->pc = 0x1F8988u;
            goto label_1f8988;
        }
    }
    ctx->pc = 0x1F896Cu;
label_1f896c:
    // 0x1f896c: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x1f896cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f8970:
    // 0x1f8970: 0x3c0540a0  lui         $a1, 0x40A0
    ctx->pc = 0x1f8970u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16544 << 16));
label_1f8974:
    // 0x1f8974: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1f8974u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f8978:
    // 0x1f8978: 0x0  nop
    ctx->pc = 0x1f8978u;
    // NOP
label_1f897c:
    // 0x1f897c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f897cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1f8980:
    // 0x1f8980: 0x1000001a  b           . + 4 + (0x1A << 2)
label_1f8984:
    if (ctx->pc == 0x1F8984u) {
        ctx->pc = 0x1F8984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8980u;
        // 0x1f8984: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8988u;
        goto label_1f8988;
    }
    ctx->pc = 0x1F8980u;
    {
        const bool branch_taken_0x1f8980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8980u;
        // 0x1f8984: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8980) {
            ctx->pc = 0x1F89ECu;
            goto label_1f89ec;
        }
    }
    ctx->pc = 0x1F8988u;
label_1f8988:
    // 0x1f8988: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_1f898c:
    if (ctx->pc == 0x1F898Cu) {
        ctx->pc = 0x1F898Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8988u;
        // 0x1f898c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8990u;
        goto label_1f8990;
    }
    ctx->pc = 0x1F8988u;
    {
        const bool branch_taken_0x1f8988 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F898Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8988u;
        // 0x1f898c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8988) {
            ctx->pc = 0x1F89BCu;
            goto label_1f89bc;
        }
    }
    ctx->pc = 0x1F8990u;
label_1f8990:
    // 0x1f8990: 0x30450004  andi        $a1, $v0, 0x4
    ctx->pc = 0x1f8990u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_1f8994:
    // 0x1f8994: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_1f8998:
    if (ctx->pc == 0x1F8998u) {
        ctx->pc = 0x1F8998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8994u;
        // 0x1f8998: 0x3c050002  lui         $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F899Cu;
        goto label_1f899c;
    }
    ctx->pc = 0x1F8994u;
    {
        const bool branch_taken_0x1f8994 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8994u;
        // 0x1f8998: 0x3c050002  lui         $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8994) {
            ctx->pc = 0x1F89ACu;
            goto label_1f89ac;
        }
    }
    ctx->pc = 0x1F899Cu;
label_1f899c:
    // 0x1f899c: 0x30450020  andi        $a1, $v0, 0x20
    ctx->pc = 0x1f899cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_1f89a0:
    // 0x1f89a0: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_1f89a4:
    if (ctx->pc == 0x1F89A4u) {
        ctx->pc = 0x1F89A8u;
        goto label_1f89a8;
    }
    ctx->pc = 0x1F89A0u;
    {
        const bool branch_taken_0x1f89a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f89a0) {
            ctx->pc = 0x1F89B8u;
            goto label_1f89b8;
        }
    }
    ctx->pc = 0x1F89A8u;
label_1f89a8:
    // 0x1f89a8: 0x3c050002  lui         $a1, 0x2
    ctx->pc = 0x1f89a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
label_1f89ac:
    // 0x1f89ac: 0x452824  and         $a1, $v0, $a1
    ctx->pc = 0x1f89acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
label_1f89b0:
    // 0x1f89b0: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
label_1f89b4:
    if (ctx->pc == 0x1F89B4u) {
        ctx->pc = 0x1F89B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F89B0u;
        // 0x1f89b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F89B8u;
        goto label_1f89b8;
    }
    ctx->pc = 0x1F89B0u;
    {
        const bool branch_taken_0x1f89b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F89B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F89B0u;
        // 0x1f89b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f89b0) {
            ctx->pc = 0x1F89BCu;
            goto label_1f89bc;
        }
    }
    ctx->pc = 0x1F89B8u;
label_1f89b8:
    // 0x1f89b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f89b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f89bc:
    // 0x1f89bc: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_1f89c0:
    if (ctx->pc == 0x1F89C0u) {
        ctx->pc = 0x1F89C4u;
        goto label_1f89c4;
    }
    ctx->pc = 0x1F89BCu;
    {
        const bool branch_taken_0x1f89bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f89bc) {
            ctx->pc = 0x1F89E8u;
            goto label_1f89e8;
        }
    }
    ctx->pc = 0x1F89C4u;
label_1f89c4:
    // 0x1f89c4: 0x3c05451c  lui         $a1, 0x451C
    ctx->pc = 0x1f89c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17692 << 16));
label_1f89c8:
    // 0x1f89c8: 0x34a54000  ori         $a1, $a1, 0x4000
    ctx->pc = 0x1f89c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16384);
label_1f89cc:
    // 0x1f89cc: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1f89ccu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f89d0:
    // 0x1f89d0: 0x0  nop
    ctx->pc = 0x1f89d0u;
    // NOP
label_1f89d4:
    // 0x1f89d4: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x1f89d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f89d8:
    // 0x1f89d8: 0x0  nop
    ctx->pc = 0x1f89d8u;
    // NOP
label_1f89dc:
    // 0x1f89dc: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_1f89e0:
    if (ctx->pc == 0x1F89E0u) {
        ctx->pc = 0x1F89E4u;
        goto label_1f89e4;
    }
    ctx->pc = 0x1F89DCu;
    {
        const bool branch_taken_0x1f89dc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f89dc) {
            ctx->pc = 0x1F89E8u;
            goto label_1f89e8;
        }
    }
    ctx->pc = 0x1F89E4u;
label_1f89e4:
    // 0x1f89e4: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x1f89e4u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_1f89e8:
    // 0x1f89e8: 0xe4820000  swc1        $f2, 0x0($a0)
    ctx->pc = 0x1f89e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1f89ec:
    // 0x1f89ec: 0x92070010  lbu         $a3, 0x10($s0)
    ctx->pc = 0x1f89ecu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
label_1f89f0:
    // 0x1f89f0: 0x3c040029  lui         $a0, 0x29
    ctx->pc = 0x1f89f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)41 << 16));
label_1f89f4:
    // 0x1f89f4: 0x27858278  addiu       $a1, $gp, -0x7D88
    ctx->pc = 0x1f89f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935160));
label_1f89f8:
    // 0x1f89f8: 0x2484c560  addiu       $a0, $a0, -0x3AA0
    ctx->pc = 0x1f89f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952288));
label_1f89fc:
    // 0x1f89fc: 0x73080  sll         $a2, $a3, 2
    ctx->pc = 0x1f89fcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_1f8a00:
    // 0x1f8a00: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1f8a00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1f8a04:
    // 0x1f8a04: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x1f8a04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f8a08:
    // 0x1f8a08: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x1f8a08u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_1f8a0c:
    // 0x1f8a0c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1f8a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1f8a10:
    // 0x1f8a10: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x1f8a10u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_1f8a14:
    // 0x1f8a14: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1f8a14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1f8a18:
    // 0x1f8a18: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x1f8a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f8a1c:
    // 0x1f8a1c: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_1f8a20:
    if (ctx->pc == 0x1F8A20u) {
        ctx->pc = 0x1F8A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8A1Cu;
        // 0x1f8a20: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8A24u;
        goto label_1f8a24;
    }
    ctx->pc = 0x1F8A1Cu;
    {
        const bool branch_taken_0x1f8a1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8A1Cu;
        // 0x1f8a20: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8a1c) {
            ctx->pc = 0x1F8A4Cu;
            goto label_1f8a4c;
        }
    }
    ctx->pc = 0x1F8A24u;
label_1f8a24:
    // 0x1f8a24: 0x30440004  andi        $a0, $v0, 0x4
    ctx->pc = 0x1f8a24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_1f8a28:
    // 0x1f8a28: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_1f8a2c:
    if (ctx->pc == 0x1F8A2Cu) {
        ctx->pc = 0x1F8A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8A28u;
        // 0x1f8a2c: 0x3c040002  lui         $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8A30u;
        goto label_1f8a30;
    }
    ctx->pc = 0x1F8A28u;
    {
        const bool branch_taken_0x1f8a28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8A28u;
        // 0x1f8a2c: 0x3c040002  lui         $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8a28) {
            ctx->pc = 0x1F8A40u;
            goto label_1f8a40;
        }
    }
    ctx->pc = 0x1F8A30u;
label_1f8a30:
    // 0x1f8a30: 0x30440020  andi        $a0, $v0, 0x20
    ctx->pc = 0x1f8a30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_1f8a34:
    // 0x1f8a34: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_1f8a38:
    if (ctx->pc == 0x1F8A38u) {
        ctx->pc = 0x1F8A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8A34u;
        // 0x1f8a38: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8A3Cu;
        goto label_1f8a3c;
    }
    ctx->pc = 0x1F8A34u;
    {
        const bool branch_taken_0x1f8a34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8A34u;
        // 0x1f8a38: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8a34) {
            ctx->pc = 0x1F8A50u;
            goto label_1f8a50;
        }
    }
    ctx->pc = 0x1F8A3Cu;
label_1f8a3c:
    // 0x1f8a3c: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x1f8a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
label_1f8a40:
    // 0x1f8a40: 0x442024  and         $a0, $v0, $a0
    ctx->pc = 0x1f8a40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_1f8a44:
    // 0x1f8a44: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
label_1f8a48:
    if (ctx->pc == 0x1F8A48u) {
        ctx->pc = 0x1F8A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8A44u;
        // 0x1f8a48: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8A4Cu;
        goto label_1f8a4c;
    }
    ctx->pc = 0x1F8A44u;
    {
        const bool branch_taken_0x1f8a44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8A44u;
        // 0x1f8a48: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8a44) {
            ctx->pc = 0x1F8A50u;
            goto label_1f8a50;
        }
    }
    ctx->pc = 0x1F8A4Cu;
label_1f8a4c:
    // 0x1f8a4c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f8a4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f8a50:
    // 0x1f8a50: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
label_1f8a54:
    if (ctx->pc == 0x1F8A54u) {
        ctx->pc = 0x1F8A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8A50u;
        // 0x1f8a54: 0x728c0  sll         $a1, $a3, 3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8A58u;
        goto label_1f8a58;
    }
    ctx->pc = 0x1F8A50u;
    {
        const bool branch_taken_0x1f8a50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8A50u;
        // 0x1f8a54: 0x728c0  sll         $a1, $a3, 3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8a50) {
            ctx->pc = 0x1F8A80u;
            goto label_1f8a80;
        }
    }
    ctx->pc = 0x1F8A58u;
label_1f8a58:
    // 0x1f8a58: 0x3c04453b  lui         $a0, 0x453B
    ctx->pc = 0x1f8a58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17723 << 16));
label_1f8a5c:
    // 0x1f8a5c: 0x34848000  ori         $a0, $a0, 0x8000
    ctx->pc = 0x1f8a5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
label_1f8a60:
    // 0x1f8a60: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1f8a60u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1f8a64:
    // 0x1f8a64: 0x0  nop
    ctx->pc = 0x1f8a64u;
    // NOP
label_1f8a68:
    // 0x1f8a68: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1f8a68u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f8a6c:
    // 0x1f8a6c: 0x0  nop
    ctx->pc = 0x1f8a6cu;
    // NOP
label_1f8a70:
    // 0x1f8a70: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_1f8a74:
    if (ctx->pc == 0x1F8A74u) {
        ctx->pc = 0x1F8A78u;
        goto label_1f8a78;
    }
    ctx->pc = 0x1F8A70u;
    {
        const bool branch_taken_0x1f8a70 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f8a70) {
            ctx->pc = 0x1F8A7Cu;
            goto label_1f8a7c;
        }
    }
    ctx->pc = 0x1F8A78u;
label_1f8a78:
    // 0x1f8a78: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x1f8a78u;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
label_1f8a7c:
    // 0x1f8a7c: 0x728c0  sll         $a1, $a3, 3
    ctx->pc = 0x1f8a7cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_1f8a80:
    // 0x1f8a80: 0x3c040054  lui         $a0, 0x54
    ctx->pc = 0x1f8a80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)84 << 16));
label_1f8a84:
    // 0x1f8a84: 0xa72823  subu        $a1, $a1, $a3
    ctx->pc = 0x1f8a84u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_1f8a88:
    // 0x1f8a88: 0x2484a67c  addiu       $a0, $a0, -0x5984
    ctx->pc = 0x1f8a88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944380));
label_1f8a8c:
    // 0x1f8a8c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1f8a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1f8a90:
    // 0x1f8a90: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1f8a90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1f8a94:
    // 0x1f8a94: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x1f8a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f8a98:
    // 0x1f8a98: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1f8a98u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f8a9c:
    // 0x1f8a9c: 0x0  nop
    ctx->pc = 0x1f8a9cu;
    // NOP
label_1f8aa0:
    // 0x1f8aa0: 0x45010041  bc1t        . + 4 + (0x41 << 2)
label_1f8aa4:
    if (ctx->pc == 0x1F8AA4u) {
        ctx->pc = 0x1F8AA8u;
        goto label_1f8aa8;
    }
    ctx->pc = 0x1F8AA0u;
    {
        const bool branch_taken_0x1f8aa0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f8aa0) {
            ctx->pc = 0x1F8BA8u;
            goto label_1f8ba8;
        }
    }
    ctx->pc = 0x1F8AA8u;
label_1f8aa8:
    // 0x1f8aa8: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_1f8aac:
    if (ctx->pc == 0x1F8AACu) {
        ctx->pc = 0x1F8AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8AA8u;
        // 0x1f8aac: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8AB0u;
        goto label_1f8ab0;
    }
    ctx->pc = 0x1F8AA8u;
    {
        const bool branch_taken_0x1f8aa8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8AA8u;
        // 0x1f8aac: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8aa8) {
            ctx->pc = 0x1F8AD8u;
            goto label_1f8ad8;
        }
    }
    ctx->pc = 0x1F8AB0u;
label_1f8ab0:
    // 0x1f8ab0: 0x30450004  andi        $a1, $v0, 0x4
    ctx->pc = 0x1f8ab0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_1f8ab4:
    // 0x1f8ab4: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_1f8ab8:
    if (ctx->pc == 0x1F8AB8u) {
        ctx->pc = 0x1F8AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8AB4u;
        // 0x1f8ab8: 0x3c050002  lui         $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8ABCu;
        goto label_1f8abc;
    }
    ctx->pc = 0x1F8AB4u;
    {
        const bool branch_taken_0x1f8ab4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8AB4u;
        // 0x1f8ab8: 0x3c050002  lui         $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8ab4) {
            ctx->pc = 0x1F8ACCu;
            goto label_1f8acc;
        }
    }
    ctx->pc = 0x1F8ABCu;
label_1f8abc:
    // 0x1f8abc: 0x30450020  andi        $a1, $v0, 0x20
    ctx->pc = 0x1f8abcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_1f8ac0:
    // 0x1f8ac0: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_1f8ac4:
    if (ctx->pc == 0x1F8AC4u) {
        ctx->pc = 0x1F8AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8AC0u;
        // 0x1f8ac4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8AC8u;
        goto label_1f8ac8;
    }
    ctx->pc = 0x1F8AC0u;
    {
        const bool branch_taken_0x1f8ac0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8AC0u;
        // 0x1f8ac4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8ac0) {
            ctx->pc = 0x1F8ADCu;
            goto label_1f8adc;
        }
    }
    ctx->pc = 0x1F8AC8u;
label_1f8ac8:
    // 0x1f8ac8: 0x3c050002  lui         $a1, 0x2
    ctx->pc = 0x1f8ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
label_1f8acc:
    // 0x1f8acc: 0x452824  and         $a1, $v0, $a1
    ctx->pc = 0x1f8accu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
label_1f8ad0:
    // 0x1f8ad0: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
label_1f8ad4:
    if (ctx->pc == 0x1F8AD4u) {
        ctx->pc = 0x1F8AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8AD0u;
        // 0x1f8ad4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8AD8u;
        goto label_1f8ad8;
    }
    ctx->pc = 0x1F8AD0u;
    {
        const bool branch_taken_0x1f8ad0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8AD0u;
        // 0x1f8ad4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8ad0) {
            ctx->pc = 0x1F8ADCu;
            goto label_1f8adc;
        }
    }
    ctx->pc = 0x1F8AD8u;
label_1f8ad8:
    // 0x1f8ad8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f8ad8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f8adc:
    // 0x1f8adc: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_1f8ae0:
    if (ctx->pc == 0x1F8AE0u) {
        ctx->pc = 0x1F8AE4u;
        goto label_1f8ae4;
    }
    ctx->pc = 0x1F8ADCu;
    {
        const bool branch_taken_0x1f8adc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f8adc) {
            ctx->pc = 0x1F8B08u;
            goto label_1f8b08;
        }
    }
    ctx->pc = 0x1F8AE4u;
label_1f8ae4:
    // 0x1f8ae4: 0x3c05453b  lui         $a1, 0x453B
    ctx->pc = 0x1f8ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17723 << 16));
label_1f8ae8:
    // 0x1f8ae8: 0x34a58000  ori         $a1, $a1, 0x8000
    ctx->pc = 0x1f8ae8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
label_1f8aec:
    // 0x1f8aec: 0x44851800  mtc1        $a1, $f3
    ctx->pc = 0x1f8aecu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1f8af0:
    // 0x1f8af0: 0x0  nop
    ctx->pc = 0x1f8af0u;
    // NOP
label_1f8af4:
    // 0x1f8af4: 0x46031036  c.le.s      $f2, $f3
    ctx->pc = 0x1f8af4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f8af8:
    // 0x1f8af8: 0x0  nop
    ctx->pc = 0x1f8af8u;
    // NOP
label_1f8afc:
    // 0x1f8afc: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_1f8b00:
    if (ctx->pc == 0x1F8B00u) {
        ctx->pc = 0x1F8B04u;
        goto label_1f8b04;
    }
    ctx->pc = 0x1F8AFCu;
    {
        const bool branch_taken_0x1f8afc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f8afc) {
            ctx->pc = 0x1F8B08u;
            goto label_1f8b08;
        }
    }
    ctx->pc = 0x1F8B04u;
label_1f8b04:
    // 0x1f8b04: 0x46001806  mov.s       $f0, $f3
    ctx->pc = 0x1f8b04u;
    ctx->f[0] = FPU_MOV_S(ctx->f[3]);
label_1f8b08:
    // 0x1f8b08: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1f8b08u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1f8b0c:
    // 0x1f8b0c: 0x3c0540a0  lui         $a1, 0x40A0
    ctx->pc = 0x1f8b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16544 << 16));
label_1f8b10:
    // 0x1f8b10: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x1f8b10u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1f8b14:
    // 0x1f8b14: 0x0  nop
    ctx->pc = 0x1f8b14u;
    // NOP
label_1f8b18:
    // 0x1f8b18: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1f8b18u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f8b1c:
    // 0x1f8b1c: 0x0  nop
    ctx->pc = 0x1f8b1cu;
    // NOP
label_1f8b20:
    // 0x1f8b20: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_1f8b24:
    if (ctx->pc == 0x1F8B24u) {
        ctx->pc = 0x1F8B28u;
        goto label_1f8b28;
    }
    ctx->pc = 0x1F8B20u;
    {
        const bool branch_taken_0x1f8b20 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f8b20) {
            ctx->pc = 0x1F8B38u;
            goto label_1f8b38;
        }
    }
    ctx->pc = 0x1F8B28u;
label_1f8b28:
    // 0x1f8b28: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x1f8b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f8b2c:
    // 0x1f8b2c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1f8b2cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1f8b30:
    // 0x1f8b30: 0x1000007b  b           . + 4 + (0x7B << 2)
label_1f8b34:
    if (ctx->pc == 0x1F8B34u) {
        ctx->pc = 0x1F8B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8B30u;
        // 0x1f8b34: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8B38u;
        goto label_1f8b38;
    }
    ctx->pc = 0x1F8B30u;
    {
        const bool branch_taken_0x1f8b30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8B30u;
        // 0x1f8b34: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8b30) {
            ctx->pc = 0x1F8D20u;
            { ctx->pc = 0x1f8d20; return; }
        }
    }
    ctx->pc = 0x1F8B38u;
label_1f8b38:
    // 0x1f8b38: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_1f8b3c:
    if (ctx->pc == 0x1F8B3Cu) {
        ctx->pc = 0x1F8B40u;
        goto label_1f8b40;
    }
    ctx->pc = 0x1F8B38u;
    {
        const bool branch_taken_0x1f8b38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f8b38) {
            ctx->pc = 0x1F8B68u;
            goto label_1f8b68;
        }
    }
    ctx->pc = 0x1F8B40u;
label_1f8b40:
    // 0x1f8b40: 0x30430004  andi        $v1, $v0, 0x4
    ctx->pc = 0x1f8b40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_1f8b44:
    // 0x1f8b44: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_1f8b48:
    if (ctx->pc == 0x1F8B48u) {
        ctx->pc = 0x1F8B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8B44u;
        // 0x1f8b48: 0x3c030002  lui         $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8B4Cu;
        goto label_1f8b4c;
    }
    ctx->pc = 0x1F8B44u;
    {
        const bool branch_taken_0x1f8b44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8B44u;
        // 0x1f8b48: 0x3c030002  lui         $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8b44) {
            ctx->pc = 0x1F8B5Cu;
            goto label_1f8b5c;
        }
    }
    ctx->pc = 0x1F8B4Cu;
label_1f8b4c:
    // 0x1f8b4c: 0x30430020  andi        $v1, $v0, 0x20
    ctx->pc = 0x1f8b4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_1f8b50:
    // 0x1f8b50: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_1f8b54:
    if (ctx->pc == 0x1F8B54u) {
        ctx->pc = 0x1F8B58u;
        goto label_1f8b58;
    }
    ctx->pc = 0x1F8B50u;
    {
        const bool branch_taken_0x1f8b50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f8b50) {
            ctx->pc = 0x1F8B68u;
            goto label_1f8b68;
        }
    }
    ctx->pc = 0x1F8B58u;
label_1f8b58:
    // 0x1f8b58: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x1f8b58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
label_1f8b5c:
    // 0x1f8b5c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1f8b5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1f8b60:
    // 0x1f8b60: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1f8b64:
    if (ctx->pc == 0x1F8B64u) {
        ctx->pc = 0x1F8B68u;
        goto label_1f8b68;
    }
    ctx->pc = 0x1F8B60u;
    {
        const bool branch_taken_0x1f8b60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f8b60) {
            ctx->pc = 0x1F8B70u;
            goto label_1f8b70;
        }
    }
    ctx->pc = 0x1F8B68u;
label_1f8b68:
    // 0x1f8b68: 0x10000002  b           . + 4 + (0x2 << 2)
label_1f8b6c:
    if (ctx->pc == 0x1F8B6Cu) {
        ctx->pc = 0x1F8B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8B68u;
        // 0x1f8b6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8B70u;
        goto label_1f8b70;
    }
    ctx->pc = 0x1F8B68u;
    {
        const bool branch_taken_0x1f8b68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8B68u;
        // 0x1f8b6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8b68) {
            ctx->pc = 0x1F8B74u;
            goto label_1f8b74;
        }
    }
    ctx->pc = 0x1F8B70u;
label_1f8b70:
    // 0x1f8b70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f8b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f8b74:
    // 0x1f8b74: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1f8b78:
    if (ctx->pc == 0x1F8B78u) {
        ctx->pc = 0x1F8B7Cu;
        goto label_1f8b7c;
    }
    ctx->pc = 0x1F8B74u;
    {
        const bool branch_taken_0x1f8b74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f8b74) {
            ctx->pc = 0x1F8BA0u;
            goto label_1f8ba0;
        }
    }
    ctx->pc = 0x1F8B7Cu;
label_1f8b7c:
    // 0x1f8b7c: 0x3c02453b  lui         $v0, 0x453B
    ctx->pc = 0x1f8b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17723 << 16));
label_1f8b80:
    // 0x1f8b80: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1f8b80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_1f8b84:
    // 0x1f8b84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f8b84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f8b88:
    // 0x1f8b88: 0x0  nop
    ctx->pc = 0x1f8b88u;
    // NOP
label_1f8b8c:
    // 0x1f8b8c: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x1f8b8cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f8b90:
    // 0x1f8b90: 0x0  nop
    ctx->pc = 0x1f8b90u;
    // NOP
label_1f8b94:
    // 0x1f8b94: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_1f8b98:
    if (ctx->pc == 0x1F8B98u) {
        ctx->pc = 0x1F8B9Cu;
        goto label_1f8b9c;
    }
    ctx->pc = 0x1F8B94u;
    {
        const bool branch_taken_0x1f8b94 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f8b94) {
            ctx->pc = 0x1F8BA0u;
            goto label_1f8ba0;
        }
    }
    ctx->pc = 0x1F8B9Cu;
label_1f8b9c:
    // 0x1f8b9c: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x1f8b9cu;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_1f8ba0:
    // 0x1f8ba0: 0x1000005f  b           . + 4 + (0x5F << 2)
label_1f8ba4:
    if (ctx->pc == 0x1F8BA4u) {
        ctx->pc = 0x1F8BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8BA0u;
        // 0x1f8ba4: 0xe4820000  swc1        $f2, 0x0($a0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8BA8u;
        goto label_1f8ba8;
    }
    ctx->pc = 0x1F8BA0u;
    {
        const bool branch_taken_0x1f8ba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8BA0u;
        // 0x1f8ba4: 0xe4820000  swc1        $f2, 0x0($a0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8ba0) {
            ctx->pc = 0x1F8D20u;
            { ctx->pc = 0x1f8d20; return; }
        }
    }
    ctx->pc = 0x1F8BA8u;
label_1f8ba8:
    // 0x1f8ba8: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_1f8bac:
    if (ctx->pc == 0x1F8BACu) {
        ctx->pc = 0x1F8BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8BA8u;
        // 0x1f8bac: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8BB0u;
        goto label_1f8bb0;
    }
    ctx->pc = 0x1F8BA8u;
    {
        const bool branch_taken_0x1f8ba8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8BA8u;
        // 0x1f8bac: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8ba8) {
            ctx->pc = 0x1F8BD8u;
            goto label_1f8bd8;
        }
    }
    ctx->pc = 0x1F8BB0u;
label_1f8bb0:
    // 0x1f8bb0: 0x30450004  andi        $a1, $v0, 0x4
    ctx->pc = 0x1f8bb0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_1f8bb4:
    // 0x1f8bb4: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_1f8bb8:
    if (ctx->pc == 0x1F8BB8u) {
        ctx->pc = 0x1F8BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8BB4u;
        // 0x1f8bb8: 0x3c050002  lui         $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8BBCu;
        goto label_1f8bbc;
    }
    ctx->pc = 0x1F8BB4u;
    {
        const bool branch_taken_0x1f8bb4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8BB4u;
        // 0x1f8bb8: 0x3c050002  lui         $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8bb4) {
            ctx->pc = 0x1F8BCCu;
            goto label_1f8bcc;
        }
    }
    ctx->pc = 0x1F8BBCu;
label_1f8bbc:
    // 0x1f8bbc: 0x30450020  andi        $a1, $v0, 0x20
    ctx->pc = 0x1f8bbcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_1f8bc0:
    // 0x1f8bc0: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_1f8bc4:
    if (ctx->pc == 0x1F8BC4u) {
        ctx->pc = 0x1F8BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8BC0u;
        // 0x1f8bc4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8BC8u;
        goto label_1f8bc8;
    }
    ctx->pc = 0x1F8BC0u;
    {
        const bool branch_taken_0x1f8bc0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8BC0u;
        // 0x1f8bc4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8bc0) {
            ctx->pc = 0x1F8BDCu;
            goto label_1f8bdc;
        }
    }
    ctx->pc = 0x1F8BC8u;
label_1f8bc8:
    // 0x1f8bc8: 0x3c050002  lui         $a1, 0x2
    ctx->pc = 0x1f8bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
label_1f8bcc:
    // 0x1f8bcc: 0x452824  and         $a1, $v0, $a1
    ctx->pc = 0x1f8bccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
label_1f8bd0:
    // 0x1f8bd0: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
label_1f8bd4:
    if (ctx->pc == 0x1F8BD4u) {
        ctx->pc = 0x1F8BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8BD0u;
        // 0x1f8bd4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8BD8u;
        goto label_1f8bd8;
    }
    ctx->pc = 0x1F8BD0u;
    {
        const bool branch_taken_0x1f8bd0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8BD0u;
        // 0x1f8bd4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8bd0) {
            ctx->pc = 0x1F8BDCu;
            goto label_1f8bdc;
        }
    }
    ctx->pc = 0x1F8BD8u;
label_1f8bd8:
    // 0x1f8bd8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f8bd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f8bdc:
    // 0x1f8bdc: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_1f8be0:
    if (ctx->pc == 0x1F8BE0u) {
        ctx->pc = 0x1F8BE4u;
        goto label_1f8be4;
    }
    ctx->pc = 0x1F8BDCu;
    {
        const bool branch_taken_0x1f8bdc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f8bdc) {
            ctx->pc = 0x1F8C08u;
            goto label_1f8c08;
        }
    }
    ctx->pc = 0x1F8BE4u;
label_1f8be4:
    // 0x1f8be4: 0x3c05453b  lui         $a1, 0x453B
    ctx->pc = 0x1f8be4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17723 << 16));
label_1f8be8:
    // 0x1f8be8: 0x34a58000  ori         $a1, $a1, 0x8000
    ctx->pc = 0x1f8be8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
label_1f8bec:
    // 0x1f8bec: 0x44851800  mtc1        $a1, $f3
    ctx->pc = 0x1f8becu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1f8bf0:
    // 0x1f8bf0: 0x0  nop
    ctx->pc = 0x1f8bf0u;
    // NOP
label_1f8bf4:
    // 0x1f8bf4: 0x46031036  c.le.s      $f2, $f3
    ctx->pc = 0x1f8bf4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f8bf8:
    // 0x1f8bf8: 0x0  nop
    ctx->pc = 0x1f8bf8u;
    // NOP
label_1f8bfc:
    // 0x1f8bfc: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_1f8c00:
    if (ctx->pc == 0x1F8C00u) {
        ctx->pc = 0x1F8C04u;
        goto label_1f8c04;
    }
    ctx->pc = 0x1F8BFCu;
    {
        const bool branch_taken_0x1f8bfc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f8bfc) {
            ctx->pc = 0x1F8C08u;
            goto label_1f8c08;
        }
    }
    ctx->pc = 0x1F8C04u;
label_1f8c04:
    // 0x1f8c04: 0x46001806  mov.s       $f0, $f3
    ctx->pc = 0x1f8c04u;
    ctx->f[0] = FPU_MOV_S(ctx->f[3]);
label_1f8c08:
    // 0x1f8c08: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f8c08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f8c0c:
    // 0x1f8c0c: 0x0  nop
    ctx->pc = 0x1f8c0cu;
    // NOP
label_1f8c10:
    // 0x1f8c10: 0x45000043  bc1f        . + 4 + (0x43 << 2)
label_1f8c14:
    if (ctx->pc == 0x1F8C14u) {
        ctx->pc = 0x1F8C18u;
        goto label_1f8c18;
    }
    ctx->pc = 0x1F8C10u;
    {
        const bool branch_taken_0x1f8c10 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f8c10) {
            ctx->pc = 0x1F8D20u;
            { ctx->pc = 0x1f8d20; return; }
        }
    }
    ctx->pc = 0x1F8C18u;
label_1f8c18:
    // 0x1f8c18: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_1f8c1c:
    if (ctx->pc == 0x1F8C1Cu) {
        ctx->pc = 0x1F8C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8C18u;
        // 0x1f8c1c: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8C20u;
        goto label_1f8c20;
    }
    ctx->pc = 0x1F8C18u;
    {
        const bool branch_taken_0x1f8c18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8C18u;
        // 0x1f8c1c: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8c18) {
            ctx->pc = 0x1F8C48u;
            goto label_1f8c48;
        }
    }
    ctx->pc = 0x1F8C20u;
label_1f8c20:
    // 0x1f8c20: 0x30450004  andi        $a1, $v0, 0x4
    ctx->pc = 0x1f8c20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_1f8c24:
    // 0x1f8c24: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_1f8c28:
    if (ctx->pc == 0x1F8C28u) {
        ctx->pc = 0x1F8C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8C24u;
        // 0x1f8c28: 0x3c050002  lui         $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8C2Cu;
        goto label_1f8c2c;
    }
    ctx->pc = 0x1F8C24u;
    {
        const bool branch_taken_0x1f8c24 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8C24u;
        // 0x1f8c28: 0x3c050002  lui         $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8c24) {
            ctx->pc = 0x1F8C3Cu;
            goto label_1f8c3c;
        }
    }
    ctx->pc = 0x1F8C2Cu;
label_1f8c2c:
    // 0x1f8c2c: 0x30450020  andi        $a1, $v0, 0x20
    ctx->pc = 0x1f8c2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_1f8c30:
    // 0x1f8c30: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_1f8c34:
    if (ctx->pc == 0x1F8C34u) {
        ctx->pc = 0x1F8C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8C30u;
        // 0x1f8c34: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8C38u;
        goto label_1f8c38;
    }
    ctx->pc = 0x1F8C30u;
    {
        const bool branch_taken_0x1f8c30 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8C30u;
        // 0x1f8c34: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8c30) {
            ctx->pc = 0x1F8C4Cu;
            goto label_1f8c4c;
        }
    }
    ctx->pc = 0x1F8C38u;
label_1f8c38:
    // 0x1f8c38: 0x3c050002  lui         $a1, 0x2
    ctx->pc = 0x1f8c38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
label_1f8c3c:
    // 0x1f8c3c: 0x452824  and         $a1, $v0, $a1
    ctx->pc = 0x1f8c3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
label_1f8c40:
    // 0x1f8c40: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
label_1f8c44:
    if (ctx->pc == 0x1F8C44u) {
        ctx->pc = 0x1F8C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8C40u;
        // 0x1f8c44: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8C48u;
        goto label_1f8c48;
    }
    ctx->pc = 0x1F8C40u;
    {
        const bool branch_taken_0x1f8c40 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8C40u;
        // 0x1f8c44: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8c40) {
            ctx->pc = 0x1F8C4Cu;
            goto label_1f8c4c;
        }
    }
    ctx->pc = 0x1F8C48u;
label_1f8c48:
    // 0x1f8c48: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f8c48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f8c4c:
    // 0x1f8c4c: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_1f8c50:
    if (ctx->pc == 0x1F8C50u) {
        ctx->pc = 0x1F8C54u;
        goto label_1f8c54;
    }
    ctx->pc = 0x1F8C4Cu;
    {
        const bool branch_taken_0x1f8c4c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f8c4c) {
            ctx->pc = 0x1F8C78u;
            goto label_1f8c78;
        }
    }
    ctx->pc = 0x1F8C54u;
label_1f8c54:
    // 0x1f8c54: 0x3c05453b  lui         $a1, 0x453B
    ctx->pc = 0x1f8c54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17723 << 16));
label_1f8c58:
    // 0x1f8c58: 0x34a58000  ori         $a1, $a1, 0x8000
    ctx->pc = 0x1f8c58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
label_1f8c5c:
    // 0x1f8c5c: 0x44851800  mtc1        $a1, $f3
    ctx->pc = 0x1f8c5cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1f8c60:
    // 0x1f8c60: 0x0  nop
    ctx->pc = 0x1f8c60u;
    // NOP
label_1f8c64:
    // 0x1f8c64: 0x46031036  c.le.s      $f2, $f3
    ctx->pc = 0x1f8c64u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f8c68:
    // 0x1f8c68: 0x0  nop
    ctx->pc = 0x1f8c68u;
    // NOP
label_1f8c6c:
    // 0x1f8c6c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_1f8c70:
    if (ctx->pc == 0x1F8C70u) {
        ctx->pc = 0x1F8C74u;
        goto label_1f8c74;
    }
    ctx->pc = 0x1F8C6Cu;
    {
        const bool branch_taken_0x1f8c6c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f8c6c) {
            ctx->pc = 0x1F8C78u;
            goto label_1f8c78;
        }
    }
    ctx->pc = 0x1F8C74u;
label_1f8c74:
    // 0x1f8c74: 0x46001806  mov.s       $f0, $f3
    ctx->pc = 0x1f8c74u;
    ctx->f[0] = FPU_MOV_S(ctx->f[3]);
label_1f8c78:
    // 0x1f8c78: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1f8c78u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1f8c7c:
    // 0x1f8c7c: 0x3c05c0a0  lui         $a1, 0xC0A0
    ctx->pc = 0x1f8c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49312 << 16));
    ctx->pc = 0x1f8c80u;
    return;
}

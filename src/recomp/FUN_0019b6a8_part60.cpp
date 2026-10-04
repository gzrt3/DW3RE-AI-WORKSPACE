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

// Function: FUN_0019b6a8
// Address: 0x19b6a8 - 0x29b6b0
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b6a8_part60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1b8398u: goto label_1b8398;
        case 0x1b839cu: goto label_1b839c;
        case 0x1b83a0u: goto label_1b83a0;
        case 0x1b83a4u: goto label_1b83a4;
        case 0x1b83a8u: goto label_1b83a8;
        case 0x1b83acu: goto label_1b83ac;
        case 0x1b83b0u: goto label_1b83b0;
        case 0x1b83b4u: goto label_1b83b4;
        case 0x1b83b8u: goto label_1b83b8;
        case 0x1b83bcu: goto label_1b83bc;
        case 0x1b83c0u: goto label_1b83c0;
        case 0x1b83c4u: goto label_1b83c4;
        case 0x1b83c8u: goto label_1b83c8;
        case 0x1b83ccu: goto label_1b83cc;
        case 0x1b83d0u: goto label_1b83d0;
        case 0x1b83d4u: goto label_1b83d4;
        case 0x1b83d8u: goto label_1b83d8;
        case 0x1b83dcu: goto label_1b83dc;
        case 0x1b83e0u: goto label_1b83e0;
        case 0x1b83e4u: goto label_1b83e4;
        case 0x1b83e8u: goto label_1b83e8;
        case 0x1b83ecu: goto label_1b83ec;
        case 0x1b83f0u: goto label_1b83f0;
        case 0x1b83f4u: goto label_1b83f4;
        case 0x1b83f8u: goto label_1b83f8;
        case 0x1b83fcu: goto label_1b83fc;
        case 0x1b8400u: goto label_1b8400;
        case 0x1b8404u: goto label_1b8404;
        case 0x1b8408u: goto label_1b8408;
        case 0x1b840cu: goto label_1b840c;
        case 0x1b8410u: goto label_1b8410;
        case 0x1b8414u: goto label_1b8414;
        case 0x1b8418u: goto label_1b8418;
        case 0x1b841cu: goto label_1b841c;
        case 0x1b8420u: goto label_1b8420;
        case 0x1b8424u: goto label_1b8424;
        case 0x1b8428u: goto label_1b8428;
        case 0x1b842cu: goto label_1b842c;
        case 0x1b8430u: goto label_1b8430;
        case 0x1b8434u: goto label_1b8434;
        case 0x1b8438u: goto label_1b8438;
        case 0x1b843cu: goto label_1b843c;
        case 0x1b8440u: goto label_1b8440;
        case 0x1b8444u: goto label_1b8444;
        case 0x1b8448u: goto label_1b8448;
        case 0x1b844cu: goto label_1b844c;
        case 0x1b8450u: goto label_1b8450;
        case 0x1b8454u: goto label_1b8454;
        case 0x1b8458u: goto label_1b8458;
        case 0x1b845cu: goto label_1b845c;
        case 0x1b8460u: goto label_1b8460;
        case 0x1b8464u: goto label_1b8464;
        case 0x1b8468u: goto label_1b8468;
        case 0x1b846cu: goto label_1b846c;
        case 0x1b8470u: goto label_1b8470;
        case 0x1b8474u: goto label_1b8474;
        case 0x1b8478u: goto label_1b8478;
        case 0x1b847cu: goto label_1b847c;
        case 0x1b8480u: goto label_1b8480;
        case 0x1b8484u: goto label_1b8484;
        case 0x1b8488u: goto label_1b8488;
        case 0x1b848cu: goto label_1b848c;
        case 0x1b8490u: goto label_1b8490;
        case 0x1b8494u: goto label_1b8494;
        case 0x1b8498u: goto label_1b8498;
        case 0x1b849cu: goto label_1b849c;
        case 0x1b84a0u: goto label_1b84a0;
        case 0x1b84a4u: goto label_1b84a4;
        case 0x1b84a8u: goto label_1b84a8;
        case 0x1b84acu: goto label_1b84ac;
        case 0x1b84b0u: goto label_1b84b0;
        case 0x1b84b4u: goto label_1b84b4;
        case 0x1b84b8u: goto label_1b84b8;
        case 0x1b84bcu: goto label_1b84bc;
        case 0x1b84c0u: goto label_1b84c0;
        case 0x1b84c4u: goto label_1b84c4;
        case 0x1b84c8u: goto label_1b84c8;
        case 0x1b84ccu: goto label_1b84cc;
        case 0x1b84d0u: goto label_1b84d0;
        case 0x1b84d4u: goto label_1b84d4;
        case 0x1b84d8u: goto label_1b84d8;
        case 0x1b84dcu: goto label_1b84dc;
        case 0x1b84e0u: goto label_1b84e0;
        case 0x1b84e4u: goto label_1b84e4;
        case 0x1b84e8u: goto label_1b84e8;
        case 0x1b84ecu: goto label_1b84ec;
        case 0x1b84f0u: goto label_1b84f0;
        case 0x1b84f4u: goto label_1b84f4;
        case 0x1b84f8u: goto label_1b84f8;
        case 0x1b84fcu: goto label_1b84fc;
        case 0x1b8500u: goto label_1b8500;
        case 0x1b8504u: goto label_1b8504;
        case 0x1b8508u: goto label_1b8508;
        case 0x1b850cu: goto label_1b850c;
        case 0x1b8510u: goto label_1b8510;
        case 0x1b8514u: goto label_1b8514;
        case 0x1b8518u: goto label_1b8518;
        case 0x1b851cu: goto label_1b851c;
        case 0x1b8520u: goto label_1b8520;
        case 0x1b8524u: goto label_1b8524;
        case 0x1b8528u: goto label_1b8528;
        case 0x1b852cu: goto label_1b852c;
        case 0x1b8530u: goto label_1b8530;
        case 0x1b8534u: goto label_1b8534;
        case 0x1b8538u: goto label_1b8538;
        case 0x1b853cu: goto label_1b853c;
        case 0x1b8540u: goto label_1b8540;
        case 0x1b8544u: goto label_1b8544;
        case 0x1b8548u: goto label_1b8548;
        case 0x1b854cu: goto label_1b854c;
        case 0x1b8550u: goto label_1b8550;
        case 0x1b8554u: goto label_1b8554;
        case 0x1b8558u: goto label_1b8558;
        case 0x1b855cu: goto label_1b855c;
        case 0x1b8560u: goto label_1b8560;
        case 0x1b8564u: goto label_1b8564;
        case 0x1b8568u: goto label_1b8568;
        case 0x1b856cu: goto label_1b856c;
        case 0x1b8570u: goto label_1b8570;
        case 0x1b8574u: goto label_1b8574;
        case 0x1b8578u: goto label_1b8578;
        case 0x1b857cu: goto label_1b857c;
        case 0x1b8580u: goto label_1b8580;
        case 0x1b8584u: goto label_1b8584;
        case 0x1b8588u: goto label_1b8588;
        case 0x1b858cu: goto label_1b858c;
        case 0x1b8590u: goto label_1b8590;
        case 0x1b8594u: goto label_1b8594;
        case 0x1b8598u: goto label_1b8598;
        case 0x1b859cu: goto label_1b859c;
        case 0x1b85a0u: goto label_1b85a0;
        case 0x1b85a4u: goto label_1b85a4;
        case 0x1b85a8u: goto label_1b85a8;
        case 0x1b85acu: goto label_1b85ac;
        case 0x1b85b0u: goto label_1b85b0;
        case 0x1b85b4u: goto label_1b85b4;
        case 0x1b85b8u: goto label_1b85b8;
        case 0x1b85bcu: goto label_1b85bc;
        case 0x1b85c0u: goto label_1b85c0;
        case 0x1b85c4u: goto label_1b85c4;
        case 0x1b85c8u: goto label_1b85c8;
        case 0x1b85ccu: goto label_1b85cc;
        case 0x1b85d0u: goto label_1b85d0;
        case 0x1b85d4u: goto label_1b85d4;
        case 0x1b85d8u: goto label_1b85d8;
        case 0x1b85dcu: goto label_1b85dc;
        case 0x1b85e0u: goto label_1b85e0;
        case 0x1b85e4u: goto label_1b85e4;
        case 0x1b85e8u: goto label_1b85e8;
        case 0x1b85ecu: goto label_1b85ec;
        case 0x1b85f0u: goto label_1b85f0;
        case 0x1b85f4u: goto label_1b85f4;
        case 0x1b85f8u: goto label_1b85f8;
        case 0x1b85fcu: goto label_1b85fc;
        case 0x1b8600u: goto label_1b8600;
        case 0x1b8604u: goto label_1b8604;
        case 0x1b8608u: goto label_1b8608;
        case 0x1b860cu: goto label_1b860c;
        case 0x1b8610u: goto label_1b8610;
        case 0x1b8614u: goto label_1b8614;
        case 0x1b8618u: goto label_1b8618;
        case 0x1b861cu: goto label_1b861c;
        case 0x1b8620u: goto label_1b8620;
        case 0x1b8624u: goto label_1b8624;
        case 0x1b8628u: goto label_1b8628;
        case 0x1b862cu: goto label_1b862c;
        case 0x1b8630u: goto label_1b8630;
        case 0x1b8634u: goto label_1b8634;
        case 0x1b8638u: goto label_1b8638;
        case 0x1b863cu: goto label_1b863c;
        case 0x1b8640u: goto label_1b8640;
        case 0x1b8644u: goto label_1b8644;
        case 0x1b8648u: goto label_1b8648;
        case 0x1b864cu: goto label_1b864c;
        case 0x1b8650u: goto label_1b8650;
        case 0x1b8654u: goto label_1b8654;
        case 0x1b8658u: goto label_1b8658;
        case 0x1b865cu: goto label_1b865c;
        case 0x1b8660u: goto label_1b8660;
        case 0x1b8664u: goto label_1b8664;
        case 0x1b8668u: goto label_1b8668;
        case 0x1b866cu: goto label_1b866c;
        case 0x1b8670u: goto label_1b8670;
        case 0x1b8674u: goto label_1b8674;
        case 0x1b8678u: goto label_1b8678;
        case 0x1b867cu: goto label_1b867c;
        case 0x1b8680u: goto label_1b8680;
        case 0x1b8684u: goto label_1b8684;
        case 0x1b8688u: goto label_1b8688;
        case 0x1b868cu: goto label_1b868c;
        case 0x1b8690u: goto label_1b8690;
        case 0x1b8694u: goto label_1b8694;
        case 0x1b8698u: goto label_1b8698;
        case 0x1b869cu: goto label_1b869c;
        case 0x1b86a0u: goto label_1b86a0;
        case 0x1b86a4u: goto label_1b86a4;
        case 0x1b86a8u: goto label_1b86a8;
        case 0x1b86acu: goto label_1b86ac;
        case 0x1b86b0u: goto label_1b86b0;
        case 0x1b86b4u: goto label_1b86b4;
        case 0x1b86b8u: goto label_1b86b8;
        case 0x1b86bcu: goto label_1b86bc;
        case 0x1b86c0u: goto label_1b86c0;
        case 0x1b86c4u: goto label_1b86c4;
        case 0x1b86c8u: goto label_1b86c8;
        case 0x1b86ccu: goto label_1b86cc;
        case 0x1b86d0u: goto label_1b86d0;
        case 0x1b86d4u: goto label_1b86d4;
        case 0x1b86d8u: goto label_1b86d8;
        case 0x1b86dcu: goto label_1b86dc;
        case 0x1b86e0u: goto label_1b86e0;
        case 0x1b86e4u: goto label_1b86e4;
        case 0x1b86e8u: goto label_1b86e8;
        case 0x1b86ecu: goto label_1b86ec;
        case 0x1b86f0u: goto label_1b86f0;
        case 0x1b86f4u: goto label_1b86f4;
        case 0x1b86f8u: goto label_1b86f8;
        case 0x1b86fcu: goto label_1b86fc;
        case 0x1b8700u: goto label_1b8700;
        case 0x1b8704u: goto label_1b8704;
        case 0x1b8708u: goto label_1b8708;
        case 0x1b870cu: goto label_1b870c;
        case 0x1b8710u: goto label_1b8710;
        case 0x1b8714u: goto label_1b8714;
        case 0x1b8718u: goto label_1b8718;
        case 0x1b871cu: goto label_1b871c;
        case 0x1b8720u: goto label_1b8720;
        case 0x1b8724u: goto label_1b8724;
        case 0x1b8728u: goto label_1b8728;
        case 0x1b872cu: goto label_1b872c;
        case 0x1b8730u: goto label_1b8730;
        case 0x1b8734u: goto label_1b8734;
        case 0x1b8738u: goto label_1b8738;
        case 0x1b873cu: goto label_1b873c;
        case 0x1b8740u: goto label_1b8740;
        case 0x1b8744u: goto label_1b8744;
        case 0x1b8748u: goto label_1b8748;
        case 0x1b874cu: goto label_1b874c;
        case 0x1b8750u: goto label_1b8750;
        case 0x1b8754u: goto label_1b8754;
        case 0x1b8758u: goto label_1b8758;
        case 0x1b875cu: goto label_1b875c;
        case 0x1b8760u: goto label_1b8760;
        case 0x1b8764u: goto label_1b8764;
        case 0x1b8768u: goto label_1b8768;
        case 0x1b876cu: goto label_1b876c;
        case 0x1b8770u: goto label_1b8770;
        case 0x1b8774u: goto label_1b8774;
        case 0x1b8778u: goto label_1b8778;
        case 0x1b877cu: goto label_1b877c;
        case 0x1b8780u: goto label_1b8780;
        case 0x1b8784u: goto label_1b8784;
        case 0x1b8788u: goto label_1b8788;
        case 0x1b878cu: goto label_1b878c;
        case 0x1b8790u: goto label_1b8790;
        case 0x1b8794u: goto label_1b8794;
        case 0x1b8798u: goto label_1b8798;
        case 0x1b879cu: goto label_1b879c;
        case 0x1b87a0u: goto label_1b87a0;
        case 0x1b87a4u: goto label_1b87a4;
        case 0x1b87a8u: goto label_1b87a8;
        case 0x1b87acu: goto label_1b87ac;
        case 0x1b87b0u: goto label_1b87b0;
        case 0x1b87b4u: goto label_1b87b4;
        case 0x1b87b8u: goto label_1b87b8;
        case 0x1b87bcu: goto label_1b87bc;
        case 0x1b87c0u: goto label_1b87c0;
        case 0x1b87c4u: goto label_1b87c4;
        case 0x1b87c8u: goto label_1b87c8;
        case 0x1b87ccu: goto label_1b87cc;
        case 0x1b87d0u: goto label_1b87d0;
        case 0x1b87d4u: goto label_1b87d4;
        case 0x1b87d8u: goto label_1b87d8;
        case 0x1b87dcu: goto label_1b87dc;
        case 0x1b87e0u: goto label_1b87e0;
        case 0x1b87e4u: goto label_1b87e4;
        case 0x1b87e8u: goto label_1b87e8;
        case 0x1b87ecu: goto label_1b87ec;
        case 0x1b87f0u: goto label_1b87f0;
        case 0x1b87f4u: goto label_1b87f4;
        case 0x1b87f8u: goto label_1b87f8;
        case 0x1b87fcu: goto label_1b87fc;
        case 0x1b8800u: goto label_1b8800;
        case 0x1b8804u: goto label_1b8804;
        case 0x1b8808u: goto label_1b8808;
        case 0x1b880cu: goto label_1b880c;
        case 0x1b8810u: goto label_1b8810;
        case 0x1b8814u: goto label_1b8814;
        case 0x1b8818u: goto label_1b8818;
        case 0x1b881cu: goto label_1b881c;
        case 0x1b8820u: goto label_1b8820;
        case 0x1b8824u: goto label_1b8824;
        case 0x1b8828u: goto label_1b8828;
        case 0x1b882cu: goto label_1b882c;
        case 0x1b8830u: goto label_1b8830;
        case 0x1b8834u: goto label_1b8834;
        case 0x1b8838u: goto label_1b8838;
        case 0x1b883cu: goto label_1b883c;
        case 0x1b8840u: goto label_1b8840;
        case 0x1b8844u: goto label_1b8844;
        case 0x1b8848u: goto label_1b8848;
        case 0x1b884cu: goto label_1b884c;
        case 0x1b8850u: goto label_1b8850;
        case 0x1b8854u: goto label_1b8854;
        case 0x1b8858u: goto label_1b8858;
        case 0x1b885cu: goto label_1b885c;
        case 0x1b8860u: goto label_1b8860;
        case 0x1b8864u: goto label_1b8864;
        case 0x1b8868u: goto label_1b8868;
        case 0x1b886cu: goto label_1b886c;
        case 0x1b8870u: goto label_1b8870;
        case 0x1b8874u: goto label_1b8874;
        case 0x1b8878u: goto label_1b8878;
        case 0x1b887cu: goto label_1b887c;
        case 0x1b8880u: goto label_1b8880;
        case 0x1b8884u: goto label_1b8884;
        case 0x1b8888u: goto label_1b8888;
        case 0x1b888cu: goto label_1b888c;
        case 0x1b8890u: goto label_1b8890;
        case 0x1b8894u: goto label_1b8894;
        case 0x1b8898u: goto label_1b8898;
        case 0x1b889cu: goto label_1b889c;
        case 0x1b88a0u: goto label_1b88a0;
        case 0x1b88a4u: goto label_1b88a4;
        case 0x1b88a8u: goto label_1b88a8;
        case 0x1b88acu: goto label_1b88ac;
        case 0x1b88b0u: goto label_1b88b0;
        case 0x1b88b4u: goto label_1b88b4;
        case 0x1b88b8u: goto label_1b88b8;
        case 0x1b88bcu: goto label_1b88bc;
        case 0x1b88c0u: goto label_1b88c0;
        case 0x1b88c4u: goto label_1b88c4;
        case 0x1b88c8u: goto label_1b88c8;
        case 0x1b88ccu: goto label_1b88cc;
        case 0x1b88d0u: goto label_1b88d0;
        case 0x1b88d4u: goto label_1b88d4;
        case 0x1b88d8u: goto label_1b88d8;
        case 0x1b88dcu: goto label_1b88dc;
        case 0x1b88e0u: goto label_1b88e0;
        case 0x1b88e4u: goto label_1b88e4;
        case 0x1b88e8u: goto label_1b88e8;
        case 0x1b88ecu: goto label_1b88ec;
        case 0x1b88f0u: goto label_1b88f0;
        case 0x1b88f4u: goto label_1b88f4;
        case 0x1b88f8u: goto label_1b88f8;
        case 0x1b88fcu: goto label_1b88fc;
        case 0x1b8900u: goto label_1b8900;
        case 0x1b8904u: goto label_1b8904;
        case 0x1b8908u: goto label_1b8908;
        case 0x1b890cu: goto label_1b890c;
        case 0x1b8910u: goto label_1b8910;
        case 0x1b8914u: goto label_1b8914;
        case 0x1b8918u: goto label_1b8918;
        case 0x1b891cu: goto label_1b891c;
        case 0x1b8920u: goto label_1b8920;
        case 0x1b8924u: goto label_1b8924;
        case 0x1b8928u: goto label_1b8928;
        case 0x1b892cu: goto label_1b892c;
        case 0x1b8930u: goto label_1b8930;
        case 0x1b8934u: goto label_1b8934;
        case 0x1b8938u: goto label_1b8938;
        case 0x1b893cu: goto label_1b893c;
        case 0x1b8940u: goto label_1b8940;
        case 0x1b8944u: goto label_1b8944;
        case 0x1b8948u: goto label_1b8948;
        case 0x1b894cu: goto label_1b894c;
        case 0x1b8950u: goto label_1b8950;
        case 0x1b8954u: goto label_1b8954;
        case 0x1b8958u: goto label_1b8958;
        case 0x1b895cu: goto label_1b895c;
        case 0x1b8960u: goto label_1b8960;
        case 0x1b8964u: goto label_1b8964;
        case 0x1b8968u: goto label_1b8968;
        case 0x1b896cu: goto label_1b896c;
        case 0x1b8970u: goto label_1b8970;
        case 0x1b8974u: goto label_1b8974;
        case 0x1b8978u: goto label_1b8978;
        case 0x1b897cu: goto label_1b897c;
        case 0x1b8980u: goto label_1b8980;
        case 0x1b8984u: goto label_1b8984;
        case 0x1b8988u: goto label_1b8988;
        case 0x1b898cu: goto label_1b898c;
        case 0x1b8990u: goto label_1b8990;
        case 0x1b8994u: goto label_1b8994;
        case 0x1b8998u: goto label_1b8998;
        case 0x1b899cu: goto label_1b899c;
        case 0x1b89a0u: goto label_1b89a0;
        case 0x1b89a4u: goto label_1b89a4;
        case 0x1b89a8u: goto label_1b89a8;
        case 0x1b89acu: goto label_1b89ac;
        case 0x1b89b0u: goto label_1b89b0;
        case 0x1b89b4u: goto label_1b89b4;
        case 0x1b89b8u: goto label_1b89b8;
        case 0x1b89bcu: goto label_1b89bc;
        case 0x1b89c0u: goto label_1b89c0;
        case 0x1b89c4u: goto label_1b89c4;
        case 0x1b89c8u: goto label_1b89c8;
        case 0x1b89ccu: goto label_1b89cc;
        case 0x1b89d0u: goto label_1b89d0;
        case 0x1b89d4u: goto label_1b89d4;
        case 0x1b89d8u: goto label_1b89d8;
        case 0x1b89dcu: goto label_1b89dc;
        case 0x1b89e0u: goto label_1b89e0;
        case 0x1b89e4u: goto label_1b89e4;
        case 0x1b89e8u: goto label_1b89e8;
        case 0x1b89ecu: goto label_1b89ec;
        case 0x1b89f0u: goto label_1b89f0;
        case 0x1b89f4u: goto label_1b89f4;
        case 0x1b89f8u: goto label_1b89f8;
        case 0x1b89fcu: goto label_1b89fc;
        case 0x1b8a00u: goto label_1b8a00;
        case 0x1b8a04u: goto label_1b8a04;
        case 0x1b8a08u: goto label_1b8a08;
        case 0x1b8a0cu: goto label_1b8a0c;
        case 0x1b8a10u: goto label_1b8a10;
        case 0x1b8a14u: goto label_1b8a14;
        case 0x1b8a18u: goto label_1b8a18;
        case 0x1b8a1cu: goto label_1b8a1c;
        case 0x1b8a20u: goto label_1b8a20;
        case 0x1b8a24u: goto label_1b8a24;
        case 0x1b8a28u: goto label_1b8a28;
        case 0x1b8a2cu: goto label_1b8a2c;
        case 0x1b8a30u: goto label_1b8a30;
        case 0x1b8a34u: goto label_1b8a34;
        case 0x1b8a38u: goto label_1b8a38;
        case 0x1b8a3cu: goto label_1b8a3c;
        case 0x1b8a40u: goto label_1b8a40;
        case 0x1b8a44u: goto label_1b8a44;
        case 0x1b8a48u: goto label_1b8a48;
        case 0x1b8a4cu: goto label_1b8a4c;
        case 0x1b8a50u: goto label_1b8a50;
        case 0x1b8a54u: goto label_1b8a54;
        case 0x1b8a58u: goto label_1b8a58;
        case 0x1b8a5cu: goto label_1b8a5c;
        case 0x1b8a60u: goto label_1b8a60;
        case 0x1b8a64u: goto label_1b8a64;
        case 0x1b8a68u: goto label_1b8a68;
        case 0x1b8a6cu: goto label_1b8a6c;
        case 0x1b8a70u: goto label_1b8a70;
        case 0x1b8a74u: goto label_1b8a74;
        case 0x1b8a78u: goto label_1b8a78;
        case 0x1b8a7cu: goto label_1b8a7c;
        case 0x1b8a80u: goto label_1b8a80;
        case 0x1b8a84u: goto label_1b8a84;
        case 0x1b8a88u: goto label_1b8a88;
        case 0x1b8a8cu: goto label_1b8a8c;
        case 0x1b8a90u: goto label_1b8a90;
        case 0x1b8a94u: goto label_1b8a94;
        case 0x1b8a98u: goto label_1b8a98;
        case 0x1b8a9cu: goto label_1b8a9c;
        case 0x1b8aa0u: goto label_1b8aa0;
        case 0x1b8aa4u: goto label_1b8aa4;
        case 0x1b8aa8u: goto label_1b8aa8;
        case 0x1b8aacu: goto label_1b8aac;
        case 0x1b8ab0u: goto label_1b8ab0;
        case 0x1b8ab4u: goto label_1b8ab4;
        case 0x1b8ab8u: goto label_1b8ab8;
        case 0x1b8abcu: goto label_1b8abc;
        case 0x1b8ac0u: goto label_1b8ac0;
        case 0x1b8ac4u: goto label_1b8ac4;
        case 0x1b8ac8u: goto label_1b8ac8;
        case 0x1b8accu: goto label_1b8acc;
        case 0x1b8ad0u: goto label_1b8ad0;
        case 0x1b8ad4u: goto label_1b8ad4;
        case 0x1b8ad8u: goto label_1b8ad8;
        case 0x1b8adcu: goto label_1b8adc;
        case 0x1b8ae0u: goto label_1b8ae0;
        case 0x1b8ae4u: goto label_1b8ae4;
        case 0x1b8ae8u: goto label_1b8ae8;
        case 0x1b8aecu: goto label_1b8aec;
        case 0x1b8af0u: goto label_1b8af0;
        case 0x1b8af4u: goto label_1b8af4;
        case 0x1b8af8u: goto label_1b8af8;
        case 0x1b8afcu: goto label_1b8afc;
        case 0x1b8b00u: goto label_1b8b00;
        case 0x1b8b04u: goto label_1b8b04;
        case 0x1b8b08u: goto label_1b8b08;
        case 0x1b8b0cu: goto label_1b8b0c;
        case 0x1b8b10u: goto label_1b8b10;
        case 0x1b8b14u: goto label_1b8b14;
        case 0x1b8b18u: goto label_1b8b18;
        case 0x1b8b1cu: goto label_1b8b1c;
        case 0x1b8b20u: goto label_1b8b20;
        case 0x1b8b24u: goto label_1b8b24;
        case 0x1b8b28u: goto label_1b8b28;
        case 0x1b8b2cu: goto label_1b8b2c;
        case 0x1b8b30u: goto label_1b8b30;
        case 0x1b8b34u: goto label_1b8b34;
        case 0x1b8b38u: goto label_1b8b38;
        case 0x1b8b3cu: goto label_1b8b3c;
        case 0x1b8b40u: goto label_1b8b40;
        case 0x1b8b44u: goto label_1b8b44;
        case 0x1b8b48u: goto label_1b8b48;
        case 0x1b8b4cu: goto label_1b8b4c;
        case 0x1b8b50u: goto label_1b8b50;
        case 0x1b8b54u: goto label_1b8b54;
        case 0x1b8b58u: goto label_1b8b58;
        case 0x1b8b5cu: goto label_1b8b5c;
        case 0x1b8b60u: goto label_1b8b60;
        case 0x1b8b64u: goto label_1b8b64;
        default: return;
    }

label_1b8398:
    // 0x1b8398: 0x1462002d  bne         $v1, $v0, . + 4 + (0x2D << 2)
label_1b839c:
    if (ctx->pc == 0x1B839Cu) {
        ctx->pc = 0x1B83A0u;
        goto label_1b83a0;
    }
    ctx->pc = 0x1B8398u;
    {
        const bool branch_taken_0x1b8398 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b8398) {
            ctx->pc = 0x1B8450u;
            goto label_1b8450;
        }
    }
    ctx->pc = 0x1B83A0u;
label_1b83a0:
    // 0x1b83a0: 0x9243003f  lbu         $v1, 0x3F($s2)
    ctx->pc = 0x1b83a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 63)));
label_1b83a4:
    // 0x1b83a4: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1b83a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1b83a8:
    // 0x1b83a8: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
label_1b83ac:
    if (ctx->pc == 0x1B83ACu) {
        ctx->pc = 0x1B83ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B83A8u;
        // 0x1b83ac: 0x306500ff  andi        $a1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B83B0u;
        goto label_1b83b0;
    }
    ctx->pc = 0x1B83A8u;
    {
        const bool branch_taken_0x1b83a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B83ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B83A8u;
        // 0x1b83ac: 0x306500ff  andi        $a1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b83a8) {
            ctx->pc = 0x1B83D4u;
            goto label_1b83d4;
        }
    }
    ctx->pc = 0x1B83B0u;
label_1b83b0:
    // 0x1b83b0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1b83b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1b83b4:
    // 0x1b83b4: 0x90420006  lbu         $v0, 0x6($v0)
    ctx->pc = 0x1b83b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 6)));
label_1b83b8:
    // 0x1b83b8: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1b83b8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_1b83bc:
    // 0x1b83bc: 0xa3a2004c  sb          $v0, 0x4C($sp)
    ctx->pc = 0x1b83bcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 76), (uint8_t)GPR_U32(ctx, 2));
label_1b83c0:
    // 0x1b83c0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1b83c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1b83c4:
    // 0x1b83c4: 0x80420006  lb          $v0, 0x6($v0)
    ctx->pc = 0x1b83c4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 6)));
label_1b83c8:
    // 0x1b83c8: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x1b83c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_1b83cc:
    // 0x1b83cc: 0x10000012  b           . + 4 + (0x12 << 2)
label_1b83d0:
    if (ctx->pc == 0x1B83D0u) {
        ctx->pc = 0x1B83D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B83CCu;
        // 0x1b83d0: 0xa3a2004d  sb          $v0, 0x4D($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 77), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B83D4u;
        goto label_1b83d4;
    }
    ctx->pc = 0x1B83CCu;
    {
        const bool branch_taken_0x1b83cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B83D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B83CCu;
        // 0x1b83d0: 0xa3a2004d  sb          $v0, 0x4D($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 77), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b83cc) {
            ctx->pc = 0x1B8418u;
            goto label_1b8418;
        }
    }
    ctx->pc = 0x1B83D4u;
label_1b83d4:
    // 0x1b83d4: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x1b83d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
label_1b83d8:
    // 0x1b83d8: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x1b83d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_1b83dc:
    // 0x1b83dc: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x1b83dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
label_1b83e0:
    // 0x1b83e0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1b83e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1b83e4:
    // 0x1b83e4: 0x246324b0  addiu       $v1, $v1, 0x24B0
    ctx->pc = 0x1b83e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9392));
label_1b83e8:
    // 0x1b83e8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1b83e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1b83ec:
    // 0x1b83ec: 0x244224b1  addiu       $v0, $v0, 0x24B1
    ctx->pc = 0x1b83ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9393));
label_1b83f0:
    // 0x1b83f0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1b83f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1b83f4:
    // 0x1b83f4: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1b83f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1b83f8:
    // 0x1b83f8: 0xa3a3004c  sb          $v1, 0x4C($sp)
    ctx->pc = 0x1b83f8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 76), (uint8_t)GPR_U32(ctx, 3));
label_1b83fc:
    // 0x1b83fc: 0x9244003f  lbu         $a0, 0x3F($s2)
    ctx->pc = 0x1b83fcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 63)));
label_1b8400:
    // 0x1b8400: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1b8400u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_1b8404:
    // 0x1b8404: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1b8404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1b8408:
    // 0x1b8408: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1b8408u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1b840c:
    // 0x1b840c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b840cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1b8410:
    // 0x1b8410: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1b8410u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1b8414:
    // 0x1b8414: 0xa3a2004d  sb          $v0, 0x4D($sp)
    ctx->pc = 0x1b8414u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 77), (uint8_t)GPR_U32(ctx, 2));
label_1b8418:
    // 0x1b8418: 0x9242003a  lbu         $v0, 0x3A($s2)
    ctx->pc = 0x1b8418u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 58)));
label_1b841c:
    // 0x1b841c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1b841cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_1b8420:
    // 0x1b8420: 0x10400151  beqz        $v0, . + 4 + (0x151 << 2)
label_1b8424:
    if (ctx->pc == 0x1B8424u) {
        ctx->pc = 0x1B8428u;
        goto label_1b8428;
    }
    ctx->pc = 0x1B8420u;
    {
        const bool branch_taken_0x1b8420 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8420) {
            ctx->pc = 0x1B8968u;
            goto label_1b8968;
        }
    }
    ctx->pc = 0x1B8428u;
label_1b8428:
    // 0x1b8428: 0x92430024  lbu         $v1, 0x24($s2)
    ctx->pc = 0x1b8428u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 36)));
label_1b842c:
    // 0x1b842c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_1b8430:
    if (ctx->pc == 0x1B8430u) {
        ctx->pc = 0x1B8434u;
        goto label_1b8434;
    }
    ctx->pc = 0x1B842Cu;
    {
        const bool branch_taken_0x1b842c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b842c) {
            ctx->pc = 0x1B8440u;
            goto label_1b8440;
        }
    }
    ctx->pc = 0x1B8434u;
label_1b8434:
    // 0x1b8434: 0x92420025  lbu         $v0, 0x25($s2)
    ctx->pc = 0x1b8434u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 37)));
label_1b8438:
    // 0x1b8438: 0x1040014b  beqz        $v0, . + 4 + (0x14B << 2)
label_1b843c:
    if (ctx->pc == 0x1B843Cu) {
        ctx->pc = 0x1B8440u;
        goto label_1b8440;
    }
    ctx->pc = 0x1B8438u;
    {
        const bool branch_taken_0x1b8438 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8438) {
            ctx->pc = 0x1B8968u;
            goto label_1b8968;
        }
    }
    ctx->pc = 0x1B8440u;
label_1b8440:
    // 0x1b8440: 0xa3a3004c  sb          $v1, 0x4C($sp)
    ctx->pc = 0x1b8440u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 76), (uint8_t)GPR_U32(ctx, 3));
label_1b8444:
    // 0x1b8444: 0x92420025  lbu         $v0, 0x25($s2)
    ctx->pc = 0x1b8444u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 37)));
label_1b8448:
    // 0x1b8448: 0x10000147  b           . + 4 + (0x147 << 2)
label_1b844c:
    if (ctx->pc == 0x1B844Cu) {
        ctx->pc = 0x1B844Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8448u;
        // 0x1b844c: 0xa3a2004d  sb          $v0, 0x4D($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 77), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8450u;
        goto label_1b8450;
    }
    ctx->pc = 0x1B8448u;
    {
        const bool branch_taken_0x1b8448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B844Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8448u;
        // 0x1b844c: 0xa3a2004d  sb          $v0, 0x4D($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 77), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8448) {
            ctx->pc = 0x1B8968u;
            goto label_1b8968;
        }
    }
    ctx->pc = 0x1B8450u;
label_1b8450:
    // 0x1b8450: 0x9242003b  lbu         $v0, 0x3B($s2)
    ctx->pc = 0x1b8450u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 59)));
label_1b8454:
    // 0x1b8454: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
label_1b8458:
    if (ctx->pc == 0x1B8458u) {
        ctx->pc = 0x1B845Cu;
        goto label_1b845c;
    }
    ctx->pc = 0x1B8454u;
    {
        const bool branch_taken_0x1b8454 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8454) {
            ctx->pc = 0x1B8500u;
            goto label_1b8500;
        }
    }
    ctx->pc = 0x1B845Cu;
label_1b845c:
    // 0x1b845c: 0x92420034  lbu         $v0, 0x34($s2)
    ctx->pc = 0x1b845cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 52)));
label_1b8460:
    // 0x1b8460: 0x3c04002f  lui         $a0, 0x2F
    ctx->pc = 0x1b8460u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
label_1b8464:
    // 0x1b8464: 0x9243003c  lbu         $v1, 0x3C($s2)
    ctx->pc = 0x1b8464u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 60)));
label_1b8468:
    // 0x1b8468: 0x24842570  addiu       $a0, $a0, 0x2570
    ctx->pc = 0x1b8468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9584));
label_1b846c:
    // 0x1b846c: 0x38460001  xori        $a2, $v0, 0x1
    ctx->pc = 0x1b846cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1b8470:
    // 0x1b8470: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1b8470u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1b8474:
    // 0x1b8474: 0x62a00  sll         $a1, $a2, 8
    ctx->pc = 0x1b8474u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_1b8478:
    // 0x1b8478: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b8478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1b847c:
    // 0x1b847c: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x1b847cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1b8480:
    // 0x1b8480: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1b8480u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1b8484:
    // 0x1b8484: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x1b8484u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1b8488:
    // 0x1b8488: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1b8488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1b848c:
    // 0x1b848c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1b848cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1b8490:
    // 0x1b8490: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1b8490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1b8494:
    // 0x1b8494: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x1b8494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_1b8498:
    // 0x1b8498: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1b8498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1b849c:
    // 0x1b849c: 0x90640024  lbu         $a0, 0x24($v1)
    ctx->pc = 0x1b849cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 36)));
label_1b84a0:
    // 0x1b84a0: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
label_1b84a4:
    if (ctx->pc == 0x1B84A4u) {
        ctx->pc = 0x1B84A8u;
        goto label_1b84a8;
    }
    ctx->pc = 0x1B84A0u;
    {
        const bool branch_taken_0x1b84a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b84a0) {
            ctx->pc = 0x1B84B4u;
            goto label_1b84b4;
        }
    }
    ctx->pc = 0x1B84A8u;
label_1b84a8:
    // 0x1b84a8: 0x90620025  lbu         $v0, 0x25($v1)
    ctx->pc = 0x1b84a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 37)));
label_1b84ac:
    // 0x1b84ac: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1b84b0:
    if (ctx->pc == 0x1B84B0u) {
        ctx->pc = 0x1B84B4u;
        goto label_1b84b4;
    }
    ctx->pc = 0x1B84ACu;
    {
        const bool branch_taken_0x1b84ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b84ac) {
            ctx->pc = 0x1B84C4u;
            goto label_1b84c4;
        }
    }
    ctx->pc = 0x1B84B4u;
label_1b84b4:
    // 0x1b84b4: 0xa3a4004c  sb          $a0, 0x4C($sp)
    ctx->pc = 0x1b84b4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 76), (uint8_t)GPR_U32(ctx, 4));
label_1b84b8:
    // 0x1b84b8: 0x90620025  lbu         $v0, 0x25($v1)
    ctx->pc = 0x1b84b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 37)));
label_1b84bc:
    // 0x1b84bc: 0x1000012a  b           . + 4 + (0x12A << 2)
label_1b84c0:
    if (ctx->pc == 0x1B84C0u) {
        ctx->pc = 0x1B84C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B84BCu;
        // 0x1b84c0: 0xa3a2004d  sb          $v0, 0x4D($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 77), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B84C4u;
        goto label_1b84c4;
    }
    ctx->pc = 0x1B84BCu;
    {
        const bool branch_taken_0x1b84bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B84C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B84BCu;
        // 0x1b84c0: 0xa3a2004d  sb          $v0, 0x4D($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 77), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b84bc) {
            ctx->pc = 0x1B8968u;
            goto label_1b8968;
        }
    }
    ctx->pc = 0x1B84C4u;
label_1b84c4:
    // 0x1b84c4: 0x92440024  lbu         $a0, 0x24($s2)
    ctx->pc = 0x1b84c4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 36)));
label_1b84c8:
    // 0x1b84c8: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
label_1b84cc:
    if (ctx->pc == 0x1B84CCu) {
        ctx->pc = 0x1B84D0u;
        goto label_1b84d0;
    }
    ctx->pc = 0x1B84C8u;
    {
        const bool branch_taken_0x1b84c8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b84c8) {
            ctx->pc = 0x1B84DCu;
            goto label_1b84dc;
        }
    }
    ctx->pc = 0x1B84D0u;
label_1b84d0:
    // 0x1b84d0: 0x92420025  lbu         $v0, 0x25($s2)
    ctx->pc = 0x1b84d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 37)));
label_1b84d4:
    // 0x1b84d4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1b84d8:
    if (ctx->pc == 0x1B84D8u) {
        ctx->pc = 0x1B84DCu;
        goto label_1b84dc;
    }
    ctx->pc = 0x1B84D4u;
    {
        const bool branch_taken_0x1b84d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b84d4) {
            ctx->pc = 0x1B84ECu;
            goto label_1b84ec;
        }
    }
    ctx->pc = 0x1B84DCu;
label_1b84dc:
    // 0x1b84dc: 0xa3a4004c  sb          $a0, 0x4C($sp)
    ctx->pc = 0x1b84dcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 76), (uint8_t)GPR_U32(ctx, 4));
label_1b84e0:
    // 0x1b84e0: 0x92420025  lbu         $v0, 0x25($s2)
    ctx->pc = 0x1b84e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 37)));
label_1b84e4:
    // 0x1b84e4: 0x10000120  b           . + 4 + (0x120 << 2)
label_1b84e8:
    if (ctx->pc == 0x1B84E8u) {
        ctx->pc = 0x1B84E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B84E4u;
        // 0x1b84e8: 0xa3a2004d  sb          $v0, 0x4D($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 77), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B84ECu;
        goto label_1b84ec;
    }
    ctx->pc = 0x1B84E4u;
    {
        const bool branch_taken_0x1b84e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B84E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B84E4u;
        // 0x1b84e8: 0xa3a2004d  sb          $v0, 0x4D($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 77), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b84e4) {
            ctx->pc = 0x1B8968u;
            goto label_1b8968;
        }
    }
    ctx->pc = 0x1B84ECu;
label_1b84ec:
    // 0x1b84ec: 0x90620022  lbu         $v0, 0x22($v1)
    ctx->pc = 0x1b84ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 34)));
label_1b84f0:
    // 0x1b84f0: 0xa3a2004c  sb          $v0, 0x4C($sp)
    ctx->pc = 0x1b84f0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 76), (uint8_t)GPR_U32(ctx, 2));
label_1b84f4:
    // 0x1b84f4: 0x90620023  lbu         $v0, 0x23($v1)
    ctx->pc = 0x1b84f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 35)));
label_1b84f8:
    // 0x1b84f8: 0x1000011b  b           . + 4 + (0x11B << 2)
label_1b84fc:
    if (ctx->pc == 0x1B84FCu) {
        ctx->pc = 0x1B84FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B84F8u;
        // 0x1b84fc: 0xa3a2004d  sb          $v0, 0x4D($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 77), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8500u;
        goto label_1b8500;
    }
    ctx->pc = 0x1B84F8u;
    {
        const bool branch_taken_0x1b84f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B84FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B84F8u;
        // 0x1b84fc: 0xa3a2004d  sb          $v0, 0x4D($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 77), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b84f8) {
            ctx->pc = 0x1B8968u;
            goto label_1b8968;
        }
    }
    ctx->pc = 0x1B8500u;
label_1b8500:
    // 0x1b8500: 0x9243003c  lbu         $v1, 0x3C($s2)
    ctx->pc = 0x1b8500u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 60)));
label_1b8504:
    // 0x1b8504: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1b8504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1b8508:
    // 0x1b8508: 0x1062001f  beq         $v1, $v0, . + 4 + (0x1F << 2)
label_1b850c:
    if (ctx->pc == 0x1B850Cu) {
        ctx->pc = 0x1B8510u;
        goto label_1b8510;
    }
    ctx->pc = 0x1B8508u;
    {
        const bool branch_taken_0x1b8508 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b8508) {
            ctx->pc = 0x1B8588u;
            goto label_1b8588;
        }
    }
    ctx->pc = 0x1B8510u;
label_1b8510:
    // 0x1b8510: 0x92460034  lbu         $a2, 0x34($s2)
    ctx->pc = 0x1b8510u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 52)));
label_1b8514:
    // 0x1b8514: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1b8514u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1b8518:
    // 0x1b8518: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1b8518u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1b851c:
    // 0x1b851c: 0x3c05002f  lui         $a1, 0x2F
    ctx->pc = 0x1b851cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47 << 16));
label_1b8520:
    // 0x1b8520: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1b8520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1b8524:
    // 0x1b8524: 0x24a52592  addiu       $a1, $a1, 0x2592
    ctx->pc = 0x1b8524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9618));
label_1b8528:
    // 0x1b8528: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x1b8528u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
label_1b852c:
    // 0x1b852c: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x1b852cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1b8530:
    // 0x1b8530: 0x24422593  addiu       $v0, $v0, 0x2593
    ctx->pc = 0x1b8530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9619));
label_1b8534:
    // 0x1b8534: 0x38c60001  xori        $a2, $a2, 0x1
    ctx->pc = 0x1b8534u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)1);
label_1b8538:
    // 0x1b8538: 0x61a00  sll         $v1, $a2, 8
    ctx->pc = 0x1b8538u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_1b853c:
    // 0x1b853c: 0x663023  subu        $a2, $v1, $a2
    ctx->pc = 0x1b853cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1b8540:
    // 0x1b8540: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x1b8540u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_1b8544:
    // 0x1b8544: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1b8544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_1b8548:
    // 0x1b8548: 0x330c0  sll         $a2, $v1, 3
    ctx->pc = 0x1b8548u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1b854c:
    // 0x1b854c: 0xa61821  addu        $v1, $a1, $a2
    ctx->pc = 0x1b854cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1b8550:
    // 0x1b8550: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1b8550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1b8554:
    // 0x1b8554: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x1b8554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_1b8558:
    // 0x1b8558: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x1b8558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_1b855c:
    // 0x1b855c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1b855cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1b8560:
    // 0x1b8560: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1b8560u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1b8564:
    // 0x1b8564: 0xa3a3004c  sb          $v1, 0x4C($sp)
    ctx->pc = 0x1b8564u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 76), (uint8_t)GPR_U32(ctx, 3));
label_1b8568:
    // 0x1b8568: 0x9244003c  lbu         $a0, 0x3C($s2)
    ctx->pc = 0x1b8568u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 60)));
label_1b856c:
    // 0x1b856c: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1b856cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_1b8570:
    // 0x1b8570: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1b8570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1b8574:
    // 0x1b8574: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1b8574u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1b8578:
    // 0x1b8578: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b8578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1b857c:
    // 0x1b857c: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1b857cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1b8580:
    // 0x1b8580: 0x100000f9  b           . + 4 + (0xF9 << 2)
label_1b8584:
    if (ctx->pc == 0x1B8584u) {
        ctx->pc = 0x1B8584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8580u;
        // 0x1b8584: 0xa3a2004d  sb          $v0, 0x4D($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 77), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8588u;
        goto label_1b8588;
    }
    ctx->pc = 0x1B8580u;
    {
        const bool branch_taken_0x1b8580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8580u;
        // 0x1b8584: 0xa3a2004d  sb          $v0, 0x4D($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 77), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8580) {
            ctx->pc = 0x1B8968u;
            goto label_1b8968;
        }
    }
    ctx->pc = 0x1B8588u;
label_1b8588:
    // 0x1b8588: 0x92420037  lbu         $v0, 0x37($s2)
    ctx->pc = 0x1b8588u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 55)));
label_1b858c:
    // 0x1b858c: 0x14400038  bnez        $v0, . + 4 + (0x38 << 2)
label_1b8590:
    if (ctx->pc == 0x1B8590u) {
        ctx->pc = 0x1B8594u;
        goto label_1b8594;
    }
    ctx->pc = 0x1B858Cu;
    {
        const bool branch_taken_0x1b858c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b858c) {
            ctx->pc = 0x1B8670u;
            goto label_1b8670;
        }
    }
    ctx->pc = 0x1B8594u;
label_1b8594:
    // 0x1b8594: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1b8594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1b8598:
    // 0x1b8598: 0x27b0004d  addiu       $s0, $sp, 0x4D
    ctx->pc = 0x1b8598u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 77));
label_1b859c:
    // 0x1b859c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1b859cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1b85a0:
    // 0x1b85a0: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1b85a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1b85a4:
    // 0x1b85a4: 0x90630005  lbu         $v1, 0x5($v1)
    ctx->pc = 0x1b85a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5)));
label_1b85a8:
    // 0x1b85a8: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x1b85a8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
label_1b85ac:
    // 0x1b85ac: 0xa3a3004c  sb          $v1, 0x4C($sp)
    ctx->pc = 0x1b85acu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 76), (uint8_t)GPR_U32(ctx, 3));
label_1b85b0:
    // 0x1b85b0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1b85b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1b85b4:
    // 0x1b85b4: 0x80630005  lb          $v1, 0x5($v1)
    ctx->pc = 0x1b85b4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 5)));
label_1b85b8:
    // 0x1b85b8: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x1b85b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_1b85bc:
    // 0x1b85bc: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x1b85bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
label_1b85c0:
    // 0x1b85c0: 0x9023490d  lbu         $v1, 0x490D($at)
    ctx->pc = 0x1b85c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18701)));
label_1b85c4:
    // 0x1b85c4: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
label_1b85c8:
    if (ctx->pc == 0x1B85C8u) {
        ctx->pc = 0x1B85CCu;
        goto label_1b85cc;
    }
    ctx->pc = 0x1B85C4u;
    {
        const bool branch_taken_0x1b85c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b85c4) {
            ctx->pc = 0x1B8604u;
            goto label_1b8604;
        }
    }
    ctx->pc = 0x1B85CCu;
label_1b85cc:
    // 0x1b85cc: 0x93a2004c  lbu         $v0, 0x4C($sp)
    ctx->pc = 0x1b85ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 76)));
label_1b85d0:
    // 0x1b85d0: 0x28420008  slti        $v0, $v0, 0x8
    ctx->pc = 0x1b85d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
label_1b85d4:
    // 0x1b85d4: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_1b85d8:
    if (ctx->pc == 0x1B85D8u) {
        ctx->pc = 0x1B85DCu;
        goto label_1b85dc;
    }
    ctx->pc = 0x1B85D4u;
    {
        const bool branch_taken_0x1b85d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b85d4) {
            ctx->pc = 0x1B8604u;
            goto label_1b8604;
        }
    }
    ctx->pc = 0x1B85DCu;
label_1b85dc:
    // 0x1b85dc: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1b85dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1b85e0:
    // 0x1b85e0: 0x90420005  lbu         $v0, 0x5($v0)
    ctx->pc = 0x1b85e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5)));
label_1b85e4:
    // 0x1b85e4: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1b85e4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_1b85e8:
    // 0x1b85e8: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x1b85e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
label_1b85ec:
    // 0x1b85ec: 0xa3a2004c  sb          $v0, 0x4C($sp)
    ctx->pc = 0x1b85ecu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 76), (uint8_t)GPR_U32(ctx, 2));
label_1b85f0:
    // 0x1b85f0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1b85f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1b85f4:
    // 0x1b85f4: 0x80420005  lb          $v0, 0x5($v0)
    ctx->pc = 0x1b85f4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 5)));
label_1b85f8:
    // 0x1b85f8: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x1b85f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_1b85fc:
    // 0x1b85fc: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1b85fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1b8600:
    // 0x1b8600: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x1b8600u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
label_1b8604:
    // 0x1b8604: 0x93a3004c  lbu         $v1, 0x4C($sp)
    ctx->pc = 0x1b8604u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 76)));
label_1b8608:
    // 0x1b8608: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1b8608u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1b860c:
    // 0x1b860c: 0x9246003a  lbu         $a2, 0x3A($s2)
    ctx->pc = 0x1b860cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 58)));
label_1b8610:
    // 0x1b8610: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1b8610u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1b8614:
    // 0x1b8614: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1b8614u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_1b8618:
    // 0x1b8618: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x1b8618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1b861c:
    // 0x1b861c: 0xc04494c  jal         func_112530
label_1b8620:
    if (ctx->pc == 0x1B8620u) {
        ctx->pc = 0x1B8620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B861Cu;
        // 0x1b8620: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8624u;
        goto label_1b8624;
    }
    ctx->pc = 0x1B861Cu;
    SET_GPR_U32(ctx, 31, 0x1B8624u);
    ctx->pc = 0x1B8620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B861Cu;
    // 0x1b8620: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112530u, 0x1B861Cu, 0x1B8624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8624u;
label_1b8624:
    // 0x1b8624: 0x104000d0  beqz        $v0, . + 4 + (0xD0 << 2)
label_1b8628:
    if (ctx->pc == 0x1B8628u) {
        ctx->pc = 0x1B862Cu;
        goto label_1b862c;
    }
    ctx->pc = 0x1B8624u;
    {
        const bool branch_taken_0x1b8624 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8624) {
            ctx->pc = 0x1B8968u;
            goto label_1b8968;
        }
    }
    ctx->pc = 0x1B862Cu;
label_1b862c:
    // 0x1b862c: 0x92440024  lbu         $a0, 0x24($s2)
    ctx->pc = 0x1b862cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 36)));
label_1b8630:
    // 0x1b8630: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
label_1b8634:
    if (ctx->pc == 0x1B8634u) {
        ctx->pc = 0x1B8638u;
        goto label_1b8638;
    }
    ctx->pc = 0x1B8630u;
    {
        const bool branch_taken_0x1b8630 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b8630) {
            ctx->pc = 0x1B8644u;
            goto label_1b8644;
        }
    }
    ctx->pc = 0x1B8638u;
label_1b8638:
    // 0x1b8638: 0x92420025  lbu         $v0, 0x25($s2)
    ctx->pc = 0x1b8638u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 37)));
label_1b863c:
    // 0x1b863c: 0x104000ca  beqz        $v0, . + 4 + (0xCA << 2)
label_1b8640:
    if (ctx->pc == 0x1B8640u) {
        ctx->pc = 0x1B8644u;
        goto label_1b8644;
    }
    ctx->pc = 0x1B863Cu;
    {
        const bool branch_taken_0x1b863c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b863c) {
            ctx->pc = 0x1B8968u;
            goto label_1b8968;
        }
    }
    ctx->pc = 0x1B8644u;
label_1b8644:
    // 0x1b8644: 0x92420022  lbu         $v0, 0x22($s2)
    ctx->pc = 0x1b8644u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 34)));
label_1b8648:
    // 0x1b8648: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
label_1b864c:
    if (ctx->pc == 0x1B864Cu) {
        ctx->pc = 0x1B8650u;
        goto label_1b8650;
    }
    ctx->pc = 0x1B8648u;
    {
        const bool branch_taken_0x1b8648 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b8648) {
            ctx->pc = 0x1B8660u;
            goto label_1b8660;
        }
    }
    ctx->pc = 0x1B8650u;
label_1b8650:
    // 0x1b8650: 0x92430025  lbu         $v1, 0x25($s2)
    ctx->pc = 0x1b8650u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 37)));
label_1b8654:
    // 0x1b8654: 0x92420023  lbu         $v0, 0x23($s2)
    ctx->pc = 0x1b8654u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 35)));
label_1b8658:
    // 0x1b8658: 0x106200c3  beq         $v1, $v0, . + 4 + (0xC3 << 2)
label_1b865c:
    if (ctx->pc == 0x1B865Cu) {
        ctx->pc = 0x1B8660u;
        goto label_1b8660;
    }
    ctx->pc = 0x1B8658u;
    {
        const bool branch_taken_0x1b8658 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b8658) {
            ctx->pc = 0x1B8968u;
            goto label_1b8968;
        }
    }
    ctx->pc = 0x1B8660u;
label_1b8660:
    // 0x1b8660: 0xa3a4004c  sb          $a0, 0x4C($sp)
    ctx->pc = 0x1b8660u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 76), (uint8_t)GPR_U32(ctx, 4));
label_1b8664:
    // 0x1b8664: 0x92420025  lbu         $v0, 0x25($s2)
    ctx->pc = 0x1b8664u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 37)));
label_1b8668:
    // 0x1b8668: 0x100000bf  b           . + 4 + (0xBF << 2)
label_1b866c:
    if (ctx->pc == 0x1B866Cu) {
        ctx->pc = 0x1B866Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8668u;
        // 0x1b866c: 0xa2020000  sb          $v0, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8670u;
        goto label_1b8670;
    }
    ctx->pc = 0x1B8668u;
    {
        const bool branch_taken_0x1b8668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B866Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8668u;
        // 0x1b866c: 0xa2020000  sb          $v0, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8668) {
            ctx->pc = 0x1B8968u;
            goto label_1b8968;
        }
    }
    ctx->pc = 0x1B8670u;
label_1b8670:
    // 0x1b8670: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1b8670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1b8674:
    // 0x1b8674: 0x90620014  lbu         $v0, 0x14($v1)
    ctx->pc = 0x1b8674u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 20)));
label_1b8678:
    // 0x1b8678: 0x14440055  bne         $v0, $a0, . + 4 + (0x55 << 2)
label_1b867c:
    if (ctx->pc == 0x1B867Cu) {
        ctx->pc = 0x1B8680u;
        goto label_1b8680;
    }
    ctx->pc = 0x1B8678u;
    {
        const bool branch_taken_0x1b8678 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x1b8678) {
            ctx->pc = 0x1B87D0u;
            goto label_1b87d0;
        }
    }
    ctx->pc = 0x1B8680u;
label_1b8680:
    // 0x1b8680: 0x90670016  lbu         $a3, 0x16($v1)
    ctx->pc = 0x1b8680u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 22)));
label_1b8684:
    // 0x1b8684: 0x3c08002f  lui         $t0, 0x2F
    ctx->pc = 0x1b8684u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)47 << 16));
label_1b8688:
    // 0x1b8688: 0x3c06002f  lui         $a2, 0x2F
    ctx->pc = 0x1b8688u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)47 << 16));
label_1b868c:
    // 0x1b868c: 0x3c05002f  lui         $a1, 0x2F
    ctx->pc = 0x1b868cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47 << 16));
label_1b8690:
    // 0x1b8690: 0x92490034  lbu         $t1, 0x34($s2)
    ctx->pc = 0x1b8690u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 52)));
label_1b8694:
    // 0x1b8694: 0x3c04002f  lui         $a0, 0x2F
    ctx->pc = 0x1b8694u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
label_1b8698:
    // 0x1b8698: 0x25082592  addiu       $t0, $t0, 0x2592
    ctx->pc = 0x1b8698u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 9618));
label_1b869c:
    // 0x1b869c: 0x24c62593  addiu       $a2, $a2, 0x2593
    ctx->pc = 0x1b869cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9619));
label_1b86a0:
    // 0x1b86a0: 0x27a2004d  addiu       $v0, $sp, 0x4D
    ctx->pc = 0x1b86a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 77));
label_1b86a4:
    // 0x1b86a4: 0x24a52590  addiu       $a1, $a1, 0x2590
    ctx->pc = 0x1b86a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9616));
label_1b86a8:
    // 0x1b86a8: 0x248425aa  addiu       $a0, $a0, 0x25AA
    ctx->pc = 0x1b86a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9642));
label_1b86ac:
    // 0x1b86ac: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x1b86acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_1b86b0:
    // 0x1b86b0: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x1b86b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_1b86b4:
    // 0x1b86b4: 0x93a00  sll         $a3, $t1, 8
    ctx->pc = 0x1b86b4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 9), 8));
label_1b86b8:
    // 0x1b86b8: 0xe94823  subu        $t1, $a3, $t1
    ctx->pc = 0x1b86b8u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
label_1b86bc:
    // 0x1b86bc: 0x338c0  sll         $a3, $v1, 3
    ctx->pc = 0x1b86bcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1b86c0:
    // 0x1b86c0: 0x918c0  sll         $v1, $t1, 3
    ctx->pc = 0x1b86c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
label_1b86c4:
    // 0x1b86c4: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x1b86c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
label_1b86c8:
    // 0x1b86c8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1b86c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1b86cc:
    // 0x1b86cc: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x1b86ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_1b86d0:
    // 0x1b86d0: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x1b86d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_1b86d4:
    // 0x1b86d4: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x1b86d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_1b86d8:
    // 0x1b86d8: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1b86d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1b86dc:
    // 0x1b86dc: 0xa3a3004c  sb          $v1, 0x4C($sp)
    ctx->pc = 0x1b86dcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 76), (uint8_t)GPR_U32(ctx, 3));
label_1b86e0:
    // 0x1b86e0: 0x92480034  lbu         $t0, 0x34($s2)
    ctx->pc = 0x1b86e0u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 52)));
label_1b86e4:
    // 0x1b86e4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1b86e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1b86e8:
    // 0x1b86e8: 0x83a00  sll         $a3, $t0, 8
    ctx->pc = 0x1b86e8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
label_1b86ec:
    // 0x1b86ec: 0xe84023  subu        $t0, $a3, $t0
    ctx->pc = 0x1b86ecu;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_1b86f0:
    // 0x1b86f0: 0x90670016  lbu         $a3, 0x16($v1)
    ctx->pc = 0x1b86f0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 22)));
label_1b86f4:
    // 0x1b86f4: 0x818c0  sll         $v1, $t0, 3
    ctx->pc = 0x1b86f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
label_1b86f8:
    // 0x1b86f8: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x1b86f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_1b86fc:
    // 0x1b86fc: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1b86fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1b8700:
    // 0x1b8700: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1b8700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_1b8704:
    // 0x1b8704: 0x730c0  sll         $a2, $a3, 3
    ctx->pc = 0x1b8704u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_1b8708:
    // 0x1b8708: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x1b8708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_1b870c:
    // 0x1b870c: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x1b870cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_1b8710:
    // 0x1b8710: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x1b8710u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_1b8714:
    // 0x1b8714: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1b8714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1b8718:
    // 0x1b8718: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1b8718u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1b871c:
    // 0x1b871c: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1b871cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
label_1b8720:
    // 0x1b8720: 0x92470034  lbu         $a3, 0x34($s2)
    ctx->pc = 0x1b8720u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 52)));
label_1b8724:
    // 0x1b8724: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1b8724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1b8728:
    // 0x1b8728: 0x73200  sll         $a2, $a3, 8
    ctx->pc = 0x1b8728u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_1b872c:
    // 0x1b872c: 0xc73823  subu        $a3, $a2, $a3
    ctx->pc = 0x1b872cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_1b8730:
    // 0x1b8730: 0x90660016  lbu         $a2, 0x16($v1)
    ctx->pc = 0x1b8730u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 22)));
label_1b8734:
    // 0x1b8734: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x1b8734u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_1b8738:
    // 0x1b8738: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x1b8738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_1b873c:
    // 0x1b873c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1b873cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1b8740:
    // 0x1b8740: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1b8740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_1b8744:
    // 0x1b8744: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x1b8744u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_1b8748:
    // 0x1b8748: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x1b8748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_1b874c:
    // 0x1b874c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1b874cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1b8750:
    // 0x1b8750: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x1b8750u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1b8754:
    // 0x1b8754: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1b8754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1b8758:
    // 0x1b8758: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1b8758u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1b875c:
    // 0x1b875c: 0xa2430021  sb          $v1, 0x21($s2)
    ctx->pc = 0x1b875cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 33), (uint8_t)GPR_U32(ctx, 3));
label_1b8760:
    // 0x1b8760: 0x92460034  lbu         $a2, 0x34($s2)
    ctx->pc = 0x1b8760u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 52)));
label_1b8764:
    // 0x1b8764: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1b8764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1b8768:
    // 0x1b8768: 0x9247003a  lbu         $a3, 0x3A($s2)
    ctx->pc = 0x1b8768u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 58)));
label_1b876c:
    // 0x1b876c: 0x62a00  sll         $a1, $a2, 8
    ctx->pc = 0x1b876cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_1b8770:
    // 0x1b8770: 0xa63023  subu        $a2, $a1, $a2
    ctx->pc = 0x1b8770u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1b8774:
    // 0x1b8774: 0x90650016  lbu         $a1, 0x16($v1)
    ctx->pc = 0x1b8774u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 22)));
label_1b8778:
    // 0x1b8778: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x1b8778u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_1b877c:
    // 0x1b877c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1b877cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_1b8780:
    // 0x1b8780: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1b8780u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1b8784:
    // 0x1b8784: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1b8784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1b8788:
    // 0x1b8788: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x1b8788u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1b878c:
    // 0x1b878c: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x1b878cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_1b8790:
    // 0x1b8790: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1b8790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1b8794:
    // 0x1b8794: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x1b8794u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_1b8798:
    // 0x1b8798: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1b8798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1b879c:
    // 0x1b879c: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1b879cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1b87a0:
    // 0x1b87a0: 0x10e30071  beq         $a3, $v1, . + 4 + (0x71 << 2)
label_1b87a4:
    if (ctx->pc == 0x1B87A4u) {
        ctx->pc = 0x1B87A8u;
        goto label_1b87a8;
    }
    ctx->pc = 0x1B87A0u;
    {
        const bool branch_taken_0x1b87a0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x1b87a0) {
            ctx->pc = 0x1B8968u;
            goto label_1b8968;
        }
    }
    ctx->pc = 0x1B87A8u;
label_1b87a8:
    // 0x1b87a8: 0x92440024  lbu         $a0, 0x24($s2)
    ctx->pc = 0x1b87a8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 36)));
label_1b87ac:
    // 0x1b87ac: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
label_1b87b0:
    if (ctx->pc == 0x1B87B0u) {
        ctx->pc = 0x1B87B4u;
        goto label_1b87b4;
    }
    ctx->pc = 0x1B87ACu;
    {
        const bool branch_taken_0x1b87ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b87ac) {
            ctx->pc = 0x1B87C0u;
            goto label_1b87c0;
        }
    }
    ctx->pc = 0x1B87B4u;
label_1b87b4:
    // 0x1b87b4: 0x92430025  lbu         $v1, 0x25($s2)
    ctx->pc = 0x1b87b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 37)));
label_1b87b8:
    // 0x1b87b8: 0x1060006b  beqz        $v1, . + 4 + (0x6B << 2)
label_1b87bc:
    if (ctx->pc == 0x1B87BCu) {
        ctx->pc = 0x1B87C0u;
        goto label_1b87c0;
    }
    ctx->pc = 0x1B87B8u;
    {
        const bool branch_taken_0x1b87b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b87b8) {
            ctx->pc = 0x1B8968u;
            goto label_1b8968;
        }
    }
    ctx->pc = 0x1B87C0u;
label_1b87c0:
    // 0x1b87c0: 0xa3a4004c  sb          $a0, 0x4C($sp)
    ctx->pc = 0x1b87c0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 76), (uint8_t)GPR_U32(ctx, 4));
label_1b87c4:
    // 0x1b87c4: 0x92430025  lbu         $v1, 0x25($s2)
    ctx->pc = 0x1b87c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 37)));
label_1b87c8:
    // 0x1b87c8: 0x10000067  b           . + 4 + (0x67 << 2)
label_1b87cc:
    if (ctx->pc == 0x1B87CCu) {
        ctx->pc = 0x1B87CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B87C8u;
        // 0x1b87cc: 0xa0430000  sb          $v1, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B87D0u;
        goto label_1b87d0;
    }
    ctx->pc = 0x1B87C8u;
    {
        const bool branch_taken_0x1b87c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B87CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B87C8u;
        // 0x1b87cc: 0xa0430000  sb          $v1, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b87c8) {
            ctx->pc = 0x1B8968u;
            goto label_1b8968;
        }
    }
    ctx->pc = 0x1B87D0u;
label_1b87d0:
    // 0x1b87d0: 0x90640016  lbu         $a0, 0x16($v1)
    ctx->pc = 0x1b87d0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 22)));
label_1b87d4:
    // 0x1b87d4: 0x3c06002f  lui         $a2, 0x2F
    ctx->pc = 0x1b87d4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)47 << 16));
label_1b87d8:
    // 0x1b87d8: 0x92470034  lbu         $a3, 0x34($s2)
    ctx->pc = 0x1b87d8u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 52)));
label_1b87dc:
    // 0x1b87dc: 0x3c0268db  lui         $v0, 0x68DB
    ctx->pc = 0x1b87dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26843 << 16));
label_1b87e0:
    // 0x1b87e0: 0x34458bad  ori         $a1, $v0, 0x8BAD
    ctx->pc = 0x1b87e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35757);
label_1b87e4:
    // 0x1b87e4: 0x24c62570  addiu       $a2, $a2, 0x2570
    ctx->pc = 0x1b87e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9584));
label_1b87e8:
    // 0x1b87e8: 0x27a2004d  addiu       $v0, $sp, 0x4D
    ctx->pc = 0x1b87e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 77));
label_1b87ec:
    // 0x1b87ec: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1b87ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_1b87f0:
    // 0x1b87f0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1b87f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1b87f4:
    // 0x1b87f4: 0x38e70001  xori        $a3, $a3, 0x1
    ctx->pc = 0x1b87f4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)1);
label_1b87f8:
    // 0x1b87f8: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x1b87f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1b87fc:
    // 0x1b87fc: 0x71a00  sll         $v1, $a3, 8
    ctx->pc = 0x1b87fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_1b8800:
    // 0x1b8800: 0x673823  subu        $a3, $v1, $a3
    ctx->pc = 0x1b8800u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_1b8804:
    // 0x1b8804: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x1b8804u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_1b8808:
    // 0x1b8808: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x1b8808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_1b880c:
    // 0x1b880c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1b880cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1b8810:
    // 0x1b8810: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1b8810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_1b8814:
    // 0x1b8814: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x1b8814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_1b8818:
    // 0x1b8818: 0x643021  addu        $a2, $v1, $a0
    ctx->pc = 0x1b8818u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1b881c:
    // 0x1b881c: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x1b881cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b8820:
    // 0x1b8820: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b8820u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1b8824:
    // 0x1b8824: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1b8824u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_1b8828:
    // 0x1b8828: 0x0  nop
    ctx->pc = 0x1b8828u;
    // NOP
label_1b882c:
    // 0x1b882c: 0xa30018  mult        $zero, $a1, $v1
    ctx->pc = 0x1b882cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1b8830:
    // 0x1b8830: 0x327c2  srl         $a0, $v1, 31
    ctx->pc = 0x1b8830u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_1b8834:
    // 0x1b8834: 0x0  nop
    ctx->pc = 0x1b8834u;
    // NOP
label_1b8838:
    // 0x1b8838: 0x1810  mfhi        $v1
    ctx->pc = 0x1b8838u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_1b883c:
    // 0x1b883c: 0x31ac3  sra         $v1, $v1, 11
    ctx->pc = 0x1b883cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 11));
label_1b8840:
    // 0x1b8840: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1b8840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1b8844:
    // 0x1b8844: 0xa3a3004c  sb          $v1, 0x4C($sp)
    ctx->pc = 0x1b8844u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 76), (uint8_t)GPR_U32(ctx, 3));
label_1b8848:
    // 0x1b8848: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x1b8848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b884c:
    // 0x1b884c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b884cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1b8850:
    // 0x1b8850: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1b8850u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_1b8854:
    // 0x1b8854: 0x0  nop
    ctx->pc = 0x1b8854u;
    // NOP
label_1b8858:
    // 0x1b8858: 0xa30018  mult        $zero, $a1, $v1
    ctx->pc = 0x1b8858u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1b885c:
    // 0x1b885c: 0x327c2  srl         $a0, $v1, 31
    ctx->pc = 0x1b885cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_1b8860:
    // 0x1b8860: 0x0  nop
    ctx->pc = 0x1b8860u;
    // NOP
label_1b8864:
    // 0x1b8864: 0x1810  mfhi        $v1
    ctx->pc = 0x1b8864u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_1b8868:
    // 0x1b8868: 0x31ac3  sra         $v1, $v1, 11
    ctx->pc = 0x1b8868u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 11));
label_1b886c:
    // 0x1b886c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1b886cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1b8870:
    // 0x1b8870: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1b8870u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
label_1b8874:
    // 0x1b8874: 0x90c3003a  lbu         $v1, 0x3A($a2)
    ctx->pc = 0x1b8874u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 58)));
label_1b8878:
    // 0x1b8878: 0x9244003a  lbu         $a0, 0x3A($s2)
    ctx->pc = 0x1b8878u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 58)));
label_1b887c:
    // 0x1b887c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1b887cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_1b8880:
    // 0x1b8880: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
label_1b8884:
    if (ctx->pc == 0x1B8884u) {
        ctx->pc = 0x1B8888u;
        goto label_1b8888;
    }
    ctx->pc = 0x1B8880u;
    {
        const bool branch_taken_0x1b8880 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8880) {
            ctx->pc = 0x1B88D8u;
            goto label_1b88d8;
        }
    }
    ctx->pc = 0x1B8888u;
label_1b8888:
    // 0x1b8888: 0x92430046  lbu         $v1, 0x46($s2)
    ctx->pc = 0x1b8888u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 70)));
label_1b888c:
    // 0x1b888c: 0x10600036  beqz        $v1, . + 4 + (0x36 << 2)
label_1b8890:
    if (ctx->pc == 0x1B8890u) {
        ctx->pc = 0x1B8894u;
        goto label_1b8894;
    }
    ctx->pc = 0x1B888Cu;
    {
        const bool branch_taken_0x1b888c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b888c) {
            ctx->pc = 0x1B8968u;
            goto label_1b8968;
        }
    }
    ctx->pc = 0x1B8894u;
label_1b8894:
    // 0x1b8894: 0x92450024  lbu         $a1, 0x24($s2)
    ctx->pc = 0x1b8894u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 36)));
label_1b8898:
    // 0x1b8898: 0x14a00004  bnez        $a1, . + 4 + (0x4 << 2)
label_1b889c:
    if (ctx->pc == 0x1B889Cu) {
        ctx->pc = 0x1B88A0u;
        goto label_1b88a0;
    }
    ctx->pc = 0x1B8898u;
    {
        const bool branch_taken_0x1b8898 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b8898) {
            ctx->pc = 0x1B88ACu;
            goto label_1b88ac;
        }
    }
    ctx->pc = 0x1B88A0u;
label_1b88a0:
    // 0x1b88a0: 0x92430025  lbu         $v1, 0x25($s2)
    ctx->pc = 0x1b88a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 37)));
label_1b88a4:
    // 0x1b88a4: 0x10600030  beqz        $v1, . + 4 + (0x30 << 2)
label_1b88a8:
    if (ctx->pc == 0x1B88A8u) {
        ctx->pc = 0x1B88ACu;
        goto label_1b88ac;
    }
    ctx->pc = 0x1B88A4u;
    {
        const bool branch_taken_0x1b88a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b88a4) {
            ctx->pc = 0x1B8968u;
            goto label_1b8968;
        }
    }
    ctx->pc = 0x1B88ACu;
label_1b88ac:
    // 0x1b88ac: 0x92430022  lbu         $v1, 0x22($s2)
    ctx->pc = 0x1b88acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 34)));
label_1b88b0:
    // 0x1b88b0: 0x14a30005  bne         $a1, $v1, . + 4 + (0x5 << 2)
label_1b88b4:
    if (ctx->pc == 0x1B88B4u) {
        ctx->pc = 0x1B88B8u;
        goto label_1b88b8;
    }
    ctx->pc = 0x1B88B0u;
    {
        const bool branch_taken_0x1b88b0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b88b0) {
            ctx->pc = 0x1B88C8u;
            goto label_1b88c8;
        }
    }
    ctx->pc = 0x1B88B8u;
label_1b88b8:
    // 0x1b88b8: 0x92440025  lbu         $a0, 0x25($s2)
    ctx->pc = 0x1b88b8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 37)));
label_1b88bc:
    // 0x1b88bc: 0x92430023  lbu         $v1, 0x23($s2)
    ctx->pc = 0x1b88bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 35)));
label_1b88c0:
    // 0x1b88c0: 0x10830029  beq         $a0, $v1, . + 4 + (0x29 << 2)
label_1b88c4:
    if (ctx->pc == 0x1B88C4u) {
        ctx->pc = 0x1B88C8u;
        goto label_1b88c8;
    }
    ctx->pc = 0x1B88C0u;
    {
        const bool branch_taken_0x1b88c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1b88c0) {
            ctx->pc = 0x1B8968u;
            goto label_1b8968;
        }
    }
    ctx->pc = 0x1B88C8u;
label_1b88c8:
    // 0x1b88c8: 0xa3a5004c  sb          $a1, 0x4C($sp)
    ctx->pc = 0x1b88c8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 76), (uint8_t)GPR_U32(ctx, 5));
label_1b88cc:
    // 0x1b88cc: 0x92430025  lbu         $v1, 0x25($s2)
    ctx->pc = 0x1b88ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 37)));
label_1b88d0:
    // 0x1b88d0: 0x10000025  b           . + 4 + (0x25 << 2)
label_1b88d4:
    if (ctx->pc == 0x1B88D4u) {
        ctx->pc = 0x1B88D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B88D0u;
        // 0x1b88d4: 0xa0430000  sb          $v1, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B88D8u;
        goto label_1b88d8;
    }
    ctx->pc = 0x1B88D0u;
    {
        const bool branch_taken_0x1b88d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B88D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B88D0u;
        // 0x1b88d4: 0xa0430000  sb          $v1, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b88d0) {
            ctx->pc = 0x1B8968u;
            goto label_1b8968;
        }
    }
    ctx->pc = 0x1B88D8u;
label_1b88d8:
    // 0x1b88d8: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x1b88d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_1b88dc:
    // 0x1b88dc: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
label_1b88e0:
    if (ctx->pc == 0x1B88E0u) {
        ctx->pc = 0x1B88E4u;
        goto label_1b88e4;
    }
    ctx->pc = 0x1B88DCu;
    {
        const bool branch_taken_0x1b88dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b88dc) {
            ctx->pc = 0x1B8928u;
            goto label_1b8928;
        }
    }
    ctx->pc = 0x1B88E4u;
label_1b88e4:
    // 0x1b88e4: 0x90c50024  lbu         $a1, 0x24($a2)
    ctx->pc = 0x1b88e4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 36)));
label_1b88e8:
    // 0x1b88e8: 0x14a00004  bnez        $a1, . + 4 + (0x4 << 2)
label_1b88ec:
    if (ctx->pc == 0x1B88ECu) {
        ctx->pc = 0x1B88F0u;
        goto label_1b88f0;
    }
    ctx->pc = 0x1B88E8u;
    {
        const bool branch_taken_0x1b88e8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b88e8) {
            ctx->pc = 0x1B88FCu;
            goto label_1b88fc;
        }
    }
    ctx->pc = 0x1B88F0u;
label_1b88f0:
    // 0x1b88f0: 0x90c30025  lbu         $v1, 0x25($a2)
    ctx->pc = 0x1b88f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 37)));
label_1b88f4:
    // 0x1b88f4: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
label_1b88f8:
    if (ctx->pc == 0x1B88F8u) {
        ctx->pc = 0x1B88FCu;
        goto label_1b88fc;
    }
    ctx->pc = 0x1B88F4u;
    {
        const bool branch_taken_0x1b88f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b88f4) {
            ctx->pc = 0x1B8968u;
            goto label_1b8968;
        }
    }
    ctx->pc = 0x1B88FCu;
label_1b88fc:
    // 0x1b88fc: 0x92430022  lbu         $v1, 0x22($s2)
    ctx->pc = 0x1b88fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 34)));
label_1b8900:
    // 0x1b8900: 0x14a30005  bne         $a1, $v1, . + 4 + (0x5 << 2)
label_1b8904:
    if (ctx->pc == 0x1B8904u) {
        ctx->pc = 0x1B8908u;
        goto label_1b8908;
    }
    ctx->pc = 0x1B8900u;
    {
        const bool branch_taken_0x1b8900 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b8900) {
            ctx->pc = 0x1B8918u;
            goto label_1b8918;
        }
    }
    ctx->pc = 0x1B8908u;
label_1b8908:
    // 0x1b8908: 0x90c40025  lbu         $a0, 0x25($a2)
    ctx->pc = 0x1b8908u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 37)));
label_1b890c:
    // 0x1b890c: 0x92430023  lbu         $v1, 0x23($s2)
    ctx->pc = 0x1b890cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 35)));
label_1b8910:
    // 0x1b8910: 0x10830015  beq         $a0, $v1, . + 4 + (0x15 << 2)
label_1b8914:
    if (ctx->pc == 0x1B8914u) {
        ctx->pc = 0x1B8918u;
        goto label_1b8918;
    }
    ctx->pc = 0x1B8910u;
    {
        const bool branch_taken_0x1b8910 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1b8910) {
            ctx->pc = 0x1B8968u;
            goto label_1b8968;
        }
    }
    ctx->pc = 0x1B8918u;
label_1b8918:
    // 0x1b8918: 0xa3a5004c  sb          $a1, 0x4C($sp)
    ctx->pc = 0x1b8918u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 76), (uint8_t)GPR_U32(ctx, 5));
label_1b891c:
    // 0x1b891c: 0x90c30025  lbu         $v1, 0x25($a2)
    ctx->pc = 0x1b891cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 37)));
label_1b8920:
    // 0x1b8920: 0x10000011  b           . + 4 + (0x11 << 2)
label_1b8924:
    if (ctx->pc == 0x1B8924u) {
        ctx->pc = 0x1B8924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8920u;
        // 0x1b8924: 0xa0430000  sb          $v1, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8928u;
        goto label_1b8928;
    }
    ctx->pc = 0x1B8920u;
    {
        const bool branch_taken_0x1b8920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8920u;
        // 0x1b8924: 0xa0430000  sb          $v1, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8920) {
            ctx->pc = 0x1B8968u;
            goto label_1b8968;
        }
    }
    ctx->pc = 0x1B8928u;
label_1b8928:
    // 0x1b8928: 0x92450024  lbu         $a1, 0x24($s2)
    ctx->pc = 0x1b8928u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 36)));
label_1b892c:
    // 0x1b892c: 0x14a00004  bnez        $a1, . + 4 + (0x4 << 2)
label_1b8930:
    if (ctx->pc == 0x1B8930u) {
        ctx->pc = 0x1B8934u;
        goto label_1b8934;
    }
    ctx->pc = 0x1B892Cu;
    {
        const bool branch_taken_0x1b892c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b892c) {
            ctx->pc = 0x1B8940u;
            goto label_1b8940;
        }
    }
    ctx->pc = 0x1B8934u;
label_1b8934:
    // 0x1b8934: 0x92430025  lbu         $v1, 0x25($s2)
    ctx->pc = 0x1b8934u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 37)));
label_1b8938:
    // 0x1b8938: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_1b893c:
    if (ctx->pc == 0x1B893Cu) {
        ctx->pc = 0x1B8940u;
        goto label_1b8940;
    }
    ctx->pc = 0x1B8938u;
    {
        const bool branch_taken_0x1b8938 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8938) {
            ctx->pc = 0x1B8968u;
            goto label_1b8968;
        }
    }
    ctx->pc = 0x1B8940u;
label_1b8940:
    // 0x1b8940: 0x92430022  lbu         $v1, 0x22($s2)
    ctx->pc = 0x1b8940u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 34)));
label_1b8944:
    // 0x1b8944: 0x14a30005  bne         $a1, $v1, . + 4 + (0x5 << 2)
label_1b8948:
    if (ctx->pc == 0x1B8948u) {
        ctx->pc = 0x1B894Cu;
        goto label_1b894c;
    }
    ctx->pc = 0x1B8944u;
    {
        const bool branch_taken_0x1b8944 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b8944) {
            ctx->pc = 0x1B895Cu;
            goto label_1b895c;
        }
    }
    ctx->pc = 0x1B894Cu;
label_1b894c:
    // 0x1b894c: 0x92440025  lbu         $a0, 0x25($s2)
    ctx->pc = 0x1b894cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 37)));
label_1b8950:
    // 0x1b8950: 0x92430023  lbu         $v1, 0x23($s2)
    ctx->pc = 0x1b8950u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 35)));
label_1b8954:
    // 0x1b8954: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
label_1b8958:
    if (ctx->pc == 0x1B8958u) {
        ctx->pc = 0x1B895Cu;
        goto label_1b895c;
    }
    ctx->pc = 0x1B8954u;
    {
        const bool branch_taken_0x1b8954 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1b8954) {
            ctx->pc = 0x1B8968u;
            goto label_1b8968;
        }
    }
    ctx->pc = 0x1B895Cu;
label_1b895c:
    // 0x1b895c: 0xa3a5004c  sb          $a1, 0x4C($sp)
    ctx->pc = 0x1b895cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 76), (uint8_t)GPR_U32(ctx, 5));
label_1b8960:
    // 0x1b8960: 0x92430025  lbu         $v1, 0x25($s2)
    ctx->pc = 0x1b8960u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 37)));
label_1b8964:
    // 0x1b8964: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1b8964u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
label_1b8968:
    // 0x1b8968: 0x92430026  lbu         $v1, 0x26($s2)
    ctx->pc = 0x1b8968u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 38)));
label_1b896c:
    // 0x1b896c: 0x92420027  lbu         $v0, 0x27($s2)
    ctx->pc = 0x1b896cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 39)));
label_1b8970:
    // 0x1b8970: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1b8970u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1b8974:
    // 0x1b8974: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1b8974u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_1b8978:
    // 0x1b8978: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x1b8978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1b897c:
    // 0x1b897c: 0xc044974  jal         func_1125D0
label_1b8980:
    if (ctx->pc == 0x1B8980u) {
        ctx->pc = 0x1B8980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B897Cu;
        // 0x1b8980: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8984u;
        goto label_1b8984;
    }
    ctx->pc = 0x1B897Cu;
    SET_GPR_U32(ctx, 31, 0x1B8984u);
    ctx->pc = 0x1B8980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B897Cu;
    // 0x1b8980: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1125D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1125D0u, 0x1B897Cu, 0x1B8984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8984u;
label_1b8984:
    // 0x1b8984: 0x9245003a  lbu         $a1, 0x3A($s2)
    ctx->pc = 0x1b8984u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 58)));
label_1b8988:
    // 0x1b8988: 0x451824  and         $v1, $v0, $a1
    ctx->pc = 0x1b8988u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
label_1b898c:
    // 0x1b898c: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
label_1b8990:
    if (ctx->pc == 0x1B8990u) {
        ctx->pc = 0x1B8990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B898Cu;
        // 0x1b8990: 0x27b0004d  addiu       $s0, $sp, 0x4D (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 77));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8994u;
        goto label_1b8994;
    }
    ctx->pc = 0x1B898Cu;
    {
        const bool branch_taken_0x1b898c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B898Cu;
        // 0x1b8990: 0x27b0004d  addiu       $s0, $sp, 0x4D (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 77));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b898c) {
            ctx->pc = 0x1B8A08u;
            goto label_1b8a08;
        }
    }
    ctx->pc = 0x1B8994u;
label_1b8994:
    // 0x1b8994: 0x92440026  lbu         $a0, 0x26($s2)
    ctx->pc = 0x1b8994u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 38)));
label_1b8998:
    // 0x1b8998: 0x92430022  lbu         $v1, 0x22($s2)
    ctx->pc = 0x1b8998u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 34)));
label_1b899c:
    // 0x1b899c: 0x14830010  bne         $a0, $v1, . + 4 + (0x10 << 2)
label_1b89a0:
    if (ctx->pc == 0x1B89A0u) {
        ctx->pc = 0x1B89A4u;
        goto label_1b89a4;
    }
    ctx->pc = 0x1B899Cu;
    {
        const bool branch_taken_0x1b899c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b899c) {
            ctx->pc = 0x1B89E0u;
            goto label_1b89e0;
        }
    }
    ctx->pc = 0x1B89A4u;
label_1b89a4:
    // 0x1b89a4: 0x92440027  lbu         $a0, 0x27($s2)
    ctx->pc = 0x1b89a4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 39)));
label_1b89a8:
    // 0x1b89a8: 0x92430023  lbu         $v1, 0x23($s2)
    ctx->pc = 0x1b89a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 35)));
label_1b89ac:
    // 0x1b89ac: 0x1483000c  bne         $a0, $v1, . + 4 + (0xC << 2)
label_1b89b0:
    if (ctx->pc == 0x1B89B0u) {
        ctx->pc = 0x1B89B4u;
        goto label_1b89b4;
    }
    ctx->pc = 0x1B89ACu;
    {
        const bool branch_taken_0x1b89ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b89ac) {
            ctx->pc = 0x1B89E0u;
            goto label_1b89e0;
        }
    }
    ctx->pc = 0x1B89B4u;
label_1b89b4:
    // 0x1b89b4: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1b89b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_1b89b8:
    // 0x1b89b8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1b89bc:
    if (ctx->pc == 0x1B89BCu) {
        ctx->pc = 0x1B89C0u;
        goto label_1b89c0;
    }
    ctx->pc = 0x1B89B8u;
    {
        const bool branch_taken_0x1b89b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b89b8) {
            ctx->pc = 0x1B89E0u;
            goto label_1b89e0;
        }
    }
    ctx->pc = 0x1B89C0u;
label_1b89c0:
    // 0x1b89c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b89c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b89c4:
    // 0x1b89c4: 0x14a20004  bne         $a1, $v0, . + 4 + (0x4 << 2)
label_1b89c8:
    if (ctx->pc == 0x1B89C8u) {
        ctx->pc = 0x1B89CCu;
        goto label_1b89cc;
    }
    ctx->pc = 0x1B89C4u;
    {
        const bool branch_taken_0x1b89c4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b89c4) {
            ctx->pc = 0x1B89D8u;
            goto label_1b89d8;
        }
    }
    ctx->pc = 0x1B89CCu;
label_1b89cc:
    // 0x1b89cc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1b89ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b89d0:
    // 0x1b89d0: 0x10000042  b           . + 4 + (0x42 << 2)
label_1b89d4:
    if (ctx->pc == 0x1B89D4u) {
        ctx->pc = 0x1B89D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B89D0u;
        // 0x1b89d4: 0xa242003a  sb          $v0, 0x3A($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 58), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B89D8u;
        goto label_1b89d8;
    }
    ctx->pc = 0x1B89D0u;
    {
        const bool branch_taken_0x1b89d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B89D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B89D0u;
        // 0x1b89d4: 0xa242003a  sb          $v0, 0x3A($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 58), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b89d0) {
            ctx->pc = 0x1B8ADCu;
            goto label_1b8adc;
        }
    }
    ctx->pc = 0x1B89D8u;
label_1b89d8:
    // 0x1b89d8: 0x10000040  b           . + 4 + (0x40 << 2)
label_1b89dc:
    if (ctx->pc == 0x1B89DCu) {
        ctx->pc = 0x1B89DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B89D8u;
        // 0x1b89dc: 0xa242003a  sb          $v0, 0x3A($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 58), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B89E0u;
        goto label_1b89e0;
    }
    ctx->pc = 0x1B89D8u;
    {
        const bool branch_taken_0x1b89d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B89DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B89D8u;
        // 0x1b89dc: 0xa242003a  sb          $v0, 0x3A($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 58), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b89d8) {
            ctx->pc = 0x1B8ADCu;
            goto label_1b8adc;
        }
    }
    ctx->pc = 0x1B89E0u;
label_1b89e0:
    // 0x1b89e0: 0x92430024  lbu         $v1, 0x24($s2)
    ctx->pc = 0x1b89e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 36)));
label_1b89e4:
    // 0x1b89e4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_1b89e8:
    if (ctx->pc == 0x1B89E8u) {
        ctx->pc = 0x1B89ECu;
        goto label_1b89ec;
    }
    ctx->pc = 0x1B89E4u;
    {
        const bool branch_taken_0x1b89e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b89e4) {
            ctx->pc = 0x1B89F8u;
            goto label_1b89f8;
        }
    }
    ctx->pc = 0x1B89ECu;
label_1b89ec:
    // 0x1b89ec: 0x92420025  lbu         $v0, 0x25($s2)
    ctx->pc = 0x1b89ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 37)));
label_1b89f0:
    // 0x1b89f0: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
label_1b89f4:
    if (ctx->pc == 0x1B89F4u) {
        ctx->pc = 0x1B89F8u;
        goto label_1b89f8;
    }
    ctx->pc = 0x1B89F0u;
    {
        const bool branch_taken_0x1b89f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b89f0) {
            ctx->pc = 0x1B8ADCu;
            goto label_1b8adc;
        }
    }
    ctx->pc = 0x1B89F8u;
label_1b89f8:
    // 0x1b89f8: 0xa3a3004c  sb          $v1, 0x4C($sp)
    ctx->pc = 0x1b89f8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 76), (uint8_t)GPR_U32(ctx, 3));
label_1b89fc:
    // 0x1b89fc: 0x92420025  lbu         $v0, 0x25($s2)
    ctx->pc = 0x1b89fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 37)));
label_1b8a00:
    // 0x1b8a00: 0x10000036  b           . + 4 + (0x36 << 2)
label_1b8a04:
    if (ctx->pc == 0x1B8A04u) {
        ctx->pc = 0x1B8A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8A00u;
        // 0x1b8a04: 0xa3a2004d  sb          $v0, 0x4D($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 77), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8A08u;
        goto label_1b8a08;
    }
    ctx->pc = 0x1B8A00u;
    {
        const bool branch_taken_0x1b8a00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8A00u;
        // 0x1b8a04: 0xa3a2004d  sb          $v0, 0x4D($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 77), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8a00) {
            ctx->pc = 0x1B8ADCu;
            goto label_1b8adc;
        }
    }
    ctx->pc = 0x1B8A08u;
label_1b8a08:
    // 0x1b8a08: 0x93a3004c  lbu         $v1, 0x4C($sp)
    ctx->pc = 0x1b8a08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 76)));
label_1b8a0c:
    // 0x1b8a0c: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1b8a0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1b8a10:
    // 0x1b8a10: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1b8a10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1b8a14:
    // 0x1b8a14: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1b8a14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_1b8a18:
    // 0x1b8a18: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x1b8a18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1b8a1c:
    // 0x1b8a1c: 0xc044974  jal         func_1125D0
label_1b8a20:
    if (ctx->pc == 0x1B8A20u) {
        ctx->pc = 0x1B8A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8A1Cu;
        // 0x1b8a20: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8A24u;
        goto label_1b8a24;
    }
    ctx->pc = 0x1B8A1Cu;
    SET_GPR_U32(ctx, 31, 0x1B8A24u);
    ctx->pc = 0x1B8A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8A1Cu;
    // 0x1b8a20: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1125D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1125D0u, 0x1B8A1Cu, 0x1B8A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8A24u;
label_1b8a24:
    // 0x1b8a24: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b8a24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b8a28:
    // 0x1b8a28: 0x9242003a  lbu         $v0, 0x3A($s2)
    ctx->pc = 0x1b8a28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 58)));
label_1b8a2c:
    // 0x1b8a2c: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x1b8a2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
label_1b8a30:
    // 0x1b8a30: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
label_1b8a34:
    if (ctx->pc == 0x1B8A34u) {
        ctx->pc = 0x1B8A38u;
        goto label_1b8a38;
    }
    ctx->pc = 0x1B8A30u;
    {
        const bool branch_taken_0x1b8a30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8a30) {
            ctx->pc = 0x1B8ADCu;
            goto label_1b8adc;
        }
    }
    ctx->pc = 0x1B8A38u;
label_1b8a38:
    // 0x1b8a38: 0x92430026  lbu         $v1, 0x26($s2)
    ctx->pc = 0x1b8a38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 38)));
label_1b8a3c:
    // 0x1b8a3c: 0x92420022  lbu         $v0, 0x22($s2)
    ctx->pc = 0x1b8a3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 34)));
label_1b8a40:
    // 0x1b8a40: 0x14620016  bne         $v1, $v0, . + 4 + (0x16 << 2)
label_1b8a44:
    if (ctx->pc == 0x1B8A44u) {
        ctx->pc = 0x1B8A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8A40u;
        // 0x1b8a44: 0x32220008  andi        $v0, $s1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8A48u;
        goto label_1b8a48;
    }
    ctx->pc = 0x1B8A40u;
    {
        const bool branch_taken_0x1b8a40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B8A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8A40u;
        // 0x1b8a44: 0x32220008  andi        $v0, $s1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8a40) {
            ctx->pc = 0x1B8A9Cu;
            goto label_1b8a9c;
        }
    }
    ctx->pc = 0x1B8A48u;
label_1b8a48:
    // 0x1b8a48: 0x92440027  lbu         $a0, 0x27($s2)
    ctx->pc = 0x1b8a48u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 39)));
label_1b8a4c:
    // 0x1b8a4c: 0x92420023  lbu         $v0, 0x23($s2)
    ctx->pc = 0x1b8a4cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 35)));
label_1b8a50:
    // 0x1b8a50: 0x14820011  bne         $a0, $v0, . + 4 + (0x11 << 2)
label_1b8a54:
    if (ctx->pc == 0x1B8A54u) {
        ctx->pc = 0x1B8A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8A50u;
        // 0x1b8a54: 0x41040  sll         $v0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8A58u;
        goto label_1b8a58;
    }
    ctx->pc = 0x1B8A50u;
    {
        const bool branch_taken_0x1b8a50 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B8A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8A50u;
        // 0x1b8a54: 0x41040  sll         $v0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8a50) {
            ctx->pc = 0x1B8A98u;
            goto label_1b8a98;
        }
    }
    ctx->pc = 0x1B8A58u;
label_1b8a58:
    // 0x1b8a58: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1b8a58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1b8a5c:
    // 0x1b8a5c: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x1b8a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1b8a60:
    // 0x1b8a60: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x1b8a60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1b8a64:
    // 0x1b8a64: 0xc04494c  jal         func_112530
label_1b8a68:
    if (ctx->pc == 0x1B8A68u) {
        ctx->pc = 0x1B8A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8A64u;
        // 0x1b8a68: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8A6Cu;
        goto label_1b8a6c;
    }
    ctx->pc = 0x1B8A64u;
    SET_GPR_U32(ctx, 31, 0x1B8A6Cu);
    ctx->pc = 0x1B8A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8A64u;
    // 0x1b8a68: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112530u, 0x1B8A64u, 0x1B8A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8A6Cu;
label_1b8a6c:
    // 0x1b8a6c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1b8a70:
    if (ctx->pc == 0x1B8A70u) {
        ctx->pc = 0x1B8A74u;
        goto label_1b8a74;
    }
    ctx->pc = 0x1B8A6Cu;
    {
        const bool branch_taken_0x1b8a6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8a6c) {
            ctx->pc = 0x1B8A98u;
            goto label_1b8a98;
        }
    }
    ctx->pc = 0x1B8A74u;
label_1b8a74:
    // 0x1b8a74: 0x9243003a  lbu         $v1, 0x3A($s2)
    ctx->pc = 0x1b8a74u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 58)));
label_1b8a78:
    // 0x1b8a78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b8a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b8a7c:
    // 0x1b8a7c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_1b8a80:
    if (ctx->pc == 0x1B8A80u) {
        ctx->pc = 0x1B8A84u;
        goto label_1b8a84;
    }
    ctx->pc = 0x1B8A7Cu;
    {
        const bool branch_taken_0x1b8a7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b8a7c) {
            ctx->pc = 0x1B8A90u;
            goto label_1b8a90;
        }
    }
    ctx->pc = 0x1B8A84u;
label_1b8a84:
    // 0x1b8a84: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1b8a84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b8a88:
    // 0x1b8a88: 0x10000014  b           . + 4 + (0x14 << 2)
label_1b8a8c:
    if (ctx->pc == 0x1B8A8Cu) {
        ctx->pc = 0x1B8A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8A88u;
        // 0x1b8a8c: 0xa242003a  sb          $v0, 0x3A($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 58), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8A90u;
        goto label_1b8a90;
    }
    ctx->pc = 0x1B8A88u;
    {
        const bool branch_taken_0x1b8a88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8A88u;
        // 0x1b8a8c: 0xa242003a  sb          $v0, 0x3A($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 58), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8a88) {
            ctx->pc = 0x1B8ADCu;
            goto label_1b8adc;
        }
    }
    ctx->pc = 0x1B8A90u;
label_1b8a90:
    // 0x1b8a90: 0x10000012  b           . + 4 + (0x12 << 2)
label_1b8a94:
    if (ctx->pc == 0x1B8A94u) {
        ctx->pc = 0x1B8A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8A90u;
        // 0x1b8a94: 0xa242003a  sb          $v0, 0x3A($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 58), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8A98u;
        goto label_1b8a98;
    }
    ctx->pc = 0x1B8A90u;
    {
        const bool branch_taken_0x1b8a90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8A90u;
        // 0x1b8a94: 0xa242003a  sb          $v0, 0x3A($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 58), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8a90) {
            ctx->pc = 0x1B8ADCu;
            goto label_1b8adc;
        }
    }
    ctx->pc = 0x1B8A98u;
label_1b8a98:
    // 0x1b8a98: 0x32220008  andi        $v0, $s1, 0x8
    ctx->pc = 0x1b8a98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)8);
label_1b8a9c:
    // 0x1b8a9c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1b8aa0:
    if (ctx->pc == 0x1B8AA0u) {
        ctx->pc = 0x1B8AA4u;
        goto label_1b8aa4;
    }
    ctx->pc = 0x1B8A9Cu;
    {
        const bool branch_taken_0x1b8a9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8a9c) {
            ctx->pc = 0x1B8AB8u;
            goto label_1b8ab8;
        }
    }
    ctx->pc = 0x1B8AA4u;
label_1b8aa4:
    // 0x1b8aa4: 0x93a2004c  lbu         $v0, 0x4C($sp)
    ctx->pc = 0x1b8aa4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 76)));
label_1b8aa8:
    // 0x1b8aa8: 0xa2420024  sb          $v0, 0x24($s2)
    ctx->pc = 0x1b8aa8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 36), (uint8_t)GPR_U32(ctx, 2));
label_1b8aac:
    // 0x1b8aac: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1b8aacu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1b8ab0:
    // 0x1b8ab0: 0x1000000a  b           . + 4 + (0xA << 2)
label_1b8ab4:
    if (ctx->pc == 0x1B8AB4u) {
        ctx->pc = 0x1B8AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8AB0u;
        // 0x1b8ab4: 0xa2420025  sb          $v0, 0x25($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 37), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8AB8u;
        goto label_1b8ab8;
    }
    ctx->pc = 0x1B8AB0u;
    {
        const bool branch_taken_0x1b8ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8AB0u;
        // 0x1b8ab4: 0xa2420025  sb          $v0, 0x25($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 37), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8ab0) {
            ctx->pc = 0x1B8ADCu;
            goto label_1b8adc;
        }
    }
    ctx->pc = 0x1B8AB8u;
label_1b8ab8:
    // 0x1b8ab8: 0x92430024  lbu         $v1, 0x24($s2)
    ctx->pc = 0x1b8ab8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 36)));
label_1b8abc:
    // 0x1b8abc: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_1b8ac0:
    if (ctx->pc == 0x1B8AC0u) {
        ctx->pc = 0x1B8AC4u;
        goto label_1b8ac4;
    }
    ctx->pc = 0x1B8ABCu;
    {
        const bool branch_taken_0x1b8abc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b8abc) {
            ctx->pc = 0x1B8AD0u;
            goto label_1b8ad0;
        }
    }
    ctx->pc = 0x1B8AC4u;
label_1b8ac4:
    // 0x1b8ac4: 0x92420025  lbu         $v0, 0x25($s2)
    ctx->pc = 0x1b8ac4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 37)));
label_1b8ac8:
    // 0x1b8ac8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1b8acc:
    if (ctx->pc == 0x1B8ACCu) {
        ctx->pc = 0x1B8AD0u;
        goto label_1b8ad0;
    }
    ctx->pc = 0x1B8AC8u;
    {
        const bool branch_taken_0x1b8ac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8ac8) {
            ctx->pc = 0x1B8ADCu;
            goto label_1b8adc;
        }
    }
    ctx->pc = 0x1B8AD0u;
label_1b8ad0:
    // 0x1b8ad0: 0xa3a3004c  sb          $v1, 0x4C($sp)
    ctx->pc = 0x1b8ad0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 76), (uint8_t)GPR_U32(ctx, 3));
label_1b8ad4:
    // 0x1b8ad4: 0x92420025  lbu         $v0, 0x25($s2)
    ctx->pc = 0x1b8ad4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 37)));
label_1b8ad8:
    // 0x1b8ad8: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x1b8ad8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
label_1b8adc:
    // 0x1b8adc: 0x9248003a  lbu         $t0, 0x3A($s2)
    ctx->pc = 0x1b8adcu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 58)));
label_1b8ae0:
    // 0x1b8ae0: 0x26440026  addiu       $a0, $s2, 0x26
    ctx->pc = 0x1b8ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 38));
label_1b8ae4:
    // 0x1b8ae4: 0x27a5004c  addiu       $a1, $sp, 0x4C
    ctx->pc = 0x1b8ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
label_1b8ae8:
    // 0x1b8ae8: 0x26460028  addiu       $a2, $s2, 0x28
    ctx->pc = 0x1b8ae8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 40));
label_1b8aec:
    // 0x1b8aec: 0xc06e2d0  jal         func_1B8B40
label_1b8af0:
    if (ctx->pc == 0x1B8AF0u) {
        ctx->pc = 0x1B8AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8AECu;
        // 0x1b8af0: 0x26470021  addiu       $a3, $s2, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 33));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8AF4u;
        goto label_1b8af4;
    }
    ctx->pc = 0x1B8AECu;
    SET_GPR_U32(ctx, 31, 0x1B8AF4u);
    ctx->pc = 0x1B8AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8AECu;
    // 0x1b8af0: 0x26470021  addiu       $a3, $s2, 0x21 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 33));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8B40u;
    goto label_1b8b40;
    ctx->pc = 0x1B8AF4u;
label_1b8af4:
    // 0x1b8af4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1b8af8:
    if (ctx->pc == 0x1B8AF8u) {
        ctx->pc = 0x1B8AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8AF4u;
        // 0x1b8af8: 0x26440026  addiu       $a0, $s2, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 38));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8AFCu;
        goto label_1b8afc;
    }
    ctx->pc = 0x1B8AF4u;
    {
        const bool branch_taken_0x1b8af4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B8AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8AF4u;
        // 0x1b8af8: 0x26440026  addiu       $a0, $s2, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 38));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8af4) {
            ctx->pc = 0x1B8B04u;
            goto label_1b8b04;
        }
    }
    ctx->pc = 0x1B8AFCu;
label_1b8afc:
    // 0x1b8afc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b8afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b8b00:
    // 0x1b8b00: 0xa2420046  sb          $v0, 0x46($s2)
    ctx->pc = 0x1b8b00u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 70), (uint8_t)GPR_U32(ctx, 2));
label_1b8b04:
    // 0x1b8b04: 0xc06e5f8  jal         func_1B97E0
label_1b8b08:
    if (ctx->pc == 0x1B8B08u) {
        ctx->pc = 0x1B8B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8B04u;
        // 0x1b8b08: 0x26450028  addiu       $a1, $s2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8B0Cu;
        goto label_1b8b0c;
    }
    ctx->pc = 0x1B8B04u;
    SET_GPR_U32(ctx, 31, 0x1B8B0Cu);
    ctx->pc = 0x1B8B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8B04u;
    // 0x1b8b08: 0x26450028  addiu       $a1, $s2, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B97E0u;
    { ctx->pc = 0x1b97e0; return; }
    ctx->pc = 0x1B8B0Cu;
label_1b8b0c:
    // 0x1b8b0c: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x1b8b0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1b8b10:
    // 0x1b8b10: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1b8b10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1b8b14:
    // 0x1b8b14: 0x10830002  beq         $a0, $v1, . + 4 + (0x2 << 2)
label_1b8b18:
    if (ctx->pc == 0x1B8B18u) {
        ctx->pc = 0x1B8B1Cu;
        goto label_1b8b1c;
    }
    ctx->pc = 0x1B8B14u;
    {
        const bool branch_taken_0x1b8b14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1b8b14) {
            ctx->pc = 0x1B8B20u;
            goto label_1b8b20;
        }
    }
    ctx->pc = 0x1B8B1Cu;
label_1b8b1c:
    // 0x1b8b1c: 0xa2440020  sb          $a0, 0x20($s2)
    ctx->pc = 0x1b8b1cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 32), (uint8_t)GPR_U32(ctx, 4));
label_1b8b20:
    // 0x1b8b20: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1b8b20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1b8b24:
    // 0x1b8b24: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b8b24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1b8b28:
    // 0x1b8b28: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b8b28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1b8b2c:
    // 0x1b8b2c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b8b2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1b8b30:
    // 0x1b8b30: 0x3e00008  jr          $ra
label_1b8b34:
    if (ctx->pc == 0x1B8B34u) {
        ctx->pc = 0x1B8B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8B30u;
        // 0x1b8b34: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8B38u;
        goto label_1b8b38;
    }
    ctx->pc = 0x1B8B30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B8B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8B30u;
        // 0x1b8b34: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B8B30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B8B38u;
label_1b8b38:
    // 0x1b8b38: 0x0  nop
    ctx->pc = 0x1b8b38u;
    // NOP
label_1b8b3c:
    // 0x1b8b3c: 0x0  nop
    ctx->pc = 0x1b8b3cu;
    // NOP
label_1b8b40:
    // 0x1b8b40: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x1b8b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_1b8b44:
    // 0x1b8b44: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1b8b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_1b8b48:
    // 0x1b8b48: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1b8b48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_1b8b4c:
    // 0x1b8b4c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1b8b4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_1b8b50:
    // 0x1b8b50: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1b8b50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1b8b54:
    // 0x1b8b54: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x1b8b54u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1b8b58:
    // 0x1b8b58: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1b8b58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1b8b5c:
    // 0x1b8b5c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1b8b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1b8b60:
    // 0x1b8b60: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1b8b60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1b8b64:
    // 0x1b8b64: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b8b64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    ctx->pc = 0x1b8b68u;
    return;
}

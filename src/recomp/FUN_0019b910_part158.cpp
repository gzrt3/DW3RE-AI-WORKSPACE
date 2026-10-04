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

// Function: FUN_0019b910
// Address: 0x19b910 - 0x29b9f0
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b910_part158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1e83a0u: goto label_1e83a0;
        case 0x1e83a4u: goto label_1e83a4;
        case 0x1e83a8u: goto label_1e83a8;
        case 0x1e83acu: goto label_1e83ac;
        case 0x1e83b0u: goto label_1e83b0;
        case 0x1e83b4u: goto label_1e83b4;
        case 0x1e83b8u: goto label_1e83b8;
        case 0x1e83bcu: goto label_1e83bc;
        case 0x1e83c0u: goto label_1e83c0;
        case 0x1e83c4u: goto label_1e83c4;
        case 0x1e83c8u: goto label_1e83c8;
        case 0x1e83ccu: goto label_1e83cc;
        case 0x1e83d0u: goto label_1e83d0;
        case 0x1e83d4u: goto label_1e83d4;
        case 0x1e83d8u: goto label_1e83d8;
        case 0x1e83dcu: goto label_1e83dc;
        case 0x1e83e0u: goto label_1e83e0;
        case 0x1e83e4u: goto label_1e83e4;
        case 0x1e83e8u: goto label_1e83e8;
        case 0x1e83ecu: goto label_1e83ec;
        case 0x1e83f0u: goto label_1e83f0;
        case 0x1e83f4u: goto label_1e83f4;
        case 0x1e83f8u: goto label_1e83f8;
        case 0x1e83fcu: goto label_1e83fc;
        case 0x1e8400u: goto label_1e8400;
        case 0x1e8404u: goto label_1e8404;
        case 0x1e8408u: goto label_1e8408;
        case 0x1e840cu: goto label_1e840c;
        case 0x1e8410u: goto label_1e8410;
        case 0x1e8414u: goto label_1e8414;
        case 0x1e8418u: goto label_1e8418;
        case 0x1e841cu: goto label_1e841c;
        case 0x1e8420u: goto label_1e8420;
        case 0x1e8424u: goto label_1e8424;
        case 0x1e8428u: goto label_1e8428;
        case 0x1e842cu: goto label_1e842c;
        case 0x1e8430u: goto label_1e8430;
        case 0x1e8434u: goto label_1e8434;
        case 0x1e8438u: goto label_1e8438;
        case 0x1e843cu: goto label_1e843c;
        case 0x1e8440u: goto label_1e8440;
        case 0x1e8444u: goto label_1e8444;
        case 0x1e8448u: goto label_1e8448;
        case 0x1e844cu: goto label_1e844c;
        case 0x1e8450u: goto label_1e8450;
        case 0x1e8454u: goto label_1e8454;
        case 0x1e8458u: goto label_1e8458;
        case 0x1e845cu: goto label_1e845c;
        case 0x1e8460u: goto label_1e8460;
        case 0x1e8464u: goto label_1e8464;
        case 0x1e8468u: goto label_1e8468;
        case 0x1e846cu: goto label_1e846c;
        case 0x1e8470u: goto label_1e8470;
        case 0x1e8474u: goto label_1e8474;
        case 0x1e8478u: goto label_1e8478;
        case 0x1e847cu: goto label_1e847c;
        case 0x1e8480u: goto label_1e8480;
        case 0x1e8484u: goto label_1e8484;
        case 0x1e8488u: goto label_1e8488;
        case 0x1e848cu: goto label_1e848c;
        case 0x1e8490u: goto label_1e8490;
        case 0x1e8494u: goto label_1e8494;
        case 0x1e8498u: goto label_1e8498;
        case 0x1e849cu: goto label_1e849c;
        case 0x1e84a0u: goto label_1e84a0;
        case 0x1e84a4u: goto label_1e84a4;
        case 0x1e84a8u: goto label_1e84a8;
        case 0x1e84acu: goto label_1e84ac;
        case 0x1e84b0u: goto label_1e84b0;
        case 0x1e84b4u: goto label_1e84b4;
        case 0x1e84b8u: goto label_1e84b8;
        case 0x1e84bcu: goto label_1e84bc;
        case 0x1e84c0u: goto label_1e84c0;
        case 0x1e84c4u: goto label_1e84c4;
        case 0x1e84c8u: goto label_1e84c8;
        case 0x1e84ccu: goto label_1e84cc;
        case 0x1e84d0u: goto label_1e84d0;
        case 0x1e84d4u: goto label_1e84d4;
        case 0x1e84d8u: goto label_1e84d8;
        case 0x1e84dcu: goto label_1e84dc;
        case 0x1e84e0u: goto label_1e84e0;
        case 0x1e84e4u: goto label_1e84e4;
        case 0x1e84e8u: goto label_1e84e8;
        case 0x1e84ecu: goto label_1e84ec;
        case 0x1e84f0u: goto label_1e84f0;
        case 0x1e84f4u: goto label_1e84f4;
        case 0x1e84f8u: goto label_1e84f8;
        case 0x1e84fcu: goto label_1e84fc;
        case 0x1e8500u: goto label_1e8500;
        case 0x1e8504u: goto label_1e8504;
        case 0x1e8508u: goto label_1e8508;
        case 0x1e850cu: goto label_1e850c;
        case 0x1e8510u: goto label_1e8510;
        case 0x1e8514u: goto label_1e8514;
        case 0x1e8518u: goto label_1e8518;
        case 0x1e851cu: goto label_1e851c;
        case 0x1e8520u: goto label_1e8520;
        case 0x1e8524u: goto label_1e8524;
        case 0x1e8528u: goto label_1e8528;
        case 0x1e852cu: goto label_1e852c;
        case 0x1e8530u: goto label_1e8530;
        case 0x1e8534u: goto label_1e8534;
        case 0x1e8538u: goto label_1e8538;
        case 0x1e853cu: goto label_1e853c;
        case 0x1e8540u: goto label_1e8540;
        case 0x1e8544u: goto label_1e8544;
        case 0x1e8548u: goto label_1e8548;
        case 0x1e854cu: goto label_1e854c;
        case 0x1e8550u: goto label_1e8550;
        case 0x1e8554u: goto label_1e8554;
        case 0x1e8558u: goto label_1e8558;
        case 0x1e855cu: goto label_1e855c;
        case 0x1e8560u: goto label_1e8560;
        case 0x1e8564u: goto label_1e8564;
        case 0x1e8568u: goto label_1e8568;
        case 0x1e856cu: goto label_1e856c;
        case 0x1e8570u: goto label_1e8570;
        case 0x1e8574u: goto label_1e8574;
        case 0x1e8578u: goto label_1e8578;
        case 0x1e857cu: goto label_1e857c;
        case 0x1e8580u: goto label_1e8580;
        case 0x1e8584u: goto label_1e8584;
        case 0x1e8588u: goto label_1e8588;
        case 0x1e858cu: goto label_1e858c;
        case 0x1e8590u: goto label_1e8590;
        case 0x1e8594u: goto label_1e8594;
        case 0x1e8598u: goto label_1e8598;
        case 0x1e859cu: goto label_1e859c;
        case 0x1e85a0u: goto label_1e85a0;
        case 0x1e85a4u: goto label_1e85a4;
        case 0x1e85a8u: goto label_1e85a8;
        case 0x1e85acu: goto label_1e85ac;
        case 0x1e85b0u: goto label_1e85b0;
        case 0x1e85b4u: goto label_1e85b4;
        case 0x1e85b8u: goto label_1e85b8;
        case 0x1e85bcu: goto label_1e85bc;
        case 0x1e85c0u: goto label_1e85c0;
        case 0x1e85c4u: goto label_1e85c4;
        case 0x1e85c8u: goto label_1e85c8;
        case 0x1e85ccu: goto label_1e85cc;
        case 0x1e85d0u: goto label_1e85d0;
        case 0x1e85d4u: goto label_1e85d4;
        case 0x1e85d8u: goto label_1e85d8;
        case 0x1e85dcu: goto label_1e85dc;
        case 0x1e85e0u: goto label_1e85e0;
        case 0x1e85e4u: goto label_1e85e4;
        case 0x1e85e8u: goto label_1e85e8;
        case 0x1e85ecu: goto label_1e85ec;
        case 0x1e85f0u: goto label_1e85f0;
        case 0x1e85f4u: goto label_1e85f4;
        case 0x1e85f8u: goto label_1e85f8;
        case 0x1e85fcu: goto label_1e85fc;
        case 0x1e8600u: goto label_1e8600;
        case 0x1e8604u: goto label_1e8604;
        case 0x1e8608u: goto label_1e8608;
        case 0x1e860cu: goto label_1e860c;
        case 0x1e8610u: goto label_1e8610;
        case 0x1e8614u: goto label_1e8614;
        case 0x1e8618u: goto label_1e8618;
        case 0x1e861cu: goto label_1e861c;
        case 0x1e8620u: goto label_1e8620;
        case 0x1e8624u: goto label_1e8624;
        case 0x1e8628u: goto label_1e8628;
        case 0x1e862cu: goto label_1e862c;
        case 0x1e8630u: goto label_1e8630;
        case 0x1e8634u: goto label_1e8634;
        case 0x1e8638u: goto label_1e8638;
        case 0x1e863cu: goto label_1e863c;
        case 0x1e8640u: goto label_1e8640;
        case 0x1e8644u: goto label_1e8644;
        case 0x1e8648u: goto label_1e8648;
        case 0x1e864cu: goto label_1e864c;
        case 0x1e8650u: goto label_1e8650;
        case 0x1e8654u: goto label_1e8654;
        case 0x1e8658u: goto label_1e8658;
        case 0x1e865cu: goto label_1e865c;
        case 0x1e8660u: goto label_1e8660;
        case 0x1e8664u: goto label_1e8664;
        case 0x1e8668u: goto label_1e8668;
        case 0x1e866cu: goto label_1e866c;
        case 0x1e8670u: goto label_1e8670;
        case 0x1e8674u: goto label_1e8674;
        case 0x1e8678u: goto label_1e8678;
        case 0x1e867cu: goto label_1e867c;
        case 0x1e8680u: goto label_1e8680;
        case 0x1e8684u: goto label_1e8684;
        case 0x1e8688u: goto label_1e8688;
        case 0x1e868cu: goto label_1e868c;
        case 0x1e8690u: goto label_1e8690;
        case 0x1e8694u: goto label_1e8694;
        case 0x1e8698u: goto label_1e8698;
        case 0x1e869cu: goto label_1e869c;
        case 0x1e86a0u: goto label_1e86a0;
        case 0x1e86a4u: goto label_1e86a4;
        case 0x1e86a8u: goto label_1e86a8;
        case 0x1e86acu: goto label_1e86ac;
        case 0x1e86b0u: goto label_1e86b0;
        case 0x1e86b4u: goto label_1e86b4;
        case 0x1e86b8u: goto label_1e86b8;
        case 0x1e86bcu: goto label_1e86bc;
        case 0x1e86c0u: goto label_1e86c0;
        case 0x1e86c4u: goto label_1e86c4;
        case 0x1e86c8u: goto label_1e86c8;
        case 0x1e86ccu: goto label_1e86cc;
        case 0x1e86d0u: goto label_1e86d0;
        case 0x1e86d4u: goto label_1e86d4;
        case 0x1e86d8u: goto label_1e86d8;
        case 0x1e86dcu: goto label_1e86dc;
        case 0x1e86e0u: goto label_1e86e0;
        case 0x1e86e4u: goto label_1e86e4;
        case 0x1e86e8u: goto label_1e86e8;
        case 0x1e86ecu: goto label_1e86ec;
        case 0x1e86f0u: goto label_1e86f0;
        case 0x1e86f4u: goto label_1e86f4;
        case 0x1e86f8u: goto label_1e86f8;
        case 0x1e86fcu: goto label_1e86fc;
        case 0x1e8700u: goto label_1e8700;
        case 0x1e8704u: goto label_1e8704;
        case 0x1e8708u: goto label_1e8708;
        case 0x1e870cu: goto label_1e870c;
        case 0x1e8710u: goto label_1e8710;
        case 0x1e8714u: goto label_1e8714;
        case 0x1e8718u: goto label_1e8718;
        case 0x1e871cu: goto label_1e871c;
        case 0x1e8720u: goto label_1e8720;
        case 0x1e8724u: goto label_1e8724;
        case 0x1e8728u: goto label_1e8728;
        case 0x1e872cu: goto label_1e872c;
        case 0x1e8730u: goto label_1e8730;
        case 0x1e8734u: goto label_1e8734;
        case 0x1e8738u: goto label_1e8738;
        case 0x1e873cu: goto label_1e873c;
        case 0x1e8740u: goto label_1e8740;
        case 0x1e8744u: goto label_1e8744;
        case 0x1e8748u: goto label_1e8748;
        case 0x1e874cu: goto label_1e874c;
        case 0x1e8750u: goto label_1e8750;
        case 0x1e8754u: goto label_1e8754;
        case 0x1e8758u: goto label_1e8758;
        case 0x1e875cu: goto label_1e875c;
        case 0x1e8760u: goto label_1e8760;
        case 0x1e8764u: goto label_1e8764;
        case 0x1e8768u: goto label_1e8768;
        case 0x1e876cu: goto label_1e876c;
        case 0x1e8770u: goto label_1e8770;
        case 0x1e8774u: goto label_1e8774;
        case 0x1e8778u: goto label_1e8778;
        case 0x1e877cu: goto label_1e877c;
        case 0x1e8780u: goto label_1e8780;
        case 0x1e8784u: goto label_1e8784;
        case 0x1e8788u: goto label_1e8788;
        case 0x1e878cu: goto label_1e878c;
        case 0x1e8790u: goto label_1e8790;
        case 0x1e8794u: goto label_1e8794;
        case 0x1e8798u: goto label_1e8798;
        case 0x1e879cu: goto label_1e879c;
        case 0x1e87a0u: goto label_1e87a0;
        case 0x1e87a4u: goto label_1e87a4;
        case 0x1e87a8u: goto label_1e87a8;
        case 0x1e87acu: goto label_1e87ac;
        case 0x1e87b0u: goto label_1e87b0;
        case 0x1e87b4u: goto label_1e87b4;
        case 0x1e87b8u: goto label_1e87b8;
        case 0x1e87bcu: goto label_1e87bc;
        case 0x1e87c0u: goto label_1e87c0;
        case 0x1e87c4u: goto label_1e87c4;
        case 0x1e87c8u: goto label_1e87c8;
        case 0x1e87ccu: goto label_1e87cc;
        case 0x1e87d0u: goto label_1e87d0;
        case 0x1e87d4u: goto label_1e87d4;
        case 0x1e87d8u: goto label_1e87d8;
        case 0x1e87dcu: goto label_1e87dc;
        case 0x1e87e0u: goto label_1e87e0;
        case 0x1e87e4u: goto label_1e87e4;
        case 0x1e87e8u: goto label_1e87e8;
        case 0x1e87ecu: goto label_1e87ec;
        case 0x1e87f0u: goto label_1e87f0;
        case 0x1e87f4u: goto label_1e87f4;
        case 0x1e87f8u: goto label_1e87f8;
        case 0x1e87fcu: goto label_1e87fc;
        case 0x1e8800u: goto label_1e8800;
        case 0x1e8804u: goto label_1e8804;
        case 0x1e8808u: goto label_1e8808;
        case 0x1e880cu: goto label_1e880c;
        case 0x1e8810u: goto label_1e8810;
        case 0x1e8814u: goto label_1e8814;
        case 0x1e8818u: goto label_1e8818;
        case 0x1e881cu: goto label_1e881c;
        case 0x1e8820u: goto label_1e8820;
        case 0x1e8824u: goto label_1e8824;
        case 0x1e8828u: goto label_1e8828;
        case 0x1e882cu: goto label_1e882c;
        case 0x1e8830u: goto label_1e8830;
        case 0x1e8834u: goto label_1e8834;
        case 0x1e8838u: goto label_1e8838;
        case 0x1e883cu: goto label_1e883c;
        case 0x1e8840u: goto label_1e8840;
        case 0x1e8844u: goto label_1e8844;
        case 0x1e8848u: goto label_1e8848;
        case 0x1e884cu: goto label_1e884c;
        case 0x1e8850u: goto label_1e8850;
        case 0x1e8854u: goto label_1e8854;
        case 0x1e8858u: goto label_1e8858;
        case 0x1e885cu: goto label_1e885c;
        case 0x1e8860u: goto label_1e8860;
        case 0x1e8864u: goto label_1e8864;
        case 0x1e8868u: goto label_1e8868;
        case 0x1e886cu: goto label_1e886c;
        case 0x1e8870u: goto label_1e8870;
        case 0x1e8874u: goto label_1e8874;
        case 0x1e8878u: goto label_1e8878;
        case 0x1e887cu: goto label_1e887c;
        case 0x1e8880u: goto label_1e8880;
        case 0x1e8884u: goto label_1e8884;
        case 0x1e8888u: goto label_1e8888;
        case 0x1e888cu: goto label_1e888c;
        case 0x1e8890u: goto label_1e8890;
        case 0x1e8894u: goto label_1e8894;
        case 0x1e8898u: goto label_1e8898;
        case 0x1e889cu: goto label_1e889c;
        case 0x1e88a0u: goto label_1e88a0;
        case 0x1e88a4u: goto label_1e88a4;
        case 0x1e88a8u: goto label_1e88a8;
        case 0x1e88acu: goto label_1e88ac;
        case 0x1e88b0u: goto label_1e88b0;
        case 0x1e88b4u: goto label_1e88b4;
        case 0x1e88b8u: goto label_1e88b8;
        case 0x1e88bcu: goto label_1e88bc;
        case 0x1e88c0u: goto label_1e88c0;
        case 0x1e88c4u: goto label_1e88c4;
        case 0x1e88c8u: goto label_1e88c8;
        case 0x1e88ccu: goto label_1e88cc;
        case 0x1e88d0u: goto label_1e88d0;
        case 0x1e88d4u: goto label_1e88d4;
        case 0x1e88d8u: goto label_1e88d8;
        case 0x1e88dcu: goto label_1e88dc;
        case 0x1e88e0u: goto label_1e88e0;
        case 0x1e88e4u: goto label_1e88e4;
        case 0x1e88e8u: goto label_1e88e8;
        case 0x1e88ecu: goto label_1e88ec;
        case 0x1e88f0u: goto label_1e88f0;
        case 0x1e88f4u: goto label_1e88f4;
        case 0x1e88f8u: goto label_1e88f8;
        case 0x1e88fcu: goto label_1e88fc;
        case 0x1e8900u: goto label_1e8900;
        case 0x1e8904u: goto label_1e8904;
        case 0x1e8908u: goto label_1e8908;
        case 0x1e890cu: goto label_1e890c;
        case 0x1e8910u: goto label_1e8910;
        case 0x1e8914u: goto label_1e8914;
        case 0x1e8918u: goto label_1e8918;
        case 0x1e891cu: goto label_1e891c;
        case 0x1e8920u: goto label_1e8920;
        case 0x1e8924u: goto label_1e8924;
        case 0x1e8928u: goto label_1e8928;
        case 0x1e892cu: goto label_1e892c;
        case 0x1e8930u: goto label_1e8930;
        case 0x1e8934u: goto label_1e8934;
        case 0x1e8938u: goto label_1e8938;
        case 0x1e893cu: goto label_1e893c;
        case 0x1e8940u: goto label_1e8940;
        case 0x1e8944u: goto label_1e8944;
        case 0x1e8948u: goto label_1e8948;
        case 0x1e894cu: goto label_1e894c;
        case 0x1e8950u: goto label_1e8950;
        case 0x1e8954u: goto label_1e8954;
        case 0x1e8958u: goto label_1e8958;
        case 0x1e895cu: goto label_1e895c;
        case 0x1e8960u: goto label_1e8960;
        case 0x1e8964u: goto label_1e8964;
        case 0x1e8968u: goto label_1e8968;
        case 0x1e896cu: goto label_1e896c;
        case 0x1e8970u: goto label_1e8970;
        case 0x1e8974u: goto label_1e8974;
        case 0x1e8978u: goto label_1e8978;
        case 0x1e897cu: goto label_1e897c;
        case 0x1e8980u: goto label_1e8980;
        case 0x1e8984u: goto label_1e8984;
        case 0x1e8988u: goto label_1e8988;
        case 0x1e898cu: goto label_1e898c;
        case 0x1e8990u: goto label_1e8990;
        case 0x1e8994u: goto label_1e8994;
        case 0x1e8998u: goto label_1e8998;
        case 0x1e899cu: goto label_1e899c;
        case 0x1e89a0u: goto label_1e89a0;
        case 0x1e89a4u: goto label_1e89a4;
        case 0x1e89a8u: goto label_1e89a8;
        case 0x1e89acu: goto label_1e89ac;
        case 0x1e89b0u: goto label_1e89b0;
        case 0x1e89b4u: goto label_1e89b4;
        case 0x1e89b8u: goto label_1e89b8;
        case 0x1e89bcu: goto label_1e89bc;
        case 0x1e89c0u: goto label_1e89c0;
        case 0x1e89c4u: goto label_1e89c4;
        case 0x1e89c8u: goto label_1e89c8;
        case 0x1e89ccu: goto label_1e89cc;
        case 0x1e89d0u: goto label_1e89d0;
        case 0x1e89d4u: goto label_1e89d4;
        case 0x1e89d8u: goto label_1e89d8;
        case 0x1e89dcu: goto label_1e89dc;
        case 0x1e89e0u: goto label_1e89e0;
        case 0x1e89e4u: goto label_1e89e4;
        case 0x1e89e8u: goto label_1e89e8;
        case 0x1e89ecu: goto label_1e89ec;
        case 0x1e89f0u: goto label_1e89f0;
        case 0x1e89f4u: goto label_1e89f4;
        case 0x1e89f8u: goto label_1e89f8;
        case 0x1e89fcu: goto label_1e89fc;
        case 0x1e8a00u: goto label_1e8a00;
        case 0x1e8a04u: goto label_1e8a04;
        case 0x1e8a08u: goto label_1e8a08;
        case 0x1e8a0cu: goto label_1e8a0c;
        case 0x1e8a10u: goto label_1e8a10;
        case 0x1e8a14u: goto label_1e8a14;
        case 0x1e8a18u: goto label_1e8a18;
        case 0x1e8a1cu: goto label_1e8a1c;
        case 0x1e8a20u: goto label_1e8a20;
        case 0x1e8a24u: goto label_1e8a24;
        case 0x1e8a28u: goto label_1e8a28;
        case 0x1e8a2cu: goto label_1e8a2c;
        case 0x1e8a30u: goto label_1e8a30;
        case 0x1e8a34u: goto label_1e8a34;
        case 0x1e8a38u: goto label_1e8a38;
        case 0x1e8a3cu: goto label_1e8a3c;
        case 0x1e8a40u: goto label_1e8a40;
        case 0x1e8a44u: goto label_1e8a44;
        case 0x1e8a48u: goto label_1e8a48;
        case 0x1e8a4cu: goto label_1e8a4c;
        case 0x1e8a50u: goto label_1e8a50;
        case 0x1e8a54u: goto label_1e8a54;
        case 0x1e8a58u: goto label_1e8a58;
        case 0x1e8a5cu: goto label_1e8a5c;
        case 0x1e8a60u: goto label_1e8a60;
        case 0x1e8a64u: goto label_1e8a64;
        case 0x1e8a68u: goto label_1e8a68;
        case 0x1e8a6cu: goto label_1e8a6c;
        case 0x1e8a70u: goto label_1e8a70;
        case 0x1e8a74u: goto label_1e8a74;
        case 0x1e8a78u: goto label_1e8a78;
        case 0x1e8a7cu: goto label_1e8a7c;
        case 0x1e8a80u: goto label_1e8a80;
        case 0x1e8a84u: goto label_1e8a84;
        case 0x1e8a88u: goto label_1e8a88;
        case 0x1e8a8cu: goto label_1e8a8c;
        case 0x1e8a90u: goto label_1e8a90;
        case 0x1e8a94u: goto label_1e8a94;
        case 0x1e8a98u: goto label_1e8a98;
        case 0x1e8a9cu: goto label_1e8a9c;
        case 0x1e8aa0u: goto label_1e8aa0;
        case 0x1e8aa4u: goto label_1e8aa4;
        case 0x1e8aa8u: goto label_1e8aa8;
        case 0x1e8aacu: goto label_1e8aac;
        case 0x1e8ab0u: goto label_1e8ab0;
        case 0x1e8ab4u: goto label_1e8ab4;
        case 0x1e8ab8u: goto label_1e8ab8;
        case 0x1e8abcu: goto label_1e8abc;
        case 0x1e8ac0u: goto label_1e8ac0;
        case 0x1e8ac4u: goto label_1e8ac4;
        case 0x1e8ac8u: goto label_1e8ac8;
        case 0x1e8accu: goto label_1e8acc;
        case 0x1e8ad0u: goto label_1e8ad0;
        case 0x1e8ad4u: goto label_1e8ad4;
        case 0x1e8ad8u: goto label_1e8ad8;
        case 0x1e8adcu: goto label_1e8adc;
        case 0x1e8ae0u: goto label_1e8ae0;
        case 0x1e8ae4u: goto label_1e8ae4;
        case 0x1e8ae8u: goto label_1e8ae8;
        case 0x1e8aecu: goto label_1e8aec;
        case 0x1e8af0u: goto label_1e8af0;
        case 0x1e8af4u: goto label_1e8af4;
        case 0x1e8af8u: goto label_1e8af8;
        case 0x1e8afcu: goto label_1e8afc;
        case 0x1e8b00u: goto label_1e8b00;
        case 0x1e8b04u: goto label_1e8b04;
        case 0x1e8b08u: goto label_1e8b08;
        case 0x1e8b0cu: goto label_1e8b0c;
        case 0x1e8b10u: goto label_1e8b10;
        case 0x1e8b14u: goto label_1e8b14;
        case 0x1e8b18u: goto label_1e8b18;
        case 0x1e8b1cu: goto label_1e8b1c;
        case 0x1e8b20u: goto label_1e8b20;
        case 0x1e8b24u: goto label_1e8b24;
        case 0x1e8b28u: goto label_1e8b28;
        case 0x1e8b2cu: goto label_1e8b2c;
        case 0x1e8b30u: goto label_1e8b30;
        case 0x1e8b34u: goto label_1e8b34;
        case 0x1e8b38u: goto label_1e8b38;
        case 0x1e8b3cu: goto label_1e8b3c;
        case 0x1e8b40u: goto label_1e8b40;
        case 0x1e8b44u: goto label_1e8b44;
        case 0x1e8b48u: goto label_1e8b48;
        case 0x1e8b4cu: goto label_1e8b4c;
        case 0x1e8b50u: goto label_1e8b50;
        case 0x1e8b54u: goto label_1e8b54;
        case 0x1e8b58u: goto label_1e8b58;
        case 0x1e8b5cu: goto label_1e8b5c;
        case 0x1e8b60u: goto label_1e8b60;
        case 0x1e8b64u: goto label_1e8b64;
        case 0x1e8b68u: goto label_1e8b68;
        case 0x1e8b6cu: goto label_1e8b6c;
        default: return;
    }

label_1e83a0:
    // 0x1e83a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e83a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1e83a4:
    // 0x1e83a4: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1e83a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_1e83a8:
    // 0x1e83a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e83a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1e83ac:
    // 0x1e83ac: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x1e83acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1e83b0:
    // 0x1e83b0: 0x8c226914  lw          $v0, 0x6914($at)
    ctx->pc = 0x1e83b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 26900)));
label_1e83b4:
    // 0x1e83b4: 0xc070080  jal         func_1C0200
label_1e83b8:
    if (ctx->pc == 0x1E83B8u) {
        ctx->pc = 0x1E83B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E83B4u;
        // 0x1e83b8: 0x22ac0  sll         $a1, $v0, 11 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E83BCu;
        goto label_1e83bc;
    }
    ctx->pc = 0x1E83B4u;
    SET_GPR_U32(ctx, 31, 0x1E83BCu);
    ctx->pc = 0x1E83B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E83B4u;
    // 0x1e83b8: 0x22ac0  sll         $a1, $v0, 11 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x1E83BCu;
label_1e83bc:
    // 0x1e83bc: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x1e83bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
label_1e83c0:
    // 0x1e83c0: 0xaf828e90  sw          $v0, -0x7170($gp)
    ctx->pc = 0x1e83c0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938256), GPR_U32(ctx, 2));
label_1e83c4:
    // 0x1e83c4: 0x8c2494d0  lw          $a0, -0x6B30($at)
    ctx->pc = 0x1e83c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294939856)));
label_1e83c8:
    // 0x1e83c8: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x1e83c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
label_1e83cc:
    // 0x1e83cc: 0x8c2594d4  lw          $a1, -0x6B2C($at)
    ctx->pc = 0x1e83ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294939860)));
label_1e83d0:
    // 0x1e83d0: 0xc0415dc  jal         func_105770
label_1e83d4:
    if (ctx->pc == 0x1E83D4u) {
        ctx->pc = 0x1E83D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E83D0u;
        // 0x1e83d4: 0x27868dc4  addiu       $a2, $gp, -0x723C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938052));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E83D8u;
        goto label_1e83d8;
    }
    ctx->pc = 0x1E83D0u;
    SET_GPR_U32(ctx, 31, 0x1E83D8u);
    ctx->pc = 0x1E83D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E83D0u;
    // 0x1e83d4: 0x27868dc4  addiu       $a2, $gp, -0x723C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938052));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105770u, 0x1E83D0u, 0x1E83D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E83D8u;
label_1e83d8:
    // 0x1e83d8: 0xc041500  jal         func_105400
label_1e83dc:
    if (ctx->pc == 0x1E83DCu) {
        ctx->pc = 0x1E83E0u;
        goto label_1e83e0;
    }
    ctx->pc = 0x1E83D8u;
    SET_GPR_U32(ctx, 31, 0x1E83E0u);
    ctx->pc = 0x105400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105400u, 0x1E83D8u, 0x1E83E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E83E0u;
label_1e83e0:
    // 0x1e83e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e83e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e83e4:
    // 0x1e83e4: 0x3e00008  jr          $ra
label_1e83e8:
    if (ctx->pc == 0x1E83E8u) {
        ctx->pc = 0x1E83E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E83E4u;
        // 0x1e83e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E83ECu;
        goto label_1e83ec;
    }
    ctx->pc = 0x1E83E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E83E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E83E4u;
        // 0x1e83e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E83E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E83ECu;
label_1e83ec:
    // 0x1e83ec: 0x0  nop
    ctx->pc = 0x1e83ecu;
    // NOP
label_1e83f0:
    // 0x1e83f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e83f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1e83f4:
    // 0x1e83f4: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1e83f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1e83f8:
    // 0x1e83f8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e83f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1e83fc:
    // 0x1e83fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e83fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e8400:
    // 0x1e8400: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e8400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e8404:
    // 0x1e8404: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e8404u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e8408:
    // 0x1e8408: 0x16020012  bne         $s0, $v0, . + 4 + (0x12 << 2)
label_1e840c:
    if (ctx->pc == 0x1E840Cu) {
        ctx->pc = 0x1E840Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8408u;
        // 0x1e840c: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8410u;
        goto label_1e8410;
    }
    ctx->pc = 0x1E8408u;
    {
        const bool branch_taken_0x1e8408 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E840Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8408u;
        // 0x1e840c: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8408) {
            ctx->pc = 0x1E8454u;
            goto label_1e8454;
        }
    }
    ctx->pc = 0x1E8410u;
label_1e8410:
    // 0x1e8410: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1e8410u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1e8414:
    // 0x1e8414: 0x90224af7  lbu         $v0, 0x4AF7($at)
    ctx->pc = 0x1e8414u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19191)));
label_1e8418:
    // 0x1e8418: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x1e8418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_1e841c:
    // 0x1e841c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_1e8420:
    if (ctx->pc == 0x1E8420u) {
        ctx->pc = 0x1E8420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E841Cu;
        // 0x1e8420: 0x3c010029  lui         $at, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8424u;
        goto label_1e8424;
    }
    ctx->pc = 0x1E841Cu;
    {
        const bool branch_taken_0x1e841c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E841Cu;
        // 0x1e8420: 0x3c010029  lui         $at, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e841c) {
            ctx->pc = 0x1E8450u;
            goto label_1e8450;
        }
    }
    ctx->pc = 0x1E8424u;
label_1e8424:
    // 0x1e8424: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1e8424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_1e8428:
    // 0x1e8428: 0x8c306910  lw          $s0, 0x6910($at)
    ctx->pc = 0x1e8428u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 26896)));
label_1e842c:
    // 0x1e842c: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x1e842cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1e8430:
    // 0x1e8430: 0xc070080  jal         func_1C0200
label_1e8434:
    if (ctx->pc == 0x1E8434u) {
        ctx->pc = 0x1E8434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8430u;
        // 0x1e8434: 0x3445e800  ori         $a1, $v0, 0xE800 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)59392);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8438u;
        goto label_1e8438;
    }
    ctx->pc = 0x1E8430u;
    SET_GPR_U32(ctx, 31, 0x1E8438u);
    ctx->pc = 0x1E8434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8430u;
    // 0x1e8434: 0x3445e800  ori         $a1, $v0, 0xE800 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)59392);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x1E8438u;
label_1e8438:
    // 0x1e8438: 0x2604138a  addiu       $a0, $s0, 0x138A
    ctx->pc = 0x1e8438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 5002));
label_1e843c:
    // 0x1e843c: 0x2405003d  addiu       $a1, $zero, 0x3D
    ctx->pc = 0x1e843cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
label_1e8440:
    // 0x1e8440: 0xc041744  jal         func_105D10
label_1e8444:
    if (ctx->pc == 0x1E8444u) {
        ctx->pc = 0x1E8444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8440u;
        // 0x1e8444: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8448u;
        goto label_1e8448;
    }
    ctx->pc = 0x1E8440u;
    SET_GPR_U32(ctx, 31, 0x1E8448u);
    ctx->pc = 0x1E8444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8440u;
    // 0x1e8444: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105D10u, 0x1E8440u, 0x1E8448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8448u;
label_1e8448:
    // 0x1e8448: 0x10000024  b           . + 4 + (0x24 << 2)
label_1e844c:
    if (ctx->pc == 0x1E844Cu) {
        ctx->pc = 0x1E844Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8448u;
        // 0x1e844c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8450u;
        goto label_1e8450;
    }
    ctx->pc = 0x1E8448u;
    {
        const bool branch_taken_0x1e8448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E844Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8448u;
        // 0x1e844c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8448) {
            ctx->pc = 0x1E84DCu;
            goto label_1e84dc;
        }
    }
    ctx->pc = 0x1E8450u;
label_1e8450:
    // 0x1e8450: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x1e8450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_1e8454:
    // 0x1e8454: 0x16020012  bne         $s0, $v0, . + 4 + (0x12 << 2)
label_1e8458:
    if (ctx->pc == 0x1E8458u) {
        ctx->pc = 0x1E845Cu;
        goto label_1e845c;
    }
    ctx->pc = 0x1E8454u;
    {
        const bool branch_taken_0x1e8454 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e8454) {
            ctx->pc = 0x1E84A0u;
            goto label_1e84a0;
        }
    }
    ctx->pc = 0x1E845Cu;
label_1e845c:
    // 0x1e845c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1e845cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1e8460:
    // 0x1e8460: 0x90224af7  lbu         $v0, 0x4AF7($at)
    ctx->pc = 0x1e8460u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19191)));
label_1e8464:
    // 0x1e8464: 0x30420018  andi        $v0, $v0, 0x18
    ctx->pc = 0x1e8464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)24);
label_1e8468:
    // 0x1e8468: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_1e846c:
    if (ctx->pc == 0x1E846Cu) {
        ctx->pc = 0x1E8470u;
        goto label_1e8470;
    }
    ctx->pc = 0x1E8468u;
    {
        const bool branch_taken_0x1e8468 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8468) {
            ctx->pc = 0x1E84A0u;
            goto label_1e84a0;
        }
    }
    ctx->pc = 0x1E8470u;
label_1e8470:
    // 0x1e8470: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1e8470u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_1e8474:
    // 0x1e8474: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1e8474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_1e8478:
    // 0x1e8478: 0x8c306910  lw          $s0, 0x6910($at)
    ctx->pc = 0x1e8478u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 26896)));
label_1e847c:
    // 0x1e847c: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x1e847cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1e8480:
    // 0x1e8480: 0xc070080  jal         func_1C0200
label_1e8484:
    if (ctx->pc == 0x1E8484u) {
        ctx->pc = 0x1E8484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8480u;
        // 0x1e8484: 0x3445e800  ori         $a1, $v0, 0xE800 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)59392);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8488u;
        goto label_1e8488;
    }
    ctx->pc = 0x1E8480u;
    SET_GPR_U32(ctx, 31, 0x1E8488u);
    ctx->pc = 0x1E8484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8480u;
    // 0x1e8484: 0x3445e800  ori         $a1, $v0, 0xE800 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)59392);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x1E8488u;
label_1e8488:
    // 0x1e8488: 0x260413c7  addiu       $a0, $s0, 0x13C7
    ctx->pc = 0x1e8488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 5063));
label_1e848c:
    // 0x1e848c: 0x2405003d  addiu       $a1, $zero, 0x3D
    ctx->pc = 0x1e848cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
label_1e8490:
    // 0x1e8490: 0xc041744  jal         func_105D10
label_1e8494:
    if (ctx->pc == 0x1E8494u) {
        ctx->pc = 0x1E8494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8490u;
        // 0x1e8494: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8498u;
        goto label_1e8498;
    }
    ctx->pc = 0x1E8490u;
    SET_GPR_U32(ctx, 31, 0x1E8498u);
    ctx->pc = 0x1E8494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8490u;
    // 0x1e8494: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105D10u, 0x1E8490u, 0x1E8498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8498u;
label_1e8498:
    // 0x1e8498: 0x1000000f  b           . + 4 + (0xF << 2)
label_1e849c:
    if (ctx->pc == 0x1E849Cu) {
        ctx->pc = 0x1E84A0u;
        goto label_1e84a0;
    }
    ctx->pc = 0x1E8498u;
    {
        const bool branch_taken_0x1e8498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8498) {
            ctx->pc = 0x1E84D8u;
            goto label_1e84d8;
        }
    }
    ctx->pc = 0x1E84A0u;
label_1e84a0:
    // 0x1e84a0: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1e84a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_1e84a4:
    // 0x1e84a4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1e84a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_1e84a8:
    // 0x1e84a8: 0x8c316910  lw          $s1, 0x6910($at)
    ctx->pc = 0x1e84a8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 26896)));
label_1e84ac:
    // 0x1e84ac: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x1e84acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1e84b0:
    // 0x1e84b0: 0xc070080  jal         func_1C0200
label_1e84b4:
    if (ctx->pc == 0x1E84B4u) {
        ctx->pc = 0x1E84B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E84B0u;
        // 0x1e84b4: 0x3445e800  ori         $a1, $v0, 0xE800 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)59392);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E84B8u;
        goto label_1e84b8;
    }
    ctx->pc = 0x1E84B0u;
    SET_GPR_U32(ctx, 31, 0x1E84B8u);
    ctx->pc = 0x1E84B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E84B0u;
    // 0x1e84b4: 0x3445e800  ori         $a1, $v0, 0xE800 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)59392);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x1E84B8u;
label_1e84b8:
    // 0x1e84b8: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x1e84b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_1e84bc:
    // 0x1e84bc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1e84bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e84c0:
    // 0x1e84c0: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x1e84c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_1e84c4:
    // 0x1e84c4: 0x2405003d  addiu       $a1, $zero, 0x3D
    ctx->pc = 0x1e84c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
label_1e84c8:
    // 0x1e84c8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1e84c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1e84cc:
    // 0x1e84cc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1e84ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1e84d0:
    // 0x1e84d0: 0xc041744  jal         func_105D10
label_1e84d4:
    if (ctx->pc == 0x1E84D4u) {
        ctx->pc = 0x1E84D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E84D0u;
        // 0x1e84d4: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E84D8u;
        goto label_1e84d8;
    }
    ctx->pc = 0x1E84D0u;
    SET_GPR_U32(ctx, 31, 0x1E84D8u);
    ctx->pc = 0x1E84D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E84D0u;
    // 0x1e84d4: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105D10u, 0x1E84D0u, 0x1E84D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E84D8u;
label_1e84d8:
    // 0x1e84d8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e84d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1e84dc:
    // 0x1e84dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e84dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e84e0:
    // 0x1e84e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e84e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e84e4:
    // 0x1e84e4: 0x3e00008  jr          $ra
label_1e84e8:
    if (ctx->pc == 0x1E84E8u) {
        ctx->pc = 0x1E84E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E84E4u;
        // 0x1e84e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E84ECu;
        goto label_1e84ec;
    }
    ctx->pc = 0x1E84E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E84E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E84E4u;
        // 0x1e84e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E84E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E84ECu;
label_1e84ec:
    // 0x1e84ec: 0x0  nop
    ctx->pc = 0x1e84ecu;
    // NOP
label_1e84f0:
    // 0x1e84f0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1e84f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_1e84f4:
    // 0x1e84f4: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1e84f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1e84f8:
    // 0x1e84f8: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1e84f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_1e84fc:
    // 0x1e84fc: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1e84fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1e8500:
    // 0x1e8500: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x1e8500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
label_1e8504:
    // 0x1e8504: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x1e8504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
label_1e8508:
    // 0x1e8508: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x1e8508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_1e850c:
    // 0x1e850c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1e850cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e8510:
    // 0x1e8510: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x1e8510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_1e8514:
    // 0x1e8514: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x1e8514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_1e8518:
    // 0x1e8518: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1e8518u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e851c:
    // 0x1e851c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1e851cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_1e8520:
    // 0x1e8520: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1e8520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1e8524:
    // 0x1e8524: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x1e8524u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1e8528:
    // 0x1e8528: 0xac2030d8  sw          $zero, 0x30D8($at)
    ctx->pc = 0x1e8528u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 12504), GPR_U32(ctx, 0));
label_1e852c:
    // 0x1e852c: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1e852cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1e8530:
    // 0x1e8530: 0xaf808e2c  sw          $zero, -0x71D4($gp)
    ctx->pc = 0x1e8530u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938156), GPR_U32(ctx, 0));
label_1e8534:
    // 0x1e8534: 0xac2030d4  sw          $zero, 0x30D4($at)
    ctx->pc = 0x1e8534u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 12500), GPR_U32(ctx, 0));
label_1e8538:
    // 0x1e8538: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1e8538u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1e853c:
    // 0x1e853c: 0xaf808e28  sw          $zero, -0x71D8($gp)
    ctx->pc = 0x1e853cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938152), GPR_U32(ctx, 0));
label_1e8540:
    // 0x1e8540: 0xaf828e20  sw          $v0, -0x71E0($gp)
    ctx->pc = 0x1e8540u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938144), GPR_U32(ctx, 2));
label_1e8544:
    // 0x1e8544: 0xaf808e24  sw          $zero, -0x71DC($gp)
    ctx->pc = 0x1e8544u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938148), GPR_U32(ctx, 0));
label_1e8548:
    // 0x1e8548: 0xac2030d0  sw          $zero, 0x30D0($at)
    ctx->pc = 0x1e8548u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 12496), GPR_U32(ctx, 0));
label_1e854c:
    // 0x1e854c: 0x27828e30  addiu       $v0, $gp, -0x71D0
    ctx->pc = 0x1e854cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938160));
label_1e8550:
    // 0x1e8550: 0x240500d0  addiu       $a1, $zero, 0xD0
    ctx->pc = 0x1e8550u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
label_1e8554:
    // 0x1e8554: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1e8554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1e8558:
    // 0x1e8558: 0x8c560000  lw          $s6, 0x0($v0)
    ctx->pc = 0x1e8558u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1e855c:
    // 0x1e855c: 0xc05e234  jal         func_1788D0
label_1e8560:
    if (ctx->pc == 0x1E8560u) {
        ctx->pc = 0x1E8560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E855Cu;
        // 0x1e8560: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8564u;
        goto label_1e8564;
    }
    ctx->pc = 0x1E855Cu;
    SET_GPR_U32(ctx, 31, 0x1E8564u);
    ctx->pc = 0x1E8560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E855Cu;
    // 0x1e8560: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788D0u, 0x1E855Cu, 0x1E8564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8564u;
label_1e8564:
    // 0x1e8564: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1e8564u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e8568:
    // 0x1e8568: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1e8568u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e856c:
    // 0x1e856c: 0x0  nop
    ctx->pc = 0x1e856cu;
    // NOP
label_1e8570:
    // 0x1e8570: 0x240b0080  addiu       $t3, $zero, 0x80
    ctx->pc = 0x1e8570u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1e8574:
    // 0x1e8574: 0xffab0000  sd          $t3, 0x0($sp)
    ctx->pc = 0x1e8574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 11));
label_1e8578:
    // 0x1e8578: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1e8578u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e857c:
    // 0x1e857c: 0xffa80008  sd          $t0, 0x8($sp)
    ctx->pc = 0x1e857cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 8));
label_1e8580:
    // 0x1e8580: 0x2d2a021  addu        $s4, $s6, $s2
    ctx->pc = 0x1e8580u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 18)));
label_1e8584:
    // 0x1e8584: 0xffa80010  sd          $t0, 0x10($sp)
    ctx->pc = 0x1e8584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 8));
label_1e8588:
    // 0x1e8588: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1e8588u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1e858c:
    // 0x1e858c: 0xffa80018  sd          $t0, 0x18($sp)
    ctx->pc = 0x1e858cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 8));
label_1e8590:
    // 0x1e8590: 0x26840010  addiu       $a0, $s4, 0x10
    ctx->pc = 0x1e8590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_1e8594:
    // 0x1e8594: 0xdc2530f0  ld          $a1, 0x30F0($at)
    ctx->pc = 0x1e8594u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 12528)));
label_1e8598:
    // 0x1e8598: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e8598u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e859c:
    // 0x1e859c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e859cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e85a0:
    // 0x1e85a0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1e85a0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e85a4:
    // 0x1e85a4: 0xc05df9c  jal         func_177E70
label_1e85a8:
    if (ctx->pc == 0x1E85A8u) {
        ctx->pc = 0x1E85A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E85A4u;
        // 0x1e85a8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E85ACu;
        goto label_1e85ac;
    }
    ctx->pc = 0x1E85A4u;
    SET_GPR_U32(ctx, 31, 0x1E85ACu);
    ctx->pc = 0x1E85A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E85A4u;
    // 0x1e85a8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177E70u, 0x1E85A4u, 0x1E85ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E85ACu;
label_1e85ac:
    // 0x1e85ac: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x1e85acu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e85b0:
    // 0x1e85b0: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1e85b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1e85b4:
    // 0x1e85b4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1e85b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1e85b8:
    // 0x1e85b8: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x1e85b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_1e85bc:
    // 0x1e85bc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e85bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1e85c0:
    // 0x1e85c0: 0xa68400a8  sh          $a0, 0xA8($s4)
    ctx->pc = 0x1e85c0u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 168), (uint16_t)GPR_U32(ctx, 4));
label_1e85c4:
    // 0x1e85c4: 0x340381b0  ori         $v1, $zero, 0x81B0
    ctx->pc = 0x1e85c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33200);
label_1e85c8:
    // 0x1e85c8: 0xa6840090  sh          $a0, 0x90($s4)
    ctx->pc = 0x1e85c8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 144), (uint16_t)GPR_U32(ctx, 4));
label_1e85cc:
    // 0x1e85cc: 0xa68300aa  sh          $v1, 0xAA($s4)
    ctx->pc = 0x1e85ccu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 170), (uint16_t)GPR_U32(ctx, 3));
label_1e85d0:
    // 0x1e85d0: 0xa6830092  sh          $v1, 0x92($s4)
    ctx->pc = 0x1e85d0u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 146), (uint16_t)GPR_U32(ctx, 3));
label_1e85d4:
    // 0x1e85d4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e85d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1e85d8:
    // 0x1e85d8: 0x0  nop
    ctx->pc = 0x1e85d8u;
    // NOP
label_1e85dc:
    // 0x1e85dc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1e85dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1e85e0:
    // 0x1e85e0: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x1e85e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
label_1e85e4:
    // 0x1e85e4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e85e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1e85e8:
    // 0x1e85e8: 0x0  nop
    ctx->pc = 0x1e85e8u;
    // NOP
label_1e85ec:
    // 0x1e85ec: 0x46010503  div.s       $f20, $f0, $f1
    ctx->pc = 0x1e85ecu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[20] = ctx->f[0] / ctx->f[1];
label_1e85f0:
    // 0x1e85f0: 0x0  nop
    ctx->pc = 0x1e85f0u;
    // NOP
label_1e85f4:
    // 0x1e85f4: 0x0  nop
    ctx->pc = 0x1e85f4u;
    // NOP
label_1e85f8:
    // 0x1e85f8: 0xc06d412  jal         func_1B5048
label_1e85fc:
    if (ctx->pc == 0x1E85FCu) {
        ctx->pc = 0x1E85FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E85F8u;
        // 0x1e85fc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8600u;
        goto label_1e8600;
    }
    ctx->pc = 0x1E85F8u;
    SET_GPR_U32(ctx, 31, 0x1E8600u);
    ctx->pc = 0x1E85FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E85F8u;
    // 0x1e85fc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5048u;
    { ctx->pc = 0x1b5048; return; }
    ctx->pc = 0x1E8600u;
label_1e8600:
    // 0x1e8600: 0x3c0243b5  lui         $v0, 0x43B5
    ctx->pc = 0x1e8600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17333 << 16));
label_1e8604:
    // 0x1e8604: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e8604u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1e8608:
    // 0x1e8608: 0x0  nop
    ctx->pc = 0x1e8608u;
    // NOP
label_1e860c:
    // 0x1e860c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1e860cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1e8610:
    // 0x1e8610: 0x3c0243a0  lui         $v0, 0x43A0
    ctx->pc = 0x1e8610u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17312 << 16));
label_1e8614:
    // 0x1e8614: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1e8614u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1e8618:
    // 0x1e8618: 0x0  nop
    ctx->pc = 0x1e8618u;
    // NOP
label_1e861c:
    // 0x1e861c: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1e861cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1e8620:
    // 0x1e8620: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e8620u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1e8624:
    // 0x1e8624: 0x44110000  mfc1        $s1, $f0
    ctx->pc = 0x1e8624u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
label_1e8628:
    // 0x1e8628: 0xc06d4c0  jal         func_1B5300
label_1e862c:
    if (ctx->pc == 0x1E862Cu) {
        ctx->pc = 0x1E862Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8628u;
        // 0x1e862c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8630u;
        goto label_1e8630;
    }
    ctx->pc = 0x1E8628u;
    SET_GPR_U32(ctx, 31, 0x1E8630u);
    ctx->pc = 0x1E862Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8628u;
    // 0x1e862c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5300u;
    { ctx->pc = 0x1b5300; return; }
    ctx->pc = 0x1E8630u;
label_1e8630:
    // 0x1e8630: 0x3c034336  lui         $v1, 0x4336
    ctx->pc = 0x1e8630u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17206 << 16));
label_1e8634:
    // 0x1e8634: 0x3c05438b  lui         $a1, 0x438B
    ctx->pc = 0x1e8634u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17291 << 16));
label_1e8638:
    // 0x1e8638: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1e8638u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1e863c:
    // 0x1e863c: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x1e863cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_1e8640:
    // 0x1e8640: 0x24426c00  addiu       $v0, $v0, 0x6C00
    ctx->pc = 0x1e8640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
label_1e8644:
    // 0x1e8644: 0x26040001  addiu       $a0, $s0, 0x1
    ctx->pc = 0x1e8644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1e8648:
    // 0x1e8648: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1e8648u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1e864c:
    // 0x1e864c: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x1e864cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
label_1e8650:
    // 0x1e8650: 0xa68200c0  sh          $v0, 0xC0($s4)
    ctx->pc = 0x1e8650u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 192), (uint16_t)GPR_U32(ctx, 2));
label_1e8654:
    // 0x1e8654: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1e8654u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_1e8658:
    // 0x1e8658: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x1e8658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
label_1e865c:
    // 0x1e865c: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x1e865cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1e8660:
    // 0x1e8660: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1e8660u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e8664:
    // 0x1e8664: 0x0  nop
    ctx->pc = 0x1e8664u;
    // NOP
label_1e8668:
    // 0x1e8668: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x1e8668u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_1e866c:
    // 0x1e866c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e866cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_1e8670:
    // 0x1e8670: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x1e8670u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_1e8674:
    // 0x1e8674: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x1e8674u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1e8678:
    // 0x1e8678: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x1e8678u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_1e867c:
    // 0x1e867c: 0x24847900  addiu       $a0, $a0, 0x7900
    ctx->pc = 0x1e867cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30976));
label_1e8680:
    // 0x1e8680: 0xa68400c2  sh          $a0, 0xC2($s4)
    ctx->pc = 0x1e8680u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 194), (uint16_t)GPR_U32(ctx, 4));
label_1e8684:
    // 0x1e8684: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1e8684u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1e8688:
    // 0x1e8688: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e8688u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e868c:
    // 0x1e868c: 0x0  nop
    ctx->pc = 0x1e868cu;
    // NOP
label_1e8690:
    // 0x1e8690: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1e8690u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_1e8694:
    // 0x1e8694: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x1e8694u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[20] = ctx->f[1] / ctx->f[0];
label_1e8698:
    // 0x1e8698: 0x0  nop
    ctx->pc = 0x1e8698u;
    // NOP
label_1e869c:
    // 0x1e869c: 0x0  nop
    ctx->pc = 0x1e869cu;
    // NOP
label_1e86a0:
    // 0x1e86a0: 0xc06d412  jal         func_1B5048
label_1e86a4:
    if (ctx->pc == 0x1E86A4u) {
        ctx->pc = 0x1E86A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E86A0u;
        // 0x1e86a4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E86A8u;
        goto label_1e86a8;
    }
    ctx->pc = 0x1E86A0u;
    SET_GPR_U32(ctx, 31, 0x1E86A8u);
    ctx->pc = 0x1E86A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E86A0u;
    // 0x1e86a4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5048u;
    { ctx->pc = 0x1b5048; return; }
    ctx->pc = 0x1E86A8u;
label_1e86a8:
    // 0x1e86a8: 0x3c0243b5  lui         $v0, 0x43B5
    ctx->pc = 0x1e86a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17333 << 16));
label_1e86ac:
    // 0x1e86ac: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1e86acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1e86b0:
    // 0x1e86b0: 0x0  nop
    ctx->pc = 0x1e86b0u;
    // NOP
label_1e86b4:
    // 0x1e86b4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1e86b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_1e86b8:
    // 0x1e86b8: 0x3c0243a0  lui         $v0, 0x43A0
    ctx->pc = 0x1e86b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17312 << 16));
label_1e86bc:
    // 0x1e86bc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e86bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1e86c0:
    // 0x1e86c0: 0x0  nop
    ctx->pc = 0x1e86c0u;
    // NOP
label_1e86c4:
    // 0x1e86c4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1e86c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1e86c8:
    // 0x1e86c8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e86c8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1e86cc:
    // 0x1e86cc: 0x44110000  mfc1        $s1, $f0
    ctx->pc = 0x1e86ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
label_1e86d0:
    // 0x1e86d0: 0xc06d4c0  jal         func_1B5300
label_1e86d4:
    if (ctx->pc == 0x1E86D4u) {
        ctx->pc = 0x1E86D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E86D0u;
        // 0x1e86d4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E86D8u;
        goto label_1e86d8;
    }
    ctx->pc = 0x1E86D0u;
    SET_GPR_U32(ctx, 31, 0x1E86D8u);
    ctx->pc = 0x1E86D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E86D0u;
    // 0x1e86d4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5300u;
    { ctx->pc = 0x1b5300; return; }
    ctx->pc = 0x1E86D8u;
label_1e86d8:
    // 0x1e86d8: 0x3c044336  lui         $a0, 0x4336
    ctx->pc = 0x1e86d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17206 << 16));
label_1e86dc:
    // 0x1e86dc: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x1e86dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_1e86e0:
    // 0x1e86e0: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1e86e0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1e86e4:
    // 0x1e86e4: 0x24636c00  addiu       $v1, $v1, 0x6C00
    ctx->pc = 0x1e86e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
label_1e86e8:
    // 0x1e86e8: 0xa68300d8  sh          $v1, 0xD8($s4)
    ctx->pc = 0x1e86e8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 216), (uint16_t)GPR_U32(ctx, 3));
label_1e86ec:
    // 0x1e86ec: 0x3c05438b  lui         $a1, 0x438B
    ctx->pc = 0x1e86ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17291 << 16));
label_1e86f0:
    // 0x1e86f0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1e86f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1e86f4:
    // 0x1e86f4: 0x3c037f00  lui         $v1, 0x7F00
    ctx->pc = 0x1e86f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32512 << 16));
label_1e86f8:
    // 0x1e86f8: 0x346407ff  ori         $a0, $v1, 0x7FF
    ctx->pc = 0x1e86f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2047);
label_1e86fc:
    // 0x1e86fc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1e86fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1e8700:
    // 0x1e8700: 0x2a030010  slti        $v1, $s0, 0x10
    ctx->pc = 0x1e8700u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
label_1e8704:
    // 0x1e8704: 0x265200d0  addiu       $s2, $s2, 0xD0
    ctx->pc = 0x1e8704u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 208));
label_1e8708:
    // 0x1e8708: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1e8708u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e870c:
    // 0x1e870c: 0x0  nop
    ctx->pc = 0x1e870cu;
    // NOP
label_1e8710:
    // 0x1e8710: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1e8710u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1e8714:
    // 0x1e8714: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e8714u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1e8718:
    // 0x1e8718: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x1e8718u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_1e871c:
    // 0x1e871c: 0x0  nop
    ctx->pc = 0x1e871cu;
    // NOP
label_1e8720:
    // 0x1e8720: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x1e8720u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1e8724:
    // 0x1e8724: 0x24a57900  addiu       $a1, $a1, 0x7900
    ctx->pc = 0x1e8724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30976));
label_1e8728:
    // 0x1e8728: 0xa68500da  sh          $a1, 0xDA($s4)
    ctx->pc = 0x1e8728u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 218), (uint16_t)GPR_U32(ctx, 5));
label_1e872c:
    // 0x1e872c: 0x1460ff8f  bnez        $v1, . + 4 + (-0x71 << 2)
label_1e8730:
    if (ctx->pc == 0x1E8730u) {
        ctx->pc = 0x1E8730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E872Cu;
        // 0x1e8730: 0xfe840050  sd          $a0, 0x50($s4) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 20), 80), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8734u;
        goto label_1e8734;
    }
    ctx->pc = 0x1E872Cu;
    {
        const bool branch_taken_0x1e872c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E8730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E872Cu;
        // 0x1e8730: 0xfe840050  sd          $a0, 0x50($s4) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 20), 80), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e872c) {
            ctx->pc = 0x1E856Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e856c;
        }
    }
    ctx->pc = 0x1E8734u;
label_1e8734:
    // 0x1e8734: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1e8734u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_1e8738:
    // 0x1e8738: 0x2aa30002  slti        $v1, $s5, 0x2
    ctx->pc = 0x1e8738u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)2) ? 1 : 0);
label_1e873c:
    // 0x1e873c: 0x1460ff83  bnez        $v1, . + 4 + (-0x7D << 2)
label_1e8740:
    if (ctx->pc == 0x1E8740u) {
        ctx->pc = 0x1E8740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E873Cu;
        // 0x1e8740: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8744u;
        goto label_1e8744;
    }
    ctx->pc = 0x1E873Cu;
    {
        const bool branch_taken_0x1e873c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E8740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E873Cu;
        // 0x1e8740: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e873c) {
            ctx->pc = 0x1E854Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e854c;
        }
    }
    ctx->pc = 0x1E8744u;
label_1e8744:
    // 0x1e8744: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1e8744u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_1e8748:
    // 0x1e8748: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x1e8748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1e874c:
    // 0x1e874c: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x1e874cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1e8750:
    // 0x1e8750: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x1e8750u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1e8754:
    // 0x1e8754: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x1e8754u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1e8758:
    // 0x1e8758: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x1e8758u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1e875c:
    // 0x1e875c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1e875cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1e8760:
    // 0x1e8760: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1e8760u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1e8764:
    // 0x1e8764: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1e8764u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e8768:
    // 0x1e8768: 0x3e00008  jr          $ra
label_1e876c:
    if (ctx->pc == 0x1E876Cu) {
        ctx->pc = 0x1E876Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8768u;
        // 0x1e876c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8770u;
        goto label_1e8770;
    }
    ctx->pc = 0x1E8768u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E876Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8768u;
        // 0x1e876c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E8768u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E8770u;
label_1e8770:
    // 0x1e8770: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1e8770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1e8774:
    // 0x1e8774: 0x3c070029  lui         $a3, 0x29
    ctx->pc = 0x1e8774u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)41 << 16));
label_1e8778:
    // 0x1e8778: 0x24e7b8d0  addiu       $a3, $a3, -0x4730
    ctx->pc = 0x1e8778u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294949072));
label_1e877c:
    // 0x1e877c: 0x27a60000  addiu       $a2, $sp, 0x0
    ctx->pc = 0x1e877cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
label_1e8780:
    // 0x1e8780: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1e8780u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1e8784:
    // 0x1e8784: 0x78e40000  lq          $a0, 0x0($a3)
    ctx->pc = 0x1e8784u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 7), 0)));
label_1e8788:
    // 0x1e8788: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1e8788u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_1e878c:
    // 0x1e878c: 0x78e30010  lq          $v1, 0x10($a3)
    ctx->pc = 0x1e878cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 16)));
label_1e8790:
    // 0x1e8790: 0x7cc40000  sq          $a0, 0x0($a2)
    ctx->pc = 0x1e8790u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 4));
label_1e8794:
    // 0x1e8794: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x1e8794u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
label_1e8798:
    // 0x1e8798: 0x7cc30010  sq          $v1, 0x10($a2)
    ctx->pc = 0x1e8798u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 3));
label_1e879c:
    // 0x1e879c: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
label_1e87a0:
    if (ctx->pc == 0x1E87A0u) {
        ctx->pc = 0x1E87A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E879Cu;
        // 0x1e87a0: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E87A4u;
        goto label_1e87a4;
    }
    ctx->pc = 0x1E879Cu;
    {
        const bool branch_taken_0x1e879c = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x1E87A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E879Cu;
        // 0x1e87a0: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e879c) {
            ctx->pc = 0x1E8784u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e8784;
        }
    }
    ctx->pc = 0x1E87A4u;
label_1e87a4:
    // 0x1e87a4: 0xdce30000  ld          $v1, 0x0($a3)
    ctx->pc = 0x1e87a4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 0)));
label_1e87a8:
    // 0x1e87a8: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x1e87a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e87ac:
    // 0x1e87ac: 0xfcc30000  sd          $v1, 0x0($a2)
    ctx->pc = 0x1e87acu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 3));
label_1e87b0:
    // 0x1e87b0: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x1e87b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
label_1e87b4:
    // 0x1e87b4: 0x8f838e2c  lw          $v1, -0x71D4($gp)
    ctx->pc = 0x1e87b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938156)));
label_1e87b8:
    // 0x1e87b8: 0x10600035  beqz        $v1, . + 4 + (0x35 << 2)
label_1e87bc:
    if (ctx->pc == 0x1E87BCu) {
        ctx->pc = 0x1E87C0u;
        goto label_1e87c0;
    }
    ctx->pc = 0x1E87B8u;
    {
        const bool branch_taken_0x1e87b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e87b8) {
            ctx->pc = 0x1E8890u;
            goto label_1e8890;
        }
    }
    ctx->pc = 0x1E87C0u;
label_1e87c0:
    // 0x1e87c0: 0x8f838e24  lw          $v1, -0x71DC($gp)
    ctx->pc = 0x1e87c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938148)));
label_1e87c4:
    // 0x1e87c4: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x1e87c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
label_1e87c8:
    // 0x1e87c8: 0xaf838e24  sw          $v1, -0x71DC($gp)
    ctx->pc = 0x1e87c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938148), GPR_U32(ctx, 3));
label_1e87cc:
    // 0x1e87cc: 0x8f838e24  lw          $v1, -0x71DC($gp)
    ctx->pc = 0x1e87ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938148)));
label_1e87d0:
    // 0x1e87d0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_1e87d4:
    if (ctx->pc == 0x1E87D4u) {
        ctx->pc = 0x1E87D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E87D0u;
        // 0x1e87d4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E87D8u;
        goto label_1e87d8;
    }
    ctx->pc = 0x1E87D0u;
    {
        const bool branch_taken_0x1e87d0 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1E87D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E87D0u;
        // 0x1e87d4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e87d0) {
            ctx->pc = 0x1E87E0u;
            goto label_1e87e0;
        }
    }
    ctx->pc = 0x1E87D8u;
label_1e87d8:
    // 0x1e87d8: 0x24630800  addiu       $v1, $v1, 0x800
    ctx->pc = 0x1e87d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2048));
label_1e87dc:
    // 0x1e87dc: 0xaf838e24  sw          $v1, -0x71DC($gp)
    ctx->pc = 0x1e87dcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938148), GPR_U32(ctx, 3));
label_1e87e0:
    // 0x1e87e0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1e87e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e87e4:
    // 0x1e87e4: 0x3c06004b  lui         $a2, 0x4B
    ctx->pc = 0x1e87e4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)75 << 16));
label_1e87e8:
    // 0x1e87e8: 0x27a40000  addiu       $a0, $sp, 0x0
    ctx->pc = 0x1e87e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
label_1e87ec:
    // 0x1e87ec: 0x24c630d0  addiu       $a2, $a2, 0x30D0
    ctx->pc = 0x1e87ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12496));
label_1e87f0:
    // 0x1e87f0: 0x8f858e20  lw          $a1, -0x71E0($gp)
    ctx->pc = 0x1e87f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938144)));
label_1e87f4:
    // 0x1e87f4: 0xc85021  addu        $t2, $a2, $t0
    ctx->pc = 0x1e87f4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
label_1e87f8:
    // 0x1e87f8: 0x8d490000  lw          $t1, 0x0($t2)
    ctx->pc = 0x1e87f8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_1e87fc:
    // 0x1e87fc: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x1e87fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_1e8800:
    // 0x1e8800: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1e8800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1e8804:
    // 0x1e8804: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1e8804u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1e8808:
    // 0x1e8808: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1e8808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1e880c:
    // 0x1e880c: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x1e880cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_1e8810:
    // 0x1e8810: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x1e8810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_1e8814:
    // 0x1e8814: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1e8814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1e8818:
    // 0x1e8818: 0x69082a  slt         $at, $v1, $t1
    ctx->pc = 0x1e8818u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_1e881c:
    // 0x1e881c: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
label_1e8820:
    if (ctx->pc == 0x1E8820u) {
        ctx->pc = 0x1E8820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E881Cu;
        // 0x1e8820: 0x1232823  subu        $a1, $t1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8824u;
        goto label_1e8824;
    }
    ctx->pc = 0x1E881Cu;
    {
        const bool branch_taken_0x1e881c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E881Cu;
        // 0x1e8820: 0x1232823  subu        $a1, $t1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e881c) {
            ctx->pc = 0x1E8850u;
            goto label_1e8850;
        }
    }
    ctx->pc = 0x1E8824u;
label_1e8824:
    // 0x1e8824: 0x1ca00003  bgtz        $a1, . + 4 + (0x3 << 2)
label_1e8828:
    if (ctx->pc == 0x1E8828u) {
        ctx->pc = 0x1E882Cu;
        goto label_1e882c;
    }
    ctx->pc = 0x1E8824u;
    {
        const bool branch_taken_0x1e8824 = (GPR_S32(ctx, 5) > 0);
        if (branch_taken_0x1e8824) {
            ctx->pc = 0x1E8834u;
            goto label_1e8834;
        }
    }
    ctx->pc = 0x1E882Cu;
label_1e882c:
    // 0x1e882c: 0x10000003  b           . + 4 + (0x3 << 2)
label_1e8830:
    if (ctx->pc == 0x1E8830u) {
        ctx->pc = 0x1E8834u;
        goto label_1e8834;
    }
    ctx->pc = 0x1E882Cu;
    {
        const bool branch_taken_0x1e882c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e882c) {
            ctx->pc = 0x1E883Cu;
            goto label_1e883c;
        }
    }
    ctx->pc = 0x1E8834u;
label_1e8834:
    // 0x1e8834: 0x0  nop
    ctx->pc = 0x1e8834u;
    // NOP
label_1e8838:
    // 0x1e8838: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e8838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e883c:
    // 0x1e883c: 0x0  nop
    ctx->pc = 0x1e883cu;
    // NOP
label_1e8840:
    // 0x1e8840: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x1e8840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_1e8844:
    // 0x1e8844: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x1e8844u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1e8848:
    // 0x1e8848: 0x1000000c  b           . + 4 + (0xC << 2)
label_1e884c:
    if (ctx->pc == 0x1E884Cu) {
        ctx->pc = 0x1E884Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8848u;
        // 0x1e884c: 0xad430000  sw          $v1, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8850u;
        goto label_1e8850;
    }
    ctx->pc = 0x1E8848u;
    {
        const bool branch_taken_0x1e8848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E884Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8848u;
        // 0x1e884c: 0xad430000  sw          $v1, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8848) {
            ctx->pc = 0x1E887Cu;
            goto label_1e887c;
        }
    }
    ctx->pc = 0x1E8850u;
label_1e8850:
    // 0x1e8850: 0x692823  subu        $a1, $v1, $t1
    ctx->pc = 0x1e8850u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_1e8854:
    // 0x1e8854: 0x1ca00003  bgtz        $a1, . + 4 + (0x3 << 2)
label_1e8858:
    if (ctx->pc == 0x1E8858u) {
        ctx->pc = 0x1E885Cu;
        goto label_1e885c;
    }
    ctx->pc = 0x1E8854u;
    {
        const bool branch_taken_0x1e8854 = (GPR_S32(ctx, 5) > 0);
        if (branch_taken_0x1e8854) {
            ctx->pc = 0x1E8864u;
            goto label_1e8864;
        }
    }
    ctx->pc = 0x1E885Cu;
label_1e885c:
    // 0x1e885c: 0x10000003  b           . + 4 + (0x3 << 2)
label_1e8860:
    if (ctx->pc == 0x1E8860u) {
        ctx->pc = 0x1E8864u;
        goto label_1e8864;
    }
    ctx->pc = 0x1E885Cu;
    {
        const bool branch_taken_0x1e885c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e885c) {
            ctx->pc = 0x1E886Cu;
            goto label_1e886c;
        }
    }
    ctx->pc = 0x1E8864u;
label_1e8864:
    // 0x1e8864: 0x0  nop
    ctx->pc = 0x1e8864u;
    // NOP
label_1e8868:
    // 0x1e8868: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e8868u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e886c:
    // 0x1e886c: 0x0  nop
    ctx->pc = 0x1e886cu;
    // NOP
label_1e8870:
    // 0x1e8870: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x1e8870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_1e8874:
    // 0x1e8874: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1e8874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1e8878:
    // 0x1e8878: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x1e8878u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
label_1e887c:
    // 0x1e887c: 0x0  nop
    ctx->pc = 0x1e887cu;
    // NOP
label_1e8880:
    // 0x1e8880: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1e8880u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_1e8884:
    // 0x1e8884: 0x28e30003  slti        $v1, $a3, 0x3
    ctx->pc = 0x1e8884u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)3) ? 1 : 0);
label_1e8888:
    // 0x1e8888: 0x1460ffd9  bnez        $v1, . + 4 + (-0x27 << 2)
label_1e888c:
    if (ctx->pc == 0x1E888Cu) {
        ctx->pc = 0x1E888Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8888u;
        // 0x1e888c: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8890u;
        goto label_1e8890;
    }
    ctx->pc = 0x1E8888u;
    {
        const bool branch_taken_0x1e8888 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E888Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8888u;
        // 0x1e888c: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8888) {
            ctx->pc = 0x1E87F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e87f0;
        }
    }
    ctx->pc = 0x1E8890u;
label_1e8890:
    // 0x1e8890: 0x3e00008  jr          $ra
label_1e8894:
    if (ctx->pc == 0x1E8894u) {
        ctx->pc = 0x1E8894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8890u;
        // 0x1e8894: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8898u;
        goto label_1e8898;
    }
    ctx->pc = 0x1E8890u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E8894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8890u;
        // 0x1e8894: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E8890u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E8898u;
label_1e8898:
    // 0x1e8898: 0x0  nop
    ctx->pc = 0x1e8898u;
    // NOP
label_1e889c:
    // 0x1e889c: 0x0  nop
    ctx->pc = 0x1e889cu;
    // NOP
label_1e88a0:
    // 0x1e88a0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1e88a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1e88a4:
    // 0x1e88a4: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x1e88a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1e88a8:
    // 0x1e88a8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1e88a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_1e88ac:
    // 0x1e88ac: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x1e88acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_1e88b0:
    // 0x1e88b0: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1e88b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_1e88b4:
    // 0x1e88b4: 0x24060013  addiu       $a2, $zero, 0x13
    ctx->pc = 0x1e88b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_1e88b8:
    // 0x1e88b8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1e88b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_1e88bc:
    // 0x1e88bc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1e88bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_1e88c0:
    // 0x1e88c0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1e88c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1e88c4:
    // 0x1e88c4: 0xaf808e58  sw          $zero, -0x71A8($gp)
    ctx->pc = 0x1e88c4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938200), GPR_U32(ctx, 0));
label_1e88c8:
    // 0x1e88c8: 0xc07091c  jal         func_1C2470
label_1e88cc:
    if (ctx->pc == 0x1E88CCu) {
        ctx->pc = 0x1E88CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E88C8u;
        // 0x1e88cc: 0xaf808e54  sw          $zero, -0x71AC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938196), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E88D0u;
        goto label_1e88d0;
    }
    ctx->pc = 0x1E88C8u;
    SET_GPR_U32(ctx, 31, 0x1E88D0u);
    ctx->pc = 0x1E88CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E88C8u;
    // 0x1e88cc: 0xaf808e54  sw          $zero, -0x71AC($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938196), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2470u;
    { ctx->pc = 0x1c2470; return; }
    ctx->pc = 0x1E88D0u;
label_1e88d0:
    // 0x1e88d0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1e88d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e88d4:
    // 0x1e88d4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1e88d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e88d8:
    // 0x1e88d8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1e88d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e88dc:
    // 0x1e88dc: 0x27828e60  addiu       $v0, $gp, -0x71A0
    ctx->pc = 0x1e88dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938208));
label_1e88e0:
    // 0x1e88e0: 0x24050029  addiu       $a1, $zero, 0x29
    ctx->pc = 0x1e88e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
label_1e88e4:
    // 0x1e88e4: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1e88e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1e88e8:
    // 0x1e88e8: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x1e88e8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1e88ec:
    // 0x1e88ec: 0xc05e234  jal         func_1788D0
label_1e88f0:
    if (ctx->pc == 0x1E88F0u) {
        ctx->pc = 0x1E88F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E88ECu;
        // 0x1e88f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E88F4u;
        goto label_1e88f4;
    }
    ctx->pc = 0x1E88ECu;
    SET_GPR_U32(ctx, 31, 0x1E88F4u);
    ctx->pc = 0x1E88F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E88ECu;
    // 0x1e88f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788D0u, 0x1E88ECu, 0x1E88F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E88F4u;
label_1e88f4:
    // 0x1e88f4: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x1e88f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_1e88f8:
    // 0x1e88f8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1e88f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e88fc:
    // 0x1e88fc: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1e88fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_1e8900:
    // 0x1e8900: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x1e8900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_1e8904:
    // 0x1e8904: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x1e8904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_1e8908:
    // 0x1e8908: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e8908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e890c:
    // 0x1e890c: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x1e890cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_1e8910:
    // 0x1e8910: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1e8910u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e8914:
    // 0x1e8914: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x1e8914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_1e8918:
    // 0x1e8918: 0x24060228  addiu       $a2, $zero, 0x228
    ctx->pc = 0x1e8918u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 552));
label_1e891c:
    // 0x1e891c: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1e891cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1e8920:
    // 0x1e8920: 0x240803e8  addiu       $t0, $zero, 0x3E8
    ctx->pc = 0x1e8920u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_1e8924:
    // 0x1e8924: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1e8924u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e8928:
    // 0x1e8928: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1e8928u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e892c:
    // 0x1e892c: 0xc05de30  jal         func_1778C0
label_1e8930:
    if (ctx->pc == 0x1E8930u) {
        ctx->pc = 0x1E8930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E892Cu;
        // 0x1e8930: 0x240b0040  addiu       $t3, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8934u;
        goto label_1e8934;
    }
    ctx->pc = 0x1E892Cu;
    SET_GPR_U32(ctx, 31, 0x1E8934u);
    ctx->pc = 0x1E8930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E892Cu;
    // 0x1e8930: 0x240b0040  addiu       $t3, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x1E892Cu, 0x1E8934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8934u;
label_1e8934:
    // 0x1e8934: 0x264400b0  addiu       $a0, $s2, 0xB0
    ctx->pc = 0x1e8934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 176));
label_1e8938:
    // 0x1e8938: 0x240501d8  addiu       $a1, $zero, 0x1D8
    ctx->pc = 0x1e8938u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 472));
label_1e893c:
    // 0x1e893c: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1e893cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1e8940:
    // 0x1e8940: 0x240703e8  addiu       $a3, $zero, 0x3E8
    ctx->pc = 0x1e8940u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_1e8944:
    // 0x1e8944: 0x24080090  addiu       $t0, $zero, 0x90
    ctx->pc = 0x1e8944u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
label_1e8948:
    // 0x1e8948: 0x24090020  addiu       $t1, $zero, 0x20
    ctx->pc = 0x1e8948u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1e894c:
    // 0x1e894c: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x1e894cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e8950:
    // 0x1e8950: 0xc05e060  jal         func_178180
label_1e8954:
    if (ctx->pc == 0x1E8954u) {
        ctx->pc = 0x1E8954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8950u;
        // 0x1e8954: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8958u;
        goto label_1e8958;
    }
    ctx->pc = 0x1E8950u;
    SET_GPR_U32(ctx, 31, 0x1E8958u);
    ctx->pc = 0x1E8954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8950u;
    // 0x1e8954: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178180u, 0x1E8950u, 0x1E8958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8958u;
label_1e8958:
    // 0x1e8958: 0x964d0120  lhu         $t5, 0x120($s2)
    ctx->pc = 0x1e8958u;
    SET_GPR_ZE32(ctx, 13, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 288)));
label_1e895c:
    // 0x1e895c: 0x24090018  addiu       $t1, $zero, 0x18
    ctx->pc = 0x1e895cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1e8960:
    // 0x1e8960: 0x3c0b002d  lui         $t3, 0x2D
    ctx->pc = 0x1e8960u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)45 << 16));
label_1e8964:
    // 0x1e8964: 0x3c0c3f80  lui         $t4, 0x3F80
    ctx->pc = 0x1e8964u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)16256 << 16));
label_1e8968:
    // 0x1e8968: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1e8968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1e896c:
    // 0x1e896c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1e896cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1e8970:
    // 0x1e8970: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x1e8970u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1e8974:
    // 0x1e8974: 0x26440160  addiu       $a0, $s2, 0x160
    ctx->pc = 0x1e8974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 352));
label_1e8978:
    // 0x1e8978: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1e8978u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e897c:
    // 0x1e897c: 0x240601f0  addiu       $a2, $zero, 0x1F0
    ctx->pc = 0x1e897cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 496));
label_1e8980:
    // 0x1e8980: 0x240803e8  addiu       $t0, $zero, 0x3E8
    ctx->pc = 0x1e8980u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_1e8984:
    // 0x1e8984: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x1e8984u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1e8988:
    // 0x1e8988: 0x25ad0180  addiu       $t5, $t5, 0x180
    ctx->pc = 0x1e8988u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 384));
label_1e898c:
    // 0x1e898c: 0x256bcf48  addiu       $t3, $t3, -0x30B8
    ctx->pc = 0x1e898cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294954824));
label_1e8990:
    // 0x1e8990: 0xa64d0120  sh          $t5, 0x120($s2)
    ctx->pc = 0x1e8990u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 288), (uint16_t)GPR_U32(ctx, 13));
label_1e8994:
    // 0x1e8994: 0x964d0130  lhu         $t5, 0x130($s2)
    ctx->pc = 0x1e8994u;
    SET_GPR_ZE32(ctx, 13, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 304)));
label_1e8998:
    // 0x1e8998: 0x25ad0180  addiu       $t5, $t5, 0x180
    ctx->pc = 0x1e8998u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 384));
label_1e899c:
    // 0x1e899c: 0xa64d0130  sh          $t5, 0x130($s2)
    ctx->pc = 0x1e899cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 304), (uint16_t)GPR_U32(ctx, 13));
label_1e89a0:
    // 0x1e89a0: 0xa2400118  sb          $zero, 0x118($s2)
    ctx->pc = 0x1e89a0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 280), (uint8_t)GPR_U32(ctx, 0));
label_1e89a4:
    // 0x1e89a4: 0xa2400119  sb          $zero, 0x119($s2)
    ctx->pc = 0x1e89a4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 281), (uint8_t)GPR_U32(ctx, 0));
label_1e89a8:
    // 0x1e89a8: 0xa240011a  sb          $zero, 0x11A($s2)
    ctx->pc = 0x1e89a8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 282), (uint8_t)GPR_U32(ctx, 0));
label_1e89ac:
    // 0x1e89ac: 0xa240011b  sb          $zero, 0x11B($s2)
    ctx->pc = 0x1e89acu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 283), (uint8_t)GPR_U32(ctx, 0));
label_1e89b0:
    // 0x1e89b0: 0xae4c011c  sw          $t4, 0x11C($s2)
    ctx->pc = 0x1e89b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 284), GPR_U32(ctx, 12));
label_1e89b4:
    // 0x1e89b4: 0xa2400128  sb          $zero, 0x128($s2)
    ctx->pc = 0x1e89b4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 296), (uint8_t)GPR_U32(ctx, 0));
label_1e89b8:
    // 0x1e89b8: 0xa2400129  sb          $zero, 0x129($s2)
    ctx->pc = 0x1e89b8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 297), (uint8_t)GPR_U32(ctx, 0));
label_1e89bc:
    // 0x1e89bc: 0xa240012a  sb          $zero, 0x12A($s2)
    ctx->pc = 0x1e89bcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 298), (uint8_t)GPR_U32(ctx, 0));
label_1e89c0:
    // 0x1e89c0: 0xa240012b  sb          $zero, 0x12B($s2)
    ctx->pc = 0x1e89c0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 299), (uint8_t)GPR_U32(ctx, 0));
label_1e89c4:
    // 0x1e89c4: 0xae4c012c  sw          $t4, 0x12C($s2)
    ctx->pc = 0x1e89c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 300), GPR_U32(ctx, 12));
label_1e89c8:
    // 0x1e89c8: 0xa2430138  sb          $v1, 0x138($s2)
    ctx->pc = 0x1e89c8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 312), (uint8_t)GPR_U32(ctx, 3));
label_1e89cc:
    // 0x1e89cc: 0xa2420139  sb          $v0, 0x139($s2)
    ctx->pc = 0x1e89ccu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 313), (uint8_t)GPR_U32(ctx, 2));
label_1e89d0:
    // 0x1e89d0: 0xa242013a  sb          $v0, 0x13A($s2)
    ctx->pc = 0x1e89d0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 314), (uint8_t)GPR_U32(ctx, 2));
label_1e89d4:
    // 0x1e89d4: 0xa247013b  sb          $a3, 0x13B($s2)
    ctx->pc = 0x1e89d4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 315), (uint8_t)GPR_U32(ctx, 7));
label_1e89d8:
    // 0x1e89d8: 0xae4c013c  sw          $t4, 0x13C($s2)
    ctx->pc = 0x1e89d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 316), GPR_U32(ctx, 12));
label_1e89dc:
    // 0x1e89dc: 0xa2430148  sb          $v1, 0x148($s2)
    ctx->pc = 0x1e89dcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 328), (uint8_t)GPR_U32(ctx, 3));
label_1e89e0:
    // 0x1e89e0: 0xa2420149  sb          $v0, 0x149($s2)
    ctx->pc = 0x1e89e0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 329), (uint8_t)GPR_U32(ctx, 2));
label_1e89e4:
    // 0x1e89e4: 0xa242014a  sb          $v0, 0x14A($s2)
    ctx->pc = 0x1e89e4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 330), (uint8_t)GPR_U32(ctx, 2));
label_1e89e8:
    // 0x1e89e8: 0xa247014b  sb          $a3, 0x14B($s2)
    ctx->pc = 0x1e89e8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 331), (uint8_t)GPR_U32(ctx, 7));
label_1e89ec:
    // 0x1e89ec: 0xc0708ac  jal         func_1C22B0
label_1e89f0:
    if (ctx->pc == 0x1E89F0u) {
        ctx->pc = 0x1E89F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E89ECu;
        // 0x1e89f0: 0xae4c014c  sw          $t4, 0x14C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 332), GPR_U32(ctx, 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E89F4u;
        goto label_1e89f4;
    }
    ctx->pc = 0x1E89ECu;
    SET_GPR_U32(ctx, 31, 0x1E89F4u);
    ctx->pc = 0x1E89F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E89ECu;
    // 0x1e89f0: 0xae4c014c  sw          $t4, 0x14C($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 332), GPR_U32(ctx, 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C22B0u;
    { ctx->pc = 0x1c22b0; return; }
    ctx->pc = 0x1E89F4u;
label_1e89f4:
    // 0x1e89f4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1e89f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1e89f8:
    // 0x1e89f8: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x1e89f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_1e89fc:
    // 0x1e89fc: 0x1460ffb7  bnez        $v1, . + 4 + (-0x49 << 2)
label_1e8a00:
    if (ctx->pc == 0x1E8A00u) {
        ctx->pc = 0x1E8A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E89FCu;
        // 0x1e8a00: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8A04u;
        goto label_1e8a04;
    }
    ctx->pc = 0x1E89FCu;
    {
        const bool branch_taken_0x1e89fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E8A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E89FCu;
        // 0x1e8a00: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e89fc) {
            ctx->pc = 0x1E88DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e88dc;
        }
    }
    ctx->pc = 0x1E8A04u;
label_1e8a04:
    // 0x1e8a04: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1e8a04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1e8a08:
    // 0x1e8a08: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1e8a08u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1e8a0c:
    // 0x1e8a0c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1e8a0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1e8a10:
    // 0x1e8a10: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1e8a10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e8a14:
    // 0x1e8a14: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1e8a14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e8a18:
    // 0x1e8a18: 0x3e00008  jr          $ra
label_1e8a1c:
    if (ctx->pc == 0x1E8A1Cu) {
        ctx->pc = 0x1E8A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8A18u;
        // 0x1e8a1c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8A20u;
        goto label_1e8a20;
    }
    ctx->pc = 0x1E8A18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E8A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8A18u;
        // 0x1e8a1c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E8A18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E8A20u;
label_1e8a20:
    // 0x1e8a20: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x1e8a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_1e8a24:
    // 0x1e8a24: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1e8a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_1e8a28:
    // 0x1e8a28: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1e8a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1e8a2c:
    // 0x1e8a2c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1e8a2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1e8a30:
    // 0x1e8a30: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x1e8a30u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e8a34:
    // 0x1e8a34: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1e8a34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1e8a38:
    // 0x1e8a38: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e8a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1e8a3c:
    // 0x1e8a3c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e8a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1e8a40:
    // 0x1e8a40: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e8a40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e8a44:
    // 0x1e8a44: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e8a44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e8a48:
    // 0x1e8a48: 0x8f92821c  lw          $s2, -0x7DE4($gp)
    ctx->pc = 0x1e8a48u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935068)));
label_1e8a4c:
    // 0x1e8a4c: 0x100001a4  b           . + 4 + (0x1A4 << 2)
label_1e8a50:
    if (ctx->pc == 0x1E8A50u) {
        ctx->pc = 0x1E8A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8A4Cu;
        // 0x1e8a50: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8A54u;
        goto label_1e8a54;
    }
    ctx->pc = 0x1E8A4Cu;
    {
        const bool branch_taken_0x1e8a4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8A4Cu;
        // 0x1e8a50: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8a4c) {
            ctx->pc = 0x1E90E0u;
            { ctx->pc = 0x1e90e0; return; }
        }
    }
    ctx->pc = 0x1E8A54u;
label_1e8a54:
    // 0x1e8a54: 0x9243005a  lbu         $v1, 0x5A($s2)
    ctx->pc = 0x1e8a54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 90)));
label_1e8a58:
    // 0x1e8a58: 0x1060019e  beqz        $v1, . + 4 + (0x19E << 2)
label_1e8a5c:
    if (ctx->pc == 0x1E8A5Cu) {
        ctx->pc = 0x1E8A60u;
        goto label_1e8a60;
    }
    ctx->pc = 0x1E8A58u;
    {
        const bool branch_taken_0x1e8a58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8a58) {
            ctx->pc = 0x1E90D4u;
            { ctx->pc = 0x1e90d4; return; }
        }
    }
    ctx->pc = 0x1E8A60u;
label_1e8a60:
    // 0x1e8a60: 0x8e430040  lw          $v1, 0x40($s2)
    ctx->pc = 0x1e8a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_1e8a64:
    // 0x1e8a64: 0x1060019b  beqz        $v1, . + 4 + (0x19B << 2)
label_1e8a68:
    if (ctx->pc == 0x1E8A68u) {
        ctx->pc = 0x1E8A6Cu;
        goto label_1e8a6c;
    }
    ctx->pc = 0x1E8A64u;
    {
        const bool branch_taken_0x1e8a64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8a64) {
            ctx->pc = 0x1E90D4u;
            { ctx->pc = 0x1e90d4; return; }
        }
    }
    ctx->pc = 0x1E8A6Cu;
label_1e8a6c:
    // 0x1e8a6c: 0x9643005c  lhu         $v1, 0x5C($s2)
    ctx->pc = 0x1e8a6cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 92)));
label_1e8a70:
    // 0x1e8a70: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x1e8a70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_1e8a74:
    // 0x1e8a74: 0x14600197  bnez        $v1, . + 4 + (0x197 << 2)
label_1e8a78:
    if (ctx->pc == 0x1E8A78u) {
        ctx->pc = 0x1E8A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8A74u;
        // 0x1e8a78: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8A7Cu;
        goto label_1e8a7c;
    }
    ctx->pc = 0x1E8A74u;
    {
        const bool branch_taken_0x1e8a74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E8A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8A74u;
        // 0x1e8a78: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8a74) {
            ctx->pc = 0x1E90D4u;
            { ctx->pc = 0x1e90d4; return; }
        }
    }
    ctx->pc = 0x1E8A7Cu;
label_1e8a7c:
    // 0x1e8a7c: 0x10000192  b           . + 4 + (0x192 << 2)
label_1e8a80:
    if (ctx->pc == 0x1E8A80u) {
        ctx->pc = 0x1E8A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8A7Cu;
        // 0x1e8a80: 0x2c0882d  daddu       $s1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8A84u;
        goto label_1e8a84;
    }
    ctx->pc = 0x1E8A7Cu;
    {
        const bool branch_taken_0x1e8a7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8A7Cu;
        // 0x1e8a80: 0x2c0882d  daddu       $s1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8a7c) {
            ctx->pc = 0x1E90C8u;
            { ctx->pc = 0x1e90c8; return; }
        }
    }
    ctx->pc = 0x1E8A84u;
label_1e8a84:
    // 0x1e8a84: 0x0  nop
    ctx->pc = 0x1e8a84u;
    // NOP
label_1e8a88:
    // 0x1e8a88: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x1e8a88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1e8a8c:
    // 0x1e8a8c: 0x1060018c  beqz        $v1, . + 4 + (0x18C << 2)
label_1e8a90:
    if (ctx->pc == 0x1E8A90u) {
        ctx->pc = 0x1E8A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8A8Cu;
        // 0x1e8a90: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8A94u;
        goto label_1e8a94;
    }
    ctx->pc = 0x1E8A8Cu;
    {
        const bool branch_taken_0x1e8a8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8A8Cu;
        // 0x1e8a90: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8a8c) {
            ctx->pc = 0x1E90C0u;
            { ctx->pc = 0x1e90c0; return; }
        }
    }
    ctx->pc = 0x1E8A94u;
label_1e8a94:
    // 0x1e8a94: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e8a94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e8a98:
    // 0x1e8a98: 0x1000000e  b           . + 4 + (0xE << 2)
label_1e8a9c:
    if (ctx->pc == 0x1E8A9Cu) {
        ctx->pc = 0x1E8A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8A98u;
        // 0x1e8a9c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8AA0u;
        goto label_1e8aa0;
    }
    ctx->pc = 0x1E8A98u;
    {
        const bool branch_taken_0x1e8a98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8A98u;
        // 0x1e8a9c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8a98) {
            ctx->pc = 0x1E8AD4u;
            goto label_1e8ad4;
        }
    }
    ctx->pc = 0x1E8AA0u;
label_1e8aa0:
    // 0x1e8aa0: 0x8e26000c  lw          $a2, 0xC($s1)
    ctx->pc = 0x1e8aa0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1e8aa4:
    // 0x1e8aa4: 0xe41804  sllv        $v1, $a0, $a3
    ctx->pc = 0x1e8aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 7) & 0x1F));
label_1e8aa8:
    // 0x1e8aa8: 0x90c501a2  lbu         $a1, 0x1A2($a2)
    ctx->pc = 0x1e8aa8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 418)));
label_1e8aac:
    // 0x1e8aac: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x1e8aacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_1e8ab0:
    // 0x1e8ab0: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_1e8ab4:
    if (ctx->pc == 0x1E8AB4u) {
        ctx->pc = 0x1E8AB8u;
        goto label_1e8ab8;
    }
    ctx->pc = 0x1E8AB0u;
    {
        const bool branch_taken_0x1e8ab0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8ab0) {
            ctx->pc = 0x1E8ACCu;
            goto label_1e8acc;
        }
    }
    ctx->pc = 0x1E8AB8u;
label_1e8ab8:
    // 0x1e8ab8: 0x72080  sll         $a0, $a3, 2
    ctx->pc = 0x1e8ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_1e8abc:
    // 0x1e8abc: 0x24c301b0  addiu       $v1, $a2, 0x1B0
    ctx->pc = 0x1e8abcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 432));
label_1e8ac0:
    // 0x1e8ac0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1e8ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1e8ac4:
    // 0x1e8ac4: 0x10000007  b           . + 4 + (0x7 << 2)
label_1e8ac8:
    if (ctx->pc == 0x1E8AC8u) {
        ctx->pc = 0x1E8AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8AC4u;
        // 0x1e8ac8: 0x8c700000  lw          $s0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8ACCu;
        goto label_1e8acc;
    }
    ctx->pc = 0x1E8AC4u;
    {
        const bool branch_taken_0x1e8ac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8AC4u;
        // 0x1e8ac8: 0x8c700000  lw          $s0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8ac4) {
            ctx->pc = 0x1E8AE4u;
            goto label_1e8ae4;
        }
    }
    ctx->pc = 0x1E8ACCu;
label_1e8acc:
    // 0x1e8acc: 0x0  nop
    ctx->pc = 0x1e8accu;
    // NOP
label_1e8ad0:
    // 0x1e8ad0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1e8ad0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_1e8ad4:
    // 0x1e8ad4: 0x0  nop
    ctx->pc = 0x1e8ad4u;
    // NOP
label_1e8ad8:
    // 0x1e8ad8: 0x28e30002  slti        $v1, $a3, 0x2
    ctx->pc = 0x1e8ad8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
label_1e8adc:
    // 0x1e8adc: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
label_1e8ae0:
    if (ctx->pc == 0x1E8AE0u) {
        ctx->pc = 0x1E8AE4u;
        goto label_1e8ae4;
    }
    ctx->pc = 0x1E8ADCu;
    {
        const bool branch_taken_0x1e8adc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e8adc) {
            ctx->pc = 0x1E8AA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e8aa0;
        }
    }
    ctx->pc = 0x1E8AE4u;
label_1e8ae4:
    // 0x1e8ae4: 0x0  nop
    ctx->pc = 0x1e8ae4u;
    // NOP
label_1e8ae8:
    // 0x1e8ae8: 0x82030028  lb          $v1, 0x28($s0)
    ctx->pc = 0x1e8ae8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 40)));
label_1e8aec:
    // 0x1e8aec: 0x10600174  beqz        $v1, . + 4 + (0x174 << 2)
label_1e8af0:
    if (ctx->pc == 0x1E8AF0u) {
        ctx->pc = 0x1E8AF4u;
        goto label_1e8af4;
    }
    ctx->pc = 0x1E8AECu;
    {
        const bool branch_taken_0x1e8aec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8aec) {
            ctx->pc = 0x1E90C0u;
            { ctx->pc = 0x1e90c0; return; }
        }
    }
    ctx->pc = 0x1E8AF4u;
label_1e8af4:
    // 0x1e8af4: 0x8f848590  lw          $a0, -0x7A70($gp)
    ctx->pc = 0x1e8af4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_1e8af8:
    // 0x1e8af8: 0x30830004  andi        $v1, $a0, 0x4
    ctx->pc = 0x1e8af8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
label_1e8afc:
    // 0x1e8afc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1e8b00:
    if (ctx->pc == 0x1E8B00u) {
        ctx->pc = 0x1E8B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8AFCu;
        // 0x1e8b00: 0x30830020  andi        $v1, $a0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8B04u;
        goto label_1e8b04;
    }
    ctx->pc = 0x1E8AFCu;
    {
        const bool branch_taken_0x1e8afc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8AFCu;
        // 0x1e8b00: 0x30830020  andi        $v1, $a0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8afc) {
            ctx->pc = 0x1E8B0Cu;
            goto label_1e8b0c;
        }
    }
    ctx->pc = 0x1E8B04u;
label_1e8b04:
    // 0x1e8b04: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
label_1e8b08:
    if (ctx->pc == 0x1E8B08u) {
        ctx->pc = 0x1E8B0Cu;
        goto label_1e8b0c;
    }
    ctx->pc = 0x1E8B04u;
    {
        const bool branch_taken_0x1e8b04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8b04) {
            ctx->pc = 0x1E8B50u;
            goto label_1e8b50;
        }
    }
    ctx->pc = 0x1E8B0Cu;
label_1e8b0c:
    // 0x1e8b0c: 0x0  nop
    ctx->pc = 0x1e8b0cu;
    // NOP
label_1e8b10:
    // 0x1e8b10: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1e8b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1e8b14:
    // 0x1e8b14: 0x8c630024  lw          $v1, 0x24($v1)
    ctx->pc = 0x1e8b14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_1e8b18:
    // 0x1e8b18: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1e8b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1e8b1c:
    // 0x1e8b1c: 0x30632000  andi        $v1, $v1, 0x2000
    ctx->pc = 0x1e8b1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
label_1e8b20:
    // 0x1e8b20: 0x14600167  bnez        $v1, . + 4 + (0x167 << 2)
label_1e8b24:
    if (ctx->pc == 0x1E8B24u) {
        ctx->pc = 0x1E8B28u;
        goto label_1e8b28;
    }
    ctx->pc = 0x1E8B20u;
    {
        const bool branch_taken_0x1e8b20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e8b20) {
            ctx->pc = 0x1E90C0u;
            { ctx->pc = 0x1e90c0; return; }
        }
    }
    ctx->pc = 0x1E8B28u;
label_1e8b28:
    // 0x1e8b28: 0x8e440040  lw          $a0, 0x40($s2)
    ctx->pc = 0x1e8b28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_1e8b2c:
    // 0x1e8b2c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x1e8b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1e8b30:
    // 0x1e8b30: 0x10830163  beq         $a0, $v1, . + 4 + (0x163 << 2)
label_1e8b34:
    if (ctx->pc == 0x1E8B34u) {
        ctx->pc = 0x1E8B38u;
        goto label_1e8b38;
    }
    ctx->pc = 0x1E8B30u;
    {
        const bool branch_taken_0x1e8b30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e8b30) {
            ctx->pc = 0x1E90C0u;
            { ctx->pc = 0x1e90c0; return; }
        }
    }
    ctx->pc = 0x1E8B38u;
label_1e8b38:
    // 0x1e8b38: 0xde030008  ld          $v1, 0x8($s0)
    ctx->pc = 0x1e8b38u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 8)));
label_1e8b3c:
    // 0x1e8b3c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1e8b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e8b40:
    // 0x1e8b40: 0x2842004  sllv        $a0, $a0, $s4
    ctx->pc = 0x1e8b40u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 20) & 0x1F));
label_1e8b44:
    // 0x1e8b44: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1e8b44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_1e8b48:
    // 0x1e8b48: 0x1460015d  bnez        $v1, . + 4 + (0x15D << 2)
label_1e8b4c:
    if (ctx->pc == 0x1E8B4Cu) {
        ctx->pc = 0x1E8B50u;
        goto label_1e8b50;
    }
    ctx->pc = 0x1E8B48u;
    {
        const bool branch_taken_0x1e8b48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e8b48) {
            ctx->pc = 0x1E90C0u;
            { ctx->pc = 0x1e90c0; return; }
        }
    }
    ctx->pc = 0x1E8B50u;
label_1e8b50:
    // 0x1e8b50: 0x8e440044  lw          $a0, 0x44($s2)
    ctx->pc = 0x1e8b50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
label_1e8b54:
    // 0x1e8b54: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x1e8b54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
label_1e8b58:
    // 0x1e8b58: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x1e8b58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1e8b5c:
    // 0x1e8b5c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1e8b5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_1e8b60:
    // 0x1e8b60: 0x1060003e  beqz        $v1, . + 4 + (0x3E << 2)
label_1e8b64:
    if (ctx->pc == 0x1E8B64u) {
        ctx->pc = 0x1E8B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8B60u;
        // 0x1e8b64: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8B68u;
        goto label_1e8b68;
    }
    ctx->pc = 0x1E8B60u;
    {
        const bool branch_taken_0x1e8b60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8B60u;
        // 0x1e8b64: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8b60) {
            ctx->pc = 0x1E8C5Cu;
            { ctx->pc = 0x1e8c5c; return; }
        }
    }
    ctx->pc = 0x1E8B68u;
label_1e8b68:
    // 0x1e8b68: 0x86430054  lh          $v1, 0x54($s2)
    ctx->pc = 0x1e8b68u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 84)));
label_1e8b6c:
    // 0x1e8b6c: 0xc6400048  lwc1        $f0, 0x48($s2)
    ctx->pc = 0x1e8b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    ctx->pc = 0x1e8b70u;
    return;
}

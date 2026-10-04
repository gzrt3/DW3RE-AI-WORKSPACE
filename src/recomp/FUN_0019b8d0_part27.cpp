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

// Function: FUN_0019b8d0
// Address: 0x19b8d0 - 0x29b8d8
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b8d0_part27(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1a83f0u: goto label_1a83f0;
        case 0x1a83f4u: goto label_1a83f4;
        case 0x1a83f8u: goto label_1a83f8;
        case 0x1a83fcu: goto label_1a83fc;
        case 0x1a8400u: goto label_1a8400;
        case 0x1a8404u: goto label_1a8404;
        case 0x1a8408u: goto label_1a8408;
        case 0x1a840cu: goto label_1a840c;
        case 0x1a8410u: goto label_1a8410;
        case 0x1a8414u: goto label_1a8414;
        case 0x1a8418u: goto label_1a8418;
        case 0x1a841cu: goto label_1a841c;
        case 0x1a8420u: goto label_1a8420;
        case 0x1a8424u: goto label_1a8424;
        case 0x1a8428u: goto label_1a8428;
        case 0x1a842cu: goto label_1a842c;
        case 0x1a8430u: goto label_1a8430;
        case 0x1a8434u: goto label_1a8434;
        case 0x1a8438u: goto label_1a8438;
        case 0x1a843cu: goto label_1a843c;
        case 0x1a8440u: goto label_1a8440;
        case 0x1a8444u: goto label_1a8444;
        case 0x1a8448u: goto label_1a8448;
        case 0x1a844cu: goto label_1a844c;
        case 0x1a8450u: goto label_1a8450;
        case 0x1a8454u: goto label_1a8454;
        case 0x1a8458u: goto label_1a8458;
        case 0x1a845cu: goto label_1a845c;
        case 0x1a8460u: goto label_1a8460;
        case 0x1a8464u: goto label_1a8464;
        case 0x1a8468u: goto label_1a8468;
        case 0x1a846cu: goto label_1a846c;
        case 0x1a8470u: goto label_1a8470;
        case 0x1a8474u: goto label_1a8474;
        case 0x1a8478u: goto label_1a8478;
        case 0x1a847cu: goto label_1a847c;
        case 0x1a8480u: goto label_1a8480;
        case 0x1a8484u: goto label_1a8484;
        case 0x1a8488u: goto label_1a8488;
        case 0x1a848cu: goto label_1a848c;
        case 0x1a8490u: goto label_1a8490;
        case 0x1a8494u: goto label_1a8494;
        case 0x1a8498u: goto label_1a8498;
        case 0x1a849cu: goto label_1a849c;
        case 0x1a84a0u: goto label_1a84a0;
        case 0x1a84a4u: goto label_1a84a4;
        case 0x1a84a8u: goto label_1a84a8;
        case 0x1a84acu: goto label_1a84ac;
        case 0x1a84b0u: goto label_1a84b0;
        case 0x1a84b4u: goto label_1a84b4;
        case 0x1a84b8u: goto label_1a84b8;
        case 0x1a84bcu: goto label_1a84bc;
        case 0x1a84c0u: goto label_1a84c0;
        case 0x1a84c4u: goto label_1a84c4;
        case 0x1a84c8u: goto label_1a84c8;
        case 0x1a84ccu: goto label_1a84cc;
        case 0x1a84d0u: goto label_1a84d0;
        case 0x1a84d4u: goto label_1a84d4;
        case 0x1a84d8u: goto label_1a84d8;
        case 0x1a84dcu: goto label_1a84dc;
        case 0x1a84e0u: goto label_1a84e0;
        case 0x1a84e4u: goto label_1a84e4;
        case 0x1a84e8u: goto label_1a84e8;
        case 0x1a84ecu: goto label_1a84ec;
        case 0x1a84f0u: goto label_1a84f0;
        case 0x1a84f4u: goto label_1a84f4;
        case 0x1a84f8u: goto label_1a84f8;
        case 0x1a84fcu: goto label_1a84fc;
        case 0x1a8500u: goto label_1a8500;
        case 0x1a8504u: goto label_1a8504;
        case 0x1a8508u: goto label_1a8508;
        case 0x1a850cu: goto label_1a850c;
        case 0x1a8510u: goto label_1a8510;
        case 0x1a8514u: goto label_1a8514;
        case 0x1a8518u: goto label_1a8518;
        case 0x1a851cu: goto label_1a851c;
        case 0x1a8520u: goto label_1a8520;
        case 0x1a8524u: goto label_1a8524;
        case 0x1a8528u: goto label_1a8528;
        case 0x1a852cu: goto label_1a852c;
        case 0x1a8530u: goto label_1a8530;
        case 0x1a8534u: goto label_1a8534;
        case 0x1a8538u: goto label_1a8538;
        case 0x1a853cu: goto label_1a853c;
        case 0x1a8540u: goto label_1a8540;
        case 0x1a8544u: goto label_1a8544;
        case 0x1a8548u: goto label_1a8548;
        case 0x1a854cu: goto label_1a854c;
        case 0x1a8550u: goto label_1a8550;
        case 0x1a8554u: goto label_1a8554;
        case 0x1a8558u: goto label_1a8558;
        case 0x1a855cu: goto label_1a855c;
        case 0x1a8560u: goto label_1a8560;
        case 0x1a8564u: goto label_1a8564;
        case 0x1a8568u: goto label_1a8568;
        case 0x1a856cu: goto label_1a856c;
        case 0x1a8570u: goto label_1a8570;
        case 0x1a8574u: goto label_1a8574;
        case 0x1a8578u: goto label_1a8578;
        case 0x1a857cu: goto label_1a857c;
        case 0x1a8580u: goto label_1a8580;
        case 0x1a8584u: goto label_1a8584;
        case 0x1a8588u: goto label_1a8588;
        case 0x1a858cu: goto label_1a858c;
        case 0x1a8590u: goto label_1a8590;
        case 0x1a8594u: goto label_1a8594;
        case 0x1a8598u: goto label_1a8598;
        case 0x1a859cu: goto label_1a859c;
        case 0x1a85a0u: goto label_1a85a0;
        case 0x1a85a4u: goto label_1a85a4;
        case 0x1a85a8u: goto label_1a85a8;
        case 0x1a85acu: goto label_1a85ac;
        case 0x1a85b0u: goto label_1a85b0;
        case 0x1a85b4u: goto label_1a85b4;
        case 0x1a85b8u: goto label_1a85b8;
        case 0x1a85bcu: goto label_1a85bc;
        case 0x1a85c0u: goto label_1a85c0;
        case 0x1a85c4u: goto label_1a85c4;
        case 0x1a85c8u: goto label_1a85c8;
        case 0x1a85ccu: goto label_1a85cc;
        case 0x1a85d0u: goto label_1a85d0;
        case 0x1a85d4u: goto label_1a85d4;
        case 0x1a85d8u: goto label_1a85d8;
        case 0x1a85dcu: goto label_1a85dc;
        case 0x1a85e0u: goto label_1a85e0;
        case 0x1a85e4u: goto label_1a85e4;
        case 0x1a85e8u: goto label_1a85e8;
        case 0x1a85ecu: goto label_1a85ec;
        case 0x1a85f0u: goto label_1a85f0;
        case 0x1a85f4u: goto label_1a85f4;
        case 0x1a85f8u: goto label_1a85f8;
        case 0x1a85fcu: goto label_1a85fc;
        case 0x1a8600u: goto label_1a8600;
        case 0x1a8604u: goto label_1a8604;
        case 0x1a8608u: goto label_1a8608;
        case 0x1a860cu: goto label_1a860c;
        case 0x1a8610u: goto label_1a8610;
        case 0x1a8614u: goto label_1a8614;
        case 0x1a8618u: goto label_1a8618;
        case 0x1a861cu: goto label_1a861c;
        case 0x1a8620u: goto label_1a8620;
        case 0x1a8624u: goto label_1a8624;
        case 0x1a8628u: goto label_1a8628;
        case 0x1a862cu: goto label_1a862c;
        case 0x1a8630u: goto label_1a8630;
        case 0x1a8634u: goto label_1a8634;
        case 0x1a8638u: goto label_1a8638;
        case 0x1a863cu: goto label_1a863c;
        case 0x1a8640u: goto label_1a8640;
        case 0x1a8644u: goto label_1a8644;
        case 0x1a8648u: goto label_1a8648;
        case 0x1a864cu: goto label_1a864c;
        case 0x1a8650u: goto label_1a8650;
        case 0x1a8654u: goto label_1a8654;
        case 0x1a8658u: goto label_1a8658;
        case 0x1a865cu: goto label_1a865c;
        case 0x1a8660u: goto label_1a8660;
        case 0x1a8664u: goto label_1a8664;
        case 0x1a8668u: goto label_1a8668;
        case 0x1a866cu: goto label_1a866c;
        case 0x1a8670u: goto label_1a8670;
        case 0x1a8674u: goto label_1a8674;
        case 0x1a8678u: goto label_1a8678;
        case 0x1a867cu: goto label_1a867c;
        case 0x1a8680u: goto label_1a8680;
        case 0x1a8684u: goto label_1a8684;
        case 0x1a8688u: goto label_1a8688;
        case 0x1a868cu: goto label_1a868c;
        case 0x1a8690u: goto label_1a8690;
        case 0x1a8694u: goto label_1a8694;
        case 0x1a8698u: goto label_1a8698;
        case 0x1a869cu: goto label_1a869c;
        case 0x1a86a0u: goto label_1a86a0;
        case 0x1a86a4u: goto label_1a86a4;
        case 0x1a86a8u: goto label_1a86a8;
        case 0x1a86acu: goto label_1a86ac;
        case 0x1a86b0u: goto label_1a86b0;
        case 0x1a86b4u: goto label_1a86b4;
        case 0x1a86b8u: goto label_1a86b8;
        case 0x1a86bcu: goto label_1a86bc;
        case 0x1a86c0u: goto label_1a86c0;
        case 0x1a86c4u: goto label_1a86c4;
        case 0x1a86c8u: goto label_1a86c8;
        case 0x1a86ccu: goto label_1a86cc;
        case 0x1a86d0u: goto label_1a86d0;
        case 0x1a86d4u: goto label_1a86d4;
        case 0x1a86d8u: goto label_1a86d8;
        case 0x1a86dcu: goto label_1a86dc;
        case 0x1a86e0u: goto label_1a86e0;
        case 0x1a86e4u: goto label_1a86e4;
        case 0x1a86e8u: goto label_1a86e8;
        case 0x1a86ecu: goto label_1a86ec;
        case 0x1a86f0u: goto label_1a86f0;
        case 0x1a86f4u: goto label_1a86f4;
        case 0x1a86f8u: goto label_1a86f8;
        case 0x1a86fcu: goto label_1a86fc;
        case 0x1a8700u: goto label_1a8700;
        case 0x1a8704u: goto label_1a8704;
        case 0x1a8708u: goto label_1a8708;
        case 0x1a870cu: goto label_1a870c;
        case 0x1a8710u: goto label_1a8710;
        case 0x1a8714u: goto label_1a8714;
        case 0x1a8718u: goto label_1a8718;
        case 0x1a871cu: goto label_1a871c;
        case 0x1a8720u: goto label_1a8720;
        case 0x1a8724u: goto label_1a8724;
        case 0x1a8728u: goto label_1a8728;
        case 0x1a872cu: goto label_1a872c;
        case 0x1a8730u: goto label_1a8730;
        case 0x1a8734u: goto label_1a8734;
        case 0x1a8738u: goto label_1a8738;
        case 0x1a873cu: goto label_1a873c;
        case 0x1a8740u: goto label_1a8740;
        case 0x1a8744u: goto label_1a8744;
        case 0x1a8748u: goto label_1a8748;
        case 0x1a874cu: goto label_1a874c;
        case 0x1a8750u: goto label_1a8750;
        case 0x1a8754u: goto label_1a8754;
        case 0x1a8758u: goto label_1a8758;
        case 0x1a875cu: goto label_1a875c;
        case 0x1a8760u: goto label_1a8760;
        case 0x1a8764u: goto label_1a8764;
        case 0x1a8768u: goto label_1a8768;
        case 0x1a876cu: goto label_1a876c;
        case 0x1a8770u: goto label_1a8770;
        case 0x1a8774u: goto label_1a8774;
        case 0x1a8778u: goto label_1a8778;
        case 0x1a877cu: goto label_1a877c;
        case 0x1a8780u: goto label_1a8780;
        case 0x1a8784u: goto label_1a8784;
        case 0x1a8788u: goto label_1a8788;
        case 0x1a878cu: goto label_1a878c;
        case 0x1a8790u: goto label_1a8790;
        case 0x1a8794u: goto label_1a8794;
        case 0x1a8798u: goto label_1a8798;
        case 0x1a879cu: goto label_1a879c;
        case 0x1a87a0u: goto label_1a87a0;
        case 0x1a87a4u: goto label_1a87a4;
        case 0x1a87a8u: goto label_1a87a8;
        case 0x1a87acu: goto label_1a87ac;
        case 0x1a87b0u: goto label_1a87b0;
        case 0x1a87b4u: goto label_1a87b4;
        case 0x1a87b8u: goto label_1a87b8;
        case 0x1a87bcu: goto label_1a87bc;
        case 0x1a87c0u: goto label_1a87c0;
        case 0x1a87c4u: goto label_1a87c4;
        case 0x1a87c8u: goto label_1a87c8;
        case 0x1a87ccu: goto label_1a87cc;
        case 0x1a87d0u: goto label_1a87d0;
        case 0x1a87d4u: goto label_1a87d4;
        case 0x1a87d8u: goto label_1a87d8;
        case 0x1a87dcu: goto label_1a87dc;
        case 0x1a87e0u: goto label_1a87e0;
        case 0x1a87e4u: goto label_1a87e4;
        case 0x1a87e8u: goto label_1a87e8;
        case 0x1a87ecu: goto label_1a87ec;
        case 0x1a87f0u: goto label_1a87f0;
        case 0x1a87f4u: goto label_1a87f4;
        case 0x1a87f8u: goto label_1a87f8;
        case 0x1a87fcu: goto label_1a87fc;
        case 0x1a8800u: goto label_1a8800;
        case 0x1a8804u: goto label_1a8804;
        case 0x1a8808u: goto label_1a8808;
        case 0x1a880cu: goto label_1a880c;
        case 0x1a8810u: goto label_1a8810;
        case 0x1a8814u: goto label_1a8814;
        case 0x1a8818u: goto label_1a8818;
        case 0x1a881cu: goto label_1a881c;
        case 0x1a8820u: goto label_1a8820;
        case 0x1a8824u: goto label_1a8824;
        case 0x1a8828u: goto label_1a8828;
        case 0x1a882cu: goto label_1a882c;
        case 0x1a8830u: goto label_1a8830;
        case 0x1a8834u: goto label_1a8834;
        case 0x1a8838u: goto label_1a8838;
        case 0x1a883cu: goto label_1a883c;
        case 0x1a8840u: goto label_1a8840;
        case 0x1a8844u: goto label_1a8844;
        case 0x1a8848u: goto label_1a8848;
        case 0x1a884cu: goto label_1a884c;
        case 0x1a8850u: goto label_1a8850;
        case 0x1a8854u: goto label_1a8854;
        case 0x1a8858u: goto label_1a8858;
        case 0x1a885cu: goto label_1a885c;
        case 0x1a8860u: goto label_1a8860;
        case 0x1a8864u: goto label_1a8864;
        case 0x1a8868u: goto label_1a8868;
        case 0x1a886cu: goto label_1a886c;
        case 0x1a8870u: goto label_1a8870;
        case 0x1a8874u: goto label_1a8874;
        case 0x1a8878u: goto label_1a8878;
        case 0x1a887cu: goto label_1a887c;
        case 0x1a8880u: goto label_1a8880;
        case 0x1a8884u: goto label_1a8884;
        case 0x1a8888u: goto label_1a8888;
        case 0x1a888cu: goto label_1a888c;
        case 0x1a8890u: goto label_1a8890;
        case 0x1a8894u: goto label_1a8894;
        case 0x1a8898u: goto label_1a8898;
        case 0x1a889cu: goto label_1a889c;
        case 0x1a88a0u: goto label_1a88a0;
        case 0x1a88a4u: goto label_1a88a4;
        case 0x1a88a8u: goto label_1a88a8;
        case 0x1a88acu: goto label_1a88ac;
        case 0x1a88b0u: goto label_1a88b0;
        case 0x1a88b4u: goto label_1a88b4;
        case 0x1a88b8u: goto label_1a88b8;
        case 0x1a88bcu: goto label_1a88bc;
        case 0x1a88c0u: goto label_1a88c0;
        case 0x1a88c4u: goto label_1a88c4;
        case 0x1a88c8u: goto label_1a88c8;
        case 0x1a88ccu: goto label_1a88cc;
        case 0x1a88d0u: goto label_1a88d0;
        case 0x1a88d4u: goto label_1a88d4;
        case 0x1a88d8u: goto label_1a88d8;
        case 0x1a88dcu: goto label_1a88dc;
        case 0x1a88e0u: goto label_1a88e0;
        case 0x1a88e4u: goto label_1a88e4;
        case 0x1a88e8u: goto label_1a88e8;
        case 0x1a88ecu: goto label_1a88ec;
        case 0x1a88f0u: goto label_1a88f0;
        case 0x1a88f4u: goto label_1a88f4;
        case 0x1a88f8u: goto label_1a88f8;
        case 0x1a88fcu: goto label_1a88fc;
        case 0x1a8900u: goto label_1a8900;
        case 0x1a8904u: goto label_1a8904;
        case 0x1a8908u: goto label_1a8908;
        case 0x1a890cu: goto label_1a890c;
        case 0x1a8910u: goto label_1a8910;
        case 0x1a8914u: goto label_1a8914;
        case 0x1a8918u: goto label_1a8918;
        case 0x1a891cu: goto label_1a891c;
        case 0x1a8920u: goto label_1a8920;
        case 0x1a8924u: goto label_1a8924;
        case 0x1a8928u: goto label_1a8928;
        case 0x1a892cu: goto label_1a892c;
        case 0x1a8930u: goto label_1a8930;
        case 0x1a8934u: goto label_1a8934;
        case 0x1a8938u: goto label_1a8938;
        case 0x1a893cu: goto label_1a893c;
        case 0x1a8940u: goto label_1a8940;
        case 0x1a8944u: goto label_1a8944;
        case 0x1a8948u: goto label_1a8948;
        case 0x1a894cu: goto label_1a894c;
        case 0x1a8950u: goto label_1a8950;
        case 0x1a8954u: goto label_1a8954;
        case 0x1a8958u: goto label_1a8958;
        case 0x1a895cu: goto label_1a895c;
        case 0x1a8960u: goto label_1a8960;
        case 0x1a8964u: goto label_1a8964;
        case 0x1a8968u: goto label_1a8968;
        case 0x1a896cu: goto label_1a896c;
        case 0x1a8970u: goto label_1a8970;
        case 0x1a8974u: goto label_1a8974;
        case 0x1a8978u: goto label_1a8978;
        case 0x1a897cu: goto label_1a897c;
        case 0x1a8980u: goto label_1a8980;
        case 0x1a8984u: goto label_1a8984;
        case 0x1a8988u: goto label_1a8988;
        case 0x1a898cu: goto label_1a898c;
        case 0x1a8990u: goto label_1a8990;
        case 0x1a8994u: goto label_1a8994;
        case 0x1a8998u: goto label_1a8998;
        case 0x1a899cu: goto label_1a899c;
        case 0x1a89a0u: goto label_1a89a0;
        case 0x1a89a4u: goto label_1a89a4;
        case 0x1a89a8u: goto label_1a89a8;
        case 0x1a89acu: goto label_1a89ac;
        case 0x1a89b0u: goto label_1a89b0;
        case 0x1a89b4u: goto label_1a89b4;
        case 0x1a89b8u: goto label_1a89b8;
        case 0x1a89bcu: goto label_1a89bc;
        case 0x1a89c0u: goto label_1a89c0;
        case 0x1a89c4u: goto label_1a89c4;
        case 0x1a89c8u: goto label_1a89c8;
        case 0x1a89ccu: goto label_1a89cc;
        case 0x1a89d0u: goto label_1a89d0;
        case 0x1a89d4u: goto label_1a89d4;
        case 0x1a89d8u: goto label_1a89d8;
        case 0x1a89dcu: goto label_1a89dc;
        case 0x1a89e0u: goto label_1a89e0;
        case 0x1a89e4u: goto label_1a89e4;
        case 0x1a89e8u: goto label_1a89e8;
        case 0x1a89ecu: goto label_1a89ec;
        case 0x1a89f0u: goto label_1a89f0;
        case 0x1a89f4u: goto label_1a89f4;
        case 0x1a89f8u: goto label_1a89f8;
        case 0x1a89fcu: goto label_1a89fc;
        case 0x1a8a00u: goto label_1a8a00;
        case 0x1a8a04u: goto label_1a8a04;
        case 0x1a8a08u: goto label_1a8a08;
        case 0x1a8a0cu: goto label_1a8a0c;
        case 0x1a8a10u: goto label_1a8a10;
        case 0x1a8a14u: goto label_1a8a14;
        case 0x1a8a18u: goto label_1a8a18;
        case 0x1a8a1cu: goto label_1a8a1c;
        case 0x1a8a20u: goto label_1a8a20;
        case 0x1a8a24u: goto label_1a8a24;
        case 0x1a8a28u: goto label_1a8a28;
        case 0x1a8a2cu: goto label_1a8a2c;
        case 0x1a8a30u: goto label_1a8a30;
        case 0x1a8a34u: goto label_1a8a34;
        case 0x1a8a38u: goto label_1a8a38;
        case 0x1a8a3cu: goto label_1a8a3c;
        case 0x1a8a40u: goto label_1a8a40;
        case 0x1a8a44u: goto label_1a8a44;
        case 0x1a8a48u: goto label_1a8a48;
        case 0x1a8a4cu: goto label_1a8a4c;
        case 0x1a8a50u: goto label_1a8a50;
        case 0x1a8a54u: goto label_1a8a54;
        case 0x1a8a58u: goto label_1a8a58;
        case 0x1a8a5cu: goto label_1a8a5c;
        case 0x1a8a60u: goto label_1a8a60;
        case 0x1a8a64u: goto label_1a8a64;
        case 0x1a8a68u: goto label_1a8a68;
        case 0x1a8a6cu: goto label_1a8a6c;
        case 0x1a8a70u: goto label_1a8a70;
        case 0x1a8a74u: goto label_1a8a74;
        case 0x1a8a78u: goto label_1a8a78;
        case 0x1a8a7cu: goto label_1a8a7c;
        case 0x1a8a80u: goto label_1a8a80;
        case 0x1a8a84u: goto label_1a8a84;
        case 0x1a8a88u: goto label_1a8a88;
        case 0x1a8a8cu: goto label_1a8a8c;
        case 0x1a8a90u: goto label_1a8a90;
        case 0x1a8a94u: goto label_1a8a94;
        case 0x1a8a98u: goto label_1a8a98;
        case 0x1a8a9cu: goto label_1a8a9c;
        case 0x1a8aa0u: goto label_1a8aa0;
        case 0x1a8aa4u: goto label_1a8aa4;
        case 0x1a8aa8u: goto label_1a8aa8;
        case 0x1a8aacu: goto label_1a8aac;
        case 0x1a8ab0u: goto label_1a8ab0;
        case 0x1a8ab4u: goto label_1a8ab4;
        case 0x1a8ab8u: goto label_1a8ab8;
        case 0x1a8abcu: goto label_1a8abc;
        case 0x1a8ac0u: goto label_1a8ac0;
        case 0x1a8ac4u: goto label_1a8ac4;
        case 0x1a8ac8u: goto label_1a8ac8;
        case 0x1a8accu: goto label_1a8acc;
        case 0x1a8ad0u: goto label_1a8ad0;
        case 0x1a8ad4u: goto label_1a8ad4;
        case 0x1a8ad8u: goto label_1a8ad8;
        case 0x1a8adcu: goto label_1a8adc;
        case 0x1a8ae0u: goto label_1a8ae0;
        case 0x1a8ae4u: goto label_1a8ae4;
        case 0x1a8ae8u: goto label_1a8ae8;
        case 0x1a8aecu: goto label_1a8aec;
        case 0x1a8af0u: goto label_1a8af0;
        case 0x1a8af4u: goto label_1a8af4;
        case 0x1a8af8u: goto label_1a8af8;
        case 0x1a8afcu: goto label_1a8afc;
        case 0x1a8b00u: goto label_1a8b00;
        case 0x1a8b04u: goto label_1a8b04;
        case 0x1a8b08u: goto label_1a8b08;
        case 0x1a8b0cu: goto label_1a8b0c;
        case 0x1a8b10u: goto label_1a8b10;
        case 0x1a8b14u: goto label_1a8b14;
        case 0x1a8b18u: goto label_1a8b18;
        case 0x1a8b1cu: goto label_1a8b1c;
        case 0x1a8b20u: goto label_1a8b20;
        case 0x1a8b24u: goto label_1a8b24;
        case 0x1a8b28u: goto label_1a8b28;
        case 0x1a8b2cu: goto label_1a8b2c;
        case 0x1a8b30u: goto label_1a8b30;
        case 0x1a8b34u: goto label_1a8b34;
        case 0x1a8b38u: goto label_1a8b38;
        case 0x1a8b3cu: goto label_1a8b3c;
        case 0x1a8b40u: goto label_1a8b40;
        case 0x1a8b44u: goto label_1a8b44;
        case 0x1a8b48u: goto label_1a8b48;
        case 0x1a8b4cu: goto label_1a8b4c;
        case 0x1a8b50u: goto label_1a8b50;
        case 0x1a8b54u: goto label_1a8b54;
        case 0x1a8b58u: goto label_1a8b58;
        case 0x1a8b5cu: goto label_1a8b5c;
        case 0x1a8b60u: goto label_1a8b60;
        case 0x1a8b64u: goto label_1a8b64;
        case 0x1a8b68u: goto label_1a8b68;
        case 0x1a8b6cu: goto label_1a8b6c;
        case 0x1a8b70u: goto label_1a8b70;
        case 0x1a8b74u: goto label_1a8b74;
        case 0x1a8b78u: goto label_1a8b78;
        case 0x1a8b7cu: goto label_1a8b7c;
        case 0x1a8b80u: goto label_1a8b80;
        case 0x1a8b84u: goto label_1a8b84;
        case 0x1a8b88u: goto label_1a8b88;
        case 0x1a8b8cu: goto label_1a8b8c;
        case 0x1a8b90u: goto label_1a8b90;
        case 0x1a8b94u: goto label_1a8b94;
        case 0x1a8b98u: goto label_1a8b98;
        case 0x1a8b9cu: goto label_1a8b9c;
        case 0x1a8ba0u: goto label_1a8ba0;
        case 0x1a8ba4u: goto label_1a8ba4;
        case 0x1a8ba8u: goto label_1a8ba8;
        case 0x1a8bacu: goto label_1a8bac;
        case 0x1a8bb0u: goto label_1a8bb0;
        case 0x1a8bb4u: goto label_1a8bb4;
        case 0x1a8bb8u: goto label_1a8bb8;
        case 0x1a8bbcu: goto label_1a8bbc;
        default: return;
    }

label_1a83f0:
    // 0x1a83f0: 0xb46a0030  sdr         $t2, 0x30($v1)
    ctx->pc = 0x1a83f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a83f4:
    // 0x1a83f4: 0xb064003f  sdl         $a0, 0x3F($v1)
    ctx->pc = 0x1a83f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a83f8:
    // 0x1a83f8: 0x10000019  b           . + 4 + (0x19 << 2)
label_1a83fc:
    if (ctx->pc == 0x1A83FCu) {
        ctx->pc = 0x1A83FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A83F8u;
        // 0x1a83fc: 0xb4640038  sdr         $a0, 0x38($v1) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 3), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8400u;
        goto label_1a8400;
    }
    ctx->pc = 0x1A83F8u;
    {
        const bool branch_taken_0x1a83f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A83FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A83F8u;
        // 0x1a83fc: 0xb4640038  sdr         $a0, 0x38($v1) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 3), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a83f8) {
            ctx->pc = 0x1A8460u;
            goto label_1a8460;
        }
    }
    ctx->pc = 0x1A8400u;
label_1a8400:
    // 0x1a8400: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1a8400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1a8404:
    // 0x1a8404: 0x3c072000  lui         $a3, 0x2000
    ctx->pc = 0x1a8404u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8192 << 16));
label_1a8408:
    // 0x1a8408: 0x24453ed4  addiu       $a1, $v0, 0x3ED4
    ctx->pc = 0x1a8408u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16084));
label_1a840c:
    // 0x1a840c: 0xa71825  or          $v1, $a1, $a3
    ctx->pc = 0x1a840cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
label_1a8410:
    // 0x1a8410: 0x24a20004  addiu       $v0, $a1, 0x4
    ctx->pc = 0x1a8410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_1a8414:
    // 0x1a8414: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x1a8414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
label_1a8418:
    // 0x1a8418: 0x88660003  lwl         $a2, 0x3($v1)
    ctx->pc = 0x1a8418u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 6) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 6, (int32_t)merged); }
label_1a841c:
    // 0x1a841c: 0x98660000  lwr         $a2, 0x0($v1)
    ctx->pc = 0x1a841cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 6) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 6) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 6, merged64); }
label_1a8420:
    // 0x1a8420: 0xaba60013  swl         $a2, 0x13($sp)
    ctx->pc = 0x1a8420u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_1a8424:
    // 0x1a8424: 0xbba60010  swr         $a2, 0x10($sp)
    ctx->pc = 0x1a8424u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_1a8428:
    // 0x1a8428: 0x88430003  lwl         $v1, 0x3($v0)
    ctx->pc = 0x1a8428u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
label_1a842c:
    // 0x1a842c: 0x98430000  lwr         $v1, 0x0($v0)
    ctx->pc = 0x1a842cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
label_1a8430:
    // 0x1a8430: 0xaba30017  swl         $v1, 0x17($sp)
    ctx->pc = 0x1a8430u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_1a8434:
    // 0x1a8434: 0xbba30014  swr         $v1, 0x14($sp)
    ctx->pc = 0x1a8434u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 20); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_1a8438:
    // 0x1a8438: 0x8fa60014  lw          $a2, 0x14($sp)
    ctx->pc = 0x1a8438u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_1a843c:
    // 0x1a843c: 0x2cc20401  sltiu       $v0, $a2, 0x401
    ctx->pc = 0x1a843cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)1025) ? 1 : 0);
label_1a8440:
    // 0x1a8440: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1a8444:
    if (ctx->pc == 0x1A8444u) {
        ctx->pc = 0x1A8444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8440u;
        // 0x1a8444: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8448u;
        goto label_1a8448;
    }
    ctx->pc = 0x1A8440u;
    {
        const bool branch_taken_0x1a8440 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A8444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8440u;
        // 0x1a8444: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8440) {
            ctx->pc = 0x1A8454u;
            goto label_1a8454;
        }
    }
    ctx->pc = 0x1A8448u;
label_1a8448:
    // 0x1a8448: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x1a8448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_1a844c:
    // 0x1a844c: 0x24060400  addiu       $a2, $zero, 0x400
    ctx->pc = 0x1a844cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_1a8450:
    // 0x1a8450: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1a8450u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_1a8454:
    // 0x1a8454: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1a8454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1a8458:
    // 0x1a8458: 0xc08e93e  jal         func_23A4F8
label_1a845c:
    if (ctx->pc == 0x1A845Cu) {
        ctx->pc = 0x1A845Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8458u;
        // 0x1a845c: 0xe52825  or          $a1, $a3, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8460u;
        goto label_1a8460;
    }
    ctx->pc = 0x1A8458u;
    SET_GPR_U32(ctx, 31, 0x1A8460u);
    ctx->pc = 0x1A845Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8458u;
    // 0x1a845c: 0xe52825  or          $a1, $a3, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) | GPR_U64(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    { ctx->pc = 0x23a4f8; return; }
    ctx->pc = 0x1A8460u;
label_1a8460:
    // 0x1a8460: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1a8460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1a8464:
    // 0x1a8464: 0x4810019  bgez        $a0, . + 4 + (0x19 << 2)
label_1a8468:
    if (ctx->pc == 0x1A8468u) {
        ctx->pc = 0x1A8468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8464u;
        // 0x1a8468: 0x3c070028  lui         $a3, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A846Cu;
        goto label_1a846c;
    }
    ctx->pc = 0x1A8464u;
    {
        const bool branch_taken_0x1a8464 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1A8468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8464u;
        // 0x1a8468: 0x3c070028  lui         $a3, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8464) {
            ctx->pc = 0x1A84CCu;
            goto label_1a84cc;
        }
    }
    ctx->pc = 0x1A846Cu;
label_1a846c:
    // 0x1a846c: 0x41023  negu        $v0, $a0
    ctx->pc = 0x1a846cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
label_1a8470:
    // 0x1a8470: 0x8ce35b78  lw          $v1, 0x5B78($a3)
    ctx->pc = 0x1a8470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 23416)));
label_1a8474:
    // 0x1a8474: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1a8474u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a8478:
    // 0x1a8478: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1a8478u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_1a847c:
    // 0x1a847c: 0x14660006  bne         $v1, $a2, . + 4 + (0x6 << 2)
label_1a8480:
    if (ctx->pc == 0x1A8480u) {
        ctx->pc = 0x1A8480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A847Cu;
        // 0x1a8480: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8484u;
        goto label_1a8484;
    }
    ctx->pc = 0x1A847Cu;
    {
        const bool branch_taken_0x1a847c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x1A8480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A847Cu;
        // 0x1a8480: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a847c) {
            ctx->pc = 0x1A8498u;
            goto label_1a8498;
        }
    }
    ctx->pc = 0x1A8484u;
label_1a8484:
    // 0x1a8484: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a8484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1a8488:
    // 0x1a8488: 0xace25b78  sw          $v0, 0x5B78($a3)
    ctx->pc = 0x1a8488u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 23416), GPR_U32(ctx, 2));
label_1a848c:
    // 0x1a848c: 0x10000012  b           . + 4 + (0x12 << 2)
label_1a8490:
    if (ctx->pc == 0x1A8490u) {
        ctx->pc = 0x1A8490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A848Cu;
        // 0x1a8490: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8494u;
        goto label_1a8494;
    }
    ctx->pc = 0x1A848Cu;
    {
        const bool branch_taken_0x1a848c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A848Cu;
        // 0x1a8490: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a848c) {
            ctx->pc = 0x1A84D8u;
            goto label_1a84d8;
        }
    }
    ctx->pc = 0x1A8494u;
label_1a8494:
    // 0x1a8494: 0x0  nop
    ctx->pc = 0x1a8494u;
    // NOP
label_1a8498:
    // 0x1a8498: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1a8498u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1a849c:
    // 0x1a849c: 0x28a20020  slti        $v0, $a1, 0x20
    ctx->pc = 0x1a849cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
label_1a84a0:
    // 0x1a84a0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_1a84a4:
    if (ctx->pc == 0x1A84A4u) {
        ctx->pc = 0x1A84A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A84A0u;
        // 0x1a84a4: 0x24e25b78  addiu       $v0, $a3, 0x5B78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 23416));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A84A8u;
        goto label_1a84a8;
    }
    ctx->pc = 0x1A84A0u;
    {
        const bool branch_taken_0x1a84a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A84A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A84A0u;
        // 0x1a84a4: 0x24e25b78  addiu       $v0, $a3, 0x5B78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 23416));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a84a0) {
            ctx->pc = 0x1A84D4u;
            goto label_1a84d4;
        }
    }
    ctx->pc = 0x1A84A8u;
label_1a84a8:
    // 0x1a84a8: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1a84a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1a84ac:
    // 0x1a84ac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1a84acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1a84b0:
    // 0x1a84b0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1a84b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1a84b4:
    // 0x1a84b4: 0x1486fff9  bne         $a0, $a2, . + 4 + (-0x7 << 2)
label_1a84b8:
    if (ctx->pc == 0x1A84B8u) {
        ctx->pc = 0x1A84B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A84B4u;
        // 0x1a84b8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A84BCu;
        goto label_1a84bc;
    }
    ctx->pc = 0x1A84B4u;
    {
        const bool branch_taken_0x1a84b4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x1A84B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A84B4u;
        // 0x1a84b8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a84b4) {
            ctx->pc = 0x1A849Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a849c;
        }
    }
    ctx->pc = 0x1A84BCu;
label_1a84bc:
    // 0x1a84bc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a84bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1a84c0:
    // 0x1a84c0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1a84c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1a84c4:
    // 0x1a84c4: 0x10000004  b           . + 4 + (0x4 << 2)
label_1a84c8:
    if (ctx->pc == 0x1A84C8u) {
        ctx->pc = 0x1A84C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A84C4u;
        // 0x1a84c8: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A84CCu;
        goto label_1a84cc;
    }
    ctx->pc = 0x1A84C4u;
    {
        const bool branch_taken_0x1a84c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A84C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A84C4u;
        // 0x1a84c8: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a84c4) {
            ctx->pc = 0x1A84D8u;
            goto label_1a84d8;
        }
    }
    ctx->pc = 0x1A84CCu;
label_1a84cc:
    // 0x1a84cc: 0xc069214  jal         func_1A4850
label_1a84d0:
    if (ctx->pc == 0x1A84D0u) {
        ctx->pc = 0x1A84D4u;
        goto label_1a84d4;
    }
    ctx->pc = 0x1A84CCu;
    SET_GPR_U32(ctx, 31, 0x1A84D4u);
    ctx->pc = 0x1A4850u;
    { ctx->pc = 0x1a4850; return; }
    ctx->pc = 0x1A84D4u;
label_1a84d4:
    // 0x1a84d4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a84d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a84d8:
    // 0x1a84d8: 0x3e00008  jr          $ra
label_1a84dc:
    if (ctx->pc == 0x1A84DCu) {
        ctx->pc = 0x1A84DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A84D8u;
        // 0x1a84dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A84E0u;
        goto label_1a84e0;
    }
    ctx->pc = 0x1A84D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A84DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A84D8u;
        // 0x1a84dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A84D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A84E0u;
label_1a84e0:
    // 0x1a84e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a84e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1a84e4:
    // 0x1a84e4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1a84e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1a84e8:
    // 0x1a84e8: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1a84e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_1a84ec:
    // 0x1a84ec: 0x3c100028  lui         $s0, 0x28
    ctx->pc = 0x1a84ecu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)40 << 16));
label_1a84f0:
    // 0x1a84f0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1a84f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1a84f4:
    // 0x1a84f4: 0x8e025bfc  lw          $v0, 0x5BFC($s0)
    ctx->pc = 0x1a84f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 23548)));
label_1a84f8:
    // 0x1a84f8: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
label_1a84fc:
    if (ctx->pc == 0x1A84FCu) {
        ctx->pc = 0x1A84FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A84F8u;
        // 0x1a84fc: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8500u;
        goto label_1a8500;
    }
    ctx->pc = 0x1A84F8u;
    {
        const bool branch_taken_0x1a84f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1A84FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A84F8u;
        // 0x1a84fc: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a84f8) {
            ctx->pc = 0x1A8520u;
            goto label_1a8520;
        }
    }
    ctx->pc = 0x1A8500u;
label_1a8500:
    // 0x1a8500: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a8500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a8504:
    // 0x1a8504: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x1a8504u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_1a8508:
    // 0x1a8508: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x1a8508u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_1a850c:
    // 0x1a850c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1a850cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1a8510:
    // 0x1a8510: 0xc069208  jal         func_1A4820
label_1a8514:
    if (ctx->pc == 0x1A8514u) {
        ctx->pc = 0x1A8514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8510u;
        // 0x1a8514: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8518u;
        goto label_1a8518;
    }
    ctx->pc = 0x1A8510u;
    SET_GPR_U32(ctx, 31, 0x1A8518u);
    ctx->pc = 0x1A8514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8510u;
    // 0x1a8514: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4820u;
    { ctx->pc = 0x1a4820; return; }
    ctx->pc = 0x1A8518u;
label_1a8518:
    // 0x1a8518: 0xae025bfc  sw          $v0, 0x5BFC($s0)
    ctx->pc = 0x1a8518u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 23548), GPR_U32(ctx, 2));
label_1a851c:
    // 0x1a851c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1a851cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1a8520:
    // 0x1a8520: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1a8520u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a8524:
    // 0x1a8524: 0x3e00008  jr          $ra
label_1a8528:
    if (ctx->pc == 0x1A8528u) {
        ctx->pc = 0x1A8528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8524u;
        // 0x1a8528: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A852Cu;
        goto label_1a852c;
    }
    ctx->pc = 0x1A8524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8524u;
        // 0x1a8528: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A8524u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A852Cu;
label_1a852c:
    // 0x1a852c: 0x0  nop
    ctx->pc = 0x1a852cu;
    // NOP
label_1a8530:
    // 0x1a8530: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a8530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1a8534:
    // 0x1a8534: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a8534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1a8538:
    // 0x1a8538: 0xc06a138  jal         func_1A84E0
label_1a853c:
    if (ctx->pc == 0x1A853Cu) {
        ctx->pc = 0x1A8540u;
        goto label_1a8540;
    }
    ctx->pc = 0x1A8538u;
    SET_GPR_U32(ctx, 31, 0x1A8540u);
    ctx->pc = 0x1A84E0u;
    goto label_1a84e0;
    ctx->pc = 0x1A8540u;
label_1a8540:
    // 0x1a8540: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1a8540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_1a8544:
    // 0x1a8544: 0xc069218  jal         func_1A4860
label_1a8548:
    if (ctx->pc == 0x1A8548u) {
        ctx->pc = 0x1A8548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8544u;
        // 0x1a8548: 0x8c445bfc  lw          $a0, 0x5BFC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 23548)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A854Cu;
        goto label_1a854c;
    }
    ctx->pc = 0x1A8544u;
    SET_GPR_U32(ctx, 31, 0x1A854Cu);
    ctx->pc = 0x1A8548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8544u;
    // 0x1a8548: 0x8c445bfc  lw          $a0, 0x5BFC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 23548)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4860u;
    { ctx->pc = 0x1a4860; return; }
    ctx->pc = 0x1A854Cu;
label_1a854c:
    // 0x1a854c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a854cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a8550:
    // 0x1a8550: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a8550u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a8554:
    // 0x1a8554: 0x3e00008  jr          $ra
label_1a8558:
    if (ctx->pc == 0x1A8558u) {
        ctx->pc = 0x1A8558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8554u;
        // 0x1a8558: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A855Cu;
        goto label_1a855c;
    }
    ctx->pc = 0x1A8554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8554u;
        // 0x1a8558: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A8554u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A855Cu;
label_1a855c:
    // 0x1a855c: 0x0  nop
    ctx->pc = 0x1a855cu;
    // NOP
label_1a8560:
    // 0x1a8560: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1a8560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_1a8564:
    // 0x1a8564: 0x8069210  j           func_1A4840
label_1a8568:
    if (ctx->pc == 0x1A8568u) {
        ctx->pc = 0x1A8568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8564u;
        // 0x1a8568: 0x8c445bfc  lw          $a0, 0x5BFC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 23548)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A856Cu;
        goto label_1a856c;
    }
    ctx->pc = 0x1A8564u;
    ctx->pc = 0x1A8568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8564u;
    // 0x1a8568: 0x8c445bfc  lw          $a0, 0x5BFC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 23548)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x1A856Cu;
label_1a856c:
    // 0x1a856c: 0x0  nop
    ctx->pc = 0x1a856cu;
    // NOP
label_1a8570:
    // 0x1a8570: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1a8570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1a8574:
    // 0x1a8574: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1a8574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_1a8578:
    // 0x1a8578: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1a8578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1a857c:
    // 0x1a857c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1a857cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a8580:
    // 0x1a8580: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1a8580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_1a8584:
    // 0x1a8584: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1a8584u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a8588:
    // 0x1a8588: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a8588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a858c:
    // 0x1a858c: 0x2404001b  addiu       $a0, $zero, 0x1B
    ctx->pc = 0x1a858cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_1a8590:
    // 0x1a8590: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1a8590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1a8594:
    // 0x1a8594: 0x3c100037  lui         $s0, 0x37
    ctx->pc = 0x1a8594u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)55 << 16));
label_1a8598:
    // 0x1a8598: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1a8598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_1a859c:
    // 0x1a859c: 0xc06a14c  jal         func_1A8530
label_1a85a0:
    if (ctx->pc == 0x1A85A0u) {
        ctx->pc = 0x1A85A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A859Cu;
        // 0x1a85a0: 0x26144580  addiu       $s4, $s0, 0x4580 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 17792));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A85A4u;
        goto label_1a85a4;
    }
    ctx->pc = 0x1A859Cu;
    SET_GPR_U32(ctx, 31, 0x1A85A4u);
    ctx->pc = 0x1A85A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A859Cu;
    // 0x1a85a0: 0x26144580  addiu       $s4, $s0, 0x4580 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 17792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8530u;
    goto label_1a8530;
    ctx->pc = 0x1A85A4u;
label_1a85a4:
    // 0x1a85a4: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1a85a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_1a85a8:
    // 0x1a85a8: 0x8c435bf8  lw          $v1, 0x5BF8($v0)
    ctx->pc = 0x1a85a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 23544)));
label_1a85ac:
    // 0x1a85ac: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_1a85b0:
    if (ctx->pc == 0x1A85B0u) {
        ctx->pc = 0x1A85B4u;
        goto label_1a85b4;
    }
    ctx->pc = 0x1A85ACu;
    {
        const bool branch_taken_0x1a85ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a85ac) {
            ctx->pc = 0x1A85BCu;
            goto label_1a85bc;
        }
    }
    ctx->pc = 0x1A85B4u;
label_1a85b4:
    // 0x1a85b4: 0xc06a18e  jal         func_1A8638
label_1a85b8:
    if (ctx->pc == 0x1A85B8u) {
        ctx->pc = 0x1A85BCu;
        goto label_1a85bc;
    }
    ctx->pc = 0x1A85B4u;
    SET_GPR_U32(ctx, 31, 0x1A85BCu);
    ctx->pc = 0x1A8638u;
    goto label_1a8638;
    ctx->pc = 0x1A85BCu;
label_1a85bc:
    // 0x1a85bc: 0xc06b518  jal         func_1AD460
label_1a85c0:
    if (ctx->pc == 0x1A85C0u) {
        ctx->pc = 0x1A85C4u;
        goto label_1a85c4;
    }
    ctx->pc = 0x1A85BCu;
    SET_GPR_U32(ctx, 31, 0x1A85C4u);
    ctx->pc = 0x1AD460u;
    { ctx->pc = 0x1ad460; return; }
    ctx->pc = 0x1A85C4u;
label_1a85c4:
    // 0x1a85c4: 0x8e114580  lw          $s1, 0x4580($s0)
    ctx->pc = 0x1a85c4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 17792)));
label_1a85c8:
    // 0x1a85c8: 0xae920004  sw          $s2, 0x4($s4)
    ctx->pc = 0x1a85c8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 18));
label_1a85cc:
    // 0x1a85cc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1a85d0:
    if (ctx->pc == 0x1A85D0u) {
        ctx->pc = 0x1A85D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A85CCu;
        // 0x1a85d0: 0xae134580  sw          $s3, 0x4580($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 17792), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A85D4u;
        goto label_1a85d4;
    }
    ctx->pc = 0x1A85CCu;
    {
        const bool branch_taken_0x1a85cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A85D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A85CCu;
        // 0x1a85d0: 0xae134580  sw          $s3, 0x4580($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 17792), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a85cc) {
            ctx->pc = 0x1A85DCu;
            goto label_1a85dc;
        }
    }
    ctx->pc = 0x1A85D4u;
label_1a85d4:
    // 0x1a85d4: 0xc06b52a  jal         func_1AD4A8
label_1a85d8:
    if (ctx->pc == 0x1A85D8u) {
        ctx->pc = 0x1A85DCu;
        goto label_1a85dc;
    }
    ctx->pc = 0x1A85D4u;
    SET_GPR_U32(ctx, 31, 0x1A85DCu);
    ctx->pc = 0x1AD4A8u;
    { ctx->pc = 0x1ad4a8; return; }
    ctx->pc = 0x1A85DCu;
label_1a85dc:
    // 0x1a85dc: 0xc06a158  jal         func_1A8560
label_1a85e0:
    if (ctx->pc == 0x1A85E0u) {
        ctx->pc = 0x1A85E4u;
        goto label_1a85e4;
    }
    ctx->pc = 0x1A85DCu;
    SET_GPR_U32(ctx, 31, 0x1A85E4u);
    ctx->pc = 0x1A8560u;
    goto label_1a8560;
    ctx->pc = 0x1A85E4u;
label_1a85e4:
    // 0x1a85e4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1a85e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a85e8:
    // 0x1a85e8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1a85e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1a85ec:
    // 0x1a85ec: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1a85ecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1a85f0:
    // 0x1a85f0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1a85f0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1a85f4:
    // 0x1a85f4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a85f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a85f8:
    // 0x1a85f8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a85f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a85fc:
    // 0x1a85fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a85fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a8600:
    // 0x1a8600: 0x3e00008  jr          $ra
label_1a8604:
    if (ctx->pc == 0x1A8604u) {
        ctx->pc = 0x1A8604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8600u;
        // 0x1a8604: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8608u;
        goto label_1a8608;
    }
    ctx->pc = 0x1A8600u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8600u;
        // 0x1a8604: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A8600u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A8608u;
label_1a8608:
    // 0x1a8608: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a8608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1a860c:
    // 0x1a860c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1a860cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1a8610:
    // 0x1a8610: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1a8614:
    if (ctx->pc == 0x1A8614u) {
        ctx->pc = 0x1A8614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8610u;
        // 0x1a8614: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8618u;
        goto label_1a8618;
    }
    ctx->pc = 0x1A8610u;
    {
        const bool branch_taken_0x1a8610 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8610u;
        // 0x1a8614: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8610) {
            ctx->pc = 0x1A8620u;
            goto label_1a8620;
        }
    }
    ctx->pc = 0x1A8618u;
label_1a8618:
    // 0x1a8618: 0x40f809  jalr        $v0
label_1a861c:
    if (ctx->pc == 0x1A861Cu) {
        ctx->pc = 0x1A861Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8618u;
        // 0x1a861c: 0x8ca40004  lw          $a0, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8620u;
        goto label_1a8620;
    }
    ctx->pc = 0x1A8618u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A8620u);
        ctx->pc = 0x1A861Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8618u;
        // 0x1a861c: 0x8ca40004  lw          $a0, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A8618u, 0x1A8620u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A8620u;
label_1a8620:
    // 0x1a8620: 0xf  sync
    ctx->pc = 0x1a8620u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_1a8624:
    // 0x1a8624: 0x42000038  ei
    ctx->pc = 0x1a8624u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_1a8628:
    // 0x1a8628: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a8628u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a862c:
    // 0x1a862c: 0x3e00008  jr          $ra
label_1a8630:
    if (ctx->pc == 0x1A8630u) {
        ctx->pc = 0x1A8630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A862Cu;
        // 0x1a8630: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8634u;
        goto label_1a8634;
    }
    ctx->pc = 0x1A862Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A862Cu;
        // 0x1a8630: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A862Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A8634u;
label_1a8634:
    // 0x1a8634: 0x0  nop
    ctx->pc = 0x1a8634u;
    // NOP
label_1a8638:
    // 0x1a8638: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1a8638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1a863c:
    // 0x1a863c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a863cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a8640:
    // 0x1a8640: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1a8640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1a8644:
    // 0x1a8644: 0x3c100037  lui         $s0, 0x37
    ctx->pc = 0x1a8644u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)55 << 16));
label_1a8648:
    // 0x1a8648: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1a8648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_1a864c:
    // 0x1a864c: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1a864cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_1a8650:
    // 0x1a8650: 0x26114580  addiu       $s1, $s0, 0x4580
    ctx->pc = 0x1a8650u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 17792));
label_1a8654:
    // 0x1a8654: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1a8654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_1a8658:
    // 0x1a8658: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x1a8658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_1a865c:
    // 0x1a865c: 0xc069c1a  jal         func_1A7068
label_1a8660:
    if (ctx->pc == 0x1A8660u) {
        ctx->pc = 0x1A8660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A865Cu;
        // 0x1a8660: 0xffb20030  sd          $s2, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8664u;
        goto label_1a8664;
    }
    ctx->pc = 0x1A865Cu;
    SET_GPR_U32(ctx, 31, 0x1A8664u);
    ctx->pc = 0x1A8660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A865Cu;
    // 0x1a8660: 0xffb20030  sd          $s2, 0x30($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7068u;
    { ctx->pc = 0x1a7068; return; }
    ctx->pc = 0x1A8664u;
label_1a8664:
    // 0x1a8664: 0xae004580  sw          $zero, 0x4580($s0)
    ctx->pc = 0x1a8664u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 17792), GPR_U32(ctx, 0));
label_1a8668:
    // 0x1a8668: 0xc06b518  jal         func_1AD460
label_1a866c:
    if (ctx->pc == 0x1A866Cu) {
        ctx->pc = 0x1A866Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8668u;
        // 0x1a866c: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8670u;
        goto label_1a8670;
    }
    ctx->pc = 0x1A8668u;
    SET_GPR_U32(ctx, 31, 0x1A8670u);
    ctx->pc = 0x1A866Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8668u;
    // 0x1a866c: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD460u;
    { ctx->pc = 0x1ad460; return; }
    ctx->pc = 0x1A8670u;
label_1a8670:
    // 0x1a8670: 0x3c05001b  lui         $a1, 0x1B
    ctx->pc = 0x1a8670u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)27 << 16));
label_1a8674:
    // 0x1a8674: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x1a8674u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
label_1a8678:
    // 0x1a8678: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1a8678u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_1a867c:
    // 0x1a867c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a867cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a8680:
    // 0x1a8680: 0x24a58120  addiu       $a1, $a1, -0x7EE0
    ctx->pc = 0x1a8680u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934816));
label_1a8684:
    // 0x1a8684: 0x24c64540  addiu       $a2, $a2, 0x4540
    ctx->pc = 0x1a8684u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 17728));
label_1a8688:
    // 0x1a8688: 0xc069b20  jal         func_1A6C80
label_1a868c:
    if (ctx->pc == 0x1A868Cu) {
        ctx->pc = 0x1A868Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8688u;
        // 0x1a868c: 0x34840011  ori         $a0, $a0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)17);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8690u;
        goto label_1a8690;
    }
    ctx->pc = 0x1A8688u;
    SET_GPR_U32(ctx, 31, 0x1A8690u);
    ctx->pc = 0x1A868Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8688u;
    // 0x1a868c: 0x34840011  ori         $a0, $a0, 0x11 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)17);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6C80u;
    { ctx->pc = 0x1a6c80; return; }
    ctx->pc = 0x1A8690u;
label_1a8690:
    // 0x1a8690: 0x3c05001b  lui         $a1, 0x1B
    ctx->pc = 0x1a8690u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)27 << 16));
label_1a8694:
    // 0x1a8694: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1a8694u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_1a8698:
    // 0x1a8698: 0x24a58608  addiu       $a1, $a1, -0x79F8
    ctx->pc = 0x1a8698u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936072));
label_1a869c:
    // 0x1a869c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1a869cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a86a0:
    // 0x1a86a0: 0xc069b20  jal         func_1A6C80
label_1a86a4:
    if (ctx->pc == 0x1A86A4u) {
        ctx->pc = 0x1A86A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A86A0u;
        // 0x1a86a4: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A86A8u;
        goto label_1a86a8;
    }
    ctx->pc = 0x1A86A0u;
    SET_GPR_U32(ctx, 31, 0x1A86A8u);
    ctx->pc = 0x1A86A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A86A0u;
    // 0x1a86a4: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6C80u;
    { ctx->pc = 0x1a6c80; return; }
    ctx->pc = 0x1A86A8u;
label_1a86a8:
    // 0x1a86a8: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
label_1a86ac:
    if (ctx->pc == 0x1A86ACu) {
        ctx->pc = 0x1A86ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A86A8u;
        // 0x1a86ac: 0x3c130037  lui         $s3, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A86B0u;
        goto label_1a86b0;
    }
    ctx->pc = 0x1A86A8u;
    {
        const bool branch_taken_0x1a86a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A86ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A86A8u;
        // 0x1a86ac: 0x3c130037  lui         $s3, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a86a8) {
            ctx->pc = 0x1A86E4u;
            goto label_1a86e4;
        }
    }
    ctx->pc = 0x1A86B0u;
label_1a86b0:
    // 0x1a86b0: 0xc06b52a  jal         func_1AD4A8
label_1a86b4:
    if (ctx->pc == 0x1A86B4u) {
        ctx->pc = 0x1A86B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A86B0u;
        // 0x1a86b4: 0x26704500  addiu       $s0, $s3, 0x4500 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 17664));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A86B8u;
        goto label_1a86b8;
    }
    ctx->pc = 0x1A86B0u;
    SET_GPR_U32(ctx, 31, 0x1A86B8u);
    ctx->pc = 0x1A86B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A86B0u;
    // 0x1a86b4: 0x26704500  addiu       $s0, $s3, 0x4500 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 17664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD4A8u;
    { ctx->pc = 0x1ad4a8; return; }
    ctx->pc = 0x1A86B8u;
label_1a86b8:
    // 0x1a86b8: 0x1000000b  b           . + 4 + (0xB << 2)
label_1a86bc:
    if (ctx->pc == 0x1A86BCu) {
        ctx->pc = 0x1A86C0u;
        goto label_1a86c0;
    }
    ctx->pc = 0x1A86B8u;
    {
        const bool branch_taken_0x1a86b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a86b8) {
            ctx->pc = 0x1A86E8u;
            goto label_1a86e8;
        }
    }
    ctx->pc = 0x1A86C0u;
label_1a86c0:
    // 0x1a86c0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1a86c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1a86c4:
    // 0x1a86c4: 0x0  nop
    ctx->pc = 0x1a86c4u;
    // NOP
label_1a86c8:
    // 0x1a86c8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1a86c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1a86cc:
    // 0x1a86cc: 0x0  nop
    ctx->pc = 0x1a86ccu;
    // NOP
label_1a86d0:
    // 0x1a86d0: 0x0  nop
    ctx->pc = 0x1a86d0u;
    // NOP
label_1a86d4:
    // 0x1a86d4: 0x0  nop
    ctx->pc = 0x1a86d4u;
    // NOP
label_1a86d8:
    // 0x1a86d8: 0x0  nop
    ctx->pc = 0x1a86d8u;
    // NOP
label_1a86dc:
    // 0x1a86dc: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
label_1a86e0:
    if (ctx->pc == 0x1A86E0u) {
        ctx->pc = 0x1A86E4u;
        goto label_1a86e4;
    }
    ctx->pc = 0x1A86DCu;
    {
        const bool branch_taken_0x1a86dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a86dc) {
            ctx->pc = 0x1A86C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a86c8;
        }
    }
    ctx->pc = 0x1A86E4u;
label_1a86e4:
    // 0x1a86e4: 0x26704500  addiu       $s0, $s3, 0x4500
    ctx->pc = 0x1a86e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 17664));
label_1a86e8:
    // 0x1a86e8: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x1a86e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
label_1a86ec:
    // 0x1a86ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a86ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a86f0:
    // 0x1a86f0: 0x34a50001  ori         $a1, $a1, 0x1
    ctx->pc = 0x1a86f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1);
label_1a86f4:
    // 0x1a86f4: 0xc069db6  jal         func_1A76D8
label_1a86f8:
    if (ctx->pc == 0x1A86F8u) {
        ctx->pc = 0x1A86F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A86F4u;
        // 0x1a86f8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A86FCu;
        goto label_1a86fc;
    }
    ctx->pc = 0x1A86F4u;
    SET_GPR_U32(ctx, 31, 0x1A86FCu);
    ctx->pc = 0x1A86F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A86F4u;
    // 0x1a86f8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A76D8u;
    { ctx->pc = 0x1a76d8; return; }
    ctx->pc = 0x1A86FCu;
label_1a86fc:
    // 0x1a86fc: 0x440003a  bltz        $v0, . + 4 + (0x3A << 2)
label_1a8700:
    if (ctx->pc == 0x1A8700u) {
        ctx->pc = 0x1A8700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A86FCu;
        // 0x1a8700: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8704u;
        goto label_1a8704;
    }
    ctx->pc = 0x1A86FCu;
    {
        const bool branch_taken_0x1a86fc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1A8700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A86FCu;
        // 0x1a8700: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a86fc) {
            ctx->pc = 0x1A87E8u;
            goto label_1a87e8;
        }
    }
    ctx->pc = 0x1A8704u;
label_1a8704:
    // 0x1a8704: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1a8704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1a8708:
    // 0x1a8708: 0x1040ffed  beqz        $v0, . + 4 + (-0x13 << 2)
label_1a870c:
    if (ctx->pc == 0x1A870Cu) {
        ctx->pc = 0x1A870Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8708u;
        // 0x1a870c: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8710u;
        goto label_1a8710;
    }
    ctx->pc = 0x1A8708u;
    {
        const bool branch_taken_0x1a8708 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A870Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8708u;
        // 0x1a870c: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8708) {
            ctx->pc = 0x1A86C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a86c0;
        }
    }
    ctx->pc = 0x1A8710u;
label_1a8710:
    // 0x1a8710: 0xc069ff2  jal         func_1A7FC8
label_1a8714:
    if (ctx->pc == 0x1A8714u) {
        ctx->pc = 0x1A8714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8710u;
        // 0x1a8714: 0x3c140028  lui         $s4, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8718u;
        goto label_1a8718;
    }
    ctx->pc = 0x1A8710u;
    SET_GPR_U32(ctx, 31, 0x1A8718u);
    ctx->pc = 0x1A8714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8710u;
    // 0x1a8714: 0x3c140028  lui         $s4, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)40 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7FC8u;
    { ctx->pc = 0x1a7fc8; return; }
    ctx->pc = 0x1A8718u;
label_1a8718:
    // 0x1a8718: 0xc069218  jal         func_1A4860
label_1a871c:
    if (ctx->pc == 0x1A871Cu) {
        ctx->pc = 0x1A871Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8718u;
        // 0x1a871c: 0x8e845c00  lw          $a0, 0x5C00($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 23552)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8720u;
        goto label_1a8720;
    }
    ctx->pc = 0x1A8718u;
    SET_GPR_U32(ctx, 31, 0x1A8720u);
    ctx->pc = 0x1A871Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8718u;
    // 0x1a871c: 0x8e845c00  lw          $a0, 0x5C00($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 23552)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4860u;
    { ctx->pc = 0x1a4860; return; }
    ctx->pc = 0x1A8720u;
label_1a8720:
    // 0x1a8720: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1a8720u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
label_1a8724:
    // 0x1a8724: 0x24634300  addiu       $v1, $v1, 0x4300
    ctx->pc = 0x1a8724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17152));
label_1a8728:
    // 0x1a8728: 0x24640200  addiu       $a0, $v1, 0x200
    ctx->pc = 0x1a8728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 512));
label_1a872c:
    // 0x1a872c: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x1a872cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_1a8730:
    // 0x1a8730: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_1a8734:
    if (ctx->pc == 0x1A8734u) {
        ctx->pc = 0x1A8734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8730u;
        // 0x1a8734: 0x3c120037  lui         $s2, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8738u;
        goto label_1a8738;
    }
    ctx->pc = 0x1A8730u;
    {
        const bool branch_taken_0x1a8730 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8730u;
        // 0x1a8734: 0x3c120037  lui         $s2, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8730) {
            ctx->pc = 0x1A8764u;
            goto label_1a8764;
        }
    }
    ctx->pc = 0x1A8738u;
label_1a8738:
    // 0x1a8738: 0x3c110037  lui         $s1, 0x37
    ctx->pc = 0x1a8738u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)55 << 16));
label_1a873c:
    // 0x1a873c: 0x3c100037  lui         $s0, 0x37
    ctx->pc = 0x1a873cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)55 << 16));
label_1a8740:
    // 0x1a8740: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1a8740u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_1a8744:
    // 0x1a8744: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1a8744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_1a8748:
    // 0x1a8748: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x1a8748u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_1a874c:
    // 0x1a874c: 0x0  nop
    ctx->pc = 0x1a874cu;
    // NOP
label_1a8750:
    // 0x1a8750: 0x0  nop
    ctx->pc = 0x1a8750u;
    // NOP
label_1a8754:
    // 0x1a8754: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_1a8758:
    if (ctx->pc == 0x1A8758u) {
        ctx->pc = 0x1A875Cu;
        goto label_1a875c;
    }
    ctx->pc = 0x1A8754u;
    {
        const bool branch_taken_0x1a8754 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a8754) {
            ctx->pc = 0x1A8740u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a8740;
        }
    }
    ctx->pc = 0x1A875Cu;
label_1a875c:
    // 0x1a875c: 0x10000004  b           . + 4 + (0x4 << 2)
label_1a8760:
    if (ctx->pc == 0x1A8760u) {
        ctx->pc = 0x1A8760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A875Cu;
        // 0x1a8760: 0x8e845c00  lw          $a0, 0x5C00($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 23552)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8764u;
        goto label_1a8764;
    }
    ctx->pc = 0x1A875Cu;
    {
        const bool branch_taken_0x1a875c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A875Cu;
        // 0x1a8760: 0x8e845c00  lw          $a0, 0x5C00($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 23552)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a875c) {
            ctx->pc = 0x1A8770u;
            goto label_1a8770;
        }
    }
    ctx->pc = 0x1A8764u;
label_1a8764:
    // 0x1a8764: 0x3c110037  lui         $s1, 0x37
    ctx->pc = 0x1a8764u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)55 << 16));
label_1a8768:
    // 0x1a8768: 0x3c100037  lui         $s0, 0x37
    ctx->pc = 0x1a8768u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)55 << 16));
label_1a876c:
    // 0x1a876c: 0x8e845c00  lw          $a0, 0x5C00($s4)
    ctx->pc = 0x1a876cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 23552)));
label_1a8770:
    // 0x1a8770: 0xc069210  jal         func_1A4840
label_1a8774:
    if (ctx->pc == 0x1A8774u) {
        ctx->pc = 0x1A8774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8770u;
        // 0x1a8774: 0x26103e80  addiu       $s0, $s0, 0x3E80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8778u;
        goto label_1a8778;
    }
    ctx->pc = 0x1A8770u;
    SET_GPR_U32(ctx, 31, 0x1A8778u);
    ctx->pc = 0x1A8774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8770u;
    // 0x1a8774: 0x26103e80  addiu       $s0, $s0, 0x3E80 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x1A8778u;
label_1a8778:
    // 0x1a8778: 0x26233ec0  addiu       $v1, $s1, 0x3EC0
    ctx->pc = 0x1a8778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 16064));
label_1a877c:
    // 0x1a877c: 0x26644500  addiu       $a0, $s3, 0x4500
    ctx->pc = 0x1a877cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 17664));
label_1a8780:
    // 0x1a8780: 0xae433200  sw          $v1, 0x3200($s2)
    ctx->pc = 0x1a8780u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12800), GPR_U32(ctx, 3));
label_1a8784:
    // 0x1a8784: 0x26473200  addiu       $a3, $s2, 0x3200
    ctx->pc = 0x1a8784u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 12800));
label_1a8788:
    // 0x1a8788: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1a8788u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1a878c:
    // 0x1a878c: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x1a878cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1a8790:
    // 0x1a8790: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a8790u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a8794:
    // 0x1a8794: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1a8794u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1a8798:
    // 0x1a8798: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1a8798u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a879c:
    // 0x1a879c: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1a879cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1a87a0:
    // 0x1a87a0: 0xc069e2a  jal         func_1A78A8
label_1a87a4:
    if (ctx->pc == 0x1A87A4u) {
        ctx->pc = 0x1A87A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A87A0u;
        // 0x1a87a4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A87A8u;
        goto label_1a87a8;
    }
    ctx->pc = 0x1A87A0u;
    SET_GPR_U32(ctx, 31, 0x1A87A8u);
    ctx->pc = 0x1A87A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A87A0u;
    // 0x1a87a4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    { ctx->pc = 0x1a78a8; return; }
    ctx->pc = 0x1A87A8u;
label_1a87a8:
    // 0x1a87a8: 0x4430004  bgezl       $v0, . + 4 + (0x4 << 2)
label_1a87ac:
    if (ctx->pc == 0x1A87ACu) {
        ctx->pc = 0x1A87ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A87A8u;
        // 0x1a87ac: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A87B0u;
        goto label_1a87b0;
    }
    ctx->pc = 0x1A87A8u;
    {
        const bool branch_taken_0x1a87a8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1a87a8) {
            ctx->pc = 0x1A87ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A87A8u;
            // 0x1a87ac: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A87BCu;
            goto label_1a87bc;
        }
    }
    ctx->pc = 0x1A87B0u;
label_1a87b0:
    // 0x1a87b0: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x1a87b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
label_1a87b4:
    // 0x1a87b4: 0x1000000c  b           . + 4 + (0xC << 2)
label_1a87b8:
    if (ctx->pc == 0x1A87B8u) {
        ctx->pc = 0x1A87B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A87B4u;
        // 0x1a87b8: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A87BCu;
        goto label_1a87bc;
    }
    ctx->pc = 0x1A87B4u;
    {
        const bool branch_taken_0x1a87b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A87B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A87B4u;
        // 0x1a87b8: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a87b4) {
            ctx->pc = 0x1A87E8u;
            goto label_1a87e8;
        }
    }
    ctx->pc = 0x1A87BCu;
label_1a87bc:
    // 0x1a87bc: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1a87bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_1a87c0:
    // 0x1a87c0: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x1a87c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_1a87c4:
    // 0x1a87c4: 0x3c040028  lui         $a0, 0x28
    ctx->pc = 0x1a87c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)40 << 16));
label_1a87c8:
    // 0x1a87c8: 0x24a94528  addiu       $t1, $a1, 0x4528
    ctx->pc = 0x1a87c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 17704));
label_1a87cc:
    // 0x1a87cc: 0x88460003  lwl         $a2, 0x3($v0)
    ctx->pc = 0x1a87ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 6) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 6, (int32_t)merged); }
label_1a87d0:
    // 0x1a87d0: 0x98460000  lwr         $a2, 0x0($v0)
    ctx->pc = 0x1a87d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 6) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 6) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 6, merged64); }
label_1a87d4:
    // 0x1a87d4: 0xa9260003  swl         $a2, 0x3($t1)
    ctx->pc = 0x1a87d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_1a87d8:
    // 0x1a87d8: 0xb9260000  swr         $a2, 0x0($t1)
    ctx->pc = 0x1a87d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_1a87dc:
    // 0x1a87dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a87dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a87e0:
    // 0x1a87e0: 0xac835bf8  sw          $v1, 0x5BF8($a0)
    ctx->pc = 0x1a87e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 23544), GPR_U32(ctx, 3));
label_1a87e4:
    // 0x1a87e4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a87e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a87e8:
    // 0x1a87e8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1a87e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1a87ec:
    // 0x1a87ec: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1a87ecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1a87f0:
    // 0x1a87f0: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x1a87f0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1a87f4:
    // 0x1a87f4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1a87f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1a87f8:
    // 0x1a87f8: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1a87f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a87fc:
    // 0x1a87fc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1a87fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a8800:
    // 0x1a8800: 0x3e00008  jr          $ra
label_1a8804:
    if (ctx->pc == 0x1A8804u) {
        ctx->pc = 0x1A8804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8800u;
        // 0x1a8804: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8808u;
        goto label_1a8808;
    }
    ctx->pc = 0x1A8800u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8800u;
        // 0x1a8804: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A8800u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A8808u;
label_1a8808:
    // 0x1a8808: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a8808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1a880c:
    // 0x1a880c: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1a880cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_1a8810:
    // 0x1a8810: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1a8810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_1a8814:
    // 0x1a8814: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1a8814u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
label_1a8818:
    // 0x1a8818: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1a8818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_1a881c:
    // 0x1a881c: 0x24535b4c  addiu       $s3, $v0, 0x5B4C
    ctx->pc = 0x1a881cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 23372));
label_1a8820:
    // 0x1a8820: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1a8820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1a8824:
    // 0x1a8824: 0x24714528  addiu       $s1, $v1, 0x4528
    ctx->pc = 0x1a8824u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 17704));
label_1a8828:
    // 0x1a8828: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1a8828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1a882c:
    // 0x1a882c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1a882cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a8830:
    // 0x1a8830: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a8830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a8834:
    // 0x1a8834: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a8834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a8838:
    // 0x1a8838: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1a8838u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a883c:
    // 0x1a883c: 0xc08e918  jal         func_23A460
label_1a8840:
    if (ctx->pc == 0x1A8840u) {
        ctx->pc = 0x1A8840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A883Cu;
        // 0x1a8840: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8844u;
        goto label_1a8844;
    }
    ctx->pc = 0x1A883Cu;
    SET_GPR_U32(ctx, 31, 0x1A8844u);
    ctx->pc = 0x1A8840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A883Cu;
    // 0x1a8840: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A460u;
    { ctx->pc = 0x23a460; return; }
    ctx->pc = 0x1A8844u;
label_1a8844:
    // 0x1a8844: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1a8848:
    if (ctx->pc == 0x1A8848u) {
        ctx->pc = 0x1A8848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8844u;
        // 0x1a8848: 0x3c100028  lui         $s0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A884Cu;
        goto label_1a884c;
    }
    ctx->pc = 0x1A8844u;
    {
        const bool branch_taken_0x1a8844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8844u;
        // 0x1a8848: 0x3c100028  lui         $s0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8844) {
            ctx->pc = 0x1A8874u;
            goto label_1a8874;
        }
    }
    ctx->pc = 0x1A884Cu;
label_1a884c:
    // 0x1a884c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a884cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a8850:
    // 0x1a8850: 0x8e055c08  lw          $a1, 0x5C08($s0)
    ctx->pc = 0x1a8850u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 23560)));
label_1a8854:
    // 0x1a8854: 0xc08e918  jal         func_23A460
label_1a8858:
    if (ctx->pc == 0x1A8858u) {
        ctx->pc = 0x1A8858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8854u;
        // 0x1a8858: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A885Cu;
        goto label_1a885c;
    }
    ctx->pc = 0x1A8854u;
    SET_GPR_U32(ctx, 31, 0x1A885Cu);
    ctx->pc = 0x1A8858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8854u;
    // 0x1a8858: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A460u;
    { ctx->pc = 0x23a460; return; }
    ctx->pc = 0x1A885Cu;
label_1a885c:
    // 0x1a885c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1a8860:
    if (ctx->pc == 0x1A8860u) {
        ctx->pc = 0x1A8860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A885Cu;
        // 0x1a8860: 0x8e055c08  lw          $a1, 0x5C08($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 23560)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8864u;
        goto label_1a8864;
    }
    ctx->pc = 0x1A885Cu;
    {
        const bool branch_taken_0x1a885c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A885Cu;
        // 0x1a8860: 0x8e055c08  lw          $a1, 0x5C08($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 23560)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a885c) {
            ctx->pc = 0x1A8874u;
            goto label_1a8874;
        }
    }
    ctx->pc = 0x1A8864u;
label_1a8864:
    // 0x1a8864: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a8864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a8868:
    // 0x1a8868: 0xc08e918  jal         func_23A460
label_1a886c:
    if (ctx->pc == 0x1A886Cu) {
        ctx->pc = 0x1A886Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8868u;
        // 0x1a886c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8870u;
        goto label_1a8870;
    }
    ctx->pc = 0x1A8868u;
    SET_GPR_U32(ctx, 31, 0x1A8870u);
    ctx->pc = 0x1A886Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8868u;
    // 0x1a886c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A460u;
    { ctx->pc = 0x23a460; return; }
    ctx->pc = 0x1A8870u;
label_1a8870:
    // 0x1a8870: 0x2902b  sltu        $s2, $zero, $v0
    ctx->pc = 0x1a8870u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1a8874:
    // 0x1a8874: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1a8874u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a8878:
    // 0x1a8878: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1a8878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1a887c:
    // 0x1a887c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1a887cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1a8880:
    // 0x1a8880: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a8880u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a8884:
    // 0x1a8884: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a8884u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a8888:
    // 0x1a8888: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a8888u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a888c:
    // 0x1a888c: 0x3e00008  jr          $ra
label_1a8890:
    if (ctx->pc == 0x1A8890u) {
        ctx->pc = 0x1A8890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A888Cu;
        // 0x1a8890: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8894u;
        goto label_1a8894;
    }
    ctx->pc = 0x1A888Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A888Cu;
        // 0x1a8890: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A888Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A8894u;
label_1a8894:
    // 0x1a8894: 0x0  nop
    ctx->pc = 0x1a8894u;
    // NOP
label_1a8898:
    // 0x1a8898: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a8898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1a889c:
    // 0x1a889c: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1a889cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_1a88a0:
    // 0x1a88a0: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1a88a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_1a88a4:
    // 0x1a88a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a88a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1a88a8:
    // 0x1a88a8: 0xac405bf8  sw          $zero, 0x5BF8($v0)
    ctx->pc = 0x1a88a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 23544), GPR_U32(ctx, 0));
label_1a88ac:
    // 0x1a88ac: 0x24844528  addiu       $a0, $a0, 0x4528
    ctx->pc = 0x1a88acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17704));
label_1a88b0:
    // 0x1a88b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a88b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a88b4:
    // 0x1a88b4: 0xc08e9ac  jal         func_23A6B0
label_1a88b8:
    if (ctx->pc == 0x1A88B8u) {
        ctx->pc = 0x1A88B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A88B4u;
        // 0x1a88b8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A88BCu;
        goto label_1a88bc;
    }
    ctx->pc = 0x1A88B4u;
    SET_GPR_U32(ctx, 31, 0x1A88BCu);
    ctx->pc = 0x1A88B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A88B4u;
    // 0x1a88b8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A6B0u;
    { ctx->pc = 0x23a6b0; return; }
    ctx->pc = 0x1A88BCu;
label_1a88bc:
    // 0x1a88bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a88bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a88c0:
    // 0x1a88c0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a88c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a88c4:
    // 0x1a88c4: 0x3e00008  jr          $ra
label_1a88c8:
    if (ctx->pc == 0x1A88C8u) {
        ctx->pc = 0x1A88C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A88C4u;
        // 0x1a88c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A88CCu;
        goto label_1a88cc;
    }
    ctx->pc = 0x1A88C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A88C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A88C4u;
        // 0x1a88c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A88C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A88CCu;
label_1a88cc:
    // 0x1a88cc: 0x0  nop
    ctx->pc = 0x1a88ccu;
    // NOP
label_1a88d0:
    // 0x1a88d0: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x1a88d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
label_1a88d4:
    // 0x1a88d4: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1a88d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
label_1a88d8:
    // 0x1a88d8: 0xffb700b0  sd          $s7, 0xB0($sp)
    ctx->pc = 0x1a88d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
label_1a88dc:
    // 0x1a88dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a88dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a88e0:
    // 0x1a88e0: 0xffbe00c0  sd          $fp, 0xC0($sp)
    ctx->pc = 0x1a88e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 30));
label_1a88e4:
    // 0x1a88e4: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x1a88e4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a88e8:
    // 0x1a88e8: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x1a88e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
label_1a88ec:
    // 0x1a88ec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a88ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a88f0:
    // 0x1a88f0: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x1a88f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
label_1a88f4:
    // 0x1a88f4: 0x3c1e0037  lui         $fp, 0x37
    ctx->pc = 0x1a88f4u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)55 << 16));
label_1a88f8:
    // 0x1a88f8: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x1a88f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
label_1a88fc:
    // 0x1a88fc: 0x27d13240  addiu       $s1, $fp, 0x3240
    ctx->pc = 0x1a88fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 30), 12864));
label_1a8900:
    // 0x1a8900: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x1a8900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
label_1a8904:
    // 0x1a8904: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x1a8904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
label_1a8908:
    // 0x1a8908: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x1a8908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
label_1a890c:
    // 0x1a890c: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x1a890cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
label_1a8910:
    // 0x1a8910: 0xffa60120  sd          $a2, 0x120($sp)
    ctx->pc = 0x1a8910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 6));
label_1a8914:
    // 0x1a8914: 0xffa70128  sd          $a3, 0x128($sp)
    ctx->pc = 0x1a8914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 7));
label_1a8918:
    // 0x1a8918: 0xffa80130  sd          $t0, 0x130($sp)
    ctx->pc = 0x1a8918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 8));
label_1a891c:
    // 0x1a891c: 0xffa90138  sd          $t1, 0x138($sp)
    ctx->pc = 0x1a891cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 312), GPR_U64(ctx, 9));
label_1a8920:
    // 0x1a8920: 0xffaa0140  sd          $t2, 0x140($sp)
    ctx->pc = 0x1a8920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 10));
label_1a8924:
    // 0x1a8924: 0xc06a14c  jal         func_1A8530
label_1a8928:
    if (ctx->pc == 0x1A8928u) {
        ctx->pc = 0x1A8928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8924u;
        // 0x1a8928: 0xffab0148  sd          $t3, 0x148($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 328), GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A892Cu;
        goto label_1a892c;
    }
    ctx->pc = 0x1A8924u;
    SET_GPR_U32(ctx, 31, 0x1A892Cu);
    ctx->pc = 0x1A8928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8924u;
    // 0x1a8928: 0xffab0148  sd          $t3, 0x148($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 328), GPR_U64(ctx, 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8530u;
    goto label_1a8530;
    ctx->pc = 0x1A892Cu;
label_1a892c:
    // 0x1a892c: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x1a892cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
label_1a8930:
    // 0x1a8930: 0x8c625bf8  lw          $v0, 0x5BF8($v1)
    ctx->pc = 0x1a8930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 23544)));
label_1a8934:
    // 0x1a8934: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1a8938:
    if (ctx->pc == 0x1A8938u) {
        ctx->pc = 0x1A893Cu;
        goto label_1a893c;
    }
    ctx->pc = 0x1A8934u;
    {
        const bool branch_taken_0x1a8934 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a8934) {
            ctx->pc = 0x1A8944u;
            goto label_1a8944;
        }
    }
    ctx->pc = 0x1A893Cu;
label_1a893c:
    // 0x1a893c: 0xc06a18e  jal         func_1A8638
label_1a8940:
    if (ctx->pc == 0x1A8940u) {
        ctx->pc = 0x1A8944u;
        goto label_1a8944;
    }
    ctx->pc = 0x1A893Cu;
    SET_GPR_U32(ctx, 31, 0x1A8944u);
    ctx->pc = 0x1A8638u;
    goto label_1a8638;
    ctx->pc = 0x1A8944u;
label_1a8944:
    // 0x1a8944: 0xc06a202  jal         func_1A8808
label_1a8948:
    if (ctx->pc == 0x1A8948u) {
        ctx->pc = 0x1A894Cu;
        goto label_1a894c;
    }
    ctx->pc = 0x1A8944u;
    SET_GPR_U32(ctx, 31, 0x1A894Cu);
    ctx->pc = 0x1A8808u;
    goto label_1a8808;
    ctx->pc = 0x1A894Cu;
label_1a894c:
    // 0x1a894c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1a8950:
    if (ctx->pc == 0x1A8950u) {
        ctx->pc = 0x1A8954u;
        goto label_1a8954;
    }
    ctx->pc = 0x1A894Cu;
    {
        const bool branch_taken_0x1a894c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a894c) {
            ctx->pc = 0x1A8968u;
            goto label_1a8968;
        }
    }
    ctx->pc = 0x1A8954u;
label_1a8954:
    // 0x1a8954: 0xc06a158  jal         func_1A8560
label_1a8958:
    if (ctx->pc == 0x1A8958u) {
        ctx->pc = 0x1A895Cu;
        goto label_1a895c;
    }
    ctx->pc = 0x1A8954u;
    SET_GPR_U32(ctx, 31, 0x1A895Cu);
    ctx->pc = 0x1A8560u;
    goto label_1a8560;
    ctx->pc = 0x1A895Cu;
label_1a895c:
    // 0x1a895c: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x1a895cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
label_1a8960:
    // 0x1a8960: 0x10000070  b           . + 4 + (0x70 << 2)
label_1a8964:
    if (ctx->pc == 0x1A8964u) {
        ctx->pc = 0x1A8964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8960u;
        // 0x1a8964: 0x3442fffc  ori         $v0, $v0, 0xFFFC (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8968u;
        goto label_1a8968;
    }
    ctx->pc = 0x1A8960u;
    {
        const bool branch_taken_0x1a8960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8960u;
        // 0x1a8964: 0x3442fffc  ori         $v0, $v0, 0xFFFC (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8960) {
            ctx->pc = 0x1A8B24u;
            goto label_1a8b24;
        }
    }
    ctx->pc = 0x1A8968u;
label_1a8968:
    // 0x1a8968: 0xc06a00a  jal         func_1A8028
label_1a896c:
    if (ctx->pc == 0x1A896Cu) {
        ctx->pc = 0x1A8970u;
        goto label_1a8970;
    }
    ctx->pc = 0x1A8968u;
    SET_GPR_U32(ctx, 31, 0x1A8970u);
    ctx->pc = 0x1A8028u;
    { ctx->pc = 0x1a8028; return; }
    ctx->pc = 0x1A8970u;
label_1a8970:
    // 0x1a8970: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1a8970u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a8974:
    // 0x1a8974: 0x56600005  bnel        $s3, $zero, . + 4 + (0x5 << 2)
label_1a8978:
    if (ctx->pc == 0x1A8978u) {
        ctx->pc = 0x1A8978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8974u;
        // 0x1a8978: 0x92030000  lbu         $v1, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A897Cu;
        goto label_1a897c;
    }
    ctx->pc = 0x1A8974u;
    {
        const bool branch_taken_0x1a8974 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a8974) {
            ctx->pc = 0x1A8978u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A8974u;
            // 0x1a8978: 0x92030000  lbu         $v1, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A898Cu;
            goto label_1a898c;
        }
    }
    ctx->pc = 0x1A897Cu;
label_1a897c:
    // 0x1a897c: 0xc06a158  jal         func_1A8560
label_1a8980:
    if (ctx->pc == 0x1A8980u) {
        ctx->pc = 0x1A8984u;
        goto label_1a8984;
    }
    ctx->pc = 0x1A897Cu;
    SET_GPR_U32(ctx, 31, 0x1A8984u);
    ctx->pc = 0x1A8560u;
    goto label_1a8560;
    ctx->pc = 0x1A8984u;
label_1a8984:
    // 0x1a8984: 0x10000067  b           . + 4 + (0x67 << 2)
label_1a8988:
    if (ctx->pc == 0x1A8988u) {
        ctx->pc = 0x1A8988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8984u;
        // 0x1a8988: 0x2402ffed  addiu       $v0, $zero, -0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967277));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A898Cu;
        goto label_1a898c;
    }
    ctx->pc = 0x1A8984u;
    {
        const bool branch_taken_0x1a8984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8984u;
        // 0x1a8988: 0x2402ffed  addiu       $v0, $zero, -0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967277));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8984) {
            ctx->pc = 0x1A8B24u;
            goto label_1a8b24;
        }
    }
    ctx->pc = 0x1A898Cu;
label_1a898c:
    // 0x1a898c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a898cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a8990:
    // 0x1a8990: 0x8fa70120  lw          $a3, 0x120($sp)
    ctx->pc = 0x1a8990u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_1a8994:
    // 0x1a8994: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x1a8994u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_1a8998:
    // 0x1a8998: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_1a899c:
    if (ctx->pc == 0x1A899Cu) {
        ctx->pc = 0x1A899Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8998u;
        // 0x1a899c: 0xa2230014  sb          $v1, 0x14($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 20), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A89A0u;
        goto label_1a89a0;
    }
    ctx->pc = 0x1A8998u;
    {
        const bool branch_taken_0x1a8998 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A899Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8998u;
        // 0x1a899c: 0xa2230014  sb          $v1, 0x14($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 20), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8998) {
            ctx->pc = 0x1A89E4u;
            goto label_1a89e4;
        }
    }
    ctx->pc = 0x1A89A0u;
label_1a89a0:
    // 0x1a89a0: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x1a89a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
label_1a89a4:
    // 0x1a89a4: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x1a89a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1a89a8:
    // 0x1a89a8: 0x3c160037  lui         $s6, 0x37
    ctx->pc = 0x1a89a8u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)55 << 16));
label_1a89ac:
    // 0x1a89ac: 0x3c140037  lui         $s4, 0x37
    ctx->pc = 0x1a89acu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)55 << 16));
label_1a89b0:
    // 0x1a89b0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1a89b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1a89b4:
    // 0x1a89b4: 0x0  nop
    ctx->pc = 0x1a89b4u;
    // NOP
label_1a89b8:
    // 0x1a89b8: 0x28a20400  slti        $v0, $a1, 0x400
    ctx->pc = 0x1a89b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1024) ? 1 : 0);
label_1a89bc:
    // 0x1a89bc: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_1a89c0:
    if (ctx->pc == 0x1A89C0u) {
        ctx->pc = 0x1A89C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A89BCu;
        // 0x1a89c0: 0x2051021  addu        $v0, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A89C4u;
        goto label_1a89c4;
    }
    ctx->pc = 0x1A89BCu;
    {
        const bool branch_taken_0x1a89bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A89C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A89BCu;
        // 0x1a89c0: 0x2051021  addu        $v0, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a89bc) {
            ctx->pc = 0x1A89F4u;
            goto label_1a89f4;
        }
    }
    ctx->pc = 0x1A89C4u;
label_1a89c4:
    // 0x1a89c4: 0x2252021  addu        $a0, $s1, $a1
    ctx->pc = 0x1a89c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
label_1a89c8:
    // 0x1a89c8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1a89c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1a89cc:
    // 0x1a89cc: 0xa0830014  sb          $v1, 0x14($a0)
    ctx->pc = 0x1a89ccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 20), (uint8_t)GPR_U32(ctx, 3));
label_1a89d0:
    // 0x1a89d0: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1a89d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_1a89d4:
    // 0x1a89d4: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
label_1a89d8:
    if (ctx->pc == 0x1A89D8u) {
        ctx->pc = 0x1A89D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A89D4u;
        // 0x1a89d8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A89DCu;
        goto label_1a89dc;
    }
    ctx->pc = 0x1A89D4u;
    {
        const bool branch_taken_0x1a89d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a89d4) {
            ctx->pc = 0x1A89D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A89D4u;
            // 0x1a89d8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A89B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a89b8;
        }
    }
    ctx->pc = 0x1A89DCu;
label_1a89dc:
    // 0x1a89dc: 0x10000006  b           . + 4 + (0x6 << 2)
label_1a89e0:
    if (ctx->pc == 0x1A89E0u) {
        ctx->pc = 0x1A89E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A89DCu;
        // 0x1a89e0: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A89E4u;
        goto label_1a89e4;
    }
    ctx->pc = 0x1A89DCu;
    {
        const bool branch_taken_0x1a89dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A89E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A89DCu;
        // 0x1a89e0: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a89dc) {
            ctx->pc = 0x1A89F8u;
            goto label_1a89f8;
        }
    }
    ctx->pc = 0x1A89E4u;
label_1a89e4:
    // 0x1a89e4: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x1a89e4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
label_1a89e8:
    // 0x1a89e8: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x1a89e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1a89ec:
    // 0x1a89ec: 0x3c160037  lui         $s6, 0x37
    ctx->pc = 0x1a89ecu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)55 << 16));
label_1a89f0:
    // 0x1a89f0: 0x3c140037  lui         $s4, 0x37
    ctx->pc = 0x1a89f0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)55 << 16));
label_1a89f4:
    // 0x1a89f4: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x1a89f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_1a89f8:
    // 0x1a89f8: 0x50a20001  beql        $a1, $v0, . + 4 + (0x1 << 2)
label_1a89fc:
    if (ctx->pc == 0x1A89FCu) {
        ctx->pc = 0x1A89FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A89F8u;
        // 0x1a89fc: 0xa2200413  sb          $zero, 0x413($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1043), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8A00u;
        goto label_1a8a00;
    }
    ctx->pc = 0x1A89F8u;
    {
        const bool branch_taken_0x1a89f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a89f8) {
            ctx->pc = 0x1A89FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A89F8u;
            // 0x1a89fc: 0xa2200413  sb          $zero, 0x413($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 1043), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A8A00u;
            goto label_1a8a00;
        }
    }
    ctx->pc = 0x1A8A00u;
label_1a8a00:
    // 0x1a8a00: 0x24c24300  addiu       $v0, $a2, 0x4300
    ctx->pc = 0x1a8a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 17152));
label_1a8a04:
    // 0x1a8a04: 0x3c036fff  lui         $v1, 0x6FFF
    ctx->pc = 0x1a8a04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28671 << 16));
label_1a8a08:
    // 0x1a8a08: 0x2621023  subu        $v0, $s3, $v0
    ctx->pc = 0x1a8a08u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_1a8a0c:
    // 0x1a8a0c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1a8a0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_1a8a10:
    // 0x1a8a10: 0x2a903  sra         $s5, $v0, 4
    ctx->pc = 0x1a8a10u;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 2), 4));
label_1a8a14:
    // 0x1a8a14: 0x2e31824  and         $v1, $s7, $v1
    ctx->pc = 0x1a8a14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) & GPR_U64(ctx, 3));
label_1a8a18:
    // 0x1a8a18: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x1a8a18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
label_1a8a1c:
    // 0x1a8a1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a8a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a8a20:
    // 0x1a8a20: 0xae270010  sw          $a3, 0x10($s1)
    ctx->pc = 0x1a8a20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 7));
label_1a8a24:
    // 0x1a8a24: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1a8a24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1a8a28:
    // 0x1a8a28: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1a8a28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_1a8a2c:
    // 0x1a8a2c: 0x26943e80  addiu       $s4, $s4, 0x3E80
    ctx->pc = 0x1a8a2cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16000));
label_1a8a30:
    // 0x1a8a30: 0xae350414  sw          $s5, 0x414($s1)
    ctx->pc = 0x1a8a30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1044), GPR_U32(ctx, 21));
label_1a8a34:
    // 0x1a8a34: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1a8a34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_1a8a38:
    // 0x1a8a38: 0xc069208  jal         func_1A4820
label_1a8a3c:
    if (ctx->pc == 0x1A8A3Cu) {
        ctx->pc = 0x1A8A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8A38u;
        // 0x1a8a3c: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8A40u;
        goto label_1a8a40;
    }
    ctx->pc = 0x1A8A38u;
    SET_GPR_U32(ctx, 31, 0x1A8A40u);
    ctx->pc = 0x1A8A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8A38u;
    // 0x1a8a3c: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4820u;
    { ctx->pc = 0x1a4820; return; }
    ctx->pc = 0x1A8A40u;
label_1a8a40:
    // 0x1a8a40: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a8a40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a8a44:
    // 0x1a8a44: 0xae320004  sw          $s2, 0x4($s1)
    ctx->pc = 0x1a8a44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 18));
label_1a8a48:
    // 0x1a8a48: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1a8a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1a8a4c:
    // 0x1a8a4c: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x1a8a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
label_1a8a50:
    // 0x1a8a50: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x1a8a50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_1a8a54:
    // 0x1a8a54: 0x26c44500  addiu       $a0, $s6, 0x4500
    ctx->pc = 0x1a8a54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 17664));
label_1a8a58:
    // 0x1a8a58: 0x27c73240  addiu       $a3, $fp, 0x3240
    ctx->pc = 0x1a8a58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 30), 12864));
label_1a8a5c:
    // 0x1a8a5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a8a5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a8a60:
    // 0x1a8a60: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1a8a60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1a8a64:
    // 0x1a8a64: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a8a64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a8a68:
    // 0x1a8a68: 0x24080418  addiu       $t0, $zero, 0x418
    ctx->pc = 0x1a8a68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1048));
label_1a8a6c:
    // 0x1a8a6c: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x1a8a6cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1a8a70:
    // 0x1a8a70: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1a8a70u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1a8a74:
    // 0x1a8a74: 0xc069e2a  jal         func_1A78A8
label_1a8a78:
    if (ctx->pc == 0x1A8A78u) {
        ctx->pc = 0x1A8A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8A74u;
        // 0x1a8a78: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8A7Cu;
        goto label_1a8a7c;
    }
    ctx->pc = 0x1A8A74u;
    SET_GPR_U32(ctx, 31, 0x1A8A7Cu);
    ctx->pc = 0x1A8A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8A74u;
    // 0x1a8a78: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    { ctx->pc = 0x1a78a8; return; }
    ctx->pc = 0x1A8A7Cu;
label_1a8a7c:
    // 0x1a8a7c: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
label_1a8a80:
    if (ctx->pc == 0x1A8A80u) {
        ctx->pc = 0x1A8A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8A7Cu;
        // 0x1a8a80: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8A84u;
        goto label_1a8a84;
    }
    ctx->pc = 0x1A8A7Cu;
    {
        const bool branch_taken_0x1a8a7c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1A8A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8A7Cu;
        // 0x1a8a80: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8a7c) {
            ctx->pc = 0x1A8A9Cu;
            goto label_1a8a9c;
        }
    }
    ctx->pc = 0x1A8A84u;
label_1a8a84:
    // 0x1a8a84: 0xc06920c  jal         func_1A4830
label_1a8a88:
    if (ctx->pc == 0x1A8A88u) {
        ctx->pc = 0x1A8A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8A84u;
        // 0x1a8a88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8A8Cu;
        goto label_1a8a8c;
    }
    ctx->pc = 0x1A8A84u;
    SET_GPR_U32(ctx, 31, 0x1A8A8Cu);
    ctx->pc = 0x1A8A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8A84u;
    // 0x1a8a88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4830u;
    { ctx->pc = 0x1a4830; return; }
    ctx->pc = 0x1A8A8Cu;
label_1a8a8c:
    // 0x1a8a8c: 0xc06a158  jal         func_1A8560
label_1a8a90:
    if (ctx->pc == 0x1A8A90u) {
        ctx->pc = 0x1A8A94u;
        goto label_1a8a94;
    }
    ctx->pc = 0x1A8A8Cu;
    SET_GPR_U32(ctx, 31, 0x1A8A94u);
    ctx->pc = 0x1A8560u;
    goto label_1a8560;
    ctx->pc = 0x1A8A94u;
label_1a8a94:
    // 0x1a8a94: 0x10000023  b           . + 4 + (0x23 << 2)
label_1a8a98:
    if (ctx->pc == 0x1A8A98u) {
        ctx->pc = 0x1A8A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8A94u;
        // 0x1a8a98: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8A9Cu;
        goto label_1a8a9c;
    }
    ctx->pc = 0x1A8A94u;
    {
        const bool branch_taken_0x1a8a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8A94u;
        // 0x1a8a98: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8a94) {
            ctx->pc = 0x1A8B24u;
            goto label_1a8b24;
        }
    }
    ctx->pc = 0x1A8A9Cu;
label_1a8a9c:
    // 0x1a8a9c: 0x2821025  or          $v0, $s4, $v0
    ctx->pc = 0x1a8a9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
label_1a8aa0:
    // 0x1a8aa0: 0xc06a158  jal         func_1A8560
label_1a8aa4:
    if (ctx->pc == 0x1A8AA4u) {
        ctx->pc = 0x1A8AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8AA0u;
        // 0x1a8aa4: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8AA8u;
        goto label_1a8aa8;
    }
    ctx->pc = 0x1A8AA0u;
    SET_GPR_U32(ctx, 31, 0x1A8AA8u);
    ctx->pc = 0x1A8AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8AA0u;
    // 0x1a8aa4: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8560u;
    goto label_1a8560;
    ctx->pc = 0x1A8AA8u;
label_1a8aa8:
    // 0x1a8aa8: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
label_1a8aac:
    if (ctx->pc == 0x1A8AACu) {
        ctx->pc = 0x1A8AB0u;
        goto label_1a8ab0;
    }
    ctx->pc = 0x1A8AA8u;
    {
        const bool branch_taken_0x1a8aa8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a8aa8) {
            ctx->pc = 0x1A8AC0u;
            goto label_1a8ac0;
        }
    }
    ctx->pc = 0x1A8AB0u;
label_1a8ab0:
    // 0x1a8ab0: 0xc06920c  jal         func_1A4830
label_1a8ab4:
    if (ctx->pc == 0x1A8AB4u) {
        ctx->pc = 0x1A8AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8AB0u;
        // 0x1a8ab4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8AB8u;
        goto label_1a8ab8;
    }
    ctx->pc = 0x1A8AB0u;
    SET_GPR_U32(ctx, 31, 0x1A8AB8u);
    ctx->pc = 0x1A8AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8AB0u;
    // 0x1a8ab4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4830u;
    { ctx->pc = 0x1a4830; return; }
    ctx->pc = 0x1A8AB8u;
label_1a8ab8:
    // 0x1a8ab8: 0x1000001a  b           . + 4 + (0x1A << 2)
label_1a8abc:
    if (ctx->pc == 0x1A8ABCu) {
        ctx->pc = 0x1A8ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8AB8u;
        // 0x1a8abc: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8AC0u;
        goto label_1a8ac0;
    }
    ctx->pc = 0x1A8AB8u;
    {
        const bool branch_taken_0x1a8ab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8AB8u;
        // 0x1a8abc: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8ab8) {
            ctx->pc = 0x1A8B24u;
            goto label_1a8b24;
        }
    }
    ctx->pc = 0x1A8AC0u;
label_1a8ac0:
    // 0x1a8ac0: 0xc069218  jal         func_1A4860
label_1a8ac4:
    if (ctx->pc == 0x1A8AC4u) {
        ctx->pc = 0x1A8AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8AC0u;
        // 0x1a8ac4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8AC8u;
        goto label_1a8ac8;
    }
    ctx->pc = 0x1A8AC0u;
    SET_GPR_U32(ctx, 31, 0x1A8AC8u);
    ctx->pc = 0x1A8AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8AC0u;
    // 0x1a8ac4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4860u;
    { ctx->pc = 0x1a4860; return; }
    ctx->pc = 0x1A8AC8u;
label_1a8ac8:
    // 0x1a8ac8: 0xc06920c  jal         func_1A4830
label_1a8acc:
    if (ctx->pc == 0x1A8ACCu) {
        ctx->pc = 0x1A8ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8AC8u;
        // 0x1a8acc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8AD0u;
        goto label_1a8ad0;
    }
    ctx->pc = 0x1A8AC8u;
    SET_GPR_U32(ctx, 31, 0x1A8AD0u);
    ctx->pc = 0x1A8ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8AC8u;
    // 0x1a8acc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4830u;
    { ctx->pc = 0x1a4830; return; }
    ctx->pc = 0x1A8AD0u;
label_1a8ad0:
    // 0x1a8ad0: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1a8ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1a8ad4:
    // 0x1a8ad4: 0x4610008  bgez        $v1, . + 4 + (0x8 << 2)
label_1a8ad8:
    if (ctx->pc == 0x1A8AD8u) {
        ctx->pc = 0x1A8AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8AD4u;
        // 0x1a8ad8: 0x3c100028  lui         $s0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8ADCu;
        goto label_1a8adc;
    }
    ctx->pc = 0x1A8AD4u;
    {
        const bool branch_taken_0x1a8ad4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1A8AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8AD4u;
        // 0x1a8ad8: 0x3c100028  lui         $s0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8ad4) {
            ctx->pc = 0x1A8AF8u;
            goto label_1a8af8;
        }
    }
    ctx->pc = 0x1A8ADCu;
label_1a8adc:
    // 0x1a8adc: 0xc069218  jal         func_1A4860
label_1a8ae0:
    if (ctx->pc == 0x1A8AE0u) {
        ctx->pc = 0x1A8AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8ADCu;
        // 0x1a8ae0: 0x8e045c00  lw          $a0, 0x5C00($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 23552)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8AE4u;
        goto label_1a8ae4;
    }
    ctx->pc = 0x1A8ADCu;
    SET_GPR_U32(ctx, 31, 0x1A8AE4u);
    ctx->pc = 0x1A8AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8ADCu;
    // 0x1a8ae0: 0x8e045c00  lw          $a0, 0x5C00($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 23552)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4860u;
    { ctx->pc = 0x1a4860; return; }
    ctx->pc = 0x1A8AE4u;
label_1a8ae4:
    // 0x1a8ae4: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x1a8ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
label_1a8ae8:
    // 0x1a8ae8: 0xc069210  jal         func_1A4840
label_1a8aec:
    if (ctx->pc == 0x1A8AECu) {
        ctx->pc = 0x1A8AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8AE8u;
        // 0x1a8aec: 0x8e045c00  lw          $a0, 0x5C00($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 23552)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8AF0u;
        goto label_1a8af0;
    }
    ctx->pc = 0x1A8AE8u;
    SET_GPR_U32(ctx, 31, 0x1A8AF0u);
    ctx->pc = 0x1A8AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8AE8u;
    // 0x1a8aec: 0x8e045c00  lw          $a0, 0x5C00($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 23552)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x1A8AF0u;
label_1a8af0:
    // 0x1a8af0: 0x1000000c  b           . + 4 + (0xC << 2)
label_1a8af4:
    if (ctx->pc == 0x1A8AF4u) {
        ctx->pc = 0x1A8AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8AF0u;
        // 0x1a8af4: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8AF8u;
        goto label_1a8af8;
    }
    ctx->pc = 0x1A8AF0u;
    {
        const bool branch_taken_0x1a8af0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8AF0u;
        // 0x1a8af4: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8af0) {
            ctx->pc = 0x1A8B24u;
            goto label_1a8b24;
        }
    }
    ctx->pc = 0x1A8AF8u;
label_1a8af8:
    // 0x1a8af8: 0x2a0882d  daddu       $s1, $s5, $zero
    ctx->pc = 0x1a8af8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1a8afc:
    // 0x1a8afc: 0xc069218  jal         func_1A4860
label_1a8b00:
    if (ctx->pc == 0x1A8B00u) {
        ctx->pc = 0x1A8B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8AFCu;
        // 0x1a8b00: 0x8e045c00  lw          $a0, 0x5C00($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 23552)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8B04u;
        goto label_1a8b04;
    }
    ctx->pc = 0x1A8AFCu;
    SET_GPR_U32(ctx, 31, 0x1A8B04u);
    ctx->pc = 0x1A8B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8AFCu;
    // 0x1a8b00: 0x8e045c00  lw          $a0, 0x5C00($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 23552)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4860u;
    { ctx->pc = 0x1a4860; return; }
    ctx->pc = 0x1A8B04u;
label_1a8b04:
    // 0x1a8b04: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x1a8b04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_1a8b08:
    // 0x1a8b08: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1a8b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1a8b0c:
    // 0x1a8b0c: 0x8e045c00  lw          $a0, 0x5C00($s0)
    ctx->pc = 0x1a8b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 23552)));
label_1a8b10:
    // 0x1a8b10: 0x771825  or          $v1, $v1, $s7
    ctx->pc = 0x1a8b10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 23));
label_1a8b14:
    // 0x1a8b14: 0xae630004  sw          $v1, 0x4($s3)
    ctx->pc = 0x1a8b14u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 3));
label_1a8b18:
    // 0x1a8b18: 0xc069210  jal         func_1A4840
label_1a8b1c:
    if (ctx->pc == 0x1A8B1Cu) {
        ctx->pc = 0x1A8B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8B18u;
        // 0x1a8b1c: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8B20u;
        goto label_1a8b20;
    }
    ctx->pc = 0x1A8B18u;
    SET_GPR_U32(ctx, 31, 0x1A8B20u);
    ctx->pc = 0x1A8B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8B18u;
    // 0x1a8b1c: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x1A8B20u;
label_1a8b20:
    // 0x1a8b20: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1a8b20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a8b24:
    // 0x1a8b24: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x1a8b24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_1a8b28:
    // 0x1a8b28: 0xdfbe00c0  ld          $fp, 0xC0($sp)
    ctx->pc = 0x1a8b28u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_1a8b2c:
    // 0x1a8b2c: 0xdfb700b0  ld          $s7, 0xB0($sp)
    ctx->pc = 0x1a8b2cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_1a8b30:
    // 0x1a8b30: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x1a8b30u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_1a8b34:
    // 0x1a8b34: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x1a8b34u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1a8b38:
    // 0x1a8b38: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x1a8b38u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1a8b3c:
    // 0x1a8b3c: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x1a8b3cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1a8b40:
    // 0x1a8b40: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x1a8b40u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1a8b44:
    // 0x1a8b44: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x1a8b44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1a8b48:
    // 0x1a8b48: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1a8b48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1a8b4c:
    // 0x1a8b4c: 0x3e00008  jr          $ra
label_1a8b50:
    if (ctx->pc == 0x1A8B50u) {
        ctx->pc = 0x1A8B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8B4Cu;
        // 0x1a8b50: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8B54u;
        goto label_1a8b54;
    }
    ctx->pc = 0x1A8B4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8B4Cu;
        // 0x1a8b50: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A8B4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A8B54u;
label_1a8b54:
    // 0x1a8b54: 0x0  nop
    ctx->pc = 0x1a8b54u;
    // NOP
label_1a8b58:
    // 0x1a8b58: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1a8b58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_1a8b5c:
    // 0x1a8b5c: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x1a8b5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
label_1a8b60:
    // 0x1a8b60: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x1a8b60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
label_1a8b64:
    // 0x1a8b64: 0x3c140037  lui         $s4, 0x37
    ctx->pc = 0x1a8b64u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)55 << 16));
label_1a8b68:
    // 0x1a8b68: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1a8b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
label_1a8b6c:
    // 0x1a8b6c: 0x26923240  addiu       $s2, $s4, 0x3240
    ctx->pc = 0x1a8b6cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 12864));
label_1a8b70:
    // 0x1a8b70: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1a8b70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_1a8b74:
    // 0x1a8b74: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x1a8b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
label_1a8b78:
    // 0x1a8b78: 0xc06a02c  jal         func_1A80B0
label_1a8b7c:
    if (ctx->pc == 0x1A8B7Cu) {
        ctx->pc = 0x1A8B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8B78u;
        // 0x1a8b7c: 0xffb10050  sd          $s1, 0x50($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8B80u;
        goto label_1a8b80;
    }
    ctx->pc = 0x1A8B78u;
    SET_GPR_U32(ctx, 31, 0x1A8B80u);
    ctx->pc = 0x1A8B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8B78u;
    // 0x1a8b7c: 0xffb10050  sd          $s1, 0x50($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A80B0u;
    { ctx->pc = 0x1a80b0; return; }
    ctx->pc = 0x1A8B80u;
label_1a8b80:
    // 0x1a8b80: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a8b80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a8b84:
    // 0x1a8b84: 0xc06a14c  jal         func_1A8530
label_1a8b88:
    if (ctx->pc == 0x1A8B88u) {
        ctx->pc = 0x1A8B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8B84u;
        // 0x1a8b88: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8B8Cu;
        goto label_1a8b8c;
    }
    ctx->pc = 0x1A8B84u;
    SET_GPR_U32(ctx, 31, 0x1A8B8Cu);
    ctx->pc = 0x1A8B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8B84u;
    // 0x1a8b88: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8530u;
    goto label_1a8530;
    ctx->pc = 0x1A8B8Cu;
label_1a8b8c:
    // 0x1a8b8c: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x1a8b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
label_1a8b90:
    // 0x1a8b90: 0x8c625bf8  lw          $v0, 0x5BF8($v1)
    ctx->pc = 0x1a8b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 23544)));
label_1a8b94:
    // 0x1a8b94: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1a8b98:
    if (ctx->pc == 0x1A8B98u) {
        ctx->pc = 0x1A8B9Cu;
        goto label_1a8b9c;
    }
    ctx->pc = 0x1A8B94u;
    {
        const bool branch_taken_0x1a8b94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a8b94) {
            ctx->pc = 0x1A8BACu;
            goto label_1a8bac;
        }
    }
    ctx->pc = 0x1A8B9Cu;
label_1a8b9c:
    // 0x1a8b9c: 0xc06a158  jal         func_1A8560
label_1a8ba0:
    if (ctx->pc == 0x1A8BA0u) {
        ctx->pc = 0x1A8BA4u;
        goto label_1a8ba4;
    }
    ctx->pc = 0x1A8B9Cu;
    SET_GPR_U32(ctx, 31, 0x1A8BA4u);
    ctx->pc = 0x1A8560u;
    goto label_1a8560;
    ctx->pc = 0x1A8BA4u;
label_1a8ba4:
    // 0x1a8ba4: 0x10000043  b           . + 4 + (0x43 << 2)
label_1a8ba8:
    if (ctx->pc == 0x1A8BA8u) {
        ctx->pc = 0x1A8BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8BA4u;
        // 0x1a8ba8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8BACu;
        goto label_1a8bac;
    }
    ctx->pc = 0x1A8BA4u;
    {
        const bool branch_taken_0x1a8ba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8BA4u;
        // 0x1a8ba8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8ba4) {
            ctx->pc = 0x1A8CB4u;
            { ctx->pc = 0x1a8cb4; return; }
        }
    }
    ctx->pc = 0x1A8BACu;
label_1a8bac:
    // 0x1a8bac: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_1a8bb0:
    if (ctx->pc == 0x1A8BB0u) {
        ctx->pc = 0x1A8BB4u;
        goto label_1a8bb4;
    }
    ctx->pc = 0x1A8BACu;
    {
        const bool branch_taken_0x1a8bac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a8bac) {
            ctx->pc = 0x1A8BC0u;
            { ctx->pc = 0x1a8bc0; return; }
        }
    }
    ctx->pc = 0x1A8BB4u;
label_1a8bb4:
    // 0x1a8bb4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1a8bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1a8bb8:
    // 0x1a8bb8: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_1a8bbc:
    if (ctx->pc == 0x1A8BBCu) {
        ctx->pc = 0x1A8BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8BB8u;
        // 0x1a8bbc: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8BC0u;
        { ctx->pc = 0x1a8bc0; return; }
    }
    ctx->pc = 0x1A8BB8u;
    {
        const bool branch_taken_0x1a8bb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a8bb8) {
            ctx->pc = 0x1A8BBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A8BB8u;
            // 0x1a8bbc: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A8BD0u;
            { ctx->pc = 0x1a8bd0; return; }
        }
    }
    ctx->pc = 0x1A8BC0u;
    ctx->pc = 0x1a8bc0u;
    return;
}

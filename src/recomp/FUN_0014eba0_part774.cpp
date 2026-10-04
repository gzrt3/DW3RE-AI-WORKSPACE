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


void FUN_0014eba0_part774(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x2c82b0u: goto label_2c82b0;
        case 0x2c82b4u: goto label_2c82b4;
        case 0x2c82b8u: goto label_2c82b8;
        case 0x2c82bcu: goto label_2c82bc;
        case 0x2c82c0u: goto label_2c82c0;
        case 0x2c82c4u: goto label_2c82c4;
        case 0x2c82c8u: goto label_2c82c8;
        case 0x2c82ccu: goto label_2c82cc;
        case 0x2c82d0u: goto label_2c82d0;
        case 0x2c82d4u: goto label_2c82d4;
        case 0x2c82d8u: goto label_2c82d8;
        case 0x2c82dcu: goto label_2c82dc;
        case 0x2c82e0u: goto label_2c82e0;
        case 0x2c82e4u: goto label_2c82e4;
        case 0x2c82e8u: goto label_2c82e8;
        case 0x2c82ecu: goto label_2c82ec;
        case 0x2c82f0u: goto label_2c82f0;
        case 0x2c82f4u: goto label_2c82f4;
        case 0x2c82f8u: goto label_2c82f8;
        case 0x2c82fcu: goto label_2c82fc;
        case 0x2c8300u: goto label_2c8300;
        case 0x2c8304u: goto label_2c8304;
        case 0x2c8308u: goto label_2c8308;
        case 0x2c830cu: goto label_2c830c;
        case 0x2c8310u: goto label_2c8310;
        case 0x2c8314u: goto label_2c8314;
        case 0x2c8318u: goto label_2c8318;
        case 0x2c831cu: goto label_2c831c;
        case 0x2c8320u: goto label_2c8320;
        case 0x2c8324u: goto label_2c8324;
        case 0x2c8328u: goto label_2c8328;
        case 0x2c832cu: goto label_2c832c;
        case 0x2c8330u: goto label_2c8330;
        case 0x2c8334u: goto label_2c8334;
        case 0x2c8338u: goto label_2c8338;
        case 0x2c833cu: goto label_2c833c;
        case 0x2c8340u: goto label_2c8340;
        case 0x2c8344u: goto label_2c8344;
        case 0x2c8348u: goto label_2c8348;
        case 0x2c834cu: goto label_2c834c;
        case 0x2c8350u: goto label_2c8350;
        case 0x2c8354u: goto label_2c8354;
        case 0x2c8358u: goto label_2c8358;
        case 0x2c835cu: goto label_2c835c;
        case 0x2c8360u: goto label_2c8360;
        case 0x2c8364u: goto label_2c8364;
        case 0x2c8368u: goto label_2c8368;
        case 0x2c836cu: goto label_2c836c;
        case 0x2c8370u: goto label_2c8370;
        case 0x2c8374u: goto label_2c8374;
        case 0x2c8378u: goto label_2c8378;
        case 0x2c837cu: goto label_2c837c;
        case 0x2c8380u: goto label_2c8380;
        case 0x2c8384u: goto label_2c8384;
        case 0x2c8388u: goto label_2c8388;
        case 0x2c838cu: goto label_2c838c;
        case 0x2c8390u: goto label_2c8390;
        case 0x2c8394u: goto label_2c8394;
        case 0x2c8398u: goto label_2c8398;
        case 0x2c839cu: goto label_2c839c;
        case 0x2c83a0u: goto label_2c83a0;
        case 0x2c83a4u: goto label_2c83a4;
        case 0x2c83a8u: goto label_2c83a8;
        case 0x2c83acu: goto label_2c83ac;
        case 0x2c83b0u: goto label_2c83b0;
        case 0x2c83b4u: goto label_2c83b4;
        case 0x2c83b8u: goto label_2c83b8;
        case 0x2c83bcu: goto label_2c83bc;
        case 0x2c83c0u: goto label_2c83c0;
        case 0x2c83c4u: goto label_2c83c4;
        case 0x2c83c8u: goto label_2c83c8;
        case 0x2c83ccu: goto label_2c83cc;
        case 0x2c83d0u: goto label_2c83d0;
        case 0x2c83d4u: goto label_2c83d4;
        case 0x2c83d8u: goto label_2c83d8;
        case 0x2c83dcu: goto label_2c83dc;
        case 0x2c83e0u: goto label_2c83e0;
        case 0x2c83e4u: goto label_2c83e4;
        case 0x2c83e8u: goto label_2c83e8;
        case 0x2c83ecu: goto label_2c83ec;
        case 0x2c83f0u: goto label_2c83f0;
        case 0x2c83f4u: goto label_2c83f4;
        case 0x2c83f8u: goto label_2c83f8;
        case 0x2c83fcu: goto label_2c83fc;
        case 0x2c8400u: goto label_2c8400;
        case 0x2c8404u: goto label_2c8404;
        case 0x2c8408u: goto label_2c8408;
        case 0x2c840cu: goto label_2c840c;
        case 0x2c8410u: goto label_2c8410;
        case 0x2c8414u: goto label_2c8414;
        case 0x2c8418u: goto label_2c8418;
        case 0x2c841cu: goto label_2c841c;
        case 0x2c8420u: goto label_2c8420;
        case 0x2c8424u: goto label_2c8424;
        case 0x2c8428u: goto label_2c8428;
        case 0x2c842cu: goto label_2c842c;
        case 0x2c8430u: goto label_2c8430;
        case 0x2c8434u: goto label_2c8434;
        case 0x2c8438u: goto label_2c8438;
        case 0x2c843cu: goto label_2c843c;
        case 0x2c8440u: goto label_2c8440;
        case 0x2c8444u: goto label_2c8444;
        case 0x2c8448u: goto label_2c8448;
        case 0x2c844cu: goto label_2c844c;
        case 0x2c8450u: goto label_2c8450;
        case 0x2c8454u: goto label_2c8454;
        case 0x2c8458u: goto label_2c8458;
        case 0x2c845cu: goto label_2c845c;
        case 0x2c8460u: goto label_2c8460;
        case 0x2c8464u: goto label_2c8464;
        case 0x2c8468u: goto label_2c8468;
        case 0x2c846cu: goto label_2c846c;
        case 0x2c8470u: goto label_2c8470;
        case 0x2c8474u: goto label_2c8474;
        case 0x2c8478u: goto label_2c8478;
        case 0x2c847cu: goto label_2c847c;
        case 0x2c8480u: goto label_2c8480;
        case 0x2c8484u: goto label_2c8484;
        case 0x2c8488u: goto label_2c8488;
        case 0x2c848cu: goto label_2c848c;
        case 0x2c8490u: goto label_2c8490;
        case 0x2c8494u: goto label_2c8494;
        case 0x2c8498u: goto label_2c8498;
        case 0x2c849cu: goto label_2c849c;
        case 0x2c84a0u: goto label_2c84a0;
        case 0x2c84a4u: goto label_2c84a4;
        case 0x2c84a8u: goto label_2c84a8;
        case 0x2c84acu: goto label_2c84ac;
        case 0x2c84b0u: goto label_2c84b0;
        case 0x2c84b4u: goto label_2c84b4;
        case 0x2c84b8u: goto label_2c84b8;
        case 0x2c84bcu: goto label_2c84bc;
        case 0x2c84c0u: goto label_2c84c0;
        case 0x2c84c4u: goto label_2c84c4;
        case 0x2c84c8u: goto label_2c84c8;
        case 0x2c84ccu: goto label_2c84cc;
        case 0x2c84d0u: goto label_2c84d0;
        case 0x2c84d4u: goto label_2c84d4;
        case 0x2c84d8u: goto label_2c84d8;
        case 0x2c84dcu: goto label_2c84dc;
        case 0x2c84e0u: goto label_2c84e0;
        case 0x2c84e4u: goto label_2c84e4;
        case 0x2c84e8u: goto label_2c84e8;
        case 0x2c84ecu: goto label_2c84ec;
        case 0x2c84f0u: goto label_2c84f0;
        case 0x2c84f4u: goto label_2c84f4;
        case 0x2c84f8u: goto label_2c84f8;
        case 0x2c84fcu: goto label_2c84fc;
        case 0x2c8500u: goto label_2c8500;
        case 0x2c8504u: goto label_2c8504;
        case 0x2c8508u: goto label_2c8508;
        case 0x2c850cu: goto label_2c850c;
        case 0x2c8510u: goto label_2c8510;
        case 0x2c8514u: goto label_2c8514;
        case 0x2c8518u: goto label_2c8518;
        case 0x2c851cu: goto label_2c851c;
        case 0x2c8520u: goto label_2c8520;
        case 0x2c8524u: goto label_2c8524;
        case 0x2c8528u: goto label_2c8528;
        case 0x2c852cu: goto label_2c852c;
        case 0x2c8530u: goto label_2c8530;
        case 0x2c8534u: goto label_2c8534;
        case 0x2c8538u: goto label_2c8538;
        case 0x2c853cu: goto label_2c853c;
        case 0x2c8540u: goto label_2c8540;
        case 0x2c8544u: goto label_2c8544;
        case 0x2c8548u: goto label_2c8548;
        case 0x2c854cu: goto label_2c854c;
        case 0x2c8550u: goto label_2c8550;
        case 0x2c8554u: goto label_2c8554;
        case 0x2c8558u: goto label_2c8558;
        case 0x2c855cu: goto label_2c855c;
        case 0x2c8560u: goto label_2c8560;
        case 0x2c8564u: goto label_2c8564;
        case 0x2c8568u: goto label_2c8568;
        case 0x2c856cu: goto label_2c856c;
        case 0x2c8570u: goto label_2c8570;
        case 0x2c8574u: goto label_2c8574;
        case 0x2c8578u: goto label_2c8578;
        case 0x2c857cu: goto label_2c857c;
        case 0x2c8580u: goto label_2c8580;
        case 0x2c8584u: goto label_2c8584;
        case 0x2c8588u: goto label_2c8588;
        case 0x2c858cu: goto label_2c858c;
        case 0x2c8590u: goto label_2c8590;
        case 0x2c8594u: goto label_2c8594;
        case 0x2c8598u: goto label_2c8598;
        case 0x2c859cu: goto label_2c859c;
        case 0x2c85a0u: goto label_2c85a0;
        case 0x2c85a4u: goto label_2c85a4;
        case 0x2c85a8u: goto label_2c85a8;
        case 0x2c85acu: goto label_2c85ac;
        case 0x2c85b0u: goto label_2c85b0;
        case 0x2c85b4u: goto label_2c85b4;
        case 0x2c85b8u: goto label_2c85b8;
        case 0x2c85bcu: goto label_2c85bc;
        case 0x2c85c0u: goto label_2c85c0;
        case 0x2c85c4u: goto label_2c85c4;
        case 0x2c85c8u: goto label_2c85c8;
        case 0x2c85ccu: goto label_2c85cc;
        case 0x2c85d0u: goto label_2c85d0;
        case 0x2c85d4u: goto label_2c85d4;
        case 0x2c85d8u: goto label_2c85d8;
        case 0x2c85dcu: goto label_2c85dc;
        case 0x2c85e0u: goto label_2c85e0;
        case 0x2c85e4u: goto label_2c85e4;
        case 0x2c85e8u: goto label_2c85e8;
        case 0x2c85ecu: goto label_2c85ec;
        case 0x2c85f0u: goto label_2c85f0;
        case 0x2c85f4u: goto label_2c85f4;
        case 0x2c85f8u: goto label_2c85f8;
        case 0x2c85fcu: goto label_2c85fc;
        case 0x2c8600u: goto label_2c8600;
        case 0x2c8604u: goto label_2c8604;
        case 0x2c8608u: goto label_2c8608;
        case 0x2c860cu: goto label_2c860c;
        case 0x2c8610u: goto label_2c8610;
        case 0x2c8614u: goto label_2c8614;
        case 0x2c8618u: goto label_2c8618;
        case 0x2c861cu: goto label_2c861c;
        case 0x2c8620u: goto label_2c8620;
        case 0x2c8624u: goto label_2c8624;
        case 0x2c8628u: goto label_2c8628;
        case 0x2c862cu: goto label_2c862c;
        case 0x2c8630u: goto label_2c8630;
        case 0x2c8634u: goto label_2c8634;
        case 0x2c8638u: goto label_2c8638;
        case 0x2c863cu: goto label_2c863c;
        case 0x2c8640u: goto label_2c8640;
        case 0x2c8644u: goto label_2c8644;
        case 0x2c8648u: goto label_2c8648;
        case 0x2c864cu: goto label_2c864c;
        case 0x2c8650u: goto label_2c8650;
        case 0x2c8654u: goto label_2c8654;
        case 0x2c8658u: goto label_2c8658;
        case 0x2c865cu: goto label_2c865c;
        case 0x2c8660u: goto label_2c8660;
        case 0x2c8664u: goto label_2c8664;
        case 0x2c8668u: goto label_2c8668;
        case 0x2c866cu: goto label_2c866c;
        case 0x2c8670u: goto label_2c8670;
        case 0x2c8674u: goto label_2c8674;
        case 0x2c8678u: goto label_2c8678;
        case 0x2c867cu: goto label_2c867c;
        case 0x2c8680u: goto label_2c8680;
        case 0x2c8684u: goto label_2c8684;
        case 0x2c8688u: goto label_2c8688;
        case 0x2c868cu: goto label_2c868c;
        case 0x2c8690u: goto label_2c8690;
        case 0x2c8694u: goto label_2c8694;
        case 0x2c8698u: goto label_2c8698;
        case 0x2c869cu: goto label_2c869c;
        case 0x2c86a0u: goto label_2c86a0;
        case 0x2c86a4u: goto label_2c86a4;
        case 0x2c86a8u: goto label_2c86a8;
        case 0x2c86acu: goto label_2c86ac;
        case 0x2c86b0u: goto label_2c86b0;
        case 0x2c86b4u: goto label_2c86b4;
        case 0x2c86b8u: goto label_2c86b8;
        case 0x2c86bcu: goto label_2c86bc;
        case 0x2c86c0u: goto label_2c86c0;
        case 0x2c86c4u: goto label_2c86c4;
        case 0x2c86c8u: goto label_2c86c8;
        case 0x2c86ccu: goto label_2c86cc;
        case 0x2c86d0u: goto label_2c86d0;
        case 0x2c86d4u: goto label_2c86d4;
        case 0x2c86d8u: goto label_2c86d8;
        case 0x2c86dcu: goto label_2c86dc;
        case 0x2c86e0u: goto label_2c86e0;
        case 0x2c86e4u: goto label_2c86e4;
        case 0x2c86e8u: goto label_2c86e8;
        case 0x2c86ecu: goto label_2c86ec;
        case 0x2c86f0u: goto label_2c86f0;
        case 0x2c86f4u: goto label_2c86f4;
        case 0x2c86f8u: goto label_2c86f8;
        case 0x2c86fcu: goto label_2c86fc;
        case 0x2c8700u: goto label_2c8700;
        case 0x2c8704u: goto label_2c8704;
        case 0x2c8708u: goto label_2c8708;
        case 0x2c870cu: goto label_2c870c;
        case 0x2c8710u: goto label_2c8710;
        case 0x2c8714u: goto label_2c8714;
        case 0x2c8718u: goto label_2c8718;
        case 0x2c871cu: goto label_2c871c;
        case 0x2c8720u: goto label_2c8720;
        case 0x2c8724u: goto label_2c8724;
        case 0x2c8728u: goto label_2c8728;
        case 0x2c872cu: goto label_2c872c;
        case 0x2c8730u: goto label_2c8730;
        case 0x2c8734u: goto label_2c8734;
        case 0x2c8738u: goto label_2c8738;
        case 0x2c873cu: goto label_2c873c;
        case 0x2c8740u: goto label_2c8740;
        case 0x2c8744u: goto label_2c8744;
        case 0x2c8748u: goto label_2c8748;
        case 0x2c874cu: goto label_2c874c;
        case 0x2c8750u: goto label_2c8750;
        case 0x2c8754u: goto label_2c8754;
        case 0x2c8758u: goto label_2c8758;
        case 0x2c875cu: goto label_2c875c;
        case 0x2c8760u: goto label_2c8760;
        case 0x2c8764u: goto label_2c8764;
        case 0x2c8768u: goto label_2c8768;
        case 0x2c876cu: goto label_2c876c;
        case 0x2c8770u: goto label_2c8770;
        case 0x2c8774u: goto label_2c8774;
        case 0x2c8778u: goto label_2c8778;
        case 0x2c877cu: goto label_2c877c;
        case 0x2c8780u: goto label_2c8780;
        case 0x2c8784u: goto label_2c8784;
        case 0x2c8788u: goto label_2c8788;
        case 0x2c878cu: goto label_2c878c;
        case 0x2c8790u: goto label_2c8790;
        case 0x2c8794u: goto label_2c8794;
        case 0x2c8798u: goto label_2c8798;
        case 0x2c879cu: goto label_2c879c;
        case 0x2c87a0u: goto label_2c87a0;
        case 0x2c87a4u: goto label_2c87a4;
        case 0x2c87a8u: goto label_2c87a8;
        case 0x2c87acu: goto label_2c87ac;
        case 0x2c87b0u: goto label_2c87b0;
        case 0x2c87b4u: goto label_2c87b4;
        case 0x2c87b8u: goto label_2c87b8;
        case 0x2c87bcu: goto label_2c87bc;
        case 0x2c87c0u: goto label_2c87c0;
        case 0x2c87c4u: goto label_2c87c4;
        case 0x2c87c8u: goto label_2c87c8;
        case 0x2c87ccu: goto label_2c87cc;
        case 0x2c87d0u: goto label_2c87d0;
        case 0x2c87d4u: goto label_2c87d4;
        case 0x2c87d8u: goto label_2c87d8;
        case 0x2c87dcu: goto label_2c87dc;
        case 0x2c87e0u: goto label_2c87e0;
        case 0x2c87e4u: goto label_2c87e4;
        case 0x2c87e8u: goto label_2c87e8;
        case 0x2c87ecu: goto label_2c87ec;
        case 0x2c87f0u: goto label_2c87f0;
        case 0x2c87f4u: goto label_2c87f4;
        case 0x2c87f8u: goto label_2c87f8;
        case 0x2c87fcu: goto label_2c87fc;
        case 0x2c8800u: goto label_2c8800;
        case 0x2c8804u: goto label_2c8804;
        case 0x2c8808u: goto label_2c8808;
        case 0x2c880cu: goto label_2c880c;
        case 0x2c8810u: goto label_2c8810;
        case 0x2c8814u: goto label_2c8814;
        case 0x2c8818u: goto label_2c8818;
        case 0x2c881cu: goto label_2c881c;
        case 0x2c8820u: goto label_2c8820;
        case 0x2c8824u: goto label_2c8824;
        case 0x2c8828u: goto label_2c8828;
        case 0x2c882cu: goto label_2c882c;
        case 0x2c8830u: goto label_2c8830;
        case 0x2c8834u: goto label_2c8834;
        case 0x2c8838u: goto label_2c8838;
        case 0x2c883cu: goto label_2c883c;
        case 0x2c8840u: goto label_2c8840;
        case 0x2c8844u: goto label_2c8844;
        case 0x2c8848u: goto label_2c8848;
        case 0x2c884cu: goto label_2c884c;
        case 0x2c8850u: goto label_2c8850;
        case 0x2c8854u: goto label_2c8854;
        case 0x2c8858u: goto label_2c8858;
        case 0x2c885cu: goto label_2c885c;
        case 0x2c8860u: goto label_2c8860;
        case 0x2c8864u: goto label_2c8864;
        case 0x2c8868u: goto label_2c8868;
        case 0x2c886cu: goto label_2c886c;
        case 0x2c8870u: goto label_2c8870;
        case 0x2c8874u: goto label_2c8874;
        case 0x2c8878u: goto label_2c8878;
        case 0x2c887cu: goto label_2c887c;
        case 0x2c8880u: goto label_2c8880;
        case 0x2c8884u: goto label_2c8884;
        case 0x2c8888u: goto label_2c8888;
        case 0x2c888cu: goto label_2c888c;
        case 0x2c8890u: goto label_2c8890;
        case 0x2c8894u: goto label_2c8894;
        case 0x2c8898u: goto label_2c8898;
        case 0x2c889cu: goto label_2c889c;
        case 0x2c88a0u: goto label_2c88a0;
        case 0x2c88a4u: goto label_2c88a4;
        case 0x2c88a8u: goto label_2c88a8;
        case 0x2c88acu: goto label_2c88ac;
        case 0x2c88b0u: goto label_2c88b0;
        case 0x2c88b4u: goto label_2c88b4;
        case 0x2c88b8u: goto label_2c88b8;
        case 0x2c88bcu: goto label_2c88bc;
        case 0x2c88c0u: goto label_2c88c0;
        case 0x2c88c4u: goto label_2c88c4;
        case 0x2c88c8u: goto label_2c88c8;
        case 0x2c88ccu: goto label_2c88cc;
        case 0x2c88d0u: goto label_2c88d0;
        case 0x2c88d4u: goto label_2c88d4;
        case 0x2c88d8u: goto label_2c88d8;
        case 0x2c88dcu: goto label_2c88dc;
        case 0x2c88e0u: goto label_2c88e0;
        case 0x2c88e4u: goto label_2c88e4;
        case 0x2c88e8u: goto label_2c88e8;
        case 0x2c88ecu: goto label_2c88ec;
        case 0x2c88f0u: goto label_2c88f0;
        case 0x2c88f4u: goto label_2c88f4;
        case 0x2c88f8u: goto label_2c88f8;
        case 0x2c88fcu: goto label_2c88fc;
        case 0x2c8900u: goto label_2c8900;
        case 0x2c8904u: goto label_2c8904;
        case 0x2c8908u: goto label_2c8908;
        case 0x2c890cu: goto label_2c890c;
        case 0x2c8910u: goto label_2c8910;
        case 0x2c8914u: goto label_2c8914;
        case 0x2c8918u: goto label_2c8918;
        case 0x2c891cu: goto label_2c891c;
        case 0x2c8920u: goto label_2c8920;
        case 0x2c8924u: goto label_2c8924;
        case 0x2c8928u: goto label_2c8928;
        case 0x2c892cu: goto label_2c892c;
        case 0x2c8930u: goto label_2c8930;
        case 0x2c8934u: goto label_2c8934;
        case 0x2c8938u: goto label_2c8938;
        case 0x2c893cu: goto label_2c893c;
        case 0x2c8940u: goto label_2c8940;
        case 0x2c8944u: goto label_2c8944;
        case 0x2c8948u: goto label_2c8948;
        case 0x2c894cu: goto label_2c894c;
        case 0x2c8950u: goto label_2c8950;
        case 0x2c8954u: goto label_2c8954;
        case 0x2c8958u: goto label_2c8958;
        case 0x2c895cu: goto label_2c895c;
        case 0x2c8960u: goto label_2c8960;
        case 0x2c8964u: goto label_2c8964;
        case 0x2c8968u: goto label_2c8968;
        case 0x2c896cu: goto label_2c896c;
        case 0x2c8970u: goto label_2c8970;
        case 0x2c8974u: goto label_2c8974;
        case 0x2c8978u: goto label_2c8978;
        case 0x2c897cu: goto label_2c897c;
        case 0x2c8980u: goto label_2c8980;
        case 0x2c8984u: goto label_2c8984;
        case 0x2c8988u: goto label_2c8988;
        case 0x2c898cu: goto label_2c898c;
        case 0x2c8990u: goto label_2c8990;
        case 0x2c8994u: goto label_2c8994;
        case 0x2c8998u: goto label_2c8998;
        case 0x2c899cu: goto label_2c899c;
        case 0x2c89a0u: goto label_2c89a0;
        case 0x2c89a4u: goto label_2c89a4;
        case 0x2c89a8u: goto label_2c89a8;
        case 0x2c89acu: goto label_2c89ac;
        case 0x2c89b0u: goto label_2c89b0;
        case 0x2c89b4u: goto label_2c89b4;
        case 0x2c89b8u: goto label_2c89b8;
        case 0x2c89bcu: goto label_2c89bc;
        case 0x2c89c0u: goto label_2c89c0;
        case 0x2c89c4u: goto label_2c89c4;
        case 0x2c89c8u: goto label_2c89c8;
        case 0x2c89ccu: goto label_2c89cc;
        case 0x2c89d0u: goto label_2c89d0;
        case 0x2c89d4u: goto label_2c89d4;
        case 0x2c89d8u: goto label_2c89d8;
        case 0x2c89dcu: goto label_2c89dc;
        case 0x2c89e0u: goto label_2c89e0;
        case 0x2c89e4u: goto label_2c89e4;
        case 0x2c89e8u: goto label_2c89e8;
        case 0x2c89ecu: goto label_2c89ec;
        case 0x2c89f0u: goto label_2c89f0;
        case 0x2c89f4u: goto label_2c89f4;
        case 0x2c89f8u: goto label_2c89f8;
        case 0x2c89fcu: goto label_2c89fc;
        case 0x2c8a00u: goto label_2c8a00;
        case 0x2c8a04u: goto label_2c8a04;
        case 0x2c8a08u: goto label_2c8a08;
        case 0x2c8a0cu: goto label_2c8a0c;
        case 0x2c8a10u: goto label_2c8a10;
        case 0x2c8a14u: goto label_2c8a14;
        case 0x2c8a18u: goto label_2c8a18;
        case 0x2c8a1cu: goto label_2c8a1c;
        case 0x2c8a20u: goto label_2c8a20;
        case 0x2c8a24u: goto label_2c8a24;
        case 0x2c8a28u: goto label_2c8a28;
        case 0x2c8a2cu: goto label_2c8a2c;
        case 0x2c8a30u: goto label_2c8a30;
        case 0x2c8a34u: goto label_2c8a34;
        case 0x2c8a38u: goto label_2c8a38;
        case 0x2c8a3cu: goto label_2c8a3c;
        case 0x2c8a40u: goto label_2c8a40;
        case 0x2c8a44u: goto label_2c8a44;
        case 0x2c8a48u: goto label_2c8a48;
        case 0x2c8a4cu: goto label_2c8a4c;
        case 0x2c8a50u: goto label_2c8a50;
        case 0x2c8a54u: goto label_2c8a54;
        case 0x2c8a58u: goto label_2c8a58;
        case 0x2c8a5cu: goto label_2c8a5c;
        case 0x2c8a60u: goto label_2c8a60;
        case 0x2c8a64u: goto label_2c8a64;
        case 0x2c8a68u: goto label_2c8a68;
        case 0x2c8a6cu: goto label_2c8a6c;
        case 0x2c8a70u: goto label_2c8a70;
        case 0x2c8a74u: goto label_2c8a74;
        case 0x2c8a78u: goto label_2c8a78;
        case 0x2c8a7cu: goto label_2c8a7c;
        default: return;
    }

label_2c82b0:
    // 0x2c82b0: 0x676e  .word       0x0000676E                   # dsub        $t4, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c82b0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, r); }
label_2c82b4:
    // 0x2c82b4: 0x0  nop
    ctx->pc = 0x2c82b4u;
    // NOP
label_2c82b8:
    // 0x2c82b8: 0x67617244  daddiu      $at, $k1, 0x7244
    ctx->pc = 0x2c82b8u;
    SET_GPR_S64(ctx, 1, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)29252);
label_2c82bc:
    // 0x2c82bc: 0x42206e6f  .word       0x42206E6F                   # INVALID     $s1, $zero, 0x6E6F # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2c82bcu;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x2C82BC raw=0x42206E6F");
 /* MITIGATED */
label_2c82c0:
    // 0x2c82c0: 0x74616572  .word       0x74616572                   # INVALID     $v1, $at, 0x6572 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c82c0u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C82C0 raw=0x74616572");
 /* MITIGATED */
label_2c82c4:
    // 0x2c82c4: 0x68  .word       0x00000068                   # mfsa        $zero # 00000040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c82c4u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_2c82c8:
    // 0x2c82c8: 0x6b726144  ldl         $s2, 0x6144($k1)
    ctx->pc = 0x2c82c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 24900); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem << shift)); }
label_2c82cc:
    // 0x2c82cc: 0x61654620  daddi       $a1, $t3, 0x4620
    ctx->pc = 0x2c82ccu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)17952; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
label_2c82d0:
    // 0x2c82d0: 0x72656874  .word       0x72656874                   # psllh       $t5, $a1, 1 # 02600000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c82d0u;
    SET_GPR_VEC(ctx, 13, _mm_slli_epi16(GPR_VEC(ctx, 5), 1));
label_2c82d4:
    // 0x2c82d4: 0x0  nop
    ctx->pc = 0x2c82d4u;
    // NOP
label_2c82d8:
    // 0x2c82d8: 0x74696857  .word       0x74696857                   # INVALID     $v1, $t1, 0x6857 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c82d8u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C82D8 raw=0x74696857");
 /* MITIGATED */
label_2c82dc:
    // 0x2c82dc: 0x69542065  ldl         $s4, 0x2065($t2)
    ctx->pc = 0x2c82dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 8293); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
label_2c82e0:
    // 0x2c82e0: 0x726567  .word       0x00726567                   # nor         $t4, $v1, $s2 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c82e0u;
    SET_GPR_U64(ctx, 12, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 18)));
label_2c82e4:
    // 0x2c82e4: 0x0  nop
    ctx->pc = 0x2c82e4u;
    // NOP
label_2c82e8:
    // 0x2c82e8: 0x20616553  addi        $at, $v1, 0x6553
    ctx->pc = 0x2c82e8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)25939, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 1, (int32_t)tmp); }
label_2c82ec:
    // 0x2c82ec: 0x7473614d  .word       0x7473614D                   # INVALID     $v1, $s3, 0x614D # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c82ecu;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C82EC raw=0x7473614D");
 /* MITIGATED */
label_2c82f0:
    // 0x2c82f0: 0x7265  .word       0x00007265                   # move        $t6, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c82f0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_2c82f4:
    // 0x2c82f4: 0x0  nop
    ctx->pc = 0x2c82f4u;
    // NOP
label_2c82f8:
    // 0x2c82f8: 0x6e696c42  ldr         $t1, 0x6C42($s3)
    ctx->pc = 0x2c82f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 27714); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_2c82fc:
    // 0x2c82fc: 0x6b  .word       0x0000006B                   # sltu        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c82fcu;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_2c8300:
    // 0x2c8300: 0x636c6f56  daddi       $t4, $k1, 0x6F56
    ctx->pc = 0x2c8300u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)28502; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, res); }
label_2c8304:
    // 0x2c8304: 0x206f6e61  addi        $t7, $v1, 0x6E61
    ctx->pc = 0x2c8304u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28257, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 15, (int32_t)tmp); }
label_2c8308:
    // 0x2c8308: 0x66617453  daddiu      $at, $s3, 0x7453
    ctx->pc = 0x2c8308u;
    SET_GPR_S64(ctx, 1, (int64_t)GPR_S64(ctx, 19) + (int64_t)(int32_t)29779);
label_2c830c:
    // 0x2c830c: 0x66  .word       0x00000066                   # xor         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c830cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_2c8310:
    // 0x2c8310: 0x6172614d  daddi       $s2, $t3, 0x614D
    ctx->pc = 0x2c8310u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24909; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, res); }
label_2c8314:
    // 0x2c8314: 0x72656475  .word       0x72656475                   # INVALID     $s3, $a1, 0x6475 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c8314u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x35 at 0x2C8314 raw=0x72656475");
 /* MITIGATED */
label_2c8318:
    // 0x2c8318: 0x0  nop
    ctx->pc = 0x2c8318u;
    // NOP
label_2c831c:
    // 0x2c831c: 0x0  nop
    ctx->pc = 0x2c831cu;
    // NOP
label_2c8320:
    // 0x2c8320: 0x63616550  daddi       $at, $k1, 0x6550
    ctx->pc = 0x2c8320u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)25936; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, res); }
label_2c8324:
    // 0x2c8324: 0x206b636f  addi        $t3, $v1, 0x636F
    ctx->pc = 0x2c8324u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)25455, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 11, (int32_t)tmp); }
label_2c8328:
    // 0x2c8328: 0x6f6c6154  ldr         $t4, 0x6154($k1)
    ctx->pc = 0x2c8328u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 24916); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_2c832c:
    // 0x2c832c: 0x6e  .word       0x0000006E                   # dsub        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c832cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2c8330:
    // 0x2c8330: 0x6b726144  ldl         $s2, 0x6144($k1)
    ctx->pc = 0x2c8330u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 24900); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem << shift)); }
label_2c8334:
    // 0x2c8334: 0x6f6f4d20  ldr         $t7, 0x4D20($k1)
    ctx->pc = 0x2c8334u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 19744); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_2c8338:
    // 0x2c8338: 0x6c46206e  ldr         $a2, 0x206E($v0)
    ctx->pc = 0x2c8338u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8302); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_2c833c:
    // 0x2c833c: 0x657475  .word       0x00657475                   # INVALID     $v1, $a1, 0x7475 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c833cu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x2C833C raw=0x00657475");
 /* MITIGATED */
label_2c8340:
    // 0x2c8340: 0x63616c42  daddi       $at, $k1, 0x6C42
    ctx->pc = 0x2c8340u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)27714; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, res); }
label_2c8344:
    // 0x2c8344: 0x6853206b  ldl         $s3, 0x206B($v0)
    ctx->pc = 0x2c8344u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8299); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem << shift)); }
label_2c8348:
    // 0x2c8348: 0x776f6461  .word       0x776F6461                   # INVALID     $k1, $t7, 0x6461 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c8348u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C8348 raw=0x776F6461");
 /* MITIGATED */
label_2c834c:
    // 0x2c834c: 0x0  nop
    ctx->pc = 0x2c834cu;
    // NOP
label_2c8350:
    // 0x2c8350: 0x7265764f  .word       0x7265764F                   # INVALID     $s3, $a1, 0x764F # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c8350u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0xF at 0x2C8350 raw=0x7265764F");
 /* MITIGATED */
label_2c8354:
    // 0x2c8354: 0x64726f6c  daddiu      $s2, $v1, 0x6F6C
    ctx->pc = 0x2c8354u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)28524);
label_2c8358:
    // 0x2c8358: 0x0  nop
    ctx->pc = 0x2c8358u;
    // NOP
label_2c835c:
    // 0x2c835c: 0x0  nop
    ctx->pc = 0x2c835cu;
    // NOP
label_2c8360:
    // 0x2c8360: 0x62756f44  daddi       $s5, $s3, 0x6F44
    ctx->pc = 0x2c8360u;
    { int64_t src = (int64_t)GPR_S64(ctx, 19); int64_t imm = (int64_t)(int32_t)28484; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 21, res); }
label_2c8364:
    // 0x2c8364: 0x4320656c  .word       0x4320656C                   # INVALID     $t9, $zero, 0x656C # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2c8364u;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x2C8364 raw=0x4320656C");
 /* MITIGATED */
label_2c8368:
    // 0x2c8368: 0x74656d6f  .word       0x74656D6F                   # INVALID     $v1, $a1, 0x6D6F # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c8368u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C8368 raw=0x74656D6F");
 /* MITIGATED */
label_2c836c:
    // 0x2c836c: 0x0  nop
    ctx->pc = 0x2c836cu;
    // NOP
label_2c8370:
    // 0x2c8370: 0x6e726f54  ldr         $s2, 0x6F54($s3)
    ctx->pc = 0x2c8370u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28500); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
label_2c8374:
    // 0x2c8374: 0x206f6461  addi        $t7, $v1, 0x6461
    ctx->pc = 0x2c8374u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)25697, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 15, (int32_t)tmp); }
label_2c8378:
    // 0x2c8378: 0x66617453  daddiu      $at, $s3, 0x7453
    ctx->pc = 0x2c8378u;
    SET_GPR_S64(ctx, 1, (int64_t)GPR_S64(ctx, 19) + (int64_t)(int32_t)29779);
label_2c837c:
    // 0x2c837c: 0x66  .word       0x00000066                   # xor         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c837cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_2c8380:
    // 0x2c8380: 0x676e694b  daddiu      $t6, $k1, 0x694B
    ctx->pc = 0x2c8380u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)26955);
label_2c8384:
    // 0x2c8384: 0x20666f20  addi        $a2, $v1, 0x6F20
    ctx->pc = 0x2c8384u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28448, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 6, (int32_t)tmp); }
label_2c8388:
    // 0x2c8388: 0x73616542  .word       0x73616542                   # INVALID     $k1, $at, 0x6542 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c8388u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 27) * (int64_t)GPR_S32(ctx, 1); int64_t result = acc - prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 12, (int32_t)result); }
label_2c838c:
    // 0x2c838c: 0x7374  teq         $zero, $zero, 461
    ctx->pc = 0x2c838cu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2c8390:
    // 0x2c8390: 0x6d67614d  ldr         $a3, 0x614D($t3)
    ctx->pc = 0x2c8390u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 24909); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_2c8394:
    // 0x2c8394: 0x68572061  ldl         $s7, 0x2061($v0)
    ctx->pc = 0x2c8394u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8289); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 23, (GPR_U64(ctx, 23) & keepMask) | (mem << shift)); }
label_2c8398:
    // 0x2c8398: 0x6c6565  .word       0x006C6565                   # or          $t4, $v1, $t4 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c8398u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 3) | GPR_U64(ctx, 12));
label_2c839c:
    // 0x2c839c: 0x0  nop
    ctx->pc = 0x2c839cu;
    // NOP
label_2c83a0:
    // 0x2c83a0: 0x65757254  daddiu      $s5, $t3, 0x7254
    ctx->pc = 0x2c83a0u;
    SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29268);
label_2c83a4:
    // 0x2c83a4: 0x61654220  daddi       $a1, $t3, 0x4220
    ctx->pc = 0x2c83a4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)16928; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
label_2c83a8:
    // 0x2c83a8: 0x797475  .word       0x00797475                   # INVALID     $v1, $t9, 0x7475 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c83a8u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x2C83A8 raw=0x00797475");
 /* MITIGATED */
label_2c83ac:
    // 0x2c83ac: 0x0  nop
    ctx->pc = 0x2c83acu;
    // NOP
label_2c83b0:
    // 0x2c83b0: 0x65757254  daddiu      $s5, $t3, 0x7254
    ctx->pc = 0x2c83b0u;
    SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29268);
label_2c83b4:
    // 0x2c83b4: 0x61724720  daddi       $s2, $t3, 0x4720
    ctx->pc = 0x2c83b4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)18208; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, res); }
label_2c83b8:
    // 0x2c83b8: 0x6563  .word       0x00006563                   # negu        $t4, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c83b8u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2c83bc:
    // 0x2c83bc: 0x0  nop
    ctx->pc = 0x2c83bcu;
    // NOP
label_2c83c0:
    // 0x2c83c0: 0x58207546  blezl       $at, . + 4 + (0x7546 << 2)
label_2c83c4:
    if (ctx->pc == 0x2C83C4u) {
        ctx->pc = 0x2C83C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C83C0u;
        // 0x2c83c4: 0x20732769  addi        $s3, $v1, 0x2769 (Delay Slot)
        { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)10089, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 19, (int32_t)tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C83C8u;
        goto label_2c83c8;
    }
    ctx->pc = 0x2C83C0u;
    {
        const bool branch_taken_0x2c83c0 = (GPR_S32(ctx, 1) <= 0);
        if (branch_taken_0x2c83c0) {
            ctx->pc = 0x2C83C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C83C0u;
            // 0x2c83c4: 0x20732769  addi        $s3, $v1, 0x2769 (Delay Slot)
            { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)10089, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 19, (int32_t)tmp); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E58DCu;
            return;
        }
    }
    ctx->pc = 0x2C83C8u;
label_2c83c8:
    // 0x2c83c8: 0x726f7753  .word       0x726F7753                   # mtlo1       $s3 # 000F7740 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c83c8u;
    ctx->lo1 = GPR_U64(ctx, 19);
label_2c83cc:
    // 0x2c83cc: 0x64  .word       0x00000064                   # and         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c83ccu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_2c83d0:
    // 0x2c83d0: 0x5720754e  bnel        $t9, $zero, . + 4 + (0x754E << 2)
label_2c83d4:
    if (ctx->pc == 0x2C83D4u) {
        ctx->pc = 0x2C83D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C83D0u;
        // 0x2c83d4: 0x20732761  addi        $s3, $v1, 0x2761 (Delay Slot)
        { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)10081, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 19, (int32_t)tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C83D8u;
        goto label_2c83d8;
    }
    ctx->pc = 0x2C83D0u;
    {
        const bool branch_taken_0x2c83d0 = (GPR_U64(ctx, 25) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c83d0) {
            ctx->pc = 0x2C83D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C83D0u;
            // 0x2c83d4: 0x20732761  addi        $s3, $v1, 0x2761 (Delay Slot)
            { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)10081, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 19, (int32_t)tmp); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E590Cu;
            return;
        }
    }
    ctx->pc = 0x2C83D8u;
label_2c83d8:
    // 0x2c83d8: 0x69706152  ldl         $s0, 0x6152($t3)
    ctx->pc = 0x2c83d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 24914); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem << shift)); }
label_2c83dc:
    // 0x2c83dc: 0x7265  .word       0x00007265                   # move        $t6, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c83dcu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_2c83e0:
    // 0x2c83e0: 0x20726157  addi        $s2, $v1, 0x6157
    ctx->pc = 0x2c83e0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)24919, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 18, (int32_t)tmp); }
label_2c83e4:
    // 0x2c83e4: 0x67617244  daddiu      $at, $k1, 0x7244
    ctx->pc = 0x2c83e4u;
    SET_GPR_S64(ctx, 1, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)29252);
label_2c83e8:
    // 0x2c83e8: 0x6e6f  .word       0x00006E6F                   # dsubu       $t5, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c83e8u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_2c83ec:
    // 0x2c83ec: 0x0  nop
    ctx->pc = 0x2c83ecu;
    // NOP
label_2c83f0:
    // 0x2c83f0: 0x69766944  ldl         $s6, 0x6944($t3)
    ctx->pc = 0x2c83f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 26948); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 22, (GPR_U64(ctx, 22) & keepMask) | (mem << shift)); }
label_2c83f4:
    // 0x2c83f4: 0x4420656e  .word       0x4420656E                   # dmfc1       $zero, $f12 # 0000056E <InstrIdType: R5900_COP1>
    ctx->pc = 0x2c83f4u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x1, function 0x2E at 0x2C83F4 raw=0x4420656E");
 /* MITIGATED */
label_2c83f8:
    // 0x2c83f8: 0x6f676172  ldr         $a3, 0x6172($k1)
    ctx->pc = 0x2c83f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 24946); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_2c83fc:
    // 0x2c83fc: 0x6e  .word       0x0000006E                   # dsub        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c83fcu;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2c8400:
    // 0x2c8400: 0x70726553  .word       0x70726553                   # mtlo1       $v1 # 00126540 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c8400u;
    ctx->lo1 = GPR_U64(ctx, 3);
label_2c8404:
    // 0x2c8404: 0x20746e65  addi        $s4, $v1, 0x6E65
    ctx->pc = 0x2c8404u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28261, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 20, (int32_t)tmp); }
label_2c8408:
    // 0x2c8408: 0x64616c42  daddiu      $at, $v1, 0x6C42
    ctx->pc = 0x2c8408u;
    SET_GPR_S64(ctx, 1, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)27714);
label_2c840c:
    // 0x2c840c: 0x65  .word       0x00000065                   # move        $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c840cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_2c8410:
    // 0x2c8410: 0x706d6554  .word       0x706D6554                   # INVALID     $v1, $t5, 0x6554 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c8410u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x14 at 0x2C8410 raw=0x706D6554");
 /* MITIGATED */
label_2c8414:
    // 0x2c8414: 0x20747365  addi        $s4, $v1, 0x7365
    ctx->pc = 0x2c8414u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)29541, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 20, (int32_t)tmp); }
label_2c8418:
    // 0x2c8418: 0x726f7753  .word       0x726F7753                   # mtlo1       $s3 # 000F7740 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c8418u;
    ctx->lo1 = GPR_U64(ctx, 19);
label_2c841c:
    // 0x2c841c: 0x64  .word       0x00000064                   # and         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c841cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_2c8420:
    // 0x2c8420: 0x73616542  .word       0x73616542                   # INVALID     $k1, $at, 0x6542 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c8420u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 27) * (int64_t)GPR_S32(ctx, 1); int64_t result = acc - prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 12, (int32_t)result); }
label_2c8424:
    // 0x2c8424: 0x78412074  lq          $at, 0x2074($v0)
    ctx->pc = 0x2c8424u;
    SET_GPR_VEC(ctx, 1, READ128(ADD32(GPR_U32(ctx, 2), 8308)));
label_2c8428:
    // 0x2c8428: 0x65  .word       0x00000065                   # move        $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c8428u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_2c842c:
    // 0x2c842c: 0x0  nop
    ctx->pc = 0x2c842cu;
    // NOP
label_2c8430:
    // 0x2c8430: 0x74726145  .word       0x74726145                   # INVALID     $v1, $s2, 0x6145 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c8430u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C8430 raw=0x74726145");
 /* MITIGATED */
label_2c8434:
    // 0x2c8434: 0x20796c68  addi        $t9, $v1, 0x6C68
    ctx->pc = 0x2c8434u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)27752, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 25, (int32_t)tmp); }
label_2c8438:
    // 0x2c8438: 0x6563614d  daddiu      $v1, $t3, 0x614D
    ctx->pc = 0x2c8438u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24909);
label_2c843c:
    // 0x2c843c: 0x0  nop
    ctx->pc = 0x2c843cu;
    // NOP
label_2c8440:
    // 0x2c8440: 0x65646c45  daddiu      $a0, $t3, 0x6C45
    ctx->pc = 0x2c8440u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)27717);
label_2c8444:
    // 0x2c8444: 0x6f4d2072  ldr         $t5, 0x2072($k0)
    ctx->pc = 0x2c8444u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 26), 8306); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
label_2c8448:
    // 0x2c8448: 0x6e6f  .word       0x00006E6F                   # dsubu       $t5, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c8448u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_2c844c:
    // 0x2c844c: 0x0  nop
    ctx->pc = 0x2c844cu;
    // NOP
label_2c8450:
    // 0x2c8450: 0x73616c46  .word       0x73616C46                   # INVALID     $k1, $at, 0x6C46 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c8450u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x6 at 0x2C8450 raw=0x73616C46");
 /* MITIGATED */
label_2c8454:
    // 0x2c8454: 0x6c422068  ldr         $v0, 0x2068($v0)
    ctx->pc = 0x2c8454u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8296); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_2c8458:
    // 0x2c8458: 0x656461  .word       0x00656461                   # addu        $t4, $v1, $a1 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c8458u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2c845c:
    // 0x2c845c: 0x0  nop
    ctx->pc = 0x2c845cu;
    // NOP
label_2c8460:
    // 0x2c8460: 0x65676954  daddiu      $a3, $t3, 0x6954
    ctx->pc = 0x2c8460u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)26964);
label_2c8464:
    // 0x2c8464: 0x6f572072  ldr         $s7, 0x2072($k0)
    ctx->pc = 0x2c8464u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 26), 8306); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 23, (GPR_U64(ctx, 23) & keepMask) | (mem >> shift)); }
label_2c8468:
    // 0x2c8468: 0x666c  .word       0x0000666C                   # dadd        $t4, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c8468u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, r); }
label_2c846c:
    // 0x2c846c: 0x0  nop
    ctx->pc = 0x2c846cu;
    // NOP
label_2c8470:
    // 0x2c8470: 0x65706d49  daddiu      $s0, $t3, 0x6D49
    ctx->pc = 0x2c8470u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)27977);
label_2c8474:
    // 0x2c8474: 0x6c616972  ldr         $at, 0x6972($v1)
    ctx->pc = 0x2c8474u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 26994); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2c8478:
    // 0x2c8478: 0x63614d20  daddi       $at, $k1, 0x4D20
    ctx->pc = 0x2c8478u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)19744; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, res); }
label_2c847c:
    // 0x2c847c: 0x65  .word       0x00000065                   # move        $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c847cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_2c8480:
    // 0x2c8480: 0x66697247  daddiu      $t1, $s3, 0x7247
    ctx->pc = 0x2c8480u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 19) + (int64_t)(int32_t)29255);
label_2c8484:
    // 0x2c8484: 0x206e6966  addi        $t6, $v1, 0x6966
    ctx->pc = 0x2c8484u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26982, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 14, (int32_t)tmp); }
label_2c8488:
    // 0x2c8488: 0x74616546  .word       0x74616546                   # INVALID     $v1, $at, 0x6546 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c8488u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C8488 raw=0x74616546");
 /* MITIGATED */
label_2c848c:
    // 0x2c848c: 0x726568  .word       0x00726568                   # mfsa        $t4 # 00720540 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c848cu;
    SET_GPR_U32(ctx, 12, ctx->sa);
label_2c8490:
    // 0x2c8490: 0x65756c42  daddiu      $s5, $t3, 0x6C42
    ctx->pc = 0x2c8490u;
    SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)27714);
label_2c8494:
    // 0x2c8494: 0x65745320  daddiu      $s4, $t3, 0x5320
    ctx->pc = 0x2c8494u;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)21280);
label_2c8498:
    // 0x2c8498: 0x6c65  .word       0x00006C65                   # move        $t5, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c8498u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_2c849c:
    // 0x2c849c: 0x0  nop
    ctx->pc = 0x2c849cu;
    // NOP
label_2c84a0:
    // 0x2c84a0: 0x6f6d6544  ldr         $t5, 0x6544($k1)
    ctx->pc = 0x2c84a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 25924); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
label_2c84a4:
    // 0x2c84a4: 0x6c53206e  ldr         $s3, 0x206E($v0)
    ctx->pc = 0x2c84a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8302); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem >> shift)); }
label_2c84a8:
    // 0x2c84a8: 0x72657961  .word       0x72657961                   # maddu1      $t7, $s3, $a1 # 00000140 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c84a8u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); uint64_t prod = (uint64_t)GPR_U32(ctx, 19) * (uint64_t)GPR_U32(ctx, 5); uint64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 15, (int32_t)result); }
label_2c84ac:
    // 0x2c84ac: 0x0  nop
    ctx->pc = 0x2c84acu;
    // NOP
label_2c84b0:
    // 0x2c84b0: 0x67617244  daddiu      $at, $k1, 0x7244
    ctx->pc = 0x2c84b0u;
    SET_GPR_S64(ctx, 1, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)29252);
label_2c84b4:
    // 0x2c84b4: 0x43206e6f  .word       0x43206E6F                   # INVALID     $t9, $zero, 0x6E6F # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2c84b4u;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x2C84B4 raw=0x43206E6F");
 /* MITIGATED */
label_2c84b8:
    // 0x2c84b8: 0x726b6168  .word       0x726B6168                   # pabsh       $t4, $t3 # 02600000 <InstrIdType: R5900_MMI_1>
    ctx->pc = 0x2c84b8u;
    SET_GPR_VEC(ctx, 12, PS2_PABSH(GPR_VEC(ctx, 19)));
label_2c84bc:
    // 0x2c84bc: 0x6d61  .word       0x00006D61                   # addu        $t5, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c84bcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2c84c0:
    // 0x2c84c0: 0x67617244  daddiu      $at, $k1, 0x7244
    ctx->pc = 0x2c84c0u;
    SET_GPR_S64(ctx, 1, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)29252);
label_2c84c4:
    // 0x2c84c4: 0x53206e6f  beql        $t9, $zero, . + 4 + (0x6E6F << 2)
label_2c84c8:
    if (ctx->pc == 0x2C84C8u) {
        ctx->pc = 0x2C84C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C84C4u;
        // 0x2c84c8: 0x726174  teq         $v1, $s2, 389 (Delay Slot)
        if (GPR_U64(ctx, 3) == GPR_U64(ctx, 18)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C84CCu;
        goto label_2c84cc;
    }
    ctx->pc = 0x2C84C4u;
    {
        const bool branch_taken_0x2c84c4 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c84c4) {
            ctx->pc = 0x2C84C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C84C4u;
            // 0x2c84c8: 0x726174  teq         $v1, $s2, 389 (Delay Slot)
            if (GPR_U64(ctx, 3) == GPR_U64(ctx, 18)) { runtime->handleTrap(rdram, ctx); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E3E84u;
            return;
        }
    }
    ctx->pc = 0x2C84CCu;
label_2c84cc:
    // 0x2c84cc: 0x0  nop
    ctx->pc = 0x2c84ccu;
    // NOP
label_2c84d0:
    // 0x2c84d0: 0x666c6f57  daddiu      $t4, $s3, 0x6F57
    ctx->pc = 0x2c84d0u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 19) + (int64_t)(int32_t)28503);
label_2c84d4:
    // 0x2c84d4: 0x616c4220  daddi       $t4, $t3, 0x4220
    ctx->pc = 0x2c84d4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)16928; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, res); }
label_2c84d8:
    // 0x2c84d8: 0x6564  .word       0x00006564                   # and         $t4, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c84d8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_2c84dc:
    // 0x2c84dc: 0x0  nop
    ctx->pc = 0x2c84dcu;
    // NOP
label_2c84e0:
    // 0x2c84e0: 0x76616548  .word       0x76616548                   # INVALID     $s3, $at, 0x6548 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c84e0u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C84E0 raw=0x76616548");
 /* MITIGATED */
label_2c84e4:
    // 0x2c84e4: 0x796c6e65  lq          $t4, 0x6E65($t3)
    ctx->pc = 0x2c84e4u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 11), 28261)));
label_2c84e8:
    // 0x2c84e8: 0x6c6f5720  ldr         $t7, 0x5720($v1)
    ctx->pc = 0x2c84e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 22304); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_2c84ec:
    // 0x2c84ec: 0x66  .word       0x00000066                   # xor         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c84ecu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_2c84f0:
    // 0x2c84f0: 0x63616c42  daddi       $at, $k1, 0x6C42
    ctx->pc = 0x2c84f0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)27714; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, res); }
label_2c84f4:
    // 0x2c84f4: 0x7453206b  .word       0x7453206B                   # INVALID     $v0, $s3, 0x206B # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c84f4u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C84F4 raw=0x7453206B");
 /* MITIGATED */
label_2c84f8:
    // 0x2c84f8: 0x6c6565  .word       0x006C6565                   # or          $t4, $v1, $t4 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c84f8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 3) | GPR_U64(ctx, 12));
label_2c84fc:
    // 0x2c84fc: 0x0  nop
    ctx->pc = 0x2c84fcu;
    // NOP
label_2c8500:
    // 0x2c8500: 0x65706d49  daddiu      $s0, $t3, 0x6D49
    ctx->pc = 0x2c8500u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)27977);
label_2c8504:
    // 0x2c8504: 0x6c616972  ldr         $at, 0x6972($v1)
    ctx->pc = 0x2c8504u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 26994); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2c8508:
    // 0x2c8508: 0x62615320  daddi       $at, $s3, 0x5320
    ctx->pc = 0x2c8508u;
    { int64_t src = (int64_t)GPR_S64(ctx, 19); int64_t imm = (int64_t)(int32_t)21280; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, res); }
label_2c850c:
    // 0x2c850c: 0x7265  .word       0x00007265                   # move        $t6, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c850cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_2c8510:
    // 0x2c8510: 0x6867694c  ldl         $a3, 0x694C($v1)
    ctx->pc = 0x2c8510u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 26956); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_2c8514:
    // 0x2c8514: 0x6e696e74  ldr         $t1, 0x6E74($s3)
    ctx->pc = 0x2c8514u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28276); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_2c8518:
    // 0x2c8518: 0x70532067  .word       0x70532067                   # INVALID     $v0, $s3, 0x2067 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c8518u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x27 at 0x2C8518 raw=0x70532067");
 /* MITIGATED */
label_2c851c:
    // 0x2c851c: 0x726165  .word       0x00726165                   # or          $t4, $v1, $s2 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c851cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
label_2c8520:
    // 0x2c8520: 0x7473794d  .word       0x7473794D                   # INVALID     $v1, $s3, 0x794D # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c8520u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C8520 raw=0x7473794D");
 /* MITIGATED */
label_2c8524:
    // 0x2c8524: 0x42206369  .word       0x42206369                   # INVALID     $s1, $zero, 0x6369 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2c8524u;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x2C8524 raw=0x42206369");
 /* MITIGATED */
label_2c8528:
    // 0x2c8528: 0x6564616c  daddiu      $a0, $t3, 0x616C
    ctx->pc = 0x2c8528u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24940);
label_2c852c:
    // 0x2c852c: 0x0  nop
    ctx->pc = 0x2c852cu;
    // NOP
label_2c8530:
    // 0x2c8530: 0x7473794d  .word       0x7473794D                   # INVALID     $v1, $s3, 0x794D # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c8530u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C8530 raw=0x7473794D");
 /* MITIGATED */
label_2c8534:
    // 0x2c8534: 0x46206369  .word       0x46206369                   # INVALID     $s1, $zero, 0x6369 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2c8534u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x11, function 0x29 at 0x2C8534 raw=0x46206369");
 /* MITIGATED */
label_2c8538:
    // 0x2c8538: 0x676e61  .word       0x00676E61                   # addu        $t5, $v1, $a3 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c8538u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_2c853c:
    // 0x2c853c: 0x0  nop
    ctx->pc = 0x2c853cu;
    // NOP
label_2c8540:
    // 0x2c8540: 0x67617244  daddiu      $at, $k1, 0x7244
    ctx->pc = 0x2c8540u;
    SET_GPR_S64(ctx, 1, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)29252);
label_2c8544:
    // 0x2c8544: 0x47206e6f  .word       0x47206E6F                   # INVALID     $t9, $zero, 0x6E6F # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2c8544u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x19, function 0x2F at 0x2C8544 raw=0x47206E6F");
 /* MITIGATED */
label_2c8548:
    // 0x2c8548: 0x646f  .word       0x0000646F                   # dsubu       $t4, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c8548u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_2c854c:
    // 0x2c854c: 0x0  nop
    ctx->pc = 0x2c854cu;
    // NOP
label_2c8550:
    // 0x2c8550: 0x65766152  daddiu      $s6, $t3, 0x6152
    ctx->pc = 0x2c8550u;
    SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24914);
label_2c8554:
    // 0x2c8554: 0x6546206e  daddiu      $a2, $t2, 0x206E
    ctx->pc = 0x2c8554u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)8302);
label_2c8558:
    // 0x2c8558: 0x65687461  daddiu      $t0, $t3, 0x7461
    ctx->pc = 0x2c8558u;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29793);
label_2c855c:
    // 0x2c855c: 0x72  tlt         $zero, $zero, 1
    ctx->pc = 0x2c855cu;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2c8560:
    // 0x2c8560: 0x68676946  ldl         $a3, 0x6946($v1)
    ctx->pc = 0x2c8560u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 26950); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_2c8564:
    // 0x2c8564: 0x676e6974  daddiu      $t6, $k1, 0x6974
    ctx->pc = 0x2c8564u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)26996);
label_2c8568:
    // 0x2c8568: 0x67695420  daddiu      $t1, $k1, 0x5420
    ctx->pc = 0x2c8568u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)21536);
label_2c856c:
    // 0x2c856c: 0x7265  .word       0x00007265                   # move        $t6, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c856cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_2c8570:
    // 0x2c8570: 0x65766553  daddiu      $s6, $t3, 0x6553
    ctx->pc = 0x2c8570u;
    SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25939);
label_2c8574:
    // 0x2c8574: 0x6553206e  daddiu      $s3, $t2, 0x206E
    ctx->pc = 0x2c8574u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)8302);
label_2c8578:
    // 0x2c8578: 0x42207361  .word       0x42207361                   # INVALID     $s1, $zero, 0x7361 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2c8578u;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x2C8578 raw=0x42207361");
 /* MITIGATED */
label_2c857c:
    // 0x2c857c: 0x6564616c  daddiu      $a0, $t3, 0x616C
    ctx->pc = 0x2c857cu;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24940);
label_2c8580:
    // 0x2c8580: 0x0  nop
    ctx->pc = 0x2c8580u;
    // NOP
label_2c8584:
    // 0x2c8584: 0x0  nop
    ctx->pc = 0x2c8584u;
    // NOP
label_2c8588:
    // 0x2c8588: 0x72617453  .word       0x72617453                   # mtlo1       $s3 # 00017440 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c8588u;
    ctx->lo1 = GPR_U64(ctx, 19);
label_2c858c:
    // 0x2c858c: 0x6867696c  ldl         $a3, 0x696C($v1)
    ctx->pc = 0x2c858cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 26988); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_2c8590:
    // 0x2c8590: 0x69502074  ldl         $s0, 0x2074($t2)
    ctx->pc = 0x2c8590u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 8308); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem << shift)); }
label_2c8594:
    // 0x2c8594: 0x656b  .word       0x0000656B                   # sltu        $t4, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c8594u;
    SET_GPR_U64(ctx, 12, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_2c8598:
    // 0x2c8598: 0x6e756854  ldr         $s5, 0x6854($s3)
    ctx->pc = 0x2c8598u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26708); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 21, (GPR_U64(ctx, 21) & keepMask) | (mem >> shift)); }
label_2c859c:
    // 0x2c859c: 0x20726564  addi        $s2, $v1, 0x6564
    ctx->pc = 0x2c859cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)25956, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 18, (int32_t)tmp); }
label_2c85a0:
    // 0x2c85a0: 0x66617453  daddiu      $at, $s3, 0x7453
    ctx->pc = 0x2c85a0u;
    SET_GPR_S64(ctx, 1, (int64_t)GPR_S64(ctx, 19) + (int64_t)(int32_t)29779);
label_2c85a4:
    // 0x2c85a4: 0x66  .word       0x00000066                   # xor         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c85a4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_2c85a8:
    // 0x2c85a8: 0x65676954  daddiu      $a3, $t3, 0x6954
    ctx->pc = 0x2c85a8u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)26964);
label_2c85ac:
    // 0x2c85ac: 0x61462072  daddi       $a2, $t2, 0x2072
    ctx->pc = 0x2c85acu;
    { int64_t src = (int64_t)GPR_S64(ctx, 10); int64_t imm = (int64_t)(int32_t)8306; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 6, res); }
label_2c85b0:
    // 0x2c85b0: 0x676e  .word       0x0000676E                   # dsub        $t4, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c85b0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, r); }
label_2c85b4:
    // 0x2c85b4: 0x0  nop
    ctx->pc = 0x2c85b4u;
    // NOP
label_2c85b8:
    // 0x2c85b8: 0x656f6850  daddiu      $t7, $t3, 0x6850
    ctx->pc = 0x2c85b8u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)26704);
label_2c85bc:
    // 0x2c85bc: 0x2078696e  addi        $t8, $v1, 0x696E
    ctx->pc = 0x2c85bcu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26990, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 24, (int32_t)tmp); }
label_2c85c0:
    // 0x2c85c0: 0x6f6c6154  ldr         $t4, 0x6154($k1)
    ctx->pc = 0x2c85c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 24916); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_2c85c4:
    // 0x2c85c4: 0x6e  .word       0x0000006E                   # dsub        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c85c4u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2c85c8:
    // 0x2c85c8: 0x0  nop
    ctx->pc = 0x2c85c8u;
    // NOP
label_2c85cc:
    // 0x2c85cc: 0x0  nop
    ctx->pc = 0x2c85ccu;
    // NOP
label_2c85d0:
    // 0x2c85d0: 0x666c6148  daddiu      $t4, $s3, 0x6148
    ctx->pc = 0x2c85d0u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 19) + (int64_t)(int32_t)24904);
label_2c85d4:
    // 0x2c85d4: 0x6f6f4d20  ldr         $t7, 0x4D20($k1)
    ctx->pc = 0x2c85d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 19744); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_2c85d8:
    // 0x2c85d8: 0x6c46206e  ldr         $a2, 0x206E($v0)
    ctx->pc = 0x2c85d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8302); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_2c85dc:
    // 0x2c85dc: 0x657475  .word       0x00657475                   # INVALID     $v1, $a1, 0x7475 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c85dcu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x2C85DC raw=0x00657475");
 /* MITIGATED */
label_2c85e0:
    // 0x2c85e0: 0x6b697053  ldl         $t1, 0x7053($k1)
    ctx->pc = 0x2c85e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 28755); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
label_2c85e4:
    // 0x2c85e4: 0x4d206465  .word       0x4D206465                   # INVALID     $t1, $zero, 0x6465 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c85e4u;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x2C85E4 raw=0x4D206465");
 /* MITIGATED */
label_2c85e8:
    // 0x2c85e8: 0x656361  .word       0x00656361                   # addu        $t4, $v1, $a1 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c85e8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2c85ec:
    // 0x2c85ec: 0x0  nop
    ctx->pc = 0x2c85ecu;
    // NOP
label_2c85f0:
    // 0x2c85f0: 0x20646f47  addi        $a0, $v1, 0x6F47
    ctx->pc = 0x2c85f0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28487, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_2c85f4:
    // 0x2c85f4: 0x5720666f  bnel        $t9, $zero, . + 4 + (0x666F << 2)
label_2c85f8:
    if (ctx->pc == 0x2C85F8u) {
        ctx->pc = 0x2C85F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C85F4u;
        // 0x2c85f8: 0x7261  .word       0x00007261                   # addu        $t6, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C85FCu;
        goto label_2c85fc;
    }
    ctx->pc = 0x2C85F4u;
    {
        const bool branch_taken_0x2c85f4 = (GPR_U64(ctx, 25) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c85f4) {
            ctx->pc = 0x2C85F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C85F4u;
            // 0x2c85f8: 0x7261  .word       0x00007261                   # addu        $t6, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E1FB4u;
            return;
        }
    }
    ctx->pc = 0x2C85FCu;
label_2c85fc:
    // 0x2c85fc: 0x0  nop
    ctx->pc = 0x2c85fcu;
    // NOP
label_2c8600:
    // 0x2c8600: 0x6e697754  ldr         $t1, 0x7754($s3)
    ctx->pc = 0x2c8600u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 30548); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_2c8604:
    // 0x2c8604: 0x61745320  daddi       $s4, $t3, 0x5320
    ctx->pc = 0x2c8604u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)21280; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
label_2c8608:
    // 0x2c8608: 0x7372  tlt         $zero, $zero, 461
    ctx->pc = 0x2c8608u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2c860c:
    // 0x2c860c: 0x0  nop
    ctx->pc = 0x2c860cu;
    // NOP
label_2c8610:
    // 0x2c8610: 0x6867694c  ldl         $a3, 0x694C($v1)
    ctx->pc = 0x2c8610u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 26956); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_2c8614:
    // 0x2c8614: 0x6e696e74  ldr         $t1, 0x6E74($s3)
    ctx->pc = 0x2c8614u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28276); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_2c8618:
    // 0x2c8618: 0x74532067  .word       0x74532067                   # INVALID     $v0, $s3, 0x2067 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c8618u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C8618 raw=0x74532067");
 /* MITIGATED */
label_2c861c:
    // 0x2c861c: 0x666661  .word       0x00666661                   # addu        $t4, $v1, $a2 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c861cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_2c8620:
    // 0x2c8620: 0x64616853  daddiu      $at, $v1, 0x6853
    ctx->pc = 0x2c8620u;
    SET_GPR_S64(ctx, 1, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)26707);
label_2c8624:
    // 0x2c8624: 0x4220776f  .word       0x4220776F                   # INVALID     $s1, $zero, 0x776F # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2c8624u;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x2C8624 raw=0x4220776F");
 /* MITIGATED */
label_2c8628:
    // 0x2c8628: 0x74736165  .word       0x74736165                   # INVALID     $v1, $s3, 0x6165 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c8628u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C8628 raw=0x74736165");
 /* MITIGATED */
label_2c862c:
    // 0x2c862c: 0x0  nop
    ctx->pc = 0x2c862cu;
    // NOP
label_2c8630:
    // 0x2c8630: 0x20697254  addi        $t1, $v1, 0x7254
    ctx->pc = 0x2c8630u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)29268, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 9, (int32_t)tmp); }
label_2c8634:
    // 0x2c8634: 0x64616c42  daddiu      $at, $v1, 0x6C42
    ctx->pc = 0x2c8634u;
    SET_GPR_S64(ctx, 1, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)27714);
label_2c8638:
    // 0x2c8638: 0x65  .word       0x00000065                   # move        $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c8638u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_2c863c:
    // 0x2c863c: 0x0  nop
    ctx->pc = 0x2c863cu;
    // NOP
label_2c8640:
    // 0x2c8640: 0x6c6c6559  ldr         $t4, 0x6559($v1)
    ctx->pc = 0x2c8640u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 25945); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_2c8644:
    // 0x2c8644: 0x4220776f  .word       0x4220776F                   # INVALID     $s1, $zero, 0x776F # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2c8644u;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x2C8644 raw=0x4220776F");
 /* MITIGATED */
label_2c8648:
    // 0x2c8648: 0x74756165  .word       0x74756165                   # INVALID     $v1, $s5, 0x6165 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c8648u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C8648 raw=0x74756165");
 /* MITIGATED */
label_2c864c:
    // 0x2c864c: 0x79  .word       0x00000079                   # INVALID     $zero, $zero, 0x79 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c864cu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x2C864C raw=0x00000079");
 /* MITIGATED */
label_2c8650:
    // 0x2c8650: 0x65756c42  daddiu      $s5, $t3, 0x6C42
    ctx->pc = 0x2c8650u;
    SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)27714);
label_2c8654:
    // 0x2c8654: 0x61724720  daddi       $s2, $t3, 0x4720
    ctx->pc = 0x2c8654u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)18208; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, res); }
label_2c8658:
    // 0x2c8658: 0x6563  .word       0x00006563                   # negu        $t4, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c8658u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2c865c:
    // 0x2c865c: 0x0  nop
    ctx->pc = 0x2c865cu;
    // NOP
label_2c8660:
    // 0x2c8660: 0x67617244  daddiu      $at, $k1, 0x7244
    ctx->pc = 0x2c8660u;
    SET_GPR_S64(ctx, 1, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)29252);
label_2c8664:
    // 0x2c8664: 0x53206e6f  beql        $t9, $zero, . + 4 + (0x6E6F << 2)
label_2c8668:
    if (ctx->pc == 0x2C8668u) {
        ctx->pc = 0x2C8668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8664u;
        // 0x2c8668: 0x6579616c  daddiu      $t9, $t3, 0x616C (Delay Slot)
        SET_GPR_S64(ctx, 25, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24940);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C866Cu;
        goto label_2c866c;
    }
    ctx->pc = 0x2C8664u;
    {
        const bool branch_taken_0x2c8664 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8664) {
            ctx->pc = 0x2C8668u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8664u;
            // 0x2c8668: 0x6579616c  daddiu      $t9, $t3, 0x616C (Delay Slot)
            SET_GPR_S64(ctx, 25, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24940);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E4024u;
            return;
        }
    }
    ctx->pc = 0x2C866Cu;
label_2c866c:
    // 0x2c866c: 0x72  tlt         $zero, $zero, 1
    ctx->pc = 0x2c866cu;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2c8670:
    // 0x2c8670: 0x67617244  daddiu      $at, $k1, 0x7244
    ctx->pc = 0x2c8670u;
    SET_GPR_S64(ctx, 1, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)29252);
label_2c8674:
    // 0x2c8674: 0x52206e6f  beql        $s1, $zero, . + 4 + (0x6E6F << 2)
label_2c8678:
    if (ctx->pc == 0x2C8678u) {
        ctx->pc = 0x2C8678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8674u;
        // 0x2c8678: 0x65697061  daddiu      $t1, $t3, 0x7061 (Delay Slot)
        SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28769);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C867Cu;
        goto label_2c867c;
    }
    ctx->pc = 0x2C8674u;
    {
        const bool branch_taken_0x2c8674 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8674) {
            ctx->pc = 0x2C8678u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8674u;
            // 0x2c8678: 0x65697061  daddiu      $t1, $t3, 0x7061 (Delay Slot)
            SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28769);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E4034u;
            return;
        }
    }
    ctx->pc = 0x2C867Cu;
label_2c867c:
    // 0x2c867c: 0x72  tlt         $zero, $zero, 1
    ctx->pc = 0x2c867cu;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2c8680:
    // 0x2c8680: 0x73657243  .word       0x73657243                   # INVALID     $k1, $a1, 0x7243 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c8680u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); uint64_t prod = (uint64_t)GPR_U32(ctx, 27) * (uint64_t)GPR_U32(ctx, 5); uint64_t result = acc - prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 14, (int32_t)result); }
label_2c8684:
    // 0x2c8684: 0x746e6563  .word       0x746E6563                   # INVALID     $v1, $t6, 0x6563 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c8684u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C8684 raw=0x746E6563");
 /* MITIGATED */
label_2c8688:
    // 0x2c8688: 0x616c4220  daddi       $t4, $t3, 0x4220
    ctx->pc = 0x2c8688u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)16928; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, res); }
label_2c868c:
    // 0x2c868c: 0x6564  .word       0x00006564                   # and         $t4, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c868cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_2c8690:
    // 0x2c8690: 0x676e6f4c  daddiu      $t6, $k1, 0x6F4C
    ctx->pc = 0x2c8690u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)28492);
label_2c8694:
    // 0x2c8694: 0x6b695020  ldl         $t1, 0x5020($k1)
    ctx->pc = 0x2c8694u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 20512); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
label_2c8698:
    // 0x2c8698: 0x65  .word       0x00000065                   # move        $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c8698u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_2c869c:
    // 0x2c869c: 0x0  nop
    ctx->pc = 0x2c869cu;
    // NOP
label_2c86a0:
    // 0x2c86a0: 0x76616548  .word       0x76616548                   # INVALID     $s3, $at, 0x6548 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c86a0u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C86A0 raw=0x76616548");
 /* MITIGATED */
label_2c86a4:
    // 0x2c86a4: 0x796c6e65  lq          $t4, 0x6E65($t3)
    ctx->pc = 0x2c86a4u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 11), 28261)));
label_2c86a8:
    // 0x2c86a8: 0x65705320  daddiu      $s0, $t3, 0x5320
    ctx->pc = 0x2c86a8u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)21280);
label_2c86ac:
    // 0x2c86ac: 0x7261  .word       0x00007261                   # addu        $t6, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c86acu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2c86b0:
    // 0x2c86b0: 0x65676954  daddiu      $a3, $t3, 0x6954
    ctx->pc = 0x2c86b0u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)26964);
label_2c86b4:
    // 0x2c86b4: 0x20732772  addi        $s3, $v1, 0x2772
    ctx->pc = 0x2c86b4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)10098, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 19, (int32_t)tmp); }
label_2c86b8:
    // 0x2c86b8: 0x6e696843  ldr         $t1, 0x6843($s3)
    ctx->pc = 0x2c86b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26691); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_2c86bc:
    // 0x2c86bc: 0x0  nop
    ctx->pc = 0x2c86bcu;
    // NOP
label_2c86c0:
    // 0x2c86c0: 0x6e6f7249  ldr         $t7, 0x7249($s3)
    ctx->pc = 0x2c86c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 29257); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_2c86c4:
    // 0x2c86c4: 0x776f4220  .word       0x776F4220                   # INVALID     $k1, $t7, 0x4220 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c86c4u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C86C4 raw=0x776F4220");
 /* MITIGATED */
label_2c86c8:
    // 0x2c86c8: 0x0  nop
    ctx->pc = 0x2c86c8u;
    // NOP
label_2c86cc:
    // 0x2c86cc: 0x0  nop
    ctx->pc = 0x2c86ccu;
    // NOP
label_2c86d0:
    // 0x2c86d0: 0x65657453  daddiu      $a1, $t3, 0x7453
    ctx->pc = 0x2c86d0u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29779);
label_2c86d4:
    // 0x2c86d4: 0x6f42206c  ldr         $v0, 0x206C($k0)
    ctx->pc = 0x2c86d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 26), 8300); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_2c86d8:
    // 0x2c86d8: 0x77  .word       0x00000077                   # INVALID     $zero, $zero, 0x77 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c86d8u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x2C86D8 raw=0x00000077");
 /* MITIGATED */
label_2c86dc:
    // 0x2c86dc: 0x0  nop
    ctx->pc = 0x2c86dcu;
    // NOP
label_2c86e0:
    // 0x2c86e0: 0x656c6147  daddiu      $t4, $t3, 0x6147
    ctx->pc = 0x2c86e0u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24903);
label_2c86e4:
    // 0x2c86e4: 0x776f4220  .word       0x776F4220                   # INVALID     $k1, $t7, 0x4220 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c86e4u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C86E4 raw=0x776F4220");
 /* MITIGATED */
label_2c86e8:
    // 0x2c86e8: 0x0  nop
    ctx->pc = 0x2c86e8u;
    // NOP
label_2c86ec:
    // 0x2c86ec: 0x0  nop
    ctx->pc = 0x2c86ecu;
    // NOP
label_2c86f0:
    // 0x2c86f0: 0x6e6f7249  ldr         $t7, 0x7249($s3)
    ctx->pc = 0x2c86f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 29257); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_2c86f4:
    // 0x2c86f4: 0x6f724320  ldr         $s2, 0x4320($k1)
    ctx->pc = 0x2c86f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 17184); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
label_2c86f8:
    // 0x2c86f8: 0x6f627373  ldr         $v0, 0x7373($k1)
    ctx->pc = 0x2c86f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 29555); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_2c86fc:
    // 0x2c86fc: 0x77  .word       0x00000077                   # INVALID     $zero, $zero, 0x77 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c86fcu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x2C86FC raw=0x00000077");
 /* MITIGATED */
label_2c8700:
    // 0x2c8700: 0x65657453  daddiu      $a1, $t3, 0x7453
    ctx->pc = 0x2c8700u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29779);
label_2c8704:
    // 0x2c8704: 0x7243206c  .word       0x7243206C                   # INVALID     $s2, $v1, 0x206C # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c8704u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x2C at 0x2C8704 raw=0x7243206C");
 /* MITIGATED */
label_2c8708:
    // 0x2c8708: 0x6273736f  daddi       $s3, $s3, 0x736F
    ctx->pc = 0x2c8708u;
    { int64_t src = (int64_t)GPR_S64(ctx, 19); int64_t imm = (int64_t)(int32_t)29551; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 19, res); }
label_2c870c:
    // 0x2c870c: 0x776f  .word       0x0000776F                   # dsubu       $t6, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c870cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_2c8710:
    // 0x2c8710: 0x646e6957  daddiu      $t6, $v1, 0x6957
    ctx->pc = 0x2c8710u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)26967);
label_2c8714:
    // 0x2c8714: 0x6f724320  ldr         $s2, 0x4320($k1)
    ctx->pc = 0x2c8714u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 17184); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
label_2c8718:
    // 0x2c8718: 0x6f627373  ldr         $v0, 0x7373($k1)
    ctx->pc = 0x2c8718u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 29555); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_2c871c:
    // 0x2c871c: 0x77  .word       0x00000077                   # INVALID     $zero, $zero, 0x77 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c871cu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x2C871C raw=0x00000077");
 /* MITIGATED */
label_2c8720:
    // 0x2c8720: 0x726f7753  .word       0x726F7753                   # mtlo1       $s3 # 000F7740 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c8720u;
    ctx->lo1 = GPR_U64(ctx, 19);
label_2c8724:
    // 0x2c8724: 0x64  .word       0x00000064                   # and         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c8724u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_2c8728:
    // 0x2c8728: 0x656b6950  daddiu      $t3, $t3, 0x6950
    ctx->pc = 0x2c8728u;
    SET_GPR_S64(ctx, 11, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)26960);
label_2c872c:
    // 0x2c872c: 0x0  nop
    ctx->pc = 0x2c872cu;
    // NOP
label_2c8730:
    // 0x2c8730: 0x776f42  .word       0x00776F42                   # srl         $t5, $s7, 29 # 00600000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c8730u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 23), 29));
label_2c8734:
    // 0x2c8734: 0x0  nop
    ctx->pc = 0x2c8734u;
    // NOP
label_2c8738:
    // 0x2c8738: 0x70707553  .word       0x70707553                   # mtlo1       $v1 # 00107540 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c8738u;
    ctx->lo1 = GPR_U64(ctx, 3);
label_2c873c:
    // 0x2c873c: 0x74726f  .word       0x0074726F                   # dsubu       $t6, $v1, $s4 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c873cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 3) - GPR_U64(ctx, 20));
label_2c8740:
    // 0x2c8740: 0x65696853  daddiu      $t1, $t3, 0x6853
    ctx->pc = 0x2c8740u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)26707);
label_2c8744:
    // 0x2c8744: 0x646c  .word       0x0000646C                   # dadd        $t4, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c8744u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, r); }
label_2c8748:
    // 0x2c8748: 0x61666e49  daddi       $a2, $t3, 0x6E49
    ctx->pc = 0x2c8748u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)28233; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 6, res); }
label_2c874c:
    // 0x2c874c: 0x7972746e  lq          $s2, 0x746E($t3)
    ctx->pc = 0x2c874cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 11), 29806)));
label_2c8750:
    // 0x2c8750: 0x0  nop
    ctx->pc = 0x2c8750u;
    // NOP
label_2c8754:
    // 0x2c8754: 0x0  nop
    ctx->pc = 0x2c8754u;
    // NOP
label_2c8758:
    // 0x2c8758: 0x68676946  ldl         $a3, 0x6946($v1)
    ctx->pc = 0x2c8758u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 26950); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_2c875c:
    // 0x2c875c: 0x726574  teq         $v1, $s2, 405
    ctx->pc = 0x2c875cu;
    if (GPR_U64(ctx, 3) == GPR_U64(ctx, 18)) { runtime->handleTrap(rdram, ctx); }
label_2c8760:
    // 0x2c8760: 0x74696c45  .word       0x74696C45                   # INVALID     $v1, $t1, 0x6C45 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c8760u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C8760 raw=0x74696C45");
 /* MITIGATED */
label_2c8764:
    // 0x2c8764: 0x65  .word       0x00000065                   # move        $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c8764u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_2c8768:
    // 0x2c8768: 0x6d726f4e  ldr         $s2, 0x6F4E($t3)
    ctx->pc = 0x2c8768u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 28494); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
label_2c876c:
    // 0x2c876c: 0x6c61  .word       0x00006C61                   # addu        $t5, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c876cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2c8770:
    // 0x2c8770: 0x65756c42  daddiu      $s5, $t3, 0x6C42
    ctx->pc = 0x2c8770u;
    SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)27714);
label_2c8774:
    // 0x2c8774: 0x0  nop
    ctx->pc = 0x2c8774u;
    // NOP
label_2c8778:
    // 0x2c8778: 0x646552  .word       0x00646552                   # mflo        $t4 # 00640540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c8778u;
    SET_GPR_U64(ctx, 12, ctx->lo);
label_2c877c:
    // 0x2c877c: 0x0  nop
    ctx->pc = 0x2c877cu;
    // NOP
label_2c8780:
    // 0x2c8780: 0x65657247  daddiu      $a1, $t3, 0x7247
    ctx->pc = 0x2c8780u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29255);
label_2c8784:
    // 0x2c8784: 0x6e  .word       0x0000006E                   # dsub        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c8784u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2c8788:
    // 0x2c8788: 0x70727550  .word       0x70727550                   # mfhi1       $t6 # 00720540 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c8788u;
    SET_GPR_U64(ctx, 14, ctx->hi1);
label_2c878c:
    // 0x2c878c: 0x656c  .word       0x0000656C                   # dadd        $t4, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c878cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, r); }
label_2c8790:
    // 0x2c8790: 0x6c6c6559  ldr         $t4, 0x6559($v1)
    ctx->pc = 0x2c8790u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 25945); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_2c8794:
    // 0x2c8794: 0x776f  .word       0x0000776F                   # dsubu       $t6, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c8794u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_2c8798:
    // 0x2c8798: 0x74696857  .word       0x74696857                   # INVALID     $v1, $t1, 0x6857 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c8798u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C8798 raw=0x74696857");
 /* MITIGATED */
label_2c879c:
    // 0x2c879c: 0x65  .word       0x00000065                   # move        $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c879cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_2c87a0:
    // 0x2c87a0: 0x63616c42  daddi       $at, $k1, 0x6C42
    ctx->pc = 0x2c87a0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)27714; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, res); }
label_2c87a4:
    // 0x2c87a4: 0x6b  .word       0x0000006B                   # sltu        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c87a4u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_2c87a8:
    // 0x2c87a8: 0x63616550  daddi       $at, $k1, 0x6550
    ctx->pc = 0x2c87a8u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)25936; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, res); }
label_2c87ac:
    // 0x2c87ac: 0x68  .word       0x00000068                   # mfsa        $zero # 00000040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c87acu;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_2c87b0:
    // 0x2c87b0: 0x656c614d  daddiu      $t4, $t3, 0x614D
    ctx->pc = 0x2c87b0u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24909);
label_2c87b4:
    // 0x2c87b4: 0x0  nop
    ctx->pc = 0x2c87b4u;
    // NOP
label_2c87b8:
    // 0x2c87b8: 0x616d6546  daddi       $t5, $t3, 0x6546
    ctx->pc = 0x2c87b8u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)25926; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 13, res); }
label_2c87bc:
    // 0x2c87bc: 0x656c  .word       0x0000656C                   # dadd        $t4, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c87bcu;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, r); }
label_2c87c0:
    // 0x2c87c0: 0x6d6e614e  ldr         $t6, 0x614E($t3)
    ctx->pc = 0x2c87c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 24910); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem >> shift)); }
label_2c87c4:
    // 0x2c87c4: 0x4d206e61  .word       0x4D206E61                   # INVALID     $t1, $zero, 0x6E61 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c87c4u;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x2C87C4 raw=0x4D206E61");
 /* MITIGATED */
label_2c87c8:
    // 0x2c87c8: 0x656c61  .word       0x00656C61                   # addu        $t5, $v1, $a1 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c87c8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2c87cc:
    // 0x2c87cc: 0x0  nop
    ctx->pc = 0x2c87ccu;
    // NOP
label_2c87d0:
    // 0x2c87d0: 0x6d6e614e  ldr         $t6, 0x614E($t3)
    ctx->pc = 0x2c87d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 24910); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem >> shift)); }
label_2c87d4:
    // 0x2c87d4: 0x46206e61  .word       0x46206E61                   # INVALID     $s1, $zero, 0x6E61 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2c87d4u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x11, function 0x21 at 0x2C87D4 raw=0x46206E61");
 /* MITIGATED */
label_2c87d8:
    // 0x2c87d8: 0x6c616d65  ldr         $at, 0x6D65($v1)
    ctx->pc = 0x2c87d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 28005); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2c87dc:
    // 0x2c87dc: 0x65  .word       0x00000065                   # move        $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c87dcu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_2c87e0:
    // 0x2c87e0: 0x616c6142  daddi       $t4, $t3, 0x6142
    ctx->pc = 0x2c87e0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24898; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, res); }
label_2c87e4:
    // 0x2c87e4: 0x6465636e  daddiu      $a1, $v1, 0x636E
    ctx->pc = 0x2c87e4u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)25454);
label_2c87e8:
    // 0x2c87e8: 0x0  nop
    ctx->pc = 0x2c87e8u;
    // NOP
label_2c87ec:
    // 0x2c87ec: 0x0  nop
    ctx->pc = 0x2c87ecu;
    // NOP
label_2c87f0:
    // 0x2c87f0: 0x6566694c  daddiu      $a2, $t3, 0x694C
    ctx->pc = 0x2c87f0u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)26956);
label_2c87f4:
    // 0x2c87f4: 0x73754d2f  .word       0x73754D2F                   # INVALID     $k1, $s5, 0x4D2F # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c87f4u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x2F at 0x2C87F4 raw=0x73754D2F");
 /* MITIGATED */
label_2c87f8:
    // 0x2c87f8: 0x756f  .word       0x0000756F                   # dsubu       $t6, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c87f8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_2c87fc:
    // 0x2c87fc: 0x0  nop
    ctx->pc = 0x2c87fcu;
    // NOP
label_2c8800:
    // 0x2c8800: 0x74737543  .word       0x74737543                   # INVALID     $v1, $s3, 0x7543 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c8800u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C8800 raw=0x74737543");
 /* MITIGATED */
label_2c8804:
    // 0x2c8804: 0x6d6f  .word       0x00006D6F                   # dsubu       $t5, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c8804u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_2c8808:
    // 0x2c8808: 0x0  nop
    ctx->pc = 0x2c8808u;
    // NOP
label_2c880c:
    // 0x2c880c: 0x0  nop
    ctx->pc = 0x2c880cu;
    // NOP
label_2c8810:
    // 0x2c8810: 0x15abfc  dsll32      $s5, $s5, 15
    ctx->pc = 0x2c8810u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) << (32 + 15));
label_2c8814:
    // 0x2c8814: 0x15ac20  .word       0x0015AC20                   # add         $s5, $zero, $s5 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c8814u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 21);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_2c8818:
    // 0x2c8818: 0x15ac28  .word       0x0015AC28                   # mfsa        $s5 # 00150400 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c8818u;
    SET_GPR_U32(ctx, 21, ctx->sa);
label_2c881c:
    // 0x2c881c: 0x15ac30  tge         $zero, $s5, 688
    ctx->pc = 0x2c881cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
label_2c8820:
    // 0x2c8820: 0x15ac38  dsll        $s5, $s5, 16
    ctx->pc = 0x2c8820u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) << 16);
label_2c8824:
    // 0x2c8824: 0x15ac40  sll         $s5, $s5, 17
    ctx->pc = 0x2c8824u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 21), 17));
label_2c8828:
    // 0x2c8828: 0x15ac48  .word       0x0015AC48                   # jr          $zero # 0015AC40 <InstrIdType: CPU_SPECIAL>
label_2c882c:
    if (ctx->pc == 0x2C882Cu) {
        ctx->pc = 0x2C882Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8828u;
        // 0x2c882c: 0x15ac6c  .word       0x0015AC6C                   # dadd        $s5, $zero, $s5 # 00000440 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 21); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 21, r); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8830u;
        goto label_2c8830;
    }
    ctx->pc = 0x2C8828u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2C882Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8828u;
        // 0x2c882c: 0x15ac6c  .word       0x0015AC6C                   # dadd        $s5, $zero, $s5 # 00000440 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 21); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 21, r); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C8828u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2C8830u;
label_2c8830:
    // 0x2c8830: 0x15ac74  teq         $zero, $s5, 689
    ctx->pc = 0x2c8830u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
label_2c8834:
    // 0x2c8834: 0x15aca8  .word       0x0015ACA8                   # mfsa        $s5 # 00150480 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c8834u;
    SET_GPR_U32(ctx, 21, ctx->sa);
label_2c8838:
    // 0x2c8838: 0x15acb0  tge         $zero, $s5, 690
    ctx->pc = 0x2c8838u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
label_2c883c:
    // 0x2c883c: 0x15acb8  dsll        $s5, $s5, 18
    ctx->pc = 0x2c883cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) << 18);
label_2c8840:
    // 0x2c8840: 0x15acec  .word       0x0015ACEC                   # dadd        $s5, $zero, $s5 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c8840u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 21); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 21, r); }
label_2c8844:
    // 0x2c8844: 0x15acf4  teq         $zero, $s5, 691
    ctx->pc = 0x2c8844u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
label_2c8848:
    // 0x2c8848: 0x15acfc  dsll32      $s5, $s5, 19
    ctx->pc = 0x2c8848u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) << (32 + 19));
label_2c884c:
    // 0x2c884c: 0x15ad04  .word       0x0015AD04                   # sllv        $s5, $s5, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c884cu;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 21), GPR_U32(ctx, 0) & 0x1F));
label_2c8850:
    // 0x2c8850: 0x15ad0c  .word       0x0015AD0C                   # syscall     692 # 00150000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c8850u;
    ctx->pc = 0x2C8854u;
runtime->handleSyscall(rdram, ctx, 0x56B4u);
label_2c8854:
    // 0x2c8854: 0x15ad14  .word       0x0015AD14                   # dsllv       $s5, $s5, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c8854u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) << (GPR_U32(ctx, 0) & 0x3F));
label_2c8858:
    // 0x2c8858: 0x15ad1c  .word       0x0015AD1C                   # dmult       $zero, $s5 # 0000AD00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c8858u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2C8858 raw=0x0015AD1C");
 /* MITIGATED */
label_2c885c:
    // 0x2c885c: 0x15ad40  sll         $s5, $s5, 21
    ctx->pc = 0x2c885cu;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 21), 21));
label_2c8860:
    // 0x2c8860: 0x15ad64  .word       0x0015AD64                   # and         $s5, $zero, $s5 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c8860u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) & GPR_U64(ctx, 21));
label_2c8864:
    // 0x2c8864: 0x15ad6c  .word       0x0015AD6C                   # dadd        $s5, $zero, $s5 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c8864u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 21); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 21, r); }
label_2c8868:
    // 0x2c8868: 0x15ad74  teq         $zero, $s5, 693
    ctx->pc = 0x2c8868u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
label_2c886c:
    // 0x2c886c: 0x0  nop
    ctx->pc = 0x2c886cu;
    // NOP
label_2c8870:
    // 0x2c8870: 0x15adec  .word       0x0015ADEC                   # dadd        $s5, $zero, $s5 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c8870u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 21); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 21, r); }
label_2c8874:
    // 0x2c8874: 0x15adf4  teq         $zero, $s5, 695
    ctx->pc = 0x2c8874u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
label_2c8878:
    // 0x2c8878: 0x15adfc  dsll32      $s5, $s5, 23
    ctx->pc = 0x2c8878u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) << (32 + 23));
label_2c887c:
    // 0x2c887c: 0x15ae04  .word       0x0015AE04                   # sllv        $s5, $s5, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c887cu;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 21), GPR_U32(ctx, 0) & 0x1F));
label_2c8880:
    // 0x2c8880: 0x15ae0c  .word       0x0015AE0C                   # syscall     696 # 00150000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c8880u;
    ctx->pc = 0x2C8884u;
runtime->handleSyscall(rdram, ctx, 0x56B8u);
label_2c8884:
    // 0x2c8884: 0x15ae14  .word       0x0015AE14                   # dsllv       $s5, $s5, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c8884u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) << (GPR_U32(ctx, 0) & 0x3F));
label_2c8888:
    // 0x2c8888: 0x15ae1c  .word       0x0015AE1C                   # dmult       $zero, $s5 # 0000AE00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c8888u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2C8888 raw=0x0015AE1C");
 /* MITIGATED */
label_2c888c:
    // 0x2c888c: 0x15ae24  .word       0x0015AE24                   # and         $s5, $zero, $s5 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c888cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) & GPR_U64(ctx, 21));
label_2c8890:
    // 0x2c8890: 0x15ae2c  .word       0x0015AE2C                   # dadd        $s5, $zero, $s5 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c8890u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 21); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 21, r); }
label_2c8894:
    // 0x2c8894: 0x15aeac  .word       0x0015AEAC                   # dadd        $s5, $zero, $s5 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c8894u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 21); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 21, r); }
label_2c8898:
    // 0x2c8898: 0x15aeb4  teq         $zero, $s5, 698
    ctx->pc = 0x2c8898u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
label_2c889c:
    // 0x2c889c: 0x15aebc  dsll32      $s5, $s5, 26
    ctx->pc = 0x2c889cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) << (32 + 26));
label_2c88a0:
    // 0x2c88a0: 0x15af08  .word       0x0015AF08                   # jr          $zero # 0015AF00 <InstrIdType: CPU_SPECIAL>
label_2c88a4:
    if (ctx->pc == 0x2C88A4u) {
        ctx->pc = 0x2C88A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C88A0u;
        // 0x2c88a4: 0x15af10  .word       0x0015AF10                   # mfhi        $s5 # 00150700 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 21, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C88A8u;
        goto label_2c88a8;
    }
    ctx->pc = 0x2C88A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2C88A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C88A0u;
        // 0x2c88a4: 0x15af10  .word       0x0015AF10                   # mfhi        $s5 # 00150700 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 21, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C88A0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2C88A8u;
label_2c88a8:
    // 0x2c88a8: 0x15af18  .word       0x0015AF18                   # mult        $s5, $zero, $s5 # 00000700 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c88a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 21, (int32_t)result); }
label_2c88ac:
    // 0x2c88ac: 0x15af9c  .word       0x0015AF9C                   # dmult       $zero, $s5 # 0000AF80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c88acu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2C88AC raw=0x0015AF9C");
 /* MITIGATED */
label_2c88b0:
    // 0x2c88b0: 0x15afd0  .word       0x0015AFD0                   # mfhi        $s5 # 001507C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c88b0u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_2c88b4:
    // 0x2c88b4: 0x15afd8  .word       0x0015AFD8                   # mult        $s5, $zero, $s5 # 000007C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c88b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 21, (int32_t)result); }
label_2c88b8:
    // 0x2c88b8: 0x15afe0  .word       0x0015AFE0                   # add         $s5, $zero, $s5 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c88b8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 21);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_2c88bc:
    // 0x2c88bc: 0x15b334  teq         $zero, $s5, 716
    ctx->pc = 0x2c88bcu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
label_2c88c0:
    // 0x2c88c0: 0x15b684  .word       0x0015B684                   # sllv        $s6, $s5, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c88c0u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 21), GPR_U32(ctx, 0) & 0x1F));
label_2c88c4:
    // 0x2c88c4: 0x15b68c  .word       0x0015B68C                   # syscall     730 # 00150000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c88c4u;
    ctx->pc = 0x2C88C8u;
runtime->handleSyscall(rdram, ctx, 0x56DAu);
label_2c88c8:
    // 0x2c88c8: 0x15b694  .word       0x0015B694                   # dsllv       $s6, $s5, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c88c8u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 21) << (GPR_U32(ctx, 0) & 0x3F));
label_2c88cc:
    // 0x2c88cc: 0x0  nop
    ctx->pc = 0x2c88ccu;
    // NOP
label_2c88d0:
    // 0x2c88d0: 0x15b94c  .word       0x0015B94C                   # syscall     741 # 00150000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c88d0u;
    ctx->pc = 0x2C88D4u;
runtime->handleSyscall(rdram, ctx, 0x56E5u);
label_2c88d4:
    // 0x2c88d4: 0x15b948  .word       0x0015B948                   # jr          $zero # 0015B940 <InstrIdType: CPU_SPECIAL>
label_2c88d8:
    if (ctx->pc == 0x2C88D8u) {
        ctx->pc = 0x2C88D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C88D4u;
        // 0x2c88d8: 0x15b8b8  dsll        $s7, $s5, 2 (Delay Slot)
        SET_GPR_U64(ctx, 23, GPR_U64(ctx, 21) << 2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C88DCu;
        goto label_2c88dc;
    }
    ctx->pc = 0x2C88D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2C88D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C88D4u;
        // 0x2c88d8: 0x15b8b8  dsll        $s7, $s5, 2 (Delay Slot)
        SET_GPR_U64(ctx, 23, GPR_U64(ctx, 21) << 2);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C88D4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2C88DCu;
label_2c88dc:
    // 0x2c88dc: 0x15b900  sll         $s7, $s5, 4
    ctx->pc = 0x2c88dcu;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
label_2c88e0:
    // 0x2c88e0: 0x15b900  sll         $s7, $s5, 4
    ctx->pc = 0x2c88e0u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
label_2c88e4:
    // 0x2c88e4: 0x15b900  sll         $s7, $s5, 4
    ctx->pc = 0x2c88e4u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
label_2c88e8:
    // 0x2c88e8: 0x15b900  sll         $s7, $s5, 4
    ctx->pc = 0x2c88e8u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
label_2c88ec:
    // 0x2c88ec: 0x15b900  sll         $s7, $s5, 4
    ctx->pc = 0x2c88ecu;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
label_2c88f0:
    // 0x2c88f0: 0x15b900  sll         $s7, $s5, 4
    ctx->pc = 0x2c88f0u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
label_2c88f4:
    // 0x2c88f4: 0x15b8b8  dsll        $s7, $s5, 2
    ctx->pc = 0x2c88f4u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 21) << 2);
label_2c88f8:
    // 0x2c88f8: 0x15b8b8  dsll        $s7, $s5, 2
    ctx->pc = 0x2c88f8u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 21) << 2);
label_2c88fc:
    // 0x2c88fc: 0x15b8b8  dsll        $s7, $s5, 2
    ctx->pc = 0x2c88fcu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 21) << 2);
label_2c8900:
    // 0x2c8900: 0x15b8b8  dsll        $s7, $s5, 2
    ctx->pc = 0x2c8900u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 21) << 2);
label_2c8904:
    // 0x2c8904: 0x15b8b8  dsll        $s7, $s5, 2
    ctx->pc = 0x2c8904u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 21) << 2);
label_2c8908:
    // 0x2c8908: 0x15b8b8  dsll        $s7, $s5, 2
    ctx->pc = 0x2c8908u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 21) << 2);
label_2c890c:
    // 0x2c890c: 0x15b870  tge         $zero, $s5, 737
    ctx->pc = 0x2c890cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
label_2c8910:
    // 0x2c8910: 0x15b850  .word       0x0015B850                   # mfhi        $s7 # 00150040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c8910u;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_2c8914:
    // 0x2c8914: 0x0  nop
    ctx->pc = 0x2c8914u;
    // NOP
label_2c8918:
    // 0x2c8918: 0x0  nop
    ctx->pc = 0x2c8918u;
    // NOP
label_2c891c:
    // 0x2c891c: 0x0  nop
    ctx->pc = 0x2c891cu;
    // NOP
label_2c8920:
    // 0x2c8920: 0x10  mfhi        $zero
    ctx->pc = 0x2c8920u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_2c8924:
    // 0x2c8924: 0x8  jr          $zero
label_2c8928:
    if (ctx->pc == 0x2C8928u) {
        ctx->pc = 0x2C8928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8924u;
        // 0x2c8928: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
//         throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2C8928 raw=0x00000005");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C892Cu;
        goto label_2c892c;
    }
    ctx->pc = 0x2C8924u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2C8928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8924u;
        // 0x2c8928: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
//         throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2C8928 raw=0x00000005");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C8924u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2C892Cu;
label_2c892c:
    // 0x2c892c: 0xc  syscall     0
    ctx->pc = 0x2c892cu;
    ctx->pc = 0x2C8930u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2c8930:
    // 0x2c8930: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x2c8930u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2c8934:
    // 0x2c8934: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c8934u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2C8934 raw=0x00000005");
 /* MITIGATED */
label_2c8938:
    // 0x2c8938: 0x10  mfhi        $zero
    ctx->pc = 0x2c8938u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_2c893c:
    // 0x2c893c: 0x0  nop
    ctx->pc = 0x2c893cu;
    // NOP
label_2c8940:
    // 0x2c8940: 0x1685c0  sll         $s0, $s6, 23
    ctx->pc = 0x2c8940u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 22), 23));
label_2c8944:
    // 0x2c8944: 0x1685c8  .word       0x001685C8                   # jr          $zero # 001685C0 <InstrIdType: CPU_SPECIAL>
label_2c8948:
    if (ctx->pc == 0x2C8948u) {
        ctx->pc = 0x2C8948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8944u;
        // 0x2c8948: 0x1685d0  .word       0x001685D0                   # mfhi        $s0 # 001605C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 16, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C894Cu;
        goto label_2c894c;
    }
    ctx->pc = 0x2C8944u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2C8948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8944u;
        // 0x2c8948: 0x1685d0  .word       0x001685D0                   # mfhi        $s0 # 001605C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 16, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C8944u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2C894Cu;
label_2c894c:
    // 0x2c894c: 0x1685d8  .word       0x001685D8                   # mult        $s0, $zero, $s6 # 000005C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c894cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
label_2c8950:
    // 0x2c8950: 0x1685e0  .word       0x001685E0                   # add         $s0, $zero, $s6 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c8950u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 22);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_2c8954:
    // 0x2c8954: 0x1685f8  dsll        $s0, $s6, 23
    ctx->pc = 0x2c8954u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 22) << 23);
label_2c8958:
    // 0x2c8958: 0x0  nop
    ctx->pc = 0x2c8958u;
    // NOP
label_2c895c:
    // 0x2c895c: 0x0  nop
    ctx->pc = 0x2c895cu;
    // NOP
label_2c8960:
    // 0x2c8960: 0x168954  .word       0x00168954                   # dsllv       $s1, $s6, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c8960u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 22) << (GPR_U32(ctx, 0) & 0x3F));
label_2c8964:
    // 0x2c8964: 0x168974  teq         $zero, $s6, 549
    ctx->pc = 0x2c8964u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 22)) { runtime->handleTrap(rdram, ctx); }
label_2c8968:
    // 0x2c8968: 0x168994  .word       0x00168994                   # dsllv       $s1, $s6, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c8968u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 22) << (GPR_U32(ctx, 0) & 0x3F));
label_2c896c:
    // 0x2c896c: 0x1689b4  teq         $zero, $s6, 550
    ctx->pc = 0x2c896cu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 22)) { runtime->handleTrap(rdram, ctx); }
label_2c8970:
    // 0x2c8970: 0x1689c0  sll         $s1, $s6, 7
    ctx->pc = 0x2c8970u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 22), 7));
label_2c8974:
    // 0x2c8974: 0x1689d8  .word       0x001689D8                   # mult        $s1, $zero, $s6 # 000001C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c8974u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
label_2c8978:
    // 0x2c8978: 0x0  nop
    ctx->pc = 0x2c8978u;
    // NOP
label_2c897c:
    // 0x2c897c: 0x0  nop
    ctx->pc = 0x2c897cu;
    // NOP
label_2c8980:
    // 0x2c8980: 0x564f4d5c  bnel        $s2, $t7, . + 4 + (0x4D5C << 2)
label_2c8984:
    if (ctx->pc == 0x2C8984u) {
        ctx->pc = 0x2C8984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8980u;
        // 0x2c8984: 0x4b5c4549  vmaddy.xz   $vf21, $vf8, $vf28y (Delay Slot)
        { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8988u;
        goto label_2c8988;
    }
    ctx->pc = 0x2C8980u;
    {
        const bool branch_taken_0x2c8980 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 15));
        if (branch_taken_0x2c8980) {
            ctx->pc = 0x2C8984u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8980u;
            // 0x2c8984: 0x4b5c4549  vmaddy.xz   $vf21, $vf8, $vf28y (Delay Slot)
            { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DBEF4u;
            return;
        }
    }
    ctx->pc = 0x2C8988u;
label_2c8988:
    // 0x2c8988: 0x4c49454f  .word       0x4C49454F                   # INVALID     $v0, $t1, 0x454F # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c8988u;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x2C8988 raw=0x4C49454F");
 /* MITIGATED */
label_2c898c:
    // 0x2c898c: 0x2e4f474f  sltiu       $t7, $s2, 0x474F
    ctx->pc = 0x2c898cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)18255) ? 1 : 0);
label_2c8990:
    // 0x2c8990: 0x3b535350  xori        $s3, $k0, 0x5350
    ctx->pc = 0x2c8990u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 26) ^ (uint64_t)(uint16_t)21328);
label_2c8994:
    // 0x2c8994: 0x31  tgeu        $zero, $zero, 0
    ctx->pc = 0x2c8994u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2c8998:
    // 0x2c8998: 0x0  nop
    ctx->pc = 0x2c8998u;
    // NOP
label_2c899c:
    // 0x2c899c: 0x0  nop
    ctx->pc = 0x2c899cu;
    // NOP
label_2c89a0:
    // 0x2c89a0: 0x564f4d5c  bnel        $s2, $t7, . + 4 + (0x4D5C << 2)
label_2c89a4:
    if (ctx->pc == 0x2C89A4u) {
        ctx->pc = 0x2C89A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C89A0u;
        // 0x2c89a4: 0x4f5c4549  .word       0x4F5C4549                   # INVALID     $k0, $gp, 0x4549 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
//         throw std::runtime_error("Unhandled opcode: 0x13 at 0x2C89A4 raw=0x4F5C4549");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C89A8u;
        goto label_2c89a8;
    }
    ctx->pc = 0x2C89A0u;
    {
        const bool branch_taken_0x2c89a0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 15));
        if (branch_taken_0x2c89a0) {
            ctx->pc = 0x2C89A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C89A0u;
            // 0x2c89a4: 0x4f5c4549  .word       0x4F5C4549                   # INVALID     $k0, $gp, 0x4549 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
//             throw std::runtime_error("Unhandled opcode: 0x13 at 0x2C89A4 raw=0x4F5C4549");
 /* MITIGATED */
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DBF14u;
            return;
        }
    }
    ctx->pc = 0x2C89A8u;
label_2c89a8:
    // 0x2c89a8: 0x4147454d  .word       0x4147454D                   # INVALID     $t2, $a3, 0x454D # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2c89a8u;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x2C89A8 raw=0x4147454D");
 /* MITIGATED */
label_2c89ac:
    // 0x2c89ac: 0x5353502e  beql        $k0, $s3, . + 4 + (0x502E << 2)
label_2c89b0:
    if (ctx->pc == 0x2C89B0u) {
        ctx->pc = 0x2C89B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C89ACu;
        // 0x2c89b0: 0x313b  dsra        $a2, $zero, 4 (Delay Slot)
        SET_GPR_S64(ctx, 6, GPR_S64(ctx, 0) >> 4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C89B4u;
        goto label_2c89b4;
    }
    ctx->pc = 0x2C89ACu;
    {
        const bool branch_taken_0x2c89ac = (GPR_U64(ctx, 26) == GPR_U64(ctx, 19));
        if (branch_taken_0x2c89ac) {
            ctx->pc = 0x2C89B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C89ACu;
            // 0x2c89b0: 0x313b  dsra        $a2, $zero, 4 (Delay Slot)
            SET_GPR_S64(ctx, 6, GPR_S64(ctx, 0) >> 4);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DCA68u;
            return;
        }
    }
    ctx->pc = 0x2C89B4u;
label_2c89b4:
    // 0x2c89b4: 0x0  nop
    ctx->pc = 0x2c89b4u;
    // NOP
label_2c89b8:
    // 0x2c89b8: 0x0  nop
    ctx->pc = 0x2c89b8u;
    // NOP
label_2c89bc:
    // 0x2c89bc: 0x0  nop
    ctx->pc = 0x2c89bcu;
    // NOP
label_2c89c0:
    // 0x2c89c0: 0x564f4d5c  bnel        $s2, $t7, . + 4 + (0x4D5C << 2)
label_2c89c4:
    if (ctx->pc == 0x2C89C4u) {
        ctx->pc = 0x2C89C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C89C0u;
        // 0x2c89c4: 0x4f5c4549  .word       0x4F5C4549                   # INVALID     $k0, $gp, 0x4549 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
//         throw std::runtime_error("Unhandled opcode: 0x13 at 0x2C89C4 raw=0x4F5C4549");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C89C8u;
        goto label_2c89c8;
    }
    ctx->pc = 0x2C89C0u;
    {
        const bool branch_taken_0x2c89c0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 15));
        if (branch_taken_0x2c89c0) {
            ctx->pc = 0x2C89C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C89C0u;
            // 0x2c89c4: 0x4f5c4549  .word       0x4F5C4549                   # INVALID     $k0, $gp, 0x4549 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
//             throw std::runtime_error("Unhandled opcode: 0x13 at 0x2C89C4 raw=0x4F5C4549");
 /* MITIGATED */
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DBF34u;
            return;
        }
    }
    ctx->pc = 0x2C89C8u;
label_2c89c8:
    // 0x2c89c8: 0x494e4550  .word       0x494E4550                   # INVALID     $t2, $t6, 0x4550 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2c89c8u;
//     throw std::runtime_error("Unhandled COP2 format: 0xA at 0x2C89C8 raw=0x494E4550");
 /* MITIGATED */
label_2c89cc:
    // 0x2c89cc: 0x502e474e  beql        $at, $t6, . + 4 + (0x474E << 2)
label_2c89d0:
    if (ctx->pc == 0x2C89D0u) {
        ctx->pc = 0x2C89D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C89CCu;
        // 0x2c89d0: 0x313b5353  andi        $k1, $t1, 0x5353 (Delay Slot)
        SET_GPR_U64(ctx, 27, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)21331);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C89D4u;
        goto label_2c89d4;
    }
    ctx->pc = 0x2C89CCu;
    {
        const bool branch_taken_0x2c89cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 14));
        if (branch_taken_0x2c89cc) {
            ctx->pc = 0x2C89D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C89CCu;
            // 0x2c89d0: 0x313b5353  andi        $k1, $t1, 0x5353 (Delay Slot)
            SET_GPR_U64(ctx, 27, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)21331);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DA708u;
            return;
        }
    }
    ctx->pc = 0x2C89D4u;
label_2c89d4:
    // 0x2c89d4: 0x0  nop
    ctx->pc = 0x2c89d4u;
    // NOP
label_2c89d8:
    // 0x2c89d8: 0x0  nop
    ctx->pc = 0x2c89d8u;
    // NOP
label_2c89dc:
    // 0x2c89dc: 0x0  nop
    ctx->pc = 0x2c89dcu;
    // NOP
label_2c89e0:
    // 0x2c89e0: 0x564f4d5c  bnel        $s2, $t7, . + 4 + (0x4D5C << 2)
label_2c89e4:
    if (ctx->pc == 0x2C89E4u) {
        ctx->pc = 0x2C89E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C89E0u;
        // 0x2c89e4: 0x5c334549  .word       0x5C334549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00130000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x2C89E4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C89E8u;
        goto label_2c89e8;
    }
    ctx->pc = 0x2C89E0u;
    {
        const bool branch_taken_0x2c89e0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 15));
        if (branch_taken_0x2c89e0) {
            ctx->pc = 0x2C89E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C89E0u;
            // 0x2c89e4: 0x5c334549  .word       0x5C334549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00130000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x2C89E4 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DBF54u;
            return;
        }
    }
    ctx->pc = 0x2C89E8u;
label_2c89e8:
    // 0x2c89e8: 0x2e303053  sltiu       $s0, $s1, 0x3053
    ctx->pc = 0x2c89e8u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)12371) ? 1 : 0);
label_2c89ec:
    // 0x2c89ec: 0x3b535350  xori        $s3, $k0, 0x5350
    ctx->pc = 0x2c89ecu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 26) ^ (uint64_t)(uint16_t)21328);
label_2c89f0:
    // 0x2c89f0: 0x31  tgeu        $zero, $zero, 0
    ctx->pc = 0x2c89f0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2c89f4:
    // 0x2c89f4: 0x0  nop
    ctx->pc = 0x2c89f4u;
    // NOP
label_2c89f8:
    // 0x2c89f8: 0x0  nop
    ctx->pc = 0x2c89f8u;
    // NOP
label_2c89fc:
    // 0x2c89fc: 0x0  nop
    ctx->pc = 0x2c89fcu;
    // NOP
label_2c8a00:
    // 0x2c8a00: 0x564f4d5c  bnel        $s2, $t7, . + 4 + (0x4D5C << 2)
label_2c8a04:
    if (ctx->pc == 0x2C8A04u) {
        ctx->pc = 0x2C8A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8A00u;
        // 0x2c8a04: 0x5c334549  .word       0x5C334549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00130000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x2C8A04 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8A08u;
        goto label_2c8a08;
    }
    ctx->pc = 0x2C8A00u;
    {
        const bool branch_taken_0x2c8a00 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 15));
        if (branch_taken_0x2c8a00) {
            ctx->pc = 0x2C8A04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8A00u;
            // 0x2c8a04: 0x5c334549  .word       0x5C334549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00130000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x2C8A04 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DBF74u;
            return;
        }
    }
    ctx->pc = 0x2C8A08u;
label_2c8a08:
    // 0x2c8a08: 0x2e313053  sltiu       $s1, $s1, 0x3053
    ctx->pc = 0x2c8a08u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)12371) ? 1 : 0);
label_2c8a0c:
    // 0x2c8a0c: 0x3b535350  xori        $s3, $k0, 0x5350
    ctx->pc = 0x2c8a0cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 26) ^ (uint64_t)(uint16_t)21328);
label_2c8a10:
    // 0x2c8a10: 0x31  tgeu        $zero, $zero, 0
    ctx->pc = 0x2c8a10u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2c8a14:
    // 0x2c8a14: 0x0  nop
    ctx->pc = 0x2c8a14u;
    // NOP
label_2c8a18:
    // 0x2c8a18: 0x0  nop
    ctx->pc = 0x2c8a18u;
    // NOP
label_2c8a1c:
    // 0x2c8a1c: 0x0  nop
    ctx->pc = 0x2c8a1cu;
    // NOP
label_2c8a20:
    // 0x2c8a20: 0x564f4d5c  bnel        $s2, $t7, . + 4 + (0x4D5C << 2)
label_2c8a24:
    if (ctx->pc == 0x2C8A24u) {
        ctx->pc = 0x2C8A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8A20u;
        // 0x2c8a24: 0x5c334549  .word       0x5C334549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00130000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x2C8A24 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8A28u;
        goto label_2c8a28;
    }
    ctx->pc = 0x2C8A20u;
    {
        const bool branch_taken_0x2c8a20 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 15));
        if (branch_taken_0x2c8a20) {
            ctx->pc = 0x2C8A24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8A20u;
            // 0x2c8a24: 0x5c334549  .word       0x5C334549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00130000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x2C8A24 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DBF94u;
            return;
        }
    }
    ctx->pc = 0x2C8A28u;
label_2c8a28:
    // 0x2c8a28: 0x2e353053  sltiu       $s5, $s1, 0x3053
    ctx->pc = 0x2c8a28u;
    SET_GPR_U64(ctx, 21, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)12371) ? 1 : 0);
label_2c8a2c:
    // 0x2c8a2c: 0x3b535350  xori        $s3, $k0, 0x5350
    ctx->pc = 0x2c8a2cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 26) ^ (uint64_t)(uint16_t)21328);
label_2c8a30:
    // 0x2c8a30: 0x31  tgeu        $zero, $zero, 0
    ctx->pc = 0x2c8a30u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2c8a34:
    // 0x2c8a34: 0x0  nop
    ctx->pc = 0x2c8a34u;
    // NOP
label_2c8a38:
    // 0x2c8a38: 0x0  nop
    ctx->pc = 0x2c8a38u;
    // NOP
label_2c8a3c:
    // 0x2c8a3c: 0x0  nop
    ctx->pc = 0x2c8a3cu;
    // NOP
label_2c8a40:
    // 0x2c8a40: 0x564f4d5c  bnel        $s2, $t7, . + 4 + (0x4D5C << 2)
label_2c8a44:
    if (ctx->pc == 0x2C8A44u) {
        ctx->pc = 0x2C8A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8A40u;
        // 0x2c8a44: 0x5c334549  .word       0x5C334549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00130000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x2C8A44 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8A48u;
        goto label_2c8a48;
    }
    ctx->pc = 0x2C8A40u;
    {
        const bool branch_taken_0x2c8a40 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 15));
        if (branch_taken_0x2c8a40) {
            ctx->pc = 0x2C8A44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8A40u;
            // 0x2c8a44: 0x5c334549  .word       0x5C334549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00130000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x2C8A44 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DBFB4u;
            return;
        }
    }
    ctx->pc = 0x2C8A48u;
label_2c8a48:
    // 0x2c8a48: 0x5f373053  .word       0x5F373053                   # bgtzl       $t9, . + 4 + (0x3053 << 2) # 00170000 <InstrIdType: CPU_NORMAL>
label_2c8a4c:
    if (ctx->pc == 0x2C8A4Cu) {
        ctx->pc = 0x2C8A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8A48u;
        // 0x2c8a4c: 0x2e31504f  sltiu       $s1, $s1, 0x504F (Delay Slot)
        SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)20559) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8A50u;
        goto label_2c8a50;
    }
    ctx->pc = 0x2C8A48u;
    {
        const bool branch_taken_0x2c8a48 = (GPR_S32(ctx, 25) > 0);
        if (branch_taken_0x2c8a48) {
            ctx->pc = 0x2C8A4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8A48u;
            // 0x2c8a4c: 0x2e31504f  sltiu       $s1, $s1, 0x504F (Delay Slot)
            SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)20559) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D4B98u;
            return;
        }
    }
    ctx->pc = 0x2C8A50u;
label_2c8a50:
    // 0x2c8a50: 0x3b535350  xori        $s3, $k0, 0x5350
    ctx->pc = 0x2c8a50u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 26) ^ (uint64_t)(uint16_t)21328);
label_2c8a54:
    // 0x2c8a54: 0x31  tgeu        $zero, $zero, 0
    ctx->pc = 0x2c8a54u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2c8a58:
    // 0x2c8a58: 0x0  nop
    ctx->pc = 0x2c8a58u;
    // NOP
label_2c8a5c:
    // 0x2c8a5c: 0x0  nop
    ctx->pc = 0x2c8a5cu;
    // NOP
label_2c8a60:
    // 0x2c8a60: 0x564f4d5c  bnel        $s2, $t7, . + 4 + (0x4D5C << 2)
label_2c8a64:
    if (ctx->pc == 0x2C8A64u) {
        ctx->pc = 0x2C8A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8A60u;
        // 0x2c8a64: 0x5c334549  .word       0x5C334549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00130000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x2C8A64 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8A68u;
        goto label_2c8a68;
    }
    ctx->pc = 0x2C8A60u;
    {
        const bool branch_taken_0x2c8a60 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 15));
        if (branch_taken_0x2c8a60) {
            ctx->pc = 0x2C8A64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8A60u;
            // 0x2c8a64: 0x5c334549  .word       0x5C334549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00130000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x2C8A64 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DBFD4u;
            return;
        }
    }
    ctx->pc = 0x2C8A68u;
label_2c8a68:
    // 0x2c8a68: 0x5f373053  .word       0x5F373053                   # bgtzl       $t9, . + 4 + (0x3053 << 2) # 00170000 <InstrIdType: CPU_NORMAL>
label_2c8a6c:
    if (ctx->pc == 0x2C8A6Cu) {
        ctx->pc = 0x2C8A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8A68u;
        // 0x2c8a6c: 0x2e32504f  sltiu       $s2, $s1, 0x504F (Delay Slot)
        SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)20559) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8A70u;
        goto label_2c8a70;
    }
    ctx->pc = 0x2C8A68u;
    {
        const bool branch_taken_0x2c8a68 = (GPR_S32(ctx, 25) > 0);
        if (branch_taken_0x2c8a68) {
            ctx->pc = 0x2C8A6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8A68u;
            // 0x2c8a6c: 0x2e32504f  sltiu       $s2, $s1, 0x504F (Delay Slot)
            SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)20559) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D4BB8u;
            return;
        }
    }
    ctx->pc = 0x2C8A70u;
label_2c8a70:
    // 0x2c8a70: 0x3b535350  xori        $s3, $k0, 0x5350
    ctx->pc = 0x2c8a70u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 26) ^ (uint64_t)(uint16_t)21328);
label_2c8a74:
    // 0x2c8a74: 0x31  tgeu        $zero, $zero, 0
    ctx->pc = 0x2c8a74u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2c8a78:
    // 0x2c8a78: 0x0  nop
    ctx->pc = 0x2c8a78u;
    // NOP
label_2c8a7c:
    // 0x2c8a7c: 0x0  nop
    ctx->pc = 0x2c8a7cu;
    // NOP
    ctx->pc = 0x2c8a80u;
    return;
}

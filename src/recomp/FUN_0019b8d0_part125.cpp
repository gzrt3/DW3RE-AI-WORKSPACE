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


void FUN_0019b8d0_part125(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1d8190u: goto label_1d8190;
        case 0x1d8194u: goto label_1d8194;
        case 0x1d8198u: goto label_1d8198;
        case 0x1d819cu: goto label_1d819c;
        case 0x1d81a0u: goto label_1d81a0;
        case 0x1d81a4u: goto label_1d81a4;
        case 0x1d81a8u: goto label_1d81a8;
        case 0x1d81acu: goto label_1d81ac;
        case 0x1d81b0u: goto label_1d81b0;
        case 0x1d81b4u: goto label_1d81b4;
        case 0x1d81b8u: goto label_1d81b8;
        case 0x1d81bcu: goto label_1d81bc;
        case 0x1d81c0u: goto label_1d81c0;
        case 0x1d81c4u: goto label_1d81c4;
        case 0x1d81c8u: goto label_1d81c8;
        case 0x1d81ccu: goto label_1d81cc;
        case 0x1d81d0u: goto label_1d81d0;
        case 0x1d81d4u: goto label_1d81d4;
        case 0x1d81d8u: goto label_1d81d8;
        case 0x1d81dcu: goto label_1d81dc;
        case 0x1d81e0u: goto label_1d81e0;
        case 0x1d81e4u: goto label_1d81e4;
        case 0x1d81e8u: goto label_1d81e8;
        case 0x1d81ecu: goto label_1d81ec;
        case 0x1d81f0u: goto label_1d81f0;
        case 0x1d81f4u: goto label_1d81f4;
        case 0x1d81f8u: goto label_1d81f8;
        case 0x1d81fcu: goto label_1d81fc;
        case 0x1d8200u: goto label_1d8200;
        case 0x1d8204u: goto label_1d8204;
        case 0x1d8208u: goto label_1d8208;
        case 0x1d820cu: goto label_1d820c;
        case 0x1d8210u: goto label_1d8210;
        case 0x1d8214u: goto label_1d8214;
        case 0x1d8218u: goto label_1d8218;
        case 0x1d821cu: goto label_1d821c;
        case 0x1d8220u: goto label_1d8220;
        case 0x1d8224u: goto label_1d8224;
        case 0x1d8228u: goto label_1d8228;
        case 0x1d822cu: goto label_1d822c;
        case 0x1d8230u: goto label_1d8230;
        case 0x1d8234u: goto label_1d8234;
        case 0x1d8238u: goto label_1d8238;
        case 0x1d823cu: goto label_1d823c;
        case 0x1d8240u: goto label_1d8240;
        case 0x1d8244u: goto label_1d8244;
        case 0x1d8248u: goto label_1d8248;
        case 0x1d824cu: goto label_1d824c;
        case 0x1d8250u: goto label_1d8250;
        case 0x1d8254u: goto label_1d8254;
        case 0x1d8258u: goto label_1d8258;
        case 0x1d825cu: goto label_1d825c;
        case 0x1d8260u: goto label_1d8260;
        case 0x1d8264u: goto label_1d8264;
        case 0x1d8268u: goto label_1d8268;
        case 0x1d826cu: goto label_1d826c;
        case 0x1d8270u: goto label_1d8270;
        case 0x1d8274u: goto label_1d8274;
        case 0x1d8278u: goto label_1d8278;
        case 0x1d827cu: goto label_1d827c;
        case 0x1d8280u: goto label_1d8280;
        case 0x1d8284u: goto label_1d8284;
        case 0x1d8288u: goto label_1d8288;
        case 0x1d828cu: goto label_1d828c;
        case 0x1d8290u: goto label_1d8290;
        case 0x1d8294u: goto label_1d8294;
        case 0x1d8298u: goto label_1d8298;
        case 0x1d829cu: goto label_1d829c;
        case 0x1d82a0u: goto label_1d82a0;
        case 0x1d82a4u: goto label_1d82a4;
        case 0x1d82a8u: goto label_1d82a8;
        case 0x1d82acu: goto label_1d82ac;
        case 0x1d82b0u: goto label_1d82b0;
        case 0x1d82b4u: goto label_1d82b4;
        case 0x1d82b8u: goto label_1d82b8;
        case 0x1d82bcu: goto label_1d82bc;
        case 0x1d82c0u: goto label_1d82c0;
        case 0x1d82c4u: goto label_1d82c4;
        case 0x1d82c8u: goto label_1d82c8;
        case 0x1d82ccu: goto label_1d82cc;
        case 0x1d82d0u: goto label_1d82d0;
        case 0x1d82d4u: goto label_1d82d4;
        case 0x1d82d8u: goto label_1d82d8;
        case 0x1d82dcu: goto label_1d82dc;
        case 0x1d82e0u: goto label_1d82e0;
        case 0x1d82e4u: goto label_1d82e4;
        case 0x1d82e8u: goto label_1d82e8;
        case 0x1d82ecu: goto label_1d82ec;
        case 0x1d82f0u: goto label_1d82f0;
        case 0x1d82f4u: goto label_1d82f4;
        case 0x1d82f8u: goto label_1d82f8;
        case 0x1d82fcu: goto label_1d82fc;
        case 0x1d8300u: goto label_1d8300;
        case 0x1d8304u: goto label_1d8304;
        case 0x1d8308u: goto label_1d8308;
        case 0x1d830cu: goto label_1d830c;
        case 0x1d8310u: goto label_1d8310;
        case 0x1d8314u: goto label_1d8314;
        case 0x1d8318u: goto label_1d8318;
        case 0x1d831cu: goto label_1d831c;
        case 0x1d8320u: goto label_1d8320;
        case 0x1d8324u: goto label_1d8324;
        case 0x1d8328u: goto label_1d8328;
        case 0x1d832cu: goto label_1d832c;
        case 0x1d8330u: goto label_1d8330;
        case 0x1d8334u: goto label_1d8334;
        case 0x1d8338u: goto label_1d8338;
        case 0x1d833cu: goto label_1d833c;
        case 0x1d8340u: goto label_1d8340;
        case 0x1d8344u: goto label_1d8344;
        case 0x1d8348u: goto label_1d8348;
        case 0x1d834cu: goto label_1d834c;
        case 0x1d8350u: goto label_1d8350;
        case 0x1d8354u: goto label_1d8354;
        case 0x1d8358u: goto label_1d8358;
        case 0x1d835cu: goto label_1d835c;
        case 0x1d8360u: goto label_1d8360;
        case 0x1d8364u: goto label_1d8364;
        case 0x1d8368u: goto label_1d8368;
        case 0x1d836cu: goto label_1d836c;
        case 0x1d8370u: goto label_1d8370;
        case 0x1d8374u: goto label_1d8374;
        case 0x1d8378u: goto label_1d8378;
        case 0x1d837cu: goto label_1d837c;
        case 0x1d8380u: goto label_1d8380;
        case 0x1d8384u: goto label_1d8384;
        case 0x1d8388u: goto label_1d8388;
        case 0x1d838cu: goto label_1d838c;
        case 0x1d8390u: goto label_1d8390;
        case 0x1d8394u: goto label_1d8394;
        case 0x1d8398u: goto label_1d8398;
        case 0x1d839cu: goto label_1d839c;
        case 0x1d83a0u: goto label_1d83a0;
        case 0x1d83a4u: goto label_1d83a4;
        case 0x1d83a8u: goto label_1d83a8;
        case 0x1d83acu: goto label_1d83ac;
        case 0x1d83b0u: goto label_1d83b0;
        case 0x1d83b4u: goto label_1d83b4;
        case 0x1d83b8u: goto label_1d83b8;
        case 0x1d83bcu: goto label_1d83bc;
        case 0x1d83c0u: goto label_1d83c0;
        case 0x1d83c4u: goto label_1d83c4;
        case 0x1d83c8u: goto label_1d83c8;
        case 0x1d83ccu: goto label_1d83cc;
        case 0x1d83d0u: goto label_1d83d0;
        case 0x1d83d4u: goto label_1d83d4;
        case 0x1d83d8u: goto label_1d83d8;
        case 0x1d83dcu: goto label_1d83dc;
        case 0x1d83e0u: goto label_1d83e0;
        case 0x1d83e4u: goto label_1d83e4;
        case 0x1d83e8u: goto label_1d83e8;
        case 0x1d83ecu: goto label_1d83ec;
        case 0x1d83f0u: goto label_1d83f0;
        case 0x1d83f4u: goto label_1d83f4;
        case 0x1d83f8u: goto label_1d83f8;
        case 0x1d83fcu: goto label_1d83fc;
        case 0x1d8400u: goto label_1d8400;
        case 0x1d8404u: goto label_1d8404;
        case 0x1d8408u: goto label_1d8408;
        case 0x1d840cu: goto label_1d840c;
        case 0x1d8410u: goto label_1d8410;
        case 0x1d8414u: goto label_1d8414;
        case 0x1d8418u: goto label_1d8418;
        case 0x1d841cu: goto label_1d841c;
        case 0x1d8420u: goto label_1d8420;
        case 0x1d8424u: goto label_1d8424;
        case 0x1d8428u: goto label_1d8428;
        case 0x1d842cu: goto label_1d842c;
        case 0x1d8430u: goto label_1d8430;
        case 0x1d8434u: goto label_1d8434;
        case 0x1d8438u: goto label_1d8438;
        case 0x1d843cu: goto label_1d843c;
        case 0x1d8440u: goto label_1d8440;
        case 0x1d8444u: goto label_1d8444;
        case 0x1d8448u: goto label_1d8448;
        case 0x1d844cu: goto label_1d844c;
        case 0x1d8450u: goto label_1d8450;
        case 0x1d8454u: goto label_1d8454;
        case 0x1d8458u: goto label_1d8458;
        case 0x1d845cu: goto label_1d845c;
        case 0x1d8460u: goto label_1d8460;
        case 0x1d8464u: goto label_1d8464;
        case 0x1d8468u: goto label_1d8468;
        case 0x1d846cu: goto label_1d846c;
        case 0x1d8470u: goto label_1d8470;
        case 0x1d8474u: goto label_1d8474;
        case 0x1d8478u: goto label_1d8478;
        case 0x1d847cu: goto label_1d847c;
        case 0x1d8480u: goto label_1d8480;
        case 0x1d8484u: goto label_1d8484;
        case 0x1d8488u: goto label_1d8488;
        case 0x1d848cu: goto label_1d848c;
        case 0x1d8490u: goto label_1d8490;
        case 0x1d8494u: goto label_1d8494;
        case 0x1d8498u: goto label_1d8498;
        case 0x1d849cu: goto label_1d849c;
        case 0x1d84a0u: goto label_1d84a0;
        case 0x1d84a4u: goto label_1d84a4;
        case 0x1d84a8u: goto label_1d84a8;
        case 0x1d84acu: goto label_1d84ac;
        case 0x1d84b0u: goto label_1d84b0;
        case 0x1d84b4u: goto label_1d84b4;
        case 0x1d84b8u: goto label_1d84b8;
        case 0x1d84bcu: goto label_1d84bc;
        case 0x1d84c0u: goto label_1d84c0;
        case 0x1d84c4u: goto label_1d84c4;
        case 0x1d84c8u: goto label_1d84c8;
        case 0x1d84ccu: goto label_1d84cc;
        case 0x1d84d0u: goto label_1d84d0;
        case 0x1d84d4u: goto label_1d84d4;
        case 0x1d84d8u: goto label_1d84d8;
        case 0x1d84dcu: goto label_1d84dc;
        case 0x1d84e0u: goto label_1d84e0;
        case 0x1d84e4u: goto label_1d84e4;
        case 0x1d84e8u: goto label_1d84e8;
        case 0x1d84ecu: goto label_1d84ec;
        case 0x1d84f0u: goto label_1d84f0;
        case 0x1d84f4u: goto label_1d84f4;
        case 0x1d84f8u: goto label_1d84f8;
        case 0x1d84fcu: goto label_1d84fc;
        case 0x1d8500u: goto label_1d8500;
        case 0x1d8504u: goto label_1d8504;
        case 0x1d8508u: goto label_1d8508;
        case 0x1d850cu: goto label_1d850c;
        case 0x1d8510u: goto label_1d8510;
        case 0x1d8514u: goto label_1d8514;
        case 0x1d8518u: goto label_1d8518;
        case 0x1d851cu: goto label_1d851c;
        case 0x1d8520u: goto label_1d8520;
        case 0x1d8524u: goto label_1d8524;
        case 0x1d8528u: goto label_1d8528;
        case 0x1d852cu: goto label_1d852c;
        case 0x1d8530u: goto label_1d8530;
        case 0x1d8534u: goto label_1d8534;
        case 0x1d8538u: goto label_1d8538;
        case 0x1d853cu: goto label_1d853c;
        case 0x1d8540u: goto label_1d8540;
        case 0x1d8544u: goto label_1d8544;
        case 0x1d8548u: goto label_1d8548;
        case 0x1d854cu: goto label_1d854c;
        case 0x1d8550u: goto label_1d8550;
        case 0x1d8554u: goto label_1d8554;
        case 0x1d8558u: goto label_1d8558;
        case 0x1d855cu: goto label_1d855c;
        case 0x1d8560u: goto label_1d8560;
        case 0x1d8564u: goto label_1d8564;
        case 0x1d8568u: goto label_1d8568;
        case 0x1d856cu: goto label_1d856c;
        case 0x1d8570u: goto label_1d8570;
        case 0x1d8574u: goto label_1d8574;
        case 0x1d8578u: goto label_1d8578;
        case 0x1d857cu: goto label_1d857c;
        case 0x1d8580u: goto label_1d8580;
        case 0x1d8584u: goto label_1d8584;
        case 0x1d8588u: goto label_1d8588;
        case 0x1d858cu: goto label_1d858c;
        case 0x1d8590u: goto label_1d8590;
        case 0x1d8594u: goto label_1d8594;
        case 0x1d8598u: goto label_1d8598;
        case 0x1d859cu: goto label_1d859c;
        case 0x1d85a0u: goto label_1d85a0;
        case 0x1d85a4u: goto label_1d85a4;
        case 0x1d85a8u: goto label_1d85a8;
        case 0x1d85acu: goto label_1d85ac;
        case 0x1d85b0u: goto label_1d85b0;
        case 0x1d85b4u: goto label_1d85b4;
        case 0x1d85b8u: goto label_1d85b8;
        case 0x1d85bcu: goto label_1d85bc;
        case 0x1d85c0u: goto label_1d85c0;
        case 0x1d85c4u: goto label_1d85c4;
        case 0x1d85c8u: goto label_1d85c8;
        case 0x1d85ccu: goto label_1d85cc;
        case 0x1d85d0u: goto label_1d85d0;
        case 0x1d85d4u: goto label_1d85d4;
        case 0x1d85d8u: goto label_1d85d8;
        case 0x1d85dcu: goto label_1d85dc;
        case 0x1d85e0u: goto label_1d85e0;
        case 0x1d85e4u: goto label_1d85e4;
        case 0x1d85e8u: goto label_1d85e8;
        case 0x1d85ecu: goto label_1d85ec;
        case 0x1d85f0u: goto label_1d85f0;
        case 0x1d85f4u: goto label_1d85f4;
        case 0x1d85f8u: goto label_1d85f8;
        case 0x1d85fcu: goto label_1d85fc;
        case 0x1d8600u: goto label_1d8600;
        case 0x1d8604u: goto label_1d8604;
        case 0x1d8608u: goto label_1d8608;
        case 0x1d860cu: goto label_1d860c;
        case 0x1d8610u: goto label_1d8610;
        case 0x1d8614u: goto label_1d8614;
        case 0x1d8618u: goto label_1d8618;
        case 0x1d861cu: goto label_1d861c;
        case 0x1d8620u: goto label_1d8620;
        case 0x1d8624u: goto label_1d8624;
        case 0x1d8628u: goto label_1d8628;
        case 0x1d862cu: goto label_1d862c;
        case 0x1d8630u: goto label_1d8630;
        case 0x1d8634u: goto label_1d8634;
        case 0x1d8638u: goto label_1d8638;
        case 0x1d863cu: goto label_1d863c;
        case 0x1d8640u: goto label_1d8640;
        case 0x1d8644u: goto label_1d8644;
        case 0x1d8648u: goto label_1d8648;
        case 0x1d864cu: goto label_1d864c;
        case 0x1d8650u: goto label_1d8650;
        case 0x1d8654u: goto label_1d8654;
        case 0x1d8658u: goto label_1d8658;
        case 0x1d865cu: goto label_1d865c;
        case 0x1d8660u: goto label_1d8660;
        case 0x1d8664u: goto label_1d8664;
        case 0x1d8668u: goto label_1d8668;
        case 0x1d866cu: goto label_1d866c;
        case 0x1d8670u: goto label_1d8670;
        case 0x1d8674u: goto label_1d8674;
        case 0x1d8678u: goto label_1d8678;
        case 0x1d867cu: goto label_1d867c;
        case 0x1d8680u: goto label_1d8680;
        case 0x1d8684u: goto label_1d8684;
        case 0x1d8688u: goto label_1d8688;
        case 0x1d868cu: goto label_1d868c;
        case 0x1d8690u: goto label_1d8690;
        case 0x1d8694u: goto label_1d8694;
        case 0x1d8698u: goto label_1d8698;
        case 0x1d869cu: goto label_1d869c;
        case 0x1d86a0u: goto label_1d86a0;
        case 0x1d86a4u: goto label_1d86a4;
        case 0x1d86a8u: goto label_1d86a8;
        case 0x1d86acu: goto label_1d86ac;
        case 0x1d86b0u: goto label_1d86b0;
        case 0x1d86b4u: goto label_1d86b4;
        case 0x1d86b8u: goto label_1d86b8;
        case 0x1d86bcu: goto label_1d86bc;
        case 0x1d86c0u: goto label_1d86c0;
        case 0x1d86c4u: goto label_1d86c4;
        case 0x1d86c8u: goto label_1d86c8;
        case 0x1d86ccu: goto label_1d86cc;
        case 0x1d86d0u: goto label_1d86d0;
        case 0x1d86d4u: goto label_1d86d4;
        case 0x1d86d8u: goto label_1d86d8;
        case 0x1d86dcu: goto label_1d86dc;
        case 0x1d86e0u: goto label_1d86e0;
        case 0x1d86e4u: goto label_1d86e4;
        case 0x1d86e8u: goto label_1d86e8;
        case 0x1d86ecu: goto label_1d86ec;
        case 0x1d86f0u: goto label_1d86f0;
        case 0x1d86f4u: goto label_1d86f4;
        case 0x1d86f8u: goto label_1d86f8;
        case 0x1d86fcu: goto label_1d86fc;
        case 0x1d8700u: goto label_1d8700;
        case 0x1d8704u: goto label_1d8704;
        case 0x1d8708u: goto label_1d8708;
        case 0x1d870cu: goto label_1d870c;
        case 0x1d8710u: goto label_1d8710;
        case 0x1d8714u: goto label_1d8714;
        case 0x1d8718u: goto label_1d8718;
        case 0x1d871cu: goto label_1d871c;
        case 0x1d8720u: goto label_1d8720;
        case 0x1d8724u: goto label_1d8724;
        case 0x1d8728u: goto label_1d8728;
        case 0x1d872cu: goto label_1d872c;
        case 0x1d8730u: goto label_1d8730;
        case 0x1d8734u: goto label_1d8734;
        case 0x1d8738u: goto label_1d8738;
        case 0x1d873cu: goto label_1d873c;
        case 0x1d8740u: goto label_1d8740;
        case 0x1d8744u: goto label_1d8744;
        case 0x1d8748u: goto label_1d8748;
        case 0x1d874cu: goto label_1d874c;
        case 0x1d8750u: goto label_1d8750;
        case 0x1d8754u: goto label_1d8754;
        case 0x1d8758u: goto label_1d8758;
        case 0x1d875cu: goto label_1d875c;
        case 0x1d8760u: goto label_1d8760;
        case 0x1d8764u: goto label_1d8764;
        case 0x1d8768u: goto label_1d8768;
        case 0x1d876cu: goto label_1d876c;
        case 0x1d8770u: goto label_1d8770;
        case 0x1d8774u: goto label_1d8774;
        case 0x1d8778u: goto label_1d8778;
        case 0x1d877cu: goto label_1d877c;
        case 0x1d8780u: goto label_1d8780;
        case 0x1d8784u: goto label_1d8784;
        case 0x1d8788u: goto label_1d8788;
        case 0x1d878cu: goto label_1d878c;
        case 0x1d8790u: goto label_1d8790;
        case 0x1d8794u: goto label_1d8794;
        case 0x1d8798u: goto label_1d8798;
        case 0x1d879cu: goto label_1d879c;
        case 0x1d87a0u: goto label_1d87a0;
        case 0x1d87a4u: goto label_1d87a4;
        case 0x1d87a8u: goto label_1d87a8;
        case 0x1d87acu: goto label_1d87ac;
        case 0x1d87b0u: goto label_1d87b0;
        case 0x1d87b4u: goto label_1d87b4;
        case 0x1d87b8u: goto label_1d87b8;
        case 0x1d87bcu: goto label_1d87bc;
        case 0x1d87c0u: goto label_1d87c0;
        case 0x1d87c4u: goto label_1d87c4;
        case 0x1d87c8u: goto label_1d87c8;
        case 0x1d87ccu: goto label_1d87cc;
        case 0x1d87d0u: goto label_1d87d0;
        case 0x1d87d4u: goto label_1d87d4;
        case 0x1d87d8u: goto label_1d87d8;
        case 0x1d87dcu: goto label_1d87dc;
        case 0x1d87e0u: goto label_1d87e0;
        case 0x1d87e4u: goto label_1d87e4;
        case 0x1d87e8u: goto label_1d87e8;
        case 0x1d87ecu: goto label_1d87ec;
        case 0x1d87f0u: goto label_1d87f0;
        case 0x1d87f4u: goto label_1d87f4;
        case 0x1d87f8u: goto label_1d87f8;
        case 0x1d87fcu: goto label_1d87fc;
        case 0x1d8800u: goto label_1d8800;
        case 0x1d8804u: goto label_1d8804;
        case 0x1d8808u: goto label_1d8808;
        case 0x1d880cu: goto label_1d880c;
        case 0x1d8810u: goto label_1d8810;
        case 0x1d8814u: goto label_1d8814;
        case 0x1d8818u: goto label_1d8818;
        case 0x1d881cu: goto label_1d881c;
        case 0x1d8820u: goto label_1d8820;
        case 0x1d8824u: goto label_1d8824;
        case 0x1d8828u: goto label_1d8828;
        case 0x1d882cu: goto label_1d882c;
        case 0x1d8830u: goto label_1d8830;
        case 0x1d8834u: goto label_1d8834;
        case 0x1d8838u: goto label_1d8838;
        case 0x1d883cu: goto label_1d883c;
        case 0x1d8840u: goto label_1d8840;
        case 0x1d8844u: goto label_1d8844;
        case 0x1d8848u: goto label_1d8848;
        case 0x1d884cu: goto label_1d884c;
        case 0x1d8850u: goto label_1d8850;
        case 0x1d8854u: goto label_1d8854;
        case 0x1d8858u: goto label_1d8858;
        case 0x1d885cu: goto label_1d885c;
        case 0x1d8860u: goto label_1d8860;
        case 0x1d8864u: goto label_1d8864;
        case 0x1d8868u: goto label_1d8868;
        case 0x1d886cu: goto label_1d886c;
        case 0x1d8870u: goto label_1d8870;
        case 0x1d8874u: goto label_1d8874;
        case 0x1d8878u: goto label_1d8878;
        case 0x1d887cu: goto label_1d887c;
        case 0x1d8880u: goto label_1d8880;
        case 0x1d8884u: goto label_1d8884;
        case 0x1d8888u: goto label_1d8888;
        case 0x1d888cu: goto label_1d888c;
        case 0x1d8890u: goto label_1d8890;
        case 0x1d8894u: goto label_1d8894;
        case 0x1d8898u: goto label_1d8898;
        case 0x1d889cu: goto label_1d889c;
        case 0x1d88a0u: goto label_1d88a0;
        case 0x1d88a4u: goto label_1d88a4;
        case 0x1d88a8u: goto label_1d88a8;
        case 0x1d88acu: goto label_1d88ac;
        case 0x1d88b0u: goto label_1d88b0;
        case 0x1d88b4u: goto label_1d88b4;
        case 0x1d88b8u: goto label_1d88b8;
        case 0x1d88bcu: goto label_1d88bc;
        case 0x1d88c0u: goto label_1d88c0;
        case 0x1d88c4u: goto label_1d88c4;
        case 0x1d88c8u: goto label_1d88c8;
        case 0x1d88ccu: goto label_1d88cc;
        case 0x1d88d0u: goto label_1d88d0;
        case 0x1d88d4u: goto label_1d88d4;
        case 0x1d88d8u: goto label_1d88d8;
        case 0x1d88dcu: goto label_1d88dc;
        case 0x1d88e0u: goto label_1d88e0;
        case 0x1d88e4u: goto label_1d88e4;
        case 0x1d88e8u: goto label_1d88e8;
        case 0x1d88ecu: goto label_1d88ec;
        case 0x1d88f0u: goto label_1d88f0;
        case 0x1d88f4u: goto label_1d88f4;
        case 0x1d88f8u: goto label_1d88f8;
        case 0x1d88fcu: goto label_1d88fc;
        case 0x1d8900u: goto label_1d8900;
        case 0x1d8904u: goto label_1d8904;
        case 0x1d8908u: goto label_1d8908;
        case 0x1d890cu: goto label_1d890c;
        case 0x1d8910u: goto label_1d8910;
        case 0x1d8914u: goto label_1d8914;
        case 0x1d8918u: goto label_1d8918;
        case 0x1d891cu: goto label_1d891c;
        case 0x1d8920u: goto label_1d8920;
        case 0x1d8924u: goto label_1d8924;
        case 0x1d8928u: goto label_1d8928;
        case 0x1d892cu: goto label_1d892c;
        case 0x1d8930u: goto label_1d8930;
        case 0x1d8934u: goto label_1d8934;
        case 0x1d8938u: goto label_1d8938;
        case 0x1d893cu: goto label_1d893c;
        case 0x1d8940u: goto label_1d8940;
        case 0x1d8944u: goto label_1d8944;
        case 0x1d8948u: goto label_1d8948;
        case 0x1d894cu: goto label_1d894c;
        case 0x1d8950u: goto label_1d8950;
        case 0x1d8954u: goto label_1d8954;
        case 0x1d8958u: goto label_1d8958;
        case 0x1d895cu: goto label_1d895c;
        default: return;
    }

label_1d8190:
    // 0x1d8190: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d8190u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1d8194:
    // 0x1d8194: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1d8194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d8198:
    // 0x1d8198: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x1d8198u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_1d819c:
    // 0x1d819c: 0x8f838cf0  lw          $v1, -0x7310($gp)
    ctx->pc = 0x1d819cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937840)));
label_1d81a0:
    // 0x1d81a0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d81a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1d81a4:
    // 0x1d81a4: 0xaf838cf0  sw          $v1, -0x7310($gp)
    ctx->pc = 0x1d81a4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937840), GPR_U32(ctx, 3));
label_1d81a8:
    // 0x1d81a8: 0x8f838cf0  lw          $v1, -0x7310($gp)
    ctx->pc = 0x1d81a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937840)));
label_1d81ac:
    // 0x1d81ac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d81acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1d81b0:
    // 0x1d81b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d81b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d81b4:
    // 0x1d81b4: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1d81b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_1d81b8:
    // 0x1d81b8: 0x8f828cf0  lw          $v0, -0x7310($gp)
    ctx->pc = 0x1d81b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937840)));
label_1d81bc:
    // 0x1d81bc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d81bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1d81c0:
    // 0x1d81c0: 0xc04439c  jal         func_110E70
label_1d81c4:
    if (ctx->pc == 0x1D81C4u) {
        ctx->pc = 0x1D81C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D81C0u;
        // 0x1d81c4: 0xaf828cf0  sw          $v0, -0x7310($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937840), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D81C8u;
        goto label_1d81c8;
    }
    ctx->pc = 0x1D81C0u;
    SET_GPR_U32(ctx, 31, 0x1D81C8u);
    ctx->pc = 0x1D81C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D81C0u;
    // 0x1d81c4: 0xaf828cf0  sw          $v0, -0x7310($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937840), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110E70u, 0x1D81C0u, 0x1D81C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D81C8u;
label_1d81c8:
    // 0x1d81c8: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_1d81cc:
    if (ctx->pc == 0x1D81CCu) {
        ctx->pc = 0x1D81D0u;
        goto label_1d81d0;
    }
    ctx->pc = 0x1D81C8u;
    {
        const bool branch_taken_0x1d81c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d81c8) {
            ctx->pc = 0x1D81F8u;
            goto label_1d81f8;
        }
    }
    ctx->pc = 0x1D81D0u;
label_1d81d0:
    // 0x1d81d0: 0x8f838cf0  lw          $v1, -0x7310($gp)
    ctx->pc = 0x1d81d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937840)));
label_1d81d4:
    // 0x1d81d4: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1d81d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
label_1d81d8:
    // 0x1d81d8: 0x24420660  addiu       $v0, $v0, 0x660
    ctx->pc = 0x1d81d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1632));
label_1d81dc:
    // 0x1d81dc: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1d81dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1d81e0:
    // 0x1d81e0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d81e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1d81e4:
    // 0x1d81e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d81e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d81e8:
    // 0x1d81e8: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1d81e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_1d81ec:
    // 0x1d81ec: 0x8f828cf0  lw          $v0, -0x7310($gp)
    ctx->pc = 0x1d81ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937840)));
label_1d81f0:
    // 0x1d81f0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d81f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1d81f4:
    // 0x1d81f4: 0xaf828cf0  sw          $v0, -0x7310($gp)
    ctx->pc = 0x1d81f4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937840), GPR_U32(ctx, 2));
label_1d81f8:
    // 0x1d81f8: 0x8f838cf0  lw          $v1, -0x7310($gp)
    ctx->pc = 0x1d81f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937840)));
label_1d81fc:
    // 0x1d81fc: 0x3c05004b  lui         $a1, 0x4B
    ctx->pc = 0x1d81fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)75 << 16));
label_1d8200:
    // 0x1d8200: 0x3c040029  lui         $a0, 0x29
    ctx->pc = 0x1d8200u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)41 << 16));
label_1d8204:
    // 0x1d8204: 0xaf808ce8  sw          $zero, -0x7318($gp)
    ctx->pc = 0x1d8204u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937832), GPR_U32(ctx, 0));
label_1d8208:
    // 0x1d8208: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d8208u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d820c:
    // 0x1d820c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d820cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d8210:
    // 0x1d8210: 0x24a50660  addiu       $a1, $a1, 0x660
    ctx->pc = 0x1d8210u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1632));
label_1d8214:
    // 0x1d8214: 0x1000000b  b           . + 4 + (0xB << 2)
label_1d8218:
    if (ctx->pc == 0x1D8218u) {
        ctx->pc = 0x1D8218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8214u;
        // 0x1d8218: 0x2484b680  addiu       $a0, $a0, -0x4980 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D821Cu;
        goto label_1d821c;
    }
    ctx->pc = 0x1D8214u;
    {
        const bool branch_taken_0x1d8214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8214u;
        // 0x1d8218: 0x2484b680  addiu       $a0, $a0, -0x4980 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948480));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8214) {
            ctx->pc = 0x1D8244u;
            goto label_1d8244;
        }
    }
    ctx->pc = 0x1D821Cu;
label_1d821c:
    // 0x1d821c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d821cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d8220:
    // 0x1d8220: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d8220u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1d8224:
    // 0x1d8224: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1d8224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1d8228:
    // 0x1d8228: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d8228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d822c:
    // 0x1d822c: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
label_1d8230:
    if (ctx->pc == 0x1D8230u) {
        ctx->pc = 0x1D8234u;
        goto label_1d8234;
    }
    ctx->pc = 0x1D822Cu;
    {
        const bool branch_taken_0x1d822c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d822c) {
            ctx->pc = 0x1D823Cu;
            goto label_1d823c;
        }
    }
    ctx->pc = 0x1D8234u;
label_1d8234:
    // 0x1d8234: 0x10000007  b           . + 4 + (0x7 << 2)
label_1d8238:
    if (ctx->pc == 0x1D8238u) {
        ctx->pc = 0x1D8238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8234u;
        // 0x1d8238: 0xaf868ce8  sw          $a2, -0x7318($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937832), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D823Cu;
        goto label_1d823c;
    }
    ctx->pc = 0x1D8234u;
    {
        const bool branch_taken_0x1d8234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8234u;
        // 0x1d8238: 0xaf868ce8  sw          $a2, -0x7318($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937832), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8234) {
            ctx->pc = 0x1D8254u;
            goto label_1d8254;
        }
    }
    ctx->pc = 0x1D823Cu;
label_1d823c:
    // 0x1d823c: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x1d823cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_1d8240:
    // 0x1d8240: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1d8240u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1d8244:
    // 0x1d8244: 0x0  nop
    ctx->pc = 0x1d8244u;
    // NOP
label_1d8248:
    // 0x1d8248: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x1d8248u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1d824c:
    // 0x1d824c: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
label_1d8250:
    if (ctx->pc == 0x1D8250u) {
        ctx->pc = 0x1D8250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D824Cu;
        // 0x1d8250: 0xa71021  addu        $v0, $a1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8254u;
        goto label_1d8254;
    }
    ctx->pc = 0x1D824Cu;
    {
        const bool branch_taken_0x1d824c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D8250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D824Cu;
        // 0x1d8250: 0xa71021  addu        $v0, $a1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d824c) {
            ctx->pc = 0x1D821Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d821c;
        }
    }
    ctx->pc = 0x1D8254u;
label_1d8254:
    // 0x1d8254: 0x0  nop
    ctx->pc = 0x1d8254u;
    // NOP
label_1d8258:
    // 0x1d8258: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1d8258u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d825c:
    // 0x1d825c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1d825cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d8260:
    // 0x1d8260: 0x27828ce0  addiu       $v0, $gp, -0x7320
    ctx->pc = 0x1d8260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937824));
label_1d8264:
    // 0x1d8264: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1d8264u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1d8268:
    // 0x1d8268: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1d8268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1d826c:
    // 0x1d826c: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x1d826cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d8270:
    // 0x1d8270: 0xc05e234  jal         func_1788D0
label_1d8274:
    if (ctx->pc == 0x1D8274u) {
        ctx->pc = 0x1D8274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8270u;
        // 0x1d8274: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8278u;
        goto label_1d8278;
    }
    ctx->pc = 0x1D8270u;
    SET_GPR_U32(ctx, 31, 0x1D8278u);
    ctx->pc = 0x1D8274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8270u;
    // 0x1d8274: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788D0u, 0x1D8270u, 0x1D8278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8278u;
label_1d8278:
    // 0x1d8278: 0x240201c0  addiu       $v0, $zero, 0x1C0
    ctx->pc = 0x1d8278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_1d827c:
    // 0x1d827c: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1d827cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1d8280:
    // 0x1d8280: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1d8280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_1d8284:
    // 0x1d8284: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x1d8284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_1d8288:
    // 0x1d8288: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d8288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d828c:
    // 0x1d828c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d828cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d8290:
    // 0x1d8290: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1d8290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_1d8294:
    // 0x1d8294: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d8294u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d8298:
    // 0x1d8298: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d8298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d829c:
    // 0x1d829c: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x1d829cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_1d82a0:
    // 0x1d82a0: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x1d82a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_1d82a4:
    // 0x1d82a4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d82a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d82a8:
    // 0x1d82a8: 0xdc250480  ld          $a1, 0x480($at)
    ctx->pc = 0x1d82a8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 1152)));
label_1d82ac:
    // 0x1d82ac: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d82acu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d82b0:
    // 0x1d82b0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d82b0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d82b4:
    // 0x1d82b4: 0xc05de30  jal         func_1778C0
label_1d82b8:
    if (ctx->pc == 0x1D82B8u) {
        ctx->pc = 0x1D82B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D82B4u;
        // 0x1d82b8: 0x240b0280  addiu       $t3, $zero, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D82BCu;
        goto label_1d82bc;
    }
    ctx->pc = 0x1D82B4u;
    SET_GPR_U32(ctx, 31, 0x1D82BCu);
    ctx->pc = 0x1D82B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D82B4u;
    // 0x1d82b8: 0x240b0280  addiu       $t3, $zero, 0x280 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x1D82B4u, 0x1D82BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D82BCu;
label_1d82bc:
    // 0x1d82bc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d82bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1d82c0:
    // 0x1d82c0: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x1d82c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_1d82c4:
    // 0x1d82c4: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
label_1d82c8:
    if (ctx->pc == 0x1D82C8u) {
        ctx->pc = 0x1D82C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D82C4u;
        // 0x1d82c8: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D82CCu;
        goto label_1d82cc;
    }
    ctx->pc = 0x1D82C4u;
    {
        const bool branch_taken_0x1d82c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D82C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D82C4u;
        // 0x1d82c8: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d82c4) {
            ctx->pc = 0x1D8260u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d8260;
        }
    }
    ctx->pc = 0x1D82CCu;
label_1d82cc:
    // 0x1d82cc: 0xaf808cd4  sw          $zero, -0x732C($gp)
    ctx->pc = 0x1d82ccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937812), GPR_U32(ctx, 0));
label_1d82d0:
    // 0x1d82d0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1d82d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d82d4:
    // 0x1d82d4: 0xaf808cd0  sw          $zero, -0x7330($gp)
    ctx->pc = 0x1d82d4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937808), GPR_U32(ctx, 0));
label_1d82d8:
    // 0x1d82d8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1d82d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d82dc:
    // 0x1d82dc: 0x27828cd8  addiu       $v0, $gp, -0x7328
    ctx->pc = 0x1d82dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937816));
label_1d82e0:
    // 0x1d82e0: 0x24050078  addiu       $a1, $zero, 0x78
    ctx->pc = 0x1d82e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_1d82e4:
    // 0x1d82e4: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1d82e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1d82e8:
    // 0x1d82e8: 0x8c550000  lw          $s5, 0x0($v0)
    ctx->pc = 0x1d82e8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d82ec:
    // 0x1d82ec: 0xc05e234  jal         func_1788D0
label_1d82f0:
    if (ctx->pc == 0x1D82F0u) {
        ctx->pc = 0x1D82F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D82ECu;
        // 0x1d82f0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D82F4u;
        goto label_1d82f4;
    }
    ctx->pc = 0x1D82ECu;
    SET_GPR_U32(ctx, 31, 0x1D82F4u);
    ctx->pc = 0x1D82F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D82ECu;
    // 0x1d82f0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788D0u, 0x1D82ECu, 0x1D82F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D82F4u;
label_1d82f4:
    // 0x1d82f4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1d82f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d82f8:
    // 0x1d82f8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1d82f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d82fc:
    // 0x1d82fc: 0x0  nop
    ctx->pc = 0x1d82fcu;
    // NOP
label_1d8300:
    // 0x1d8300: 0x240201c0  addiu       $v0, $zero, 0x1C0
    ctx->pc = 0x1d8300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_1d8304:
    // 0x1d8304: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1d8304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_1d8308:
    // 0x1d8308: 0x2b2a021  addu        $s4, $s5, $s2
    ctx->pc = 0x1d8308u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
label_1d830c:
    // 0x1d830c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d830cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d8310:
    // 0x1d8310: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1d8310u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1d8314:
    // 0x1d8314: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1d8314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_1d8318:
    // 0x1d8318: 0x26840010  addiu       $a0, $s4, 0x10
    ctx->pc = 0x1d8318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_1d831c:
    // 0x1d831c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d831cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d8320:
    // 0x1d8320: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d8320u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d8324:
    // 0x1d8324: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x1d8324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
label_1d8328:
    // 0x1d8328: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d8328u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d832c:
    // 0x1d832c: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x1d832cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_1d8330:
    // 0x1d8330: 0x2408000a  addiu       $t0, $zero, 0xA
    ctx->pc = 0x1d8330u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1d8334:
    // 0x1d8334: 0xdc2504d0  ld          $a1, 0x4D0($at)
    ctx->pc = 0x1d8334u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 1232)));
label_1d8338:
    // 0x1d8338: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d8338u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d833c:
    // 0x1d833c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d833cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d8340:
    // 0x1d8340: 0xc05de30  jal         func_1778C0
label_1d8344:
    if (ctx->pc == 0x1D8344u) {
        ctx->pc = 0x1D8344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8340u;
        // 0x1d8344: 0x240b01e0  addiu       $t3, $zero, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8348u;
        goto label_1d8348;
    }
    ctx->pc = 0x1D8340u;
    SET_GPR_U32(ctx, 31, 0x1D8348u);
    ctx->pc = 0x1D8344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8340u;
    // 0x1d8344: 0x240b01e0  addiu       $t3, $zero, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x1D8340u, 0x1D8348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8348u;
label_1d8348:
    // 0x1d8348: 0x24020120  addiu       $v0, $zero, 0x120
    ctx->pc = 0x1d8348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
label_1d834c:
    // 0x1d834c: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1d834cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1d8350:
    // 0x1d8350: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1d8350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_1d8354:
    // 0x1d8354: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1d8354u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1d8358:
    // 0x1d8358: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d8358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d835c:
    // 0x1d835c: 0x268403d0  addiu       $a0, $s4, 0x3D0
    ctx->pc = 0x1d835cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 976));
label_1d8360:
    // 0x1d8360: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1d8360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_1d8364:
    // 0x1d8364: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1d8364u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1d8368:
    // 0x1d8368: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d8368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d836c:
    // 0x1d836c: 0x2408000b  addiu       $t0, $zero, 0xB
    ctx->pc = 0x1d836cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1d8370:
    // 0x1d8370: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x1d8370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
label_1d8374:
    // 0x1d8374: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d8374u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d8378:
    // 0x1d8378: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x1d8378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_1d837c:
    // 0x1d837c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d837cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d8380:
    // 0x1d8380: 0xdc2504d8  ld          $a1, 0x4D8($at)
    ctx->pc = 0x1d8380u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 1240)));
label_1d8384:
    // 0x1d8384: 0xc05de30  jal         func_1778C0
label_1d8388:
    if (ctx->pc == 0x1D8388u) {
        ctx->pc = 0x1D8388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8384u;
        // 0x1d8388: 0x240b0140  addiu       $t3, $zero, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D838Cu;
        goto label_1d838c;
    }
    ctx->pc = 0x1D8384u;
    SET_GPR_U32(ctx, 31, 0x1D838Cu);
    ctx->pc = 0x1D8388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8384u;
    // 0x1d8388: 0x240b0140  addiu       $t3, $zero, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x1D8384u, 0x1D838Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D838Cu;
label_1d838c:
    // 0x1d838c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d838cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1d8390:
    // 0x1d8390: 0x2a020006  slti        $v0, $s0, 0x6
    ctx->pc = 0x1d8390u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
label_1d8394:
    // 0x1d8394: 0x1440ffd9  bnez        $v0, . + 4 + (-0x27 << 2)
label_1d8398:
    if (ctx->pc == 0x1D8398u) {
        ctx->pc = 0x1D8398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8394u;
        // 0x1d8398: 0x265200a0  addiu       $s2, $s2, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D839Cu;
        goto label_1d839c;
    }
    ctx->pc = 0x1D8394u;
    {
        const bool branch_taken_0x1d8394 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D8398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8394u;
        // 0x1d8398: 0x265200a0  addiu       $s2, $s2, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8394) {
            ctx->pc = 0x1D82FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d82fc;
        }
    }
    ctx->pc = 0x1D839Cu;
label_1d839c:
    // 0x1d839c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d839cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1d83a0:
    // 0x1d83a0: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x1d83a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
label_1d83a4:
    // 0x1d83a4: 0x1440ffcd  bnez        $v0, . + 4 + (-0x33 << 2)
label_1d83a8:
    if (ctx->pc == 0x1D83A8u) {
        ctx->pc = 0x1D83A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D83A4u;
        // 0x1d83a8: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D83ACu;
        goto label_1d83ac;
    }
    ctx->pc = 0x1D83A4u;
    {
        const bool branch_taken_0x1d83a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D83A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D83A4u;
        // 0x1d83a8: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d83a4) {
            ctx->pc = 0x1D82DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d82dc;
        }
    }
    ctx->pc = 0x1D83ACu;
label_1d83ac:
    // 0x1d83ac: 0xc077d04  jal         func_1DF410
label_1d83b0:
    if (ctx->pc == 0x1D83B0u) {
        ctx->pc = 0x1D83B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D83ACu;
        // 0x1d83b0: 0x8f848ce8  lw          $a0, -0x7318($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937832)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D83B4u;
        goto label_1d83b4;
    }
    ctx->pc = 0x1D83ACu;
    SET_GPR_U32(ctx, 31, 0x1D83B4u);
    ctx->pc = 0x1D83B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D83ACu;
    // 0x1d83b0: 0x8f848ce8  lw          $a0, -0x7318($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937832)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DF410u;
    { ctx->pc = 0x1df410; return; }
    ctx->pc = 0x1D83B4u;
label_1d83b4:
    // 0x1d83b4: 0xc0779ac  jal         func_1DE6B0
label_1d83b8:
    if (ctx->pc == 0x1D83B8u) {
        ctx->pc = 0x1D83BCu;
        goto label_1d83bc;
    }
    ctx->pc = 0x1D83B4u;
    SET_GPR_U32(ctx, 31, 0x1D83BCu);
    ctx->pc = 0x1DE6B0u;
    { ctx->pc = 0x1de6b0; return; }
    ctx->pc = 0x1D83BCu;
label_1d83bc:
    // 0x1d83bc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1d83bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1d83c0:
    // 0x1d83c0: 0xaf808c9c  sw          $zero, -0x7364($gp)
    ctx->pc = 0x1d83c0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 0));
label_1d83c4:
    // 0x1d83c4: 0xc0775cc  jal         func_1DD730
label_1d83c8:
    if (ctx->pc == 0x1D83C8u) {
        ctx->pc = 0x1D83C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D83C4u;
        // 0x1d83c8: 0xaf828ca0  sw          $v0, -0x7360($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D83CCu;
        goto label_1d83cc;
    }
    ctx->pc = 0x1D83C4u;
    SET_GPR_U32(ctx, 31, 0x1D83CCu);
    ctx->pc = 0x1D83C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D83C4u;
    // 0x1d83c8: 0xaf828ca0  sw          $v0, -0x7360($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD730u;
    { ctx->pc = 0x1dd730; return; }
    ctx->pc = 0x1D83CCu;
label_1d83cc:
    // 0x1d83cc: 0xc07a854  jal         func_1EA150
label_1d83d0:
    if (ctx->pc == 0x1D83D0u) {
        ctx->pc = 0x1D83D4u;
        goto label_1d83d4;
    }
    ctx->pc = 0x1D83CCu;
    SET_GPR_U32(ctx, 31, 0x1D83D4u);
    ctx->pc = 0x1EA150u;
    { ctx->pc = 0x1ea150; return; }
    ctx->pc = 0x1D83D4u;
label_1d83d4:
    // 0x1d83d4: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x1d83d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
label_1d83d8:
    // 0x1d83d8: 0x8c22ccfc  lw          $v0, -0x3304($at)
    ctx->pc = 0x1d83d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954236)));
label_1d83dc:
    // 0x1d83dc: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
label_1d83e0:
    if (ctx->pc == 0x1D83E0u) {
        ctx->pc = 0x1D83E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D83DCu;
        // 0x1d83e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D83E4u;
        goto label_1d83e4;
    }
    ctx->pc = 0x1D83DCu;
    {
        const bool branch_taken_0x1d83dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D83E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D83DCu;
        // 0x1d83e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d83dc) {
            ctx->pc = 0x1D8484u;
            goto label_1d8484;
        }
    }
    ctx->pc = 0x1D83E4u;
label_1d83e4:
    // 0x1d83e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d83e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d83e8:
    // 0x1d83e8: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x1d83e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
label_1d83ec:
    // 0x1d83ec: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1d83ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_1d83f0:
    // 0x1d83f0: 0x2484c990  addiu       $a0, $a0, -0x3670
    ctx->pc = 0x1d83f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953360));
label_1d83f4:
    // 0x1d83f4: 0x3443869f  ori         $v1, $v0, 0x869F
    ctx->pc = 0x1d83f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34463);
label_1d83f8:
    // 0x1d83f8: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x1d83f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1d83fc:
    // 0x1d83fc: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1d83fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1d8400:
    // 0x1d8400: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x1d8400u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_1d8404:
    // 0x1d8404: 0x8c2235f4  lw          $v0, 0x35F4($at)
    ctx->pc = 0x1d8404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13812)));
label_1d8408:
    // 0x1d8408: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1d8408u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1d840c:
    // 0x1d840c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1d8410:
    if (ctx->pc == 0x1D8410u) {
        ctx->pc = 0x1D8414u;
        goto label_1d8414;
    }
    ctx->pc = 0x1D840Cu;
    {
        const bool branch_taken_0x1d840c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d840c) {
            ctx->pc = 0x1D8424u;
            goto label_1d8424;
        }
    }
    ctx->pc = 0x1D8414u;
label_1d8414:
    // 0x1d8414: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1d8414u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1d8418:
    // 0x1d8418: 0x28c20029  slti        $v0, $a2, 0x29
    ctx->pc = 0x1d8418u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)41) ? 1 : 0);
label_1d841c:
    // 0x1d841c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_1d8420:
    if (ctx->pc == 0x1D8420u) {
        ctx->pc = 0x1D8420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D841Cu;
        // 0x1d8420: 0x24a50018  addiu       $a1, $a1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8424u;
        goto label_1d8424;
    }
    ctx->pc = 0x1D841Cu;
    {
        const bool branch_taken_0x1d841c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D8420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D841Cu;
        // 0x1d8420: 0x24a50018  addiu       $a1, $a1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d841c) {
            ctx->pc = 0x1D83F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d83f8;
        }
    }
    ctx->pc = 0x1D8424u;
label_1d8424:
    // 0x1d8424: 0x0  nop
    ctx->pc = 0x1d8424u;
    // NOP
label_1d8428:
    // 0x1d8428: 0x28c20029  slti        $v0, $a2, 0x29
    ctx->pc = 0x1d8428u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)41) ? 1 : 0);
label_1d842c:
    // 0x1d842c: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
label_1d8430:
    if (ctx->pc == 0x1D8430u) {
        ctx->pc = 0x1D8434u;
        goto label_1d8434;
    }
    ctx->pc = 0x1D842Cu;
    {
        const bool branch_taken_0x1d842c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d842c) {
            ctx->pc = 0x1D8484u;
            goto label_1d8484;
        }
    }
    ctx->pc = 0x1D8434u;
label_1d8434:
    // 0x1d8434: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d8434u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d8438:
    // 0x1d8438: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d8438u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d843c:
    // 0x1d843c: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x1d843cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
label_1d8440:
    // 0x1d8440: 0x240300ab  addiu       $v1, $zero, 0xAB
    ctx->pc = 0x1d8440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 171));
label_1d8444:
    // 0x1d8444: 0x2484c990  addiu       $a0, $a0, -0x3670
    ctx->pc = 0x1d8444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953360));
label_1d8448:
    // 0x1d8448: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x1d8448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1d844c:
    // 0x1d844c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1d844cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1d8450:
    // 0x1d8450: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x1d8450u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_1d8454:
    // 0x1d8454: 0x90223a1b  lbu         $v0, 0x3A1B($at)
    ctx->pc = 0x1d8454u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 14875)));
label_1d8458:
    // 0x1d8458: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
label_1d845c:
    if (ctx->pc == 0x1D845Cu) {
        ctx->pc = 0x1D8460u;
        goto label_1d8460;
    }
    ctx->pc = 0x1D8458u;
    {
        const bool branch_taken_0x1d8458 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d8458) {
            ctx->pc = 0x1D8470u;
            goto label_1d8470;
        }
    }
    ctx->pc = 0x1D8460u;
label_1d8460:
    // 0x1d8460: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1d8460u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1d8464:
    // 0x1d8464: 0x28c200ab  slti        $v0, $a2, 0xAB
    ctx->pc = 0x1d8464u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)171) ? 1 : 0);
label_1d8468:
    // 0x1d8468: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_1d846c:
    if (ctx->pc == 0x1D846Cu) {
        ctx->pc = 0x1D846Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8468u;
        // 0x1d846c: 0x24a50018  addiu       $a1, $a1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8470u;
        goto label_1d8470;
    }
    ctx->pc = 0x1D8468u;
    {
        const bool branch_taken_0x1d8468 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D846Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8468u;
        // 0x1d846c: 0x24a50018  addiu       $a1, $a1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8468) {
            ctx->pc = 0x1D8448u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d8448;
        }
    }
    ctx->pc = 0x1D8470u;
label_1d8470:
    // 0x1d8470: 0x28c200ab  slti        $v0, $a2, 0xAB
    ctx->pc = 0x1d8470u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)171) ? 1 : 0);
label_1d8474:
    // 0x1d8474: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1d8478:
    if (ctx->pc == 0x1D8478u) {
        ctx->pc = 0x1D8478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8474u;
        // 0x1d8478: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D847Cu;
        goto label_1d847c;
    }
    ctx->pc = 0x1D8474u;
    {
        const bool branch_taken_0x1d8474 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D8478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8474u;
        // 0x1d8478: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8474) {
            ctx->pc = 0x1D8484u;
            goto label_1d8484;
        }
    }
    ctx->pc = 0x1D847Cu;
label_1d847c:
    // 0x1d847c: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x1d847cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
label_1d8480:
    // 0x1d8480: 0xac22ccfc  sw          $v0, -0x3304($at)
    ctx->pc = 0x1d8480u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954236), GPR_U32(ctx, 2));
label_1d8484:
    // 0x1d8484: 0xc07a0e8  jal         func_1E83A0
label_1d8488:
    if (ctx->pc == 0x1D8488u) {
        ctx->pc = 0x1D848Cu;
        goto label_1d848c;
    }
    ctx->pc = 0x1D8484u;
    SET_GPR_U32(ctx, 31, 0x1D848Cu);
    ctx->pc = 0x1E83A0u;
    { ctx->pc = 0x1e83a0; return; }
    ctx->pc = 0x1D848Cu;
label_1d848c:
    // 0x1d848c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1d848cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1d8490:
    // 0x1d8490: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x1d8490u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1d8494:
    // 0x1d8494: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x1d8494u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1d8498:
    // 0x1d8498: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1d8498u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1d849c:
    // 0x1d849c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1d849cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1d84a0:
    // 0x1d84a0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1d84a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1d84a4:
    // 0x1d84a4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1d84a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1d84a8:
    // 0x1d84a8: 0x3e00008  jr          $ra
label_1d84ac:
    if (ctx->pc == 0x1D84ACu) {
        ctx->pc = 0x1D84ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D84A8u;
        // 0x1d84ac: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D84B0u;
        goto label_1d84b0;
    }
    ctx->pc = 0x1D84A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D84ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D84A8u;
        // 0x1d84ac: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D84A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D84B0u;
label_1d84b0:
    // 0x1d84b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1d84b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1d84b4:
    // 0x1d84b4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1d84b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1d84b8:
    // 0x1d84b8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1d84b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1d84bc:
    // 0x1d84bc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1d84bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1d84c0:
    // 0x1d84c0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d84c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1d84c4:
    // 0x1d84c4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1d84c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d84c8:
    // 0x1d84c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d84c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1d84cc:
    // 0x1d84cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d84ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1d84d0:
    // 0x1d84d0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1d84d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d84d4:
    // 0x1d84d4: 0x27838ce0  addiu       $v1, $gp, -0x7320
    ctx->pc = 0x1d84d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937824));
label_1d84d8:
    // 0x1d84d8: 0x738821  addu        $s1, $v1, $s3
    ctx->pc = 0x1d84d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_1d84dc:
    // 0x1d84dc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1d84dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1d84e0:
    // 0x1d84e0: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_1d84e4:
    if (ctx->pc == 0x1D84E4u) {
        ctx->pc = 0x1D84E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D84E0u;
        // 0x1d84e4: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D84E8u;
        goto label_1d84e8;
    }
    ctx->pc = 0x1D84E0u;
    {
        const bool branch_taken_0x1d84e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D84E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D84E0u;
        // 0x1d84e4: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d84e0) {
            ctx->pc = 0x1D84F4u;
            goto label_1d84f4;
        }
    }
    ctx->pc = 0x1D84E8u;
label_1d84e8:
    // 0x1d84e8: 0xc070080  jal         func_1C0200
label_1d84ec:
    if (ctx->pc == 0x1D84ECu) {
        ctx->pc = 0x1D84ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D84E8u;
        // 0x1d84ec: 0x240500b0  addiu       $a1, $zero, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D84F0u;
        goto label_1d84f0;
    }
    ctx->pc = 0x1D84E8u;
    SET_GPR_U32(ctx, 31, 0x1D84F0u);
    ctx->pc = 0x1D84ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D84E8u;
    // 0x1d84ec: 0x240500b0  addiu       $a1, $zero, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x1D84F0u;
label_1d84f0:
    // 0x1d84f0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1d84f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1d84f4:
    // 0x1d84f4: 0x0  nop
    ctx->pc = 0x1d84f4u;
    // NOP
label_1d84f8:
    // 0x1d84f8: 0x27838cd8  addiu       $v1, $gp, -0x7328
    ctx->pc = 0x1d84f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937816));
label_1d84fc:
    // 0x1d84fc: 0x738821  addu        $s1, $v1, $s3
    ctx->pc = 0x1d84fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_1d8500:
    // 0x1d8500: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1d8500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1d8504:
    // 0x1d8504: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_1d8508:
    if (ctx->pc == 0x1D8508u) {
        ctx->pc = 0x1D8508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8504u;
        // 0x1d8508: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D850Cu;
        goto label_1d850c;
    }
    ctx->pc = 0x1D8504u;
    {
        const bool branch_taken_0x1d8504 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D8508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8504u;
        // 0x1d8508: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8504) {
            ctx->pc = 0x1D8518u;
            goto label_1d8518;
        }
    }
    ctx->pc = 0x1D850Cu;
label_1d850c:
    // 0x1d850c: 0xc070080  jal         func_1C0200
label_1d8510:
    if (ctx->pc == 0x1D8510u) {
        ctx->pc = 0x1D8510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D850Cu;
        // 0x1d8510: 0x24050790  addiu       $a1, $zero, 0x790 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1936));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8514u;
        goto label_1d8514;
    }
    ctx->pc = 0x1D850Cu;
    SET_GPR_U32(ctx, 31, 0x1D8514u);
    ctx->pc = 0x1D8510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D850Cu;
    // 0x1d8510: 0x24050790  addiu       $a1, $zero, 0x790 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x1D8514u;
label_1d8514:
    // 0x1d8514: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1d8514u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1d8518:
    // 0x1d8518: 0x27838cc8  addiu       $v1, $gp, -0x7338
    ctx->pc = 0x1d8518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937800));
label_1d851c:
    // 0x1d851c: 0x738821  addu        $s1, $v1, $s3
    ctx->pc = 0x1d851cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_1d8520:
    // 0x1d8520: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1d8520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1d8524:
    // 0x1d8524: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_1d8528:
    if (ctx->pc == 0x1D8528u) {
        ctx->pc = 0x1D8528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8524u;
        // 0x1d8528: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D852Cu;
        goto label_1d852c;
    }
    ctx->pc = 0x1D8524u;
    {
        const bool branch_taken_0x1d8524 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D8528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8524u;
        // 0x1d8528: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8524) {
            ctx->pc = 0x1D8538u;
            goto label_1d8538;
        }
    }
    ctx->pc = 0x1D852Cu;
label_1d852c:
    // 0x1d852c: 0xc070080  jal         func_1C0200
label_1d8530:
    if (ctx->pc == 0x1D8530u) {
        ctx->pc = 0x1D8530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D852Cu;
        // 0x1d8530: 0x24050ef0  addiu       $a1, $zero, 0xEF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3824));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8534u;
        goto label_1d8534;
    }
    ctx->pc = 0x1D852Cu;
    SET_GPR_U32(ctx, 31, 0x1D8534u);
    ctx->pc = 0x1D8530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D852Cu;
    // 0x1d8530: 0x24050ef0  addiu       $a1, $zero, 0xEF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x1D8534u;
label_1d8534:
    // 0x1d8534: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1d8534u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1d8538:
    // 0x1d8538: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1d8538u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d853c:
    // 0x1d853c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1d853cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d8540:
    // 0x1d8540: 0x0  nop
    ctx->pc = 0x1d8540u;
    // NOP
label_1d8544:
    // 0x1d8544: 0x3c03004b  lui         $v1, 0x4B
    ctx->pc = 0x1d8544u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)75 << 16));
label_1d8548:
    // 0x1d8548: 0x24630620  addiu       $v1, $v1, 0x620
    ctx->pc = 0x1d8548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1568));
label_1d854c:
    // 0x1d854c: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x1d854cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_1d8550:
    // 0x1d8550: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x1d8550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_1d8554:
    // 0x1d8554: 0x72a021  addu        $s4, $v1, $s2
    ctx->pc = 0x1d8554u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_1d8558:
    // 0x1d8558: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x1d8558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1d855c:
    // 0x1d855c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_1d8560:
    if (ctx->pc == 0x1D8560u) {
        ctx->pc = 0x1D8560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D855Cu;
        // 0x1d8560: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8564u;
        goto label_1d8564;
    }
    ctx->pc = 0x1D855Cu;
    {
        const bool branch_taken_0x1d855c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D8560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D855Cu;
        // 0x1d8560: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d855c) {
            ctx->pc = 0x1D8570u;
            goto label_1d8570;
        }
    }
    ctx->pc = 0x1D8564u;
label_1d8564:
    // 0x1d8564: 0xc070080  jal         func_1C0200
label_1d8568:
    if (ctx->pc == 0x1D8568u) {
        ctx->pc = 0x1D8568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8564u;
        // 0x1d8568: 0x240501f0  addiu       $a1, $zero, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 496));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D856Cu;
        goto label_1d856c;
    }
    ctx->pc = 0x1D8564u;
    SET_GPR_U32(ctx, 31, 0x1D856Cu);
    ctx->pc = 0x1D8568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8564u;
    // 0x1d8568: 0x240501f0  addiu       $a1, $zero, 0x1F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x1D856Cu;
label_1d856c:
    // 0x1d856c: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x1d856cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_1d8570:
    // 0x1d8570: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d8570u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1d8574:
    // 0x1d8574: 0x2a230008  slti        $v1, $s1, 0x8
    ctx->pc = 0x1d8574u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
label_1d8578:
    // 0x1d8578: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
label_1d857c:
    if (ctx->pc == 0x1D857Cu) {
        ctx->pc = 0x1D857Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8578u;
        // 0x1d857c: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8580u;
        goto label_1d8580;
    }
    ctx->pc = 0x1D8578u;
    {
        const bool branch_taken_0x1d8578 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D857Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8578u;
        // 0x1d857c: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8578) {
            ctx->pc = 0x1D8540u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d8540;
        }
    }
    ctx->pc = 0x1D8580u;
label_1d8580:
    // 0x1d8580: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1d8580u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d8584:
    // 0x1d8584: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1d8584u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d8588:
    // 0x1d8588: 0x0  nop
    ctx->pc = 0x1d8588u;
    // NOP
label_1d858c:
    // 0x1d858c: 0x3c03004b  lui         $v1, 0x4B
    ctx->pc = 0x1d858cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)75 << 16));
label_1d8590:
    // 0x1d8590: 0x24630550  addiu       $v1, $v1, 0x550
    ctx->pc = 0x1d8590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1360));
label_1d8594:
    // 0x1d8594: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x1d8594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_1d8598:
    // 0x1d8598: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x1d8598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_1d859c:
    // 0x1d859c: 0x71a021  addu        $s4, $v1, $s1
    ctx->pc = 0x1d859cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_1d85a0:
    // 0x1d85a0: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x1d85a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1d85a4:
    // 0x1d85a4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_1d85a8:
    if (ctx->pc == 0x1D85A8u) {
        ctx->pc = 0x1D85A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D85A4u;
        // 0x1d85a8: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D85ACu;
        goto label_1d85ac;
    }
    ctx->pc = 0x1D85A4u;
    {
        const bool branch_taken_0x1d85a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D85A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D85A4u;
        // 0x1d85a8: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d85a4) {
            ctx->pc = 0x1D85B8u;
            goto label_1d85b8;
        }
    }
    ctx->pc = 0x1D85ACu;
label_1d85ac:
    // 0x1d85ac: 0xc070080  jal         func_1C0200
label_1d85b0:
    if (ctx->pc == 0x1D85B0u) {
        ctx->pc = 0x1D85B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D85ACu;
        // 0x1d85b0: 0x24050160  addiu       $a1, $zero, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D85B4u;
        goto label_1d85b4;
    }
    ctx->pc = 0x1D85ACu;
    SET_GPR_U32(ctx, 31, 0x1D85B4u);
    ctx->pc = 0x1D85B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D85ACu;
    // 0x1d85b0: 0x24050160  addiu       $a1, $zero, 0x160 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x1D85B4u;
label_1d85b4:
    // 0x1d85b4: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x1d85b4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_1d85b8:
    // 0x1d85b8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1d85b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1d85bc:
    // 0x1d85bc: 0x2a430002  slti        $v1, $s2, 0x2
    ctx->pc = 0x1d85bcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
label_1d85c0:
    // 0x1d85c0: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
label_1d85c4:
    if (ctx->pc == 0x1D85C4u) {
        ctx->pc = 0x1D85C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D85C0u;
        // 0x1d85c4: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D85C8u;
        goto label_1d85c8;
    }
    ctx->pc = 0x1D85C0u;
    {
        const bool branch_taken_0x1d85c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D85C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D85C0u;
        // 0x1d85c4: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d85c0) {
            ctx->pc = 0x1D8588u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d8588;
        }
    }
    ctx->pc = 0x1D85C8u;
label_1d85c8:
    // 0x1d85c8: 0x27838c90  addiu       $v1, $gp, -0x7370
    ctx->pc = 0x1d85c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937744));
label_1d85cc:
    // 0x1d85cc: 0x738821  addu        $s1, $v1, $s3
    ctx->pc = 0x1d85ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_1d85d0:
    // 0x1d85d0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1d85d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1d85d4:
    // 0x1d85d4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_1d85d8:
    if (ctx->pc == 0x1D85D8u) {
        ctx->pc = 0x1D85D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D85D4u;
        // 0x1d85d8: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D85DCu;
        goto label_1d85dc;
    }
    ctx->pc = 0x1D85D4u;
    {
        const bool branch_taken_0x1d85d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D85D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D85D4u;
        // 0x1d85d8: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d85d4) {
            ctx->pc = 0x1D85E8u;
            goto label_1d85e8;
        }
    }
    ctx->pc = 0x1D85DCu;
label_1d85dc:
    // 0x1d85dc: 0xc070080  jal         func_1C0200
label_1d85e0:
    if (ctx->pc == 0x1D85E0u) {
        ctx->pc = 0x1D85E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D85DCu;
        // 0x1d85e0: 0x240527a0  addiu       $a1, $zero, 0x27A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D85E4u;
        goto label_1d85e4;
    }
    ctx->pc = 0x1D85DCu;
    SET_GPR_U32(ctx, 31, 0x1D85E4u);
    ctx->pc = 0x1D85E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D85DCu;
    // 0x1d85e0: 0x240527a0  addiu       $a1, $zero, 0x27A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x1D85E4u;
label_1d85e4:
    // 0x1d85e4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1d85e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1d85e8:
    // 0x1d85e8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1d85e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d85ec:
    // 0x1d85ec: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1d85ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d85f0:
    // 0x1d85f0: 0x0  nop
    ctx->pc = 0x1d85f0u;
    // NOP
label_1d85f4:
    // 0x1d85f4: 0x3c03004b  lui         $v1, 0x4B
    ctx->pc = 0x1d85f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)75 << 16));
label_1d85f8:
    // 0x1d85f8: 0x24630540  addiu       $v1, $v1, 0x540
    ctx->pc = 0x1d85f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1344));
label_1d85fc:
    // 0x1d85fc: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x1d85fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_1d8600:
    // 0x1d8600: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x1d8600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_1d8604:
    // 0x1d8604: 0x71a021  addu        $s4, $v1, $s1
    ctx->pc = 0x1d8604u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_1d8608:
    // 0x1d8608: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x1d8608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1d860c:
    // 0x1d860c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_1d8610:
    if (ctx->pc == 0x1D8610u) {
        ctx->pc = 0x1D8610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D860Cu;
        // 0x1d8610: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8614u;
        goto label_1d8614;
    }
    ctx->pc = 0x1D860Cu;
    {
        const bool branch_taken_0x1d860c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D8610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D860Cu;
        // 0x1d8610: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d860c) {
            ctx->pc = 0x1D8620u;
            goto label_1d8620;
        }
    }
    ctx->pc = 0x1D8614u;
label_1d8614:
    // 0x1d8614: 0xc070080  jal         func_1C0200
label_1d8618:
    if (ctx->pc == 0x1D8618u) {
        ctx->pc = 0x1D8618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8614u;
        // 0x1d8618: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D861Cu;
        goto label_1d861c;
    }
    ctx->pc = 0x1D8614u;
    SET_GPR_U32(ctx, 31, 0x1D861Cu);
    ctx->pc = 0x1D8618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8614u;
    // 0x1d8618: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x1D861Cu;
label_1d861c:
    // 0x1d861c: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x1d861cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_1d8620:
    // 0x1d8620: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1d8620u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1d8624:
    // 0x1d8624: 0x2a430002  slti        $v1, $s2, 0x2
    ctx->pc = 0x1d8624u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
label_1d8628:
    // 0x1d8628: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
label_1d862c:
    if (ctx->pc == 0x1D862Cu) {
        ctx->pc = 0x1D862Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8628u;
        // 0x1d862c: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8630u;
        goto label_1d8630;
    }
    ctx->pc = 0x1D8628u;
    {
        const bool branch_taken_0x1d8628 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D862Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8628u;
        // 0x1d862c: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8628) {
            ctx->pc = 0x1D85F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d85f0;
        }
    }
    ctx->pc = 0x1D8630u;
label_1d8630:
    // 0x1d8630: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d8630u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1d8634:
    // 0x1d8634: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x1d8634u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_1d8638:
    // 0x1d8638: 0x1460ffa6  bnez        $v1, . + 4 + (-0x5A << 2)
label_1d863c:
    if (ctx->pc == 0x1D863Cu) {
        ctx->pc = 0x1D863Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8638u;
        // 0x1d863c: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8640u;
        goto label_1d8640;
    }
    ctx->pc = 0x1D8638u;
    {
        const bool branch_taken_0x1d8638 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D863Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8638u;
        // 0x1d863c: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8638) {
            ctx->pc = 0x1D84D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d84d4;
        }
    }
    ctx->pc = 0x1D8640u;
label_1d8640:
    // 0x1d8640: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1d8640u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1d8644:
    // 0x1d8644: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1d8644u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1d8648:
    // 0x1d8648: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1d8648u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1d864c:
    // 0x1d864c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d864cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1d8650:
    // 0x1d8650: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d8650u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d8654:
    // 0x1d8654: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d8654u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1d8658:
    // 0x1d8658: 0x3e00008  jr          $ra
label_1d865c:
    if (ctx->pc == 0x1D865Cu) {
        ctx->pc = 0x1D865Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8658u;
        // 0x1d865c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8660u;
        goto label_1d8660;
    }
    ctx->pc = 0x1D8658u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D865Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8658u;
        // 0x1d865c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8658u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D8660u;
label_1d8660:
    // 0x1d8660: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1d8660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1d8664:
    // 0x1d8664: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1d8664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1d8668:
    // 0x1d8668: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1d8668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1d866c:
    // 0x1d866c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d866cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1d8670:
    // 0x1d8670: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d8670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1d8674:
    // 0x1d8674: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d8674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1d8678:
    // 0x1d8678: 0x8f848ce8  lw          $a0, -0x7318($gp)
    ctx->pc = 0x1d8678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937832)));
label_1d867c:
    // 0x1d867c: 0xc076780  jal         func_1D9E00
label_1d8680:
    if (ctx->pc == 0x1D8680u) {
        ctx->pc = 0x1D8680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D867Cu;
        // 0x1d8680: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8684u;
        goto label_1d8684;
    }
    ctx->pc = 0x1D867Cu;
    SET_GPR_U32(ctx, 31, 0x1D8684u);
    ctx->pc = 0x1D8680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D867Cu;
    // 0x1d8680: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E00u;
    { ctx->pc = 0x1d9e00; return; }
    ctx->pc = 0x1D8684u;
label_1d8684:
    // 0x1d8684: 0x8f828cf4  lw          $v0, -0x730C($gp)
    ctx->pc = 0x1d8684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937844)));
label_1d8688:
    // 0x1d8688: 0x28410385  slti        $at, $v0, 0x385
    ctx->pc = 0x1d8688u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)901) ? 1 : 0);
label_1d868c:
    // 0x1d868c: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_1d8690:
    if (ctx->pc == 0x1D8690u) {
        ctx->pc = 0x1D8694u;
        goto label_1d8694;
    }
    ctx->pc = 0x1D868Cu;
    {
        const bool branch_taken_0x1d868c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d868c) {
            ctx->pc = 0x1D869Cu;
            goto label_1d869c;
        }
    }
    ctx->pc = 0x1D8694u;
label_1d8694:
    // 0x1d8694: 0x10000516  b           . + 4 + (0x516 << 2)
label_1d8698:
    if (ctx->pc == 0x1D8698u) {
        ctx->pc = 0x1D8698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8694u;
        // 0x1d8698: 0x24110003  addiu       $s1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D869Cu;
        goto label_1d869c;
    }
    ctx->pc = 0x1D8694u;
    {
        const bool branch_taken_0x1d8694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8694u;
        // 0x1d8698: 0x24110003  addiu       $s1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8694) {
            ctx->pc = 0x1D9AF0u;
            { ctx->pc = 0x1d9af0; return; }
        }
    }
    ctx->pc = 0x1D869Cu;
label_1d869c:
    // 0x1d869c: 0xdf8287c8  ld          $v0, -0x7838($gp)
    ctx->pc = 0x1d869cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936520)));
label_1d86a0:
    // 0x1d86a0: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x1d86a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
label_1d86a4:
    // 0x1d86a4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1d86a8:
    if (ctx->pc == 0x1D86A8u) {
        ctx->pc = 0x1D86ACu;
        goto label_1d86ac;
    }
    ctx->pc = 0x1D86A4u;
    {
        const bool branch_taken_0x1d86a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d86a4) {
            ctx->pc = 0x1D86BCu;
            goto label_1d86bc;
        }
    }
    ctx->pc = 0x1D86ACu;
label_1d86ac:
    // 0x1d86ac: 0xdf8287c8  ld          $v0, -0x7838($gp)
    ctx->pc = 0x1d86acu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936520)));
label_1d86b0:
    // 0x1d86b0: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1d86b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_1d86b4:
    // 0x1d86b4: 0x1040042e  beqz        $v0, . + 4 + (0x42E << 2)
label_1d86b8:
    if (ctx->pc == 0x1D86B8u) {
        ctx->pc = 0x1D86BCu;
        goto label_1d86bc;
    }
    ctx->pc = 0x1D86B4u;
    {
        const bool branch_taken_0x1d86b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d86b4) {
            ctx->pc = 0x1D9770u;
            { ctx->pc = 0x1d9770; return; }
        }
    }
    ctx->pc = 0x1D86BCu;
label_1d86bc:
    // 0x1d86bc: 0x0  nop
    ctx->pc = 0x1d86bcu;
    // NOP
label_1d86c0:
    // 0x1d86c0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1d86c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d86c4:
    // 0x1d86c4: 0xc05b420  jal         func_16D080
label_1d86c8:
    if (ctx->pc == 0x1D86C8u) {
        ctx->pc = 0x1D86C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D86C4u;
        // 0x1d86c8: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D86CCu;
        goto label_1d86cc;
    }
    ctx->pc = 0x1D86C4u;
    SET_GPR_U32(ctx, 31, 0x1D86CCu);
    ctx->pc = 0x1D86C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D86C4u;
    // 0x1d86c8: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D080u, 0x1D86C4u, 0x1D86CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D86CCu;
label_1d86cc:
    // 0x1d86cc: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1d86ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d86d0:
    // 0x1d86d0: 0x6210004  bgez        $s1, . + 4 + (0x4 << 2)
label_1d86d4:
    if (ctx->pc == 0x1D86D4u) {
        ctx->pc = 0x1D86D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D86D0u;
        // 0x1d86d4: 0x3223000f  andi        $v1, $s1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D86D8u;
        goto label_1d86d8;
    }
    ctx->pc = 0x1D86D0u;
    {
        const bool branch_taken_0x1d86d0 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x1D86D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D86D0u;
        // 0x1d86d4: 0x3223000f  andi        $v1, $s1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d86d0) {
            ctx->pc = 0x1D86E4u;
            goto label_1d86e4;
        }
    }
    ctx->pc = 0x1D86D8u;
label_1d86d8:
    // 0x1d86d8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1d86dc:
    if (ctx->pc == 0x1D86DCu) {
        ctx->pc = 0x1D86DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D86D8u;
        // 0x1d86dc: 0x28610008  slti        $at, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D86E0u;
        goto label_1d86e0;
    }
    ctx->pc = 0x1D86D8u;
    {
        const bool branch_taken_0x1d86d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D86DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D86D8u;
        // 0x1d86dc: 0x28610008  slti        $at, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d86d8) {
            ctx->pc = 0x1D86E8u;
            goto label_1d86e8;
        }
    }
    ctx->pc = 0x1D86E0u;
label_1d86e0:
    // 0x1d86e0: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x1d86e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
label_1d86e4:
    // 0x1d86e4: 0x28610008  slti        $at, $v1, 0x8
    ctx->pc = 0x1d86e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
label_1d86e8:
    // 0x1d86e8: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
label_1d86ec:
    if (ctx->pc == 0x1D86ECu) {
        ctx->pc = 0x1D86ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D86E8u;
        // 0x1d86ec: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D86F0u;
        goto label_1d86f0;
    }
    ctx->pc = 0x1D86E8u;
    {
        const bool branch_taken_0x1d86e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D86ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D86E8u;
        // 0x1d86ec: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d86e8) {
            ctx->pc = 0x1D8710u;
            goto label_1d8710;
        }
    }
    ctx->pc = 0x1D86F0u;
label_1d86f0:
    // 0x1d86f0: 0x311c0  sll         $v0, $v1, 7
    ctx->pc = 0x1d86f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
label_1d86f4:
    // 0x1d86f4: 0x441000c  bgez        $v0, . + 4 + (0xC << 2)
label_1d86f8:
    if (ctx->pc == 0x1D86F8u) {
        ctx->pc = 0x1D86F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D86F4u;
        // 0x1d86f8: 0x218c3  sra         $v1, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D86FCu;
        goto label_1d86fc;
    }
    ctx->pc = 0x1D86F4u;
    {
        const bool branch_taken_0x1d86f4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1D86F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D86F4u;
        // 0x1d86f8: 0x218c3  sra         $v1, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d86f4) {
            ctx->pc = 0x1D8728u;
            goto label_1d8728;
        }
    }
    ctx->pc = 0x1D86FCu;
label_1d86fc:
    // 0x1d86fc: 0x24420007  addiu       $v0, $v0, 0x7
    ctx->pc = 0x1d86fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
label_1d8700:
    // 0x1d8700: 0x218c3  sra         $v1, $v0, 3
    ctx->pc = 0x1d8700u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 3));
label_1d8704:
    // 0x1d8704: 0x10000009  b           . + 4 + (0x9 << 2)
label_1d8708:
    if (ctx->pc == 0x1D8708u) {
        ctx->pc = 0x1D8708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8704u;
        // 0x1d8708: 0xdf8287d0  ld          $v0, -0x7830($gp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936528)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D870Cu;
        goto label_1d870c;
    }
    ctx->pc = 0x1D8704u;
    {
        const bool branch_taken_0x1d8704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8704u;
        // 0x1d8708: 0xdf8287d0  ld          $v0, -0x7830($gp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936528)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8704) {
            ctx->pc = 0x1D872Cu;
            goto label_1d872c;
        }
    }
    ctx->pc = 0x1D870Cu;
label_1d870c:
    // 0x1d870c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1d870cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1d8710:
    // 0x1d8710: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1d8710u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d8714:
    // 0x1d8714: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x1d8714u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
label_1d8718:
    // 0x1d8718: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_1d871c:
    if (ctx->pc == 0x1D871Cu) {
        ctx->pc = 0x1D871Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8718u;
        // 0x1d871c: 0x218c3  sra         $v1, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8720u;
        goto label_1d8720;
    }
    ctx->pc = 0x1D8718u;
    {
        const bool branch_taken_0x1d8718 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1D871Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8718u;
        // 0x1d871c: 0x218c3  sra         $v1, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8718) {
            ctx->pc = 0x1D8728u;
            goto label_1d8728;
        }
    }
    ctx->pc = 0x1D8720u;
label_1d8720:
    // 0x1d8720: 0x24420007  addiu       $v0, $v0, 0x7
    ctx->pc = 0x1d8720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
label_1d8724:
    // 0x1d8724: 0x218c3  sra         $v1, $v0, 3
    ctx->pc = 0x1d8724u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 3));
label_1d8728:
    // 0x1d8728: 0xdf8287d0  ld          $v0, -0x7830($gp)
    ctx->pc = 0x1d8728u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936528)));
label_1d872c:
    // 0x1d872c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1d8730:
    if (ctx->pc == 0x1D8730u) {
        ctx->pc = 0x1D8730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D872Cu;
        // 0x1d8730: 0xaf838cbc  sw          $v1, -0x7344($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937788), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8734u;
        goto label_1d8734;
    }
    ctx->pc = 0x1D872Cu;
    {
        const bool branch_taken_0x1d872c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D872Cu;
        // 0x1d8730: 0xaf838cbc  sw          $v1, -0x7344($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937788), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d872c) {
            ctx->pc = 0x1D873Cu;
            goto label_1d873c;
        }
    }
    ctx->pc = 0x1D8734u;
label_1d8734:
    // 0x1d8734: 0x10000005  b           . + 4 + (0x5 << 2)
label_1d8738:
    if (ctx->pc == 0x1D8738u) {
        ctx->pc = 0x1D8738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8734u;
        // 0x1d8738: 0xaf808cf4  sw          $zero, -0x730C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937844), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D873Cu;
        goto label_1d873c;
    }
    ctx->pc = 0x1D8734u;
    {
        const bool branch_taken_0x1d8734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8734u;
        // 0x1d8738: 0xaf808cf4  sw          $zero, -0x730C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937844), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8734) {
            ctx->pc = 0x1D874Cu;
            goto label_1d874c;
        }
    }
    ctx->pc = 0x1D873Cu;
label_1d873c:
    // 0x1d873c: 0x0  nop
    ctx->pc = 0x1d873cu;
    // NOP
label_1d8740:
    // 0x1d8740: 0x8f828cf4  lw          $v0, -0x730C($gp)
    ctx->pc = 0x1d8740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937844)));
label_1d8744:
    // 0x1d8744: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d8744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1d8748:
    // 0x1d8748: 0xaf828cf4  sw          $v0, -0x730C($gp)
    ctx->pc = 0x1d8748u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937844), GPR_U32(ctx, 2));
label_1d874c:
    // 0x1d874c: 0x0  nop
    ctx->pc = 0x1d874cu;
    // NOP
label_1d8750:
    // 0x1d8750: 0x8f828cd4  lw          $v0, -0x732C($gp)
    ctx->pc = 0x1d8750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937812)));
label_1d8754:
    // 0x1d8754: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1d8758:
    if (ctx->pc == 0x1D8758u) {
        ctx->pc = 0x1D875Cu;
        goto label_1d875c;
    }
    ctx->pc = 0x1D8754u;
    {
        const bool branch_taken_0x1d8754 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8754) {
            ctx->pc = 0x1D8768u;
            goto label_1d8768;
        }
    }
    ctx->pc = 0x1D875Cu;
label_1d875c:
    // 0x1d875c: 0x8f828cd0  lw          $v0, -0x7330($gp)
    ctx->pc = 0x1d875cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937808)));
label_1d8760:
    // 0x1d8760: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d8760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1d8764:
    // 0x1d8764: 0xaf828cd0  sw          $v0, -0x7330($gp)
    ctx->pc = 0x1d8764u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937808), GPR_U32(ctx, 2));
label_1d8768:
    // 0x1d8768: 0x8f828cc4  lw          $v0, -0x733C($gp)
    ctx->pc = 0x1d8768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937796)));
label_1d876c:
    // 0x1d876c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_1d8770:
    if (ctx->pc == 0x1D8770u) {
        ctx->pc = 0x1D8774u;
        goto label_1d8774;
    }
    ctx->pc = 0x1D876Cu;
    {
        const bool branch_taken_0x1d876c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d876c) {
            ctx->pc = 0x1D87D0u;
            goto label_1d87d0;
        }
    }
    ctx->pc = 0x1D8774u;
label_1d8774:
    // 0x1d8774: 0x8f828cc0  lw          $v0, -0x7340($gp)
    ctx->pc = 0x1d8774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937792)));
label_1d8778:
    // 0x1d8778: 0x28410080  slti        $at, $v0, 0x80
    ctx->pc = 0x1d8778u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
label_1d877c:
    // 0x1d877c: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
label_1d8780:
    if (ctx->pc == 0x1D8780u) {
        ctx->pc = 0x1D8784u;
        goto label_1d8784;
    }
    ctx->pc = 0x1D877Cu;
    {
        const bool branch_taken_0x1d877c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d877c) {
            ctx->pc = 0x1D87A4u;
            goto label_1d87a4;
        }
    }
    ctx->pc = 0x1D8784u;
label_1d8784:
    // 0x1d8784: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x1d8784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
label_1d8788:
    // 0x1d8788: 0x28410080  slti        $at, $v0, 0x80
    ctx->pc = 0x1d8788u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
label_1d878c:
    // 0x1d878c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1d8790:
    if (ctx->pc == 0x1D8790u) {
        ctx->pc = 0x1D8794u;
        goto label_1d8794;
    }
    ctx->pc = 0x1D878Cu;
    {
        const bool branch_taken_0x1d878c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d878c) {
            ctx->pc = 0x1D879Cu;
            goto label_1d879c;
        }
    }
    ctx->pc = 0x1D8794u;
label_1d8794:
    // 0x1d8794: 0x10000003  b           . + 4 + (0x3 << 2)
label_1d8798:
    if (ctx->pc == 0x1D8798u) {
        ctx->pc = 0x1D8798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8794u;
        // 0x1d8798: 0xaf828cc0  sw          $v0, -0x7340($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937792), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D879Cu;
        goto label_1d879c;
    }
    ctx->pc = 0x1D8794u;
    {
        const bool branch_taken_0x1d8794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8794u;
        // 0x1d8798: 0xaf828cc0  sw          $v0, -0x7340($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937792), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8794) {
            ctx->pc = 0x1D87A4u;
            goto label_1d87a4;
        }
    }
    ctx->pc = 0x1D879Cu;
label_1d879c:
    // 0x1d879c: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1d879cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1d87a0:
    // 0x1d87a0: 0xaf828cc0  sw          $v0, -0x7340($gp)
    ctx->pc = 0x1d87a0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937792), GPR_U32(ctx, 2));
label_1d87a4:
    // 0x1d87a4: 0x0  nop
    ctx->pc = 0x1d87a4u;
    // NOP
label_1d87a8:
    // 0x1d87a8: 0x8f828cb0  lw          $v0, -0x7350($gp)
    ctx->pc = 0x1d87a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1d87ac:
    // 0x1d87ac: 0x18400008  blez        $v0, . + 4 + (0x8 << 2)
label_1d87b0:
    if (ctx->pc == 0x1D87B0u) {
        ctx->pc = 0x1D87B4u;
        goto label_1d87b4;
    }
    ctx->pc = 0x1D87ACu;
    {
        const bool branch_taken_0x1d87ac = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1d87ac) {
            ctx->pc = 0x1D87D0u;
            goto label_1d87d0;
        }
    }
    ctx->pc = 0x1D87B4u;
label_1d87b4:
    // 0x1d87b4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1d87b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1d87b8:
    // 0x1d87b8: 0xaf828cb0  sw          $v0, -0x7350($gp)
    ctx->pc = 0x1d87b8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937776), GPR_U32(ctx, 2));
label_1d87bc:
    // 0x1d87bc: 0x8f828cb0  lw          $v0, -0x7350($gp)
    ctx->pc = 0x1d87bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1d87c0:
    // 0x1d87c0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1d87c4:
    if (ctx->pc == 0x1D87C4u) {
        ctx->pc = 0x1D87C8u;
        goto label_1d87c8;
    }
    ctx->pc = 0x1D87C0u;
    {
        const bool branch_taken_0x1d87c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d87c0) {
            ctx->pc = 0x1D87D0u;
            goto label_1d87d0;
        }
    }
    ctx->pc = 0x1D87C8u;
label_1d87c8:
    // 0x1d87c8: 0x8f828ca8  lw          $v0, -0x7358($gp)
    ctx->pc = 0x1d87c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937768)));
label_1d87cc:
    // 0x1d87cc: 0xaf828cb4  sw          $v0, -0x734C($gp)
    ctx->pc = 0x1d87ccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937780), GPR_U32(ctx, 2));
label_1d87d0:
    // 0x1d87d0: 0xc077a7c  jal         func_1DE9F0
label_1d87d4:
    if (ctx->pc == 0x1D87D4u) {
        ctx->pc = 0x1D87D8u;
        goto label_1d87d8;
    }
    ctx->pc = 0x1D87D0u;
    SET_GPR_U32(ctx, 31, 0x1D87D8u);
    ctx->pc = 0x1DE9F0u;
    { ctx->pc = 0x1de9f0; return; }
    ctx->pc = 0x1D87D8u;
label_1d87d8:
    // 0x1d87d8: 0x8f848ca0  lw          $a0, -0x7360($gp)
    ctx->pc = 0x1d87d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937760)));
label_1d87dc:
    // 0x1d87dc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1d87dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1d87e0:
    // 0x1d87e0: 0x10830022  beq         $a0, $v1, . + 4 + (0x22 << 2)
label_1d87e4:
    if (ctx->pc == 0x1D87E4u) {
        ctx->pc = 0x1D87E8u;
        goto label_1d87e8;
    }
    ctx->pc = 0x1D87E0u;
    {
        const bool branch_taken_0x1d87e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d87e0) {
            ctx->pc = 0x1D886Cu;
            goto label_1d886c;
        }
    }
    ctx->pc = 0x1D87E8u;
label_1d87e8:
    // 0x1d87e8: 0x8f828c9c  lw          $v0, -0x7364($gp)
    ctx->pc = 0x1d87e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937756)));
label_1d87ec:
    // 0x1d87ec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d87ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1d87f0:
    // 0x1d87f0: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
label_1d87f4:
    if (ctx->pc == 0x1D87F4u) {
        ctx->pc = 0x1D87F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D87F0u;
        // 0x1d87f4: 0xaf828c9c  sw          $v0, -0x7364($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D87F8u;
        goto label_1d87f8;
    }
    ctx->pc = 0x1D87F0u;
    {
        const bool branch_taken_0x1d87f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D87F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D87F0u;
        // 0x1d87f4: 0xaf828c9c  sw          $v0, -0x7364($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d87f0) {
            ctx->pc = 0x1D8818u;
            goto label_1d8818;
        }
    }
    ctx->pc = 0x1D87F8u;
label_1d87f8:
    // 0x1d87f8: 0x8f828c9c  lw          $v0, -0x7364($gp)
    ctx->pc = 0x1d87f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937756)));
label_1d87fc:
    // 0x1d87fc: 0x28420010  slti        $v0, $v0, 0x10
    ctx->pc = 0x1d87fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
label_1d8800:
    // 0x1d8800: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
label_1d8804:
    if (ctx->pc == 0x1D8804u) {
        ctx->pc = 0x1D8808u;
        goto label_1d8808;
    }
    ctx->pc = 0x1D8800u;
    {
        const bool branch_taken_0x1d8800 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d8800) {
            ctx->pc = 0x1D886Cu;
            goto label_1d886c;
        }
    }
    ctx->pc = 0x1D8808u;
label_1d8808:
    // 0x1d8808: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d8808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d880c:
    // 0x1d880c: 0xaf808c9c  sw          $zero, -0x7364($gp)
    ctx->pc = 0x1d880cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 0));
label_1d8810:
    // 0x1d8810: 0x10000016  b           . + 4 + (0x16 << 2)
label_1d8814:
    if (ctx->pc == 0x1D8814u) {
        ctx->pc = 0x1D8814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8810u;
        // 0x1d8814: 0xaf828ca0  sw          $v0, -0x7360($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8818u;
        goto label_1d8818;
    }
    ctx->pc = 0x1D8810u;
    {
        const bool branch_taken_0x1d8810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8810u;
        // 0x1d8814: 0xaf828ca0  sw          $v0, -0x7360($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8810) {
            ctx->pc = 0x1D886Cu;
            goto label_1d886c;
        }
    }
    ctx->pc = 0x1D8818u;
label_1d8818:
    // 0x1d8818: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d8818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d881c:
    // 0x1d881c: 0x14820009  bne         $a0, $v0, . + 4 + (0x9 << 2)
label_1d8820:
    if (ctx->pc == 0x1D8820u) {
        ctx->pc = 0x1D8824u;
        goto label_1d8824;
    }
    ctx->pc = 0x1D881Cu;
    {
        const bool branch_taken_0x1d881c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d881c) {
            ctx->pc = 0x1D8844u;
            goto label_1d8844;
        }
    }
    ctx->pc = 0x1D8824u;
label_1d8824:
    // 0x1d8824: 0x8f828c9c  lw          $v0, -0x7364($gp)
    ctx->pc = 0x1d8824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937756)));
label_1d8828:
    // 0x1d8828: 0x28420030  slti        $v0, $v0, 0x30
    ctx->pc = 0x1d8828u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)48) ? 1 : 0);
label_1d882c:
    // 0x1d882c: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_1d8830:
    if (ctx->pc == 0x1D8830u) {
        ctx->pc = 0x1D8834u;
        goto label_1d8834;
    }
    ctx->pc = 0x1D882Cu;
    {
        const bool branch_taken_0x1d882c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d882c) {
            ctx->pc = 0x1D886Cu;
            goto label_1d886c;
        }
    }
    ctx->pc = 0x1D8834u;
label_1d8834:
    // 0x1d8834: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d8834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d8838:
    // 0x1d8838: 0xaf808c9c  sw          $zero, -0x7364($gp)
    ctx->pc = 0x1d8838u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 0));
label_1d883c:
    // 0x1d883c: 0x1000000b  b           . + 4 + (0xB << 2)
label_1d8840:
    if (ctx->pc == 0x1D8840u) {
        ctx->pc = 0x1D8840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D883Cu;
        // 0x1d8840: 0xaf828ca0  sw          $v0, -0x7360($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8844u;
        goto label_1d8844;
    }
    ctx->pc = 0x1D883Cu;
    {
        const bool branch_taken_0x1d883c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D883Cu;
        // 0x1d8840: 0xaf828ca0  sw          $v0, -0x7360($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d883c) {
            ctx->pc = 0x1D886Cu;
            goto label_1d886c;
        }
    }
    ctx->pc = 0x1D8844u;
label_1d8844:
    // 0x1d8844: 0x0  nop
    ctx->pc = 0x1d8844u;
    // NOP
label_1d8848:
    // 0x1d8848: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1d8848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d884c:
    // 0x1d884c: 0x14820007  bne         $a0, $v0, . + 4 + (0x7 << 2)
label_1d8850:
    if (ctx->pc == 0x1D8850u) {
        ctx->pc = 0x1D8854u;
        goto label_1d8854;
    }
    ctx->pc = 0x1D884Cu;
    {
        const bool branch_taken_0x1d884c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d884c) {
            ctx->pc = 0x1D886Cu;
            goto label_1d886c;
        }
    }
    ctx->pc = 0x1D8854u;
label_1d8854:
    // 0x1d8854: 0x8f828c9c  lw          $v0, -0x7364($gp)
    ctx->pc = 0x1d8854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937756)));
label_1d8858:
    // 0x1d8858: 0x28420008  slti        $v0, $v0, 0x8
    ctx->pc = 0x1d8858u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
label_1d885c:
    // 0x1d885c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1d8860:
    if (ctx->pc == 0x1D8860u) {
        ctx->pc = 0x1D8864u;
        goto label_1d8864;
    }
    ctx->pc = 0x1D885Cu;
    {
        const bool branch_taken_0x1d885c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d885c) {
            ctx->pc = 0x1D886Cu;
            goto label_1d886c;
        }
    }
    ctx->pc = 0x1D8864u;
label_1d8864:
    // 0x1d8864: 0xaf838ca0  sw          $v1, -0x7360($gp)
    ctx->pc = 0x1d8864u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 3));
label_1d8868:
    // 0x1d8868: 0xaf808c9c  sw          $zero, -0x7364($gp)
    ctx->pc = 0x1d8868u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 0));
label_1d886c:
    // 0x1d886c: 0x0  nop
    ctx->pc = 0x1d886cu;
    // NOP
label_1d8870:
    // 0x1d8870: 0xc07a9d8  jal         func_1EA760
label_1d8874:
    if (ctx->pc == 0x1D8874u) {
        ctx->pc = 0x1D8878u;
        goto label_1d8878;
    }
    ctx->pc = 0x1D8870u;
    SET_GPR_U32(ctx, 31, 0x1D8878u);
    ctx->pc = 0x1EA760u;
    { ctx->pc = 0x1ea760; return; }
    ctx->pc = 0x1D8878u;
label_1d8878:
    // 0x1d8878: 0xc04e168  jal         func_1385A0
label_1d887c:
    if (ctx->pc == 0x1D887Cu) {
        ctx->pc = 0x1D8880u;
        goto label_1d8880;
    }
    ctx->pc = 0x1D8878u;
    SET_GPR_U32(ctx, 31, 0x1D8880u);
    ctx->pc = 0x1385A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1385A0u, 0x1D8878u, 0x1D8880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8880u;
label_1d8880:
    // 0x1d8880: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1d8880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
label_1d8884:
    // 0x1d8884: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1d8884u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_1d8888:
    // 0x1d8888: 0x34433ffc  ori         $v1, $v0, 0x3FFC
    ctx->pc = 0x1d8888u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16380);
label_1d888c:
    // 0x1d888c: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x1d888cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
label_1d8890:
    // 0x1d8890: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1d8890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1d8894:
    // 0x1d8894: 0x27828ce0  addiu       $v0, $gp, -0x7320
    ctx->pc = 0x1d8894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937824));
label_1d8898:
    // 0x1d8898: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x1d8898u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1d889c:
    // 0x1d889c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d889cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d88a0:
    // 0x1d88a0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d88a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d88a4:
    // 0x1d88a4: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x1d88a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1d88a8:
    // 0x1d88a8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d88a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1d88ac:
    // 0x1d88ac: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1d88acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1d88b0:
    // 0x1d88b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d88b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d88b4:
    // 0x1d88b4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1d88b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d88b8:
    // 0x1d88b8: 0xc066c72  jal         func_19B1C8
label_1d88bc:
    if (ctx->pc == 0x1D88BCu) {
        ctx->pc = 0x1D88BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D88B8u;
        // 0x1d88bc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D88C0u;
        goto label_1d88c0;
    }
    ctx->pc = 0x1D88B8u;
    SET_GPR_U32(ctx, 31, 0x1D88C0u);
    ctx->pc = 0x1D88BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D88B8u;
    // 0x1d88bc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1D88B8u, 0x1D88C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D88C0u;
label_1d88c0:
    // 0x1d88c0: 0xc077e84  jal         func_1DFA10
label_1d88c4:
    if (ctx->pc == 0x1D88C4u) {
        ctx->pc = 0x1D88C8u;
        goto label_1d88c8;
    }
    ctx->pc = 0x1D88C0u;
    SET_GPR_U32(ctx, 31, 0x1D88C8u);
    ctx->pc = 0x1DFA10u;
    { ctx->pc = 0x1dfa10; return; }
    ctx->pc = 0x1D88C8u;
label_1d88c8:
    // 0x1d88c8: 0xc077d90  jal         func_1DF640
label_1d88cc:
    if (ctx->pc == 0x1D88CCu) {
        ctx->pc = 0x1D88D0u;
        goto label_1d88d0;
    }
    ctx->pc = 0x1D88C8u;
    SET_GPR_U32(ctx, 31, 0x1D88D0u);
    ctx->pc = 0x1DF640u;
    { ctx->pc = 0x1df640; return; }
    ctx->pc = 0x1D88D0u;
label_1d88d0:
    // 0x1d88d0: 0xc077ab4  jal         func_1DEAD0
label_1d88d4:
    if (ctx->pc == 0x1D88D4u) {
        ctx->pc = 0x1D88D8u;
        goto label_1d88d8;
    }
    ctx->pc = 0x1D88D0u;
    SET_GPR_U32(ctx, 31, 0x1D88D8u);
    ctx->pc = 0x1DEAD0u;
    { ctx->pc = 0x1dead0; return; }
    ctx->pc = 0x1D88D8u;
label_1d88d8:
    // 0x1d88d8: 0xc077880  jal         func_1DE200
label_1d88dc:
    if (ctx->pc == 0x1D88DCu) {
        ctx->pc = 0x1D88E0u;
        goto label_1d88e0;
    }
    ctx->pc = 0x1D88D8u;
    SET_GPR_U32(ctx, 31, 0x1D88E0u);
    ctx->pc = 0x1DE200u;
    { ctx->pc = 0x1de200; return; }
    ctx->pc = 0x1D88E0u;
label_1d88e0:
    // 0x1d88e0: 0x8f828c8c  lw          $v0, -0x7374($gp)
    ctx->pc = 0x1d88e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937740)));
label_1d88e4:
    // 0x1d88e4: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
label_1d88e8:
    if (ctx->pc == 0x1D88E8u) {
        ctx->pc = 0x1D88ECu;
        goto label_1d88ec;
    }
    ctx->pc = 0x1D88E4u;
    {
        const bool branch_taken_0x1d88e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d88e4) {
            ctx->pc = 0x1D89C0u;
            { ctx->pc = 0x1d89c0; return; }
        }
    }
    ctx->pc = 0x1D88ECu;
label_1d88ec:
    // 0x1d88ec: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1d88ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1d88f0:
    // 0x1d88f0: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1d88f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_1d88f4:
    // 0x1d88f4: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1d88f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1d88f8:
    // 0x1d88f8: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x1d88f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
label_1d88fc:
    // 0x1d88fc: 0x27828c90  addiu       $v0, $gp, -0x7370
    ctx->pc = 0x1d88fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937744));
label_1d8900:
    // 0x1d8900: 0x2406027a  addiu       $a2, $zero, 0x27A
    ctx->pc = 0x1d8900u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 634));
label_1d8904:
    // 0x1d8904: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d8904u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d8908:
    // 0x1d8908: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d8908u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d890c:
    // 0x1d890c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d890cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d8910:
    // 0x1d8910: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x1d8910u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1d8914:
    // 0x1d8914: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d8914u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1d8918:
    // 0x1d8918: 0x859021  addu        $s2, $a0, $a1
    ctx->pc = 0x1d8918u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1d891c:
    // 0x1d891c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d891cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d8920:
    // 0x1d8920: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1d8920u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d8924:
    // 0x1d8924: 0xc066c72  jal         func_19B1C8
label_1d8928:
    if (ctx->pc == 0x1D8928u) {
        ctx->pc = 0x1D8928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8924u;
        // 0x1d8928: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D892Cu;
        goto label_1d892c;
    }
    ctx->pc = 0x1D8924u;
    SET_GPR_U32(ctx, 31, 0x1D892Cu);
    ctx->pc = 0x1D8928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8924u;
    // 0x1d8928: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1D8924u, 0x1D892Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D892Cu;
label_1d892c:
    // 0x1d892c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1d892cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1d8930:
    // 0x1d8930: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1d8930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
label_1d8934:
    // 0x1d8934: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1d8934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1d8938:
    // 0x1d8938: 0x24420540  addiu       $v0, $v0, 0x540
    ctx->pc = 0x1d8938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1344));
label_1d893c:
    // 0x1d893c: 0x8f848c80  lw          $a0, -0x7380($gp)
    ctx->pc = 0x1d893cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937728)));
label_1d8940:
    // 0x1d8940: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d8940u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1d8944:
    // 0x1d8944: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d8944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d8948:
    // 0x1d8948: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x1d8948u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d894c:
    // 0x1d894c: 0xc070e2c  jal         func_1C38B0
label_1d8950:
    if (ctx->pc == 0x1D8950u) {
        ctx->pc = 0x1D8950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D894Cu;
        // 0x1d8950: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8954u;
        goto label_1d8954;
    }
    ctx->pc = 0x1D894Cu;
    SET_GPR_U32(ctx, 31, 0x1D8954u);
    ctx->pc = 0x1D8950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D894Cu;
    // 0x1d8950: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C38B0u;
    { ctx->pc = 0x1c38b0; return; }
    ctx->pc = 0x1D8954u;
label_1d8954:
    // 0x1d8954: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1d8954u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1d8958:
    // 0x1d8958: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d8958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1d895c:
    // 0x1d895c: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1d895cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->pc = 0x1d8960u;
    return;
}

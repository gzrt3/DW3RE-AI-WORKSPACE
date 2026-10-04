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

// Function: FUN_0019b5e8
// Address: 0x19b5e8 - 0x29b5f4
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b5e8_part27(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1a8108u: goto label_1a8108;
        case 0x1a810cu: goto label_1a810c;
        case 0x1a8110u: goto label_1a8110;
        case 0x1a8114u: goto label_1a8114;
        case 0x1a8118u: goto label_1a8118;
        case 0x1a811cu: goto label_1a811c;
        case 0x1a8120u: goto label_1a8120;
        case 0x1a8124u: goto label_1a8124;
        case 0x1a8128u: goto label_1a8128;
        case 0x1a812cu: goto label_1a812c;
        case 0x1a8130u: goto label_1a8130;
        case 0x1a8134u: goto label_1a8134;
        case 0x1a8138u: goto label_1a8138;
        case 0x1a813cu: goto label_1a813c;
        case 0x1a8140u: goto label_1a8140;
        case 0x1a8144u: goto label_1a8144;
        case 0x1a8148u: goto label_1a8148;
        case 0x1a814cu: goto label_1a814c;
        case 0x1a8150u: goto label_1a8150;
        case 0x1a8154u: goto label_1a8154;
        case 0x1a8158u: goto label_1a8158;
        case 0x1a815cu: goto label_1a815c;
        case 0x1a8160u: goto label_1a8160;
        case 0x1a8164u: goto label_1a8164;
        case 0x1a8168u: goto label_1a8168;
        case 0x1a816cu: goto label_1a816c;
        case 0x1a8170u: goto label_1a8170;
        case 0x1a8174u: goto label_1a8174;
        case 0x1a8178u: goto label_1a8178;
        case 0x1a817cu: goto label_1a817c;
        case 0x1a8180u: goto label_1a8180;
        case 0x1a8184u: goto label_1a8184;
        case 0x1a8188u: goto label_1a8188;
        case 0x1a818cu: goto label_1a818c;
        case 0x1a8190u: goto label_1a8190;
        case 0x1a8194u: goto label_1a8194;
        case 0x1a8198u: goto label_1a8198;
        case 0x1a819cu: goto label_1a819c;
        case 0x1a81a0u: goto label_1a81a0;
        case 0x1a81a4u: goto label_1a81a4;
        case 0x1a81a8u: goto label_1a81a8;
        case 0x1a81acu: goto label_1a81ac;
        case 0x1a81b0u: goto label_1a81b0;
        case 0x1a81b4u: goto label_1a81b4;
        case 0x1a81b8u: goto label_1a81b8;
        case 0x1a81bcu: goto label_1a81bc;
        case 0x1a81c0u: goto label_1a81c0;
        case 0x1a81c4u: goto label_1a81c4;
        case 0x1a81c8u: goto label_1a81c8;
        case 0x1a81ccu: goto label_1a81cc;
        case 0x1a81d0u: goto label_1a81d0;
        case 0x1a81d4u: goto label_1a81d4;
        case 0x1a81d8u: goto label_1a81d8;
        case 0x1a81dcu: goto label_1a81dc;
        case 0x1a81e0u: goto label_1a81e0;
        case 0x1a81e4u: goto label_1a81e4;
        case 0x1a81e8u: goto label_1a81e8;
        case 0x1a81ecu: goto label_1a81ec;
        case 0x1a81f0u: goto label_1a81f0;
        case 0x1a81f4u: goto label_1a81f4;
        case 0x1a81f8u: goto label_1a81f8;
        case 0x1a81fcu: goto label_1a81fc;
        case 0x1a8200u: goto label_1a8200;
        case 0x1a8204u: goto label_1a8204;
        case 0x1a8208u: goto label_1a8208;
        case 0x1a820cu: goto label_1a820c;
        case 0x1a8210u: goto label_1a8210;
        case 0x1a8214u: goto label_1a8214;
        case 0x1a8218u: goto label_1a8218;
        case 0x1a821cu: goto label_1a821c;
        case 0x1a8220u: goto label_1a8220;
        case 0x1a8224u: goto label_1a8224;
        case 0x1a8228u: goto label_1a8228;
        case 0x1a822cu: goto label_1a822c;
        case 0x1a8230u: goto label_1a8230;
        case 0x1a8234u: goto label_1a8234;
        case 0x1a8238u: goto label_1a8238;
        case 0x1a823cu: goto label_1a823c;
        case 0x1a8240u: goto label_1a8240;
        case 0x1a8244u: goto label_1a8244;
        case 0x1a8248u: goto label_1a8248;
        case 0x1a824cu: goto label_1a824c;
        case 0x1a8250u: goto label_1a8250;
        case 0x1a8254u: goto label_1a8254;
        case 0x1a8258u: goto label_1a8258;
        case 0x1a825cu: goto label_1a825c;
        case 0x1a8260u: goto label_1a8260;
        case 0x1a8264u: goto label_1a8264;
        case 0x1a8268u: goto label_1a8268;
        case 0x1a826cu: goto label_1a826c;
        case 0x1a8270u: goto label_1a8270;
        case 0x1a8274u: goto label_1a8274;
        case 0x1a8278u: goto label_1a8278;
        case 0x1a827cu: goto label_1a827c;
        case 0x1a8280u: goto label_1a8280;
        case 0x1a8284u: goto label_1a8284;
        case 0x1a8288u: goto label_1a8288;
        case 0x1a828cu: goto label_1a828c;
        case 0x1a8290u: goto label_1a8290;
        case 0x1a8294u: goto label_1a8294;
        case 0x1a8298u: goto label_1a8298;
        case 0x1a829cu: goto label_1a829c;
        case 0x1a82a0u: goto label_1a82a0;
        case 0x1a82a4u: goto label_1a82a4;
        case 0x1a82a8u: goto label_1a82a8;
        case 0x1a82acu: goto label_1a82ac;
        case 0x1a82b0u: goto label_1a82b0;
        case 0x1a82b4u: goto label_1a82b4;
        case 0x1a82b8u: goto label_1a82b8;
        case 0x1a82bcu: goto label_1a82bc;
        case 0x1a82c0u: goto label_1a82c0;
        case 0x1a82c4u: goto label_1a82c4;
        case 0x1a82c8u: goto label_1a82c8;
        case 0x1a82ccu: goto label_1a82cc;
        case 0x1a82d0u: goto label_1a82d0;
        case 0x1a82d4u: goto label_1a82d4;
        case 0x1a82d8u: goto label_1a82d8;
        case 0x1a82dcu: goto label_1a82dc;
        case 0x1a82e0u: goto label_1a82e0;
        case 0x1a82e4u: goto label_1a82e4;
        case 0x1a82e8u: goto label_1a82e8;
        case 0x1a82ecu: goto label_1a82ec;
        case 0x1a82f0u: goto label_1a82f0;
        case 0x1a82f4u: goto label_1a82f4;
        case 0x1a82f8u: goto label_1a82f8;
        case 0x1a82fcu: goto label_1a82fc;
        case 0x1a8300u: goto label_1a8300;
        case 0x1a8304u: goto label_1a8304;
        case 0x1a8308u: goto label_1a8308;
        case 0x1a830cu: goto label_1a830c;
        case 0x1a8310u: goto label_1a8310;
        case 0x1a8314u: goto label_1a8314;
        case 0x1a8318u: goto label_1a8318;
        case 0x1a831cu: goto label_1a831c;
        case 0x1a8320u: goto label_1a8320;
        case 0x1a8324u: goto label_1a8324;
        case 0x1a8328u: goto label_1a8328;
        case 0x1a832cu: goto label_1a832c;
        case 0x1a8330u: goto label_1a8330;
        case 0x1a8334u: goto label_1a8334;
        case 0x1a8338u: goto label_1a8338;
        case 0x1a833cu: goto label_1a833c;
        case 0x1a8340u: goto label_1a8340;
        case 0x1a8344u: goto label_1a8344;
        case 0x1a8348u: goto label_1a8348;
        case 0x1a834cu: goto label_1a834c;
        case 0x1a8350u: goto label_1a8350;
        case 0x1a8354u: goto label_1a8354;
        case 0x1a8358u: goto label_1a8358;
        case 0x1a835cu: goto label_1a835c;
        case 0x1a8360u: goto label_1a8360;
        case 0x1a8364u: goto label_1a8364;
        case 0x1a8368u: goto label_1a8368;
        case 0x1a836cu: goto label_1a836c;
        case 0x1a8370u: goto label_1a8370;
        case 0x1a8374u: goto label_1a8374;
        case 0x1a8378u: goto label_1a8378;
        case 0x1a837cu: goto label_1a837c;
        case 0x1a8380u: goto label_1a8380;
        case 0x1a8384u: goto label_1a8384;
        case 0x1a8388u: goto label_1a8388;
        case 0x1a838cu: goto label_1a838c;
        case 0x1a8390u: goto label_1a8390;
        case 0x1a8394u: goto label_1a8394;
        case 0x1a8398u: goto label_1a8398;
        case 0x1a839cu: goto label_1a839c;
        case 0x1a83a0u: goto label_1a83a0;
        case 0x1a83a4u: goto label_1a83a4;
        case 0x1a83a8u: goto label_1a83a8;
        case 0x1a83acu: goto label_1a83ac;
        case 0x1a83b0u: goto label_1a83b0;
        case 0x1a83b4u: goto label_1a83b4;
        case 0x1a83b8u: goto label_1a83b8;
        case 0x1a83bcu: goto label_1a83bc;
        case 0x1a83c0u: goto label_1a83c0;
        case 0x1a83c4u: goto label_1a83c4;
        case 0x1a83c8u: goto label_1a83c8;
        case 0x1a83ccu: goto label_1a83cc;
        case 0x1a83d0u: goto label_1a83d0;
        case 0x1a83d4u: goto label_1a83d4;
        case 0x1a83d8u: goto label_1a83d8;
        case 0x1a83dcu: goto label_1a83dc;
        case 0x1a83e0u: goto label_1a83e0;
        case 0x1a83e4u: goto label_1a83e4;
        case 0x1a83e8u: goto label_1a83e8;
        case 0x1a83ecu: goto label_1a83ec;
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
        default: return;
    }

label_1a8108:
    // 0x1a8108: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a8108u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a810c:
    // 0x1a810c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a810cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a8110:
    // 0x1a8110: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a8110u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a8114:
    // 0x1a8114: 0x3e00008  jr          $ra
label_1a8118:
    if (ctx->pc == 0x1A8118u) {
        ctx->pc = 0x1A8118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8114u;
        // 0x1a8118: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A811Cu;
        goto label_1a811c;
    }
    ctx->pc = 0x1A8114u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8114u;
        // 0x1a8118: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A8114u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A811Cu;
label_1a811c:
    // 0x1a811c: 0x0  nop
    ctx->pc = 0x1a811cu;
    // NOP
label_1a8120:
    // 0x1a8120: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1a8120u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1a8124:
    // 0x1a8124: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a8124u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1a8128:
    // 0x1a8128: 0x24463ec0  addiu       $a2, $v0, 0x3EC0
    ctx->pc = 0x1a8128u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16064));
label_1a812c:
    // 0x1a812c: 0x3c072000  lui         $a3, 0x2000
    ctx->pc = 0x1a812cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8192 << 16));
label_1a8130:
    // 0x1a8130: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a8130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1a8134:
    // 0x1a8134: 0xc72825  or          $a1, $a2, $a3
    ctx->pc = 0x1a8134u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
label_1a8138:
    // 0x1a8138: 0x88a20003  lwl         $v0, 0x3($a1)
    ctx->pc = 0x1a8138u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
label_1a813c:
    // 0x1a813c: 0x98a20000  lwr         $v0, 0x0($a1)
    ctx->pc = 0x1a813cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
label_1a8140:
    // 0x1a8140: 0xaba20003  swl         $v0, 0x3($sp)
    ctx->pc = 0x1a8140u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_1a8144:
    // 0x1a8144: 0x24c30004  addiu       $v1, $a2, 0x4
    ctx->pc = 0x1a8144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_1a8148:
    // 0x1a8148: 0xbba20000  swr         $v0, 0x0($sp)
    ctx->pc = 0x1a8148u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_1a814c:
    // 0x1a814c: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x1a814cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
label_1a8150:
    // 0x1a8150: 0x24c40008  addiu       $a0, $a2, 0x8
    ctx->pc = 0x1a8150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_1a8154:
    // 0x1a8154: 0x88650003  lwl         $a1, 0x3($v1)
    ctx->pc = 0x1a8154u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 5) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 5, (int32_t)merged); }
label_1a8158:
    // 0x1a8158: 0x98650000  lwr         $a1, 0x0($v1)
    ctx->pc = 0x1a8158u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 5) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 5) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 5, merged64); }
label_1a815c:
    // 0x1a815c: 0xaba50007  swl         $a1, 0x7($sp)
    ctx->pc = 0x1a815cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 5); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_1a8160:
    // 0x1a8160: 0xbba50004  swr         $a1, 0x4($sp)
    ctx->pc = 0x1a8160u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 5); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_1a8164:
    // 0x1a8164: 0x872025  or          $a0, $a0, $a3
    ctx->pc = 0x1a8164u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 7));
label_1a8168:
    // 0x1a8168: 0x24c2000c  addiu       $v0, $a2, 0xC
    ctx->pc = 0x1a8168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
label_1a816c:
    // 0x1a816c: 0x88830003  lwl         $v1, 0x3($a0)
    ctx->pc = 0x1a816cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
label_1a8170:
    // 0x1a8170: 0x98830000  lwr         $v1, 0x0($a0)
    ctx->pc = 0x1a8170u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
label_1a8174:
    // 0x1a8174: 0xaba3000b  swl         $v1, 0xB($sp)
    ctx->pc = 0x1a8174u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_1a8178:
    // 0x1a8178: 0xbba30008  swr         $v1, 0x8($sp)
    ctx->pc = 0x1a8178u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_1a817c:
    // 0x1a817c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x1a817cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
label_1a8180:
    // 0x1a8180: 0x884a0003  lwl         $t2, 0x3($v0)
    ctx->pc = 0x1a8180u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 10) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 10, (int32_t)merged); }
label_1a8184:
    // 0x1a8184: 0x984a0000  lwr         $t2, 0x0($v0)
    ctx->pc = 0x1a8184u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 10) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 10) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 10, merged64); }
label_1a8188:
    // 0x1a8188: 0xabaa000f  swl         $t2, 0xF($sp)
    ctx->pc = 0x1a8188u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 10); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_1a818c:
    // 0x1a818c: 0xbbaa000c  swr         $t2, 0xC($sp)
    ctx->pc = 0x1a818cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 12); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 10); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_1a8190:
    // 0x1a8190: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1a8190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1a8194:
    // 0x1a8194: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_1a8198:
    if (ctx->pc == 0x1A8198u) {
        ctx->pc = 0x1A8198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8194u;
        // 0x1a8198: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A819Cu;
        goto label_1a819c;
    }
    ctx->pc = 0x1A8194u;
    {
        const bool branch_taken_0x1a8194 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1A8198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8194u;
        // 0x1a8198: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8194) {
            ctx->pc = 0x1A81ACu;
            goto label_1a81ac;
        }
    }
    ctx->pc = 0x1A819Cu;
label_1a819c:
    // 0x1a819c: 0x24c50010  addiu       $a1, $a2, 0x10
    ctx->pc = 0x1a819cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_1a81a0:
    // 0x1a81a0: 0x8fa6000c  lw          $a2, 0xC($sp)
    ctx->pc = 0x1a81a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_1a81a4:
    // 0x1a81a4: 0xc08e93e  jal         func_23A4F8
label_1a81a8:
    if (ctx->pc == 0x1A81A8u) {
        ctx->pc = 0x1A81A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A81A4u;
        // 0x1a81a8: 0xa72825  or          $a1, $a1, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A81ACu;
        goto label_1a81ac;
    }
    ctx->pc = 0x1A81A4u;
    SET_GPR_U32(ctx, 31, 0x1A81ACu);
    ctx->pc = 0x1A81A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A81A4u;
    // 0x1a81a8: 0xa72825  or          $a1, $a1, $a3 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    { ctx->pc = 0x23a4f8; return; }
    ctx->pc = 0x1A81ACu;
label_1a81ac:
    // 0x1a81ac: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1a81acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1a81b0:
    // 0x1a81b0: 0x2444fffe  addiu       $a0, $v0, -0x2
    ctx->pc = 0x1a81b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_1a81b4:
    // 0x1a81b4: 0x2c830019  sltiu       $v1, $a0, 0x19
    ctx->pc = 0x1a81b4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)25) ? 1 : 0);
label_1a81b8:
    // 0x1a81b8: 0x106000a9  beqz        $v1, . + 4 + (0xA9 << 2)
label_1a81bc:
    if (ctx->pc == 0x1A81BCu) {
        ctx->pc = 0x1A81BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A81B8u;
        // 0x1a81bc: 0x3c02002d  lui         $v0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A81C0u;
        goto label_1a81c0;
    }
    ctx->pc = 0x1A81B8u;
    {
        const bool branch_taken_0x1a81b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A81BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A81B8u;
        // 0x1a81bc: 0x3c02002d  lui         $v0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a81b8) {
            ctx->pc = 0x1A8460u;
            goto label_1a8460;
        }
    }
    ctx->pc = 0x1A81C0u;
label_1a81c0:
    // 0x1a81c0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1a81c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1a81c4:
    // 0x1a81c4: 0x2442a6c0  addiu       $v0, $v0, -0x5940
    ctx->pc = 0x1a81c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944448));
label_1a81c8:
    // 0x1a81c8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1a81c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1a81cc:
    // 0x1a81cc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1a81ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1a81d0:
    // 0x1a81d0: 0x800008  jr          $a0
label_1a81d4:
    if (ctx->pc == 0x1A81D4u) {
        ctx->pc = 0x1A81D8u;
        goto label_1a81d8;
    }
    ctx->pc = 0x1A81D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A81D8u: goto label_1a81d8;
            case 0x1A8270u: goto label_1a8270;
            case 0x1A8350u: goto label_1a8350;
            case 0x1A8400u: goto label_1a8400;
            case 0x1A8460u: goto label_1a8460;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A81D0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1A81D8u;
label_1a81d8:
    // 0x1a81d8: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1a81d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1a81dc:
    // 0x1a81dc: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1a81dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
label_1a81e0:
    // 0x1a81e0: 0x24423ed4  addiu       $v0, $v0, 0x3ED4
    ctx->pc = 0x1a81e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16084));
label_1a81e4:
    // 0x1a81e4: 0x433025  or          $a2, $v0, $v1
    ctx->pc = 0x1a81e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1a81e8:
    // 0x1a81e8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1a81e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1a81ec:
    // 0x1a81ec: 0x5840000f  blezl       $v0, . + 4 + (0xF << 2)
label_1a81f0:
    if (ctx->pc == 0x1A81F0u) {
        ctx->pc = 0x1A81F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A81ECu;
        // 0x1a81f0: 0x8cc20004  lw          $v0, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A81F4u;
        goto label_1a81f4;
    }
    ctx->pc = 0x1A81ECu;
    {
        const bool branch_taken_0x1a81ec = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1a81ec) {
            ctx->pc = 0x1A81F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A81ECu;
            // 0x1a81f0: 0x8cc20004  lw          $v0, 0x4($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A822Cu;
            goto label_1a822c;
        }
    }
    ctx->pc = 0x1A81F4u;
label_1a81f4:
    // 0x1a81f4: 0x8cc80008  lw          $t0, 0x8($a2)
    ctx->pc = 0x1a81f4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_1a81f8:
    // 0x1a81f8: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
label_1a81fc:
    if (ctx->pc == 0x1A81FCu) {
        ctx->pc = 0x1A81FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A81F8u;
        // 0x1a81fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8200u;
        goto label_1a8200;
    }
    ctx->pc = 0x1A81F8u;
    {
        const bool branch_taken_0x1a81f8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1A81FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A81F8u;
        // 0x1a81fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a81f8) {
            ctx->pc = 0x1A8228u;
            goto label_1a8228;
        }
    }
    ctx->pc = 0x1A8200u;
label_1a8200:
    // 0x1a8200: 0x24c70010  addiu       $a3, $a2, 0x10
    ctx->pc = 0x1a8200u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_1a8204:
    // 0x1a8204: 0xe51021  addu        $v0, $a3, $a1
    ctx->pc = 0x1a8204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_1a8208:
    // 0x1a8208: 0x1052021  addu        $a0, $t0, $a1
    ctx->pc = 0x1a8208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
label_1a820c:
    // 0x1a820c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1a820cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1a8210:
    // 0x1a8210: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1a8210u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1a8214:
    // 0x1a8214: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x1a8214u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_1a8218:
    // 0x1a8218: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1a8218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1a821c:
    // 0x1a821c: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1a821cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1a8220:
    // 0x1a8220: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_1a8224:
    if (ctx->pc == 0x1A8224u) {
        ctx->pc = 0x1A8224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8220u;
        // 0x1a8224: 0xe51021  addu        $v0, $a3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8228u;
        goto label_1a8228;
    }
    ctx->pc = 0x1A8220u;
    {
        const bool branch_taken_0x1a8220 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A8224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8220u;
        // 0x1a8224: 0xe51021  addu        $v0, $a3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8220) {
            ctx->pc = 0x1A8208u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a8208;
        }
    }
    ctx->pc = 0x1A8228u;
label_1a8228:
    // 0x1a8228: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x1a8228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_1a822c:
    // 0x1a822c: 0x1840008d  blez        $v0, . + 4 + (0x8D << 2)
label_1a8230:
    if (ctx->pc == 0x1A8230u) {
        ctx->pc = 0x1A8230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A822Cu;
        // 0x1a8230: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8234u;
        goto label_1a8234;
    }
    ctx->pc = 0x1A822Cu;
    {
        const bool branch_taken_0x1a822c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1A8230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A822Cu;
        // 0x1a8230: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a822c) {
            ctx->pc = 0x1A8464u;
            goto label_1a8464;
        }
    }
    ctx->pc = 0x1A8234u;
label_1a8234:
    // 0x1a8234: 0x8cc8000c  lw          $t0, 0xC($a2)
    ctx->pc = 0x1a8234u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1a8238:
    // 0x1a8238: 0x1840008a  blez        $v0, . + 4 + (0x8A << 2)
label_1a823c:
    if (ctx->pc == 0x1A823Cu) {
        ctx->pc = 0x1A823Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8238u;
        // 0x1a823c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8240u;
        goto label_1a8240;
    }
    ctx->pc = 0x1A8238u;
    {
        const bool branch_taken_0x1a8238 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1A823Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8238u;
        // 0x1a823c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8238) {
            ctx->pc = 0x1A8464u;
            goto label_1a8464;
        }
    }
    ctx->pc = 0x1A8240u;
label_1a8240:
    // 0x1a8240: 0x24c70050  addiu       $a3, $a2, 0x50
    ctx->pc = 0x1a8240u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
label_1a8244:
    // 0x1a8244: 0xe51021  addu        $v0, $a3, $a1
    ctx->pc = 0x1a8244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_1a8248:
    // 0x1a8248: 0x1052021  addu        $a0, $t0, $a1
    ctx->pc = 0x1a8248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
label_1a824c:
    // 0x1a824c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1a824cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1a8250:
    // 0x1a8250: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1a8250u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1a8254:
    // 0x1a8254: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x1a8254u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_1a8258:
    // 0x1a8258: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x1a8258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_1a825c:
    // 0x1a825c: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1a825cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1a8260:
    // 0x1a8260: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_1a8264:
    if (ctx->pc == 0x1A8264u) {
        ctx->pc = 0x1A8264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8260u;
        // 0x1a8264: 0xe51021  addu        $v0, $a3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8268u;
        goto label_1a8268;
    }
    ctx->pc = 0x1A8260u;
    {
        const bool branch_taken_0x1a8260 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A8264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8260u;
        // 0x1a8264: 0xe51021  addu        $v0, $a3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8260) {
            ctx->pc = 0x1A8248u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a8248;
        }
    }
    ctx->pc = 0x1A8268u;
label_1a8268:
    // 0x1a8268: 0x1000007e  b           . + 4 + (0x7E << 2)
label_1a826c:
    if (ctx->pc == 0x1A826Cu) {
        ctx->pc = 0x1A826Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8268u;
        // 0x1a826c: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8270u;
        goto label_1a8270;
    }
    ctx->pc = 0x1A8268u;
    {
        const bool branch_taken_0x1a8268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A826Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8268u;
        // 0x1a826c: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8268) {
            ctx->pc = 0x1A8464u;
            goto label_1a8464;
        }
    }
    ctx->pc = 0x1A8270u;
label_1a8270:
    // 0x1a8270: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1a8270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1a8274:
    // 0x1a8274: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x1a8274u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
label_1a8278:
    // 0x1a8278: 0x24423ed4  addiu       $v0, $v0, 0x3ED4
    ctx->pc = 0x1a8278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16084));
label_1a827c:
    // 0x1a827c: 0x441825  or          $v1, $v0, $a0
    ctx->pc = 0x1a827cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_1a8280:
    // 0x1a8280: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a8280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_1a8284:
    // 0x1a8284: 0x88660003  lwl         $a2, 0x3($v1)
    ctx->pc = 0x1a8284u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 6) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 6, (int32_t)merged); }
label_1a8288:
    // 0x1a8288: 0x98660000  lwr         $a2, 0x0($v1)
    ctx->pc = 0x1a8288u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 6) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 6) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 6, merged64); }
label_1a828c:
    // 0x1a828c: 0xaba60013  swl         $a2, 0x13($sp)
    ctx->pc = 0x1a828cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_1a8290:
    // 0x1a8290: 0xbba60010  swr         $a2, 0x10($sp)
    ctx->pc = 0x1a8290u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_1a8294:
    // 0x1a8294: 0x441825  or          $v1, $v0, $a0
    ctx->pc = 0x1a8294u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_1a8298:
    // 0x1a8298: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1a8298u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1a829c:
    // 0x1a829c: 0x641025  or          $v0, $v1, $a0
    ctx->pc = 0x1a829cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_1a82a0:
    // 0x1a82a0: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x1a82a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_1a82a4:
    // 0x1a82a4: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_1a82a8:
    if (ctx->pc == 0x1A82A8u) {
        ctx->pc = 0x1A82A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A82A4u;
        // 0x1a82a8: 0x24620140  addiu       $v0, $v1, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A82ACu;
        goto label_1a82ac;
    }
    ctx->pc = 0x1A82A4u;
    {
        const bool branch_taken_0x1a82a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A82A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A82A4u;
        // 0x1a82a8: 0x24620140  addiu       $v0, $v1, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a82a4) {
            ctx->pc = 0x1A8308u;
            goto label_1a8308;
        }
    }
    ctx->pc = 0x1A82ACu;
label_1a82ac:
    // 0x1a82ac: 0x686a0007  ldl         $t2, 0x7($v1)
    ctx->pc = 0x1a82acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
label_1a82b0:
    // 0x1a82b0: 0x6c6a0000  ldr         $t2, 0x0($v1)
    ctx->pc = 0x1a82b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
label_1a82b4:
    // 0x1a82b4: 0x6865000f  ldl         $a1, 0xF($v1)
    ctx->pc = 0x1a82b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_1a82b8:
    // 0x1a82b8: 0x6c650008  ldr         $a1, 0x8($v1)
    ctx->pc = 0x1a82b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_1a82bc:
    // 0x1a82bc: 0x68660017  ldl         $a2, 0x17($v1)
    ctx->pc = 0x1a82bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_1a82c0:
    // 0x1a82c0: 0x6c660010  ldr         $a2, 0x10($v1)
    ctx->pc = 0x1a82c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_1a82c4:
    // 0x1a82c4: 0x6867001f  ldl         $a3, 0x1F($v1)
    ctx->pc = 0x1a82c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_1a82c8:
    // 0x1a82c8: 0x6c670018  ldr         $a3, 0x18($v1)
    ctx->pc = 0x1a82c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_1a82cc:
    // 0x1a82cc: 0xb08a0007  sdl         $t2, 0x7($a0)
    ctx->pc = 0x1a82ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a82d0:
    // 0x1a82d0: 0xb48a0000  sdr         $t2, 0x0($a0)
    ctx->pc = 0x1a82d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a82d4:
    // 0x1a82d4: 0xb085000f  sdl         $a1, 0xF($a0)
    ctx->pc = 0x1a82d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a82d8:
    // 0x1a82d8: 0xb4850008  sdr         $a1, 0x8($a0)
    ctx->pc = 0x1a82d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a82dc:
    // 0x1a82dc: 0xb0860017  sdl         $a2, 0x17($a0)
    ctx->pc = 0x1a82dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a82e0:
    // 0x1a82e0: 0xb4860010  sdr         $a2, 0x10($a0)
    ctx->pc = 0x1a82e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a82e4:
    // 0x1a82e4: 0xb087001f  sdl         $a3, 0x1F($a0)
    ctx->pc = 0x1a82e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a82e8:
    // 0x1a82e8: 0xb4870018  sdr         $a3, 0x18($a0)
    ctx->pc = 0x1a82e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a82ec:
    // 0x1a82ec: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x1a82ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_1a82f0:
    // 0x1a82f0: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1a82f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_1a82f4:
    // 0x1a82f4: 0x0  nop
    ctx->pc = 0x1a82f4u;
    // NOP
label_1a82f8:
    // 0x1a82f8: 0x1462ffec  bne         $v1, $v0, . + 4 + (-0x14 << 2)
label_1a82fc:
    if (ctx->pc == 0x1A82FCu) {
        ctx->pc = 0x1A8300u;
        goto label_1a8300;
    }
    ctx->pc = 0x1A82F8u;
    {
        const bool branch_taken_0x1a82f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a82f8) {
            ctx->pc = 0x1A82ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a82ac;
        }
    }
    ctx->pc = 0x1A8300u;
label_1a8300:
    // 0x1a8300: 0x1000000e  b           . + 4 + (0xE << 2)
label_1a8304:
    if (ctx->pc == 0x1A8304u) {
        ctx->pc = 0x1A8308u;
        goto label_1a8308;
    }
    ctx->pc = 0x1A8300u;
    {
        const bool branch_taken_0x1a8300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a8300) {
            ctx->pc = 0x1A833Cu;
            goto label_1a833c;
        }
    }
    ctx->pc = 0x1A8308u;
label_1a8308:
    // 0x1a8308: 0xdc680000  ld          $t0, 0x0($v1)
    ctx->pc = 0x1a8308u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 0)));
label_1a830c:
    // 0x1a830c: 0xdc690008  ld          $t1, 0x8($v1)
    ctx->pc = 0x1a830cu;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 3), 8)));
label_1a8310:
    // 0x1a8310: 0xdc6a0010  ld          $t2, 0x10($v1)
    ctx->pc = 0x1a8310u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 3), 16)));
label_1a8314:
    // 0x1a8314: 0xdc650018  ld          $a1, 0x18($v1)
    ctx->pc = 0x1a8314u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 24)));
label_1a8318:
    // 0x1a8318: 0xfc880000  sd          $t0, 0x0($a0)
    ctx->pc = 0x1a8318u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 8));
label_1a831c:
    // 0x1a831c: 0xfc890008  sd          $t1, 0x8($a0)
    ctx->pc = 0x1a831cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 9));
label_1a8320:
    // 0x1a8320: 0xfc8a0010  sd          $t2, 0x10($a0)
    ctx->pc = 0x1a8320u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 10));
label_1a8324:
    // 0x1a8324: 0xfc850018  sd          $a1, 0x18($a0)
    ctx->pc = 0x1a8324u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 5));
label_1a8328:
    // 0x1a8328: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x1a8328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_1a832c:
    // 0x1a832c: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1a832cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_1a8330:
    // 0x1a8330: 0x0  nop
    ctx->pc = 0x1a8330u;
    // NOP
label_1a8334:
    // 0x1a8334: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
label_1a8338:
    if (ctx->pc == 0x1A8338u) {
        ctx->pc = 0x1A833Cu;
        goto label_1a833c;
    }
    ctx->pc = 0x1A8334u;
    {
        const bool branch_taken_0x1a8334 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a8334) {
            ctx->pc = 0x1A8308u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a8308;
        }
    }
    ctx->pc = 0x1A833Cu;
label_1a833c:
    // 0x1a833c: 0x88660003  lwl         $a2, 0x3($v1)
    ctx->pc = 0x1a833cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 6) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 6, (int32_t)merged); }
label_1a8340:
    // 0x1a8340: 0x98660000  lwr         $a2, 0x0($v1)
    ctx->pc = 0x1a8340u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 6) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 6) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 6, merged64); }
label_1a8344:
    // 0x1a8344: 0xa8860003  swl         $a2, 0x3($a0)
    ctx->pc = 0x1a8344u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_1a8348:
    // 0x1a8348: 0x10000045  b           . + 4 + (0x45 << 2)
label_1a834c:
    if (ctx->pc == 0x1A834Cu) {
        ctx->pc = 0x1A834Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8348u;
        // 0x1a834c: 0xb8860000  swr         $a2, 0x0($a0) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8350u;
        goto label_1a8350;
    }
    ctx->pc = 0x1A8348u;
    {
        const bool branch_taken_0x1a8348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A834Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8348u;
        // 0x1a834c: 0xb8860000  swr         $a2, 0x0($a0) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8348) {
            ctx->pc = 0x1A8460u;
            goto label_1a8460;
        }
    }
    ctx->pc = 0x1A8350u;
label_1a8350:
    // 0x1a8350: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1a8350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1a8354:
    // 0x1a8354: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x1a8354u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
label_1a8358:
    // 0x1a8358: 0x24423ed4  addiu       $v0, $v0, 0x3ED4
    ctx->pc = 0x1a8358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16084));
label_1a835c:
    // 0x1a835c: 0x441825  or          $v1, $v0, $a0
    ctx->pc = 0x1a835cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_1a8360:
    // 0x1a8360: 0x886a0003  lwl         $t2, 0x3($v1)
    ctx->pc = 0x1a8360u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 10) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 10, (int32_t)merged); }
label_1a8364:
    // 0x1a8364: 0x986a0000  lwr         $t2, 0x0($v1)
    ctx->pc = 0x1a8364u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 10) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 10) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 10, merged64); }
label_1a8368:
    // 0x1a8368: 0xabaa0013  swl         $t2, 0x13($sp)
    ctx->pc = 0x1a8368u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 10); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_1a836c:
    // 0x1a836c: 0xbbaa0010  swr         $t2, 0x10($sp)
    ctx->pc = 0x1a836cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 10); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_1a8370:
    // 0x1a8370: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a8370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_1a8374:
    // 0x1a8374: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1a8374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_1a8378:
    // 0x1a8378: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1a8378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1a837c:
    // 0x1a837c: 0x68480007  ldl         $t0, 0x7($v0)
    ctx->pc = 0x1a837cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_1a8380:
    // 0x1a8380: 0x6c480000  ldr         $t0, 0x0($v0)
    ctx->pc = 0x1a8380u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_1a8384:
    // 0x1a8384: 0x6849000f  ldl         $t1, 0xF($v0)
    ctx->pc = 0x1a8384u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
label_1a8388:
    // 0x1a8388: 0x6c490008  ldr         $t1, 0x8($v0)
    ctx->pc = 0x1a8388u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_1a838c:
    // 0x1a838c: 0x684a0017  ldl         $t2, 0x17($v0)
    ctx->pc = 0x1a838cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
label_1a8390:
    // 0x1a8390: 0x6c4a0010  ldr         $t2, 0x10($v0)
    ctx->pc = 0x1a8390u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
label_1a8394:
    // 0x1a8394: 0x6844001f  ldl         $a0, 0x1F($v0)
    ctx->pc = 0x1a8394u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_1a8398:
    // 0x1a8398: 0x6c440018  ldr         $a0, 0x18($v0)
    ctx->pc = 0x1a8398u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_1a839c:
    // 0x1a839c: 0xb0680007  sdl         $t0, 0x7($v1)
    ctx->pc = 0x1a839cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a83a0:
    // 0x1a83a0: 0xb4680000  sdr         $t0, 0x0($v1)
    ctx->pc = 0x1a83a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a83a4:
    // 0x1a83a4: 0xb069000f  sdl         $t1, 0xF($v1)
    ctx->pc = 0x1a83a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a83a8:
    // 0x1a83a8: 0xb4690008  sdr         $t1, 0x8($v1)
    ctx->pc = 0x1a83a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a83ac:
    // 0x1a83ac: 0xb06a0017  sdl         $t2, 0x17($v1)
    ctx->pc = 0x1a83acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a83b0:
    // 0x1a83b0: 0xb46a0010  sdr         $t2, 0x10($v1)
    ctx->pc = 0x1a83b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a83b4:
    // 0x1a83b4: 0xb064001f  sdl         $a0, 0x1F($v1)
    ctx->pc = 0x1a83b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a83b8:
    // 0x1a83b8: 0xb4640018  sdr         $a0, 0x18($v1)
    ctx->pc = 0x1a83b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a83bc:
    // 0x1a83bc: 0x68480027  ldl         $t0, 0x27($v0)
    ctx->pc = 0x1a83bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_1a83c0:
    // 0x1a83c0: 0x6c480020  ldr         $t0, 0x20($v0)
    ctx->pc = 0x1a83c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_1a83c4:
    // 0x1a83c4: 0x6849002f  ldl         $t1, 0x2F($v0)
    ctx->pc = 0x1a83c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
label_1a83c8:
    // 0x1a83c8: 0x6c490028  ldr         $t1, 0x28($v0)
    ctx->pc = 0x1a83c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_1a83cc:
    // 0x1a83cc: 0x684a0037  ldl         $t2, 0x37($v0)
    ctx->pc = 0x1a83ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
label_1a83d0:
    // 0x1a83d0: 0x6c4a0030  ldr         $t2, 0x30($v0)
    ctx->pc = 0x1a83d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
label_1a83d4:
    // 0x1a83d4: 0x6844003f  ldl         $a0, 0x3F($v0)
    ctx->pc = 0x1a83d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_1a83d8:
    // 0x1a83d8: 0x6c440038  ldr         $a0, 0x38($v0)
    ctx->pc = 0x1a83d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_1a83dc:
    // 0x1a83dc: 0xb0680027  sdl         $t0, 0x27($v1)
    ctx->pc = 0x1a83dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a83e0:
    // 0x1a83e0: 0xb4680020  sdr         $t0, 0x20($v1)
    ctx->pc = 0x1a83e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a83e4:
    // 0x1a83e4: 0xb069002f  sdl         $t1, 0x2F($v1)
    ctx->pc = 0x1a83e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a83e8:
    // 0x1a83e8: 0xb4690028  sdr         $t1, 0x28($v1)
    ctx->pc = 0x1a83e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a83ec:
    // 0x1a83ec: 0xb06a0037  sdl         $t2, 0x37($v1)
    ctx->pc = 0x1a83ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
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
    ctx->pc = 0x1a88d8u;
    return;
}

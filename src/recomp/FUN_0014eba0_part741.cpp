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


void FUN_0014eba0_part741(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x2b80e0u: goto label_2b80e0;
        case 0x2b80e4u: goto label_2b80e4;
        case 0x2b80e8u: goto label_2b80e8;
        case 0x2b80ecu: goto label_2b80ec;
        case 0x2b80f0u: goto label_2b80f0;
        case 0x2b80f4u: goto label_2b80f4;
        case 0x2b80f8u: goto label_2b80f8;
        case 0x2b80fcu: goto label_2b80fc;
        case 0x2b8100u: goto label_2b8100;
        case 0x2b8104u: goto label_2b8104;
        case 0x2b8108u: goto label_2b8108;
        case 0x2b810cu: goto label_2b810c;
        case 0x2b8110u: goto label_2b8110;
        case 0x2b8114u: goto label_2b8114;
        case 0x2b8118u: goto label_2b8118;
        case 0x2b811cu: goto label_2b811c;
        case 0x2b8120u: goto label_2b8120;
        case 0x2b8124u: goto label_2b8124;
        case 0x2b8128u: goto label_2b8128;
        case 0x2b812cu: goto label_2b812c;
        case 0x2b8130u: goto label_2b8130;
        case 0x2b8134u: goto label_2b8134;
        case 0x2b8138u: goto label_2b8138;
        case 0x2b813cu: goto label_2b813c;
        case 0x2b8140u: goto label_2b8140;
        case 0x2b8144u: goto label_2b8144;
        case 0x2b8148u: goto label_2b8148;
        case 0x2b814cu: goto label_2b814c;
        case 0x2b8150u: goto label_2b8150;
        case 0x2b8154u: goto label_2b8154;
        case 0x2b8158u: goto label_2b8158;
        case 0x2b815cu: goto label_2b815c;
        case 0x2b8160u: goto label_2b8160;
        case 0x2b8164u: goto label_2b8164;
        case 0x2b8168u: goto label_2b8168;
        case 0x2b816cu: goto label_2b816c;
        case 0x2b8170u: goto label_2b8170;
        case 0x2b8174u: goto label_2b8174;
        case 0x2b8178u: goto label_2b8178;
        case 0x2b817cu: goto label_2b817c;
        case 0x2b8180u: goto label_2b8180;
        case 0x2b8184u: goto label_2b8184;
        case 0x2b8188u: goto label_2b8188;
        case 0x2b818cu: goto label_2b818c;
        case 0x2b8190u: goto label_2b8190;
        case 0x2b8194u: goto label_2b8194;
        case 0x2b8198u: goto label_2b8198;
        case 0x2b819cu: goto label_2b819c;
        case 0x2b81a0u: goto label_2b81a0;
        case 0x2b81a4u: goto label_2b81a4;
        case 0x2b81a8u: goto label_2b81a8;
        case 0x2b81acu: goto label_2b81ac;
        case 0x2b81b0u: goto label_2b81b0;
        case 0x2b81b4u: goto label_2b81b4;
        case 0x2b81b8u: goto label_2b81b8;
        case 0x2b81bcu: goto label_2b81bc;
        case 0x2b81c0u: goto label_2b81c0;
        case 0x2b81c4u: goto label_2b81c4;
        case 0x2b81c8u: goto label_2b81c8;
        case 0x2b81ccu: goto label_2b81cc;
        case 0x2b81d0u: goto label_2b81d0;
        case 0x2b81d4u: goto label_2b81d4;
        case 0x2b81d8u: goto label_2b81d8;
        case 0x2b81dcu: goto label_2b81dc;
        case 0x2b81e0u: goto label_2b81e0;
        case 0x2b81e4u: goto label_2b81e4;
        case 0x2b81e8u: goto label_2b81e8;
        case 0x2b81ecu: goto label_2b81ec;
        case 0x2b81f0u: goto label_2b81f0;
        case 0x2b81f4u: goto label_2b81f4;
        case 0x2b81f8u: goto label_2b81f8;
        case 0x2b81fcu: goto label_2b81fc;
        case 0x2b8200u: goto label_2b8200;
        case 0x2b8204u: goto label_2b8204;
        case 0x2b8208u: goto label_2b8208;
        case 0x2b820cu: goto label_2b820c;
        case 0x2b8210u: goto label_2b8210;
        case 0x2b8214u: goto label_2b8214;
        case 0x2b8218u: goto label_2b8218;
        case 0x2b821cu: goto label_2b821c;
        case 0x2b8220u: goto label_2b8220;
        case 0x2b8224u: goto label_2b8224;
        case 0x2b8228u: goto label_2b8228;
        case 0x2b822cu: goto label_2b822c;
        case 0x2b8230u: goto label_2b8230;
        case 0x2b8234u: goto label_2b8234;
        case 0x2b8238u: goto label_2b8238;
        case 0x2b823cu: goto label_2b823c;
        case 0x2b8240u: goto label_2b8240;
        case 0x2b8244u: goto label_2b8244;
        case 0x2b8248u: goto label_2b8248;
        case 0x2b824cu: goto label_2b824c;
        case 0x2b8250u: goto label_2b8250;
        case 0x2b8254u: goto label_2b8254;
        case 0x2b8258u: goto label_2b8258;
        case 0x2b825cu: goto label_2b825c;
        case 0x2b8260u: goto label_2b8260;
        case 0x2b8264u: goto label_2b8264;
        case 0x2b8268u: goto label_2b8268;
        case 0x2b826cu: goto label_2b826c;
        case 0x2b8270u: goto label_2b8270;
        case 0x2b8274u: goto label_2b8274;
        case 0x2b8278u: goto label_2b8278;
        case 0x2b827cu: goto label_2b827c;
        case 0x2b8280u: goto label_2b8280;
        case 0x2b8284u: goto label_2b8284;
        case 0x2b8288u: goto label_2b8288;
        case 0x2b828cu: goto label_2b828c;
        case 0x2b8290u: goto label_2b8290;
        case 0x2b8294u: goto label_2b8294;
        case 0x2b8298u: goto label_2b8298;
        case 0x2b829cu: goto label_2b829c;
        case 0x2b82a0u: goto label_2b82a0;
        case 0x2b82a4u: goto label_2b82a4;
        case 0x2b82a8u: goto label_2b82a8;
        case 0x2b82acu: goto label_2b82ac;
        case 0x2b82b0u: goto label_2b82b0;
        case 0x2b82b4u: goto label_2b82b4;
        case 0x2b82b8u: goto label_2b82b8;
        case 0x2b82bcu: goto label_2b82bc;
        case 0x2b82c0u: goto label_2b82c0;
        case 0x2b82c4u: goto label_2b82c4;
        case 0x2b82c8u: goto label_2b82c8;
        case 0x2b82ccu: goto label_2b82cc;
        case 0x2b82d0u: goto label_2b82d0;
        case 0x2b82d4u: goto label_2b82d4;
        case 0x2b82d8u: goto label_2b82d8;
        case 0x2b82dcu: goto label_2b82dc;
        case 0x2b82e0u: goto label_2b82e0;
        case 0x2b82e4u: goto label_2b82e4;
        case 0x2b82e8u: goto label_2b82e8;
        case 0x2b82ecu: goto label_2b82ec;
        case 0x2b82f0u: goto label_2b82f0;
        case 0x2b82f4u: goto label_2b82f4;
        case 0x2b82f8u: goto label_2b82f8;
        case 0x2b82fcu: goto label_2b82fc;
        case 0x2b8300u: goto label_2b8300;
        case 0x2b8304u: goto label_2b8304;
        case 0x2b8308u: goto label_2b8308;
        case 0x2b830cu: goto label_2b830c;
        case 0x2b8310u: goto label_2b8310;
        case 0x2b8314u: goto label_2b8314;
        case 0x2b8318u: goto label_2b8318;
        case 0x2b831cu: goto label_2b831c;
        case 0x2b8320u: goto label_2b8320;
        case 0x2b8324u: goto label_2b8324;
        case 0x2b8328u: goto label_2b8328;
        case 0x2b832cu: goto label_2b832c;
        case 0x2b8330u: goto label_2b8330;
        case 0x2b8334u: goto label_2b8334;
        case 0x2b8338u: goto label_2b8338;
        case 0x2b833cu: goto label_2b833c;
        case 0x2b8340u: goto label_2b8340;
        case 0x2b8344u: goto label_2b8344;
        case 0x2b8348u: goto label_2b8348;
        case 0x2b834cu: goto label_2b834c;
        case 0x2b8350u: goto label_2b8350;
        case 0x2b8354u: goto label_2b8354;
        case 0x2b8358u: goto label_2b8358;
        case 0x2b835cu: goto label_2b835c;
        case 0x2b8360u: goto label_2b8360;
        case 0x2b8364u: goto label_2b8364;
        case 0x2b8368u: goto label_2b8368;
        case 0x2b836cu: goto label_2b836c;
        case 0x2b8370u: goto label_2b8370;
        case 0x2b8374u: goto label_2b8374;
        case 0x2b8378u: goto label_2b8378;
        case 0x2b837cu: goto label_2b837c;
        case 0x2b8380u: goto label_2b8380;
        case 0x2b8384u: goto label_2b8384;
        case 0x2b8388u: goto label_2b8388;
        case 0x2b838cu: goto label_2b838c;
        case 0x2b8390u: goto label_2b8390;
        case 0x2b8394u: goto label_2b8394;
        case 0x2b8398u: goto label_2b8398;
        case 0x2b839cu: goto label_2b839c;
        case 0x2b83a0u: goto label_2b83a0;
        case 0x2b83a4u: goto label_2b83a4;
        case 0x2b83a8u: goto label_2b83a8;
        case 0x2b83acu: goto label_2b83ac;
        case 0x2b83b0u: goto label_2b83b0;
        case 0x2b83b4u: goto label_2b83b4;
        case 0x2b83b8u: goto label_2b83b8;
        case 0x2b83bcu: goto label_2b83bc;
        case 0x2b83c0u: goto label_2b83c0;
        case 0x2b83c4u: goto label_2b83c4;
        case 0x2b83c8u: goto label_2b83c8;
        case 0x2b83ccu: goto label_2b83cc;
        case 0x2b83d0u: goto label_2b83d0;
        case 0x2b83d4u: goto label_2b83d4;
        case 0x2b83d8u: goto label_2b83d8;
        case 0x2b83dcu: goto label_2b83dc;
        case 0x2b83e0u: goto label_2b83e0;
        case 0x2b83e4u: goto label_2b83e4;
        case 0x2b83e8u: goto label_2b83e8;
        case 0x2b83ecu: goto label_2b83ec;
        case 0x2b83f0u: goto label_2b83f0;
        case 0x2b83f4u: goto label_2b83f4;
        case 0x2b83f8u: goto label_2b83f8;
        case 0x2b83fcu: goto label_2b83fc;
        case 0x2b8400u: goto label_2b8400;
        case 0x2b8404u: goto label_2b8404;
        case 0x2b8408u: goto label_2b8408;
        case 0x2b840cu: goto label_2b840c;
        case 0x2b8410u: goto label_2b8410;
        case 0x2b8414u: goto label_2b8414;
        case 0x2b8418u: goto label_2b8418;
        case 0x2b841cu: goto label_2b841c;
        case 0x2b8420u: goto label_2b8420;
        case 0x2b8424u: goto label_2b8424;
        case 0x2b8428u: goto label_2b8428;
        case 0x2b842cu: goto label_2b842c;
        case 0x2b8430u: goto label_2b8430;
        case 0x2b8434u: goto label_2b8434;
        case 0x2b8438u: goto label_2b8438;
        case 0x2b843cu: goto label_2b843c;
        case 0x2b8440u: goto label_2b8440;
        case 0x2b8444u: goto label_2b8444;
        case 0x2b8448u: goto label_2b8448;
        case 0x2b844cu: goto label_2b844c;
        case 0x2b8450u: goto label_2b8450;
        case 0x2b8454u: goto label_2b8454;
        case 0x2b8458u: goto label_2b8458;
        case 0x2b845cu: goto label_2b845c;
        case 0x2b8460u: goto label_2b8460;
        case 0x2b8464u: goto label_2b8464;
        case 0x2b8468u: goto label_2b8468;
        case 0x2b846cu: goto label_2b846c;
        case 0x2b8470u: goto label_2b8470;
        case 0x2b8474u: goto label_2b8474;
        case 0x2b8478u: goto label_2b8478;
        case 0x2b847cu: goto label_2b847c;
        case 0x2b8480u: goto label_2b8480;
        case 0x2b8484u: goto label_2b8484;
        case 0x2b8488u: goto label_2b8488;
        case 0x2b848cu: goto label_2b848c;
        case 0x2b8490u: goto label_2b8490;
        case 0x2b8494u: goto label_2b8494;
        case 0x2b8498u: goto label_2b8498;
        case 0x2b849cu: goto label_2b849c;
        case 0x2b84a0u: goto label_2b84a0;
        case 0x2b84a4u: goto label_2b84a4;
        case 0x2b84a8u: goto label_2b84a8;
        case 0x2b84acu: goto label_2b84ac;
        case 0x2b84b0u: goto label_2b84b0;
        case 0x2b84b4u: goto label_2b84b4;
        case 0x2b84b8u: goto label_2b84b8;
        case 0x2b84bcu: goto label_2b84bc;
        case 0x2b84c0u: goto label_2b84c0;
        case 0x2b84c4u: goto label_2b84c4;
        case 0x2b84c8u: goto label_2b84c8;
        case 0x2b84ccu: goto label_2b84cc;
        case 0x2b84d0u: goto label_2b84d0;
        case 0x2b84d4u: goto label_2b84d4;
        case 0x2b84d8u: goto label_2b84d8;
        case 0x2b84dcu: goto label_2b84dc;
        case 0x2b84e0u: goto label_2b84e0;
        case 0x2b84e4u: goto label_2b84e4;
        case 0x2b84e8u: goto label_2b84e8;
        case 0x2b84ecu: goto label_2b84ec;
        case 0x2b84f0u: goto label_2b84f0;
        case 0x2b84f4u: goto label_2b84f4;
        case 0x2b84f8u: goto label_2b84f8;
        case 0x2b84fcu: goto label_2b84fc;
        case 0x2b8500u: goto label_2b8500;
        case 0x2b8504u: goto label_2b8504;
        case 0x2b8508u: goto label_2b8508;
        case 0x2b850cu: goto label_2b850c;
        case 0x2b8510u: goto label_2b8510;
        case 0x2b8514u: goto label_2b8514;
        case 0x2b8518u: goto label_2b8518;
        case 0x2b851cu: goto label_2b851c;
        case 0x2b8520u: goto label_2b8520;
        case 0x2b8524u: goto label_2b8524;
        case 0x2b8528u: goto label_2b8528;
        case 0x2b852cu: goto label_2b852c;
        case 0x2b8530u: goto label_2b8530;
        case 0x2b8534u: goto label_2b8534;
        case 0x2b8538u: goto label_2b8538;
        case 0x2b853cu: goto label_2b853c;
        case 0x2b8540u: goto label_2b8540;
        case 0x2b8544u: goto label_2b8544;
        case 0x2b8548u: goto label_2b8548;
        case 0x2b854cu: goto label_2b854c;
        case 0x2b8550u: goto label_2b8550;
        case 0x2b8554u: goto label_2b8554;
        case 0x2b8558u: goto label_2b8558;
        case 0x2b855cu: goto label_2b855c;
        case 0x2b8560u: goto label_2b8560;
        case 0x2b8564u: goto label_2b8564;
        case 0x2b8568u: goto label_2b8568;
        case 0x2b856cu: goto label_2b856c;
        case 0x2b8570u: goto label_2b8570;
        case 0x2b8574u: goto label_2b8574;
        case 0x2b8578u: goto label_2b8578;
        case 0x2b857cu: goto label_2b857c;
        case 0x2b8580u: goto label_2b8580;
        case 0x2b8584u: goto label_2b8584;
        case 0x2b8588u: goto label_2b8588;
        case 0x2b858cu: goto label_2b858c;
        case 0x2b8590u: goto label_2b8590;
        case 0x2b8594u: goto label_2b8594;
        case 0x2b8598u: goto label_2b8598;
        case 0x2b859cu: goto label_2b859c;
        case 0x2b85a0u: goto label_2b85a0;
        case 0x2b85a4u: goto label_2b85a4;
        case 0x2b85a8u: goto label_2b85a8;
        case 0x2b85acu: goto label_2b85ac;
        case 0x2b85b0u: goto label_2b85b0;
        case 0x2b85b4u: goto label_2b85b4;
        case 0x2b85b8u: goto label_2b85b8;
        case 0x2b85bcu: goto label_2b85bc;
        case 0x2b85c0u: goto label_2b85c0;
        case 0x2b85c4u: goto label_2b85c4;
        case 0x2b85c8u: goto label_2b85c8;
        case 0x2b85ccu: goto label_2b85cc;
        case 0x2b85d0u: goto label_2b85d0;
        case 0x2b85d4u: goto label_2b85d4;
        case 0x2b85d8u: goto label_2b85d8;
        case 0x2b85dcu: goto label_2b85dc;
        case 0x2b85e0u: goto label_2b85e0;
        case 0x2b85e4u: goto label_2b85e4;
        case 0x2b85e8u: goto label_2b85e8;
        case 0x2b85ecu: goto label_2b85ec;
        case 0x2b85f0u: goto label_2b85f0;
        case 0x2b85f4u: goto label_2b85f4;
        case 0x2b85f8u: goto label_2b85f8;
        case 0x2b85fcu: goto label_2b85fc;
        case 0x2b8600u: goto label_2b8600;
        case 0x2b8604u: goto label_2b8604;
        case 0x2b8608u: goto label_2b8608;
        case 0x2b860cu: goto label_2b860c;
        case 0x2b8610u: goto label_2b8610;
        case 0x2b8614u: goto label_2b8614;
        case 0x2b8618u: goto label_2b8618;
        case 0x2b861cu: goto label_2b861c;
        case 0x2b8620u: goto label_2b8620;
        case 0x2b8624u: goto label_2b8624;
        case 0x2b8628u: goto label_2b8628;
        case 0x2b862cu: goto label_2b862c;
        case 0x2b8630u: goto label_2b8630;
        case 0x2b8634u: goto label_2b8634;
        case 0x2b8638u: goto label_2b8638;
        case 0x2b863cu: goto label_2b863c;
        case 0x2b8640u: goto label_2b8640;
        case 0x2b8644u: goto label_2b8644;
        case 0x2b8648u: goto label_2b8648;
        case 0x2b864cu: goto label_2b864c;
        case 0x2b8650u: goto label_2b8650;
        case 0x2b8654u: goto label_2b8654;
        case 0x2b8658u: goto label_2b8658;
        case 0x2b865cu: goto label_2b865c;
        case 0x2b8660u: goto label_2b8660;
        case 0x2b8664u: goto label_2b8664;
        case 0x2b8668u: goto label_2b8668;
        case 0x2b866cu: goto label_2b866c;
        case 0x2b8670u: goto label_2b8670;
        case 0x2b8674u: goto label_2b8674;
        case 0x2b8678u: goto label_2b8678;
        case 0x2b867cu: goto label_2b867c;
        case 0x2b8680u: goto label_2b8680;
        case 0x2b8684u: goto label_2b8684;
        case 0x2b8688u: goto label_2b8688;
        case 0x2b868cu: goto label_2b868c;
        case 0x2b8690u: goto label_2b8690;
        case 0x2b8694u: goto label_2b8694;
        case 0x2b8698u: goto label_2b8698;
        case 0x2b869cu: goto label_2b869c;
        case 0x2b86a0u: goto label_2b86a0;
        case 0x2b86a4u: goto label_2b86a4;
        case 0x2b86a8u: goto label_2b86a8;
        case 0x2b86acu: goto label_2b86ac;
        case 0x2b86b0u: goto label_2b86b0;
        case 0x2b86b4u: goto label_2b86b4;
        case 0x2b86b8u: goto label_2b86b8;
        case 0x2b86bcu: goto label_2b86bc;
        case 0x2b86c0u: goto label_2b86c0;
        case 0x2b86c4u: goto label_2b86c4;
        case 0x2b86c8u: goto label_2b86c8;
        case 0x2b86ccu: goto label_2b86cc;
        case 0x2b86d0u: goto label_2b86d0;
        case 0x2b86d4u: goto label_2b86d4;
        case 0x2b86d8u: goto label_2b86d8;
        case 0x2b86dcu: goto label_2b86dc;
        case 0x2b86e0u: goto label_2b86e0;
        case 0x2b86e4u: goto label_2b86e4;
        case 0x2b86e8u: goto label_2b86e8;
        case 0x2b86ecu: goto label_2b86ec;
        case 0x2b86f0u: goto label_2b86f0;
        case 0x2b86f4u: goto label_2b86f4;
        case 0x2b86f8u: goto label_2b86f8;
        case 0x2b86fcu: goto label_2b86fc;
        case 0x2b8700u: goto label_2b8700;
        case 0x2b8704u: goto label_2b8704;
        case 0x2b8708u: goto label_2b8708;
        case 0x2b870cu: goto label_2b870c;
        case 0x2b8710u: goto label_2b8710;
        case 0x2b8714u: goto label_2b8714;
        case 0x2b8718u: goto label_2b8718;
        case 0x2b871cu: goto label_2b871c;
        case 0x2b8720u: goto label_2b8720;
        case 0x2b8724u: goto label_2b8724;
        case 0x2b8728u: goto label_2b8728;
        case 0x2b872cu: goto label_2b872c;
        case 0x2b8730u: goto label_2b8730;
        case 0x2b8734u: goto label_2b8734;
        case 0x2b8738u: goto label_2b8738;
        case 0x2b873cu: goto label_2b873c;
        case 0x2b8740u: goto label_2b8740;
        case 0x2b8744u: goto label_2b8744;
        case 0x2b8748u: goto label_2b8748;
        case 0x2b874cu: goto label_2b874c;
        case 0x2b8750u: goto label_2b8750;
        case 0x2b8754u: goto label_2b8754;
        case 0x2b8758u: goto label_2b8758;
        case 0x2b875cu: goto label_2b875c;
        case 0x2b8760u: goto label_2b8760;
        case 0x2b8764u: goto label_2b8764;
        case 0x2b8768u: goto label_2b8768;
        case 0x2b876cu: goto label_2b876c;
        case 0x2b8770u: goto label_2b8770;
        case 0x2b8774u: goto label_2b8774;
        case 0x2b8778u: goto label_2b8778;
        case 0x2b877cu: goto label_2b877c;
        case 0x2b8780u: goto label_2b8780;
        case 0x2b8784u: goto label_2b8784;
        case 0x2b8788u: goto label_2b8788;
        case 0x2b878cu: goto label_2b878c;
        case 0x2b8790u: goto label_2b8790;
        case 0x2b8794u: goto label_2b8794;
        case 0x2b8798u: goto label_2b8798;
        case 0x2b879cu: goto label_2b879c;
        case 0x2b87a0u: goto label_2b87a0;
        case 0x2b87a4u: goto label_2b87a4;
        case 0x2b87a8u: goto label_2b87a8;
        case 0x2b87acu: goto label_2b87ac;
        case 0x2b87b0u: goto label_2b87b0;
        case 0x2b87b4u: goto label_2b87b4;
        case 0x2b87b8u: goto label_2b87b8;
        case 0x2b87bcu: goto label_2b87bc;
        case 0x2b87c0u: goto label_2b87c0;
        case 0x2b87c4u: goto label_2b87c4;
        case 0x2b87c8u: goto label_2b87c8;
        case 0x2b87ccu: goto label_2b87cc;
        case 0x2b87d0u: goto label_2b87d0;
        case 0x2b87d4u: goto label_2b87d4;
        case 0x2b87d8u: goto label_2b87d8;
        case 0x2b87dcu: goto label_2b87dc;
        case 0x2b87e0u: goto label_2b87e0;
        case 0x2b87e4u: goto label_2b87e4;
        case 0x2b87e8u: goto label_2b87e8;
        case 0x2b87ecu: goto label_2b87ec;
        case 0x2b87f0u: goto label_2b87f0;
        case 0x2b87f4u: goto label_2b87f4;
        case 0x2b87f8u: goto label_2b87f8;
        case 0x2b87fcu: goto label_2b87fc;
        case 0x2b8800u: goto label_2b8800;
        case 0x2b8804u: goto label_2b8804;
        case 0x2b8808u: goto label_2b8808;
        case 0x2b880cu: goto label_2b880c;
        case 0x2b8810u: goto label_2b8810;
        case 0x2b8814u: goto label_2b8814;
        case 0x2b8818u: goto label_2b8818;
        case 0x2b881cu: goto label_2b881c;
        case 0x2b8820u: goto label_2b8820;
        case 0x2b8824u: goto label_2b8824;
        case 0x2b8828u: goto label_2b8828;
        case 0x2b882cu: goto label_2b882c;
        case 0x2b8830u: goto label_2b8830;
        case 0x2b8834u: goto label_2b8834;
        case 0x2b8838u: goto label_2b8838;
        case 0x2b883cu: goto label_2b883c;
        case 0x2b8840u: goto label_2b8840;
        case 0x2b8844u: goto label_2b8844;
        case 0x2b8848u: goto label_2b8848;
        case 0x2b884cu: goto label_2b884c;
        case 0x2b8850u: goto label_2b8850;
        case 0x2b8854u: goto label_2b8854;
        case 0x2b8858u: goto label_2b8858;
        case 0x2b885cu: goto label_2b885c;
        case 0x2b8860u: goto label_2b8860;
        case 0x2b8864u: goto label_2b8864;
        case 0x2b8868u: goto label_2b8868;
        case 0x2b886cu: goto label_2b886c;
        case 0x2b8870u: goto label_2b8870;
        case 0x2b8874u: goto label_2b8874;
        case 0x2b8878u: goto label_2b8878;
        case 0x2b887cu: goto label_2b887c;
        case 0x2b8880u: goto label_2b8880;
        case 0x2b8884u: goto label_2b8884;
        case 0x2b8888u: goto label_2b8888;
        case 0x2b888cu: goto label_2b888c;
        case 0x2b8890u: goto label_2b8890;
        case 0x2b8894u: goto label_2b8894;
        case 0x2b8898u: goto label_2b8898;
        case 0x2b889cu: goto label_2b889c;
        case 0x2b88a0u: goto label_2b88a0;
        case 0x2b88a4u: goto label_2b88a4;
        case 0x2b88a8u: goto label_2b88a8;
        case 0x2b88acu: goto label_2b88ac;
        default: return;
    }

label_2b80e0:
    // 0x2b80e0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b80e0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b80e4:
    // 0x2b80e4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b80e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b80e8:
    // 0x2b80e8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b80e8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b80ec:
    // 0x2b80ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b80ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b80f0:
    // 0x2b80f0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b80f0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b80f4:
    // 0x2b80f4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b80f4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b80f8:
    // 0x2b80f8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b80f8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b80fc:
    // 0x2b80fc: 0x1f309bc  .word       0x01F309BC                   # dsll32      $at, $s3, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b80fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 19) << (32 + 6));
label_2b8100:
    // 0x2b8100: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8100u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8104:
    // 0x2b8104: 0x1f310bd  .word       0x01F310BD                   # INVALID     $t7, $s3, 0x10BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b8104u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B8104 raw=0x01F310BD");
 /* MITIGATED */
label_2b8108:
    // 0x2b8108: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8108u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b810c:
    // 0x2b810c: 0x1f318be  .word       0x01F318BE                   # dsrl32      $v1, $s3, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b810cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) >> (32 + 2));
label_2b8110:
    // 0x2b8110: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8110u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8114:
    // 0x2b8114: 0x1e0270b  .word       0x01E0270B                   # movn        $a0, $t7, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b8114u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 15));
label_2b8118:
    // 0x2b8118: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8118u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b811c:
    // 0x2b811c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b811cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8120:
    // 0x2b8120: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8120u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8124:
    // 0x2b8124: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8124u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8128:
    // 0x2b8128: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8128u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b812c:
    // 0x2b812c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b812cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8130:
    // 0x2b8130: 0x81fc03bc  lb          $gp, 0x3BC($t7)
    ctx->pc = 0x2b8130u;
    SET_GPR_S32(ctx, 28, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 956)));
label_2b8134:
    // 0x2b8134: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8134u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8138:
    // 0x2b8138: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8138u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b813c:
    // 0x2b813c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b813cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8140:
    // 0x2b8140: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8140u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8144:
    // 0x2b8144: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8144u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8148:
    // 0x2b8148: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8148u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b814c:
    // 0x2b814c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b814cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8150:
    // 0x2b8150: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8150u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8154:
    // 0x2b8154: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8154u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8158:
    // 0x2b8158: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8158u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b815c:
    // 0x2b815c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b815cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8160:
    // 0x2b8160: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8160u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8164:
    // 0x2b8164: 0x3e01be  .word       0x003E01BE                   # dsrl32      $zero, $fp, 6 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b8164u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 30) >> (32 + 6));
label_2b8168:
    // 0x2b8168: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8168u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b816c:
    // 0x2b816c: 0x20f721  .word       0x0020F721                   # addu        $fp, $at, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b816cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 0)));
label_2b8170:
    // 0x2b8170: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8170u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8174:
    // 0x2b8174: 0x1c0e7dc  .word       0x01C0E7DC                   # dmult       $t6, $zero # 0000E7C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b8174u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2B8174 raw=0x01C0E7DC");
 /* MITIGATED */
label_2b8178:
    // 0x2b8178: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8178u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b817c:
    // 0x2b817c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b817cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8180:
    // 0x2b8180: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8180u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8184:
    // 0x2b8184: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8184u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8188:
    // 0x2b8188: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8188u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b818c:
    // 0x2b818c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b818cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8190:
    // 0x2b8190: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8190u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8194:
    // 0x2b8194: 0x20e7df  .word       0x0020E7DF                   # ddivu       $gp, $at, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b8194u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2B8194 raw=0x0020E7DF");
 /* MITIGATED */
label_2b8198:
    // 0x2b8198: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8198u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b819c:
    // 0x2b819c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b819cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b81a0:
    // 0x2b81a0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b81a0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b81a4:
    // 0x2b81a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b81a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b81a8:
    // 0x2b81a8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b81a8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b81ac:
    // 0x2b81ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b81acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b81b0:
    // 0x2b81b0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b81b0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b81b4:
    // 0x2b81b4: 0x20ffd0  .word       0x0020FFD0                   # mfhi        $ra # 002007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b81b4u;
    SET_GPR_U64(ctx, 31, ctx->hi);
label_2b81b8:
    // 0x2b81b8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b81b8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b81bc:
    // 0x2b81bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b81bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b81c0:
    // 0x2b81c0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b81c0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b81c4:
    // 0x2b81c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b81c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b81c8:
    // 0x2b81c8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b81c8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b81cc:
    // 0x2b81cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b81ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b81d0:
    // 0x2b81d0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b81d0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b81d4:
    // 0x2b81d4: 0x1faf97d  .word       0x01FAF97D                   # INVALID     $t7, $k0, -0x683 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b81d4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B81D4 raw=0x01FAF97D");
 /* MITIGATED */
label_2b81d8:
    // 0x2b81d8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b81d8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b81dc:
    // 0x2b81dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b81dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b81e0:
    // 0x2b81e0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b81e0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b81e4:
    // 0x2b81e4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b81e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b81e8:
    // 0x2b81e8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b81e8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b81ec:
    // 0x2b81ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b81ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b81f0:
    // 0x2b81f0: 0x3e7d002  .word       0x03E7D002                   # srl         $k0, $a3, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b81f0u;
    SET_GPR_S32(ctx, 26, (int32_t)SRL32(GPR_U32(ctx, 7), 0));
label_2b81f4:
    // 0x2b81f4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b81f4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b81f8:
    // 0x2b81f8: 0x8035f33d  lb          $s5, -0xCC3($at)
    ctx->pc = 0x2b81f8u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294964029)));
label_2b81fc:
    // 0x2b81fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b81fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8200:
    // 0x2b8200: 0x81d52b7c  lb          $s5, 0x2B7C($t6)
    ctx->pc = 0x2b8200u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 14), 11132)));
label_2b8204:
    // 0x2b8204: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8204u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8208:
    // 0x2b8208: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8208u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b820c:
    // 0x2b820c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b820cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8210:
    // 0x2b8210: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8210u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8214:
    // 0x2b8214: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8214u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8218:
    // 0x2b8218: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8218u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b821c:
    // 0x2b821c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b821cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8220:
    // 0x2b8220: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8220u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8224:
    // 0x2b8224: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8224u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8228:
    // 0x2b8228: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8228u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b822c:
    // 0x2b822c: 0x1cbad6a  .word       0x01CBAD6A                   # slt         $s5, $t6, $t3 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b822cu;
    SET_GPR_U64(ctx, 21, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
label_2b8230:
    // 0x2b8230: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8230u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8234:
    // 0x2b8234: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8234u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8238:
    // 0x2b8238: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8238u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b823c:
    // 0x2b823c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b823cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8240:
    // 0x2b8240: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8240u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8244:
    // 0x2b8244: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8244u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8248:
    // 0x2b8248: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8248u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b824c:
    // 0x2b824c: 0x1e0ad5f  .word       0x01E0AD5F                   # ddivu       $s5, $t7, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b824cu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2B824C raw=0x01E0AD5F");
 /* MITIGATED */
label_2b8250:
    // 0x2b8250: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8250u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8254:
    // 0x2b8254: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8254u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8258:
    // 0x2b8258: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8258u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b825c:
    // 0x2b825c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b825cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8260:
    // 0x2b8260: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8260u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8264:
    // 0x2b8264: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8264u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8268:
    // 0x2b8268: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8268u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b826c:
    // 0x2b826c: 0x1f5a97c  .word       0x01F5A97C                   # dsll32      $s5, $s5, 5 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b826cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) << (32 + 5));
label_2b8270:
    // 0x2b8270: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8270u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8274:
    // 0x2b8274: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8274u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8278:
    // 0x2b8278: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8278u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b827c:
    // 0x2b827c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b827cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8280:
    // 0x2b8280: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8280u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8284:
    // 0x2b8284: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8284u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8288:
    // 0x2b8288: 0x3e7a801  .word       0x03E7A801                   # INVALID     $ra, $a3, -0x57FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b8288u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2B8288 raw=0x03E7A801");
 /* MITIGATED */
label_2b828c:
    // 0x2b828c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b828cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8290:
    // 0x2b8290: 0x8054033d  lb          $s4, 0x33D($v0)
    ctx->pc = 0x2b8290u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 829)));
label_2b8294:
    // 0x2b8294: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8294u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8298:
    // 0x2b8298: 0x8194337c  lb          $s4, 0x337C($t4)
    ctx->pc = 0x2b8298u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 12), 13180)));
label_2b829c:
    // 0x2b829c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b829cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b82a0:
    // 0x2b82a0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b82a0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b82a4:
    // 0x2b82a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b82a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b82a8:
    // 0x2b82a8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b82a8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b82ac:
    // 0x2b82ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b82acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b82b0:
    // 0x2b82b0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b82b0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b82b4:
    // 0x2b82b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b82b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b82b8:
    // 0x2b82b8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b82b8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b82bc:
    // 0x2b82bc: 0x1c0a51c  .word       0x01C0A51C                   # dmult       $t6, $zero # 0000A500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b82bcu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2B82BC raw=0x01C0A51C");
 /* MITIGATED */
label_2b82c0:
    // 0x2b82c0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b82c0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b82c4:
    // 0x2b82c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b82c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b82c8:
    // 0x2b82c8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b82c8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b82cc:
    // 0x2b82cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b82ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b82d0:
    // 0x2b82d0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b82d0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b82d4:
    // 0x2b82d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b82d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b82d8:
    // 0x2b82d8: 0x3e7a000  .word       0x03E7A000                   # sll         $s4, $a3, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b82d8u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 7), 0));
label_2b82dc:
    // 0x2b82dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b82dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b82e0:
    // 0x2b82e0: 0x81f08b3c  lb          $s0, -0x74C4($t7)
    ctx->pc = 0x2b82e0u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294937404)));
label_2b82e4:
    // 0x2b82e4: 0x1f361bc  .word       0x01F361BC                   # dsll32      $t4, $s3, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b82e4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 19) << (32 + 6));
label_2b82e8:
    // 0x2b82e8: 0x81f1933c  lb          $s1, -0x6CC4($t7)
    ctx->pc = 0x2b82e8u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294939452)));
label_2b82ec:
    // 0x2b82ec: 0x1f368bd  .word       0x01F368BD                   # INVALID     $t7, $s3, 0x68BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b82ecu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B82EC raw=0x01F368BD");
 /* MITIGATED */
label_2b82f0:
    // 0x2b82f0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b82f0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b82f4:
    // 0x2b82f4: 0x1f370be  .word       0x01F370BE                   # dsrl32      $t6, $s3, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b82f4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 19) >> (32 + 2));
label_2b82f8:
    // 0x2b82f8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b82f8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b82fc:
    // 0x2b82fc: 0x1e07c8b  .word       0x01E07C8B                   # movn        $t7, $t7, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b82fcu;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 15, GPR_VEC(ctx, 15));
label_2b8300:
    // 0x2b8300: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8300u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8304:
    // 0x2b8304: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8304u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8308:
    // 0x2b8308: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8308u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b830c:
    // 0x2b830c: 0x1d081ff  .word       0x01D081FF                   # dsra32      $s0, $s0, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b830cu;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 7));
label_2b8310:
    // 0x2b8310: 0x800a0270  lb          $t2, 0x270($zero)
    ctx->pc = 0x2b8310u;
    SET_GPR_S32(ctx, 10, (int8_t)FAST_READ8(0x270u));
label_2b8314:
    // 0x2b8314: 0x1d189ff  .word       0x01D189FF                   # dsra32      $s1, $s1, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b8314u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 7));
label_2b8318:
    // 0x2b8318: 0x800b02b0  lb          $t3, 0x2B0($zero)
    ctx->pc = 0x2b8318u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x2B0u));
label_2b831c:
    // 0x2b831c: 0x1d291ff  .word       0x01D291FF                   # dsra32      $s2, $s2, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b831cu;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 7));
label_2b8320:
    // 0x2b8320: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8320u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8324:
    // 0x2b8324: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8324u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8328:
    // 0x2b8328: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8328u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b832c:
    // 0x2b832c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b832cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8330:
    // 0x2b8330: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8330u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8334:
    // 0x2b8334: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8334u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8338:
    // 0x2b8338: 0x2400003f  addiu       $zero, $zero, 0x3F
    ctx->pc = 0x2b8338u;
    // NOP (addiu $zero, ...)
label_2b833c:
    // 0x2b833c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b833cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8340:
    // 0x2b8340: 0x800102f0  lb          $at, 0x2F0($zero)
    ctx->pc = 0x2b8340u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x2F0u));
label_2b8344:
    // 0x2b8344: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8344u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8348:
    // 0x2b8348: 0x800d6ff2  lb          $t5, 0x6FF2($zero)
    ctx->pc = 0x2b8348u;
    SET_GPR_S32(ctx, 13, (int8_t)FAST_READ8(0x6FF2u));
label_2b834c:
    // 0x2b834c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b834cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8350:
    // 0x2b8350: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8350u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8354:
    // 0x2b8354: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8354u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8358:
    // 0x2b8358: 0x5a006806  blezl       $s0, . + 4 + (0x6806 << 2)
label_2b835c:
    if (ctx->pc == 0x2B835Cu) {
        ctx->pc = 0x2B835Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8358u;
        // 0x2b835c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8360u;
        goto label_2b8360;
    }
    ctx->pc = 0x2B8358u;
    {
        const bool branch_taken_0x2b8358 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x2b8358) {
            ctx->pc = 0x2B835Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B8358u;
            // 0x2b835c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D2374u;
            return;
        }
    }
    ctx->pc = 0x2B8360u;
label_2b8360:
    // 0x2b8360: 0x10073803  beq         $zero, $a3, . + 4 + (0x3803 << 2)
label_2b8364:
    if (ctx->pc == 0x2B8364u) {
        ctx->pc = 0x2B8364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8360u;
        // 0x2b8364: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8368u;
        goto label_2b8368;
    }
    ctx->pc = 0x2B8360u;
    {
        const bool branch_taken_0x2b8360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2B8364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8360u;
        // 0x2b8364: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8360) {
            ctx->pc = 0x2C6370u;
            { ctx->pc = 0x2c6370; return; }
        }
    }
    ctx->pc = 0x2B8368u;
label_2b8368:
    // 0x2b8368: 0x800a4a70  lb          $t2, 0x4A70($zero)
    ctx->pc = 0x2b8368u;
    SET_GPR_S32(ctx, 10, (int8_t)FAST_READ8(0x4A70u));
label_2b836c:
    // 0x2b836c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b836cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8370:
    // 0x2b8370: 0x800b4a70  lb          $t3, 0x4A70($zero)
    ctx->pc = 0x2b8370u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x4A70u));
label_2b8374:
    // 0x2b8374: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8374u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8378:
    // 0x2b8378: 0x802df3fc  lb          $t5, -0xC04($at)
    ctx->pc = 0x2b8378u;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294964220)));
label_2b837c:
    // 0x2b837c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b837cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8380:
    // 0x2b8380: 0x5a004815  blezl       $s0, . + 4 + (0x4815 << 2)
label_2b8384:
    if (ctx->pc == 0x2B8384u) {
        ctx->pc = 0x2B8384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8380u;
        // 0x2b8384: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8388u;
        goto label_2b8388;
    }
    ctx->pc = 0x2B8380u;
    {
        const bool branch_taken_0x2b8380 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x2b8380) {
            ctx->pc = 0x2B8384u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B8380u;
            // 0x2b8384: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CA3D8u;
            { ctx->pc = 0x2ca3d8; return; }
        }
    }
    ctx->pc = 0x2B8388u;
label_2b8388:
    // 0x2b8388: 0x8062d3fc  lb          $v0, -0x2C04($v1)
    ctx->pc = 0x2b8388u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294956028)));
label_2b838c:
    // 0x2b838c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b838cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8390:
    // 0x2b8390: 0x800c67f2  lb          $t4, 0x67F2($zero)
    ctx->pc = 0x2b8390u;
    SET_GPR_S32(ctx, 12, (int8_t)FAST_READ8(0x67F2u));
label_2b8394:
    // 0x2b8394: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8394u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8398:
    // 0x2b8398: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8398u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b839c:
    // 0x2b839c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b839cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b83a0:
    // 0x2b83a0: 0x520c07a6  beql        $s0, $t4, . + 4 + (0x7A6 << 2)
label_2b83a4:
    if (ctx->pc == 0x2B83A4u) {
        ctx->pc = 0x2B83A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B83A0u;
        // 0x2b83a4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B83A8u;
        goto label_2b83a8;
    }
    ctx->pc = 0x2B83A0u;
    {
        const bool branch_taken_0x2b83a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 12));
        if (branch_taken_0x2b83a0) {
            ctx->pc = 0x2B83A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B83A0u;
            // 0x2b83a4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BA23Cu;
            { ctx->pc = 0x2ba23c; return; }
        }
    }
    ctx->pc = 0x2B83A8u;
label_2b83a8:
    // 0x2b83a8: 0x800206bc  lb          $v0, 0x6BC($zero)
    ctx->pc = 0x2b83a8u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x6BCu));
label_2b83ac:
    // 0x2b83ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b83acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b83b0:
    // 0x2b83b0: 0x9041005  j           func_4104014
label_2b83b4:
    if (ctx->pc == 0x2B83B4u) {
        ctx->pc = 0x2B83B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B83B0u;
        // 0x2b83b4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B83B8u;
        goto label_2b83b8;
    }
    ctx->pc = 0x2B83B0u;
    ctx->pc = 0x2B83B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B83B0u;
    // 0x2b83b4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4104014u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4104014u, 0x2B83B0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B83B8u;
label_2b83b8:
    // 0x2b83b8: 0x88e1005  j           func_2384014
label_2b83bc:
    if (ctx->pc == 0x2B83BCu) {
        ctx->pc = 0x2B83BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B83B8u;
        // 0x2b83bc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B83C0u;
        goto label_2b83c0;
    }
    ctx->pc = 0x2B83B8u;
    ctx->pc = 0x2B83BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B83B8u;
    // 0x2b83bc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2384014u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2384014u, 0x2B83B8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B83C0u;
label_2b83c0:
    // 0x2b83c0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b83c0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b83c4:
    // 0x2b83c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b83c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b83c8:
    // 0x2b83c8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b83c8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b83cc:
    // 0x2b83cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b83ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b83d0:
    // 0x2b83d0: 0x12042001  beq         $s0, $a0, . + 4 + (0x2001 << 2)
label_2b83d4:
    if (ctx->pc == 0x2B83D4u) {
        ctx->pc = 0x2B83D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B83D0u;
        // 0x2b83d4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B83D8u;
        goto label_2b83d8;
    }
    ctx->pc = 0x2B83D0u;
    {
        const bool branch_taken_0x2b83d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 4));
        ctx->pc = 0x2B83D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B83D0u;
        // 0x2b83d4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b83d0) {
            ctx->pc = 0x2C03D8u;
            { ctx->pc = 0x2c03d8; return; }
        }
    }
    ctx->pc = 0x2B83D8u;
label_2b83d8:
    // 0x2b83d8: 0xb041005  j           func_C104014
label_2b83dc:
    if (ctx->pc == 0x2B83DCu) {
        ctx->pc = 0x2B83DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B83D8u;
        // 0x2b83dc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B83E0u;
        goto label_2b83e0;
    }
    ctx->pc = 0x2B83D8u;
    ctx->pc = 0x2B83DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B83D8u;
    // 0x2b83dc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xC104014u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC104014u, 0x2B83D8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B83E0u;
label_2b83e0:
    // 0x2b83e0: 0x5a00278a  blezl       $s0, . + 4 + (0x278A << 2)
label_2b83e4:
    if (ctx->pc == 0x2B83E4u) {
        ctx->pc = 0x2B83E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B83E0u;
        // 0x2b83e4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B83E8u;
        goto label_2b83e8;
    }
    ctx->pc = 0x2B83E0u;
    {
        const bool branch_taken_0x2b83e0 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x2b83e0) {
            ctx->pc = 0x2B83E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B83E0u;
            // 0x2b83e4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C220Cu;
            { ctx->pc = 0x2c220c; return; }
        }
    }
    ctx->pc = 0x2B83E8u;
label_2b83e8:
    // 0x2b83e8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b83e8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b83ec:
    // 0x2b83ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b83ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b83f0:
    // 0x2b83f0: 0x500e0003  beql        $zero, $t6, . + 4 + (0x3 << 2)
label_2b83f4:
    if (ctx->pc == 0x2B83F4u) {
        ctx->pc = 0x2B83F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B83F0u;
        // 0x2b83f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B83F8u;
        goto label_2b83f8;
    }
    ctx->pc = 0x2B83F0u;
    {
        const bool branch_taken_0x2b83f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 14));
        if (branch_taken_0x2b83f0) {
            ctx->pc = 0x2B83F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B83F0u;
            // 0x2b83f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B8400u;
            goto label_2b8400;
        }
    }
    ctx->pc = 0x2B83F8u;
label_2b83f8:
    // 0x2b83f8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b83f8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b83fc:
    // 0x2b83fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b83fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8400:
    // 0x2b8400: 0x400001cd  .word       0x400001CD                   # mfc0        $zero, Index # 000001CD <InstrIdType: R5900_COP0>
    ctx->pc = 0x2b8400u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2b8404:
    // 0x2b8404: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8404u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8408:
    // 0x2b8408: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8408u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b840c:
    // 0x2b840c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b840cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8410:
    // 0x2b8410: 0x100210ca  beq         $zero, $v0, . + 4 + (0x10CA << 2)
label_2b8414:
    if (ctx->pc == 0x2B8414u) {
        ctx->pc = 0x2B8414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8410u;
        // 0x2b8414: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8418u;
        goto label_2b8418;
    }
    ctx->pc = 0x2B8410u;
    {
        const bool branch_taken_0x2b8410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B8414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8410u;
        // 0x2b8414: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8410) {
            ctx->pc = 0x2BC73Cu;
            { ctx->pc = 0x2bc73c; return; }
        }
    }
    ctx->pc = 0x2B8418u;
label_2b8418:
    // 0x2b8418: 0x800016fc  lb          $zero, 0x16FC($zero)
    ctx->pc = 0x2b8418u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x16FCu));
label_2b841c:
    // 0x2b841c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b841cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8420:
    // 0x2b8420: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8420u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8424:
    // 0x2b8424: 0x400002ff  .word       0x400002FF                   # mfc0        $zero, Index # 000002FF <InstrIdType: R5900_COP0>
    ctx->pc = 0x2b8424u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2b8428:
    // 0x2b8428: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8428u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b842c:
    // 0x2b842c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b842cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8430:
    // 0x2b8430: 0x800106bc  lb          $at, 0x6BC($zero)
    ctx->pc = 0x2b8430u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x6BCu));
label_2b8434:
    // 0x2b8434: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8434u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8438:
    // 0x2b8438: 0x88e0805  j           func_2382014
label_2b843c:
    if (ctx->pc == 0x2B843Cu) {
        ctx->pc = 0x2B843Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8438u;
        // 0x2b843c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8440u;
        goto label_2b8440;
    }
    ctx->pc = 0x2B8438u;
    ctx->pc = 0x2B843Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8438u;
    // 0x2b843c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2382014u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2382014u, 0x2B8438u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B8440u;
label_2b8440:
    // 0x2b8440: 0x24010410  addiu       $at, $zero, 0x410
    ctx->pc = 0x2b8440u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 0), 1040));
label_2b8444:
    // 0x2b8444: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8444u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8448:
    // 0x2b8448: 0x52010036  beql        $s0, $at, . + 4 + (0x36 << 2)
label_2b844c:
    if (ctx->pc == 0x2B844Cu) {
        ctx->pc = 0x2B844Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8448u;
        // 0x2b844c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8450u;
        goto label_2b8450;
    }
    ctx->pc = 0x2B8448u;
    {
        const bool branch_taken_0x2b8448 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        if (branch_taken_0x2b8448) {
            ctx->pc = 0x2B844Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B8448u;
            // 0x2b844c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B8524u;
            goto label_2b8524;
        }
    }
    ctx->pc = 0x2B8450u;
label_2b8450:
    // 0x2b8450: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8450u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8454:
    // 0x2b8454: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8454u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8458:
    // 0x2b8458: 0x26fdf7df  addiu       $sp, $s7, -0x821
    ctx->pc = 0x2b8458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 23), 4294965215));
label_2b845c:
    // 0x2b845c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b845cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8460:
    // 0x2b8460: 0x52010033  beql        $s0, $at, . + 4 + (0x33 << 2)
label_2b8464:
    if (ctx->pc == 0x2B8464u) {
        ctx->pc = 0x2B8464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8460u;
        // 0x2b8464: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8468u;
        goto label_2b8468;
    }
    ctx->pc = 0x2B8460u;
    {
        const bool branch_taken_0x2b8460 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        if (branch_taken_0x2b8460) {
            ctx->pc = 0x2B8464u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B8460u;
            // 0x2b8464: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B8530u;
            goto label_2b8530;
        }
    }
    ctx->pc = 0x2B8468u;
label_2b8468:
    // 0x2b8468: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8468u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b846c:
    // 0x2b846c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b846cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8470:
    // 0x2b8470: 0x26ff7df7  addiu       $ra, $s7, 0x7DF7
    ctx->pc = 0x2b8470u;
    SET_GPR_S32(ctx, 31, (int32_t)ADD32(GPR_U32(ctx, 23), 32247));
label_2b8474:
    // 0x2b8474: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8474u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8478:
    // 0x2b8478: 0x52010030  beql        $s0, $at, . + 4 + (0x30 << 2)
label_2b847c:
    if (ctx->pc == 0x2B847Cu) {
        ctx->pc = 0x2B847Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8478u;
        // 0x2b847c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8480u;
        goto label_2b8480;
    }
    ctx->pc = 0x2B8478u;
    {
        const bool branch_taken_0x2b8478 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        if (branch_taken_0x2b8478) {
            ctx->pc = 0x2B847Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B8478u;
            // 0x2b847c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B853Cu;
            goto label_2b853c;
        }
    }
    ctx->pc = 0x2B8480u;
label_2b8480:
    // 0x2b8480: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8480u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8484:
    // 0x2b8484: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8484u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8488:
    // 0x2b8488: 0x26ffbefb  addiu       $ra, $s7, -0x4105
    ctx->pc = 0x2b8488u;
    SET_GPR_S32(ctx, 31, (int32_t)ADD32(GPR_U32(ctx, 23), 4294950651));
label_2b848c:
    // 0x2b848c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b848cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8490:
    // 0x2b8490: 0x5201002d  beql        $s0, $at, . + 4 + (0x2D << 2)
label_2b8494:
    if (ctx->pc == 0x2B8494u) {
        ctx->pc = 0x2B8494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8490u;
        // 0x2b8494: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8498u;
        goto label_2b8498;
    }
    ctx->pc = 0x2B8490u;
    {
        const bool branch_taken_0x2b8490 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        if (branch_taken_0x2b8490) {
            ctx->pc = 0x2B8494u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B8490u;
            // 0x2b8494: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B8548u;
            goto label_2b8548;
        }
    }
    ctx->pc = 0x2B8498u;
label_2b8498:
    // 0x2b8498: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8498u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b849c:
    // 0x2b849c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b849cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b84a0:
    // 0x2b84a0: 0x26ffdf7d  addiu       $ra, $s7, -0x2083
    ctx->pc = 0x2b84a0u;
    SET_GPR_S32(ctx, 31, (int32_t)ADD32(GPR_U32(ctx, 23), 4294958973));
label_2b84a4:
    // 0x2b84a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b84a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b84a8:
    // 0x2b84a8: 0x5201002a  beql        $s0, $at, . + 4 + (0x2A << 2)
label_2b84ac:
    if (ctx->pc == 0x2B84ACu) {
        ctx->pc = 0x2B84ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B84A8u;
        // 0x2b84ac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B84B0u;
        goto label_2b84b0;
    }
    ctx->pc = 0x2B84A8u;
    {
        const bool branch_taken_0x2b84a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        if (branch_taken_0x2b84a8) {
            ctx->pc = 0x2B84ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B84A8u;
            // 0x2b84ac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B8554u;
            goto label_2b8554;
        }
    }
    ctx->pc = 0x2B84B0u;
label_2b84b0:
    // 0x2b84b0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b84b0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b84b4:
    // 0x2b84b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b84b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b84b8:
    // 0x2b84b8: 0x26ffefbe  addiu       $ra, $s7, -0x1042
    ctx->pc = 0x2b84b8u;
    SET_GPR_S32(ctx, 31, (int32_t)ADD32(GPR_U32(ctx, 23), 4294963134));
label_2b84bc:
    // 0x2b84bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b84bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b84c0:
    // 0x2b84c0: 0x52010027  beql        $s0, $at, . + 4 + (0x27 << 2)
label_2b84c4:
    if (ctx->pc == 0x2B84C4u) {
        ctx->pc = 0x2B84C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B84C0u;
        // 0x2b84c4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B84C8u;
        goto label_2b84c8;
    }
    ctx->pc = 0x2B84C0u;
    {
        const bool branch_taken_0x2b84c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        if (branch_taken_0x2b84c0) {
            ctx->pc = 0x2B84C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B84C0u;
            // 0x2b84c4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B8560u;
            goto label_2b8560;
        }
    }
    ctx->pc = 0x2B84C8u;
label_2b84c8:
    // 0x2b84c8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b84c8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b84cc:
    // 0x2b84cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b84ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b84d0:
    // 0x2b84d0: 0x120f704b  beq         $s0, $t7, . + 4 + (0x704B << 2)
label_2b84d4:
    if (ctx->pc == 0x2B84D4u) {
        ctx->pc = 0x2B84D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B84D0u;
        // 0x2b84d4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B84D8u;
        goto label_2b84d8;
    }
    ctx->pc = 0x2B84D0u;
    {
        const bool branch_taken_0x2b84d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        ctx->pc = 0x2B84D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B84D0u;
        // 0x2b84d4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b84d0) {
            ctx->pc = 0x2D4600u;
            return;
        }
    }
    ctx->pc = 0x2B84D8u;
label_2b84d8:
    // 0x2b84d8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b84d8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b84dc:
    // 0x2b84dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b84dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b84e0:
    // 0x2b84e0: 0x5a00781c  blezl       $s0, . + 4 + (0x781C << 2)
label_2b84e4:
    if (ctx->pc == 0x2B84E4u) {
        ctx->pc = 0x2B84E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B84E0u;
        // 0x2b84e4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B84E8u;
        goto label_2b84e8;
    }
    ctx->pc = 0x2B84E0u;
    {
        const bool branch_taken_0x2b84e0 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x2b84e0) {
            ctx->pc = 0x2B84E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B84E0u;
            // 0x2b84e4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D6554u;
            return;
        }
    }
    ctx->pc = 0x2B84E8u;
label_2b84e8:
    // 0x2b84e8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b84e8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b84ec:
    // 0x2b84ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b84ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b84f0:
    // 0x2b84f0: 0x100f7012  beq         $zero, $t7, . + 4 + (0x7012 << 2)
label_2b84f4:
    if (ctx->pc == 0x2B84F4u) {
        ctx->pc = 0x2B84F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B84F0u;
        // 0x2b84f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B84F8u;
        goto label_2b84f8;
    }
    ctx->pc = 0x2B84F0u;
    {
        const bool branch_taken_0x2b84f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 15));
        ctx->pc = 0x2B84F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B84F0u;
        // 0x2b84f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b84f0) {
            ctx->pc = 0x2D453Cu;
            return;
        }
    }
    ctx->pc = 0x2B84F8u;
label_2b84f8:
    // 0x2b84f8: 0x1f637fd  .word       0x01F637FD                   # INVALID     $t7, $s6, 0x37FD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b84f8u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B84F8 raw=0x01F637FD");
 /* MITIGATED */
label_2b84fc:
    // 0x2b84fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b84fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8500:
    // 0x2b8500: 0x1f737fe  .word       0x01F737FE                   # dsrl32      $a2, $s7, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b8500u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 23) >> (32 + 31));
label_2b8504:
    // 0x2b8504: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8504u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8508:
    // 0x2b8508: 0x1f837ff  .word       0x01F837FF                   # dsra32      $a2, $t8, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b8508u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 24) >> (32 + 31));
label_2b850c:
    // 0x2b850c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b850cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8510:
    // 0x2b8510: 0x1f93ff8  .word       0x01F93FF8                   # dsll        $a3, $t9, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b8510u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 25) << 31);
label_2b8514:
    // 0x2b8514: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8514u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8518:
    // 0x2b8518: 0x1fb3ffb  .word       0x01FB3FFB                   # dsra        $a3, $k1, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b8518u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 27) >> 31);
label_2b851c:
    // 0x2b851c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b851cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8520:
    // 0x2b8520: 0x1fc3ffe  .word       0x01FC3FFE                   # dsrl32      $a3, $gp, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b8520u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 28) >> (32 + 31));
label_2b8524:
    // 0x2b8524: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8524u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8528:
    // 0x2b8528: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8528u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b852c:
    // 0x2b852c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b852cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8530:
    // 0x2b8530: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8530u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8534:
    // 0x2b8534: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8534u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8538:
    // 0x2b8538: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8538u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b853c:
    // 0x2b853c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b853cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8540:
    // 0x2b8540: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8540u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8544:
    // 0x2b8544: 0x1f9c93c  .word       0x01F9C93C                   # dsll32      $t9, $t9, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b8544u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 25) << (32 + 4));
label_2b8548:
    // 0x2b8548: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8548u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b854c:
    // 0x2b854c: 0x1fbd93c  .word       0x01FBD93C                   # dsll32      $k1, $k1, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b854cu;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 27) << (32 + 4));
label_2b8550:
    // 0x2b8550: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8550u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8554:
    // 0x2b8554: 0x1fce13c  .word       0x01FCE13C                   # dsll32      $gp, $gp, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b8554u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 28) << (32 + 4));
label_2b8558:
    // 0x2b8558: 0x3ef8000  .word       0x03EF8000                   # sll         $s0, $t7, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b8558u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 15), 0));
label_2b855c:
    // 0x2b855c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b855cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8560:
    // 0x2b8560: 0x3ef8803  .word       0x03EF8803                   # sra         $s1, $t7, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b8560u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 15), 0));
label_2b8564:
    // 0x2b8564: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8564u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8568:
    // 0x2b8568: 0x3ef9006  srlv        $s2, $t7, $ra
    ctx->pc = 0x2b8568u;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 15), GPR_U32(ctx, 31) & 0x1F));
label_2b856c:
    // 0x2b856c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b856cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8570:
    // 0x2b8570: 0x3efc801  .word       0x03EFC801                   # INVALID     $ra, $t7, -0x37FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b8570u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2B8570 raw=0x03EFC801");
 /* MITIGATED */
label_2b8574:
    // 0x2b8574: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8574u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8578:
    // 0x2b8578: 0x3efd804  sllv        $k1, $t7, $ra
    ctx->pc = 0x2b8578u;
    SET_GPR_S32(ctx, 27, (int32_t)SLL32(GPR_U32(ctx, 15), GPR_U32(ctx, 31) & 0x1F));
label_2b857c:
    // 0x2b857c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b857cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8580:
    // 0x2b8580: 0x3efe007  srav        $gp, $t7, $ra
    ctx->pc = 0x2b8580u;
    SET_GPR_S32(ctx, 28, SRA32(GPR_S32(ctx, 15), GPR_U32(ctx, 31) & 0x1F));
label_2b8584:
    // 0x2b8584: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8584u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8588:
    // 0x2b8588: 0x3efb002  .word       0x03EFB002                   # srl         $s6, $t7, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b8588u;
    SET_GPR_S32(ctx, 22, (int32_t)SRL32(GPR_U32(ctx, 15), 0));
label_2b858c:
    // 0x2b858c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b858cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8590:
    // 0x2b8590: 0x3efb805  .word       0x03EFB805                   # INVALID     $ra, $t7, -0x47FB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b8590u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2B8590 raw=0x03EFB805");
 /* MITIGATED */
label_2b8594:
    // 0x2b8594: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8594u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8598:
    // 0x2b8598: 0x3efc008  .word       0x03EFC008                   # jr          $ra # 000FC000 <InstrIdType: CPU_SPECIAL>
label_2b859c:
    if (ctx->pc == 0x2B859Cu) {
        ctx->pc = 0x2B859Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8598u;
        // 0x2b859c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B85A0u;
        goto label_2b85a0;
    }
    ctx->pc = 0x2B8598u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B859Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8598u;
        // 0x2b859c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B8598u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B85A0u;
label_2b85a0:
    // 0x2b85a0: 0x100e7009  beq         $zero, $t6, . + 4 + (0x7009 << 2)
label_2b85a4:
    if (ctx->pc == 0x2B85A4u) {
        ctx->pc = 0x2B85A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B85A0u;
        // 0x2b85a4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B85A8u;
        goto label_2b85a8;
    }
    ctx->pc = 0x2B85A0u;
    {
        const bool branch_taken_0x2b85a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 14));
        ctx->pc = 0x2B85A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B85A0u;
        // 0x2b85a4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b85a0) {
            ctx->pc = 0x2D45C8u;
            return;
        }
    }
    ctx->pc = 0x2B85A8u;
label_2b85a8:
    // 0x2b85a8: 0x800106bc  lb          $at, 0x6BC($zero)
    ctx->pc = 0x2b85a8u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x6BCu));
label_2b85ac:
    // 0x2b85ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b85acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b85b0:
    // 0x2b85b0: 0xa8e0805  j           func_A382014
label_2b85b4:
    if (ctx->pc == 0x2B85B4u) {
        ctx->pc = 0x2B85B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B85B0u;
        // 0x2b85b4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B85B8u;
        goto label_2b85b8;
    }
    ctx->pc = 0x2B85B0u;
    ctx->pc = 0x2B85B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B85B0u;
    // 0x2b85b4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xA382014u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xA382014u, 0x2B85B0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B85B8u;
label_2b85b8:
    // 0x2b85b8: 0x40000008  .word       0x40000008                   # mfc0        $zero, Index # 00000008 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2b85b8u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2b85bc:
    // 0x2b85bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b85bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b85c0:
    // 0x2b85c0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b85c0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b85c4:
    // 0x2b85c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b85c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b85c8:
    // 0x2b85c8: 0x800106bc  lb          $at, 0x6BC($zero)
    ctx->pc = 0x2b85c8u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x6BCu));
label_2b85cc:
    // 0x2b85cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b85ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b85d0:
    // 0x2b85d0: 0x420f000a  .word       0x420F000A                   # INVALID     $s0, $t7, 0xA # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2b85d0u;
//     throw std::runtime_error("Unhandled COP0 CO-OP: 0xA at 0x2B85D0 raw=0x420F000A");
 /* MITIGATED */
label_2b85d4:
    // 0x2b85d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b85d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b85d8:
    // 0x2b85d8: 0x100e00db  beq         $zero, $t6, . + 4 + (0xDB << 2)
label_2b85dc:
    if (ctx->pc == 0x2B85DCu) {
        ctx->pc = 0x2B85DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B85D8u;
        // 0x2b85dc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B85E0u;
        goto label_2b85e0;
    }
    ctx->pc = 0x2B85D8u;
    {
        const bool branch_taken_0x2b85d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 14));
        ctx->pc = 0x2B85DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B85D8u;
        // 0x2b85dc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b85d8) {
            ctx->pc = 0x2B8948u;
            { ctx->pc = 0x2b8948; return; }
        }
    }
    ctx->pc = 0x2B85E0u;
label_2b85e0:
    // 0x2b85e0: 0x420f0041  .word       0x420F0041                   # tlbr # 000F0040 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2b85e0u;
    runtime->handleTLBR(rdram, ctx);
label_2b85e4:
    // 0x2b85e4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b85e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b85e8:
    // 0x2b85e8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b85e8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b85ec:
    // 0x2b85ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b85ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b85f0:
    // 0x2b85f0: 0x420f001c  .word       0x420F001C                   # INVALID     $s0, $t7, 0x1C # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2b85f0u;
//     throw std::runtime_error("Unhandled COP0 CO-OP: 0x1C at 0x2B85F0 raw=0x420F001C");
 /* MITIGATED */
label_2b85f4:
    // 0x2b85f4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b85f4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b85f8:
    // 0x2b85f8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b85f8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b85fc:
    // 0x2b85fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b85fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8600:
    // 0x2b8600: 0x11e117ff  beq         $t7, $at, . + 4 + (0x17FF << 2)
label_2b8604:
    if (ctx->pc == 0x2B8604u) {
        ctx->pc = 0x2B8604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8600u;
        // 0x2b8604: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8608u;
        goto label_2b8608;
    }
    ctx->pc = 0x2B8600u;
    {
        const bool branch_taken_0x2b8600 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 1));
        ctx->pc = 0x2B8604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8600u;
        // 0x2b8604: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8600) {
            ctx->pc = 0x2BE600u;
            { ctx->pc = 0x2be600; return; }
        }
    }
    ctx->pc = 0x2B8608u;
label_2b8608:
    // 0x2b8608: 0x80010872  lb          $at, 0x872($zero)
    ctx->pc = 0x2b8608u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x872u));
label_2b860c:
    // 0x2b860c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b860cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8610:
    // 0x2b8610: 0xa213fff  j           func_884FFFC
label_2b8614:
    if (ctx->pc == 0x2B8614u) {
        ctx->pc = 0x2B8614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8610u;
        // 0x2b8614: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8618u;
        goto label_2b8618;
    }
    ctx->pc = 0x2B8610u;
    ctx->pc = 0x2B8614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8610u;
    // 0x2b8614: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x884FFFCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x884FFFCu, 0x2B8610u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B8618u;
label_2b8618:
    // 0x2b8618: 0x400007ae  .word       0x400007AE                   # mfc0        $zero, Index # 000007AE <InstrIdType: R5900_COP0>
    ctx->pc = 0x2b8618u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2b861c:
    // 0x2b861c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b861cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8620:
    // 0x2b8620: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8620u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8624:
    // 0x2b8624: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8624u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8628:
    // 0x2b8628: 0x81ee837f  lb          $t6, -0x7C81($t7)
    ctx->pc = 0x2b8628u;
    SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294935423)));
label_2b862c:
    // 0x2b862c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b862cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8630:
    // 0x2b8630: 0x81ee8b7f  lb          $t6, -0x7481($t7)
    ctx->pc = 0x2b8630u;
    SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294937471)));
label_2b8634:
    // 0x2b8634: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8634u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8638:
    // 0x2b8638: 0x81ee937f  lb          $t6, -0x6C81($t7)
    ctx->pc = 0x2b8638u;
    SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294939519)));
label_2b863c:
    // 0x2b863c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b863cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8640:
    // 0x2b8640: 0x81ee9b7f  lb          $t6, -0x6481($t7)
    ctx->pc = 0x2b8640u;
    SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294941567)));
label_2b8644:
    // 0x2b8644: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8644u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8648:
    // 0x2b8648: 0x81eeab7f  lb          $t6, -0x5481($t7)
    ctx->pc = 0x2b8648u;
    SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294945663)));
label_2b864c:
    // 0x2b864c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b864cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8650:
    // 0x2b8650: 0x120e7001  beq         $s0, $t6, . + 4 + (0x7001 << 2)
label_2b8654:
    if (ctx->pc == 0x2B8654u) {
        ctx->pc = 0x2B8654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8650u;
        // 0x2b8654: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8658u;
        goto label_2b8658;
    }
    ctx->pc = 0x2B8650u;
    {
        const bool branch_taken_0x2b8650 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 14));
        ctx->pc = 0x2B8654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8650u;
        // 0x2b8654: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8650) {
            ctx->pc = 0x2D4658u;
            return;
        }
    }
    ctx->pc = 0x2B8658u;
label_2b8658:
    // 0x2b8658: 0x810273ff  lb          $v0, 0x73FF($t0)
    ctx->pc = 0x2b8658u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 29695)));
label_2b865c:
    // 0x2b865c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b865cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8660:
    // 0x2b8660: 0x808373ff  lb          $v1, 0x73FF($a0)
    ctx->pc = 0x2b8660u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 29695)));
label_2b8664:
    // 0x2b8664: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8664u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8668:
    // 0x2b8668: 0x804473ff  lb          $a0, 0x73FF($v0)
    ctx->pc = 0x2b8668u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 29695)));
label_2b866c:
    // 0x2b866c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b866cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8670:
    // 0x2b8670: 0x802573ff  lb          $a1, 0x73FF($at)
    ctx->pc = 0x2b8670u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 29695)));
label_2b8674:
    // 0x2b8674: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8674u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8678:
    // 0x2b8678: 0x120e7001  beq         $s0, $t6, . + 4 + (0x7001 << 2)
label_2b867c:
    if (ctx->pc == 0x2B867Cu) {
        ctx->pc = 0x2B867Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8678u;
        // 0x2b867c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8680u;
        goto label_2b8680;
    }
    ctx->pc = 0x2B8678u;
    {
        const bool branch_taken_0x2b8678 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 14));
        ctx->pc = 0x2B867Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8678u;
        // 0x2b867c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8678) {
            ctx->pc = 0x2D4680u;
            return;
        }
    }
    ctx->pc = 0x2B8680u;
label_2b8680:
    // 0x2b8680: 0x810673ff  lb          $a2, 0x73FF($t0)
    ctx->pc = 0x2b8680u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 29695)));
label_2b8684:
    // 0x2b8684: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8684u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8688:
    // 0x2b8688: 0x808773ff  lb          $a3, 0x73FF($a0)
    ctx->pc = 0x2b8688u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 29695)));
label_2b868c:
    // 0x2b868c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b868cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8690:
    // 0x2b8690: 0x804873ff  lb          $t0, 0x73FF($v0)
    ctx->pc = 0x2b8690u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 29695)));
label_2b8694:
    // 0x2b8694: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8694u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8698:
    // 0x2b8698: 0x802973ff  lb          $t1, 0x73FF($at)
    ctx->pc = 0x2b8698u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 29695)));
label_2b869c:
    // 0x2b869c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b869cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b86a0:
    // 0x2b86a0: 0x120e7001  beq         $s0, $t6, . + 4 + (0x7001 << 2)
label_2b86a4:
    if (ctx->pc == 0x2B86A4u) {
        ctx->pc = 0x2B86A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B86A0u;
        // 0x2b86a4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B86A8u;
        goto label_2b86a8;
    }
    ctx->pc = 0x2B86A0u;
    {
        const bool branch_taken_0x2b86a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 14));
        ctx->pc = 0x2B86A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B86A0u;
        // 0x2b86a4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b86a0) {
            ctx->pc = 0x2D46A8u;
            return;
        }
    }
    ctx->pc = 0x2B86A8u;
label_2b86a8:
    // 0x2b86a8: 0x810a73ff  lb          $t2, 0x73FF($t0)
    ctx->pc = 0x2b86a8u;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 29695)));
label_2b86ac:
    // 0x2b86ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b86acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b86b0:
    // 0x2b86b0: 0x808b73ff  lb          $t3, 0x73FF($a0)
    ctx->pc = 0x2b86b0u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 29695)));
label_2b86b4:
    // 0x2b86b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b86b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b86b8:
    // 0x2b86b8: 0x804c73ff  lb          $t4, 0x73FF($v0)
    ctx->pc = 0x2b86b8u;
    SET_GPR_S32(ctx, 12, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 29695)));
label_2b86bc:
    // 0x2b86bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b86bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b86c0:
    // 0x2b86c0: 0x802d73ff  lb          $t5, 0x73FF($at)
    ctx->pc = 0x2b86c0u;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 29695)));
label_2b86c4:
    // 0x2b86c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b86c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b86c8:
    // 0x2b86c8: 0x48007800  .word       0x48007800                   # INVALID     $zero, $zero, 0x7800 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2b86c8u;
//     throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x2B86C8 raw=0x48007800");
 /* MITIGATED */
label_2b86cc:
    // 0x2b86cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b86ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b86d0:
    // 0x2b86d0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b86d0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b86d4:
    // 0x2b86d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b86d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b86d8:
    // 0x2b86d8: 0x800f0070  lb          $t7, 0x70($zero)
    ctx->pc = 0x2b86d8u;
    SET_GPR_S32(ctx, 15, (int8_t)FAST_READ8(0x70u));
label_2b86dc:
    // 0x2b86dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b86dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b86e0:
    // 0x2b86e0: 0x810a73fe  lb          $t2, 0x73FE($t0)
    ctx->pc = 0x2b86e0u;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 29694)));
label_2b86e4:
    // 0x2b86e4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b86e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b86e8:
    // 0x2b86e8: 0x808b73fe  lb          $t3, 0x73FE($a0)
    ctx->pc = 0x2b86e8u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 29694)));
label_2b86ec:
    // 0x2b86ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b86ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b86f0:
    // 0x2b86f0: 0x804c73fe  lb          $t4, 0x73FE($v0)
    ctx->pc = 0x2b86f0u;
    SET_GPR_S32(ctx, 12, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 29694)));
label_2b86f4:
    // 0x2b86f4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b86f4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b86f8:
    // 0x2b86f8: 0x802d73fe  lb          $t5, 0x73FE($at)
    ctx->pc = 0x2b86f8u;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 29694)));
label_2b86fc:
    // 0x2b86fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b86fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8700:
    // 0x2b8700: 0x100e7001  beq         $zero, $t6, . + 4 + (0x7001 << 2)
label_2b8704:
    if (ctx->pc == 0x2B8704u) {
        ctx->pc = 0x2B8704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8700u;
        // 0x2b8704: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8708u;
        goto label_2b8708;
    }
    ctx->pc = 0x2B8700u;
    {
        const bool branch_taken_0x2b8700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 14));
        ctx->pc = 0x2B8704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8700u;
        // 0x2b8704: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8700) {
            ctx->pc = 0x2D4708u;
            return;
        }
    }
    ctx->pc = 0x2B8708u;
label_2b8708:
    // 0x2b8708: 0x810673fe  lb          $a2, 0x73FE($t0)
    ctx->pc = 0x2b8708u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 29694)));
label_2b870c:
    // 0x2b870c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b870cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8710:
    // 0x2b8710: 0x808773fe  lb          $a3, 0x73FE($a0)
    ctx->pc = 0x2b8710u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 29694)));
label_2b8714:
    // 0x2b8714: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8714u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8718:
    // 0x2b8718: 0x804873fe  lb          $t0, 0x73FE($v0)
    ctx->pc = 0x2b8718u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 29694)));
label_2b871c:
    // 0x2b871c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b871cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8720:
    // 0x2b8720: 0x802973fe  lb          $t1, 0x73FE($at)
    ctx->pc = 0x2b8720u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 29694)));
label_2b8724:
    // 0x2b8724: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8724u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8728:
    // 0x2b8728: 0x100e7001  beq         $zero, $t6, . + 4 + (0x7001 << 2)
label_2b872c:
    if (ctx->pc == 0x2B872Cu) {
        ctx->pc = 0x2B872Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8728u;
        // 0x2b872c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8730u;
        goto label_2b8730;
    }
    ctx->pc = 0x2B8728u;
    {
        const bool branch_taken_0x2b8728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 14));
        ctx->pc = 0x2B872Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8728u;
        // 0x2b872c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8728) {
            ctx->pc = 0x2D4730u;
            return;
        }
    }
    ctx->pc = 0x2B8730u;
label_2b8730:
    // 0x2b8730: 0x810273fe  lb          $v0, 0x73FE($t0)
    ctx->pc = 0x2b8730u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 29694)));
label_2b8734:
    // 0x2b8734: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8734u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8738:
    // 0x2b8738: 0x808373fe  lb          $v1, 0x73FE($a0)
    ctx->pc = 0x2b8738u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 29694)));
label_2b873c:
    // 0x2b873c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b873cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8740:
    // 0x2b8740: 0x804473fe  lb          $a0, 0x73FE($v0)
    ctx->pc = 0x2b8740u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 29694)));
label_2b8744:
    // 0x2b8744: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8744u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8748:
    // 0x2b8748: 0x802573fe  lb          $a1, 0x73FE($at)
    ctx->pc = 0x2b8748u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 29694)));
label_2b874c:
    // 0x2b874c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b874cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8750:
    // 0x2b8750: 0x100e7001  beq         $zero, $t6, . + 4 + (0x7001 << 2)
label_2b8754:
    if (ctx->pc == 0x2B8754u) {
        ctx->pc = 0x2B8754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8750u;
        // 0x2b8754: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8758u;
        goto label_2b8758;
    }
    ctx->pc = 0x2B8750u;
    {
        const bool branch_taken_0x2b8750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 14));
        ctx->pc = 0x2B8754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8750u;
        // 0x2b8754: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8750) {
            ctx->pc = 0x2D4758u;
            return;
        }
    }
    ctx->pc = 0x2B8758u;
label_2b8758:
    // 0x2b8758: 0x81f5737c  lb          $s5, 0x737C($t7)
    ctx->pc = 0x2b8758u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 29564)));
label_2b875c:
    // 0x2b875c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b875cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8760:
    // 0x2b8760: 0x81f3737c  lb          $s3, 0x737C($t7)
    ctx->pc = 0x2b8760u;
    SET_GPR_S32(ctx, 19, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 29564)));
label_2b8764:
    // 0x2b8764: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8764u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8768:
    // 0x2b8768: 0x81f2737c  lb          $s2, 0x737C($t7)
    ctx->pc = 0x2b8768u;
    SET_GPR_S32(ctx, 18, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 29564)));
label_2b876c:
    // 0x2b876c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b876cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8770:
    // 0x2b8770: 0x81f1737c  lb          $s1, 0x737C($t7)
    ctx->pc = 0x2b8770u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 29564)));
label_2b8774:
    // 0x2b8774: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8774u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8778:
    // 0x2b8778: 0x81f0737c  lb          $s0, 0x737C($t7)
    ctx->pc = 0x2b8778u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 29564)));
label_2b877c:
    // 0x2b877c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b877cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8780:
    // 0x2b8780: 0x48000800  .word       0x48000800                   # INVALID     $zero, $zero, 0x800 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2b8780u;
//     throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x2B8780 raw=0x48000800");
 /* MITIGATED */
label_2b8784:
    // 0x2b8784: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8784u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8788:
    // 0x2b8788: 0x0  nop
    ctx->pc = 0x2b8788u;
    // NOP
label_2b878c:
    // 0x2b878c: 0x4a000550  vmaxx       $vf21, $vf0, $vf0x
    ctx->pc = 0x2b878cu;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, 0); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
label_2b8790:
    // 0x2b8790: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8790u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8794:
    // 0x2b8794: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8794u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8798:
    // 0x2b8798: 0x11eb07ff  beq         $t7, $t3, . + 4 + (0x7FF << 2)
label_2b879c:
    if (ctx->pc == 0x2B879Cu) {
        ctx->pc = 0x2B879Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8798u;
        // 0x2b879c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B87A0u;
        goto label_2b87a0;
    }
    ctx->pc = 0x2B8798u;
    {
        const bool branch_taken_0x2b8798 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 11));
        ctx->pc = 0x2B879Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8798u;
        // 0x2b879c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8798) {
            ctx->pc = 0x2BA798u;
            { ctx->pc = 0x2ba798; return; }
        }
    }
    ctx->pc = 0x2B87A0u;
label_2b87a0:
    // 0x2b87a0: 0x100b5801  beq         $zero, $t3, . + 4 + (0x5801 << 2)
label_2b87a4:
    if (ctx->pc == 0x2B87A4u) {
        ctx->pc = 0x2B87A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B87A0u;
        // 0x2b87a4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B87A8u;
        goto label_2b87a8;
    }
    ctx->pc = 0x2B87A0u;
    {
        const bool branch_taken_0x2b87a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2B87A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B87A0u;
        // 0x2b87a4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b87a0) {
            ctx->pc = 0x2CE7A8u;
            { ctx->pc = 0x2ce7a8; return; }
        }
    }
    ctx->pc = 0x2B87A8u;
label_2b87a8:
    // 0x2b87a8: 0x800206bc  lb          $v0, 0x6BC($zero)
    ctx->pc = 0x2b87a8u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x6BCu));
label_2b87ac:
    // 0x2b87ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b87acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b87b0:
    // 0x2b87b0: 0x10050004  beq         $zero, $a1, . + 4 + (0x4 << 2)
label_2b87b4:
    if (ctx->pc == 0x2B87B4u) {
        ctx->pc = 0x2B87B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B87B0u;
        // 0x2b87b4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B87B8u;
        goto label_2b87b8;
    }
    ctx->pc = 0x2B87B0u;
    {
        const bool branch_taken_0x2b87b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 5));
        ctx->pc = 0x2B87B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B87B0u;
        // 0x2b87b4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b87b0) {
            ctx->pc = 0x2B87C4u;
            goto label_2b87c4;
        }
    }
    ctx->pc = 0x2B87B8u;
label_2b87b8:
    // 0x2b87b8: 0x800b2af0  lb          $t3, 0x2AF0($zero)
    ctx->pc = 0x2b87b8u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x2AF0u));
label_2b87bc:
    // 0x2b87bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b87bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b87c0:
    // 0x2b87c0: 0xb0b1000  j           func_C2C4000
label_2b87c4:
    if (ctx->pc == 0x2B87C4u) {
        ctx->pc = 0x2B87C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B87C0u;
        // 0x2b87c4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B87C8u;
        goto label_2b87c8;
    }
    ctx->pc = 0x2B87C0u;
    ctx->pc = 0x2B87C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B87C0u;
    // 0x2b87c4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xC2C4000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC2C4000u, 0x2B87C0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B87C8u;
label_2b87c8:
    // 0x2b87c8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b87c8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b87cc:
    // 0x2b87cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b87ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b87d0:
    // 0x2b87d0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b87d0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b87d4:
    // 0x2b87d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b87d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b87d8:
    // 0x2b87d8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b87d8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b87dc:
    // 0x2b87dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b87dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b87e0:
    // 0x2b87e0: 0x800016fc  lb          $zero, 0x16FC($zero)
    ctx->pc = 0x2b87e0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x16FCu));
label_2b87e4:
    // 0x2b87e4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b87e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b87e8:
    // 0x2b87e8: 0x48000800  .word       0x48000800                   # INVALID     $zero, $zero, 0x800 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2b87e8u;
//     throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x2B87E8 raw=0x48000800");
 /* MITIGATED */
label_2b87ec:
    // 0x2b87ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b87ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b87f0:
    // 0x2b87f0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b87f0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b87f4:
    // 0x2b87f4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b87f4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b87f8:
    // 0x2b87f8: 0x420107f3  .word       0x420107F3                   # INVALID     $s0, $at, 0x7F3 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2b87f8u;
//     throw std::runtime_error("Unhandled COP0 CO-OP: 0x33 at 0x2B87F8 raw=0x420107F3");
 /* MITIGATED */
label_2b87fc:
    // 0x2b87fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b87fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8800:
    // 0x2b8800: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8800u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8804:
    // 0x2b8804: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8804u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8808:
    // 0x2b8808: 0x1f53ff8  .word       0x01F53FF8                   # dsll        $a3, $s5, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b8808u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 21) << 31);
label_2b880c:
    // 0x2b880c: 0x1e0ffd8  .word       0x01E0FFD8                   # mult        $ra, $t7, $zero # 000007C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2b880cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 31, (int32_t)result); }
label_2b8810:
    // 0x2b8810: 0x1f33ffb  .word       0x01F33FFB                   # dsra        $a3, $s3, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b8810u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 19) >> 31);
label_2b8814:
    // 0x2b8814: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8814u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8818:
    // 0x2b8818: 0x1f43ffe  .word       0x01F43FFE                   # dsrl32      $a3, $s4, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b8818u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 20) >> (32 + 31));
label_2b881c:
    // 0x2b881c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b881cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8820:
    // 0x2b8820: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8820u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8824:
    // 0x2b8824: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8824u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8828:
    // 0x2b8828: 0x800206bc  lb          $v0, 0x6BC($zero)
    ctx->pc = 0x2b8828u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x6BCu));
label_2b882c:
    // 0x2b882c: 0x1f5a93c  .word       0x01F5A93C                   # dsll32      $s5, $s5, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b882cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) << (32 + 4));
label_2b8830:
    // 0x2b8830: 0x10080066  beq         $zero, $t0, . + 4 + (0x66 << 2)
label_2b8834:
    if (ctx->pc == 0x2B8834u) {
        ctx->pc = 0x2B8834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8830u;
        // 0x2b8834: 0x1f3993c  .word       0x01F3993C                   # dsll32      $s3, $s3, 4 # 01E00000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) << (32 + 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8838u;
        goto label_2b8838;
    }
    ctx->pc = 0x2B8830u;
    {
        const bool branch_taken_0x2b8830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2B8834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8830u;
        // 0x2b8834: 0x1f3993c  .word       0x01F3993C                   # dsll32      $s3, $s3, 4 # 01E00000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) << (32 + 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8830) {
            ctx->pc = 0x2B89CCu;
            { ctx->pc = 0x2b89cc; return; }
        }
    }
    ctx->pc = 0x2B8838u;
label_2b8838:
    // 0x2b8838: 0x10090086  beq         $zero, $t1, . + 4 + (0x86 << 2)
label_2b883c:
    if (ctx->pc == 0x2B883Cu) {
        ctx->pc = 0x2B883Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8838u;
        // 0x2b883c: 0x1f4a13c  .word       0x01F4A13C                   # dsll32      $s4, $s4, 4 # 01E00000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) << (32 + 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8840u;
        goto label_2b8840;
    }
    ctx->pc = 0x2B8838u;
    {
        const bool branch_taken_0x2b8838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 9));
        ctx->pc = 0x2B883Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8838u;
        // 0x2b883c: 0x1f4a13c  .word       0x01F4A13C                   # dsll32      $s4, $s4, 4 # 01E00000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) << (32 + 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8838) {
            ctx->pc = 0x2B8A54u;
            { ctx->pc = 0x2b8a54; return; }
        }
    }
    ctx->pc = 0x2B8840u;
label_2b8840:
    // 0x2b8840: 0x3e8a801  .word       0x03E8A801                   # INVALID     $ra, $t0, -0x57FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b8840u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2B8840 raw=0x03E8A801");
 /* MITIGATED */
label_2b8844:
    // 0x2b8844: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8844u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8848:
    // 0x2b8848: 0x3e89804  sllv        $s3, $t0, $ra
    ctx->pc = 0x2b8848u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 31) & 0x1F));
label_2b884c:
    // 0x2b884c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b884cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8850:
    // 0x2b8850: 0x3e8a007  srav        $s4, $t0, $ra
    ctx->pc = 0x2b8850u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 8), GPR_U32(ctx, 31) & 0x1F));
label_2b8854:
    // 0x2b8854: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8854u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8858:
    // 0x2b8858: 0x3e8a80a  movz        $s5, $ra, $t0
    ctx->pc = 0x2b8858u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 31));
label_2b885c:
    // 0x2b885c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b885cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8860:
    // 0x2b8860: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2b8860u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_2b8864:
    // 0x2b8864: 0x81f182bc  lb          $s1, -0x7D44($t7)
    ctx->pc = 0x2b8864u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294935228)));
label_2b8868:
    // 0x2b8868: 0x3eaaaaaa  .word       0x3EAAAAAA                   # lui         $t2, 0xAAAA # 02A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2b8868u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)43690 << 16));
label_2b886c:
    // 0x2b886c: 0x81e09723  lb          $zero, -0x68DD($t7)
    ctx->pc = 0x2b886cu;
    SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294940451)));
label_2b8870:
    // 0x2b8870: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8870u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8874:
    // 0x2b8874: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8874u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8878:
    // 0x2b8878: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8878u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b887c:
    // 0x2b887c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b887cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8880:
    // 0x2b8880: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8880u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8884:
    // 0x2b8884: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8884u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8888:
    // 0x2b8888: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8888u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b888c:
    // 0x2b888c: 0x1e0e71e  .word       0x01E0E71E                   # ddiv        $gp, $t7, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b888cu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x2B888C raw=0x01E0E71E");
 /* MITIGATED */
label_2b8890:
    // 0x2b8890: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8890u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8894:
    // 0x2b8894: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8894u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8898:
    // 0x2b8898: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8898u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b889c:
    // 0x2b889c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b889cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b88a0:
    // 0x2b88a0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b88a0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b88a4:
    // 0x2b88a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b88a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b88a8:
    // 0x2b88a8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b88a8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b88ac:
    // 0x2b88ac: 0x1fc866c  .word       0x01FC866C                   # dadd        $s0, $t7, $gp # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b88acu;
    { int64_t a = (int64_t)GPR_S64(ctx, 15); int64_t b = (int64_t)GPR_S64(ctx, 28); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 16, r); }
    ctx->pc = 0x2b88b0u;
    return;
}

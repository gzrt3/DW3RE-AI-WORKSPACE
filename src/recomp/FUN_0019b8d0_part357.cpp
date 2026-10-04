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


void FUN_0019b8d0_part357(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x249610u: goto label_249610;
        case 0x249614u: goto label_249614;
        case 0x249618u: goto label_249618;
        case 0x24961cu: goto label_24961c;
        case 0x249620u: goto label_249620;
        case 0x249624u: goto label_249624;
        case 0x249628u: goto label_249628;
        case 0x24962cu: goto label_24962c;
        case 0x249630u: goto label_249630;
        case 0x249634u: goto label_249634;
        case 0x249638u: goto label_249638;
        case 0x24963cu: goto label_24963c;
        case 0x249640u: goto label_249640;
        case 0x249644u: goto label_249644;
        case 0x249648u: goto label_249648;
        case 0x24964cu: goto label_24964c;
        case 0x249650u: goto label_249650;
        case 0x249654u: goto label_249654;
        case 0x249658u: goto label_249658;
        case 0x24965cu: goto label_24965c;
        case 0x249660u: goto label_249660;
        case 0x249664u: goto label_249664;
        case 0x249668u: goto label_249668;
        case 0x24966cu: goto label_24966c;
        case 0x249670u: goto label_249670;
        case 0x249674u: goto label_249674;
        case 0x249678u: goto label_249678;
        case 0x24967cu: goto label_24967c;
        case 0x249680u: goto label_249680;
        case 0x249684u: goto label_249684;
        case 0x249688u: goto label_249688;
        case 0x24968cu: goto label_24968c;
        case 0x249690u: goto label_249690;
        case 0x249694u: goto label_249694;
        case 0x249698u: goto label_249698;
        case 0x24969cu: goto label_24969c;
        case 0x2496a0u: goto label_2496a0;
        case 0x2496a4u: goto label_2496a4;
        case 0x2496a8u: goto label_2496a8;
        case 0x2496acu: goto label_2496ac;
        case 0x2496b0u: goto label_2496b0;
        case 0x2496b4u: goto label_2496b4;
        case 0x2496b8u: goto label_2496b8;
        case 0x2496bcu: goto label_2496bc;
        case 0x2496c0u: goto label_2496c0;
        case 0x2496c4u: goto label_2496c4;
        case 0x2496c8u: goto label_2496c8;
        case 0x2496ccu: goto label_2496cc;
        case 0x2496d0u: goto label_2496d0;
        case 0x2496d4u: goto label_2496d4;
        case 0x2496d8u: goto label_2496d8;
        case 0x2496dcu: goto label_2496dc;
        case 0x2496e0u: goto label_2496e0;
        case 0x2496e4u: goto label_2496e4;
        case 0x2496e8u: goto label_2496e8;
        case 0x2496ecu: goto label_2496ec;
        case 0x2496f0u: goto label_2496f0;
        case 0x2496f4u: goto label_2496f4;
        case 0x2496f8u: goto label_2496f8;
        case 0x2496fcu: goto label_2496fc;
        case 0x249700u: goto label_249700;
        case 0x249704u: goto label_249704;
        case 0x249708u: goto label_249708;
        case 0x24970cu: goto label_24970c;
        case 0x249710u: goto label_249710;
        case 0x249714u: goto label_249714;
        case 0x249718u: goto label_249718;
        case 0x24971cu: goto label_24971c;
        case 0x249720u: goto label_249720;
        case 0x249724u: goto label_249724;
        case 0x249728u: goto label_249728;
        case 0x24972cu: goto label_24972c;
        case 0x249730u: goto label_249730;
        case 0x249734u: goto label_249734;
        case 0x249738u: goto label_249738;
        case 0x24973cu: goto label_24973c;
        case 0x249740u: goto label_249740;
        case 0x249744u: goto label_249744;
        case 0x249748u: goto label_249748;
        case 0x24974cu: goto label_24974c;
        case 0x249750u: goto label_249750;
        case 0x249754u: goto label_249754;
        case 0x249758u: goto label_249758;
        case 0x24975cu: goto label_24975c;
        case 0x249760u: goto label_249760;
        case 0x249764u: goto label_249764;
        case 0x249768u: goto label_249768;
        case 0x24976cu: goto label_24976c;
        case 0x249770u: goto label_249770;
        case 0x249774u: goto label_249774;
        case 0x249778u: goto label_249778;
        case 0x24977cu: goto label_24977c;
        case 0x249780u: goto label_249780;
        case 0x249784u: goto label_249784;
        case 0x249788u: goto label_249788;
        case 0x24978cu: goto label_24978c;
        case 0x249790u: goto label_249790;
        case 0x249794u: goto label_249794;
        case 0x249798u: goto label_249798;
        case 0x24979cu: goto label_24979c;
        case 0x2497a0u: goto label_2497a0;
        case 0x2497a4u: goto label_2497a4;
        case 0x2497a8u: goto label_2497a8;
        case 0x2497acu: goto label_2497ac;
        case 0x2497b0u: goto label_2497b0;
        case 0x2497b4u: goto label_2497b4;
        case 0x2497b8u: goto label_2497b8;
        case 0x2497bcu: goto label_2497bc;
        case 0x2497c0u: goto label_2497c0;
        case 0x2497c4u: goto label_2497c4;
        case 0x2497c8u: goto label_2497c8;
        case 0x2497ccu: goto label_2497cc;
        case 0x2497d0u: goto label_2497d0;
        case 0x2497d4u: goto label_2497d4;
        case 0x2497d8u: goto label_2497d8;
        case 0x2497dcu: goto label_2497dc;
        case 0x2497e0u: goto label_2497e0;
        case 0x2497e4u: goto label_2497e4;
        case 0x2497e8u: goto label_2497e8;
        case 0x2497ecu: goto label_2497ec;
        case 0x2497f0u: goto label_2497f0;
        case 0x2497f4u: goto label_2497f4;
        case 0x2497f8u: goto label_2497f8;
        case 0x2497fcu: goto label_2497fc;
        case 0x249800u: goto label_249800;
        case 0x249804u: goto label_249804;
        case 0x249808u: goto label_249808;
        case 0x24980cu: goto label_24980c;
        case 0x249810u: goto label_249810;
        case 0x249814u: goto label_249814;
        case 0x249818u: goto label_249818;
        case 0x24981cu: goto label_24981c;
        case 0x249820u: goto label_249820;
        case 0x249824u: goto label_249824;
        case 0x249828u: goto label_249828;
        case 0x24982cu: goto label_24982c;
        case 0x249830u: goto label_249830;
        case 0x249834u: goto label_249834;
        case 0x249838u: goto label_249838;
        case 0x24983cu: goto label_24983c;
        case 0x249840u: goto label_249840;
        case 0x249844u: goto label_249844;
        case 0x249848u: goto label_249848;
        case 0x24984cu: goto label_24984c;
        case 0x249850u: goto label_249850;
        case 0x249854u: goto label_249854;
        case 0x249858u: goto label_249858;
        case 0x24985cu: goto label_24985c;
        case 0x249860u: goto label_249860;
        case 0x249864u: goto label_249864;
        case 0x249868u: goto label_249868;
        case 0x24986cu: goto label_24986c;
        case 0x249870u: goto label_249870;
        case 0x249874u: goto label_249874;
        case 0x249878u: goto label_249878;
        case 0x24987cu: goto label_24987c;
        case 0x249880u: goto label_249880;
        case 0x249884u: goto label_249884;
        case 0x249888u: goto label_249888;
        case 0x24988cu: goto label_24988c;
        case 0x249890u: goto label_249890;
        case 0x249894u: goto label_249894;
        case 0x249898u: goto label_249898;
        case 0x24989cu: goto label_24989c;
        case 0x2498a0u: goto label_2498a0;
        case 0x2498a4u: goto label_2498a4;
        case 0x2498a8u: goto label_2498a8;
        case 0x2498acu: goto label_2498ac;
        case 0x2498b0u: goto label_2498b0;
        case 0x2498b4u: goto label_2498b4;
        case 0x2498b8u: goto label_2498b8;
        case 0x2498bcu: goto label_2498bc;
        case 0x2498c0u: goto label_2498c0;
        case 0x2498c4u: goto label_2498c4;
        case 0x2498c8u: goto label_2498c8;
        case 0x2498ccu: goto label_2498cc;
        case 0x2498d0u: goto label_2498d0;
        case 0x2498d4u: goto label_2498d4;
        case 0x2498d8u: goto label_2498d8;
        case 0x2498dcu: goto label_2498dc;
        case 0x2498e0u: goto label_2498e0;
        case 0x2498e4u: goto label_2498e4;
        case 0x2498e8u: goto label_2498e8;
        case 0x2498ecu: goto label_2498ec;
        case 0x2498f0u: goto label_2498f0;
        case 0x2498f4u: goto label_2498f4;
        case 0x2498f8u: goto label_2498f8;
        case 0x2498fcu: goto label_2498fc;
        case 0x249900u: goto label_249900;
        case 0x249904u: goto label_249904;
        case 0x249908u: goto label_249908;
        case 0x24990cu: goto label_24990c;
        case 0x249910u: goto label_249910;
        case 0x249914u: goto label_249914;
        case 0x249918u: goto label_249918;
        case 0x24991cu: goto label_24991c;
        case 0x249920u: goto label_249920;
        case 0x249924u: goto label_249924;
        case 0x249928u: goto label_249928;
        case 0x24992cu: goto label_24992c;
        case 0x249930u: goto label_249930;
        case 0x249934u: goto label_249934;
        case 0x249938u: goto label_249938;
        case 0x24993cu: goto label_24993c;
        case 0x249940u: goto label_249940;
        case 0x249944u: goto label_249944;
        case 0x249948u: goto label_249948;
        case 0x24994cu: goto label_24994c;
        case 0x249950u: goto label_249950;
        case 0x249954u: goto label_249954;
        case 0x249958u: goto label_249958;
        case 0x24995cu: goto label_24995c;
        case 0x249960u: goto label_249960;
        case 0x249964u: goto label_249964;
        case 0x249968u: goto label_249968;
        case 0x24996cu: goto label_24996c;
        case 0x249970u: goto label_249970;
        case 0x249974u: goto label_249974;
        case 0x249978u: goto label_249978;
        case 0x24997cu: goto label_24997c;
        case 0x249980u: goto label_249980;
        case 0x249984u: goto label_249984;
        case 0x249988u: goto label_249988;
        case 0x24998cu: goto label_24998c;
        case 0x249990u: goto label_249990;
        case 0x249994u: goto label_249994;
        case 0x249998u: goto label_249998;
        case 0x24999cu: goto label_24999c;
        case 0x2499a0u: goto label_2499a0;
        case 0x2499a4u: goto label_2499a4;
        case 0x2499a8u: goto label_2499a8;
        case 0x2499acu: goto label_2499ac;
        case 0x2499b0u: goto label_2499b0;
        case 0x2499b4u: goto label_2499b4;
        case 0x2499b8u: goto label_2499b8;
        case 0x2499bcu: goto label_2499bc;
        case 0x2499c0u: goto label_2499c0;
        case 0x2499c4u: goto label_2499c4;
        case 0x2499c8u: goto label_2499c8;
        case 0x2499ccu: goto label_2499cc;
        case 0x2499d0u: goto label_2499d0;
        case 0x2499d4u: goto label_2499d4;
        case 0x2499d8u: goto label_2499d8;
        case 0x2499dcu: goto label_2499dc;
        case 0x2499e0u: goto label_2499e0;
        case 0x2499e4u: goto label_2499e4;
        case 0x2499e8u: goto label_2499e8;
        case 0x2499ecu: goto label_2499ec;
        case 0x2499f0u: goto label_2499f0;
        case 0x2499f4u: goto label_2499f4;
        case 0x2499f8u: goto label_2499f8;
        case 0x2499fcu: goto label_2499fc;
        case 0x249a00u: goto label_249a00;
        case 0x249a04u: goto label_249a04;
        case 0x249a08u: goto label_249a08;
        case 0x249a0cu: goto label_249a0c;
        case 0x249a10u: goto label_249a10;
        case 0x249a14u: goto label_249a14;
        case 0x249a18u: goto label_249a18;
        case 0x249a1cu: goto label_249a1c;
        case 0x249a20u: goto label_249a20;
        case 0x249a24u: goto label_249a24;
        case 0x249a28u: goto label_249a28;
        case 0x249a2cu: goto label_249a2c;
        case 0x249a30u: goto label_249a30;
        case 0x249a34u: goto label_249a34;
        case 0x249a38u: goto label_249a38;
        case 0x249a3cu: goto label_249a3c;
        case 0x249a40u: goto label_249a40;
        case 0x249a44u: goto label_249a44;
        case 0x249a48u: goto label_249a48;
        case 0x249a4cu: goto label_249a4c;
        case 0x249a50u: goto label_249a50;
        case 0x249a54u: goto label_249a54;
        case 0x249a58u: goto label_249a58;
        case 0x249a5cu: goto label_249a5c;
        case 0x249a60u: goto label_249a60;
        case 0x249a64u: goto label_249a64;
        case 0x249a68u: goto label_249a68;
        case 0x249a6cu: goto label_249a6c;
        case 0x249a70u: goto label_249a70;
        case 0x249a74u: goto label_249a74;
        case 0x249a78u: goto label_249a78;
        case 0x249a7cu: goto label_249a7c;
        case 0x249a80u: goto label_249a80;
        case 0x249a84u: goto label_249a84;
        case 0x249a88u: goto label_249a88;
        case 0x249a8cu: goto label_249a8c;
        case 0x249a90u: goto label_249a90;
        case 0x249a94u: goto label_249a94;
        case 0x249a98u: goto label_249a98;
        case 0x249a9cu: goto label_249a9c;
        case 0x249aa0u: goto label_249aa0;
        case 0x249aa4u: goto label_249aa4;
        case 0x249aa8u: goto label_249aa8;
        case 0x249aacu: goto label_249aac;
        case 0x249ab0u: goto label_249ab0;
        case 0x249ab4u: goto label_249ab4;
        case 0x249ab8u: goto label_249ab8;
        case 0x249abcu: goto label_249abc;
        case 0x249ac0u: goto label_249ac0;
        case 0x249ac4u: goto label_249ac4;
        case 0x249ac8u: goto label_249ac8;
        case 0x249accu: goto label_249acc;
        case 0x249ad0u: goto label_249ad0;
        case 0x249ad4u: goto label_249ad4;
        case 0x249ad8u: goto label_249ad8;
        case 0x249adcu: goto label_249adc;
        case 0x249ae0u: goto label_249ae0;
        case 0x249ae4u: goto label_249ae4;
        case 0x249ae8u: goto label_249ae8;
        case 0x249aecu: goto label_249aec;
        case 0x249af0u: goto label_249af0;
        case 0x249af4u: goto label_249af4;
        case 0x249af8u: goto label_249af8;
        case 0x249afcu: goto label_249afc;
        case 0x249b00u: goto label_249b00;
        case 0x249b04u: goto label_249b04;
        case 0x249b08u: goto label_249b08;
        case 0x249b0cu: goto label_249b0c;
        case 0x249b10u: goto label_249b10;
        case 0x249b14u: goto label_249b14;
        case 0x249b18u: goto label_249b18;
        case 0x249b1cu: goto label_249b1c;
        case 0x249b20u: goto label_249b20;
        case 0x249b24u: goto label_249b24;
        case 0x249b28u: goto label_249b28;
        case 0x249b2cu: goto label_249b2c;
        case 0x249b30u: goto label_249b30;
        case 0x249b34u: goto label_249b34;
        case 0x249b38u: goto label_249b38;
        case 0x249b3cu: goto label_249b3c;
        case 0x249b40u: goto label_249b40;
        case 0x249b44u: goto label_249b44;
        case 0x249b48u: goto label_249b48;
        case 0x249b4cu: goto label_249b4c;
        case 0x249b50u: goto label_249b50;
        case 0x249b54u: goto label_249b54;
        case 0x249b58u: goto label_249b58;
        case 0x249b5cu: goto label_249b5c;
        case 0x249b60u: goto label_249b60;
        case 0x249b64u: goto label_249b64;
        case 0x249b68u: goto label_249b68;
        case 0x249b6cu: goto label_249b6c;
        case 0x249b70u: goto label_249b70;
        case 0x249b74u: goto label_249b74;
        case 0x249b78u: goto label_249b78;
        case 0x249b7cu: goto label_249b7c;
        case 0x249b80u: goto label_249b80;
        case 0x249b84u: goto label_249b84;
        case 0x249b88u: goto label_249b88;
        case 0x249b8cu: goto label_249b8c;
        case 0x249b90u: goto label_249b90;
        case 0x249b94u: goto label_249b94;
        case 0x249b98u: goto label_249b98;
        case 0x249b9cu: goto label_249b9c;
        case 0x249ba0u: goto label_249ba0;
        case 0x249ba4u: goto label_249ba4;
        case 0x249ba8u: goto label_249ba8;
        case 0x249bacu: goto label_249bac;
        case 0x249bb0u: goto label_249bb0;
        case 0x249bb4u: goto label_249bb4;
        case 0x249bb8u: goto label_249bb8;
        case 0x249bbcu: goto label_249bbc;
        case 0x249bc0u: goto label_249bc0;
        case 0x249bc4u: goto label_249bc4;
        case 0x249bc8u: goto label_249bc8;
        case 0x249bccu: goto label_249bcc;
        case 0x249bd0u: goto label_249bd0;
        case 0x249bd4u: goto label_249bd4;
        case 0x249bd8u: goto label_249bd8;
        case 0x249bdcu: goto label_249bdc;
        case 0x249be0u: goto label_249be0;
        case 0x249be4u: goto label_249be4;
        case 0x249be8u: goto label_249be8;
        case 0x249becu: goto label_249bec;
        case 0x249bf0u: goto label_249bf0;
        case 0x249bf4u: goto label_249bf4;
        case 0x249bf8u: goto label_249bf8;
        case 0x249bfcu: goto label_249bfc;
        case 0x249c00u: goto label_249c00;
        case 0x249c04u: goto label_249c04;
        case 0x249c08u: goto label_249c08;
        case 0x249c0cu: goto label_249c0c;
        case 0x249c10u: goto label_249c10;
        case 0x249c14u: goto label_249c14;
        case 0x249c18u: goto label_249c18;
        case 0x249c1cu: goto label_249c1c;
        case 0x249c20u: goto label_249c20;
        case 0x249c24u: goto label_249c24;
        case 0x249c28u: goto label_249c28;
        case 0x249c2cu: goto label_249c2c;
        case 0x249c30u: goto label_249c30;
        case 0x249c34u: goto label_249c34;
        case 0x249c38u: goto label_249c38;
        case 0x249c3cu: goto label_249c3c;
        case 0x249c40u: goto label_249c40;
        case 0x249c44u: goto label_249c44;
        case 0x249c48u: goto label_249c48;
        case 0x249c4cu: goto label_249c4c;
        case 0x249c50u: goto label_249c50;
        case 0x249c54u: goto label_249c54;
        case 0x249c58u: goto label_249c58;
        case 0x249c5cu: goto label_249c5c;
        case 0x249c60u: goto label_249c60;
        case 0x249c64u: goto label_249c64;
        case 0x249c68u: goto label_249c68;
        case 0x249c6cu: goto label_249c6c;
        case 0x249c70u: goto label_249c70;
        case 0x249c74u: goto label_249c74;
        case 0x249c78u: goto label_249c78;
        case 0x249c7cu: goto label_249c7c;
        case 0x249c80u: goto label_249c80;
        case 0x249c84u: goto label_249c84;
        case 0x249c88u: goto label_249c88;
        case 0x249c8cu: goto label_249c8c;
        case 0x249c90u: goto label_249c90;
        case 0x249c94u: goto label_249c94;
        case 0x249c98u: goto label_249c98;
        case 0x249c9cu: goto label_249c9c;
        case 0x249ca0u: goto label_249ca0;
        case 0x249ca4u: goto label_249ca4;
        case 0x249ca8u: goto label_249ca8;
        case 0x249cacu: goto label_249cac;
        case 0x249cb0u: goto label_249cb0;
        case 0x249cb4u: goto label_249cb4;
        case 0x249cb8u: goto label_249cb8;
        case 0x249cbcu: goto label_249cbc;
        case 0x249cc0u: goto label_249cc0;
        case 0x249cc4u: goto label_249cc4;
        case 0x249cc8u: goto label_249cc8;
        case 0x249cccu: goto label_249ccc;
        case 0x249cd0u: goto label_249cd0;
        case 0x249cd4u: goto label_249cd4;
        case 0x249cd8u: goto label_249cd8;
        case 0x249cdcu: goto label_249cdc;
        case 0x249ce0u: goto label_249ce0;
        case 0x249ce4u: goto label_249ce4;
        case 0x249ce8u: goto label_249ce8;
        case 0x249cecu: goto label_249cec;
        case 0x249cf0u: goto label_249cf0;
        case 0x249cf4u: goto label_249cf4;
        case 0x249cf8u: goto label_249cf8;
        case 0x249cfcu: goto label_249cfc;
        case 0x249d00u: goto label_249d00;
        case 0x249d04u: goto label_249d04;
        case 0x249d08u: goto label_249d08;
        case 0x249d0cu: goto label_249d0c;
        case 0x249d10u: goto label_249d10;
        case 0x249d14u: goto label_249d14;
        case 0x249d18u: goto label_249d18;
        case 0x249d1cu: goto label_249d1c;
        case 0x249d20u: goto label_249d20;
        case 0x249d24u: goto label_249d24;
        case 0x249d28u: goto label_249d28;
        case 0x249d2cu: goto label_249d2c;
        case 0x249d30u: goto label_249d30;
        case 0x249d34u: goto label_249d34;
        case 0x249d38u: goto label_249d38;
        case 0x249d3cu: goto label_249d3c;
        case 0x249d40u: goto label_249d40;
        case 0x249d44u: goto label_249d44;
        case 0x249d48u: goto label_249d48;
        case 0x249d4cu: goto label_249d4c;
        case 0x249d50u: goto label_249d50;
        case 0x249d54u: goto label_249d54;
        case 0x249d58u: goto label_249d58;
        case 0x249d5cu: goto label_249d5c;
        case 0x249d60u: goto label_249d60;
        case 0x249d64u: goto label_249d64;
        case 0x249d68u: goto label_249d68;
        case 0x249d6cu: goto label_249d6c;
        case 0x249d70u: goto label_249d70;
        case 0x249d74u: goto label_249d74;
        case 0x249d78u: goto label_249d78;
        case 0x249d7cu: goto label_249d7c;
        case 0x249d80u: goto label_249d80;
        case 0x249d84u: goto label_249d84;
        case 0x249d88u: goto label_249d88;
        case 0x249d8cu: goto label_249d8c;
        case 0x249d90u: goto label_249d90;
        case 0x249d94u: goto label_249d94;
        case 0x249d98u: goto label_249d98;
        case 0x249d9cu: goto label_249d9c;
        case 0x249da0u: goto label_249da0;
        case 0x249da4u: goto label_249da4;
        case 0x249da8u: goto label_249da8;
        case 0x249dacu: goto label_249dac;
        case 0x249db0u: goto label_249db0;
        case 0x249db4u: goto label_249db4;
        case 0x249db8u: goto label_249db8;
        case 0x249dbcu: goto label_249dbc;
        case 0x249dc0u: goto label_249dc0;
        case 0x249dc4u: goto label_249dc4;
        case 0x249dc8u: goto label_249dc8;
        case 0x249dccu: goto label_249dcc;
        case 0x249dd0u: goto label_249dd0;
        case 0x249dd4u: goto label_249dd4;
        case 0x249dd8u: goto label_249dd8;
        case 0x249ddcu: goto label_249ddc;
        default: return;
    }

label_249610:
    // 0x249610: 0x24427200  addiu       $v0, $v0, 0x7200
    ctx->pc = 0x249610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29184));
label_249614:
    // 0x249614: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x249614u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
label_249618:
    // 0x249618: 0x2e820080  sltiu       $v0, $s4, 0x80
    ctx->pc = 0x249618u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
label_24961c:
    // 0x24961c: 0x1440ffcd  bnez        $v0, . + 4 + (-0x33 << 2)
label_249620:
    if (ctx->pc == 0x249620u) {
        ctx->pc = 0x249620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24961Cu;
        // 0x249620: 0x26b500d0  addiu       $s5, $s5, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249624u;
        goto label_249624;
    }
    ctx->pc = 0x24961Cu;
    {
        const bool branch_taken_0x24961c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x249620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24961Cu;
        // 0x249620: 0x26b500d0  addiu       $s5, $s5, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24961c) {
            ctx->pc = 0x249554u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x249554; return; }
        }
    }
    ctx->pc = 0x249624u;
label_249624:
    // 0x249624: 0x11082a  slt         $at, $zero, $s1
    ctx->pc = 0x249624u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_249628:
    // 0x249628: 0x10200024  beqz        $at, . + 4 + (0x24 << 2)
label_24962c:
    if (ctx->pc == 0x24962Cu) {
        ctx->pc = 0x24962Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249628u;
        // 0x24962c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249630u;
        goto label_249630;
    }
    ctx->pc = 0x249628u;
    {
        const bool branch_taken_0x249628 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x24962Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249628u;
        // 0x24962c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249628) {
            ctx->pc = 0x2496BCu;
            goto label_2496bc;
        }
    }
    ctx->pc = 0x249630u;
label_249630:
    // 0x249630: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x249630u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_249634:
    // 0x249634: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x249634u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_249638:
    // 0x249638: 0x2053021  addu        $a2, $s0, $a1
    ctx->pc = 0x249638u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
label_24963c:
    // 0x24963c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x24963cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_249640:
    // 0x249640: 0xa0c00080  sb          $zero, 0x80($a2)
    ctx->pc = 0x249640u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 128), (uint8_t)GPR_U32(ctx, 0));
label_249644:
    // 0x249644: 0xf1102a  slt         $v0, $a3, $s1
    ctx->pc = 0x249644u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_249648:
    // 0x249648: 0xa0c00081  sb          $zero, 0x81($a2)
    ctx->pc = 0x249648u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 129), (uint8_t)GPR_U32(ctx, 0));
label_24964c:
    // 0x24964c: 0x24a500d0  addiu       $a1, $a1, 0xD0
    ctx->pc = 0x24964cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 208));
label_249650:
    // 0x249650: 0xa0c00082  sb          $zero, 0x82($a2)
    ctx->pc = 0x249650u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 130), (uint8_t)GPR_U32(ctx, 0));
label_249654:
    // 0x249654: 0x8f8392fc  lw          $v1, -0x6D04($gp)
    ctx->pc = 0x249654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
label_249658:
    // 0x249658: 0x9063001c  lbu         $v1, 0x1C($v1)
    ctx->pc = 0x249658u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 28)));
label_24965c:
    // 0x24965c: 0xa0c30083  sb          $v1, 0x83($a2)
    ctx->pc = 0x24965cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 131), (uint8_t)GPR_U32(ctx, 3));
label_249660:
    // 0x249660: 0xacc40084  sw          $a0, 0x84($a2)
    ctx->pc = 0x249660u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 132), GPR_U32(ctx, 4));
label_249664:
    // 0x249664: 0xa0c00098  sb          $zero, 0x98($a2)
    ctx->pc = 0x249664u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 152), (uint8_t)GPR_U32(ctx, 0));
label_249668:
    // 0x249668: 0xa0c00099  sb          $zero, 0x99($a2)
    ctx->pc = 0x249668u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 153), (uint8_t)GPR_U32(ctx, 0));
label_24966c:
    // 0x24966c: 0xa0c0009a  sb          $zero, 0x9A($a2)
    ctx->pc = 0x24966cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 154), (uint8_t)GPR_U32(ctx, 0));
label_249670:
    // 0x249670: 0x8f8392fc  lw          $v1, -0x6D04($gp)
    ctx->pc = 0x249670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
label_249674:
    // 0x249674: 0x9063001c  lbu         $v1, 0x1C($v1)
    ctx->pc = 0x249674u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 28)));
label_249678:
    // 0x249678: 0xa0c3009b  sb          $v1, 0x9B($a2)
    ctx->pc = 0x249678u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 155), (uint8_t)GPR_U32(ctx, 3));
label_24967c:
    // 0x24967c: 0xacc4009c  sw          $a0, 0x9C($a2)
    ctx->pc = 0x24967cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 156), GPR_U32(ctx, 4));
label_249680:
    // 0x249680: 0xa0c000b0  sb          $zero, 0xB0($a2)
    ctx->pc = 0x249680u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 176), (uint8_t)GPR_U32(ctx, 0));
label_249684:
    // 0x249684: 0xa0c000b1  sb          $zero, 0xB1($a2)
    ctx->pc = 0x249684u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 177), (uint8_t)GPR_U32(ctx, 0));
label_249688:
    // 0x249688: 0xa0c000b2  sb          $zero, 0xB2($a2)
    ctx->pc = 0x249688u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 178), (uint8_t)GPR_U32(ctx, 0));
label_24968c:
    // 0x24968c: 0x8f8392fc  lw          $v1, -0x6D04($gp)
    ctx->pc = 0x24968cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
label_249690:
    // 0x249690: 0x9063001c  lbu         $v1, 0x1C($v1)
    ctx->pc = 0x249690u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 28)));
label_249694:
    // 0x249694: 0xa0c300b3  sb          $v1, 0xB3($a2)
    ctx->pc = 0x249694u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 179), (uint8_t)GPR_U32(ctx, 3));
label_249698:
    // 0x249698: 0xacc400b4  sw          $a0, 0xB4($a2)
    ctx->pc = 0x249698u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 180), GPR_U32(ctx, 4));
label_24969c:
    // 0x24969c: 0xa0c000c8  sb          $zero, 0xC8($a2)
    ctx->pc = 0x24969cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 200), (uint8_t)GPR_U32(ctx, 0));
label_2496a0:
    // 0x2496a0: 0xa0c000c9  sb          $zero, 0xC9($a2)
    ctx->pc = 0x2496a0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 201), (uint8_t)GPR_U32(ctx, 0));
label_2496a4:
    // 0x2496a4: 0xa0c000ca  sb          $zero, 0xCA($a2)
    ctx->pc = 0x2496a4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 202), (uint8_t)GPR_U32(ctx, 0));
label_2496a8:
    // 0x2496a8: 0x8f8392fc  lw          $v1, -0x6D04($gp)
    ctx->pc = 0x2496a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
label_2496ac:
    // 0x2496ac: 0x9063001c  lbu         $v1, 0x1C($v1)
    ctx->pc = 0x2496acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 28)));
label_2496b0:
    // 0x2496b0: 0xa0c300cb  sb          $v1, 0xCB($a2)
    ctx->pc = 0x2496b0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 203), (uint8_t)GPR_U32(ctx, 3));
label_2496b4:
    // 0x2496b4: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
label_2496b8:
    if (ctx->pc == 0x2496B8u) {
        ctx->pc = 0x2496B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2496B4u;
        // 0x2496b8: 0xacc400cc  sw          $a0, 0xCC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 204), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2496BCu;
        goto label_2496bc;
    }
    ctx->pc = 0x2496B4u;
    {
        const bool branch_taken_0x2496b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2496B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2496B4u;
        // 0x2496b8: 0xacc400cc  sw          $a0, 0xCC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 204), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2496b4) {
            ctx->pc = 0x249638u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_249638;
        }
    }
    ctx->pc = 0x2496BCu;
label_2496bc:
    // 0x2496bc: 0x0  nop
    ctx->pc = 0x2496bcu;
    // NOP
label_2496c0:
    // 0x2496c0: 0x2648fffe  addiu       $t0, $s2, -0x2
    ctx->pc = 0x2496c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967294));
label_2496c4:
    // 0x2496c4: 0x26690002  addiu       $t1, $s3, 0x2
    ctx->pc = 0x2496c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
label_2496c8:
    // 0x2496c8: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x2496c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2496cc:
    // 0x2496cc: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x2496ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_2496d0:
    // 0x2496d0: 0x24060260  addiu       $a2, $zero, 0x260
    ctx->pc = 0x2496d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
label_2496d4:
    // 0x2496d4: 0x24070030  addiu       $a3, $zero, 0x30
    ctx->pc = 0x2496d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_2496d8:
    // 0x2496d8: 0xc054e5c  jal         func_153970
label_2496dc:
    if (ctx->pc == 0x2496DCu) {
        ctx->pc = 0x2496DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2496D8u;
        // 0x2496dc: 0x240a0064  addiu       $t2, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2496E0u;
        goto label_2496e0;
    }
    ctx->pc = 0x2496D8u;
    SET_GPR_U32(ctx, 31, 0x2496E0u);
    ctx->pc = 0x2496DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2496D8u;
    // 0x2496dc: 0x240a0064  addiu       $t2, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153970u, 0x2496D8u, 0x2496E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2496E0u;
label_2496e0:
    // 0x2496e0: 0x8f8292fc  lw          $v0, -0x6D04($gp)
    ctx->pc = 0x2496e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
label_2496e4:
    // 0x2496e4: 0x3403d010  ori         $v1, $zero, 0xD010
    ctx->pc = 0x2496e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)53264);
label_2496e8:
    // 0x2496e8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2496e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2496ec:
    // 0x2496ec: 0x2032021  addu        $a0, $s0, $v1
    ctx->pc = 0x2496ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_2496f0:
    // 0x2496f0: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x2496f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_2496f4:
    // 0x2496f4: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2496f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2496f8:
    // 0x2496f8: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x2496f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_2496fc:
    // 0x2496fc: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x2496fcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_249700:
    // 0x249700: 0xc054e74  jal         func_1539D0
label_249704:
    if (ctx->pc == 0x249704u) {
        ctx->pc = 0x249704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249700u;
        // 0x249704: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249708u;
        goto label_249708;
    }
    ctx->pc = 0x249700u;
    SET_GPR_U32(ctx, 31, 0x249708u);
    ctx->pc = 0x249704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249700u;
    // 0x249704: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1539D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1539D0u, 0x249700u, 0x249708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249708u;
label_249708:
    // 0x249708: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x249708u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24970c:
    // 0x24970c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x24970cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_249710:
    // 0x249710: 0x3401d010  ori         $at, $zero, 0xD010
    ctx->pc = 0x249710u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)53264);
label_249714:
    // 0x249714: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x249714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_249718:
    // 0x249718: 0x2011021  addu        $v0, $s0, $at
    ctx->pc = 0x249718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
label_24971c:
    // 0x24971c: 0x551821  addu        $v1, $v0, $s5
    ctx->pc = 0x24971cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_249720:
    // 0x249720: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x249720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_249724:
    // 0x249724: 0x24640020  addiu       $a0, $v1, 0x20
    ctx->pc = 0x249724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_249728:
    // 0x249728: 0xc05e210  jal         func_178840
label_24972c:
    if (ctx->pc == 0x24972Cu) {
        ctx->pc = 0x24972Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249728u;
        // 0x24972c: 0x3446000d  ori         $a2, $v0, 0xD (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13);
        ctx->in_delay_slot = false;
        ctx->pc = 0x249730u;
        goto label_249730;
    }
    ctx->pc = 0x249728u;
    SET_GPR_U32(ctx, 31, 0x249730u);
    ctx->pc = 0x24972Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249728u;
    // 0x24972c: 0x3446000d  ori         $a2, $v0, 0xD (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13);
    ctx->in_delay_slot = false;
    ctx->pc = 0x178840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178840u, 0x249728u, 0x249730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249730u;
label_249730:
    // 0x249730: 0x2151021  addu        $v0, $s0, $s5
    ctx->pc = 0x249730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
label_249734:
    // 0x249734: 0x3401d092  ori         $at, $zero, 0xD092
    ctx->pc = 0x249734u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)53394);
label_249738:
    // 0x249738: 0x412821  addu        $a1, $v0, $at
    ctx->pc = 0x249738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_24973c:
    // 0x24973c: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x24973cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_249740:
    // 0x249740: 0x24648700  addiu       $a0, $v1, -0x7900
    ctx->pc = 0x249740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936320));
label_249744:
    // 0x249744: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
label_249748:
    if (ctx->pc == 0x249748u) {
        ctx->pc = 0x249748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249744u;
        // 0x249748: 0x418c3  sra         $v1, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24974Cu;
        goto label_24974c;
    }
    ctx->pc = 0x249744u;
    {
        const bool branch_taken_0x249744 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x249748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249744u;
        // 0x249748: 0x418c3  sra         $v1, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249744) {
            ctx->pc = 0x249754u;
            goto label_249754;
        }
    }
    ctx->pc = 0x24974Cu;
label_24974c:
    // 0x24974c: 0x24830007  addiu       $v1, $a0, 0x7
    ctx->pc = 0x24974cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 7));
label_249750:
    // 0x249750: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x249750u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
label_249754:
    // 0x249754: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x249754u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_249758:
    // 0x249758: 0x3401d0aa  ori         $at, $zero, 0xD0AA
    ctx->pc = 0x249758u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)53418);
label_24975c:
    // 0x24975c: 0x24637200  addiu       $v1, $v1, 0x7200
    ctx->pc = 0x24975cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29184));
label_249760:
    // 0x249760: 0x413021  addu        $a2, $v0, $at
    ctx->pc = 0x249760u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_249764:
    // 0x249764: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x249764u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
label_249768:
    // 0x249768: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x249768u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_24976c:
    // 0x24976c: 0x24648700  addiu       $a0, $v1, -0x7900
    ctx->pc = 0x24976cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936320));
label_249770:
    // 0x249770: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
label_249774:
    if (ctx->pc == 0x249774u) {
        ctx->pc = 0x249774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249770u;
        // 0x249774: 0x418c3  sra         $v1, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249778u;
        goto label_249778;
    }
    ctx->pc = 0x249770u;
    {
        const bool branch_taken_0x249770 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x249774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249770u;
        // 0x249774: 0x418c3  sra         $v1, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249770) {
            ctx->pc = 0x249780u;
            goto label_249780;
        }
    }
    ctx->pc = 0x249778u;
label_249778:
    // 0x249778: 0x24830007  addiu       $v1, $a0, 0x7
    ctx->pc = 0x249778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 7));
label_24977c:
    // 0x24977c: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x24977cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
label_249780:
    // 0x249780: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x249780u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_249784:
    // 0x249784: 0x3401d0c2  ori         $at, $zero, 0xD0C2
    ctx->pc = 0x249784u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)53442);
label_249788:
    // 0x249788: 0x24637200  addiu       $v1, $v1, 0x7200
    ctx->pc = 0x249788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29184));
label_24978c:
    // 0x24978c: 0x412821  addu        $a1, $v0, $at
    ctx->pc = 0x24978cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_249790:
    // 0x249790: 0xa4c30000  sh          $v1, 0x0($a2)
    ctx->pc = 0x249790u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 3));
label_249794:
    // 0x249794: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x249794u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_249798:
    // 0x249798: 0x24648700  addiu       $a0, $v1, -0x7900
    ctx->pc = 0x249798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936320));
label_24979c:
    // 0x24979c: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
label_2497a0:
    if (ctx->pc == 0x2497A0u) {
        ctx->pc = 0x2497A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24979Cu;
        // 0x2497a0: 0x418c3  sra         $v1, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2497A4u;
        goto label_2497a4;
    }
    ctx->pc = 0x24979Cu;
    {
        const bool branch_taken_0x24979c = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x2497A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24979Cu;
        // 0x2497a0: 0x418c3  sra         $v1, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24979c) {
            ctx->pc = 0x2497ACu;
            goto label_2497ac;
        }
    }
    ctx->pc = 0x2497A4u;
label_2497a4:
    // 0x2497a4: 0x24830007  addiu       $v1, $a0, 0x7
    ctx->pc = 0x2497a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 7));
label_2497a8:
    // 0x2497a8: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x2497a8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
label_2497ac:
    // 0x2497ac: 0x3401d0da  ori         $at, $zero, 0xD0DA
    ctx->pc = 0x2497acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)53466);
label_2497b0:
    // 0x2497b0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2497b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_2497b4:
    // 0x2497b4: 0x412021  addu        $a0, $v0, $at
    ctx->pc = 0x2497b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_2497b8:
    // 0x2497b8: 0x24627200  addiu       $v0, $v1, 0x7200
    ctx->pc = 0x2497b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 29184));
label_2497bc:
    // 0x2497bc: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x2497bcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
label_2497c0:
    // 0x2497c0: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x2497c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_2497c4:
    // 0x2497c4: 0x24438700  addiu       $v1, $v0, -0x7900
    ctx->pc = 0x2497c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936320));
label_2497c8:
    // 0x2497c8: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_2497cc:
    if (ctx->pc == 0x2497CCu) {
        ctx->pc = 0x2497CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2497C8u;
        // 0x2497cc: 0x310c3  sra         $v0, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2497D0u;
        goto label_2497d0;
    }
    ctx->pc = 0x2497C8u;
    {
        const bool branch_taken_0x2497c8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x2497CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2497C8u;
        // 0x2497cc: 0x310c3  sra         $v0, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2497c8) {
            ctx->pc = 0x2497D8u;
            goto label_2497d8;
        }
    }
    ctx->pc = 0x2497D0u;
label_2497d0:
    // 0x2497d0: 0x24620007  addiu       $v0, $v1, 0x7
    ctx->pc = 0x2497d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
label_2497d4:
    // 0x2497d4: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x2497d4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
label_2497d8:
    // 0x2497d8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2497d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_2497dc:
    // 0x2497dc: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2497dcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_2497e0:
    // 0x2497e0: 0x24427200  addiu       $v0, $v0, 0x7200
    ctx->pc = 0x2497e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29184));
label_2497e4:
    // 0x2497e4: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x2497e4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
label_2497e8:
    // 0x2497e8: 0x2e820080  sltiu       $v0, $s4, 0x80
    ctx->pc = 0x2497e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
label_2497ec:
    // 0x2497ec: 0x1440ffc8  bnez        $v0, . + 4 + (-0x38 << 2)
label_2497f0:
    if (ctx->pc == 0x2497F0u) {
        ctx->pc = 0x2497F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2497ECu;
        // 0x2497f0: 0x26b500d0  addiu       $s5, $s5, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2497F4u;
        goto label_2497f4;
    }
    ctx->pc = 0x2497ECu;
    {
        const bool branch_taken_0x2497ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2497F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2497ECu;
        // 0x2497f0: 0x26b500d0  addiu       $s5, $s5, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2497ec) {
            ctx->pc = 0x249710u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_249710;
        }
    }
    ctx->pc = 0x2497F4u;
label_2497f4:
    // 0x2497f4: 0x11082a  slt         $at, $zero, $s1
    ctx->pc = 0x2497f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_2497f8:
    // 0x2497f8: 0x1020004c  beqz        $at, . + 4 + (0x4C << 2)
label_2497fc:
    if (ctx->pc == 0x2497FCu) {
        ctx->pc = 0x2497FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2497F8u;
        // 0x2497fc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249800u;
        goto label_249800;
    }
    ctx->pc = 0x2497F8u;
    {
        const bool branch_taken_0x2497f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2497FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2497F8u;
        // 0x2497fc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2497f8) {
            ctx->pc = 0x24992Cu;
            goto label_24992c;
        }
    }
    ctx->pc = 0x249800u;
label_249800:
    // 0x249800: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x249800u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_249804:
    // 0x249804: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x249804u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_249808:
    // 0x249808: 0x2053021  addu        $a2, $s0, $a1
    ctx->pc = 0x249808u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
label_24980c:
    // 0x24980c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x24980cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_249810:
    // 0x249810: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x249810u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
label_249814:
    // 0x249814: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x249814u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_249818:
    // 0x249818: 0xa020d080  sb          $zero, -0x2F80($at)
    ctx->pc = 0x249818u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294955136), (uint8_t)GPR_U32(ctx, 0));
label_24981c:
    // 0x24981c: 0xf1102a  slt         $v0, $a3, $s1
    ctx->pc = 0x24981cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_249820:
    // 0x249820: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x249820u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_249824:
    // 0x249824: 0x24a500d0  addiu       $a1, $a1, 0xD0
    ctx->pc = 0x249824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 208));
label_249828:
    // 0x249828: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x249828u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
label_24982c:
    // 0x24982c: 0xa020d081  sb          $zero, -0x2F7F($at)
    ctx->pc = 0x24982cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294955137), (uint8_t)GPR_U32(ctx, 0));
label_249830:
    // 0x249830: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x249830u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_249834:
    // 0x249834: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x249834u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
label_249838:
    // 0x249838: 0xa020d082  sb          $zero, -0x2F7E($at)
    ctx->pc = 0x249838u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294955138), (uint8_t)GPR_U32(ctx, 0));
label_24983c:
    // 0x24983c: 0x8f8392fc  lw          $v1, -0x6D04($gp)
    ctx->pc = 0x24983cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
label_249840:
    // 0x249840: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x249840u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_249844:
    // 0x249844: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x249844u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
label_249848:
    // 0x249848: 0x9063001c  lbu         $v1, 0x1C($v1)
    ctx->pc = 0x249848u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 28)));
label_24984c:
    // 0x24984c: 0xa023d083  sb          $v1, -0x2F7D($at)
    ctx->pc = 0x24984cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294955139), (uint8_t)GPR_U32(ctx, 3));
label_249850:
    // 0x249850: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x249850u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_249854:
    // 0x249854: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x249854u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
label_249858:
    // 0x249858: 0xac24d084  sw          $a0, -0x2F7C($at)
    ctx->pc = 0x249858u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294955140), GPR_U32(ctx, 4));
label_24985c:
    // 0x24985c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x24985cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_249860:
    // 0x249860: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x249860u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
label_249864:
    // 0x249864: 0xa020d098  sb          $zero, -0x2F68($at)
    ctx->pc = 0x249864u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294955160), (uint8_t)GPR_U32(ctx, 0));
label_249868:
    // 0x249868: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x249868u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_24986c:
    // 0x24986c: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x24986cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
label_249870:
    // 0x249870: 0xa020d099  sb          $zero, -0x2F67($at)
    ctx->pc = 0x249870u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294955161), (uint8_t)GPR_U32(ctx, 0));
label_249874:
    // 0x249874: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x249874u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_249878:
    // 0x249878: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x249878u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
label_24987c:
    // 0x24987c: 0xa020d09a  sb          $zero, -0x2F66($at)
    ctx->pc = 0x24987cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294955162), (uint8_t)GPR_U32(ctx, 0));
label_249880:
    // 0x249880: 0x8f8392fc  lw          $v1, -0x6D04($gp)
    ctx->pc = 0x249880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
label_249884:
    // 0x249884: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x249884u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_249888:
    // 0x249888: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x249888u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
label_24988c:
    // 0x24988c: 0x9063001c  lbu         $v1, 0x1C($v1)
    ctx->pc = 0x24988cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 28)));
label_249890:
    // 0x249890: 0xa023d09b  sb          $v1, -0x2F65($at)
    ctx->pc = 0x249890u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294955163), (uint8_t)GPR_U32(ctx, 3));
label_249894:
    // 0x249894: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x249894u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_249898:
    // 0x249898: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x249898u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
label_24989c:
    // 0x24989c: 0xac24d09c  sw          $a0, -0x2F64($at)
    ctx->pc = 0x24989cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294955164), GPR_U32(ctx, 4));
label_2498a0:
    // 0x2498a0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2498a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_2498a4:
    // 0x2498a4: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x2498a4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
label_2498a8:
    // 0x2498a8: 0xa020d0b0  sb          $zero, -0x2F50($at)
    ctx->pc = 0x2498a8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294955184), (uint8_t)GPR_U32(ctx, 0));
label_2498ac:
    // 0x2498ac: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2498acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_2498b0:
    // 0x2498b0: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x2498b0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
label_2498b4:
    // 0x2498b4: 0xa020d0b1  sb          $zero, -0x2F4F($at)
    ctx->pc = 0x2498b4u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294955185), (uint8_t)GPR_U32(ctx, 0));
label_2498b8:
    // 0x2498b8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2498b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_2498bc:
    // 0x2498bc: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x2498bcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
label_2498c0:
    // 0x2498c0: 0xa020d0b2  sb          $zero, -0x2F4E($at)
    ctx->pc = 0x2498c0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294955186), (uint8_t)GPR_U32(ctx, 0));
label_2498c4:
    // 0x2498c4: 0x8f8392fc  lw          $v1, -0x6D04($gp)
    ctx->pc = 0x2498c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
label_2498c8:
    // 0x2498c8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2498c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_2498cc:
    // 0x2498cc: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x2498ccu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
label_2498d0:
    // 0x2498d0: 0x9063001c  lbu         $v1, 0x1C($v1)
    ctx->pc = 0x2498d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 28)));
label_2498d4:
    // 0x2498d4: 0xa023d0b3  sb          $v1, -0x2F4D($at)
    ctx->pc = 0x2498d4u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294955187), (uint8_t)GPR_U32(ctx, 3));
label_2498d8:
    // 0x2498d8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2498d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_2498dc:
    // 0x2498dc: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x2498dcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
label_2498e0:
    // 0x2498e0: 0xac24d0b4  sw          $a0, -0x2F4C($at)
    ctx->pc = 0x2498e0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294955188), GPR_U32(ctx, 4));
label_2498e4:
    // 0x2498e4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2498e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_2498e8:
    // 0x2498e8: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x2498e8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
label_2498ec:
    // 0x2498ec: 0xa020d0c8  sb          $zero, -0x2F38($at)
    ctx->pc = 0x2498ecu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294955208), (uint8_t)GPR_U32(ctx, 0));
label_2498f0:
    // 0x2498f0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2498f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_2498f4:
    // 0x2498f4: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x2498f4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
label_2498f8:
    // 0x2498f8: 0xa020d0c9  sb          $zero, -0x2F37($at)
    ctx->pc = 0x2498f8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294955209), (uint8_t)GPR_U32(ctx, 0));
label_2498fc:
    // 0x2498fc: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2498fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_249900:
    // 0x249900: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x249900u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
label_249904:
    // 0x249904: 0xa020d0ca  sb          $zero, -0x2F36($at)
    ctx->pc = 0x249904u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294955210), (uint8_t)GPR_U32(ctx, 0));
label_249908:
    // 0x249908: 0x8f8392fc  lw          $v1, -0x6D04($gp)
    ctx->pc = 0x249908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
label_24990c:
    // 0x24990c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x24990cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_249910:
    // 0x249910: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x249910u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
label_249914:
    // 0x249914: 0x9063001c  lbu         $v1, 0x1C($v1)
    ctx->pc = 0x249914u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 28)));
label_249918:
    // 0x249918: 0xa023d0cb  sb          $v1, -0x2F35($at)
    ctx->pc = 0x249918u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294955211), (uint8_t)GPR_U32(ctx, 3));
label_24991c:
    // 0x24991c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x24991cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_249920:
    // 0x249920: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x249920u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
label_249924:
    // 0x249924: 0x1440ffb8  bnez        $v0, . + 4 + (-0x48 << 2)
label_249928:
    if (ctx->pc == 0x249928u) {
        ctx->pc = 0x249928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249924u;
        // 0x249928: 0xac24d0cc  sw          $a0, -0x2F34($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294955212), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24992Cu;
        goto label_24992c;
    }
    ctx->pc = 0x249924u;
    {
        const bool branch_taken_0x249924 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x249928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249924u;
        // 0x249928: 0xac24d0cc  sw          $a0, -0x2F34($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294955212), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249924) {
            ctx->pc = 0x249808u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_249808;
        }
    }
    ctx->pc = 0x24992Cu;
label_24992c:
    // 0x24992c: 0x0  nop
    ctx->pc = 0x24992cu;
    // NOP
label_249930:
    // 0x249930: 0x26480002  addiu       $t0, $s2, 0x2
    ctx->pc = 0x249930u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
label_249934:
    // 0x249934: 0x2669fffe  addiu       $t1, $s3, -0x2
    ctx->pc = 0x249934u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967294));
label_249938:
    // 0x249938: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x249938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_24993c:
    // 0x24993c: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x24993cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_249940:
    // 0x249940: 0x24060260  addiu       $a2, $zero, 0x260
    ctx->pc = 0x249940u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
label_249944:
    // 0x249944: 0x24070030  addiu       $a3, $zero, 0x30
    ctx->pc = 0x249944u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_249948:
    // 0x249948: 0xc054e5c  jal         func_153970
label_24994c:
    if (ctx->pc == 0x24994Cu) {
        ctx->pc = 0x24994Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249948u;
        // 0x24994c: 0x240a0064  addiu       $t2, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249950u;
        goto label_249950;
    }
    ctx->pc = 0x249948u;
    SET_GPR_U32(ctx, 31, 0x249950u);
    ctx->pc = 0x24994Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249948u;
    // 0x24994c: 0x240a0064  addiu       $t2, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153970u, 0x249948u, 0x249950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249950u;
label_249950:
    // 0x249950: 0x8f8292fc  lw          $v0, -0x6D04($gp)
    ctx->pc = 0x249950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
label_249954:
    // 0x249954: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x249954u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_249958:
    // 0x249958: 0x34633810  ori         $v1, $v1, 0x3810
    ctx->pc = 0x249958u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)14352);
label_24995c:
    // 0x24995c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x24995cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_249960:
    // 0x249960: 0x2032021  addu        $a0, $s0, $v1
    ctx->pc = 0x249960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_249964:
    // 0x249964: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x249964u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_249968:
    // 0x249968: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x249968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_24996c:
    // 0x24996c: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x24996cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_249970:
    // 0x249970: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x249970u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_249974:
    // 0x249974: 0xc054e74  jal         func_1539D0
label_249978:
    if (ctx->pc == 0x249978u) {
        ctx->pc = 0x249978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249974u;
        // 0x249978: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24997Cu;
        goto label_24997c;
    }
    ctx->pc = 0x249974u;
    SET_GPR_U32(ctx, 31, 0x24997Cu);
    ctx->pc = 0x249978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249974u;
    // 0x249978: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1539D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1539D0u, 0x249974u, 0x24997Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24997Cu;
label_24997c:
    // 0x24997c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x24997cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_249980:
    // 0x249980: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x249980u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_249984:
    // 0x249984: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x249984u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_249988:
    // 0x249988: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x249988u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_24998c:
    // 0x24998c: 0x34213810  ori         $at, $at, 0x3810
    ctx->pc = 0x24998cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14352);
label_249990:
    // 0x249990: 0x2011021  addu        $v0, $s0, $at
    ctx->pc = 0x249990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
label_249994:
    // 0x249994: 0x531821  addu        $v1, $v0, $s3
    ctx->pc = 0x249994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_249998:
    // 0x249998: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x249998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_24999c:
    // 0x24999c: 0x24640020  addiu       $a0, $v1, 0x20
    ctx->pc = 0x24999cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_2499a0:
    // 0x2499a0: 0xc05e210  jal         func_178840
label_2499a4:
    if (ctx->pc == 0x2499A4u) {
        ctx->pc = 0x2499A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2499A0u;
        // 0x2499a4: 0x3446000d  ori         $a2, $v0, 0xD (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2499A8u;
        goto label_2499a8;
    }
    ctx->pc = 0x2499A0u;
    SET_GPR_U32(ctx, 31, 0x2499A8u);
    ctx->pc = 0x2499A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2499A0u;
    // 0x2499a4: 0x3446000d  ori         $a2, $v0, 0xD (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13);
    ctx->in_delay_slot = false;
    ctx->pc = 0x178840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178840u, 0x2499A0u, 0x2499A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2499A8u;
label_2499a8:
    // 0x2499a8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2499a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_2499ac:
    // 0x2499ac: 0x2131821  addu        $v1, $s0, $s3
    ctx->pc = 0x2499acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
label_2499b0:
    // 0x2499b0: 0x34213892  ori         $at, $at, 0x3892
    ctx->pc = 0x2499b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14482);
label_2499b4:
    // 0x2499b4: 0x613021  addu        $a2, $v1, $at
    ctx->pc = 0x2499b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_2499b8:
    // 0x2499b8: 0x94c40000  lhu         $a0, 0x0($a2)
    ctx->pc = 0x2499b8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_2499bc:
    // 0x2499bc: 0x24858700  addiu       $a1, $a0, -0x7900
    ctx->pc = 0x2499bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936320));
label_2499c0:
    // 0x2499c0: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
label_2499c4:
    if (ctx->pc == 0x2499C4u) {
        ctx->pc = 0x2499C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2499C0u;
        // 0x2499c4: 0x520c3  sra         $a0, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2499C8u;
        goto label_2499c8;
    }
    ctx->pc = 0x2499C0u;
    {
        const bool branch_taken_0x2499c0 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x2499C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2499C0u;
        // 0x2499c4: 0x520c3  sra         $a0, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2499c0) {
            ctx->pc = 0x2499D0u;
            goto label_2499d0;
        }
    }
    ctx->pc = 0x2499C8u;
label_2499c8:
    // 0x2499c8: 0x24a40007  addiu       $a0, $a1, 0x7
    ctx->pc = 0x2499c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 7));
label_2499cc:
    // 0x2499cc: 0x420c3  sra         $a0, $a0, 3
    ctx->pc = 0x2499ccu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 3));
label_2499d0:
    // 0x2499d0: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x2499d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_2499d4:
    // 0x2499d4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2499d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_2499d8:
    // 0x2499d8: 0x342138aa  ori         $at, $at, 0x38AA
    ctx->pc = 0x2499d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14506);
label_2499dc:
    // 0x2499dc: 0x24847200  addiu       $a0, $a0, 0x7200
    ctx->pc = 0x2499dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29184));
label_2499e0:
    // 0x2499e0: 0x613821  addu        $a3, $v1, $at
    ctx->pc = 0x2499e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_2499e4:
    // 0x2499e4: 0xa4c40000  sh          $a0, 0x0($a2)
    ctx->pc = 0x2499e4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 4));
label_2499e8:
    // 0x2499e8: 0x94e40000  lhu         $a0, 0x0($a3)
    ctx->pc = 0x2499e8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
label_2499ec:
    // 0x2499ec: 0x24858700  addiu       $a1, $a0, -0x7900
    ctx->pc = 0x2499ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936320));
label_2499f0:
    // 0x2499f0: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
label_2499f4:
    if (ctx->pc == 0x2499F4u) {
        ctx->pc = 0x2499F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2499F0u;
        // 0x2499f4: 0x520c3  sra         $a0, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2499F8u;
        goto label_2499f8;
    }
    ctx->pc = 0x2499F0u;
    {
        const bool branch_taken_0x2499f0 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x2499F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2499F0u;
        // 0x2499f4: 0x520c3  sra         $a0, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2499f0) {
            ctx->pc = 0x249A00u;
            goto label_249a00;
        }
    }
    ctx->pc = 0x2499F8u;
label_2499f8:
    // 0x2499f8: 0x24a40007  addiu       $a0, $a1, 0x7
    ctx->pc = 0x2499f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 7));
label_2499fc:
    // 0x2499fc: 0x420c3  sra         $a0, $a0, 3
    ctx->pc = 0x2499fcu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 3));
label_249a00:
    // 0x249a00: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x249a00u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_249a04:
    // 0x249a04: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x249a04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_249a08:
    // 0x249a08: 0x342138c2  ori         $at, $at, 0x38C2
    ctx->pc = 0x249a08u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14530);
label_249a0c:
    // 0x249a0c: 0x24847200  addiu       $a0, $a0, 0x7200
    ctx->pc = 0x249a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29184));
label_249a10:
    // 0x249a10: 0x613021  addu        $a2, $v1, $at
    ctx->pc = 0x249a10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_249a14:
    // 0x249a14: 0xa4e40000  sh          $a0, 0x0($a3)
    ctx->pc = 0x249a14u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 4));
label_249a18:
    // 0x249a18: 0x94c40000  lhu         $a0, 0x0($a2)
    ctx->pc = 0x249a18u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_249a1c:
    // 0x249a1c: 0x24858700  addiu       $a1, $a0, -0x7900
    ctx->pc = 0x249a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936320));
label_249a20:
    // 0x249a20: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
label_249a24:
    if (ctx->pc == 0x249A24u) {
        ctx->pc = 0x249A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249A20u;
        // 0x249a24: 0x520c3  sra         $a0, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249A28u;
        goto label_249a28;
    }
    ctx->pc = 0x249A20u;
    {
        const bool branch_taken_0x249a20 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x249A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249A20u;
        // 0x249a24: 0x520c3  sra         $a0, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249a20) {
            ctx->pc = 0x249A30u;
            goto label_249a30;
        }
    }
    ctx->pc = 0x249A28u;
label_249a28:
    // 0x249a28: 0x24a40007  addiu       $a0, $a1, 0x7
    ctx->pc = 0x249a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 7));
label_249a2c:
    // 0x249a2c: 0x420c3  sra         $a0, $a0, 3
    ctx->pc = 0x249a2cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 3));
label_249a30:
    // 0x249a30: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x249a30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_249a34:
    // 0x249a34: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x249a34u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_249a38:
    // 0x249a38: 0x342138da  ori         $at, $at, 0x38DA
    ctx->pc = 0x249a38u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14554);
label_249a3c:
    // 0x249a3c: 0x612821  addu        $a1, $v1, $at
    ctx->pc = 0x249a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_249a40:
    // 0x249a40: 0x24837200  addiu       $v1, $a0, 0x7200
    ctx->pc = 0x249a40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 29184));
label_249a44:
    // 0x249a44: 0xa4c30000  sh          $v1, 0x0($a2)
    ctx->pc = 0x249a44u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 3));
label_249a48:
    // 0x249a48: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x249a48u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_249a4c:
    // 0x249a4c: 0x24648700  addiu       $a0, $v1, -0x7900
    ctx->pc = 0x249a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936320));
label_249a50:
    // 0x249a50: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
label_249a54:
    if (ctx->pc == 0x249A54u) {
        ctx->pc = 0x249A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249A50u;
        // 0x249a54: 0x418c3  sra         $v1, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249A58u;
        goto label_249a58;
    }
    ctx->pc = 0x249A50u;
    {
        const bool branch_taken_0x249a50 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x249A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249A50u;
        // 0x249a54: 0x418c3  sra         $v1, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249a50) {
            ctx->pc = 0x249A60u;
            goto label_249a60;
        }
    }
    ctx->pc = 0x249A58u;
label_249a58:
    // 0x249a58: 0x24830007  addiu       $v1, $a0, 0x7
    ctx->pc = 0x249a58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 7));
label_249a5c:
    // 0x249a5c: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x249a5cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
label_249a60:
    // 0x249a60: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x249a60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_249a64:
    // 0x249a64: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x249a64u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_249a68:
    // 0x249a68: 0x24637200  addiu       $v1, $v1, 0x7200
    ctx->pc = 0x249a68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29184));
label_249a6c:
    // 0x249a6c: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x249a6cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
label_249a70:
    // 0x249a70: 0x2e430080  sltiu       $v1, $s2, 0x80
    ctx->pc = 0x249a70u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
label_249a74:
    // 0x249a74: 0x1460ffc3  bnez        $v1, . + 4 + (-0x3D << 2)
label_249a78:
    if (ctx->pc == 0x249A78u) {
        ctx->pc = 0x249A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249A74u;
        // 0x249a78: 0x267300d0  addiu       $s3, $s3, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249A7Cu;
        goto label_249a7c;
    }
    ctx->pc = 0x249A74u;
    {
        const bool branch_taken_0x249a74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x249A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249A74u;
        // 0x249a78: 0x267300d0  addiu       $s3, $s3, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249a74) {
            ctx->pc = 0x249984u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_249984;
        }
    }
    ctx->pc = 0x249A7Cu;
label_249a7c:
    // 0x249a7c: 0x11082a  slt         $at, $zero, $s1
    ctx->pc = 0x249a7cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_249a80:
    // 0x249a80: 0x1020004c  beqz        $at, . + 4 + (0x4C << 2)
label_249a84:
    if (ctx->pc == 0x249A84u) {
        ctx->pc = 0x249A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249A80u;
        // 0x249a84: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249A88u;
        goto label_249a88;
    }
    ctx->pc = 0x249A80u;
    {
        const bool branch_taken_0x249a80 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x249A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249A80u;
        // 0x249a84: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249a80) {
            ctx->pc = 0x249BB4u;
            goto label_249bb4;
        }
    }
    ctx->pc = 0x249A88u;
label_249a88:
    // 0x249a88: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x249a88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_249a8c:
    // 0x249a8c: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x249a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_249a90:
    // 0x249a90: 0x2063821  addu        $a3, $s0, $a2
    ctx->pc = 0x249a90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
label_249a94:
    // 0x249a94: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x249a94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_249a98:
    // 0x249a98: 0xe10821  addu        $at, $a3, $at
    ctx->pc = 0x249a98u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 1)));
label_249a9c:
    // 0x249a9c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x249a9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_249aa0:
    // 0x249aa0: 0xa0203880  sb          $zero, 0x3880($at)
    ctx->pc = 0x249aa0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 14464), (uint8_t)GPR_U32(ctx, 0));
label_249aa4:
    // 0x249aa4: 0x111182a  slt         $v1, $t0, $s1
    ctx->pc = 0x249aa4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_249aa8:
    // 0x249aa8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x249aa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_249aac:
    // 0x249aac: 0x24c600d0  addiu       $a2, $a2, 0xD0
    ctx->pc = 0x249aacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 208));
label_249ab0:
    // 0x249ab0: 0xe10821  addu        $at, $a3, $at
    ctx->pc = 0x249ab0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 1)));
label_249ab4:
    // 0x249ab4: 0xa0203881  sb          $zero, 0x3881($at)
    ctx->pc = 0x249ab4u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 14465), (uint8_t)GPR_U32(ctx, 0));
label_249ab8:
    // 0x249ab8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x249ab8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_249abc:
    // 0x249abc: 0xe10821  addu        $at, $a3, $at
    ctx->pc = 0x249abcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 1)));
label_249ac0:
    // 0x249ac0: 0xa0203882  sb          $zero, 0x3882($at)
    ctx->pc = 0x249ac0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 14466), (uint8_t)GPR_U32(ctx, 0));
label_249ac4:
    // 0x249ac4: 0x8f8492fc  lw          $a0, -0x6D04($gp)
    ctx->pc = 0x249ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
label_249ac8:
    // 0x249ac8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x249ac8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_249acc:
    // 0x249acc: 0xe10821  addu        $at, $a3, $at
    ctx->pc = 0x249accu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 1)));
label_249ad0:
    // 0x249ad0: 0x9084001c  lbu         $a0, 0x1C($a0)
    ctx->pc = 0x249ad0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
label_249ad4:
    // 0x249ad4: 0xa0243883  sb          $a0, 0x3883($at)
    ctx->pc = 0x249ad4u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 14467), (uint8_t)GPR_U32(ctx, 4));
label_249ad8:
    // 0x249ad8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x249ad8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_249adc:
    // 0x249adc: 0xe10821  addu        $at, $a3, $at
    ctx->pc = 0x249adcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 1)));
label_249ae0:
    // 0x249ae0: 0xac253884  sw          $a1, 0x3884($at)
    ctx->pc = 0x249ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 14468), GPR_U32(ctx, 5));
label_249ae4:
    // 0x249ae4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x249ae4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_249ae8:
    // 0x249ae8: 0xe10821  addu        $at, $a3, $at
    ctx->pc = 0x249ae8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 1)));
label_249aec:
    // 0x249aec: 0xa0203898  sb          $zero, 0x3898($at)
    ctx->pc = 0x249aecu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 14488), (uint8_t)GPR_U32(ctx, 0));
label_249af0:
    // 0x249af0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x249af0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_249af4:
    // 0x249af4: 0xe10821  addu        $at, $a3, $at
    ctx->pc = 0x249af4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 1)));
label_249af8:
    // 0x249af8: 0xa0203899  sb          $zero, 0x3899($at)
    ctx->pc = 0x249af8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 14489), (uint8_t)GPR_U32(ctx, 0));
label_249afc:
    // 0x249afc: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x249afcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_249b00:
    // 0x249b00: 0xe10821  addu        $at, $a3, $at
    ctx->pc = 0x249b00u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 1)));
label_249b04:
    // 0x249b04: 0xa020389a  sb          $zero, 0x389A($at)
    ctx->pc = 0x249b04u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 14490), (uint8_t)GPR_U32(ctx, 0));
label_249b08:
    // 0x249b08: 0x8f8492fc  lw          $a0, -0x6D04($gp)
    ctx->pc = 0x249b08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
label_249b0c:
    // 0x249b0c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x249b0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_249b10:
    // 0x249b10: 0xe10821  addu        $at, $a3, $at
    ctx->pc = 0x249b10u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 1)));
label_249b14:
    // 0x249b14: 0x9084001c  lbu         $a0, 0x1C($a0)
    ctx->pc = 0x249b14u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
label_249b18:
    // 0x249b18: 0xa024389b  sb          $a0, 0x389B($at)
    ctx->pc = 0x249b18u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 14491), (uint8_t)GPR_U32(ctx, 4));
label_249b1c:
    // 0x249b1c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x249b1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_249b20:
    // 0x249b20: 0xe10821  addu        $at, $a3, $at
    ctx->pc = 0x249b20u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 1)));
label_249b24:
    // 0x249b24: 0xac25389c  sw          $a1, 0x389C($at)
    ctx->pc = 0x249b24u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 14492), GPR_U32(ctx, 5));
label_249b28:
    // 0x249b28: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x249b28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_249b2c:
    // 0x249b2c: 0xe10821  addu        $at, $a3, $at
    ctx->pc = 0x249b2cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 1)));
label_249b30:
    // 0x249b30: 0xa02038b0  sb          $zero, 0x38B0($at)
    ctx->pc = 0x249b30u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 14512), (uint8_t)GPR_U32(ctx, 0));
label_249b34:
    // 0x249b34: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x249b34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_249b38:
    // 0x249b38: 0xe10821  addu        $at, $a3, $at
    ctx->pc = 0x249b38u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 1)));
label_249b3c:
    // 0x249b3c: 0xa02038b1  sb          $zero, 0x38B1($at)
    ctx->pc = 0x249b3cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 14513), (uint8_t)GPR_U32(ctx, 0));
label_249b40:
    // 0x249b40: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x249b40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_249b44:
    // 0x249b44: 0xe10821  addu        $at, $a3, $at
    ctx->pc = 0x249b44u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 1)));
label_249b48:
    // 0x249b48: 0xa02038b2  sb          $zero, 0x38B2($at)
    ctx->pc = 0x249b48u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 14514), (uint8_t)GPR_U32(ctx, 0));
label_249b4c:
    // 0x249b4c: 0x8f8492fc  lw          $a0, -0x6D04($gp)
    ctx->pc = 0x249b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
label_249b50:
    // 0x249b50: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x249b50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_249b54:
    // 0x249b54: 0xe10821  addu        $at, $a3, $at
    ctx->pc = 0x249b54u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 1)));
label_249b58:
    // 0x249b58: 0x9084001c  lbu         $a0, 0x1C($a0)
    ctx->pc = 0x249b58u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
label_249b5c:
    // 0x249b5c: 0xa02438b3  sb          $a0, 0x38B3($at)
    ctx->pc = 0x249b5cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 14515), (uint8_t)GPR_U32(ctx, 4));
label_249b60:
    // 0x249b60: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x249b60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_249b64:
    // 0x249b64: 0xe10821  addu        $at, $a3, $at
    ctx->pc = 0x249b64u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 1)));
label_249b68:
    // 0x249b68: 0xac2538b4  sw          $a1, 0x38B4($at)
    ctx->pc = 0x249b68u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 14516), GPR_U32(ctx, 5));
label_249b6c:
    // 0x249b6c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x249b6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_249b70:
    // 0x249b70: 0xe10821  addu        $at, $a3, $at
    ctx->pc = 0x249b70u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 1)));
label_249b74:
    // 0x249b74: 0xa02038c8  sb          $zero, 0x38C8($at)
    ctx->pc = 0x249b74u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 14536), (uint8_t)GPR_U32(ctx, 0));
label_249b78:
    // 0x249b78: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x249b78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_249b7c:
    // 0x249b7c: 0xe10821  addu        $at, $a3, $at
    ctx->pc = 0x249b7cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 1)));
label_249b80:
    // 0x249b80: 0xa02038c9  sb          $zero, 0x38C9($at)
    ctx->pc = 0x249b80u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 14537), (uint8_t)GPR_U32(ctx, 0));
label_249b84:
    // 0x249b84: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x249b84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_249b88:
    // 0x249b88: 0xe10821  addu        $at, $a3, $at
    ctx->pc = 0x249b88u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 1)));
label_249b8c:
    // 0x249b8c: 0xa02038ca  sb          $zero, 0x38CA($at)
    ctx->pc = 0x249b8cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 14538), (uint8_t)GPR_U32(ctx, 0));
label_249b90:
    // 0x249b90: 0x8f8492fc  lw          $a0, -0x6D04($gp)
    ctx->pc = 0x249b90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
label_249b94:
    // 0x249b94: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x249b94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_249b98:
    // 0x249b98: 0xe10821  addu        $at, $a3, $at
    ctx->pc = 0x249b98u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 1)));
label_249b9c:
    // 0x249b9c: 0x9084001c  lbu         $a0, 0x1C($a0)
    ctx->pc = 0x249b9cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
label_249ba0:
    // 0x249ba0: 0xa02438cb  sb          $a0, 0x38CB($at)
    ctx->pc = 0x249ba0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 14539), (uint8_t)GPR_U32(ctx, 4));
label_249ba4:
    // 0x249ba4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x249ba4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_249ba8:
    // 0x249ba8: 0xe10821  addu        $at, $a3, $at
    ctx->pc = 0x249ba8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 1)));
label_249bac:
    // 0x249bac: 0x1460ffb8  bnez        $v1, . + 4 + (-0x48 << 2)
label_249bb0:
    if (ctx->pc == 0x249BB0u) {
        ctx->pc = 0x249BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249BACu;
        // 0x249bb0: 0xac2538cc  sw          $a1, 0x38CC($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 14540), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249BB4u;
        goto label_249bb4;
    }
    ctx->pc = 0x249BACu;
    {
        const bool branch_taken_0x249bac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x249BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249BACu;
        // 0x249bb0: 0xac2538cc  sw          $a1, 0x38CC($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 14540), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249bac) {
            ctx->pc = 0x249A90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_249a90;
        }
    }
    ctx->pc = 0x249BB4u;
label_249bb4:
    // 0x249bb4: 0x0  nop
    ctx->pc = 0x249bb4u;
    // NOP
label_249bb8:
    // 0x249bb8: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x249bb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_249bbc:
    // 0x249bbc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x249bbcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_249bc0:
    // 0x249bc0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x249bc0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_249bc4:
    // 0x249bc4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x249bc4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_249bc8:
    // 0x249bc8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x249bc8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_249bcc:
    // 0x249bcc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x249bccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_249bd0:
    // 0x249bd0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x249bd0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_249bd4:
    // 0x249bd4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x249bd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_249bd8:
    // 0x249bd8: 0x3e00008  jr          $ra
label_249bdc:
    if (ctx->pc == 0x249BDCu) {
        ctx->pc = 0x249BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249BD8u;
        // 0x249bdc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249BE0u;
        goto label_249be0;
    }
    ctx->pc = 0x249BD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x249BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249BD8u;
        // 0x249bdc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x249BD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x249BE0u;
label_249be0:
    // 0x249be0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x249be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_249be4:
    // 0x249be4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x249be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_249be8:
    // 0x249be8: 0x8f8292fc  lw          $v0, -0x6D04($gp)
    ctx->pc = 0x249be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
label_249bec:
    // 0x249bec: 0xc0923ec  jal         func_248FB0
label_249bf0:
    if (ctx->pc == 0x249BF0u) {
        ctx->pc = 0x249BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249BECu;
        // 0x249bf0: 0x8c450014  lw          $a1, 0x14($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249BF4u;
        goto label_249bf4;
    }
    ctx->pc = 0x249BECu;
    SET_GPR_U32(ctx, 31, 0x249BF4u);
    ctx->pc = 0x249BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249BECu;
    // 0x249bf0: 0x8c450014  lw          $a1, 0x14($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248FB0u;
    { ctx->pc = 0x248fb0; return; }
    ctx->pc = 0x249BF4u;
label_249bf4:
    // 0x249bf4: 0x8f8392fc  lw          $v1, -0x6D04($gp)
    ctx->pc = 0x249bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
label_249bf8:
    // 0x249bf8: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x249bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
label_249bfc:
    // 0x249bfc: 0x2484a430  addiu       $a0, $a0, -0x5BD0
    ctx->pc = 0x249bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943792));
label_249c00:
    // 0x249c00: 0xac640018  sw          $a0, 0x18($v1)
    ctx->pc = 0x249c00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 4));
label_249c04:
    // 0x249c04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x249c04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_249c08:
    // 0x249c08: 0x3e00008  jr          $ra
label_249c0c:
    if (ctx->pc == 0x249C0Cu) {
        ctx->pc = 0x249C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249C08u;
        // 0x249c0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249C10u;
        goto label_249c10;
    }
    ctx->pc = 0x249C08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x249C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249C08u;
        // 0x249c0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x249C08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x249C10u;
label_249c10:
    // 0x249c10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x249c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_249c14:
    // 0x249c14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x249c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_249c18:
    // 0x249c18: 0x8f8292fc  lw          $v0, -0x6D04($gp)
    ctx->pc = 0x249c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
label_249c1c:
    // 0x249c1c: 0xc0923ec  jal         func_248FB0
label_249c20:
    if (ctx->pc == 0x249C20u) {
        ctx->pc = 0x249C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249C1Cu;
        // 0x249c20: 0x8c450014  lw          $a1, 0x14($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249C24u;
        goto label_249c24;
    }
    ctx->pc = 0x249C1Cu;
    SET_GPR_U32(ctx, 31, 0x249C24u);
    ctx->pc = 0x249C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249C1Cu;
    // 0x249c20: 0x8c450014  lw          $a1, 0x14($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248FB0u;
    { ctx->pc = 0x248fb0; return; }
    ctx->pc = 0x249C24u;
label_249c24:
    // 0x249c24: 0x8f8392fc  lw          $v1, -0x6D04($gp)
    ctx->pc = 0x249c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
label_249c28:
    // 0x249c28: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x249c28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
label_249c2c:
    // 0x249c2c: 0x24849be0  addiu       $a0, $a0, -0x6420
    ctx->pc = 0x249c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941664));
label_249c30:
    // 0x249c30: 0xac640018  sw          $a0, 0x18($v1)
    ctx->pc = 0x249c30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 4));
label_249c34:
    // 0x249c34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x249c34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_249c38:
    // 0x249c38: 0x3e00008  jr          $ra
label_249c3c:
    if (ctx->pc == 0x249C3Cu) {
        ctx->pc = 0x249C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249C38u;
        // 0x249c3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249C40u;
        goto label_249c40;
    }
    ctx->pc = 0x249C38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x249C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249C38u;
        // 0x249c3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x249C38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x249C40u;
label_249c40:
    // 0x249c40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x249c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_249c44:
    // 0x249c44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x249c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_249c48:
    // 0x249c48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x249c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_249c4c:
    // 0x249c4c: 0x8f8292fc  lw          $v0, -0x6D04($gp)
    ctx->pc = 0x249c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
label_249c50:
    // 0x249c50: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x249c50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_249c54:
    // 0x249c54: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x249c54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_249c58:
    // 0x249c58: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x249c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_249c5c:
    // 0x249c5c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x249c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_249c60:
    // 0x249c60: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x249c60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_249c64:
    // 0x249c64: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x249c64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_249c68:
    // 0x249c68: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x249c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_249c6c:
    // 0x249c6c: 0xc08f3d6  jal         func_23CF58
label_249c70:
    if (ctx->pc == 0x249C70u) {
        ctx->pc = 0x249C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249C6Cu;
        // 0x249c70: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249C74u;
        goto label_249c74;
    }
    ctx->pc = 0x249C6Cu;
    SET_GPR_U32(ctx, 31, 0x249C74u);
    ctx->pc = 0x249C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249C6Cu;
    // 0x249c70: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CF58u;
    { ctx->pc = 0x23cf58; return; }
    ctx->pc = 0x249C74u;
label_249c74:
    // 0x249c74: 0x8f8692fc  lw          $a2, -0x6D04($gp)
    ctx->pc = 0x249c74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
label_249c78:
    // 0x249c78: 0x90c4001d  lbu         $a0, 0x1D($a2)
    ctx->pc = 0x249c78u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 29)));
label_249c7c:
    // 0x249c7c: 0x2483ff80  addiu       $v1, $a0, -0x80
    ctx->pc = 0x249c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967168));
label_249c80:
    // 0x249c80: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x249c80u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_249c84:
    // 0x249c84: 0x10200021  beqz        $at, . + 4 + (0x21 << 2)
label_249c88:
    if (ctx->pc == 0x249C88u) {
        ctx->pc = 0x249C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249C84u;
        // 0x249c88: 0x24c5001d  addiu       $a1, $a2, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 29));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249C8Cu;
        goto label_249c8c;
    }
    ctx->pc = 0x249C84u;
    {
        const bool branch_taken_0x249c84 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x249C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249C84u;
        // 0x249c88: 0x24c5001d  addiu       $a1, $a2, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249c84) {
            ctx->pc = 0x249D0Cu;
            goto label_249d0c;
        }
    }
    ctx->pc = 0x249C8Cu;
label_249c8c:
    // 0x249c8c: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x249c8cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_249c90:
    // 0x249c90: 0x10200019  beqz        $at, . + 4 + (0x19 << 2)
label_249c94:
    if (ctx->pc == 0x249C94u) {
        ctx->pc = 0x249C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249C90u;
        // 0x249c94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249C98u;
        goto label_249c98;
    }
    ctx->pc = 0x249C90u;
    {
        const bool branch_taken_0x249c90 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x249C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249C90u;
        // 0x249c94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249c90) {
            ctx->pc = 0x249CF8u;
            goto label_249cf8;
        }
    }
    ctx->pc = 0x249C98u;
label_249c98:
    // 0x249c98: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x249c98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_249c9c:
    // 0x249c9c: 0x8f8492fc  lw          $a0, -0x6D04($gp)
    ctx->pc = 0x249c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
label_249ca0:
    // 0x249ca0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x249ca0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_249ca4:
    // 0x249ca4: 0x2063821  addu        $a3, $s0, $a2
    ctx->pc = 0x249ca4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
label_249ca8:
    // 0x249ca8: 0x3421a010  ori         $at, $at, 0xA010
    ctx->pc = 0x249ca8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)40976);
label_249cac:
    // 0x249cac: 0xe11821  addu        $v1, $a3, $at
    ctx->pc = 0x249cacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 1)));
label_249cb0:
    // 0x249cb0: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_249cb4:
    if (ctx->pc == 0x249CB4u) {
        ctx->pc = 0x249CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249CB0u;
        // 0x249cb4: 0x9084001d  lbu         $a0, 0x1D($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 29)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249CB8u;
        goto label_249cb8;
    }
    ctx->pc = 0x249CB0u;
    {
        const bool branch_taken_0x249cb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x249CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249CB0u;
        // 0x249cb4: 0x9084001d  lbu         $a0, 0x1D($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 29)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249cb0) {
            ctx->pc = 0x249CE8u;
            goto label_249ce8;
        }
    }
    ctx->pc = 0x249CB8u;
label_249cb8:
    // 0x249cb8: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x249cb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_249cbc:
    // 0x249cbc: 0xe10821  addu        $at, $a3, $at
    ctx->pc = 0x249cbcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 1)));
label_249cc0:
    // 0x249cc0: 0xa024a083  sb          $a0, -0x5F7D($at)
    ctx->pc = 0x249cc0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294942851), (uint8_t)GPR_U32(ctx, 4));
label_249cc4:
    // 0x249cc4: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x249cc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_249cc8:
    // 0x249cc8: 0xe10821  addu        $at, $a3, $at
    ctx->pc = 0x249cc8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 1)));
label_249ccc:
    // 0x249ccc: 0xa024a09b  sb          $a0, -0x5F65($at)
    ctx->pc = 0x249cccu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294942875), (uint8_t)GPR_U32(ctx, 4));
label_249cd0:
    // 0x249cd0: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x249cd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_249cd4:
    // 0x249cd4: 0xe10821  addu        $at, $a3, $at
    ctx->pc = 0x249cd4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 1)));
label_249cd8:
    // 0x249cd8: 0xa024a0b3  sb          $a0, -0x5F4D($at)
    ctx->pc = 0x249cd8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294942899), (uint8_t)GPR_U32(ctx, 4));
label_249cdc:
    // 0x249cdc: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x249cdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_249ce0:
    // 0x249ce0: 0xe10821  addu        $at, $a3, $at
    ctx->pc = 0x249ce0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 1)));
label_249ce4:
    // 0x249ce4: 0xa024a0cb  sb          $a0, -0x5F35($at)
    ctx->pc = 0x249ce4u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294942923), (uint8_t)GPR_U32(ctx, 4));
label_249ce8:
    // 0x249ce8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x249ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_249cec:
    // 0x249cec: 0xa2182a  slt         $v1, $a1, $v0
    ctx->pc = 0x249cecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_249cf0:
    // 0x249cf0: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
label_249cf4:
    if (ctx->pc == 0x249CF4u) {
        ctx->pc = 0x249CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249CF0u;
        // 0x249cf4: 0x24c600d0  addiu       $a2, $a2, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249CF8u;
        goto label_249cf8;
    }
    ctx->pc = 0x249CF0u;
    {
        const bool branch_taken_0x249cf0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x249CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249CF0u;
        // 0x249cf4: 0x24c600d0  addiu       $a2, $a2, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249cf0) {
            ctx->pc = 0x249C9Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_249c9c;
        }
    }
    ctx->pc = 0x249CF8u;
label_249cf8:
    // 0x249cf8: 0x8f8492fc  lw          $a0, -0x6D04($gp)
    ctx->pc = 0x249cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
label_249cfc:
    // 0x249cfc: 0x9083001d  lbu         $v1, 0x1D($a0)
    ctx->pc = 0x249cfcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 29)));
label_249d00:
    // 0x249d00: 0x2463ff80  addiu       $v1, $v1, -0x80
    ctx->pc = 0x249d00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967168));
label_249d04:
    // 0x249d04: 0x1000002e  b           . + 4 + (0x2E << 2)
label_249d08:
    if (ctx->pc == 0x249D08u) {
        ctx->pc = 0x249D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249D04u;
        // 0x249d08: 0xa083001d  sb          $v1, 0x1D($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 29), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249D0Cu;
        goto label_249d0c;
    }
    ctx->pc = 0x249D04u;
    {
        const bool branch_taken_0x249d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x249D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249D04u;
        // 0x249d08: 0xa083001d  sb          $v1, 0x1D($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 29), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249d04) {
            ctx->pc = 0x249DC0u;
            goto label_249dc0;
        }
    }
    ctx->pc = 0x249D0Cu;
label_249d0c:
    // 0x249d0c: 0x4082a  slt         $at, $zero, $a0
    ctx->pc = 0x249d0cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_249d10:
    // 0x249d10: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_249d14:
    if (ctx->pc == 0x249D14u) {
        ctx->pc = 0x249D18u;
        goto label_249d18;
    }
    ctx->pc = 0x249D10u;
    {
        const bool branch_taken_0x249d10 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x249d10) {
            ctx->pc = 0x249D20u;
            goto label_249d20;
        }
    }
    ctx->pc = 0x249D18u;
label_249d18:
    // 0x249d18: 0x1000000e  b           . + 4 + (0xE << 2)
label_249d1c:
    if (ctx->pc == 0x249D1Cu) {
        ctx->pc = 0x249D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249D18u;
        // 0x249d1c: 0xa0a00000  sb          $zero, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249D20u;
        goto label_249d20;
    }
    ctx->pc = 0x249D18u;
    {
        const bool branch_taken_0x249d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x249D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249D18u;
        // 0x249d1c: 0xa0a00000  sb          $zero, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249d18) {
            ctx->pc = 0x249D54u;
            goto label_249d54;
        }
    }
    ctx->pc = 0x249D20u;
label_249d20:
    // 0x249d20: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x249d20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_249d24:
    // 0x249d24: 0x8cc40014  lw          $a0, 0x14($a2)
    ctx->pc = 0x249d24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
label_249d28:
    // 0x249d28: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x249d28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_249d2c:
    // 0x249d2c: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
label_249d30:
    if (ctx->pc == 0x249D30u) {
        ctx->pc = 0x249D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249D2Cu;
        // 0x249d30: 0x24c50014  addiu       $a1, $a2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249D34u;
        goto label_249d34;
    }
    ctx->pc = 0x249D2Cu;
    {
        const bool branch_taken_0x249d2c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x249D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249D2Cu;
        // 0x249d30: 0x24c50014  addiu       $a1, $a2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249d2c) {
            ctx->pc = 0x249D3Cu;
            goto label_249d3c;
        }
    }
    ctx->pc = 0x249D34u;
label_249d34:
    // 0x249d34: 0x10000007  b           . + 4 + (0x7 << 2)
label_249d38:
    if (ctx->pc == 0x249D38u) {
        ctx->pc = 0x249D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249D34u;
        // 0x249d38: 0xacc00018  sw          $zero, 0x18($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249D3Cu;
        goto label_249d3c;
    }
    ctx->pc = 0x249D34u;
    {
        const bool branch_taken_0x249d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x249D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249D34u;
        // 0x249d38: 0xacc00018  sw          $zero, 0x18($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249d34) {
            ctx->pc = 0x249D54u;
            goto label_249d54;
        }
    }
    ctx->pc = 0x249D3Cu;
label_249d3c:
    // 0x249d3c: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x249d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_249d40:
    // 0x249d40: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x249d40u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_249d44:
    // 0x249d44: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x249d44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
label_249d48:
    // 0x249d48: 0x8f8392fc  lw          $v1, -0x6D04($gp)
    ctx->pc = 0x249d48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
label_249d4c:
    // 0x249d4c: 0x24849c10  addiu       $a0, $a0, -0x63F0
    ctx->pc = 0x249d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941712));
label_249d50:
    // 0x249d50: 0xac640018  sw          $a0, 0x18($v1)
    ctx->pc = 0x249d50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 4));
label_249d54:
    // 0x249d54: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x249d54u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_249d58:
    // 0x249d58: 0x10200019  beqz        $at, . + 4 + (0x19 << 2)
label_249d5c:
    if (ctx->pc == 0x249D5Cu) {
        ctx->pc = 0x249D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249D58u;
        // 0x249d5c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249D60u;
        goto label_249d60;
    }
    ctx->pc = 0x249D58u;
    {
        const bool branch_taken_0x249d58 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x249D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249D58u;
        // 0x249d5c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249d58) {
            ctx->pc = 0x249DC0u;
            goto label_249dc0;
        }
    }
    ctx->pc = 0x249D60u;
label_249d60:
    // 0x249d60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x249d60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_249d64:
    // 0x249d64: 0x8f8492fc  lw          $a0, -0x6D04($gp)
    ctx->pc = 0x249d64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
label_249d68:
    // 0x249d68: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x249d68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_249d6c:
    // 0x249d6c: 0x2053021  addu        $a2, $s0, $a1
    ctx->pc = 0x249d6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
label_249d70:
    // 0x249d70: 0x3421a010  ori         $at, $at, 0xA010
    ctx->pc = 0x249d70u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)40976);
label_249d74:
    // 0x249d74: 0xc11821  addu        $v1, $a2, $at
    ctx->pc = 0x249d74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
label_249d78:
    // 0x249d78: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_249d7c:
    if (ctx->pc == 0x249D7Cu) {
        ctx->pc = 0x249D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249D78u;
        // 0x249d7c: 0x9084001d  lbu         $a0, 0x1D($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 29)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249D80u;
        goto label_249d80;
    }
    ctx->pc = 0x249D78u;
    {
        const bool branch_taken_0x249d78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x249D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249D78u;
        // 0x249d7c: 0x9084001d  lbu         $a0, 0x1D($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 29)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249d78) {
            ctx->pc = 0x249DB0u;
            goto label_249db0;
        }
    }
    ctx->pc = 0x249D80u;
label_249d80:
    // 0x249d80: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x249d80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_249d84:
    // 0x249d84: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x249d84u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
label_249d88:
    // 0x249d88: 0xa024a083  sb          $a0, -0x5F7D($at)
    ctx->pc = 0x249d88u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294942851), (uint8_t)GPR_U32(ctx, 4));
label_249d8c:
    // 0x249d8c: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x249d8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_249d90:
    // 0x249d90: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x249d90u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
label_249d94:
    // 0x249d94: 0xa024a09b  sb          $a0, -0x5F65($at)
    ctx->pc = 0x249d94u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294942875), (uint8_t)GPR_U32(ctx, 4));
label_249d98:
    // 0x249d98: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x249d98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_249d9c:
    // 0x249d9c: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x249d9cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
label_249da0:
    // 0x249da0: 0xa024a0b3  sb          $a0, -0x5F4D($at)
    ctx->pc = 0x249da0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294942899), (uint8_t)GPR_U32(ctx, 4));
label_249da4:
    // 0x249da4: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x249da4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_249da8:
    // 0x249da8: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x249da8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
label_249dac:
    // 0x249dac: 0xa024a0cb  sb          $a0, -0x5F35($at)
    ctx->pc = 0x249dacu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294942923), (uint8_t)GPR_U32(ctx, 4));
label_249db0:
    // 0x249db0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x249db0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_249db4:
    // 0x249db4: 0xe2182a  slt         $v1, $a3, $v0
    ctx->pc = 0x249db4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_249db8:
    // 0x249db8: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
label_249dbc:
    if (ctx->pc == 0x249DBCu) {
        ctx->pc = 0x249DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249DB8u;
        // 0x249dbc: 0x24a500d0  addiu       $a1, $a1, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249DC0u;
        goto label_249dc0;
    }
    ctx->pc = 0x249DB8u;
    {
        const bool branch_taken_0x249db8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x249DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249DB8u;
        // 0x249dbc: 0x24a500d0  addiu       $a1, $a1, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249db8) {
            ctx->pc = 0x249D64u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_249d64;
        }
    }
    ctx->pc = 0x249DC0u;
label_249dc0:
    // 0x249dc0: 0x8f8392fc  lw          $v1, -0x6D04($gp)
    ctx->pc = 0x249dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
label_249dc4:
    // 0x249dc4: 0x9064001c  lbu         $a0, 0x1C($v1)
    ctx->pc = 0x249dc4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 28)));
label_249dc8:
    // 0x249dc8: 0x2465001c  addiu       $a1, $v1, 0x1C
    ctx->pc = 0x249dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 28));
label_249dcc:
    // 0x249dcc: 0x2483ff80  addiu       $v1, $a0, -0x80
    ctx->pc = 0x249dccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967168));
label_249dd0:
    // 0x249dd0: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x249dd0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_249dd4:
    // 0x249dd4: 0x10200043  beqz        $at, . + 4 + (0x43 << 2)
label_249dd8:
    if (ctx->pc == 0x249DD8u) {
        ctx->pc = 0x249DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249DD4u;
        // 0x249dd8: 0x4082a  slt         $at, $zero, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x249DDCu;
        goto label_249ddc;
    }
    ctx->pc = 0x249DD4u;
    {
        const bool branch_taken_0x249dd4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x249DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249DD4u;
        // 0x249dd8: 0x4082a  slt         $at, $zero, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x249dd4) {
            ctx->pc = 0x249EE4u;
            { ctx->pc = 0x249ee4; return; }
        }
    }
    ctx->pc = 0x249DDCu;
label_249ddc:
    // 0x249ddc: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x249ddcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    ctx->pc = 0x249de0u;
    return;
}

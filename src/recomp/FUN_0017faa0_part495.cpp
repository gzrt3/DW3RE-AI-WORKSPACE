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

// Function: FUN_0017faa0
// Address: 0x17faa0 - 0x2bfb1c
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0017faa0_part495(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x270e00u: goto label_270e00;
        case 0x270e04u: goto label_270e04;
        case 0x270e08u: goto label_270e08;
        case 0x270e0cu: goto label_270e0c;
        case 0x270e10u: goto label_270e10;
        case 0x270e14u: goto label_270e14;
        case 0x270e18u: goto label_270e18;
        case 0x270e1cu: goto label_270e1c;
        case 0x270e20u: goto label_270e20;
        case 0x270e24u: goto label_270e24;
        case 0x270e28u: goto label_270e28;
        case 0x270e2cu: goto label_270e2c;
        case 0x270e30u: goto label_270e30;
        case 0x270e34u: goto label_270e34;
        case 0x270e38u: goto label_270e38;
        case 0x270e3cu: goto label_270e3c;
        case 0x270e40u: goto label_270e40;
        case 0x270e44u: goto label_270e44;
        case 0x270e48u: goto label_270e48;
        case 0x270e4cu: goto label_270e4c;
        case 0x270e50u: goto label_270e50;
        case 0x270e54u: goto label_270e54;
        case 0x270e58u: goto label_270e58;
        case 0x270e5cu: goto label_270e5c;
        case 0x270e60u: goto label_270e60;
        case 0x270e64u: goto label_270e64;
        case 0x270e68u: goto label_270e68;
        case 0x270e6cu: goto label_270e6c;
        case 0x270e70u: goto label_270e70;
        case 0x270e74u: goto label_270e74;
        case 0x270e78u: goto label_270e78;
        case 0x270e7cu: goto label_270e7c;
        case 0x270e80u: goto label_270e80;
        case 0x270e84u: goto label_270e84;
        case 0x270e88u: goto label_270e88;
        case 0x270e8cu: goto label_270e8c;
        case 0x270e90u: goto label_270e90;
        case 0x270e94u: goto label_270e94;
        case 0x270e98u: goto label_270e98;
        case 0x270e9cu: goto label_270e9c;
        case 0x270ea0u: goto label_270ea0;
        case 0x270ea4u: goto label_270ea4;
        case 0x270ea8u: goto label_270ea8;
        case 0x270eacu: goto label_270eac;
        case 0x270eb0u: goto label_270eb0;
        case 0x270eb4u: goto label_270eb4;
        case 0x270eb8u: goto label_270eb8;
        case 0x270ebcu: goto label_270ebc;
        case 0x270ec0u: goto label_270ec0;
        case 0x270ec4u: goto label_270ec4;
        case 0x270ec8u: goto label_270ec8;
        case 0x270eccu: goto label_270ecc;
        case 0x270ed0u: goto label_270ed0;
        case 0x270ed4u: goto label_270ed4;
        case 0x270ed8u: goto label_270ed8;
        case 0x270edcu: goto label_270edc;
        case 0x270ee0u: goto label_270ee0;
        case 0x270ee4u: goto label_270ee4;
        case 0x270ee8u: goto label_270ee8;
        case 0x270eecu: goto label_270eec;
        case 0x270ef0u: goto label_270ef0;
        case 0x270ef4u: goto label_270ef4;
        case 0x270ef8u: goto label_270ef8;
        case 0x270efcu: goto label_270efc;
        case 0x270f00u: goto label_270f00;
        case 0x270f04u: goto label_270f04;
        case 0x270f08u: goto label_270f08;
        case 0x270f0cu: goto label_270f0c;
        case 0x270f10u: goto label_270f10;
        case 0x270f14u: goto label_270f14;
        case 0x270f18u: goto label_270f18;
        case 0x270f1cu: goto label_270f1c;
        case 0x270f20u: goto label_270f20;
        case 0x270f24u: goto label_270f24;
        case 0x270f28u: goto label_270f28;
        case 0x270f2cu: goto label_270f2c;
        case 0x270f30u: goto label_270f30;
        case 0x270f34u: goto label_270f34;
        case 0x270f38u: goto label_270f38;
        case 0x270f3cu: goto label_270f3c;
        case 0x270f40u: goto label_270f40;
        case 0x270f44u: goto label_270f44;
        case 0x270f48u: goto label_270f48;
        case 0x270f4cu: goto label_270f4c;
        case 0x270f50u: goto label_270f50;
        case 0x270f54u: goto label_270f54;
        case 0x270f58u: goto label_270f58;
        case 0x270f5cu: goto label_270f5c;
        case 0x270f60u: goto label_270f60;
        case 0x270f64u: goto label_270f64;
        case 0x270f68u: goto label_270f68;
        case 0x270f6cu: goto label_270f6c;
        case 0x270f70u: goto label_270f70;
        case 0x270f74u: goto label_270f74;
        case 0x270f78u: goto label_270f78;
        case 0x270f7cu: goto label_270f7c;
        case 0x270f80u: goto label_270f80;
        case 0x270f84u: goto label_270f84;
        case 0x270f88u: goto label_270f88;
        case 0x270f8cu: goto label_270f8c;
        case 0x270f90u: goto label_270f90;
        case 0x270f94u: goto label_270f94;
        case 0x270f98u: goto label_270f98;
        case 0x270f9cu: goto label_270f9c;
        case 0x270fa0u: goto label_270fa0;
        case 0x270fa4u: goto label_270fa4;
        case 0x270fa8u: goto label_270fa8;
        case 0x270facu: goto label_270fac;
        case 0x270fb0u: goto label_270fb0;
        case 0x270fb4u: goto label_270fb4;
        case 0x270fb8u: goto label_270fb8;
        case 0x270fbcu: goto label_270fbc;
        case 0x270fc0u: goto label_270fc0;
        case 0x270fc4u: goto label_270fc4;
        case 0x270fc8u: goto label_270fc8;
        case 0x270fccu: goto label_270fcc;
        case 0x270fd0u: goto label_270fd0;
        case 0x270fd4u: goto label_270fd4;
        case 0x270fd8u: goto label_270fd8;
        case 0x270fdcu: goto label_270fdc;
        case 0x270fe0u: goto label_270fe0;
        case 0x270fe4u: goto label_270fe4;
        case 0x270fe8u: goto label_270fe8;
        case 0x270fecu: goto label_270fec;
        case 0x270ff0u: goto label_270ff0;
        case 0x270ff4u: goto label_270ff4;
        case 0x270ff8u: goto label_270ff8;
        case 0x270ffcu: goto label_270ffc;
        case 0x271000u: goto label_271000;
        case 0x271004u: goto label_271004;
        case 0x271008u: goto label_271008;
        case 0x27100cu: goto label_27100c;
        case 0x271010u: goto label_271010;
        case 0x271014u: goto label_271014;
        case 0x271018u: goto label_271018;
        case 0x27101cu: goto label_27101c;
        case 0x271020u: goto label_271020;
        case 0x271024u: goto label_271024;
        case 0x271028u: goto label_271028;
        case 0x27102cu: goto label_27102c;
        case 0x271030u: goto label_271030;
        case 0x271034u: goto label_271034;
        case 0x271038u: goto label_271038;
        case 0x27103cu: goto label_27103c;
        case 0x271040u: goto label_271040;
        case 0x271044u: goto label_271044;
        case 0x271048u: goto label_271048;
        case 0x27104cu: goto label_27104c;
        case 0x271050u: goto label_271050;
        case 0x271054u: goto label_271054;
        case 0x271058u: goto label_271058;
        case 0x27105cu: goto label_27105c;
        case 0x271060u: goto label_271060;
        case 0x271064u: goto label_271064;
        case 0x271068u: goto label_271068;
        case 0x27106cu: goto label_27106c;
        case 0x271070u: goto label_271070;
        case 0x271074u: goto label_271074;
        case 0x271078u: goto label_271078;
        case 0x27107cu: goto label_27107c;
        case 0x271080u: goto label_271080;
        case 0x271084u: goto label_271084;
        case 0x271088u: goto label_271088;
        case 0x27108cu: goto label_27108c;
        case 0x271090u: goto label_271090;
        case 0x271094u: goto label_271094;
        case 0x271098u: goto label_271098;
        case 0x27109cu: goto label_27109c;
        case 0x2710a0u: goto label_2710a0;
        case 0x2710a4u: goto label_2710a4;
        case 0x2710a8u: goto label_2710a8;
        case 0x2710acu: goto label_2710ac;
        case 0x2710b0u: goto label_2710b0;
        case 0x2710b4u: goto label_2710b4;
        case 0x2710b8u: goto label_2710b8;
        case 0x2710bcu: goto label_2710bc;
        case 0x2710c0u: goto label_2710c0;
        case 0x2710c4u: goto label_2710c4;
        case 0x2710c8u: goto label_2710c8;
        case 0x2710ccu: goto label_2710cc;
        case 0x2710d0u: goto label_2710d0;
        case 0x2710d4u: goto label_2710d4;
        case 0x2710d8u: goto label_2710d8;
        case 0x2710dcu: goto label_2710dc;
        case 0x2710e0u: goto label_2710e0;
        case 0x2710e4u: goto label_2710e4;
        case 0x2710e8u: goto label_2710e8;
        case 0x2710ecu: goto label_2710ec;
        case 0x2710f0u: goto label_2710f0;
        case 0x2710f4u: goto label_2710f4;
        case 0x2710f8u: goto label_2710f8;
        case 0x2710fcu: goto label_2710fc;
        case 0x271100u: goto label_271100;
        case 0x271104u: goto label_271104;
        case 0x271108u: goto label_271108;
        case 0x27110cu: goto label_27110c;
        case 0x271110u: goto label_271110;
        case 0x271114u: goto label_271114;
        case 0x271118u: goto label_271118;
        case 0x27111cu: goto label_27111c;
        case 0x271120u: goto label_271120;
        case 0x271124u: goto label_271124;
        case 0x271128u: goto label_271128;
        case 0x27112cu: goto label_27112c;
        case 0x271130u: goto label_271130;
        case 0x271134u: goto label_271134;
        case 0x271138u: goto label_271138;
        case 0x27113cu: goto label_27113c;
        case 0x271140u: goto label_271140;
        case 0x271144u: goto label_271144;
        case 0x271148u: goto label_271148;
        case 0x27114cu: goto label_27114c;
        case 0x271150u: goto label_271150;
        case 0x271154u: goto label_271154;
        case 0x271158u: goto label_271158;
        case 0x27115cu: goto label_27115c;
        case 0x271160u: goto label_271160;
        case 0x271164u: goto label_271164;
        case 0x271168u: goto label_271168;
        case 0x27116cu: goto label_27116c;
        case 0x271170u: goto label_271170;
        case 0x271174u: goto label_271174;
        case 0x271178u: goto label_271178;
        case 0x27117cu: goto label_27117c;
        case 0x271180u: goto label_271180;
        case 0x271184u: goto label_271184;
        case 0x271188u: goto label_271188;
        case 0x27118cu: goto label_27118c;
        case 0x271190u: goto label_271190;
        case 0x271194u: goto label_271194;
        case 0x271198u: goto label_271198;
        case 0x27119cu: goto label_27119c;
        case 0x2711a0u: goto label_2711a0;
        case 0x2711a4u: goto label_2711a4;
        case 0x2711a8u: goto label_2711a8;
        case 0x2711acu: goto label_2711ac;
        case 0x2711b0u: goto label_2711b0;
        case 0x2711b4u: goto label_2711b4;
        case 0x2711b8u: goto label_2711b8;
        case 0x2711bcu: goto label_2711bc;
        case 0x2711c0u: goto label_2711c0;
        case 0x2711c4u: goto label_2711c4;
        case 0x2711c8u: goto label_2711c8;
        case 0x2711ccu: goto label_2711cc;
        case 0x2711d0u: goto label_2711d0;
        case 0x2711d4u: goto label_2711d4;
        case 0x2711d8u: goto label_2711d8;
        case 0x2711dcu: goto label_2711dc;
        case 0x2711e0u: goto label_2711e0;
        case 0x2711e4u: goto label_2711e4;
        case 0x2711e8u: goto label_2711e8;
        case 0x2711ecu: goto label_2711ec;
        case 0x2711f0u: goto label_2711f0;
        case 0x2711f4u: goto label_2711f4;
        case 0x2711f8u: goto label_2711f8;
        case 0x2711fcu: goto label_2711fc;
        case 0x271200u: goto label_271200;
        case 0x271204u: goto label_271204;
        case 0x271208u: goto label_271208;
        case 0x27120cu: goto label_27120c;
        case 0x271210u: goto label_271210;
        case 0x271214u: goto label_271214;
        case 0x271218u: goto label_271218;
        case 0x27121cu: goto label_27121c;
        case 0x271220u: goto label_271220;
        case 0x271224u: goto label_271224;
        case 0x271228u: goto label_271228;
        case 0x27122cu: goto label_27122c;
        case 0x271230u: goto label_271230;
        case 0x271234u: goto label_271234;
        case 0x271238u: goto label_271238;
        case 0x27123cu: goto label_27123c;
        case 0x271240u: goto label_271240;
        case 0x271244u: goto label_271244;
        case 0x271248u: goto label_271248;
        case 0x27124cu: goto label_27124c;
        case 0x271250u: goto label_271250;
        case 0x271254u: goto label_271254;
        case 0x271258u: goto label_271258;
        case 0x27125cu: goto label_27125c;
        case 0x271260u: goto label_271260;
        case 0x271264u: goto label_271264;
        case 0x271268u: goto label_271268;
        case 0x27126cu: goto label_27126c;
        case 0x271270u: goto label_271270;
        case 0x271274u: goto label_271274;
        case 0x271278u: goto label_271278;
        case 0x27127cu: goto label_27127c;
        case 0x271280u: goto label_271280;
        case 0x271284u: goto label_271284;
        case 0x271288u: goto label_271288;
        case 0x27128cu: goto label_27128c;
        case 0x271290u: goto label_271290;
        case 0x271294u: goto label_271294;
        case 0x271298u: goto label_271298;
        case 0x27129cu: goto label_27129c;
        case 0x2712a0u: goto label_2712a0;
        case 0x2712a4u: goto label_2712a4;
        case 0x2712a8u: goto label_2712a8;
        case 0x2712acu: goto label_2712ac;
        case 0x2712b0u: goto label_2712b0;
        case 0x2712b4u: goto label_2712b4;
        case 0x2712b8u: goto label_2712b8;
        case 0x2712bcu: goto label_2712bc;
        case 0x2712c0u: goto label_2712c0;
        case 0x2712c4u: goto label_2712c4;
        case 0x2712c8u: goto label_2712c8;
        case 0x2712ccu: goto label_2712cc;
        case 0x2712d0u: goto label_2712d0;
        case 0x2712d4u: goto label_2712d4;
        case 0x2712d8u: goto label_2712d8;
        case 0x2712dcu: goto label_2712dc;
        case 0x2712e0u: goto label_2712e0;
        case 0x2712e4u: goto label_2712e4;
        case 0x2712e8u: goto label_2712e8;
        case 0x2712ecu: goto label_2712ec;
        case 0x2712f0u: goto label_2712f0;
        case 0x2712f4u: goto label_2712f4;
        case 0x2712f8u: goto label_2712f8;
        case 0x2712fcu: goto label_2712fc;
        case 0x271300u: goto label_271300;
        case 0x271304u: goto label_271304;
        case 0x271308u: goto label_271308;
        case 0x27130cu: goto label_27130c;
        case 0x271310u: goto label_271310;
        case 0x271314u: goto label_271314;
        case 0x271318u: goto label_271318;
        case 0x27131cu: goto label_27131c;
        case 0x271320u: goto label_271320;
        case 0x271324u: goto label_271324;
        case 0x271328u: goto label_271328;
        case 0x27132cu: goto label_27132c;
        case 0x271330u: goto label_271330;
        case 0x271334u: goto label_271334;
        case 0x271338u: goto label_271338;
        case 0x27133cu: goto label_27133c;
        case 0x271340u: goto label_271340;
        case 0x271344u: goto label_271344;
        case 0x271348u: goto label_271348;
        case 0x27134cu: goto label_27134c;
        case 0x271350u: goto label_271350;
        case 0x271354u: goto label_271354;
        case 0x271358u: goto label_271358;
        case 0x27135cu: goto label_27135c;
        case 0x271360u: goto label_271360;
        case 0x271364u: goto label_271364;
        case 0x271368u: goto label_271368;
        case 0x27136cu: goto label_27136c;
        case 0x271370u: goto label_271370;
        case 0x271374u: goto label_271374;
        case 0x271378u: goto label_271378;
        case 0x27137cu: goto label_27137c;
        case 0x271380u: goto label_271380;
        case 0x271384u: goto label_271384;
        case 0x271388u: goto label_271388;
        case 0x27138cu: goto label_27138c;
        case 0x271390u: goto label_271390;
        case 0x271394u: goto label_271394;
        case 0x271398u: goto label_271398;
        case 0x27139cu: goto label_27139c;
        case 0x2713a0u: goto label_2713a0;
        case 0x2713a4u: goto label_2713a4;
        case 0x2713a8u: goto label_2713a8;
        case 0x2713acu: goto label_2713ac;
        case 0x2713b0u: goto label_2713b0;
        case 0x2713b4u: goto label_2713b4;
        case 0x2713b8u: goto label_2713b8;
        case 0x2713bcu: goto label_2713bc;
        case 0x2713c0u: goto label_2713c0;
        case 0x2713c4u: goto label_2713c4;
        case 0x2713c8u: goto label_2713c8;
        case 0x2713ccu: goto label_2713cc;
        case 0x2713d0u: goto label_2713d0;
        case 0x2713d4u: goto label_2713d4;
        case 0x2713d8u: goto label_2713d8;
        case 0x2713dcu: goto label_2713dc;
        case 0x2713e0u: goto label_2713e0;
        case 0x2713e4u: goto label_2713e4;
        case 0x2713e8u: goto label_2713e8;
        case 0x2713ecu: goto label_2713ec;
        case 0x2713f0u: goto label_2713f0;
        case 0x2713f4u: goto label_2713f4;
        case 0x2713f8u: goto label_2713f8;
        case 0x2713fcu: goto label_2713fc;
        case 0x271400u: goto label_271400;
        case 0x271404u: goto label_271404;
        case 0x271408u: goto label_271408;
        case 0x27140cu: goto label_27140c;
        case 0x271410u: goto label_271410;
        case 0x271414u: goto label_271414;
        case 0x271418u: goto label_271418;
        case 0x27141cu: goto label_27141c;
        case 0x271420u: goto label_271420;
        case 0x271424u: goto label_271424;
        case 0x271428u: goto label_271428;
        case 0x27142cu: goto label_27142c;
        case 0x271430u: goto label_271430;
        case 0x271434u: goto label_271434;
        case 0x271438u: goto label_271438;
        case 0x27143cu: goto label_27143c;
        case 0x271440u: goto label_271440;
        case 0x271444u: goto label_271444;
        case 0x271448u: goto label_271448;
        case 0x27144cu: goto label_27144c;
        case 0x271450u: goto label_271450;
        case 0x271454u: goto label_271454;
        case 0x271458u: goto label_271458;
        case 0x27145cu: goto label_27145c;
        case 0x271460u: goto label_271460;
        case 0x271464u: goto label_271464;
        case 0x271468u: goto label_271468;
        case 0x27146cu: goto label_27146c;
        case 0x271470u: goto label_271470;
        case 0x271474u: goto label_271474;
        case 0x271478u: goto label_271478;
        case 0x27147cu: goto label_27147c;
        case 0x271480u: goto label_271480;
        case 0x271484u: goto label_271484;
        case 0x271488u: goto label_271488;
        case 0x27148cu: goto label_27148c;
        case 0x271490u: goto label_271490;
        case 0x271494u: goto label_271494;
        case 0x271498u: goto label_271498;
        case 0x27149cu: goto label_27149c;
        case 0x2714a0u: goto label_2714a0;
        case 0x2714a4u: goto label_2714a4;
        case 0x2714a8u: goto label_2714a8;
        case 0x2714acu: goto label_2714ac;
        case 0x2714b0u: goto label_2714b0;
        case 0x2714b4u: goto label_2714b4;
        case 0x2714b8u: goto label_2714b8;
        case 0x2714bcu: goto label_2714bc;
        case 0x2714c0u: goto label_2714c0;
        case 0x2714c4u: goto label_2714c4;
        case 0x2714c8u: goto label_2714c8;
        case 0x2714ccu: goto label_2714cc;
        case 0x2714d0u: goto label_2714d0;
        case 0x2714d4u: goto label_2714d4;
        case 0x2714d8u: goto label_2714d8;
        case 0x2714dcu: goto label_2714dc;
        case 0x2714e0u: goto label_2714e0;
        case 0x2714e4u: goto label_2714e4;
        case 0x2714e8u: goto label_2714e8;
        case 0x2714ecu: goto label_2714ec;
        case 0x2714f0u: goto label_2714f0;
        case 0x2714f4u: goto label_2714f4;
        case 0x2714f8u: goto label_2714f8;
        case 0x2714fcu: goto label_2714fc;
        case 0x271500u: goto label_271500;
        case 0x271504u: goto label_271504;
        case 0x271508u: goto label_271508;
        case 0x27150cu: goto label_27150c;
        case 0x271510u: goto label_271510;
        case 0x271514u: goto label_271514;
        case 0x271518u: goto label_271518;
        case 0x27151cu: goto label_27151c;
        case 0x271520u: goto label_271520;
        case 0x271524u: goto label_271524;
        case 0x271528u: goto label_271528;
        case 0x27152cu: goto label_27152c;
        case 0x271530u: goto label_271530;
        case 0x271534u: goto label_271534;
        case 0x271538u: goto label_271538;
        case 0x27153cu: goto label_27153c;
        case 0x271540u: goto label_271540;
        case 0x271544u: goto label_271544;
        case 0x271548u: goto label_271548;
        case 0x27154cu: goto label_27154c;
        case 0x271550u: goto label_271550;
        case 0x271554u: goto label_271554;
        case 0x271558u: goto label_271558;
        case 0x27155cu: goto label_27155c;
        case 0x271560u: goto label_271560;
        case 0x271564u: goto label_271564;
        case 0x271568u: goto label_271568;
        case 0x27156cu: goto label_27156c;
        case 0x271570u: goto label_271570;
        case 0x271574u: goto label_271574;
        case 0x271578u: goto label_271578;
        case 0x27157cu: goto label_27157c;
        case 0x271580u: goto label_271580;
        case 0x271584u: goto label_271584;
        case 0x271588u: goto label_271588;
        case 0x27158cu: goto label_27158c;
        case 0x271590u: goto label_271590;
        case 0x271594u: goto label_271594;
        case 0x271598u: goto label_271598;
        case 0x27159cu: goto label_27159c;
        case 0x2715a0u: goto label_2715a0;
        case 0x2715a4u: goto label_2715a4;
        case 0x2715a8u: goto label_2715a8;
        case 0x2715acu: goto label_2715ac;
        case 0x2715b0u: goto label_2715b0;
        case 0x2715b4u: goto label_2715b4;
        case 0x2715b8u: goto label_2715b8;
        case 0x2715bcu: goto label_2715bc;
        case 0x2715c0u: goto label_2715c0;
        case 0x2715c4u: goto label_2715c4;
        case 0x2715c8u: goto label_2715c8;
        case 0x2715ccu: goto label_2715cc;
        default: return;
    }

label_270e00:
    // 0x270e00: 0x6f08  .word       0x00006F08                   # jr          $zero # 00006F00 <InstrIdType: CPU_SPECIAL>
label_270e04:
    if (ctx->pc == 0x270E04u) {
        ctx->pc = 0x270E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270E00u;
        // 0x270e04: 0xd0c0  sll         $k0, $zero, 3 (Delay Slot)
        SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270E08u;
        goto label_270e08;
    }
    ctx->pc = 0x270E00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x270E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270E00u;
        // 0x270e04: 0xd0c0  sll         $k0, $zero, 3 (Delay Slot)
        SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x270E00u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x270E08u;
label_270e08:
    // 0x270e08: 0x0  nop
    ctx->pc = 0x270e08u;
    // NOP
label_270e0c:
    // 0x270e0c: 0x0  nop
    ctx->pc = 0x270e0cu;
    // NOP
label_270e10:
    // 0x270e10: 0x6f23  .word       0x00006F23                   # negu        $t5, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270e10u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_270e14:
    // 0x270e14: 0x110c0  sll         $v0, $at, 3
    ctx->pc = 0x270e14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 1), 3));
label_270e18:
    // 0x270e18: 0x0  nop
    ctx->pc = 0x270e18u;
    // NOP
label_270e1c:
    // 0x270e1c: 0x0  nop
    ctx->pc = 0x270e1cu;
    // NOP
label_270e20:
    // 0x270e20: 0x6f46  .word       0x00006F46                   # srlv        $t5, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270e20u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_270e24:
    // 0x270e24: 0xd750  .word       0x0000D750                   # mfhi        $k0 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270e24u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_270e28:
    // 0x270e28: 0x0  nop
    ctx->pc = 0x270e28u;
    // NOP
label_270e2c:
    // 0x270e2c: 0x0  nop
    ctx->pc = 0x270e2cu;
    // NOP
label_270e30:
    // 0x270e30: 0x6f61  .word       0x00006F61                   # addu        $t5, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270e30u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_270e34:
    // 0x270e34: 0x8be0  .word       0x00008BE0                   # add         $s1, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270e34u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_270e38:
    // 0x270e38: 0x0  nop
    ctx->pc = 0x270e38u;
    // NOP
label_270e3c:
    // 0x270e3c: 0x0  nop
    ctx->pc = 0x270e3cu;
    // NOP
label_270e40:
    // 0x270e40: 0x6f73  tltu        $zero, $zero, 445
    ctx->pc = 0x270e40u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_270e44:
    // 0x270e44: 0xb960  .word       0x0000B960                   # add         $s7, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270e44u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_270e48:
    // 0x270e48: 0x0  nop
    ctx->pc = 0x270e48u;
    // NOP
label_270e4c:
    // 0x270e4c: 0x0  nop
    ctx->pc = 0x270e4cu;
    // NOP
label_270e50:
    // 0x270e50: 0x6f8b  .word       0x00006F8B                   # movn        $t5, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270e50u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 13, GPR_VEC(ctx, 0));
label_270e54:
    // 0x270e54: 0xeca0  .word       0x0000ECA0                   # add         $sp, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270e54u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 29, (int32_t)result);     } }
label_270e58:
    // 0x270e58: 0x0  nop
    ctx->pc = 0x270e58u;
    // NOP
label_270e5c:
    // 0x270e5c: 0x0  nop
    ctx->pc = 0x270e5cu;
    // NOP
label_270e60:
    // 0x270e60: 0x6fa9  .word       0x00006FA9                   # mtsa        $zero # 00006F80 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x270e60u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_270e64:
    // 0x270e64: 0xe490  .word       0x0000E490                   # mfhi        $gp # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270e64u;
    SET_GPR_U64(ctx, 28, ctx->hi);
label_270e68:
    // 0x270e68: 0x0  nop
    ctx->pc = 0x270e68u;
    // NOP
label_270e6c:
    // 0x270e6c: 0x0  nop
    ctx->pc = 0x270e6cu;
    // NOP
label_270e70:
    // 0x270e70: 0x6fc6  .word       0x00006FC6                   # srlv        $t5, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270e70u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_270e74:
    // 0x270e74: 0xef00  sll         $sp, $zero, 28
    ctx->pc = 0x270e74u;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_270e78:
    // 0x270e78: 0x0  nop
    ctx->pc = 0x270e78u;
    // NOP
label_270e7c:
    // 0x270e7c: 0x0  nop
    ctx->pc = 0x270e7cu;
    // NOP
label_270e80:
    // 0x270e80: 0x6fe4  .word       0x00006FE4                   # and         $t5, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270e80u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_270e84:
    // 0x270e84: 0x11110  .word       0x00011110                   # mfhi        $v0 # 00010100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270e84u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_270e88:
    // 0x270e88: 0x0  nop
    ctx->pc = 0x270e88u;
    // NOP
label_270e8c:
    // 0x270e8c: 0x0  nop
    ctx->pc = 0x270e8cu;
    // NOP
label_270e90:
    // 0x270e90: 0x7007  srav        $t6, $zero, $zero
    ctx->pc = 0x270e90u;
    SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_270e94:
    // 0x270e94: 0xec10  .word       0x0000EC10                   # mfhi        $sp # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270e94u;
    SET_GPR_U64(ctx, 29, ctx->hi);
label_270e98:
    // 0x270e98: 0x0  nop
    ctx->pc = 0x270e98u;
    // NOP
label_270e9c:
    // 0x270e9c: 0x0  nop
    ctx->pc = 0x270e9cu;
    // NOP
label_270ea0:
    // 0x270ea0: 0x7025  move        $t6, $zero
    ctx->pc = 0x270ea0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_270ea4:
    // 0x270ea4: 0x9cc0  sll         $s3, $zero, 19
    ctx->pc = 0x270ea4u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_270ea8:
    // 0x270ea8: 0x0  nop
    ctx->pc = 0x270ea8u;
    // NOP
label_270eac:
    // 0x270eac: 0x0  nop
    ctx->pc = 0x270eacu;
    // NOP
label_270eb0:
    // 0x270eb0: 0x7039  .word       0x00007039                   # INVALID     $zero, $zero, 0x7039 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270eb0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x270EB0 raw=0x00007039"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_270eb4:
    // 0x270eb4: 0x10700  sll         $zero, $at, 28
    ctx->pc = 0x270eb4u;
    
label_270eb8:
    // 0x270eb8: 0x0  nop
    ctx->pc = 0x270eb8u;
    // NOP
label_270ebc:
    // 0x270ebc: 0x0  nop
    ctx->pc = 0x270ebcu;
    // NOP
label_270ec0:
    // 0x270ec0: 0x705a  .word       0x0000705A                   # div         $t6, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270ec0u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_270ec4:
    // 0x270ec4: 0xf760  .word       0x0000F760                   # add         $fp, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270ec4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_270ec8:
    // 0x270ec8: 0x0  nop
    ctx->pc = 0x270ec8u;
    // NOP
label_270ecc:
    // 0x270ecc: 0x0  nop
    ctx->pc = 0x270eccu;
    // NOP
label_270ed0:
    // 0x270ed0: 0x7079  .word       0x00007079                   # INVALID     $zero, $zero, 0x7079 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270ed0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x270ED0 raw=0x00007079"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_270ed4:
    // 0x270ed4: 0x104d0  .word       0x000104D0                   # mfhi        $zero # 000104C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270ed4u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_270ed8:
    // 0x270ed8: 0x0  nop
    ctx->pc = 0x270ed8u;
    // NOP
label_270edc:
    // 0x270edc: 0x0  nop
    ctx->pc = 0x270edcu;
    // NOP
label_270ee0:
    // 0x270ee0: 0x709a  .word       0x0000709A                   # div         $t6, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270ee0u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_270ee4:
    // 0x270ee4: 0xcfe0  .word       0x0000CFE0                   # add         $t9, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270ee4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
label_270ee8:
    // 0x270ee8: 0x0  nop
    ctx->pc = 0x270ee8u;
    // NOP
label_270eec:
    // 0x270eec: 0x0  nop
    ctx->pc = 0x270eecu;
    // NOP
label_270ef0:
    // 0x270ef0: 0x70b4  teq         $zero, $zero, 450
    ctx->pc = 0x270ef0u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_270ef4:
    // 0x270ef4: 0xfba0  .word       0x0000FBA0                   # add         $ra, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270ef4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 31, (int32_t)result);     } }
label_270ef8:
    // 0x270ef8: 0x0  nop
    ctx->pc = 0x270ef8u;
    // NOP
label_270efc:
    // 0x270efc: 0x0  nop
    ctx->pc = 0x270efcu;
    // NOP
label_270f00:
    // 0x270f00: 0x70d4  .word       0x000070D4                   # dsllv       $t6, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270f00u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_270f04:
    // 0x270f04: 0xc8d0  .word       0x0000C8D0                   # mfhi        $t9 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270f04u;
    SET_GPR_U64(ctx, 25, ctx->hi);
label_270f08:
    // 0x270f08: 0x0  nop
    ctx->pc = 0x270f08u;
    // NOP
label_270f0c:
    // 0x270f0c: 0x0  nop
    ctx->pc = 0x270f0cu;
    // NOP
label_270f10:
    // 0x270f10: 0x70ee  .word       0x000070EE                   # dsub        $t6, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270f10u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, r); }
label_270f14:
    // 0x270f14: 0xe4c0  sll         $gp, $zero, 19
    ctx->pc = 0x270f14u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_270f18:
    // 0x270f18: 0x0  nop
    ctx->pc = 0x270f18u;
    // NOP
label_270f1c:
    // 0x270f1c: 0x0  nop
    ctx->pc = 0x270f1cu;
    // NOP
label_270f20:
    // 0x270f20: 0x710b  .word       0x0000710B                   # movn        $t6, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270f20u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 14, GPR_VEC(ctx, 0));
label_270f24:
    // 0x270f24: 0xfd90  .word       0x0000FD90                   # mfhi        $ra # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270f24u;
    SET_GPR_U64(ctx, 31, ctx->hi);
label_270f28:
    // 0x270f28: 0x0  nop
    ctx->pc = 0x270f28u;
    // NOP
label_270f2c:
    // 0x270f2c: 0x0  nop
    ctx->pc = 0x270f2cu;
    // NOP
label_270f30:
    // 0x270f30: 0x712b  .word       0x0000712B                   # sltu        $t6, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270f30u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_270f34:
    // 0x270f34: 0xed50  .word       0x0000ED50                   # mfhi        $sp # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270f34u;
    SET_GPR_U64(ctx, 29, ctx->hi);
label_270f38:
    // 0x270f38: 0x0  nop
    ctx->pc = 0x270f38u;
    // NOP
label_270f3c:
    // 0x270f3c: 0x0  nop
    ctx->pc = 0x270f3cu;
    // NOP
label_270f40:
    // 0x270f40: 0x7149  .word       0x00007149                   # jalr        $t6, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
label_270f44:
    if (ctx->pc == 0x270F44u) {
        ctx->pc = 0x270F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270F40u;
        // 0x270f44: 0xcf50  .word       0x0000CF50                   # mfhi        $t9 # 00000740 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 25, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x270F48u;
        goto label_270f48;
    }
    ctx->pc = 0x270F40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 14, 0x270F48u);
        ctx->pc = 0x270F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270F40u;
        // 0x270f44: 0xcf50  .word       0x0000CF50                   # mfhi        $t9 # 00000740 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 25, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x270F40u, 0x270F48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x270F48u;
label_270f48:
    // 0x270f48: 0x0  nop
    ctx->pc = 0x270f48u;
    // NOP
label_270f4c:
    // 0x270f4c: 0x0  nop
    ctx->pc = 0x270f4cu;
    // NOP
label_270f50:
    // 0x270f50: 0x7163  .word       0x00007163                   # negu        $t6, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270f50u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_270f54:
    // 0x270f54: 0xdd00  sll         $k1, $zero, 20
    ctx->pc = 0x270f54u;
    SET_GPR_S32(ctx, 27, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
label_270f58:
    // 0x270f58: 0x0  nop
    ctx->pc = 0x270f58u;
    // NOP
label_270f5c:
    // 0x270f5c: 0x0  nop
    ctx->pc = 0x270f5cu;
    // NOP
label_270f60:
    // 0x270f60: 0x717f  dsra32      $t6, $zero, 5
    ctx->pc = 0x270f60u;
    SET_GPR_S64(ctx, 14, GPR_S64(ctx, 0) >> (32 + 5));
label_270f64:
    // 0x270f64: 0xd6c0  sll         $k0, $zero, 27
    ctx->pc = 0x270f64u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_270f68:
    // 0x270f68: 0x0  nop
    ctx->pc = 0x270f68u;
    // NOP
label_270f6c:
    // 0x270f6c: 0x0  nop
    ctx->pc = 0x270f6cu;
    // NOP
label_270f70:
    // 0x270f70: 0x719a  .word       0x0000719A                   # div         $t6, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270f70u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_270f74:
    // 0x270f74: 0x8760  .word       0x00008760                   # add         $s0, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270f74u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_270f78:
    // 0x270f78: 0x0  nop
    ctx->pc = 0x270f78u;
    // NOP
label_270f7c:
    // 0x270f7c: 0x0  nop
    ctx->pc = 0x270f7cu;
    // NOP
label_270f80:
    // 0x270f80: 0x71ab  .word       0x000071AB                   # sltu        $t6, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270f80u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_270f84:
    // 0x270f84: 0x8d10  .word       0x00008D10                   # mfhi        $s1 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270f84u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_270f88:
    // 0x270f88: 0x0  nop
    ctx->pc = 0x270f88u;
    // NOP
label_270f8c:
    // 0x270f8c: 0x0  nop
    ctx->pc = 0x270f8cu;
    // NOP
label_270f90:
    // 0x270f90: 0x71bd  .word       0x000071BD                   # INVALID     $zero, $zero, 0x71BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270f90u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x270F90 raw=0x000071BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_270f94:
    // 0x270f94: 0x12030  tge         $zero, $at, 128
    ctx->pc = 0x270f94u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_270f98:
    // 0x270f98: 0x0  nop
    ctx->pc = 0x270f98u;
    // NOP
label_270f9c:
    // 0x270f9c: 0x0  nop
    ctx->pc = 0x270f9cu;
    // NOP
label_270fa0:
    // 0x270fa0: 0x71e2  .word       0x000071E2                   # neg         $t6, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270fa0u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 14, (int32_t)tmp); }
label_270fa4:
    // 0x270fa4: 0x9b00  sll         $s3, $zero, 12
    ctx->pc = 0x270fa4u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_270fa8:
    // 0x270fa8: 0x0  nop
    ctx->pc = 0x270fa8u;
    // NOP
label_270fac:
    // 0x270fac: 0x0  nop
    ctx->pc = 0x270facu;
    // NOP
label_270fb0:
    // 0x270fb0: 0x71f6  tne         $zero, $zero, 455
    ctx->pc = 0x270fb0u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_270fb4:
    // 0x270fb4: 0x9ba0  .word       0x00009BA0                   # add         $s3, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270fb4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_270fb8:
    // 0x270fb8: 0x0  nop
    ctx->pc = 0x270fb8u;
    // NOP
label_270fbc:
    // 0x270fbc: 0x0  nop
    ctx->pc = 0x270fbcu;
    // NOP
label_270fc0:
    // 0x270fc0: 0x720a  .word       0x0000720A                   # movz        $t6, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270fc0u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 14, GPR_VEC(ctx, 0));
label_270fc4:
    // 0x270fc4: 0xa960  .word       0x0000A960                   # add         $s5, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270fc4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_270fc8:
    // 0x270fc8: 0x0  nop
    ctx->pc = 0x270fc8u;
    // NOP
label_270fcc:
    // 0x270fcc: 0x0  nop
    ctx->pc = 0x270fccu;
    // NOP
label_270fd0:
    // 0x270fd0: 0x7220  .word       0x00007220                   # add         $t6, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270fd0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_270fd4:
    // 0x270fd4: 0x9060  .word       0x00009060                   # add         $s2, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270fd4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_270fd8:
    // 0x270fd8: 0x0  nop
    ctx->pc = 0x270fd8u;
    // NOP
label_270fdc:
    // 0x270fdc: 0x0  nop
    ctx->pc = 0x270fdcu;
    // NOP
label_270fe0:
    // 0x270fe0: 0x7233  tltu        $zero, $zero, 456
    ctx->pc = 0x270fe0u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_270fe4:
    // 0x270fe4: 0xd950  .word       0x0000D950                   # mfhi        $k1 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270fe4u;
    SET_GPR_U64(ctx, 27, ctx->hi);
label_270fe8:
    // 0x270fe8: 0x0  nop
    ctx->pc = 0x270fe8u;
    // NOP
label_270fec:
    // 0x270fec: 0x0  nop
    ctx->pc = 0x270fecu;
    // NOP
label_270ff0:
    // 0x270ff0: 0x724f  .word       0x0000724F                   # sync # 00007000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270ff0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_270ff4:
    // 0x270ff4: 0xfa70  tge         $zero, $zero, 1001
    ctx->pc = 0x270ff4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_270ff8:
    // 0x270ff8: 0x0  nop
    ctx->pc = 0x270ff8u;
    // NOP
label_270ffc:
    // 0x270ffc: 0x0  nop
    ctx->pc = 0x270ffcu;
    // NOP
label_271000:
    // 0x271000: 0x726f  .word       0x0000726F                   # dsubu       $t6, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271000u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_271004:
    // 0x271004: 0xcbe0  .word       0x0000CBE0                   # add         $t9, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271004u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
label_271008:
    // 0x271008: 0x0  nop
    ctx->pc = 0x271008u;
    // NOP
label_27100c:
    // 0x27100c: 0x0  nop
    ctx->pc = 0x27100cu;
    // NOP
label_271010:
    // 0x271010: 0x7289  .word       0x00007289                   # jalr        $t6, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
label_271014:
    if (ctx->pc == 0x271014u) {
        ctx->pc = 0x271014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271010u;
        // 0x271014: 0xd550  .word       0x0000D550                   # mfhi        $k0 # 00000540 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 26, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x271018u;
        goto label_271018;
    }
    ctx->pc = 0x271010u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 14, 0x271018u);
        ctx->pc = 0x271014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271010u;
        // 0x271014: 0xd550  .word       0x0000D550                   # mfhi        $k0 # 00000540 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 26, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x271010u, 0x271018u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x271018u;
label_271018:
    // 0x271018: 0x0  nop
    ctx->pc = 0x271018u;
    // NOP
label_27101c:
    // 0x27101c: 0x0  nop
    ctx->pc = 0x27101cu;
    // NOP
label_271020:
    // 0x271020: 0x72a4  .word       0x000072A4                   # and         $t6, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271020u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_271024:
    // 0x271024: 0xb970  tge         $zero, $zero, 741
    ctx->pc = 0x271024u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_271028:
    // 0x271028: 0x0  nop
    ctx->pc = 0x271028u;
    // NOP
label_27102c:
    // 0x27102c: 0x0  nop
    ctx->pc = 0x27102cu;
    // NOP
label_271030:
    // 0x271030: 0x72bc  dsll32      $t6, $zero, 10
    ctx->pc = 0x271030u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) << (32 + 10));
label_271034:
    // 0x271034: 0xdd50  .word       0x0000DD50                   # mfhi        $k1 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271034u;
    SET_GPR_U64(ctx, 27, ctx->hi);
label_271038:
    // 0x271038: 0x0  nop
    ctx->pc = 0x271038u;
    // NOP
label_27103c:
    // 0x27103c: 0x0  nop
    ctx->pc = 0x27103cu;
    // NOP
label_271040:
    // 0x271040: 0x72d8  .word       0x000072D8                   # mult        $t6, $zero, $zero # 000002C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x271040u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
label_271044:
    // 0x271044: 0xb950  .word       0x0000B950                   # mfhi        $s7 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271044u;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_271048:
    // 0x271048: 0x0  nop
    ctx->pc = 0x271048u;
    // NOP
label_27104c:
    // 0x27104c: 0x0  nop
    ctx->pc = 0x27104cu;
    // NOP
label_271050:
    // 0x271050: 0x72f0  tge         $zero, $zero, 459
    ctx->pc = 0x271050u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_271054:
    // 0x271054: 0xa4f0  tge         $zero, $zero, 659
    ctx->pc = 0x271054u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_271058:
    // 0x271058: 0x0  nop
    ctx->pc = 0x271058u;
    // NOP
label_27105c:
    // 0x27105c: 0x0  nop
    ctx->pc = 0x27105cu;
    // NOP
label_271060:
    // 0x271060: 0x7305  .word       0x00007305                   # INVALID     $zero, $zero, 0x7305 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271060u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x271060 raw=0x00007305"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_271064:
    // 0x271064: 0xa310  .word       0x0000A310                   # mfhi        $s4 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271064u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_271068:
    // 0x271068: 0x0  nop
    ctx->pc = 0x271068u;
    // NOP
label_27106c:
    // 0x27106c: 0x0  nop
    ctx->pc = 0x27106cu;
    // NOP
label_271070:
    // 0x271070: 0x731a  .word       0x0000731A                   # div         $t6, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271070u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_271074:
    // 0x271074: 0xadf0  tge         $zero, $zero, 695
    ctx->pc = 0x271074u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_271078:
    // 0x271078: 0x0  nop
    ctx->pc = 0x271078u;
    // NOP
label_27107c:
    // 0x27107c: 0x0  nop
    ctx->pc = 0x27107cu;
    // NOP
label_271080:
    // 0x271080: 0x7330  tge         $zero, $zero, 460
    ctx->pc = 0x271080u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_271084:
    // 0x271084: 0xc940  sll         $t9, $zero, 5
    ctx->pc = 0x271084u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 0), 5));
label_271088:
    // 0x271088: 0x0  nop
    ctx->pc = 0x271088u;
    // NOP
label_27108c:
    // 0x27108c: 0x0  nop
    ctx->pc = 0x27108cu;
    // NOP
label_271090:
    // 0x271090: 0x734a  .word       0x0000734A                   # movz        $t6, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271090u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 14, GPR_VEC(ctx, 0));
label_271094:
    // 0x271094: 0xed20  .word       0x0000ED20                   # add         $sp, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271094u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 29, (int32_t)result);     } }
label_271098:
    // 0x271098: 0x0  nop
    ctx->pc = 0x271098u;
    // NOP
label_27109c:
    // 0x27109c: 0x0  nop
    ctx->pc = 0x27109cu;
    // NOP
label_2710a0:
    // 0x2710a0: 0x7368  .word       0x00007368                   # mfsa        $t6 # 00000340 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2710a0u;
    SET_GPR_U32(ctx, 14, ctx->sa);
label_2710a4:
    // 0x2710a4: 0x88c0  sll         $s1, $zero, 3
    ctx->pc = 0x2710a4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_2710a8:
    // 0x2710a8: 0x0  nop
    ctx->pc = 0x2710a8u;
    // NOP
label_2710ac:
    // 0x2710ac: 0x0  nop
    ctx->pc = 0x2710acu;
    // NOP
label_2710b0:
    // 0x2710b0: 0x737a  dsrl        $t6, $zero, 13
    ctx->pc = 0x2710b0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) >> 13);
label_2710b4:
    // 0x2710b4: 0xdbe0  .word       0x0000DBE0                   # add         $k1, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2710b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 27, (int32_t)result);     } }
label_2710b8:
    // 0x2710b8: 0x0  nop
    ctx->pc = 0x2710b8u;
    // NOP
label_2710bc:
    // 0x2710bc: 0x0  nop
    ctx->pc = 0x2710bcu;
    // NOP
label_2710c0:
    // 0x2710c0: 0x7396  .word       0x00007396                   # dsrlv       $t6, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2710c0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_2710c4:
    // 0x2710c4: 0xade0  .word       0x0000ADE0                   # add         $s5, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2710c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_2710c8:
    // 0x2710c8: 0x0  nop
    ctx->pc = 0x2710c8u;
    // NOP
label_2710cc:
    // 0x2710cc: 0x0  nop
    ctx->pc = 0x2710ccu;
    // NOP
label_2710d0:
    // 0x2710d0: 0x73ac  .word       0x000073AC                   # dadd        $t6, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2710d0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, r); }
label_2710d4:
    // 0x2710d4: 0xafe0  .word       0x0000AFE0                   # add         $s5, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2710d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_2710d8:
    // 0x2710d8: 0x0  nop
    ctx->pc = 0x2710d8u;
    // NOP
label_2710dc:
    // 0x2710dc: 0x0  nop
    ctx->pc = 0x2710dcu;
    // NOP
label_2710e0:
    // 0x2710e0: 0x73c2  srl         $t6, $zero, 15
    ctx->pc = 0x2710e0u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 0), 15));
label_2710e4:
    // 0x2710e4: 0xdb60  .word       0x0000DB60                   # add         $k1, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2710e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 27, (int32_t)result);     } }
label_2710e8:
    // 0x2710e8: 0x0  nop
    ctx->pc = 0x2710e8u;
    // NOP
label_2710ec:
    // 0x2710ec: 0x0  nop
    ctx->pc = 0x2710ecu;
    // NOP
label_2710f0:
    // 0x2710f0: 0x73de  .word       0x000073DE                   # ddiv        $t6, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2710f0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x2710F0 raw=0x000073DE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2710f4:
    // 0x2710f4: 0xade0  .word       0x0000ADE0                   # add         $s5, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2710f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_2710f8:
    // 0x2710f8: 0x0  nop
    ctx->pc = 0x2710f8u;
    // NOP
label_2710fc:
    // 0x2710fc: 0x0  nop
    ctx->pc = 0x2710fcu;
    // NOP
label_271100:
    // 0x271100: 0x73f4  teq         $zero, $zero, 463
    ctx->pc = 0x271100u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_271104:
    // 0x271104: 0xe990  .word       0x0000E990                   # mfhi        $sp # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271104u;
    SET_GPR_U64(ctx, 29, ctx->hi);
label_271108:
    // 0x271108: 0x0  nop
    ctx->pc = 0x271108u;
    // NOP
label_27110c:
    // 0x27110c: 0x0  nop
    ctx->pc = 0x27110cu;
    // NOP
label_271110:
    // 0x271110: 0x7412  .word       0x00007412                   # mflo        $t6 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271110u;
    SET_GPR_U64(ctx, 14, ctx->lo);
label_271114:
    // 0x271114: 0xfc80  sll         $ra, $zero, 18
    ctx->pc = 0x271114u;
    SET_GPR_S32(ctx, 31, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
label_271118:
    // 0x271118: 0x0  nop
    ctx->pc = 0x271118u;
    // NOP
label_27111c:
    // 0x27111c: 0x0  nop
    ctx->pc = 0x27111cu;
    // NOP
label_271120:
    // 0x271120: 0x7432  tlt         $zero, $zero, 464
    ctx->pc = 0x271120u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_271124:
    // 0x271124: 0xb7f0  tge         $zero, $zero, 735
    ctx->pc = 0x271124u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_271128:
    // 0x271128: 0x0  nop
    ctx->pc = 0x271128u;
    // NOP
label_27112c:
    // 0x27112c: 0x0  nop
    ctx->pc = 0x27112cu;
    // NOP
label_271130:
    // 0x271130: 0x7449  .word       0x00007449                   # jalr        $t6, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
label_271134:
    if (ctx->pc == 0x271134u) {
        ctx->pc = 0x271134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271130u;
        // 0x271134: 0xc0c0  sll         $t8, $zero, 3 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271138u;
        goto label_271138;
    }
    ctx->pc = 0x271130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 14, 0x271138u);
        ctx->pc = 0x271134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271130u;
        // 0x271134: 0xc0c0  sll         $t8, $zero, 3 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x271130u, 0x271138u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x271138u;
label_271138:
    // 0x271138: 0x0  nop
    ctx->pc = 0x271138u;
    // NOP
label_27113c:
    // 0x27113c: 0x0  nop
    ctx->pc = 0x27113cu;
    // NOP
label_271140:
    // 0x271140: 0x7462  .word       0x00007462                   # neg         $t6, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271140u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 14, (int32_t)tmp); }
label_271144:
    // 0x271144: 0x13390  .word       0x00013390                   # mfhi        $a2 # 00010380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271144u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_271148:
    // 0x271148: 0x0  nop
    ctx->pc = 0x271148u;
    // NOP
label_27114c:
    // 0x27114c: 0x0  nop
    ctx->pc = 0x27114cu;
    // NOP
label_271150:
    // 0x271150: 0x7489  .word       0x00007489                   # jalr        $t6, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
label_271154:
    if (ctx->pc == 0x271154u) {
        ctx->pc = 0x271154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271150u;
        // 0x271154: 0xca30  tge         $zero, $zero, 808 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x271158u;
        goto label_271158;
    }
    ctx->pc = 0x271150u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 14, 0x271158u);
        ctx->pc = 0x271154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271150u;
        // 0x271154: 0xca30  tge         $zero, $zero, 808 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x271150u, 0x271158u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x271158u;
label_271158:
    // 0x271158: 0x0  nop
    ctx->pc = 0x271158u;
    // NOP
label_27115c:
    // 0x27115c: 0x0  nop
    ctx->pc = 0x27115cu;
    // NOP
label_271160:
    // 0x271160: 0x74a3  .word       0x000074A3                   # negu        $t6, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271160u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_271164:
    // 0x271164: 0xc280  sll         $t8, $zero, 10
    ctx->pc = 0x271164u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_271168:
    // 0x271168: 0x0  nop
    ctx->pc = 0x271168u;
    // NOP
label_27116c:
    // 0x27116c: 0x0  nop
    ctx->pc = 0x27116cu;
    // NOP
label_271170:
    // 0x271170: 0x74bc  dsll32      $t6, $zero, 18
    ctx->pc = 0x271170u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) << (32 + 18));
label_271174:
    // 0x271174: 0xa550  .word       0x0000A550                   # mfhi        $s4 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271174u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_271178:
    // 0x271178: 0x0  nop
    ctx->pc = 0x271178u;
    // NOP
label_27117c:
    // 0x27117c: 0x0  nop
    ctx->pc = 0x27117cu;
    // NOP
label_271180:
    // 0x271180: 0x74d1  .word       0x000074D1                   # mthi        $zero # 000074C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271180u;
    ctx->hi = GPR_U64(ctx, 0);
label_271184:
    // 0x271184: 0xf030  tge         $zero, $zero, 960
    ctx->pc = 0x271184u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_271188:
    // 0x271188: 0x0  nop
    ctx->pc = 0x271188u;
    // NOP
label_27118c:
    // 0x27118c: 0x0  nop
    ctx->pc = 0x27118cu;
    // NOP
label_271190:
    // 0x271190: 0x74f0  tge         $zero, $zero, 467
    ctx->pc = 0x271190u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_271194:
    // 0x271194: 0xd440  sll         $k0, $zero, 17
    ctx->pc = 0x271194u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_271198:
    // 0x271198: 0x0  nop
    ctx->pc = 0x271198u;
    // NOP
label_27119c:
    // 0x27119c: 0x0  nop
    ctx->pc = 0x27119cu;
    // NOP
label_2711a0:
    // 0x2711a0: 0x750b  .word       0x0000750B                   # movn        $t6, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2711a0u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 14, GPR_VEC(ctx, 0));
label_2711a4:
    // 0x2711a4: 0xc140  sll         $t8, $zero, 5
    ctx->pc = 0x2711a4u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), 5));
label_2711a8:
    // 0x2711a8: 0x0  nop
    ctx->pc = 0x2711a8u;
    // NOP
label_2711ac:
    // 0x2711ac: 0x0  nop
    ctx->pc = 0x2711acu;
    // NOP
label_2711b0:
    // 0x2711b0: 0x7524  .word       0x00007524                   # and         $t6, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2711b0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_2711b4:
    // 0x2711b4: 0x10320  .word       0x00010320                   # add         $zero, $zero, $at # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2711b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_2711b8:
    // 0x2711b8: 0x0  nop
    ctx->pc = 0x2711b8u;
    // NOP
label_2711bc:
    // 0x2711bc: 0x0  nop
    ctx->pc = 0x2711bcu;
    // NOP
label_2711c0:
    // 0x2711c0: 0x7545  .word       0x00007545                   # INVALID     $zero, $zero, 0x7545 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2711c0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2711C0 raw=0x00007545"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2711c4:
    // 0x2711c4: 0x103b0  tge         $zero, $at, 14
    ctx->pc = 0x2711c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_2711c8:
    // 0x2711c8: 0x0  nop
    ctx->pc = 0x2711c8u;
    // NOP
label_2711cc:
    // 0x2711cc: 0x0  nop
    ctx->pc = 0x2711ccu;
    // NOP
label_2711d0:
    // 0x2711d0: 0x7566  .word       0x00007566                   # xor         $t6, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2711d0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_2711d4:
    // 0x2711d4: 0x11f50  .word       0x00011F50                   # mfhi        $v1 # 00010740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2711d4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_2711d8:
    // 0x2711d8: 0x0  nop
    ctx->pc = 0x2711d8u;
    // NOP
label_2711dc:
    // 0x2711dc: 0x0  nop
    ctx->pc = 0x2711dcu;
    // NOP
label_2711e0:
    // 0x2711e0: 0x758a  .word       0x0000758A                   # movz        $t6, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2711e0u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 14, GPR_VEC(ctx, 0));
label_2711e4:
    // 0x2711e4: 0xbe90  .word       0x0000BE90                   # mfhi        $s7 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2711e4u;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_2711e8:
    // 0x2711e8: 0x0  nop
    ctx->pc = 0x2711e8u;
    // NOP
label_2711ec:
    // 0x2711ec: 0x0  nop
    ctx->pc = 0x2711ecu;
    // NOP
label_2711f0:
    // 0x2711f0: 0x75a2  .word       0x000075A2                   # neg         $t6, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2711f0u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 14, (int32_t)tmp); }
label_2711f4:
    // 0x2711f4: 0xf790  .word       0x0000F790                   # mfhi        $fp # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2711f4u;
    SET_GPR_U64(ctx, 30, ctx->hi);
label_2711f8:
    // 0x2711f8: 0x0  nop
    ctx->pc = 0x2711f8u;
    // NOP
label_2711fc:
    // 0x2711fc: 0x0  nop
    ctx->pc = 0x2711fcu;
    // NOP
label_271200:
    // 0x271200: 0x75c1  .word       0x000075C1                   # INVALID     $zero, $zero, 0x75C1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271200u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x271200 raw=0x000075C1"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_271204:
    // 0x271204: 0xeac0  sll         $sp, $zero, 11
    ctx->pc = 0x271204u;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_271208:
    // 0x271208: 0x0  nop
    ctx->pc = 0x271208u;
    // NOP
label_27120c:
    // 0x27120c: 0x0  nop
    ctx->pc = 0x27120cu;
    // NOP
label_271210:
    // 0x271210: 0x75df  .word       0x000075DF                   # ddivu       $t6, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271210u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x271210 raw=0x000075DF"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_271214:
    // 0x271214: 0xa160  .word       0x0000A160                   # add         $s4, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271214u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_271218:
    // 0x271218: 0x0  nop
    ctx->pc = 0x271218u;
    // NOP
label_27121c:
    // 0x27121c: 0x0  nop
    ctx->pc = 0x27121cu;
    // NOP
label_271220:
    // 0x271220: 0x75f4  teq         $zero, $zero, 471
    ctx->pc = 0x271220u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_271224:
    // 0x271224: 0xbe20  .word       0x0000BE20                   # add         $s7, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271224u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_271228:
    // 0x271228: 0x0  nop
    ctx->pc = 0x271228u;
    // NOP
label_27122c:
    // 0x27122c: 0x0  nop
    ctx->pc = 0x27122cu;
    // NOP
label_271230:
    // 0x271230: 0x760c  syscall     472
    ctx->pc = 0x271230u;
    ctx->pc = 0x271234u;
runtime->handleSyscall(rdram, ctx, 0x1D8u);
label_271234:
    // 0x271234: 0xd950  .word       0x0000D950                   # mfhi        $k1 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271234u;
    SET_GPR_U64(ctx, 27, ctx->hi);
label_271238:
    // 0x271238: 0x0  nop
    ctx->pc = 0x271238u;
    // NOP
label_27123c:
    // 0x27123c: 0x0  nop
    ctx->pc = 0x27123cu;
    // NOP
label_271240:
    // 0x271240: 0x7628  .word       0x00007628                   # mfsa        $t6 # 00000600 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x271240u;
    SET_GPR_U32(ctx, 14, ctx->sa);
label_271244:
    // 0x271244: 0xbb60  .word       0x0000BB60                   # add         $s7, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271244u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_271248:
    // 0x271248: 0x0  nop
    ctx->pc = 0x271248u;
    // NOP
label_27124c:
    // 0x27124c: 0x0  nop
    ctx->pc = 0x27124cu;
    // NOP
label_271250:
    // 0x271250: 0x7640  sll         $t6, $zero, 25
    ctx->pc = 0x271250u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 25));
label_271254:
    // 0x271254: 0xabe0  .word       0x0000ABE0                   # add         $s5, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271254u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_271258:
    // 0x271258: 0x0  nop
    ctx->pc = 0x271258u;
    // NOP
label_27125c:
    // 0x27125c: 0x0  nop
    ctx->pc = 0x27125cu;
    // NOP
label_271260:
    // 0x271260: 0x7656  .word       0x00007656                   # dsrlv       $t6, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271260u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_271264:
    // 0x271264: 0xf300  sll         $fp, $zero, 12
    ctx->pc = 0x271264u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_271268:
    // 0x271268: 0x0  nop
    ctx->pc = 0x271268u;
    // NOP
label_27126c:
    // 0x27126c: 0x0  nop
    ctx->pc = 0x27126cu;
    // NOP
label_271270:
    // 0x271270: 0x7675  .word       0x00007675                   # INVALID     $zero, $zero, 0x7675 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271270u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x271270 raw=0x00007675"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_271274:
    // 0x271274: 0xc520  .word       0x0000C520                   # add         $t8, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271274u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
label_271278:
    // 0x271278: 0x0  nop
    ctx->pc = 0x271278u;
    // NOP
label_27127c:
    // 0x27127c: 0x0  nop
    ctx->pc = 0x27127cu;
    // NOP
label_271280:
    // 0x271280: 0x768e  .word       0x0000768E                   # INVALID     $zero, $zero, 0x768E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271280u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x271280 raw=0x0000768E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_271284:
    // 0x271284: 0xcba0  .word       0x0000CBA0                   # add         $t9, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271284u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
label_271288:
    // 0x271288: 0x0  nop
    ctx->pc = 0x271288u;
    // NOP
label_27128c:
    // 0x27128c: 0x0  nop
    ctx->pc = 0x27128cu;
    // NOP
label_271290:
    // 0x271290: 0x76a8  .word       0x000076A8                   # mfsa        $t6 # 00000680 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x271290u;
    SET_GPR_U32(ctx, 14, ctx->sa);
label_271294:
    // 0x271294: 0x8cc0  sll         $s1, $zero, 19
    ctx->pc = 0x271294u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_271298:
    // 0x271298: 0x0  nop
    ctx->pc = 0x271298u;
    // NOP
label_27129c:
    // 0x27129c: 0x0  nop
    ctx->pc = 0x27129cu;
    // NOP
label_2712a0:
    // 0x2712a0: 0x76ba  dsrl        $t6, $zero, 26
    ctx->pc = 0x2712a0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) >> 26);
label_2712a4:
    // 0x2712a4: 0xb560  .word       0x0000B560                   # add         $s6, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2712a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
label_2712a8:
    // 0x2712a8: 0x0  nop
    ctx->pc = 0x2712a8u;
    // NOP
label_2712ac:
    // 0x2712ac: 0x0  nop
    ctx->pc = 0x2712acu;
    // NOP
label_2712b0:
    // 0x2712b0: 0x76d1  .word       0x000076D1                   # mthi        $zero # 000076C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2712b0u;
    ctx->hi = GPR_U64(ctx, 0);
label_2712b4:
    // 0x2712b4: 0x9620  .word       0x00009620                   # add         $s2, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2712b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_2712b8:
    // 0x2712b8: 0x0  nop
    ctx->pc = 0x2712b8u;
    // NOP
label_2712bc:
    // 0x2712bc: 0x0  nop
    ctx->pc = 0x2712bcu;
    // NOP
label_2712c0:
    // 0x2712c0: 0x76e4  .word       0x000076E4                   # and         $t6, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2712c0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_2712c4:
    // 0x2712c4: 0xaa80  sll         $s5, $zero, 10
    ctx->pc = 0x2712c4u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_2712c8:
    // 0x2712c8: 0x0  nop
    ctx->pc = 0x2712c8u;
    // NOP
label_2712cc:
    // 0x2712cc: 0x0  nop
    ctx->pc = 0x2712ccu;
    // NOP
label_2712d0:
    // 0x2712d0: 0x76fa  dsrl        $t6, $zero, 27
    ctx->pc = 0x2712d0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) >> 27);
label_2712d4:
    // 0x2712d4: 0xe450  .word       0x0000E450                   # mfhi        $gp # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2712d4u;
    SET_GPR_U64(ctx, 28, ctx->hi);
label_2712d8:
    // 0x2712d8: 0x0  nop
    ctx->pc = 0x2712d8u;
    // NOP
label_2712dc:
    // 0x2712dc: 0x0  nop
    ctx->pc = 0x2712dcu;
    // NOP
label_2712e0:
    // 0x2712e0: 0x7717  .word       0x00007717                   # dsrav       $t6, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2712e0u;
    SET_GPR_S64(ctx, 14, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_2712e4:
    // 0x2712e4: 0x12230  tge         $zero, $at, 136
    ctx->pc = 0x2712e4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_2712e8:
    // 0x2712e8: 0x0  nop
    ctx->pc = 0x2712e8u;
    // NOP
label_2712ec:
    // 0x2712ec: 0x0  nop
    ctx->pc = 0x2712ecu;
    // NOP
label_2712f0:
    // 0x2712f0: 0x773c  dsll32      $t6, $zero, 28
    ctx->pc = 0x2712f0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) << (32 + 28));
label_2712f4:
    // 0x2712f4: 0xb150  .word       0x0000B150                   # mfhi        $s6 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2712f4u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_2712f8:
    // 0x2712f8: 0x0  nop
    ctx->pc = 0x2712f8u;
    // NOP
label_2712fc:
    // 0x2712fc: 0x0  nop
    ctx->pc = 0x2712fcu;
    // NOP
label_271300:
    // 0x271300: 0x7753  .word       0x00007753                   # mtlo        $zero # 00007740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271300u;
    ctx->lo = GPR_U64(ctx, 0);
label_271304:
    // 0x271304: 0x7f10  .word       0x00007F10                   # mfhi        $t7 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271304u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_271308:
    // 0x271308: 0x0  nop
    ctx->pc = 0x271308u;
    // NOP
label_27130c:
    // 0x27130c: 0x0  nop
    ctx->pc = 0x27130cu;
    // NOP
label_271310:
    // 0x271310: 0x7763  .word       0x00007763                   # negu        $t6, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271310u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_271314:
    // 0x271314: 0x8a40  sll         $s1, $zero, 9
    ctx->pc = 0x271314u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 9));
label_271318:
    // 0x271318: 0x0  nop
    ctx->pc = 0x271318u;
    // NOP
label_27131c:
    // 0x27131c: 0x0  nop
    ctx->pc = 0x27131cu;
    // NOP
label_271320:
    // 0x271320: 0x7775  .word       0x00007775                   # INVALID     $zero, $zero, 0x7775 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271320u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x271320 raw=0x00007775"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_271324:
    // 0x271324: 0x8630  tge         $zero, $zero, 536
    ctx->pc = 0x271324u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_271328:
    // 0x271328: 0x0  nop
    ctx->pc = 0x271328u;
    // NOP
label_27132c:
    // 0x27132c: 0x0  nop
    ctx->pc = 0x27132cu;
    // NOP
label_271330:
    // 0x271330: 0x7786  .word       0x00007786                   # srlv        $t6, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271330u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_271334:
    // 0x271334: 0xb1e0  .word       0x0000B1E0                   # add         $s6, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271334u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
label_271338:
    // 0x271338: 0x0  nop
    ctx->pc = 0x271338u;
    // NOP
label_27133c:
    // 0x27133c: 0x0  nop
    ctx->pc = 0x27133cu;
    // NOP
label_271340:
    // 0x271340: 0x779d  .word       0x0000779D                   # dmultu      $zero, $zero # 00007780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271340u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x271340 raw=0x0000779D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_271344:
    // 0x271344: 0xc500  sll         $t8, $zero, 20
    ctx->pc = 0x271344u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
label_271348:
    // 0x271348: 0x0  nop
    ctx->pc = 0x271348u;
    // NOP
label_27134c:
    // 0x27134c: 0x0  nop
    ctx->pc = 0x27134cu;
    // NOP
label_271350:
    // 0x271350: 0x77b6  tne         $zero, $zero, 478
    ctx->pc = 0x271350u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_271354:
    // 0x271354: 0xbc20  .word       0x0000BC20                   # add         $s7, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271354u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_271358:
    // 0x271358: 0x0  nop
    ctx->pc = 0x271358u;
    // NOP
label_27135c:
    // 0x27135c: 0x0  nop
    ctx->pc = 0x27135cu;
    // NOP
label_271360:
    // 0x271360: 0x77ce  .word       0x000077CE                   # INVALID     $zero, $zero, 0x77CE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271360u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x271360 raw=0x000077CE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_271364:
    // 0x271364: 0xa280  sll         $s4, $zero, 10
    ctx->pc = 0x271364u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_271368:
    // 0x271368: 0x0  nop
    ctx->pc = 0x271368u;
    // NOP
label_27136c:
    // 0x27136c: 0x0  nop
    ctx->pc = 0x27136cu;
    // NOP
label_271370:
    // 0x271370: 0x77e3  .word       0x000077E3                   # negu        $t6, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271370u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_271374:
    // 0x271374: 0xa760  .word       0x0000A760                   # add         $s4, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271374u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_271378:
    // 0x271378: 0x0  nop
    ctx->pc = 0x271378u;
    // NOP
label_27137c:
    // 0x27137c: 0x0  nop
    ctx->pc = 0x27137cu;
    // NOP
label_271380:
    // 0x271380: 0x77f8  dsll        $t6, $zero, 31
    ctx->pc = 0x271380u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) << 31);
label_271384:
    // 0x271384: 0x8ba0  .word       0x00008BA0                   # add         $s1, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271384u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_271388:
    // 0x271388: 0x0  nop
    ctx->pc = 0x271388u;
    // NOP
label_27138c:
    // 0x27138c: 0x0  nop
    ctx->pc = 0x27138cu;
    // NOP
label_271390:
    // 0x271390: 0x780a  movz        $t7, $zero, $zero
    ctx->pc = 0x271390u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 15, GPR_VEC(ctx, 0));
label_271394:
    // 0x271394: 0x5000  sll         $t2, $zero, 0
    ctx->pc = 0x271394u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_271398:
    // 0x271398: 0x0  nop
    ctx->pc = 0x271398u;
    // NOP
label_27139c:
    // 0x27139c: 0x0  nop
    ctx->pc = 0x27139cu;
    // NOP
label_2713a0:
    // 0x2713a0: 0x7814  dsllv       $t7, $zero, $zero
    ctx->pc = 0x2713a0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_2713a4:
    // 0x2713a4: 0xdf10  .word       0x0000DF10                   # mfhi        $k1 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2713a4u;
    SET_GPR_U64(ctx, 27, ctx->hi);
label_2713a8:
    // 0x2713a8: 0x0  nop
    ctx->pc = 0x2713a8u;
    // NOP
label_2713ac:
    // 0x2713ac: 0x0  nop
    ctx->pc = 0x2713acu;
    // NOP
label_2713b0:
    // 0x2713b0: 0x7830  tge         $zero, $zero, 480
    ctx->pc = 0x2713b0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2713b4:
    // 0x2713b4: 0xb5f0  tge         $zero, $zero, 727
    ctx->pc = 0x2713b4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2713b8:
    // 0x2713b8: 0x0  nop
    ctx->pc = 0x2713b8u;
    // NOP
label_2713bc:
    // 0x2713bc: 0x0  nop
    ctx->pc = 0x2713bcu;
    // NOP
label_2713c0:
    // 0x2713c0: 0x7847  .word       0x00007847                   # srav        $t7, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2713c0u;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2713c4:
    // 0x2713c4: 0x10cc0  sll         $at, $at, 19
    ctx->pc = 0x2713c4u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 1), 19));
label_2713c8:
    // 0x2713c8: 0x0  nop
    ctx->pc = 0x2713c8u;
    // NOP
label_2713cc:
    // 0x2713cc: 0x0  nop
    ctx->pc = 0x2713ccu;
    // NOP
label_2713d0:
    // 0x2713d0: 0x7869  .word       0x00007869                   # mtsa        $zero # 00007840 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2713d0u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_2713d4:
    // 0x2713d4: 0x11ce0  .word       0x00011CE0                   # add         $v1, $zero, $at # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2713d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_2713d8:
    // 0x2713d8: 0x0  nop
    ctx->pc = 0x2713d8u;
    // NOP
label_2713dc:
    // 0x2713dc: 0x0  nop
    ctx->pc = 0x2713dcu;
    // NOP
label_2713e0:
    // 0x2713e0: 0x788d  break       0, 482
    ctx->pc = 0x2713e0u;
    runtime->handleBreak(rdram, ctx);
label_2713e4:
    // 0x2713e4: 0xa3e0  .word       0x0000A3E0                   # add         $s4, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2713e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_2713e8:
    // 0x2713e8: 0x0  nop
    ctx->pc = 0x2713e8u;
    // NOP
label_2713ec:
    // 0x2713ec: 0x0  nop
    ctx->pc = 0x2713ecu;
    // NOP
label_2713f0:
    // 0x2713f0: 0x78a2  .word       0x000078A2                   # neg         $t7, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2713f0u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 15, (int32_t)tmp); }
label_2713f4:
    // 0x2713f4: 0x8910  .word       0x00008910                   # mfhi        $s1 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2713f4u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_2713f8:
    // 0x2713f8: 0x0  nop
    ctx->pc = 0x2713f8u;
    // NOP
label_2713fc:
    // 0x2713fc: 0x0  nop
    ctx->pc = 0x2713fcu;
    // NOP
label_271400:
    // 0x271400: 0x78b4  teq         $zero, $zero, 482
    ctx->pc = 0x271400u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_271404:
    // 0x271404: 0xf220  .word       0x0000F220                   # add         $fp, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271404u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_271408:
    // 0x271408: 0x0  nop
    ctx->pc = 0x271408u;
    // NOP
label_27140c:
    // 0x27140c: 0x0  nop
    ctx->pc = 0x27140cu;
    // NOP
label_271410:
    // 0x271410: 0x78d3  .word       0x000078D3                   # mtlo        $zero # 000078C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271410u;
    ctx->lo = GPR_U64(ctx, 0);
label_271414:
    // 0x271414: 0x13ea0  .word       0x00013EA0                   # add         $a3, $zero, $at # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271414u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_271418:
    // 0x271418: 0x0  nop
    ctx->pc = 0x271418u;
    // NOP
label_27141c:
    // 0x27141c: 0x0  nop
    ctx->pc = 0x27141cu;
    // NOP
label_271420:
    // 0x271420: 0x78fb  dsra        $t7, $zero, 3
    ctx->pc = 0x271420u;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 0) >> 3);
label_271424:
    // 0x271424: 0xb6b0  tge         $zero, $zero, 730
    ctx->pc = 0x271424u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_271428:
    // 0x271428: 0x0  nop
    ctx->pc = 0x271428u;
    // NOP
label_27142c:
    // 0x27142c: 0x0  nop
    ctx->pc = 0x27142cu;
    // NOP
label_271430:
    // 0x271430: 0x7912  .word       0x00007912                   # mflo        $t7 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271430u;
    SET_GPR_U64(ctx, 15, ctx->lo);
label_271434:
    // 0x271434: 0xb980  sll         $s7, $zero, 6
    ctx->pc = 0x271434u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 0), 6));
label_271438:
    // 0x271438: 0x0  nop
    ctx->pc = 0x271438u;
    // NOP
label_27143c:
    // 0x27143c: 0x0  nop
    ctx->pc = 0x27143cu;
    // NOP
label_271440:
    // 0x271440: 0x792a  .word       0x0000792A                   # slt         $t7, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271440u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_271444:
    // 0x271444: 0x12c30  tge         $zero, $at, 176
    ctx->pc = 0x271444u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_271448:
    // 0x271448: 0x0  nop
    ctx->pc = 0x271448u;
    // NOP
label_27144c:
    // 0x27144c: 0x0  nop
    ctx->pc = 0x27144cu;
    // NOP
label_271450:
    // 0x271450: 0x7950  .word       0x00007950                   # mfhi        $t7 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271450u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_271454:
    // 0x271454: 0x10040  sll         $zero, $at, 1
    ctx->pc = 0x271454u;
    
label_271458:
    // 0x271458: 0x0  nop
    ctx->pc = 0x271458u;
    // NOP
label_27145c:
    // 0x27145c: 0x0  nop
    ctx->pc = 0x27145cu;
    // NOP
label_271460:
    // 0x271460: 0x7971  tgeu        $zero, $zero, 485
    ctx->pc = 0x271460u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_271464:
    // 0x271464: 0x99e0  .word       0x000099E0                   # add         $s3, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271464u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_271468:
    // 0x271468: 0x0  nop
    ctx->pc = 0x271468u;
    // NOP
label_27146c:
    // 0x27146c: 0x0  nop
    ctx->pc = 0x27146cu;
    // NOP
label_271470:
    // 0x271470: 0x7985  .word       0x00007985                   # INVALID     $zero, $zero, 0x7985 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271470u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x271470 raw=0x00007985"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_271474:
    // 0x271474: 0xafb0  tge         $zero, $zero, 702
    ctx->pc = 0x271474u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_271478:
    // 0x271478: 0x0  nop
    ctx->pc = 0x271478u;
    // NOP
label_27147c:
    // 0x27147c: 0x0  nop
    ctx->pc = 0x27147cu;
    // NOP
label_271480:
    // 0x271480: 0x799b  .word       0x0000799B                   # divu        $t7, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271480u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_271484:
    // 0x271484: 0xa220  .word       0x0000A220                   # add         $s4, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271484u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_271488:
    // 0x271488: 0x0  nop
    ctx->pc = 0x271488u;
    // NOP
label_27148c:
    // 0x27148c: 0x0  nop
    ctx->pc = 0x27148cu;
    // NOP
label_271490:
    // 0x271490: 0x79b0  tge         $zero, $zero, 486
    ctx->pc = 0x271490u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_271494:
    // 0x271494: 0x9960  .word       0x00009960                   # add         $s3, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271494u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_271498:
    // 0x271498: 0x0  nop
    ctx->pc = 0x271498u;
    // NOP
label_27149c:
    // 0x27149c: 0x0  nop
    ctx->pc = 0x27149cu;
    // NOP
label_2714a0:
    // 0x2714a0: 0x79c4  .word       0x000079C4                   # sllv        $t7, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2714a0u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2714a4:
    // 0x2714a4: 0xa7a0  .word       0x0000A7A0                   # add         $s4, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2714a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_2714a8:
    // 0x2714a8: 0x0  nop
    ctx->pc = 0x2714a8u;
    // NOP
label_2714ac:
    // 0x2714ac: 0x0  nop
    ctx->pc = 0x2714acu;
    // NOP
label_2714b0:
    // 0x2714b0: 0x79d9  .word       0x000079D9                   # multu       $zero, $zero # 000079C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2714b0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
label_2714b4:
    // 0x2714b4: 0x103e0  .word       0x000103E0                   # add         $zero, $zero, $at # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2714b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_2714b8:
    // 0x2714b8: 0x0  nop
    ctx->pc = 0x2714b8u;
    // NOP
label_2714bc:
    // 0x2714bc: 0x0  nop
    ctx->pc = 0x2714bcu;
    // NOP
label_2714c0:
    // 0x2714c0: 0x79fa  dsrl        $t7, $zero, 7
    ctx->pc = 0x2714c0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) >> 7);
label_2714c4:
    // 0x2714c4: 0xa270  tge         $zero, $zero, 649
    ctx->pc = 0x2714c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2714c8:
    // 0x2714c8: 0x0  nop
    ctx->pc = 0x2714c8u;
    // NOP
label_2714cc:
    // 0x2714cc: 0x0  nop
    ctx->pc = 0x2714ccu;
    // NOP
label_2714d0:
    // 0x2714d0: 0x7a0f  .word       0x00007A0F                   # sync # 00007800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2714d0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_2714d4:
    // 0x2714d4: 0xa7e0  .word       0x0000A7E0                   # add         $s4, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2714d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_2714d8:
    // 0x2714d8: 0x0  nop
    ctx->pc = 0x2714d8u;
    // NOP
label_2714dc:
    // 0x2714dc: 0x0  nop
    ctx->pc = 0x2714dcu;
    // NOP
label_2714e0:
    // 0x2714e0: 0x7a24  .word       0x00007A24                   # and         $t7, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2714e0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_2714e4:
    // 0x2714e4: 0xb510  .word       0x0000B510                   # mfhi        $s6 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2714e4u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_2714e8:
    // 0x2714e8: 0x0  nop
    ctx->pc = 0x2714e8u;
    // NOP
label_2714ec:
    // 0x2714ec: 0x0  nop
    ctx->pc = 0x2714ecu;
    // NOP
label_2714f0:
    // 0x2714f0: 0x7a3b  dsra        $t7, $zero, 8
    ctx->pc = 0x2714f0u;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 0) >> 8);
label_2714f4:
    // 0x2714f4: 0xbc80  sll         $s7, $zero, 18
    ctx->pc = 0x2714f4u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
label_2714f8:
    // 0x2714f8: 0x0  nop
    ctx->pc = 0x2714f8u;
    // NOP
label_2714fc:
    // 0x2714fc: 0x0  nop
    ctx->pc = 0x2714fcu;
    // NOP
label_271500:
    // 0x271500: 0x7a53  .word       0x00007A53                   # mtlo        $zero # 00007A40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271500u;
    ctx->lo = GPR_U64(ctx, 0);
label_271504:
    // 0x271504: 0xa8c0  sll         $s5, $zero, 3
    ctx->pc = 0x271504u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_271508:
    // 0x271508: 0x0  nop
    ctx->pc = 0x271508u;
    // NOP
label_27150c:
    // 0x27150c: 0x0  nop
    ctx->pc = 0x27150cu;
    // NOP
label_271510:
    // 0x271510: 0x7a69  .word       0x00007A69                   # mtsa        $zero # 00007A40 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x271510u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_271514:
    // 0x271514: 0x86b0  tge         $zero, $zero, 538
    ctx->pc = 0x271514u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_271518:
    // 0x271518: 0x0  nop
    ctx->pc = 0x271518u;
    // NOP
label_27151c:
    // 0x27151c: 0x0  nop
    ctx->pc = 0x27151cu;
    // NOP
label_271520:
    // 0x271520: 0x7a7a  dsrl        $t7, $zero, 9
    ctx->pc = 0x271520u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) >> 9);
label_271524:
    // 0x271524: 0xe5e0  .word       0x0000E5E0                   # add         $gp, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271524u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 28, (int32_t)result);     } }
label_271528:
    // 0x271528: 0x0  nop
    ctx->pc = 0x271528u;
    // NOP
label_27152c:
    // 0x27152c: 0x0  nop
    ctx->pc = 0x27152cu;
    // NOP
label_271530:
    // 0x271530: 0x7a97  .word       0x00007A97                   # dsrav       $t7, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271530u;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_271534:
    // 0x271534: 0xd030  tge         $zero, $zero, 832
    ctx->pc = 0x271534u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_271538:
    // 0x271538: 0x0  nop
    ctx->pc = 0x271538u;
    // NOP
label_27153c:
    // 0x27153c: 0x0  nop
    ctx->pc = 0x27153cu;
    // NOP
label_271540:
    // 0x271540: 0x7ab2  tlt         $zero, $zero, 490
    ctx->pc = 0x271540u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_271544:
    // 0x271544: 0xb6b0  tge         $zero, $zero, 730
    ctx->pc = 0x271544u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_271548:
    // 0x271548: 0x0  nop
    ctx->pc = 0x271548u;
    // NOP
label_27154c:
    // 0x27154c: 0x0  nop
    ctx->pc = 0x27154cu;
    // NOP
label_271550:
    // 0x271550: 0x7ac9  .word       0x00007AC9                   # jalr        $t7, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
label_271554:
    if (ctx->pc == 0x271554u) {
        ctx->pc = 0x271554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271550u;
        // 0x271554: 0xc600  sll         $t8, $zero, 24 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271558u;
        goto label_271558;
    }
    ctx->pc = 0x271550u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 15, 0x271558u);
        ctx->pc = 0x271554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271550u;
        // 0x271554: 0xc600  sll         $t8, $zero, 24 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x271550u, 0x271558u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x271558u;
label_271558:
    // 0x271558: 0x0  nop
    ctx->pc = 0x271558u;
    // NOP
label_27155c:
    // 0x27155c: 0x0  nop
    ctx->pc = 0x27155cu;
    // NOP
label_271560:
    // 0x271560: 0x7ae2  .word       0x00007AE2                   # neg         $t7, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271560u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 15, (int32_t)tmp); }
label_271564:
    // 0x271564: 0x9c80  sll         $s3, $zero, 18
    ctx->pc = 0x271564u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
label_271568:
    // 0x271568: 0x0  nop
    ctx->pc = 0x271568u;
    // NOP
label_27156c:
    // 0x27156c: 0x0  nop
    ctx->pc = 0x27156cu;
    // NOP
label_271570:
    // 0x271570: 0x7af6  tne         $zero, $zero, 491
    ctx->pc = 0x271570u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_271574:
    // 0x271574: 0x13360  .word       0x00013360                   # add         $a2, $zero, $at # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271574u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_271578:
    // 0x271578: 0x0  nop
    ctx->pc = 0x271578u;
    // NOP
label_27157c:
    // 0x27157c: 0x0  nop
    ctx->pc = 0x27157cu;
    // NOP
label_271580:
    // 0x271580: 0x7b1d  .word       0x00007B1D                   # dmultu      $zero, $zero # 00007B00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271580u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x271580 raw=0x00007B1D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_271584:
    // 0x271584: 0xfd50  .word       0x0000FD50                   # mfhi        $ra # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271584u;
    SET_GPR_U64(ctx, 31, ctx->hi);
label_271588:
    // 0x271588: 0x0  nop
    ctx->pc = 0x271588u;
    // NOP
label_27158c:
    // 0x27158c: 0x0  nop
    ctx->pc = 0x27158cu;
    // NOP
label_271590:
    // 0x271590: 0x7b3d  .word       0x00007B3D                   # INVALID     $zero, $zero, 0x7B3D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271590u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x271590 raw=0x00007B3D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_271594:
    // 0x271594: 0x10310  .word       0x00010310                   # mfhi        $zero # 00010300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271594u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_271598:
    // 0x271598: 0x0  nop
    ctx->pc = 0x271598u;
    // NOP
label_27159c:
    // 0x27159c: 0x0  nop
    ctx->pc = 0x27159cu;
    // NOP
label_2715a0:
    // 0x2715a0: 0x7b5e  .word       0x00007B5E                   # ddiv        $t7, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2715a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x2715A0 raw=0x00007B5E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2715a4:
    // 0x2715a4: 0x9d60  .word       0x00009D60                   # add         $s3, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2715a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_2715a8:
    // 0x2715a8: 0x0  nop
    ctx->pc = 0x2715a8u;
    // NOP
label_2715ac:
    // 0x2715ac: 0x0  nop
    ctx->pc = 0x2715acu;
    // NOP
label_2715b0:
    // 0x2715b0: 0x7b72  tlt         $zero, $zero, 493
    ctx->pc = 0x2715b0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2715b4:
    // 0x2715b4: 0xc270  tge         $zero, $zero, 777
    ctx->pc = 0x2715b4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2715b8:
    // 0x2715b8: 0x0  nop
    ctx->pc = 0x2715b8u;
    // NOP
label_2715bc:
    // 0x2715bc: 0x0  nop
    ctx->pc = 0x2715bcu;
    // NOP
label_2715c0:
    // 0x2715c0: 0x7b8b  .word       0x00007B8B                   # movn        $t7, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2715c0u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 15, GPR_VEC(ctx, 0));
label_2715c4:
    // 0x2715c4: 0xe700  sll         $gp, $zero, 28
    ctx->pc = 0x2715c4u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_2715c8:
    // 0x2715c8: 0x0  nop
    ctx->pc = 0x2715c8u;
    // NOP
label_2715cc:
    // 0x2715cc: 0x0  nop
    ctx->pc = 0x2715ccu;
    // NOP
    ctx->pc = 0x2715d0u;
    return;
}

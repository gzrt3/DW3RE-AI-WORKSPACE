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


void FUN_0019b910_part405(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x260d50u: goto label_260d50;
        case 0x260d54u: goto label_260d54;
        case 0x260d58u: goto label_260d58;
        case 0x260d5cu: goto label_260d5c;
        case 0x260d60u: goto label_260d60;
        case 0x260d64u: goto label_260d64;
        case 0x260d68u: goto label_260d68;
        case 0x260d6cu: goto label_260d6c;
        case 0x260d70u: goto label_260d70;
        case 0x260d74u: goto label_260d74;
        case 0x260d78u: goto label_260d78;
        case 0x260d7cu: goto label_260d7c;
        case 0x260d80u: goto label_260d80;
        case 0x260d84u: goto label_260d84;
        case 0x260d88u: goto label_260d88;
        case 0x260d8cu: goto label_260d8c;
        case 0x260d90u: goto label_260d90;
        case 0x260d94u: goto label_260d94;
        case 0x260d98u: goto label_260d98;
        case 0x260d9cu: goto label_260d9c;
        case 0x260da0u: goto label_260da0;
        case 0x260da4u: goto label_260da4;
        case 0x260da8u: goto label_260da8;
        case 0x260dacu: goto label_260dac;
        case 0x260db0u: goto label_260db0;
        case 0x260db4u: goto label_260db4;
        case 0x260db8u: goto label_260db8;
        case 0x260dbcu: goto label_260dbc;
        case 0x260dc0u: goto label_260dc0;
        case 0x260dc4u: goto label_260dc4;
        case 0x260dc8u: goto label_260dc8;
        case 0x260dccu: goto label_260dcc;
        case 0x260dd0u: goto label_260dd0;
        case 0x260dd4u: goto label_260dd4;
        case 0x260dd8u: goto label_260dd8;
        case 0x260ddcu: goto label_260ddc;
        case 0x260de0u: goto label_260de0;
        case 0x260de4u: goto label_260de4;
        case 0x260de8u: goto label_260de8;
        case 0x260decu: goto label_260dec;
        case 0x260df0u: goto label_260df0;
        case 0x260df4u: goto label_260df4;
        case 0x260df8u: goto label_260df8;
        case 0x260dfcu: goto label_260dfc;
        case 0x260e00u: goto label_260e00;
        case 0x260e04u: goto label_260e04;
        case 0x260e08u: goto label_260e08;
        case 0x260e0cu: goto label_260e0c;
        case 0x260e10u: goto label_260e10;
        case 0x260e14u: goto label_260e14;
        case 0x260e18u: goto label_260e18;
        case 0x260e1cu: goto label_260e1c;
        case 0x260e20u: goto label_260e20;
        case 0x260e24u: goto label_260e24;
        case 0x260e28u: goto label_260e28;
        case 0x260e2cu: goto label_260e2c;
        case 0x260e30u: goto label_260e30;
        case 0x260e34u: goto label_260e34;
        case 0x260e38u: goto label_260e38;
        case 0x260e3cu: goto label_260e3c;
        case 0x260e40u: goto label_260e40;
        case 0x260e44u: goto label_260e44;
        case 0x260e48u: goto label_260e48;
        case 0x260e4cu: goto label_260e4c;
        case 0x260e50u: goto label_260e50;
        case 0x260e54u: goto label_260e54;
        case 0x260e58u: goto label_260e58;
        case 0x260e5cu: goto label_260e5c;
        case 0x260e60u: goto label_260e60;
        case 0x260e64u: goto label_260e64;
        case 0x260e68u: goto label_260e68;
        case 0x260e6cu: goto label_260e6c;
        case 0x260e70u: goto label_260e70;
        case 0x260e74u: goto label_260e74;
        case 0x260e78u: goto label_260e78;
        case 0x260e7cu: goto label_260e7c;
        case 0x260e80u: goto label_260e80;
        case 0x260e84u: goto label_260e84;
        case 0x260e88u: goto label_260e88;
        case 0x260e8cu: goto label_260e8c;
        case 0x260e90u: goto label_260e90;
        case 0x260e94u: goto label_260e94;
        case 0x260e98u: goto label_260e98;
        case 0x260e9cu: goto label_260e9c;
        case 0x260ea0u: goto label_260ea0;
        case 0x260ea4u: goto label_260ea4;
        case 0x260ea8u: goto label_260ea8;
        case 0x260eacu: goto label_260eac;
        case 0x260eb0u: goto label_260eb0;
        case 0x260eb4u: goto label_260eb4;
        case 0x260eb8u: goto label_260eb8;
        case 0x260ebcu: goto label_260ebc;
        case 0x260ec0u: goto label_260ec0;
        case 0x260ec4u: goto label_260ec4;
        case 0x260ec8u: goto label_260ec8;
        case 0x260eccu: goto label_260ecc;
        case 0x260ed0u: goto label_260ed0;
        case 0x260ed4u: goto label_260ed4;
        case 0x260ed8u: goto label_260ed8;
        case 0x260edcu: goto label_260edc;
        case 0x260ee0u: goto label_260ee0;
        case 0x260ee4u: goto label_260ee4;
        case 0x260ee8u: goto label_260ee8;
        case 0x260eecu: goto label_260eec;
        case 0x260ef0u: goto label_260ef0;
        case 0x260ef4u: goto label_260ef4;
        case 0x260ef8u: goto label_260ef8;
        case 0x260efcu: goto label_260efc;
        case 0x260f00u: goto label_260f00;
        case 0x260f04u: goto label_260f04;
        case 0x260f08u: goto label_260f08;
        case 0x260f0cu: goto label_260f0c;
        case 0x260f10u: goto label_260f10;
        case 0x260f14u: goto label_260f14;
        case 0x260f18u: goto label_260f18;
        case 0x260f1cu: goto label_260f1c;
        case 0x260f20u: goto label_260f20;
        case 0x260f24u: goto label_260f24;
        case 0x260f28u: goto label_260f28;
        case 0x260f2cu: goto label_260f2c;
        case 0x260f30u: goto label_260f30;
        case 0x260f34u: goto label_260f34;
        case 0x260f38u: goto label_260f38;
        case 0x260f3cu: goto label_260f3c;
        case 0x260f40u: goto label_260f40;
        case 0x260f44u: goto label_260f44;
        case 0x260f48u: goto label_260f48;
        case 0x260f4cu: goto label_260f4c;
        case 0x260f50u: goto label_260f50;
        case 0x260f54u: goto label_260f54;
        case 0x260f58u: goto label_260f58;
        case 0x260f5cu: goto label_260f5c;
        case 0x260f60u: goto label_260f60;
        case 0x260f64u: goto label_260f64;
        case 0x260f68u: goto label_260f68;
        case 0x260f6cu: goto label_260f6c;
        case 0x260f70u: goto label_260f70;
        case 0x260f74u: goto label_260f74;
        case 0x260f78u: goto label_260f78;
        case 0x260f7cu: goto label_260f7c;
        case 0x260f80u: goto label_260f80;
        case 0x260f84u: goto label_260f84;
        case 0x260f88u: goto label_260f88;
        case 0x260f8cu: goto label_260f8c;
        case 0x260f90u: goto label_260f90;
        case 0x260f94u: goto label_260f94;
        case 0x260f98u: goto label_260f98;
        case 0x260f9cu: goto label_260f9c;
        case 0x260fa0u: goto label_260fa0;
        case 0x260fa4u: goto label_260fa4;
        case 0x260fa8u: goto label_260fa8;
        case 0x260facu: goto label_260fac;
        case 0x260fb0u: goto label_260fb0;
        case 0x260fb4u: goto label_260fb4;
        case 0x260fb8u: goto label_260fb8;
        case 0x260fbcu: goto label_260fbc;
        case 0x260fc0u: goto label_260fc0;
        case 0x260fc4u: goto label_260fc4;
        case 0x260fc8u: goto label_260fc8;
        case 0x260fccu: goto label_260fcc;
        case 0x260fd0u: goto label_260fd0;
        case 0x260fd4u: goto label_260fd4;
        case 0x260fd8u: goto label_260fd8;
        case 0x260fdcu: goto label_260fdc;
        case 0x260fe0u: goto label_260fe0;
        case 0x260fe4u: goto label_260fe4;
        case 0x260fe8u: goto label_260fe8;
        case 0x260fecu: goto label_260fec;
        case 0x260ff0u: goto label_260ff0;
        case 0x260ff4u: goto label_260ff4;
        case 0x260ff8u: goto label_260ff8;
        case 0x260ffcu: goto label_260ffc;
        case 0x261000u: goto label_261000;
        case 0x261004u: goto label_261004;
        case 0x261008u: goto label_261008;
        case 0x26100cu: goto label_26100c;
        case 0x261010u: goto label_261010;
        case 0x261014u: goto label_261014;
        case 0x261018u: goto label_261018;
        case 0x26101cu: goto label_26101c;
        case 0x261020u: goto label_261020;
        case 0x261024u: goto label_261024;
        case 0x261028u: goto label_261028;
        case 0x26102cu: goto label_26102c;
        case 0x261030u: goto label_261030;
        case 0x261034u: goto label_261034;
        case 0x261038u: goto label_261038;
        case 0x26103cu: goto label_26103c;
        case 0x261040u: goto label_261040;
        case 0x261044u: goto label_261044;
        case 0x261048u: goto label_261048;
        case 0x26104cu: goto label_26104c;
        case 0x261050u: goto label_261050;
        case 0x261054u: goto label_261054;
        case 0x261058u: goto label_261058;
        case 0x26105cu: goto label_26105c;
        case 0x261060u: goto label_261060;
        case 0x261064u: goto label_261064;
        case 0x261068u: goto label_261068;
        case 0x26106cu: goto label_26106c;
        case 0x261070u: goto label_261070;
        case 0x261074u: goto label_261074;
        case 0x261078u: goto label_261078;
        case 0x26107cu: goto label_26107c;
        case 0x261080u: goto label_261080;
        case 0x261084u: goto label_261084;
        case 0x261088u: goto label_261088;
        case 0x26108cu: goto label_26108c;
        case 0x261090u: goto label_261090;
        case 0x261094u: goto label_261094;
        case 0x261098u: goto label_261098;
        case 0x26109cu: goto label_26109c;
        case 0x2610a0u: goto label_2610a0;
        case 0x2610a4u: goto label_2610a4;
        case 0x2610a8u: goto label_2610a8;
        case 0x2610acu: goto label_2610ac;
        case 0x2610b0u: goto label_2610b0;
        case 0x2610b4u: goto label_2610b4;
        case 0x2610b8u: goto label_2610b8;
        case 0x2610bcu: goto label_2610bc;
        case 0x2610c0u: goto label_2610c0;
        case 0x2610c4u: goto label_2610c4;
        case 0x2610c8u: goto label_2610c8;
        case 0x2610ccu: goto label_2610cc;
        case 0x2610d0u: goto label_2610d0;
        case 0x2610d4u: goto label_2610d4;
        case 0x2610d8u: goto label_2610d8;
        case 0x2610dcu: goto label_2610dc;
        case 0x2610e0u: goto label_2610e0;
        case 0x2610e4u: goto label_2610e4;
        case 0x2610e8u: goto label_2610e8;
        case 0x2610ecu: goto label_2610ec;
        case 0x2610f0u: goto label_2610f0;
        case 0x2610f4u: goto label_2610f4;
        case 0x2610f8u: goto label_2610f8;
        case 0x2610fcu: goto label_2610fc;
        case 0x261100u: goto label_261100;
        case 0x261104u: goto label_261104;
        case 0x261108u: goto label_261108;
        case 0x26110cu: goto label_26110c;
        case 0x261110u: goto label_261110;
        case 0x261114u: goto label_261114;
        case 0x261118u: goto label_261118;
        case 0x26111cu: goto label_26111c;
        case 0x261120u: goto label_261120;
        case 0x261124u: goto label_261124;
        case 0x261128u: goto label_261128;
        case 0x26112cu: goto label_26112c;
        case 0x261130u: goto label_261130;
        case 0x261134u: goto label_261134;
        case 0x261138u: goto label_261138;
        case 0x26113cu: goto label_26113c;
        case 0x261140u: goto label_261140;
        case 0x261144u: goto label_261144;
        case 0x261148u: goto label_261148;
        case 0x26114cu: goto label_26114c;
        case 0x261150u: goto label_261150;
        case 0x261154u: goto label_261154;
        case 0x261158u: goto label_261158;
        case 0x26115cu: goto label_26115c;
        case 0x261160u: goto label_261160;
        case 0x261164u: goto label_261164;
        case 0x261168u: goto label_261168;
        case 0x26116cu: goto label_26116c;
        case 0x261170u: goto label_261170;
        case 0x261174u: goto label_261174;
        case 0x261178u: goto label_261178;
        case 0x26117cu: goto label_26117c;
        case 0x261180u: goto label_261180;
        case 0x261184u: goto label_261184;
        case 0x261188u: goto label_261188;
        case 0x26118cu: goto label_26118c;
        case 0x261190u: goto label_261190;
        case 0x261194u: goto label_261194;
        case 0x261198u: goto label_261198;
        case 0x26119cu: goto label_26119c;
        case 0x2611a0u: goto label_2611a0;
        case 0x2611a4u: goto label_2611a4;
        case 0x2611a8u: goto label_2611a8;
        case 0x2611acu: goto label_2611ac;
        case 0x2611b0u: goto label_2611b0;
        case 0x2611b4u: goto label_2611b4;
        case 0x2611b8u: goto label_2611b8;
        case 0x2611bcu: goto label_2611bc;
        case 0x2611c0u: goto label_2611c0;
        case 0x2611c4u: goto label_2611c4;
        case 0x2611c8u: goto label_2611c8;
        case 0x2611ccu: goto label_2611cc;
        case 0x2611d0u: goto label_2611d0;
        case 0x2611d4u: goto label_2611d4;
        case 0x2611d8u: goto label_2611d8;
        case 0x2611dcu: goto label_2611dc;
        case 0x2611e0u: goto label_2611e0;
        case 0x2611e4u: goto label_2611e4;
        case 0x2611e8u: goto label_2611e8;
        case 0x2611ecu: goto label_2611ec;
        case 0x2611f0u: goto label_2611f0;
        case 0x2611f4u: goto label_2611f4;
        case 0x2611f8u: goto label_2611f8;
        case 0x2611fcu: goto label_2611fc;
        case 0x261200u: goto label_261200;
        case 0x261204u: goto label_261204;
        case 0x261208u: goto label_261208;
        case 0x26120cu: goto label_26120c;
        case 0x261210u: goto label_261210;
        case 0x261214u: goto label_261214;
        case 0x261218u: goto label_261218;
        case 0x26121cu: goto label_26121c;
        case 0x261220u: goto label_261220;
        case 0x261224u: goto label_261224;
        case 0x261228u: goto label_261228;
        case 0x26122cu: goto label_26122c;
        case 0x261230u: goto label_261230;
        case 0x261234u: goto label_261234;
        case 0x261238u: goto label_261238;
        case 0x26123cu: goto label_26123c;
        case 0x261240u: goto label_261240;
        case 0x261244u: goto label_261244;
        case 0x261248u: goto label_261248;
        case 0x26124cu: goto label_26124c;
        case 0x261250u: goto label_261250;
        case 0x261254u: goto label_261254;
        case 0x261258u: goto label_261258;
        case 0x26125cu: goto label_26125c;
        case 0x261260u: goto label_261260;
        case 0x261264u: goto label_261264;
        case 0x261268u: goto label_261268;
        case 0x26126cu: goto label_26126c;
        case 0x261270u: goto label_261270;
        case 0x261274u: goto label_261274;
        case 0x261278u: goto label_261278;
        case 0x26127cu: goto label_26127c;
        case 0x261280u: goto label_261280;
        case 0x261284u: goto label_261284;
        case 0x261288u: goto label_261288;
        case 0x26128cu: goto label_26128c;
        case 0x261290u: goto label_261290;
        case 0x261294u: goto label_261294;
        case 0x261298u: goto label_261298;
        case 0x26129cu: goto label_26129c;
        case 0x2612a0u: goto label_2612a0;
        case 0x2612a4u: goto label_2612a4;
        case 0x2612a8u: goto label_2612a8;
        case 0x2612acu: goto label_2612ac;
        case 0x2612b0u: goto label_2612b0;
        case 0x2612b4u: goto label_2612b4;
        case 0x2612b8u: goto label_2612b8;
        case 0x2612bcu: goto label_2612bc;
        case 0x2612c0u: goto label_2612c0;
        case 0x2612c4u: goto label_2612c4;
        case 0x2612c8u: goto label_2612c8;
        case 0x2612ccu: goto label_2612cc;
        case 0x2612d0u: goto label_2612d0;
        case 0x2612d4u: goto label_2612d4;
        case 0x2612d8u: goto label_2612d8;
        case 0x2612dcu: goto label_2612dc;
        case 0x2612e0u: goto label_2612e0;
        case 0x2612e4u: goto label_2612e4;
        case 0x2612e8u: goto label_2612e8;
        case 0x2612ecu: goto label_2612ec;
        case 0x2612f0u: goto label_2612f0;
        case 0x2612f4u: goto label_2612f4;
        case 0x2612f8u: goto label_2612f8;
        case 0x2612fcu: goto label_2612fc;
        case 0x261300u: goto label_261300;
        case 0x261304u: goto label_261304;
        case 0x261308u: goto label_261308;
        case 0x26130cu: goto label_26130c;
        case 0x261310u: goto label_261310;
        case 0x261314u: goto label_261314;
        case 0x261318u: goto label_261318;
        case 0x26131cu: goto label_26131c;
        case 0x261320u: goto label_261320;
        case 0x261324u: goto label_261324;
        case 0x261328u: goto label_261328;
        case 0x26132cu: goto label_26132c;
        case 0x261330u: goto label_261330;
        case 0x261334u: goto label_261334;
        case 0x261338u: goto label_261338;
        case 0x26133cu: goto label_26133c;
        case 0x261340u: goto label_261340;
        case 0x261344u: goto label_261344;
        case 0x261348u: goto label_261348;
        case 0x26134cu: goto label_26134c;
        case 0x261350u: goto label_261350;
        case 0x261354u: goto label_261354;
        case 0x261358u: goto label_261358;
        case 0x26135cu: goto label_26135c;
        case 0x261360u: goto label_261360;
        case 0x261364u: goto label_261364;
        case 0x261368u: goto label_261368;
        case 0x26136cu: goto label_26136c;
        case 0x261370u: goto label_261370;
        case 0x261374u: goto label_261374;
        case 0x261378u: goto label_261378;
        case 0x26137cu: goto label_26137c;
        case 0x261380u: goto label_261380;
        case 0x261384u: goto label_261384;
        case 0x261388u: goto label_261388;
        case 0x26138cu: goto label_26138c;
        case 0x261390u: goto label_261390;
        case 0x261394u: goto label_261394;
        case 0x261398u: goto label_261398;
        case 0x26139cu: goto label_26139c;
        case 0x2613a0u: goto label_2613a0;
        case 0x2613a4u: goto label_2613a4;
        case 0x2613a8u: goto label_2613a8;
        case 0x2613acu: goto label_2613ac;
        case 0x2613b0u: goto label_2613b0;
        case 0x2613b4u: goto label_2613b4;
        case 0x2613b8u: goto label_2613b8;
        case 0x2613bcu: goto label_2613bc;
        case 0x2613c0u: goto label_2613c0;
        case 0x2613c4u: goto label_2613c4;
        case 0x2613c8u: goto label_2613c8;
        case 0x2613ccu: goto label_2613cc;
        case 0x2613d0u: goto label_2613d0;
        case 0x2613d4u: goto label_2613d4;
        case 0x2613d8u: goto label_2613d8;
        case 0x2613dcu: goto label_2613dc;
        case 0x2613e0u: goto label_2613e0;
        case 0x2613e4u: goto label_2613e4;
        case 0x2613e8u: goto label_2613e8;
        case 0x2613ecu: goto label_2613ec;
        case 0x2613f0u: goto label_2613f0;
        case 0x2613f4u: goto label_2613f4;
        case 0x2613f8u: goto label_2613f8;
        case 0x2613fcu: goto label_2613fc;
        case 0x261400u: goto label_261400;
        case 0x261404u: goto label_261404;
        case 0x261408u: goto label_261408;
        case 0x26140cu: goto label_26140c;
        case 0x261410u: goto label_261410;
        case 0x261414u: goto label_261414;
        case 0x261418u: goto label_261418;
        case 0x26141cu: goto label_26141c;
        case 0x261420u: goto label_261420;
        case 0x261424u: goto label_261424;
        case 0x261428u: goto label_261428;
        case 0x26142cu: goto label_26142c;
        case 0x261430u: goto label_261430;
        case 0x261434u: goto label_261434;
        case 0x261438u: goto label_261438;
        case 0x26143cu: goto label_26143c;
        case 0x261440u: goto label_261440;
        case 0x261444u: goto label_261444;
        case 0x261448u: goto label_261448;
        case 0x26144cu: goto label_26144c;
        case 0x261450u: goto label_261450;
        case 0x261454u: goto label_261454;
        case 0x261458u: goto label_261458;
        case 0x26145cu: goto label_26145c;
        case 0x261460u: goto label_261460;
        case 0x261464u: goto label_261464;
        case 0x261468u: goto label_261468;
        case 0x26146cu: goto label_26146c;
        case 0x261470u: goto label_261470;
        case 0x261474u: goto label_261474;
        case 0x261478u: goto label_261478;
        case 0x26147cu: goto label_26147c;
        case 0x261480u: goto label_261480;
        case 0x261484u: goto label_261484;
        case 0x261488u: goto label_261488;
        case 0x26148cu: goto label_26148c;
        case 0x261490u: goto label_261490;
        case 0x261494u: goto label_261494;
        case 0x261498u: goto label_261498;
        case 0x26149cu: goto label_26149c;
        case 0x2614a0u: goto label_2614a0;
        case 0x2614a4u: goto label_2614a4;
        case 0x2614a8u: goto label_2614a8;
        case 0x2614acu: goto label_2614ac;
        case 0x2614b0u: goto label_2614b0;
        case 0x2614b4u: goto label_2614b4;
        case 0x2614b8u: goto label_2614b8;
        case 0x2614bcu: goto label_2614bc;
        case 0x2614c0u: goto label_2614c0;
        case 0x2614c4u: goto label_2614c4;
        case 0x2614c8u: goto label_2614c8;
        case 0x2614ccu: goto label_2614cc;
        case 0x2614d0u: goto label_2614d0;
        case 0x2614d4u: goto label_2614d4;
        case 0x2614d8u: goto label_2614d8;
        case 0x2614dcu: goto label_2614dc;
        case 0x2614e0u: goto label_2614e0;
        case 0x2614e4u: goto label_2614e4;
        case 0x2614e8u: goto label_2614e8;
        case 0x2614ecu: goto label_2614ec;
        case 0x2614f0u: goto label_2614f0;
        case 0x2614f4u: goto label_2614f4;
        case 0x2614f8u: goto label_2614f8;
        case 0x2614fcu: goto label_2614fc;
        case 0x261500u: goto label_261500;
        case 0x261504u: goto label_261504;
        case 0x261508u: goto label_261508;
        case 0x26150cu: goto label_26150c;
        case 0x261510u: goto label_261510;
        case 0x261514u: goto label_261514;
        case 0x261518u: goto label_261518;
        case 0x26151cu: goto label_26151c;
        default: return;
    }

label_260d50:
    // 0x260d50: 0xb544  .word       0x0000B544                   # sllv        $s6, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260d50u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_260d54:
    // 0x260d54: 0x2810  mfhi        $a1
    ctx->pc = 0x260d54u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_260d58:
    // 0x260d58: 0x0  nop
    ctx->pc = 0x260d58u;
    // NOP
label_260d5c:
    // 0x260d5c: 0x0  nop
    ctx->pc = 0x260d5cu;
    // NOP
label_260d60:
    // 0x260d60: 0xb54a  .word       0x0000B54A                   # movz        $s6, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260d60u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 0));
label_260d64:
    // 0x260d64: 0x1f40  sll         $v1, $zero, 29
    ctx->pc = 0x260d64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), 29));
label_260d68:
    // 0x260d68: 0x0  nop
    ctx->pc = 0x260d68u;
    // NOP
label_260d6c:
    // 0x260d6c: 0x0  nop
    ctx->pc = 0x260d6cu;
    // NOP
label_260d70:
    // 0x260d70: 0xb54e  .word       0x0000B54E                   # INVALID     $zero, $zero, -0x4AB2 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260d70u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x260D70 raw=0x0000B54E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_260d74:
    // 0x260d74: 0x41e0  .word       0x000041E0                   # add         $t0, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260d74u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_260d78:
    // 0x260d78: 0x0  nop
    ctx->pc = 0x260d78u;
    // NOP
label_260d7c:
    // 0x260d7c: 0x0  nop
    ctx->pc = 0x260d7cu;
    // NOP
label_260d80:
    // 0x260d80: 0xb557  .word       0x0000B557                   # dsrav       $s6, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260d80u;
    SET_GPR_S64(ctx, 22, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_260d84:
    // 0x260d84: 0xa540  sll         $s4, $zero, 21
    ctx->pc = 0x260d84u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_260d88:
    // 0x260d88: 0x0  nop
    ctx->pc = 0x260d88u;
    // NOP
label_260d8c:
    // 0x260d8c: 0x0  nop
    ctx->pc = 0x260d8cu;
    // NOP
label_260d90:
    // 0x260d90: 0xb56c  .word       0x0000B56C                   # dadd        $s6, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260d90u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 22, r); }
label_260d94:
    // 0x260d94: 0xa3f0  tge         $zero, $zero, 655
    ctx->pc = 0x260d94u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_260d98:
    // 0x260d98: 0x0  nop
    ctx->pc = 0x260d98u;
    // NOP
label_260d9c:
    // 0x260d9c: 0x0  nop
    ctx->pc = 0x260d9cu;
    // NOP
label_260da0:
    // 0x260da0: 0xb581  .word       0x0000B581                   # INVALID     $zero, $zero, -0x4A7F # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260da0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x260DA0 raw=0x0000B581"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_260da4:
    // 0x260da4: 0x56c0  sll         $t2, $zero, 27
    ctx->pc = 0x260da4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_260da8:
    // 0x260da8: 0x0  nop
    ctx->pc = 0x260da8u;
    // NOP
label_260dac:
    // 0x260dac: 0x0  nop
    ctx->pc = 0x260dacu;
    // NOP
label_260db0:
    // 0x260db0: 0xb58c  syscall     726
    ctx->pc = 0x260db0u;
    ctx->pc = 0x260DB4u;
runtime->handleSyscall(rdram, ctx, 0x2D6u);
label_260db4:
    // 0x260db4: 0xa540  sll         $s4, $zero, 21
    ctx->pc = 0x260db4u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_260db8:
    // 0x260db8: 0x0  nop
    ctx->pc = 0x260db8u;
    // NOP
label_260dbc:
    // 0x260dbc: 0x0  nop
    ctx->pc = 0x260dbcu;
    // NOP
label_260dc0:
    // 0x260dc0: 0xb5a1  .word       0x0000B5A1                   # addu        $s6, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260dc0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_260dc4:
    // 0x260dc4: 0x76e0  .word       0x000076E0                   # add         $t6, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260dc4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_260dc8:
    // 0x260dc8: 0x0  nop
    ctx->pc = 0x260dc8u;
    // NOP
label_260dcc:
    // 0x260dcc: 0x0  nop
    ctx->pc = 0x260dccu;
    // NOP
label_260dd0:
    // 0x260dd0: 0xb5b0  tge         $zero, $zero, 726
    ctx->pc = 0x260dd0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_260dd4:
    // 0x260dd4: 0xbd70  tge         $zero, $zero, 757
    ctx->pc = 0x260dd4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_260dd8:
    // 0x260dd8: 0x0  nop
    ctx->pc = 0x260dd8u;
    // NOP
label_260ddc:
    // 0x260ddc: 0x0  nop
    ctx->pc = 0x260ddcu;
    // NOP
label_260de0:
    // 0x260de0: 0xb5c8  .word       0x0000B5C8                   # jr          $zero # 0000B5C0 <InstrIdType: CPU_SPECIAL>
label_260de4:
    if (ctx->pc == 0x260DE4u) {
        ctx->pc = 0x260DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260DE0u;
        // 0x260de4: 0x5e20  .word       0x00005E20                   # add         $t3, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x260DE8u;
        goto label_260de8;
    }
    ctx->pc = 0x260DE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x260DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260DE0u;
        // 0x260de4: 0x5e20  .word       0x00005E20                   # add         $t3, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x260DE0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x260DE8u;
label_260de8:
    // 0x260de8: 0x0  nop
    ctx->pc = 0x260de8u;
    // NOP
label_260dec:
    // 0x260dec: 0x0  nop
    ctx->pc = 0x260decu;
    // NOP
label_260df0:
    // 0x260df0: 0xb5d4  .word       0x0000B5D4                   # dsllv       $s6, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260df0u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_260df4:
    // 0x260df4: 0x70e0  .word       0x000070E0                   # add         $t6, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260df4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_260df8:
    // 0x260df8: 0x0  nop
    ctx->pc = 0x260df8u;
    // NOP
label_260dfc:
    // 0x260dfc: 0x0  nop
    ctx->pc = 0x260dfcu;
    // NOP
label_260e00:
    // 0x260e00: 0xb5e3  .word       0x0000B5E3                   # negu        $s6, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260e00u;
    SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_260e04:
    // 0x260e04: 0x4cc0  sll         $t1, $zero, 19
    ctx->pc = 0x260e04u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_260e08:
    // 0x260e08: 0x0  nop
    ctx->pc = 0x260e08u;
    // NOP
label_260e0c:
    // 0x260e0c: 0x0  nop
    ctx->pc = 0x260e0cu;
    // NOP
label_260e10:
    // 0x260e10: 0xb5ed  .word       0x0000B5ED                   # daddu       $s6, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260e10u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_260e14:
    // 0x260e14: 0x2ae0  .word       0x00002AE0                   # add         $a1, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260e14u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
label_260e18:
    // 0x260e18: 0x0  nop
    ctx->pc = 0x260e18u;
    // NOP
label_260e1c:
    // 0x260e1c: 0x0  nop
    ctx->pc = 0x260e1cu;
    // NOP
label_260e20:
    // 0x260e20: 0xb5f3  tltu        $zero, $zero, 727
    ctx->pc = 0x260e20u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_260e24:
    // 0x260e24: 0xc450  .word       0x0000C450                   # mfhi        $t8 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260e24u;
    SET_GPR_U64(ctx, 24, ctx->hi);
label_260e28:
    // 0x260e28: 0x0  nop
    ctx->pc = 0x260e28u;
    // NOP
label_260e2c:
    // 0x260e2c: 0x0  nop
    ctx->pc = 0x260e2cu;
    // NOP
label_260e30:
    // 0x260e30: 0xb60c  syscall     728
    ctx->pc = 0x260e30u;
    ctx->pc = 0x260E34u;
runtime->handleSyscall(rdram, ctx, 0x2D8u);
label_260e34:
    // 0x260e34: 0x5690  .word       0x00005690                   # mfhi        $t2 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260e34u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_260e38:
    // 0x260e38: 0x0  nop
    ctx->pc = 0x260e38u;
    // NOP
label_260e3c:
    // 0x260e3c: 0x0  nop
    ctx->pc = 0x260e3cu;
    // NOP
label_260e40:
    // 0x260e40: 0xb617  .word       0x0000B617                   # dsrav       $s6, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260e40u;
    SET_GPR_S64(ctx, 22, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_260e44:
    // 0x260e44: 0x17e20  .word       0x00017E20                   # add         $t7, $zero, $at # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260e44u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_260e48:
    // 0x260e48: 0x0  nop
    ctx->pc = 0x260e48u;
    // NOP
label_260e4c:
    // 0x260e4c: 0x0  nop
    ctx->pc = 0x260e4cu;
    // NOP
label_260e50:
    // 0x260e50: 0xb647  .word       0x0000B647                   # srav        $s6, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260e50u;
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_260e54:
    // 0x260e54: 0x4180  sll         $t0, $zero, 6
    ctx->pc = 0x260e54u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 6));
label_260e58:
    // 0x260e58: 0x0  nop
    ctx->pc = 0x260e58u;
    // NOP
label_260e5c:
    // 0x260e5c: 0x0  nop
    ctx->pc = 0x260e5cu;
    // NOP
label_260e60:
    // 0x260e60: 0xb650  .word       0x0000B650                   # mfhi        $s6 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260e60u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_260e64:
    // 0x260e64: 0x13a40  sll         $a3, $at, 9
    ctx->pc = 0x260e64u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 1), 9));
label_260e68:
    // 0x260e68: 0x0  nop
    ctx->pc = 0x260e68u;
    // NOP
label_260e6c:
    // 0x260e6c: 0x0  nop
    ctx->pc = 0x260e6cu;
    // NOP
label_260e70:
    // 0x260e70: 0xb678  dsll        $s6, $zero, 25
    ctx->pc = 0x260e70u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) << 25);
label_260e74:
    // 0x260e74: 0xa590  .word       0x0000A590                   # mfhi        $s4 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260e74u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_260e78:
    // 0x260e78: 0x0  nop
    ctx->pc = 0x260e78u;
    // NOP
label_260e7c:
    // 0x260e7c: 0x0  nop
    ctx->pc = 0x260e7cu;
    // NOP
label_260e80:
    // 0x260e80: 0xb68d  break       0, 730
    ctx->pc = 0x260e80u;
    runtime->handleBreak(rdram, ctx);
label_260e84:
    // 0x260e84: 0x5110  .word       0x00005110                   # mfhi        $t2 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260e84u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_260e88:
    // 0x260e88: 0x0  nop
    ctx->pc = 0x260e88u;
    // NOP
label_260e8c:
    // 0x260e8c: 0x0  nop
    ctx->pc = 0x260e8cu;
    // NOP
label_260e90:
    // 0x260e90: 0xb698  .word       0x0000B698                   # mult        $s6, $zero, $zero # 00000680 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x260e90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 22, (int32_t)result); }
label_260e94:
    // 0x260e94: 0x5980  sll         $t3, $zero, 6
    ctx->pc = 0x260e94u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 6));
label_260e98:
    // 0x260e98: 0x0  nop
    ctx->pc = 0x260e98u;
    // NOP
label_260e9c:
    // 0x260e9c: 0x0  nop
    ctx->pc = 0x260e9cu;
    // NOP
label_260ea0:
    // 0x260ea0: 0xb6a4  .word       0x0000B6A4                   # and         $s6, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260ea0u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_260ea4:
    // 0x260ea4: 0x4e40  sll         $t1, $zero, 25
    ctx->pc = 0x260ea4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 25));
label_260ea8:
    // 0x260ea8: 0x0  nop
    ctx->pc = 0x260ea8u;
    // NOP
label_260eac:
    // 0x260eac: 0x0  nop
    ctx->pc = 0x260eacu;
    // NOP
label_260eb0:
    // 0x260eb0: 0xb6ae  .word       0x0000B6AE                   # dsub        $s6, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260eb0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 22, r); }
label_260eb4:
    // 0x260eb4: 0xd970  tge         $zero, $zero, 869
    ctx->pc = 0x260eb4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_260eb8:
    // 0x260eb8: 0x0  nop
    ctx->pc = 0x260eb8u;
    // NOP
label_260ebc:
    // 0x260ebc: 0x0  nop
    ctx->pc = 0x260ebcu;
    // NOP
label_260ec0:
    // 0x260ec0: 0xb6ca  .word       0x0000B6CA                   # movz        $s6, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260ec0u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 0));
label_260ec4:
    // 0x260ec4: 0xe070  tge         $zero, $zero, 897
    ctx->pc = 0x260ec4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_260ec8:
    // 0x260ec8: 0x0  nop
    ctx->pc = 0x260ec8u;
    // NOP
label_260ecc:
    // 0x260ecc: 0x0  nop
    ctx->pc = 0x260eccu;
    // NOP
label_260ed0:
    // 0x260ed0: 0xb6e7  .word       0x0000B6E7                   # not         $s6, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260ed0u;
    SET_GPR_U64(ctx, 22, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_260ed4:
    // 0x260ed4: 0xc500  sll         $t8, $zero, 20
    ctx->pc = 0x260ed4u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
label_260ed8:
    // 0x260ed8: 0x0  nop
    ctx->pc = 0x260ed8u;
    // NOP
label_260edc:
    // 0x260edc: 0x0  nop
    ctx->pc = 0x260edcu;
    // NOP
label_260ee0:
    // 0x260ee0: 0xb700  sll         $s6, $zero, 28
    ctx->pc = 0x260ee0u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_260ee4:
    // 0x260ee4: 0x2630  tge         $zero, $zero, 152
    ctx->pc = 0x260ee4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_260ee8:
    // 0x260ee8: 0x0  nop
    ctx->pc = 0x260ee8u;
    // NOP
label_260eec:
    // 0x260eec: 0x0  nop
    ctx->pc = 0x260eecu;
    // NOP
label_260ef0:
    // 0x260ef0: 0xb705  .word       0x0000B705                   # INVALID     $zero, $zero, -0x48FB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260ef0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x260EF0 raw=0x0000B705"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_260ef4:
    // 0x260ef4: 0x8a10  .word       0x00008A10                   # mfhi        $s1 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260ef4u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_260ef8:
    // 0x260ef8: 0x0  nop
    ctx->pc = 0x260ef8u;
    // NOP
label_260efc:
    // 0x260efc: 0x0  nop
    ctx->pc = 0x260efcu;
    // NOP
label_260f00:
    // 0x260f00: 0xb717  .word       0x0000B717                   # dsrav       $s6, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260f00u;
    SET_GPR_S64(ctx, 22, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_260f04:
    // 0x260f04: 0x5240  sll         $t2, $zero, 9
    ctx->pc = 0x260f04u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 9));
label_260f08:
    // 0x260f08: 0x0  nop
    ctx->pc = 0x260f08u;
    // NOP
label_260f0c:
    // 0x260f0c: 0x0  nop
    ctx->pc = 0x260f0cu;
    // NOP
label_260f10:
    // 0x260f10: 0xb722  .word       0x0000B722                   # neg         $s6, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260f10u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 22, (int32_t)tmp); }
label_260f14:
    // 0x260f14: 0xd000  sll         $k0, $zero, 0
    ctx->pc = 0x260f14u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_260f18:
    // 0x260f18: 0x0  nop
    ctx->pc = 0x260f18u;
    // NOP
label_260f1c:
    // 0x260f1c: 0x0  nop
    ctx->pc = 0x260f1cu;
    // NOP
label_260f20:
    // 0x260f20: 0xb73c  dsll32      $s6, $zero, 28
    ctx->pc = 0x260f20u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) << (32 + 28));
label_260f24:
    // 0x260f24: 0xdcc0  sll         $k1, $zero, 19
    ctx->pc = 0x260f24u;
    SET_GPR_S32(ctx, 27, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_260f28:
    // 0x260f28: 0x0  nop
    ctx->pc = 0x260f28u;
    // NOP
label_260f2c:
    // 0x260f2c: 0x0  nop
    ctx->pc = 0x260f2cu;
    // NOP
label_260f30:
    // 0x260f30: 0xb758  .word       0x0000B758                   # mult        $s6, $zero, $zero # 00000740 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x260f30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 22, (int32_t)result); }
label_260f34:
    // 0x260f34: 0xb8e0  .word       0x0000B8E0                   # add         $s7, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260f34u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_260f38:
    // 0x260f38: 0x0  nop
    ctx->pc = 0x260f38u;
    // NOP
label_260f3c:
    // 0x260f3c: 0x0  nop
    ctx->pc = 0x260f3cu;
    // NOP
label_260f40:
    // 0x260f40: 0xb770  tge         $zero, $zero, 733
    ctx->pc = 0x260f40u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_260f44:
    // 0x260f44: 0xb1c0  sll         $s6, $zero, 7
    ctx->pc = 0x260f44u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 0), 7));
label_260f48:
    // 0x260f48: 0x0  nop
    ctx->pc = 0x260f48u;
    // NOP
label_260f4c:
    // 0x260f4c: 0x0  nop
    ctx->pc = 0x260f4cu;
    // NOP
label_260f50:
    // 0x260f50: 0xb787  .word       0x0000B787                   # srav        $s6, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260f50u;
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_260f54:
    // 0x260f54: 0x28650  .word       0x00028650                   # mfhi        $s0 # 00020640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260f54u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_260f58:
    // 0x260f58: 0x0  nop
    ctx->pc = 0x260f58u;
    // NOP
label_260f5c:
    // 0x260f5c: 0x0  nop
    ctx->pc = 0x260f5cu;
    // NOP
label_260f60:
    // 0x260f60: 0xb7d8  .word       0x0000B7D8                   # mult        $s6, $zero, $zero # 000007C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x260f60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 22, (int32_t)result); }
label_260f64:
    // 0x260f64: 0x12cc0  sll         $a1, $at, 19
    ctx->pc = 0x260f64u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 1), 19));
label_260f68:
    // 0x260f68: 0x0  nop
    ctx->pc = 0x260f68u;
    // NOP
label_260f6c:
    // 0x260f6c: 0x0  nop
    ctx->pc = 0x260f6cu;
    // NOP
label_260f70:
    // 0x260f70: 0xb7fe  dsrl32      $s6, $zero, 31
    ctx->pc = 0x260f70u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) >> (32 + 31));
label_260f74:
    // 0x260f74: 0x1be70  tge         $zero, $at, 761
    ctx->pc = 0x260f74u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_260f78:
    // 0x260f78: 0x0  nop
    ctx->pc = 0x260f78u;
    // NOP
label_260f7c:
    // 0x260f7c: 0x0  nop
    ctx->pc = 0x260f7cu;
    // NOP
label_260f80:
    // 0x260f80: 0xb836  tne         $zero, $zero, 736
    ctx->pc = 0x260f80u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_260f84:
    // 0x260f84: 0xcd50  .word       0x0000CD50                   # mfhi        $t9 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260f84u;
    SET_GPR_U64(ctx, 25, ctx->hi);
label_260f88:
    // 0x260f88: 0x0  nop
    ctx->pc = 0x260f88u;
    // NOP
label_260f8c:
    // 0x260f8c: 0x0  nop
    ctx->pc = 0x260f8cu;
    // NOP
label_260f90:
    // 0x260f90: 0xb850  .word       0x0000B850                   # mfhi        $s7 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260f90u;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_260f94:
    // 0x260f94: 0x14e80  sll         $t1, $at, 26
    ctx->pc = 0x260f94u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 1), 26));
label_260f98:
    // 0x260f98: 0x0  nop
    ctx->pc = 0x260f98u;
    // NOP
label_260f9c:
    // 0x260f9c: 0x0  nop
    ctx->pc = 0x260f9cu;
    // NOP
label_260fa0:
    // 0x260fa0: 0xb87a  dsrl        $s7, $zero, 1
    ctx->pc = 0x260fa0u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 0) >> 1);
label_260fa4:
    // 0x260fa4: 0xa290  .word       0x0000A290                   # mfhi        $s4 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260fa4u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_260fa8:
    // 0x260fa8: 0x0  nop
    ctx->pc = 0x260fa8u;
    // NOP
label_260fac:
    // 0x260fac: 0x0  nop
    ctx->pc = 0x260facu;
    // NOP
label_260fb0:
    // 0x260fb0: 0xb88f  .word       0x0000B88F                   # sync # 0000B800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260fb0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_260fb4:
    // 0x260fb4: 0x107a0  .word       0x000107A0                   # add         $zero, $zero, $at # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260fb4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_260fb8:
    // 0x260fb8: 0x0  nop
    ctx->pc = 0x260fb8u;
    // NOP
label_260fbc:
    // 0x260fbc: 0x0  nop
    ctx->pc = 0x260fbcu;
    // NOP
label_260fc0:
    // 0x260fc0: 0xb8b0  tge         $zero, $zero, 738
    ctx->pc = 0x260fc0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_260fc4:
    // 0x260fc4: 0x11f80  sll         $v1, $at, 30
    ctx->pc = 0x260fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 1), 30));
label_260fc8:
    // 0x260fc8: 0x0  nop
    ctx->pc = 0x260fc8u;
    // NOP
label_260fcc:
    // 0x260fcc: 0x0  nop
    ctx->pc = 0x260fccu;
    // NOP
label_260fd0:
    // 0x260fd0: 0xb8d4  .word       0x0000B8D4                   # dsllv       $s7, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260fd0u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_260fd4:
    // 0x260fd4: 0x2c70  tge         $zero, $zero, 177
    ctx->pc = 0x260fd4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_260fd8:
    // 0x260fd8: 0x0  nop
    ctx->pc = 0x260fd8u;
    // NOP
label_260fdc:
    // 0x260fdc: 0x0  nop
    ctx->pc = 0x260fdcu;
    // NOP
label_260fe0:
    // 0x260fe0: 0xb8da  .word       0x0000B8DA                   # div         $s7, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260fe0u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_260fe4:
    // 0x260fe4: 0x14570  tge         $zero, $at, 277
    ctx->pc = 0x260fe4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_260fe8:
    // 0x260fe8: 0x0  nop
    ctx->pc = 0x260fe8u;
    // NOP
label_260fec:
    // 0x260fec: 0x0  nop
    ctx->pc = 0x260fecu;
    // NOP
label_260ff0:
    // 0x260ff0: 0xb903  sra         $s7, $zero, 4
    ctx->pc = 0x260ff0u;
    SET_GPR_S32(ctx, 23, SRA32(GPR_S32(ctx, 0), 4));
label_260ff4:
    // 0x260ff4: 0xb150  .word       0x0000B150                   # mfhi        $s6 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260ff4u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_260ff8:
    // 0x260ff8: 0x0  nop
    ctx->pc = 0x260ff8u;
    // NOP
label_260ffc:
    // 0x260ffc: 0x0  nop
    ctx->pc = 0x260ffcu;
    // NOP
label_261000:
    // 0x261000: 0xb91a  .word       0x0000B91A                   # div         $s7, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261000u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_261004:
    // 0x261004: 0x8c70  tge         $zero, $zero, 561
    ctx->pc = 0x261004u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_261008:
    // 0x261008: 0x0  nop
    ctx->pc = 0x261008u;
    // NOP
label_26100c:
    // 0x26100c: 0x0  nop
    ctx->pc = 0x26100cu;
    // NOP
label_261010:
    // 0x261010: 0xb92c  .word       0x0000B92C                   # dadd        $s7, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261010u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 23, r); }
label_261014:
    // 0x261014: 0xc020  add         $t8, $zero, $zero
    ctx->pc = 0x261014u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
label_261018:
    // 0x261018: 0x0  nop
    ctx->pc = 0x261018u;
    // NOP
label_26101c:
    // 0x26101c: 0x0  nop
    ctx->pc = 0x26101cu;
    // NOP
label_261020:
    // 0x261020: 0xb945  .word       0x0000B945                   # INVALID     $zero, $zero, -0x46BB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261020u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x261020 raw=0x0000B945"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_261024:
    // 0x261024: 0xc220  .word       0x0000C220                   # add         $t8, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261024u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
label_261028:
    // 0x261028: 0x0  nop
    ctx->pc = 0x261028u;
    // NOP
label_26102c:
    // 0x26102c: 0x0  nop
    ctx->pc = 0x26102cu;
    // NOP
label_261030:
    // 0x261030: 0xb95e  .word       0x0000B95E                   # ddiv        $s7, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261030u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x261030 raw=0x0000B95E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_261034:
    // 0x261034: 0x1ba00  sll         $s7, $at, 8
    ctx->pc = 0x261034u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 1), 8));
label_261038:
    // 0x261038: 0x0  nop
    ctx->pc = 0x261038u;
    // NOP
label_26103c:
    // 0x26103c: 0x0  nop
    ctx->pc = 0x26103cu;
    // NOP
label_261040:
    // 0x261040: 0xb996  .word       0x0000B996                   # dsrlv       $s7, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261040u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_261044:
    // 0x261044: 0xa120  .word       0x0000A120                   # add         $s4, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261044u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_261048:
    // 0x261048: 0x0  nop
    ctx->pc = 0x261048u;
    // NOP
label_26104c:
    // 0x26104c: 0x0  nop
    ctx->pc = 0x26104cu;
    // NOP
label_261050:
    // 0x261050: 0xb9ab  .word       0x0000B9AB                   # sltu        $s7, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261050u;
    SET_GPR_U64(ctx, 23, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_261054:
    // 0x261054: 0x5070  tge         $zero, $zero, 321
    ctx->pc = 0x261054u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_261058:
    // 0x261058: 0x0  nop
    ctx->pc = 0x261058u;
    // NOP
label_26105c:
    // 0x26105c: 0x0  nop
    ctx->pc = 0x26105cu;
    // NOP
label_261060:
    // 0x261060: 0xb9b6  tne         $zero, $zero, 742
    ctx->pc = 0x261060u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_261064:
    // 0x261064: 0xd6c0  sll         $k0, $zero, 27
    ctx->pc = 0x261064u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_261068:
    // 0x261068: 0x0  nop
    ctx->pc = 0x261068u;
    // NOP
label_26106c:
    // 0x26106c: 0x0  nop
    ctx->pc = 0x26106cu;
    // NOP
label_261070:
    // 0x261070: 0xb9d1  .word       0x0000B9D1                   # mthi        $zero # 0000B9C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261070u;
    ctx->hi = GPR_U64(ctx, 0);
label_261074:
    // 0x261074: 0xa100  sll         $s4, $zero, 4
    ctx->pc = 0x261074u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_261078:
    // 0x261078: 0x0  nop
    ctx->pc = 0x261078u;
    // NOP
label_26107c:
    // 0x26107c: 0x0  nop
    ctx->pc = 0x26107cu;
    // NOP
label_261080:
    // 0x261080: 0xb9e6  .word       0x0000B9E6                   # xor         $s7, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261080u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_261084:
    // 0x261084: 0x1de0  .word       0x00001DE0                   # add         $v1, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261084u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_261088:
    // 0x261088: 0x0  nop
    ctx->pc = 0x261088u;
    // NOP
label_26108c:
    // 0x26108c: 0x0  nop
    ctx->pc = 0x26108cu;
    // NOP
label_261090:
    // 0x261090: 0xb9ea  .word       0x0000B9EA                   # slt         $s7, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261090u;
    SET_GPR_U64(ctx, 23, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_261094:
    // 0x261094: 0x2950  .word       0x00002950                   # mfhi        $a1 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261094u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_261098:
    // 0x261098: 0x0  nop
    ctx->pc = 0x261098u;
    // NOP
label_26109c:
    // 0x26109c: 0x0  nop
    ctx->pc = 0x26109cu;
    // NOP
label_2610a0:
    // 0x2610a0: 0xb9f0  tge         $zero, $zero, 743
    ctx->pc = 0x2610a0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2610a4:
    // 0x2610a4: 0x10e0  .word       0x000010E0                   # add         $v0, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2610a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
label_2610a8:
    // 0x2610a8: 0x0  nop
    ctx->pc = 0x2610a8u;
    // NOP
label_2610ac:
    // 0x2610ac: 0x0  nop
    ctx->pc = 0x2610acu;
    // NOP
label_2610b0:
    // 0x2610b0: 0xb9f3  tltu        $zero, $zero, 743
    ctx->pc = 0x2610b0u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2610b4:
    // 0x2610b4: 0x9750  .word       0x00009750                   # mfhi        $s2 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2610b4u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_2610b8:
    // 0x2610b8: 0x0  nop
    ctx->pc = 0x2610b8u;
    // NOP
label_2610bc:
    // 0x2610bc: 0x0  nop
    ctx->pc = 0x2610bcu;
    // NOP
label_2610c0:
    // 0x2610c0: 0xba06  .word       0x0000BA06                   # srlv        $s7, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2610c0u;
    SET_GPR_S32(ctx, 23, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2610c4:
    // 0x2610c4: 0x5ae0  .word       0x00005AE0                   # add         $t3, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2610c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_2610c8:
    // 0x2610c8: 0x0  nop
    ctx->pc = 0x2610c8u;
    // NOP
label_2610cc:
    // 0x2610cc: 0x0  nop
    ctx->pc = 0x2610ccu;
    // NOP
label_2610d0:
    // 0x2610d0: 0xba12  .word       0x0000BA12                   # mflo        $s7 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2610d0u;
    SET_GPR_U64(ctx, 23, ctx->lo);
label_2610d4:
    // 0x2610d4: 0x15720  .word       0x00015720                   # add         $t2, $zero, $at # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2610d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_2610d8:
    // 0x2610d8: 0x0  nop
    ctx->pc = 0x2610d8u;
    // NOP
label_2610dc:
    // 0x2610dc: 0x0  nop
    ctx->pc = 0x2610dcu;
    // NOP
label_2610e0:
    // 0x2610e0: 0xba3d  .word       0x0000BA3D                   # INVALID     $zero, $zero, -0x45C3 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2610e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2610E0 raw=0x0000BA3D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2610e4:
    // 0x2610e4: 0x6f10  .word       0x00006F10                   # mfhi        $t5 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2610e4u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_2610e8:
    // 0x2610e8: 0x0  nop
    ctx->pc = 0x2610e8u;
    // NOP
label_2610ec:
    // 0x2610ec: 0x0  nop
    ctx->pc = 0x2610ecu;
    // NOP
label_2610f0:
    // 0x2610f0: 0xba4b  .word       0x0000BA4B                   # movn        $s7, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2610f0u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 0));
label_2610f4:
    // 0x2610f4: 0x10900  sll         $at, $at, 4
    ctx->pc = 0x2610f4u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 1), 4));
label_2610f8:
    // 0x2610f8: 0x0  nop
    ctx->pc = 0x2610f8u;
    // NOP
label_2610fc:
    // 0x2610fc: 0x0  nop
    ctx->pc = 0x2610fcu;
    // NOP
label_261100:
    // 0x261100: 0xba6d  .word       0x0000BA6D                   # daddu       $s7, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261100u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_261104:
    // 0x261104: 0x8cc0  sll         $s1, $zero, 19
    ctx->pc = 0x261104u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_261108:
    // 0x261108: 0x0  nop
    ctx->pc = 0x261108u;
    // NOP
label_26110c:
    // 0x26110c: 0x0  nop
    ctx->pc = 0x26110cu;
    // NOP
label_261110:
    // 0x261110: 0xba7f  dsra32      $s7, $zero, 9
    ctx->pc = 0x261110u;
    SET_GPR_S64(ctx, 23, GPR_S64(ctx, 0) >> (32 + 9));
label_261114:
    // 0x261114: 0xbad0  .word       0x0000BAD0                   # mfhi        $s7 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261114u;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_261118:
    // 0x261118: 0x0  nop
    ctx->pc = 0x261118u;
    // NOP
label_26111c:
    // 0x26111c: 0x0  nop
    ctx->pc = 0x26111cu;
    // NOP
label_261120:
    // 0x261120: 0xba97  .word       0x0000BA97                   # dsrav       $s7, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261120u;
    SET_GPR_S64(ctx, 23, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_261124:
    // 0x261124: 0xa6a0  .word       0x0000A6A0                   # add         $s4, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261124u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_261128:
    // 0x261128: 0x0  nop
    ctx->pc = 0x261128u;
    // NOP
label_26112c:
    // 0x26112c: 0x0  nop
    ctx->pc = 0x26112cu;
    // NOP
label_261130:
    // 0x261130: 0xbaac  .word       0x0000BAAC                   # dadd        $s7, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261130u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 23, r); }
label_261134:
    // 0x261134: 0x59c0  sll         $t3, $zero, 7
    ctx->pc = 0x261134u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 7));
label_261138:
    // 0x261138: 0x0  nop
    ctx->pc = 0x261138u;
    // NOP
label_26113c:
    // 0x26113c: 0x0  nop
    ctx->pc = 0x26113cu;
    // NOP
label_261140:
    // 0x261140: 0xbab8  dsll        $s7, $zero, 10
    ctx->pc = 0x261140u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 0) << 10);
label_261144:
    // 0x261144: 0x95f0  tge         $zero, $zero, 599
    ctx->pc = 0x261144u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_261148:
    // 0x261148: 0x0  nop
    ctx->pc = 0x261148u;
    // NOP
label_26114c:
    // 0x26114c: 0x0  nop
    ctx->pc = 0x26114cu;
    // NOP
label_261150:
    // 0x261150: 0xbacb  .word       0x0000BACB                   # movn        $s7, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261150u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 0));
label_261154:
    // 0x261154: 0xde90  .word       0x0000DE90                   # mfhi        $k1 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261154u;
    SET_GPR_U64(ctx, 27, ctx->hi);
label_261158:
    // 0x261158: 0x0  nop
    ctx->pc = 0x261158u;
    // NOP
label_26115c:
    // 0x26115c: 0x0  nop
    ctx->pc = 0x26115cu;
    // NOP
label_261160:
    // 0x261160: 0xbae7  .word       0x0000BAE7                   # not         $s7, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261160u;
    SET_GPR_U64(ctx, 23, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_261164:
    // 0x261164: 0x7ed0  .word       0x00007ED0                   # mfhi        $t7 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261164u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_261168:
    // 0x261168: 0x0  nop
    ctx->pc = 0x261168u;
    // NOP
label_26116c:
    // 0x26116c: 0x0  nop
    ctx->pc = 0x26116cu;
    // NOP
label_261170:
    // 0x261170: 0xbaf7  .word       0x0000BAF7                   # INVALID     $zero, $zero, -0x4509 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261170u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x261170 raw=0x0000BAF7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_261174:
    // 0x261174: 0xae10  .word       0x0000AE10                   # mfhi        $s5 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261174u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_261178:
    // 0x261178: 0x0  nop
    ctx->pc = 0x261178u;
    // NOP
label_26117c:
    // 0x26117c: 0x0  nop
    ctx->pc = 0x26117cu;
    // NOP
label_261180:
    // 0x261180: 0xbb0d  break       0, 748
    ctx->pc = 0x261180u;
    runtime->handleBreak(rdram, ctx);
label_261184:
    // 0x261184: 0x5910  .word       0x00005910                   # mfhi        $t3 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261184u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_261188:
    // 0x261188: 0x0  nop
    ctx->pc = 0x261188u;
    // NOP
label_26118c:
    // 0x26118c: 0x0  nop
    ctx->pc = 0x26118cu;
    // NOP
label_261190:
    // 0x261190: 0xbb19  .word       0x0000BB19                   # multu       $zero, $zero # 0000BB00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261190u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 23, (int32_t)result); }
label_261194:
    // 0x261194: 0x50f0  tge         $zero, $zero, 323
    ctx->pc = 0x261194u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_261198:
    // 0x261198: 0x0  nop
    ctx->pc = 0x261198u;
    // NOP
label_26119c:
    // 0x26119c: 0x0  nop
    ctx->pc = 0x26119cu;
    // NOP
label_2611a0:
    // 0x2611a0: 0xbb24  .word       0x0000BB24                   # and         $s7, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2611a0u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_2611a4:
    // 0x2611a4: 0x5240  sll         $t2, $zero, 9
    ctx->pc = 0x2611a4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 9));
label_2611a8:
    // 0x2611a8: 0x0  nop
    ctx->pc = 0x2611a8u;
    // NOP
label_2611ac:
    // 0x2611ac: 0x0  nop
    ctx->pc = 0x2611acu;
    // NOP
label_2611b0:
    // 0x2611b0: 0xbb2f  .word       0x0000BB2F                   # dsubu       $s7, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2611b0u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_2611b4:
    // 0x2611b4: 0x2650  .word       0x00002650                   # mfhi        $a0 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2611b4u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_2611b8:
    // 0x2611b8: 0x0  nop
    ctx->pc = 0x2611b8u;
    // NOP
label_2611bc:
    // 0x2611bc: 0x0  nop
    ctx->pc = 0x2611bcu;
    // NOP
label_2611c0:
    // 0x2611c0: 0xbb34  teq         $zero, $zero, 748
    ctx->pc = 0x2611c0u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2611c4:
    // 0x2611c4: 0x2390  .word       0x00002390                   # mfhi        $a0 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2611c4u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_2611c8:
    // 0x2611c8: 0x0  nop
    ctx->pc = 0x2611c8u;
    // NOP
label_2611cc:
    // 0x2611cc: 0x0  nop
    ctx->pc = 0x2611ccu;
    // NOP
label_2611d0:
    // 0x2611d0: 0xbb39  .word       0x0000BB39                   # INVALID     $zero, $zero, -0x44C7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2611d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x2611D0 raw=0x0000BB39"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2611d4:
    // 0x2611d4: 0x1d70  tge         $zero, $zero, 117
    ctx->pc = 0x2611d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2611d8:
    // 0x2611d8: 0x0  nop
    ctx->pc = 0x2611d8u;
    // NOP
label_2611dc:
    // 0x2611dc: 0x0  nop
    ctx->pc = 0x2611dcu;
    // NOP
label_2611e0:
    // 0x2611e0: 0xbb3d  .word       0x0000BB3D                   # INVALID     $zero, $zero, -0x44C3 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2611e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2611E0 raw=0x0000BB3D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2611e4:
    // 0x2611e4: 0x63f0  tge         $zero, $zero, 399
    ctx->pc = 0x2611e4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2611e8:
    // 0x2611e8: 0x0  nop
    ctx->pc = 0x2611e8u;
    // NOP
label_2611ec:
    // 0x2611ec: 0x0  nop
    ctx->pc = 0x2611ecu;
    // NOP
label_2611f0:
    // 0x2611f0: 0xbb4a  .word       0x0000BB4A                   # movz        $s7, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2611f0u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 0));
label_2611f4:
    // 0x2611f4: 0x3170  tge         $zero, $zero, 197
    ctx->pc = 0x2611f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2611f8:
    // 0x2611f8: 0x0  nop
    ctx->pc = 0x2611f8u;
    // NOP
label_2611fc:
    // 0x2611fc: 0x0  nop
    ctx->pc = 0x2611fcu;
    // NOP
label_261200:
    // 0x261200: 0xbb51  .word       0x0000BB51                   # mthi        $zero # 0000BB40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261200u;
    ctx->hi = GPR_U64(ctx, 0);
label_261204:
    // 0x261204: 0x2b40  sll         $a1, $zero, 13
    ctx->pc = 0x261204u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 0), 13));
label_261208:
    // 0x261208: 0x0  nop
    ctx->pc = 0x261208u;
    // NOP
label_26120c:
    // 0x26120c: 0x0  nop
    ctx->pc = 0x26120cu;
    // NOP
label_261210:
    // 0x261210: 0xbb57  .word       0x0000BB57                   # dsrav       $s7, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261210u;
    SET_GPR_S64(ctx, 23, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_261214:
    // 0x261214: 0x2050  .word       0x00002050                   # mfhi        $a0 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261214u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_261218:
    // 0x261218: 0x0  nop
    ctx->pc = 0x261218u;
    // NOP
label_26121c:
    // 0x26121c: 0x0  nop
    ctx->pc = 0x26121cu;
    // NOP
label_261220:
    // 0x261220: 0xbb5c  .word       0x0000BB5C                   # dmult       $zero, $zero # 0000BB40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261220u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x261220 raw=0x0000BB5C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_261224:
    // 0x261224: 0x36c0  sll         $a2, $zero, 27
    ctx->pc = 0x261224u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_261228:
    // 0x261228: 0x0  nop
    ctx->pc = 0x261228u;
    // NOP
label_26122c:
    // 0x26122c: 0x0  nop
    ctx->pc = 0x26122cu;
    // NOP
label_261230:
    // 0x261230: 0xbb63  .word       0x0000BB63                   # negu        $s7, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261230u;
    SET_GPR_S32(ctx, 23, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_261234:
    // 0x261234: 0x7190  .word       0x00007190                   # mfhi        $t6 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261234u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_261238:
    // 0x261238: 0x0  nop
    ctx->pc = 0x261238u;
    // NOP
label_26123c:
    // 0x26123c: 0x0  nop
    ctx->pc = 0x26123cu;
    // NOP
label_261240:
    // 0x261240: 0xbb72  tlt         $zero, $zero, 749
    ctx->pc = 0x261240u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_261244:
    // 0x261244: 0x9540  sll         $s2, $zero, 21
    ctx->pc = 0x261244u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_261248:
    // 0x261248: 0x0  nop
    ctx->pc = 0x261248u;
    // NOP
label_26124c:
    // 0x26124c: 0x0  nop
    ctx->pc = 0x26124cu;
    // NOP
label_261250:
    // 0x261250: 0xbb85  .word       0x0000BB85                   # INVALID     $zero, $zero, -0x447B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261250u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x261250 raw=0x0000BB85"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_261254:
    // 0x261254: 0x1f20  .word       0x00001F20                   # add         $v1, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261254u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_261258:
    // 0x261258: 0x0  nop
    ctx->pc = 0x261258u;
    // NOP
label_26125c:
    // 0x26125c: 0x0  nop
    ctx->pc = 0x26125cu;
    // NOP
label_261260:
    // 0x261260: 0xbb89  .word       0x0000BB89                   # jalr        $s7, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
label_261264:
    if (ctx->pc == 0x261264u) {
        ctx->pc = 0x261264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261260u;
        // 0x261264: 0x3f70  tge         $zero, $zero, 253 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x261268u;
        goto label_261268;
    }
    ctx->pc = 0x261260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 23, 0x261268u);
        ctx->pc = 0x261264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261260u;
        // 0x261264: 0x3f70  tge         $zero, $zero, 253 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x261260u, 0x261268u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x261268u;
label_261268:
    // 0x261268: 0x0  nop
    ctx->pc = 0x261268u;
    // NOP
label_26126c:
    // 0x26126c: 0x0  nop
    ctx->pc = 0x26126cu;
    // NOP
label_261270:
    // 0x261270: 0xbb91  .word       0x0000BB91                   # mthi        $zero # 0000BB80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261270u;
    ctx->hi = GPR_U64(ctx, 0);
label_261274:
    // 0x261274: 0x4100  sll         $t0, $zero, 4
    ctx->pc = 0x261274u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_261278:
    // 0x261278: 0x0  nop
    ctx->pc = 0x261278u;
    // NOP
label_26127c:
    // 0x26127c: 0x0  nop
    ctx->pc = 0x26127cu;
    // NOP
label_261280:
    // 0x261280: 0xbb9a  .word       0x0000BB9A                   # div         $s7, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261280u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_261284:
    // 0x261284: 0x3140  sll         $a2, $zero, 5
    ctx->pc = 0x261284u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 5));
label_261288:
    // 0x261288: 0x0  nop
    ctx->pc = 0x261288u;
    // NOP
label_26128c:
    // 0x26128c: 0x0  nop
    ctx->pc = 0x26128cu;
    // NOP
label_261290:
    // 0x261290: 0xbba1  .word       0x0000BBA1                   # addu        $s7, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261290u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_261294:
    // 0x261294: 0x4a50  .word       0x00004A50                   # mfhi        $t1 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261294u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_261298:
    // 0x261298: 0x0  nop
    ctx->pc = 0x261298u;
    // NOP
label_26129c:
    // 0x26129c: 0x0  nop
    ctx->pc = 0x26129cu;
    // NOP
label_2612a0:
    // 0x2612a0: 0xbbab  .word       0x0000BBAB                   # sltu        $s7, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2612a0u;
    SET_GPR_U64(ctx, 23, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_2612a4:
    // 0x2612a4: 0x5020  add         $t2, $zero, $zero
    ctx->pc = 0x2612a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_2612a8:
    // 0x2612a8: 0x0  nop
    ctx->pc = 0x2612a8u;
    // NOP
label_2612ac:
    // 0x2612ac: 0x0  nop
    ctx->pc = 0x2612acu;
    // NOP
label_2612b0:
    // 0x2612b0: 0xbbb6  tne         $zero, $zero, 750
    ctx->pc = 0x2612b0u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2612b4:
    // 0x2612b4: 0xad40  sll         $s5, $zero, 21
    ctx->pc = 0x2612b4u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_2612b8:
    // 0x2612b8: 0x0  nop
    ctx->pc = 0x2612b8u;
    // NOP
label_2612bc:
    // 0x2612bc: 0x0  nop
    ctx->pc = 0x2612bcu;
    // NOP
label_2612c0:
    // 0x2612c0: 0xbbcc  syscall     751
    ctx->pc = 0x2612c0u;
    ctx->pc = 0x2612C4u;
runtime->handleSyscall(rdram, ctx, 0x2EFu);
label_2612c4:
    // 0x2612c4: 0x3d00  sll         $a3, $zero, 20
    ctx->pc = 0x2612c4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
label_2612c8:
    // 0x2612c8: 0x0  nop
    ctx->pc = 0x2612c8u;
    // NOP
label_2612cc:
    // 0x2612cc: 0x0  nop
    ctx->pc = 0x2612ccu;
    // NOP
label_2612d0:
    // 0x2612d0: 0xbbd4  .word       0x0000BBD4                   # dsllv       $s7, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2612d0u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_2612d4:
    // 0x2612d4: 0x6170  tge         $zero, $zero, 389
    ctx->pc = 0x2612d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2612d8:
    // 0x2612d8: 0x0  nop
    ctx->pc = 0x2612d8u;
    // NOP
label_2612dc:
    // 0x2612dc: 0x0  nop
    ctx->pc = 0x2612dcu;
    // NOP
label_2612e0:
    // 0x2612e0: 0xbbe1  .word       0x0000BBE1                   # addu        $s7, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2612e0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2612e4:
    // 0x2612e4: 0x6090  .word       0x00006090                   # mfhi        $t4 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2612e4u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_2612e8:
    // 0x2612e8: 0x0  nop
    ctx->pc = 0x2612e8u;
    // NOP
label_2612ec:
    // 0x2612ec: 0x0  nop
    ctx->pc = 0x2612ecu;
    // NOP
label_2612f0:
    // 0x2612f0: 0xbbee  .word       0x0000BBEE                   # dsub        $s7, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2612f0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 23, r); }
label_2612f4:
    // 0x2612f4: 0x9d70  tge         $zero, $zero, 629
    ctx->pc = 0x2612f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2612f8:
    // 0x2612f8: 0x0  nop
    ctx->pc = 0x2612f8u;
    // NOP
label_2612fc:
    // 0x2612fc: 0x0  nop
    ctx->pc = 0x2612fcu;
    // NOP
label_261300:
    // 0x261300: 0xbc02  srl         $s7, $zero, 16
    ctx->pc = 0x261300u;
    SET_GPR_S32(ctx, 23, (int32_t)SRL32(GPR_U32(ctx, 0), 16));
label_261304:
    // 0x261304: 0x5270  tge         $zero, $zero, 329
    ctx->pc = 0x261304u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_261308:
    // 0x261308: 0x0  nop
    ctx->pc = 0x261308u;
    // NOP
label_26130c:
    // 0x26130c: 0x0  nop
    ctx->pc = 0x26130cu;
    // NOP
label_261310:
    // 0x261310: 0xbc0d  break       0, 752
    ctx->pc = 0x261310u;
    runtime->handleBreak(rdram, ctx);
label_261314:
    // 0x261314: 0x5dc0  sll         $t3, $zero, 23
    ctx->pc = 0x261314u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 23));
label_261318:
    // 0x261318: 0x0  nop
    ctx->pc = 0x261318u;
    // NOP
label_26131c:
    // 0x26131c: 0x0  nop
    ctx->pc = 0x26131cu;
    // NOP
label_261320:
    // 0x261320: 0xbc19  .word       0x0000BC19                   # multu       $zero, $zero # 0000BC00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261320u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 23, (int32_t)result); }
label_261324:
    // 0x261324: 0x5f70  tge         $zero, $zero, 381
    ctx->pc = 0x261324u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_261328:
    // 0x261328: 0x0  nop
    ctx->pc = 0x261328u;
    // NOP
label_26132c:
    // 0x26132c: 0x0  nop
    ctx->pc = 0x26132cu;
    // NOP
label_261330:
    // 0x261330: 0xbc25  .word       0x0000BC25                   # move        $s7, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261330u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_261334:
    // 0x261334: 0x12850  .word       0x00012850                   # mfhi        $a1 # 00010040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261334u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_261338:
    // 0x261338: 0x0  nop
    ctx->pc = 0x261338u;
    // NOP
label_26133c:
    // 0x26133c: 0x0  nop
    ctx->pc = 0x26133cu;
    // NOP
label_261340:
    // 0x261340: 0xbc4b  .word       0x0000BC4B                   # movn        $s7, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261340u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 0));
label_261344:
    // 0x261344: 0x113c0  sll         $v0, $at, 15
    ctx->pc = 0x261344u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 1), 15));
label_261348:
    // 0x261348: 0x0  nop
    ctx->pc = 0x261348u;
    // NOP
label_26134c:
    // 0x26134c: 0x0  nop
    ctx->pc = 0x26134cu;
    // NOP
label_261350:
    // 0x261350: 0xbc6e  .word       0x0000BC6E                   # dsub        $s7, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261350u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 23, r); }
label_261354:
    // 0x261354: 0x135e0  .word       0x000135E0                   # add         $a2, $zero, $at # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261354u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_261358:
    // 0x261358: 0x0  nop
    ctx->pc = 0x261358u;
    // NOP
label_26135c:
    // 0x26135c: 0x0  nop
    ctx->pc = 0x26135cu;
    // NOP
label_261360:
    // 0x261360: 0xbc95  .word       0x0000BC95                   # INVALID     $zero, $zero, -0x436B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261360u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x261360 raw=0x0000BC95"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_261364:
    // 0x261364: 0x5690  .word       0x00005690                   # mfhi        $t2 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261364u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_261368:
    // 0x261368: 0x0  nop
    ctx->pc = 0x261368u;
    // NOP
label_26136c:
    // 0x26136c: 0x0  nop
    ctx->pc = 0x26136cu;
    // NOP
label_261370:
    // 0x261370: 0xbca0  .word       0x0000BCA0                   # add         $s7, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261370u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_261374:
    // 0x261374: 0x94a0  .word       0x000094A0                   # add         $s2, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261374u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_261378:
    // 0x261378: 0x0  nop
    ctx->pc = 0x261378u;
    // NOP
label_26137c:
    // 0x26137c: 0x0  nop
    ctx->pc = 0x26137cu;
    // NOP
label_261380:
    // 0x261380: 0xbcb3  tltu        $zero, $zero, 754
    ctx->pc = 0x261380u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_261384:
    // 0x261384: 0x6d60  .word       0x00006D60                   # add         $t5, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261384u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_261388:
    // 0x261388: 0x0  nop
    ctx->pc = 0x261388u;
    // NOP
label_26138c:
    // 0x26138c: 0x0  nop
    ctx->pc = 0x26138cu;
    // NOP
label_261390:
    // 0x261390: 0xbcc1  .word       0x0000BCC1                   # INVALID     $zero, $zero, -0x433F # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261390u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x261390 raw=0x0000BCC1"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_261394:
    // 0x261394: 0xaa30  tge         $zero, $zero, 680
    ctx->pc = 0x261394u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_261398:
    // 0x261398: 0x0  nop
    ctx->pc = 0x261398u;
    // NOP
label_26139c:
    // 0x26139c: 0x0  nop
    ctx->pc = 0x26139cu;
    // NOP
label_2613a0:
    // 0x2613a0: 0xbcd7  .word       0x0000BCD7                   # dsrav       $s7, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2613a0u;
    SET_GPR_S64(ctx, 23, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_2613a4:
    // 0x2613a4: 0x5e00  sll         $t3, $zero, 24
    ctx->pc = 0x2613a4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 24));
label_2613a8:
    // 0x2613a8: 0x0  nop
    ctx->pc = 0x2613a8u;
    // NOP
label_2613ac:
    // 0x2613ac: 0x0  nop
    ctx->pc = 0x2613acu;
    // NOP
label_2613b0:
    // 0x2613b0: 0xbce3  .word       0x0000BCE3                   # negu        $s7, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2613b0u;
    SET_GPR_S32(ctx, 23, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2613b4:
    // 0x2613b4: 0x8ec0  sll         $s1, $zero, 27
    ctx->pc = 0x2613b4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_2613b8:
    // 0x2613b8: 0x0  nop
    ctx->pc = 0x2613b8u;
    // NOP
label_2613bc:
    // 0x2613bc: 0x0  nop
    ctx->pc = 0x2613bcu;
    // NOP
label_2613c0:
    // 0x2613c0: 0xbcf5  .word       0x0000BCF5                   # INVALID     $zero, $zero, -0x430B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2613c0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x2613C0 raw=0x0000BCF5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2613c4:
    // 0x2613c4: 0xbac0  sll         $s7, $zero, 11
    ctx->pc = 0x2613c4u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_2613c8:
    // 0x2613c8: 0x0  nop
    ctx->pc = 0x2613c8u;
    // NOP
label_2613cc:
    // 0x2613cc: 0x0  nop
    ctx->pc = 0x2613ccu;
    // NOP
label_2613d0:
    // 0x2613d0: 0xbd0d  break       0, 756
    ctx->pc = 0x2613d0u;
    runtime->handleBreak(rdram, ctx);
label_2613d4:
    // 0x2613d4: 0x55e0  .word       0x000055E0                   # add         $t2, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2613d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_2613d8:
    // 0x2613d8: 0x0  nop
    ctx->pc = 0x2613d8u;
    // NOP
label_2613dc:
    // 0x2613dc: 0x0  nop
    ctx->pc = 0x2613dcu;
    // NOP
label_2613e0:
    // 0x2613e0: 0xbd18  .word       0x0000BD18                   # mult        $s7, $zero, $zero # 00000500 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2613e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 23, (int32_t)result); }
label_2613e4:
    // 0x2613e4: 0x2750  .word       0x00002750                   # mfhi        $a0 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2613e4u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_2613e8:
    // 0x2613e8: 0x0  nop
    ctx->pc = 0x2613e8u;
    // NOP
label_2613ec:
    // 0x2613ec: 0x0  nop
    ctx->pc = 0x2613ecu;
    // NOP
label_2613f0:
    // 0x2613f0: 0xbd1d  .word       0x0000BD1D                   # dmultu      $zero, $zero # 0000BD00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2613f0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x2613F0 raw=0x0000BD1D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2613f4:
    // 0x2613f4: 0xd570  tge         $zero, $zero, 853
    ctx->pc = 0x2613f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2613f8:
    // 0x2613f8: 0x0  nop
    ctx->pc = 0x2613f8u;
    // NOP
label_2613fc:
    // 0x2613fc: 0x0  nop
    ctx->pc = 0x2613fcu;
    // NOP
label_261400:
    // 0x261400: 0xbd38  dsll        $s7, $zero, 20
    ctx->pc = 0x261400u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 0) << 20);
label_261404:
    // 0x261404: 0x12b50  .word       0x00012B50                   # mfhi        $a1 # 00010340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261404u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_261408:
    // 0x261408: 0x0  nop
    ctx->pc = 0x261408u;
    // NOP
label_26140c:
    // 0x26140c: 0x0  nop
    ctx->pc = 0x26140cu;
    // NOP
label_261410:
    // 0x261410: 0xbd5e  .word       0x0000BD5E                   # ddiv        $s7, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261410u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x261410 raw=0x0000BD5E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_261414:
    // 0x261414: 0xe240  sll         $gp, $zero, 9
    ctx->pc = 0x261414u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 0), 9));
label_261418:
    // 0x261418: 0x0  nop
    ctx->pc = 0x261418u;
    // NOP
label_26141c:
    // 0x26141c: 0x0  nop
    ctx->pc = 0x26141cu;
    // NOP
label_261420:
    // 0x261420: 0xbd7b  dsra        $s7, $zero, 21
    ctx->pc = 0x261420u;
    SET_GPR_S64(ctx, 23, GPR_S64(ctx, 0) >> 21);
label_261424:
    // 0x261424: 0x5300  sll         $t2, $zero, 12
    ctx->pc = 0x261424u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_261428:
    // 0x261428: 0x0  nop
    ctx->pc = 0x261428u;
    // NOP
label_26142c:
    // 0x26142c: 0x0  nop
    ctx->pc = 0x26142cu;
    // NOP
label_261430:
    // 0x261430: 0xbd86  .word       0x0000BD86                   # srlv        $s7, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261430u;
    SET_GPR_S32(ctx, 23, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_261434:
    // 0x261434: 0x9620  .word       0x00009620                   # add         $s2, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261434u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_261438:
    // 0x261438: 0x0  nop
    ctx->pc = 0x261438u;
    // NOP
label_26143c:
    // 0x26143c: 0x0  nop
    ctx->pc = 0x26143cu;
    // NOP
label_261440:
    // 0x261440: 0xbd99  .word       0x0000BD99                   # multu       $zero, $zero # 0000BD80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261440u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 23, (int32_t)result); }
label_261444:
    // 0x261444: 0x127a0  .word       0x000127A0                   # add         $a0, $zero, $at # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261444u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
label_261448:
    // 0x261448: 0x0  nop
    ctx->pc = 0x261448u;
    // NOP
label_26144c:
    // 0x26144c: 0x0  nop
    ctx->pc = 0x26144cu;
    // NOP
label_261450:
    // 0x261450: 0xbdbe  dsrl32      $s7, $zero, 22
    ctx->pc = 0x261450u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 0) >> (32 + 22));
label_261454:
    // 0x261454: 0xa880  sll         $s5, $zero, 2
    ctx->pc = 0x261454u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_261458:
    // 0x261458: 0x0  nop
    ctx->pc = 0x261458u;
    // NOP
label_26145c:
    // 0x26145c: 0x0  nop
    ctx->pc = 0x26145cu;
    // NOP
label_261460:
    // 0x261460: 0xbdd4  .word       0x0000BDD4                   # dsllv       $s7, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261460u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_261464:
    // 0x261464: 0x11610  .word       0x00011610                   # mfhi        $v0 # 00010600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261464u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_261468:
    // 0x261468: 0x0  nop
    ctx->pc = 0x261468u;
    // NOP
label_26146c:
    // 0x26146c: 0x0  nop
    ctx->pc = 0x26146cu;
    // NOP
label_261470:
    // 0x261470: 0xbdf7  .word       0x0000BDF7                   # INVALID     $zero, $zero, -0x4209 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261470u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x261470 raw=0x0000BDF7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_261474:
    // 0x261474: 0xbf20  .word       0x0000BF20                   # add         $s7, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261474u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_261478:
    // 0x261478: 0x0  nop
    ctx->pc = 0x261478u;
    // NOP
label_26147c:
    // 0x26147c: 0x0  nop
    ctx->pc = 0x26147cu;
    // NOP
label_261480:
    // 0x261480: 0xbe0f  .word       0x0000BE0F                   # sync.p # 0000B800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261480u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_261484:
    // 0x261484: 0x5de0  .word       0x00005DE0                   # add         $t3, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261484u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_261488:
    // 0x261488: 0x0  nop
    ctx->pc = 0x261488u;
    // NOP
label_26148c:
    // 0x26148c: 0x0  nop
    ctx->pc = 0x26148cu;
    // NOP
label_261490:
    // 0x261490: 0xbe1b  .word       0x0000BE1B                   # divu        $s7, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261490u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_261494:
    // 0x261494: 0x6d90  .word       0x00006D90                   # mfhi        $t5 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261494u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_261498:
    // 0x261498: 0x0  nop
    ctx->pc = 0x261498u;
    // NOP
label_26149c:
    // 0x26149c: 0x0  nop
    ctx->pc = 0x26149cu;
    // NOP
label_2614a0:
    // 0x2614a0: 0xbe29  .word       0x0000BE29                   # mtsa        $zero # 0000BE00 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2614a0u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_2614a4:
    // 0x2614a4: 0xc7d0  .word       0x0000C7D0                   # mfhi        $t8 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2614a4u;
    SET_GPR_U64(ctx, 24, ctx->hi);
label_2614a8:
    // 0x2614a8: 0x0  nop
    ctx->pc = 0x2614a8u;
    // NOP
label_2614ac:
    // 0x2614ac: 0x0  nop
    ctx->pc = 0x2614acu;
    // NOP
label_2614b0:
    // 0x2614b0: 0xbe42  srl         $s7, $zero, 25
    ctx->pc = 0x2614b0u;
    SET_GPR_S32(ctx, 23, (int32_t)SRL32(GPR_U32(ctx, 0), 25));
label_2614b4:
    // 0x2614b4: 0x11300  sll         $v0, $at, 12
    ctx->pc = 0x2614b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 1), 12));
label_2614b8:
    // 0x2614b8: 0x0  nop
    ctx->pc = 0x2614b8u;
    // NOP
label_2614bc:
    // 0x2614bc: 0x0  nop
    ctx->pc = 0x2614bcu;
    // NOP
label_2614c0:
    // 0x2614c0: 0xbe65  .word       0x0000BE65                   # move        $s7, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2614c0u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_2614c4:
    // 0x2614c4: 0x4250  .word       0x00004250                   # mfhi        $t0 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2614c4u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_2614c8:
    // 0x2614c8: 0x0  nop
    ctx->pc = 0x2614c8u;
    // NOP
label_2614cc:
    // 0x2614cc: 0x0  nop
    ctx->pc = 0x2614ccu;
    // NOP
label_2614d0:
    // 0x2614d0: 0xbe6e  .word       0x0000BE6E                   # dsub        $s7, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2614d0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 23, r); }
label_2614d4:
    // 0x2614d4: 0xaa50  .word       0x0000AA50                   # mfhi        $s5 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2614d4u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_2614d8:
    // 0x2614d8: 0x0  nop
    ctx->pc = 0x2614d8u;
    // NOP
label_2614dc:
    // 0x2614dc: 0x0  nop
    ctx->pc = 0x2614dcu;
    // NOP
label_2614e0:
    // 0x2614e0: 0xbe84  .word       0x0000BE84                   # sllv        $s7, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2614e0u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2614e4:
    // 0x2614e4: 0xaf20  .word       0x0000AF20                   # add         $s5, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2614e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_2614e8:
    // 0x2614e8: 0x0  nop
    ctx->pc = 0x2614e8u;
    // NOP
label_2614ec:
    // 0x2614ec: 0x0  nop
    ctx->pc = 0x2614ecu;
    // NOP
label_2614f0:
    // 0x2614f0: 0xbe9a  .word       0x0000BE9A                   # div         $s7, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2614f0u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_2614f4:
    // 0x2614f4: 0x7fe0  .word       0x00007FE0                   # add         $t7, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2614f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_2614f8:
    // 0x2614f8: 0x0  nop
    ctx->pc = 0x2614f8u;
    // NOP
label_2614fc:
    // 0x2614fc: 0x0  nop
    ctx->pc = 0x2614fcu;
    // NOP
label_261500:
    // 0x261500: 0xbeaa  .word       0x0000BEAA                   # slt         $s7, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261500u;
    SET_GPR_U64(ctx, 23, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_261504:
    // 0x261504: 0xc650  .word       0x0000C650                   # mfhi        $t8 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261504u;
    SET_GPR_U64(ctx, 24, ctx->hi);
label_261508:
    // 0x261508: 0x0  nop
    ctx->pc = 0x261508u;
    // NOP
label_26150c:
    // 0x26150c: 0x0  nop
    ctx->pc = 0x26150cu;
    // NOP
label_261510:
    // 0x261510: 0xbec3  sra         $s7, $zero, 27
    ctx->pc = 0x261510u;
    SET_GPR_S32(ctx, 23, SRA32(GPR_S32(ctx, 0), 27));
label_261514:
    // 0x261514: 0xf630  tge         $zero, $zero, 984
    ctx->pc = 0x261514u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_261518:
    // 0x261518: 0x0  nop
    ctx->pc = 0x261518u;
    // NOP
label_26151c:
    // 0x26151c: 0x0  nop
    ctx->pc = 0x26151cu;
    // NOP
    ctx->pc = 0x261520u;
    return;
}

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


void FUN_0014eba0_part759(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x2c0d80u: goto label_2c0d80;
        case 0x2c0d84u: goto label_2c0d84;
        case 0x2c0d88u: goto label_2c0d88;
        case 0x2c0d8cu: goto label_2c0d8c;
        case 0x2c0d90u: goto label_2c0d90;
        case 0x2c0d94u: goto label_2c0d94;
        case 0x2c0d98u: goto label_2c0d98;
        case 0x2c0d9cu: goto label_2c0d9c;
        case 0x2c0da0u: goto label_2c0da0;
        case 0x2c0da4u: goto label_2c0da4;
        case 0x2c0da8u: goto label_2c0da8;
        case 0x2c0dacu: goto label_2c0dac;
        case 0x2c0db0u: goto label_2c0db0;
        case 0x2c0db4u: goto label_2c0db4;
        case 0x2c0db8u: goto label_2c0db8;
        case 0x2c0dbcu: goto label_2c0dbc;
        case 0x2c0dc0u: goto label_2c0dc0;
        case 0x2c0dc4u: goto label_2c0dc4;
        case 0x2c0dc8u: goto label_2c0dc8;
        case 0x2c0dccu: goto label_2c0dcc;
        case 0x2c0dd0u: goto label_2c0dd0;
        case 0x2c0dd4u: goto label_2c0dd4;
        case 0x2c0dd8u: goto label_2c0dd8;
        case 0x2c0ddcu: goto label_2c0ddc;
        case 0x2c0de0u: goto label_2c0de0;
        case 0x2c0de4u: goto label_2c0de4;
        case 0x2c0de8u: goto label_2c0de8;
        case 0x2c0decu: goto label_2c0dec;
        case 0x2c0df0u: goto label_2c0df0;
        case 0x2c0df4u: goto label_2c0df4;
        case 0x2c0df8u: goto label_2c0df8;
        case 0x2c0dfcu: goto label_2c0dfc;
        case 0x2c0e00u: goto label_2c0e00;
        case 0x2c0e04u: goto label_2c0e04;
        case 0x2c0e08u: goto label_2c0e08;
        case 0x2c0e0cu: goto label_2c0e0c;
        case 0x2c0e10u: goto label_2c0e10;
        case 0x2c0e14u: goto label_2c0e14;
        case 0x2c0e18u: goto label_2c0e18;
        case 0x2c0e1cu: goto label_2c0e1c;
        case 0x2c0e20u: goto label_2c0e20;
        case 0x2c0e24u: goto label_2c0e24;
        case 0x2c0e28u: goto label_2c0e28;
        case 0x2c0e2cu: goto label_2c0e2c;
        case 0x2c0e30u: goto label_2c0e30;
        case 0x2c0e34u: goto label_2c0e34;
        case 0x2c0e38u: goto label_2c0e38;
        case 0x2c0e3cu: goto label_2c0e3c;
        case 0x2c0e40u: goto label_2c0e40;
        case 0x2c0e44u: goto label_2c0e44;
        case 0x2c0e48u: goto label_2c0e48;
        case 0x2c0e4cu: goto label_2c0e4c;
        case 0x2c0e50u: goto label_2c0e50;
        case 0x2c0e54u: goto label_2c0e54;
        case 0x2c0e58u: goto label_2c0e58;
        case 0x2c0e5cu: goto label_2c0e5c;
        case 0x2c0e60u: goto label_2c0e60;
        case 0x2c0e64u: goto label_2c0e64;
        case 0x2c0e68u: goto label_2c0e68;
        case 0x2c0e6cu: goto label_2c0e6c;
        case 0x2c0e70u: goto label_2c0e70;
        case 0x2c0e74u: goto label_2c0e74;
        case 0x2c0e78u: goto label_2c0e78;
        case 0x2c0e7cu: goto label_2c0e7c;
        case 0x2c0e80u: goto label_2c0e80;
        case 0x2c0e84u: goto label_2c0e84;
        case 0x2c0e88u: goto label_2c0e88;
        case 0x2c0e8cu: goto label_2c0e8c;
        case 0x2c0e90u: goto label_2c0e90;
        case 0x2c0e94u: goto label_2c0e94;
        case 0x2c0e98u: goto label_2c0e98;
        case 0x2c0e9cu: goto label_2c0e9c;
        case 0x2c0ea0u: goto label_2c0ea0;
        case 0x2c0ea4u: goto label_2c0ea4;
        case 0x2c0ea8u: goto label_2c0ea8;
        case 0x2c0eacu: goto label_2c0eac;
        case 0x2c0eb0u: goto label_2c0eb0;
        case 0x2c0eb4u: goto label_2c0eb4;
        case 0x2c0eb8u: goto label_2c0eb8;
        case 0x2c0ebcu: goto label_2c0ebc;
        case 0x2c0ec0u: goto label_2c0ec0;
        case 0x2c0ec4u: goto label_2c0ec4;
        case 0x2c0ec8u: goto label_2c0ec8;
        case 0x2c0eccu: goto label_2c0ecc;
        case 0x2c0ed0u: goto label_2c0ed0;
        case 0x2c0ed4u: goto label_2c0ed4;
        case 0x2c0ed8u: goto label_2c0ed8;
        case 0x2c0edcu: goto label_2c0edc;
        case 0x2c0ee0u: goto label_2c0ee0;
        case 0x2c0ee4u: goto label_2c0ee4;
        case 0x2c0ee8u: goto label_2c0ee8;
        case 0x2c0eecu: goto label_2c0eec;
        case 0x2c0ef0u: goto label_2c0ef0;
        case 0x2c0ef4u: goto label_2c0ef4;
        case 0x2c0ef8u: goto label_2c0ef8;
        case 0x2c0efcu: goto label_2c0efc;
        case 0x2c0f00u: goto label_2c0f00;
        case 0x2c0f04u: goto label_2c0f04;
        case 0x2c0f08u: goto label_2c0f08;
        case 0x2c0f0cu: goto label_2c0f0c;
        case 0x2c0f10u: goto label_2c0f10;
        case 0x2c0f14u: goto label_2c0f14;
        case 0x2c0f18u: goto label_2c0f18;
        case 0x2c0f1cu: goto label_2c0f1c;
        case 0x2c0f20u: goto label_2c0f20;
        case 0x2c0f24u: goto label_2c0f24;
        case 0x2c0f28u: goto label_2c0f28;
        case 0x2c0f2cu: goto label_2c0f2c;
        case 0x2c0f30u: goto label_2c0f30;
        case 0x2c0f34u: goto label_2c0f34;
        case 0x2c0f38u: goto label_2c0f38;
        case 0x2c0f3cu: goto label_2c0f3c;
        case 0x2c0f40u: goto label_2c0f40;
        case 0x2c0f44u: goto label_2c0f44;
        case 0x2c0f48u: goto label_2c0f48;
        case 0x2c0f4cu: goto label_2c0f4c;
        case 0x2c0f50u: goto label_2c0f50;
        case 0x2c0f54u: goto label_2c0f54;
        case 0x2c0f58u: goto label_2c0f58;
        case 0x2c0f5cu: goto label_2c0f5c;
        case 0x2c0f60u: goto label_2c0f60;
        case 0x2c0f64u: goto label_2c0f64;
        case 0x2c0f68u: goto label_2c0f68;
        case 0x2c0f6cu: goto label_2c0f6c;
        case 0x2c0f70u: goto label_2c0f70;
        case 0x2c0f74u: goto label_2c0f74;
        case 0x2c0f78u: goto label_2c0f78;
        case 0x2c0f7cu: goto label_2c0f7c;
        case 0x2c0f80u: goto label_2c0f80;
        case 0x2c0f84u: goto label_2c0f84;
        case 0x2c0f88u: goto label_2c0f88;
        case 0x2c0f8cu: goto label_2c0f8c;
        case 0x2c0f90u: goto label_2c0f90;
        case 0x2c0f94u: goto label_2c0f94;
        case 0x2c0f98u: goto label_2c0f98;
        case 0x2c0f9cu: goto label_2c0f9c;
        case 0x2c0fa0u: goto label_2c0fa0;
        case 0x2c0fa4u: goto label_2c0fa4;
        case 0x2c0fa8u: goto label_2c0fa8;
        case 0x2c0facu: goto label_2c0fac;
        case 0x2c0fb0u: goto label_2c0fb0;
        case 0x2c0fb4u: goto label_2c0fb4;
        case 0x2c0fb8u: goto label_2c0fb8;
        case 0x2c0fbcu: goto label_2c0fbc;
        case 0x2c0fc0u: goto label_2c0fc0;
        case 0x2c0fc4u: goto label_2c0fc4;
        case 0x2c0fc8u: goto label_2c0fc8;
        case 0x2c0fccu: goto label_2c0fcc;
        case 0x2c0fd0u: goto label_2c0fd0;
        case 0x2c0fd4u: goto label_2c0fd4;
        case 0x2c0fd8u: goto label_2c0fd8;
        case 0x2c0fdcu: goto label_2c0fdc;
        case 0x2c0fe0u: goto label_2c0fe0;
        case 0x2c0fe4u: goto label_2c0fe4;
        case 0x2c0fe8u: goto label_2c0fe8;
        case 0x2c0fecu: goto label_2c0fec;
        case 0x2c0ff0u: goto label_2c0ff0;
        case 0x2c0ff4u: goto label_2c0ff4;
        case 0x2c0ff8u: goto label_2c0ff8;
        case 0x2c0ffcu: goto label_2c0ffc;
        case 0x2c1000u: goto label_2c1000;
        case 0x2c1004u: goto label_2c1004;
        case 0x2c1008u: goto label_2c1008;
        case 0x2c100cu: goto label_2c100c;
        case 0x2c1010u: goto label_2c1010;
        case 0x2c1014u: goto label_2c1014;
        case 0x2c1018u: goto label_2c1018;
        case 0x2c101cu: goto label_2c101c;
        case 0x2c1020u: goto label_2c1020;
        case 0x2c1024u: goto label_2c1024;
        case 0x2c1028u: goto label_2c1028;
        case 0x2c102cu: goto label_2c102c;
        case 0x2c1030u: goto label_2c1030;
        case 0x2c1034u: goto label_2c1034;
        case 0x2c1038u: goto label_2c1038;
        case 0x2c103cu: goto label_2c103c;
        case 0x2c1040u: goto label_2c1040;
        case 0x2c1044u: goto label_2c1044;
        case 0x2c1048u: goto label_2c1048;
        case 0x2c104cu: goto label_2c104c;
        case 0x2c1050u: goto label_2c1050;
        case 0x2c1054u: goto label_2c1054;
        case 0x2c1058u: goto label_2c1058;
        case 0x2c105cu: goto label_2c105c;
        case 0x2c1060u: goto label_2c1060;
        case 0x2c1064u: goto label_2c1064;
        case 0x2c1068u: goto label_2c1068;
        case 0x2c106cu: goto label_2c106c;
        case 0x2c1070u: goto label_2c1070;
        case 0x2c1074u: goto label_2c1074;
        case 0x2c1078u: goto label_2c1078;
        case 0x2c107cu: goto label_2c107c;
        case 0x2c1080u: goto label_2c1080;
        case 0x2c1084u: goto label_2c1084;
        case 0x2c1088u: goto label_2c1088;
        case 0x2c108cu: goto label_2c108c;
        case 0x2c1090u: goto label_2c1090;
        case 0x2c1094u: goto label_2c1094;
        case 0x2c1098u: goto label_2c1098;
        case 0x2c109cu: goto label_2c109c;
        case 0x2c10a0u: goto label_2c10a0;
        case 0x2c10a4u: goto label_2c10a4;
        case 0x2c10a8u: goto label_2c10a8;
        case 0x2c10acu: goto label_2c10ac;
        case 0x2c10b0u: goto label_2c10b0;
        case 0x2c10b4u: goto label_2c10b4;
        case 0x2c10b8u: goto label_2c10b8;
        case 0x2c10bcu: goto label_2c10bc;
        case 0x2c10c0u: goto label_2c10c0;
        case 0x2c10c4u: goto label_2c10c4;
        case 0x2c10c8u: goto label_2c10c8;
        case 0x2c10ccu: goto label_2c10cc;
        case 0x2c10d0u: goto label_2c10d0;
        case 0x2c10d4u: goto label_2c10d4;
        case 0x2c10d8u: goto label_2c10d8;
        case 0x2c10dcu: goto label_2c10dc;
        case 0x2c10e0u: goto label_2c10e0;
        case 0x2c10e4u: goto label_2c10e4;
        case 0x2c10e8u: goto label_2c10e8;
        case 0x2c10ecu: goto label_2c10ec;
        case 0x2c10f0u: goto label_2c10f0;
        case 0x2c10f4u: goto label_2c10f4;
        case 0x2c10f8u: goto label_2c10f8;
        case 0x2c10fcu: goto label_2c10fc;
        case 0x2c1100u: goto label_2c1100;
        case 0x2c1104u: goto label_2c1104;
        case 0x2c1108u: goto label_2c1108;
        case 0x2c110cu: goto label_2c110c;
        case 0x2c1110u: goto label_2c1110;
        case 0x2c1114u: goto label_2c1114;
        case 0x2c1118u: goto label_2c1118;
        case 0x2c111cu: goto label_2c111c;
        case 0x2c1120u: goto label_2c1120;
        case 0x2c1124u: goto label_2c1124;
        case 0x2c1128u: goto label_2c1128;
        case 0x2c112cu: goto label_2c112c;
        case 0x2c1130u: goto label_2c1130;
        case 0x2c1134u: goto label_2c1134;
        case 0x2c1138u: goto label_2c1138;
        case 0x2c113cu: goto label_2c113c;
        case 0x2c1140u: goto label_2c1140;
        case 0x2c1144u: goto label_2c1144;
        case 0x2c1148u: goto label_2c1148;
        case 0x2c114cu: goto label_2c114c;
        case 0x2c1150u: goto label_2c1150;
        case 0x2c1154u: goto label_2c1154;
        case 0x2c1158u: goto label_2c1158;
        case 0x2c115cu: goto label_2c115c;
        case 0x2c1160u: goto label_2c1160;
        case 0x2c1164u: goto label_2c1164;
        case 0x2c1168u: goto label_2c1168;
        case 0x2c116cu: goto label_2c116c;
        case 0x2c1170u: goto label_2c1170;
        case 0x2c1174u: goto label_2c1174;
        case 0x2c1178u: goto label_2c1178;
        case 0x2c117cu: goto label_2c117c;
        case 0x2c1180u: goto label_2c1180;
        case 0x2c1184u: goto label_2c1184;
        case 0x2c1188u: goto label_2c1188;
        case 0x2c118cu: goto label_2c118c;
        case 0x2c1190u: goto label_2c1190;
        case 0x2c1194u: goto label_2c1194;
        case 0x2c1198u: goto label_2c1198;
        case 0x2c119cu: goto label_2c119c;
        case 0x2c11a0u: goto label_2c11a0;
        case 0x2c11a4u: goto label_2c11a4;
        case 0x2c11a8u: goto label_2c11a8;
        case 0x2c11acu: goto label_2c11ac;
        case 0x2c11b0u: goto label_2c11b0;
        case 0x2c11b4u: goto label_2c11b4;
        case 0x2c11b8u: goto label_2c11b8;
        case 0x2c11bcu: goto label_2c11bc;
        case 0x2c11c0u: goto label_2c11c0;
        case 0x2c11c4u: goto label_2c11c4;
        case 0x2c11c8u: goto label_2c11c8;
        case 0x2c11ccu: goto label_2c11cc;
        case 0x2c11d0u: goto label_2c11d0;
        case 0x2c11d4u: goto label_2c11d4;
        case 0x2c11d8u: goto label_2c11d8;
        case 0x2c11dcu: goto label_2c11dc;
        case 0x2c11e0u: goto label_2c11e0;
        case 0x2c11e4u: goto label_2c11e4;
        case 0x2c11e8u: goto label_2c11e8;
        case 0x2c11ecu: goto label_2c11ec;
        case 0x2c11f0u: goto label_2c11f0;
        case 0x2c11f4u: goto label_2c11f4;
        case 0x2c11f8u: goto label_2c11f8;
        case 0x2c11fcu: goto label_2c11fc;
        case 0x2c1200u: goto label_2c1200;
        case 0x2c1204u: goto label_2c1204;
        case 0x2c1208u: goto label_2c1208;
        case 0x2c120cu: goto label_2c120c;
        case 0x2c1210u: goto label_2c1210;
        case 0x2c1214u: goto label_2c1214;
        case 0x2c1218u: goto label_2c1218;
        case 0x2c121cu: goto label_2c121c;
        case 0x2c1220u: goto label_2c1220;
        case 0x2c1224u: goto label_2c1224;
        case 0x2c1228u: goto label_2c1228;
        case 0x2c122cu: goto label_2c122c;
        case 0x2c1230u: goto label_2c1230;
        case 0x2c1234u: goto label_2c1234;
        case 0x2c1238u: goto label_2c1238;
        case 0x2c123cu: goto label_2c123c;
        case 0x2c1240u: goto label_2c1240;
        case 0x2c1244u: goto label_2c1244;
        case 0x2c1248u: goto label_2c1248;
        case 0x2c124cu: goto label_2c124c;
        case 0x2c1250u: goto label_2c1250;
        case 0x2c1254u: goto label_2c1254;
        case 0x2c1258u: goto label_2c1258;
        case 0x2c125cu: goto label_2c125c;
        case 0x2c1260u: goto label_2c1260;
        case 0x2c1264u: goto label_2c1264;
        case 0x2c1268u: goto label_2c1268;
        case 0x2c126cu: goto label_2c126c;
        case 0x2c1270u: goto label_2c1270;
        case 0x2c1274u: goto label_2c1274;
        case 0x2c1278u: goto label_2c1278;
        case 0x2c127cu: goto label_2c127c;
        case 0x2c1280u: goto label_2c1280;
        case 0x2c1284u: goto label_2c1284;
        case 0x2c1288u: goto label_2c1288;
        case 0x2c128cu: goto label_2c128c;
        case 0x2c1290u: goto label_2c1290;
        case 0x2c1294u: goto label_2c1294;
        case 0x2c1298u: goto label_2c1298;
        case 0x2c129cu: goto label_2c129c;
        case 0x2c12a0u: goto label_2c12a0;
        case 0x2c12a4u: goto label_2c12a4;
        case 0x2c12a8u: goto label_2c12a8;
        case 0x2c12acu: goto label_2c12ac;
        case 0x2c12b0u: goto label_2c12b0;
        case 0x2c12b4u: goto label_2c12b4;
        case 0x2c12b8u: goto label_2c12b8;
        case 0x2c12bcu: goto label_2c12bc;
        case 0x2c12c0u: goto label_2c12c0;
        case 0x2c12c4u: goto label_2c12c4;
        case 0x2c12c8u: goto label_2c12c8;
        case 0x2c12ccu: goto label_2c12cc;
        case 0x2c12d0u: goto label_2c12d0;
        case 0x2c12d4u: goto label_2c12d4;
        case 0x2c12d8u: goto label_2c12d8;
        case 0x2c12dcu: goto label_2c12dc;
        case 0x2c12e0u: goto label_2c12e0;
        case 0x2c12e4u: goto label_2c12e4;
        case 0x2c12e8u: goto label_2c12e8;
        case 0x2c12ecu: goto label_2c12ec;
        case 0x2c12f0u: goto label_2c12f0;
        case 0x2c12f4u: goto label_2c12f4;
        case 0x2c12f8u: goto label_2c12f8;
        case 0x2c12fcu: goto label_2c12fc;
        case 0x2c1300u: goto label_2c1300;
        case 0x2c1304u: goto label_2c1304;
        case 0x2c1308u: goto label_2c1308;
        case 0x2c130cu: goto label_2c130c;
        case 0x2c1310u: goto label_2c1310;
        case 0x2c1314u: goto label_2c1314;
        case 0x2c1318u: goto label_2c1318;
        case 0x2c131cu: goto label_2c131c;
        case 0x2c1320u: goto label_2c1320;
        case 0x2c1324u: goto label_2c1324;
        case 0x2c1328u: goto label_2c1328;
        case 0x2c132cu: goto label_2c132c;
        case 0x2c1330u: goto label_2c1330;
        case 0x2c1334u: goto label_2c1334;
        case 0x2c1338u: goto label_2c1338;
        case 0x2c133cu: goto label_2c133c;
        case 0x2c1340u: goto label_2c1340;
        case 0x2c1344u: goto label_2c1344;
        case 0x2c1348u: goto label_2c1348;
        case 0x2c134cu: goto label_2c134c;
        case 0x2c1350u: goto label_2c1350;
        case 0x2c1354u: goto label_2c1354;
        case 0x2c1358u: goto label_2c1358;
        case 0x2c135cu: goto label_2c135c;
        case 0x2c1360u: goto label_2c1360;
        case 0x2c1364u: goto label_2c1364;
        case 0x2c1368u: goto label_2c1368;
        case 0x2c136cu: goto label_2c136c;
        case 0x2c1370u: goto label_2c1370;
        case 0x2c1374u: goto label_2c1374;
        case 0x2c1378u: goto label_2c1378;
        case 0x2c137cu: goto label_2c137c;
        case 0x2c1380u: goto label_2c1380;
        case 0x2c1384u: goto label_2c1384;
        case 0x2c1388u: goto label_2c1388;
        case 0x2c138cu: goto label_2c138c;
        case 0x2c1390u: goto label_2c1390;
        case 0x2c1394u: goto label_2c1394;
        case 0x2c1398u: goto label_2c1398;
        case 0x2c139cu: goto label_2c139c;
        case 0x2c13a0u: goto label_2c13a0;
        case 0x2c13a4u: goto label_2c13a4;
        case 0x2c13a8u: goto label_2c13a8;
        case 0x2c13acu: goto label_2c13ac;
        case 0x2c13b0u: goto label_2c13b0;
        case 0x2c13b4u: goto label_2c13b4;
        case 0x2c13b8u: goto label_2c13b8;
        case 0x2c13bcu: goto label_2c13bc;
        case 0x2c13c0u: goto label_2c13c0;
        case 0x2c13c4u: goto label_2c13c4;
        case 0x2c13c8u: goto label_2c13c8;
        case 0x2c13ccu: goto label_2c13cc;
        case 0x2c13d0u: goto label_2c13d0;
        case 0x2c13d4u: goto label_2c13d4;
        case 0x2c13d8u: goto label_2c13d8;
        case 0x2c13dcu: goto label_2c13dc;
        case 0x2c13e0u: goto label_2c13e0;
        case 0x2c13e4u: goto label_2c13e4;
        case 0x2c13e8u: goto label_2c13e8;
        case 0x2c13ecu: goto label_2c13ec;
        case 0x2c13f0u: goto label_2c13f0;
        case 0x2c13f4u: goto label_2c13f4;
        case 0x2c13f8u: goto label_2c13f8;
        case 0x2c13fcu: goto label_2c13fc;
        case 0x2c1400u: goto label_2c1400;
        case 0x2c1404u: goto label_2c1404;
        case 0x2c1408u: goto label_2c1408;
        case 0x2c140cu: goto label_2c140c;
        case 0x2c1410u: goto label_2c1410;
        case 0x2c1414u: goto label_2c1414;
        case 0x2c1418u: goto label_2c1418;
        case 0x2c141cu: goto label_2c141c;
        case 0x2c1420u: goto label_2c1420;
        case 0x2c1424u: goto label_2c1424;
        case 0x2c1428u: goto label_2c1428;
        case 0x2c142cu: goto label_2c142c;
        case 0x2c1430u: goto label_2c1430;
        case 0x2c1434u: goto label_2c1434;
        case 0x2c1438u: goto label_2c1438;
        case 0x2c143cu: goto label_2c143c;
        case 0x2c1440u: goto label_2c1440;
        case 0x2c1444u: goto label_2c1444;
        case 0x2c1448u: goto label_2c1448;
        case 0x2c144cu: goto label_2c144c;
        case 0x2c1450u: goto label_2c1450;
        case 0x2c1454u: goto label_2c1454;
        case 0x2c1458u: goto label_2c1458;
        case 0x2c145cu: goto label_2c145c;
        case 0x2c1460u: goto label_2c1460;
        case 0x2c1464u: goto label_2c1464;
        case 0x2c1468u: goto label_2c1468;
        case 0x2c146cu: goto label_2c146c;
        case 0x2c1470u: goto label_2c1470;
        case 0x2c1474u: goto label_2c1474;
        case 0x2c1478u: goto label_2c1478;
        case 0x2c147cu: goto label_2c147c;
        case 0x2c1480u: goto label_2c1480;
        case 0x2c1484u: goto label_2c1484;
        case 0x2c1488u: goto label_2c1488;
        case 0x2c148cu: goto label_2c148c;
        case 0x2c1490u: goto label_2c1490;
        case 0x2c1494u: goto label_2c1494;
        case 0x2c1498u: goto label_2c1498;
        case 0x2c149cu: goto label_2c149c;
        case 0x2c14a0u: goto label_2c14a0;
        case 0x2c14a4u: goto label_2c14a4;
        case 0x2c14a8u: goto label_2c14a8;
        case 0x2c14acu: goto label_2c14ac;
        case 0x2c14b0u: goto label_2c14b0;
        case 0x2c14b4u: goto label_2c14b4;
        case 0x2c14b8u: goto label_2c14b8;
        case 0x2c14bcu: goto label_2c14bc;
        case 0x2c14c0u: goto label_2c14c0;
        case 0x2c14c4u: goto label_2c14c4;
        case 0x2c14c8u: goto label_2c14c8;
        case 0x2c14ccu: goto label_2c14cc;
        case 0x2c14d0u: goto label_2c14d0;
        case 0x2c14d4u: goto label_2c14d4;
        case 0x2c14d8u: goto label_2c14d8;
        case 0x2c14dcu: goto label_2c14dc;
        case 0x2c14e0u: goto label_2c14e0;
        case 0x2c14e4u: goto label_2c14e4;
        case 0x2c14e8u: goto label_2c14e8;
        case 0x2c14ecu: goto label_2c14ec;
        case 0x2c14f0u: goto label_2c14f0;
        case 0x2c14f4u: goto label_2c14f4;
        case 0x2c14f8u: goto label_2c14f8;
        case 0x2c14fcu: goto label_2c14fc;
        case 0x2c1500u: goto label_2c1500;
        case 0x2c1504u: goto label_2c1504;
        case 0x2c1508u: goto label_2c1508;
        case 0x2c150cu: goto label_2c150c;
        case 0x2c1510u: goto label_2c1510;
        case 0x2c1514u: goto label_2c1514;
        case 0x2c1518u: goto label_2c1518;
        case 0x2c151cu: goto label_2c151c;
        case 0x2c1520u: goto label_2c1520;
        case 0x2c1524u: goto label_2c1524;
        case 0x2c1528u: goto label_2c1528;
        case 0x2c152cu: goto label_2c152c;
        case 0x2c1530u: goto label_2c1530;
        case 0x2c1534u: goto label_2c1534;
        case 0x2c1538u: goto label_2c1538;
        case 0x2c153cu: goto label_2c153c;
        case 0x2c1540u: goto label_2c1540;
        case 0x2c1544u: goto label_2c1544;
        case 0x2c1548u: goto label_2c1548;
        case 0x2c154cu: goto label_2c154c;
        default: return;
    }

label_2c0d80:
    // 0x2c0d80: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c0d80u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c0d84:
    // 0x2c0d84: 0x1f98e47  .word       0x01F98E47                   # srav        $s1, $t9, $t7 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c0d84u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 25), GPR_U32(ctx, 15) & 0x1F));
label_2c0d88:
    // 0x2c0d88: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c0d88u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c0d8c:
    // 0x2c0d8c: 0x1faae87  .word       0x01FAAE87                   # srav        $s5, $k0, $t7 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c0d8cu;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 26), GPR_U32(ctx, 15) & 0x1F));
label_2c0d90:
    // 0x2c0d90: 0x80070330  lb          $a3, 0x330($zero)
    ctx->pc = 0x2c0d90u;
    SET_GPR_S32(ctx, 7, (int8_t)FAST_READ8(0x330u));
label_2c0d94:
    // 0x2c0d94: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0d94u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0d98:
    // 0x2c0d98: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c0d98u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c0d9c:
    // 0x2c0d9c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0d9cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0da0:
    // 0x2c0da0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c0da0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c0da4:
    // 0x2c0da4: 0x1f9c9fd  .word       0x01F9C9FD                   # INVALID     $t7, $t9, -0x3603 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c0da4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2C0DA4 raw=0x01F9C9FD");
 /* MITIGATED */
label_2c0da8:
    // 0x2c0da8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c0da8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c0dac:
    // 0x2c0dac: 0x1fad1fd  .word       0x01FAD1FD                   # INVALID     $t7, $k0, -0x2E03 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c0dacu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2C0DAC raw=0x01FAD1FD");
 /* MITIGATED */
label_2c0db0:
    // 0x2c0db0: 0x500c0004  beql        $zero, $t4, . + 4 + (0x4 << 2)
label_2c0db4:
    if (ctx->pc == 0x2C0DB4u) {
        ctx->pc = 0x2C0DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0DB0u;
        // 0x2c0db4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0DB8u;
        goto label_2c0db8;
    }
    ctx->pc = 0x2C0DB0u;
    {
        const bool branch_taken_0x2c0db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 12));
        if (branch_taken_0x2c0db0) {
            ctx->pc = 0x2C0DB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C0DB0u;
            // 0x2c0db4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C0DC4u;
            goto label_2c0dc4;
        }
    }
    ctx->pc = 0x2C0DB8u;
label_2c0db8:
    // 0x2c0db8: 0x120c6001  beq         $s0, $t4, . + 4 + (0x6001 << 2)
label_2c0dbc:
    if (ctx->pc == 0x2C0DBCu) {
        ctx->pc = 0x2C0DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0DB8u;
        // 0x2c0dbc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0DC0u;
        goto label_2c0dc0;
    }
    ctx->pc = 0x2C0DB8u;
    {
        const bool branch_taken_0x2c0db8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 12));
        ctx->pc = 0x2C0DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0DB8u;
        // 0x2c0dbc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0db8) {
            ctx->pc = 0x2D8DC0u;
            return;
        }
    }
    ctx->pc = 0x2C0DC0u;
label_2c0dc0:
    // 0x2c0dc0: 0x81f9cb3d  lb          $t9, -0x34C3($t7)
    ctx->pc = 0x2c0dc0u;
    SET_GPR_S32(ctx, 25, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294953789)));
label_2c0dc4:
    // 0x2c0dc4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0dc4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0dc8:
    // 0x2c0dc8: 0x400007fc  .word       0x400007FC                   # mfc0        $zero, Index # 000007FC <InstrIdType: R5900_COP0>
    ctx->pc = 0x2c0dc8u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2c0dcc:
    // 0x2c0dcc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0dccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0dd0:
    // 0x2c0dd0: 0x81fad33d  lb          $k0, -0x2CC3($t7)
    ctx->pc = 0x2c0dd0u;
    SET_GPR_S32(ctx, 26, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294955837)));
label_2c0dd4:
    // 0x2c0dd4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0dd4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0dd8:
    // 0x2c0dd8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c0dd8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c0ddc:
    // 0x2c0ddc: 0x1d9d6e8  .word       0x01D9D6E8                   # mfsa        $k0 # 01D906C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c0ddcu;
    SET_GPR_U32(ctx, 26, ctx->sa);
label_2c0de0:
    // 0x2c0de0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c0de0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c0de4:
    // 0x2c0de4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0de4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0de8:
    // 0x2c0de8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c0de8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c0dec:
    // 0x2c0dec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0decu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0df0:
    // 0x2c0df0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c0df0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c0df4:
    // 0x2c0df4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0df4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0df8:
    // 0x2c0df8: 0x801bcbbc  lb          $k1, -0x3444($zero)
    ctx->pc = 0x2c0df8u;
    SET_GPR_S32(ctx, 27, (int8_t)runtime->Load8(rdram, ctx, 0xFFFFCBBCu));
label_2c0dfc:
    // 0x2c0dfc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0dfcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0e00:
    // 0x2c0e00: 0x800003bf  lb          $zero, 0x3BF($zero)
    ctx->pc = 0x2c0e00u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x3BFu));
label_2c0e04:
    // 0x2c0e04: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0e04u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0e08:
    // 0x2c0e08: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c0e08u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c0e0c:
    // 0x2c0e0c: 0x1000760  .word       0x01000760                   # add         $zero, $t0, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c0e0cu;
    {     int32_t rs_val = GPR_S32(ctx, 8);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_2c0e10:
    // 0x2c0e10: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c0e10u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c0e14:
    // 0x2c0e14: 0x1f1ae6c  .word       0x01F1AE6C                   # dadd        $s5, $t7, $s1 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c0e14u;
    { int64_t a = (int64_t)GPR_S64(ctx, 15); int64_t b = (int64_t)GPR_S64(ctx, 17); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 21, r); }
label_2c0e18:
    // 0x2c0e18: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c0e18u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c0e1c:
    // 0x2c0e1c: 0x1f2b6ac  .word       0x01F2B6AC                   # dadd        $s6, $t7, $s2 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c0e1cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 15); int64_t b = (int64_t)GPR_S64(ctx, 18); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 22, r); }
label_2c0e20:
    // 0x2c0e20: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c0e20u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c0e24:
    // 0x2c0e24: 0x1f3beec  .word       0x01F3BEEC                   # dadd        $s7, $t7, $s3 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c0e24u;
    { int64_t a = (int64_t)GPR_S64(ctx, 15); int64_t b = (int64_t)GPR_S64(ctx, 19); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 23, r); }
label_2c0e28:
    // 0x2c0e28: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c0e28u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c0e2c:
    // 0x2c0e2c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0e2cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0e30:
    // 0x2c0e30: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c0e30u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c0e34:
    // 0x2c0e34: 0x1fdce58  .word       0x01FDCE58                   # mult        $t9, $t7, $sp # 00000640 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c0e34u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 29); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 25, (int32_t)result); }
label_2c0e38:
    // 0x2c0e38: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c0e38u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c0e3c:
    // 0x2c0e3c: 0x1fdd698  .word       0x01FDD698                   # mult        $k0, $t7, $sp # 00000680 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c0e3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 29); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 26, (int32_t)result); }
label_2c0e40:
    // 0x2c0e40: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c0e40u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c0e44:
    // 0x2c0e44: 0x1fdded8  .word       0x01FDDED8                   # mult        $k1, $t7, $sp # 000006C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c0e44u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 29); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 27, (int32_t)result); }
label_2c0e48:
    // 0x2c0e48: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c0e48u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c0e4c:
    // 0x2c0e4c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0e4cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0e50:
    // 0x2c0e50: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c0e50u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c0e54:
    // 0x2c0e54: 0x1f1ce68  .word       0x01F1CE68                   # mfsa        $t9 # 01F10640 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c0e54u;
    SET_GPR_U32(ctx, 25, ctx->sa);
label_2c0e58:
    // 0x2c0e58: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c0e58u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c0e5c:
    // 0x2c0e5c: 0x1f2d6a8  .word       0x01F2D6A8                   # mfsa        $k0 # 01F20680 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c0e5cu;
    SET_GPR_U32(ctx, 26, ctx->sa);
label_2c0e60:
    // 0x2c0e60: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c0e60u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c0e64:
    // 0x2c0e64: 0x1f3dee8  .word       0x01F3DEE8                   # mfsa        $k1 # 01F306C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c0e64u;
    SET_GPR_U32(ctx, 27, ctx->sa);
label_2c0e68:
    // 0x2c0e68: 0x48000800  .word       0x48000800                   # INVALID     $zero, $zero, 0x800 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2c0e68u;
//     throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x2C0E68 raw=0x48000800");
 /* MITIGATED */
label_2c0e6c:
    // 0x2c0e6c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0e6cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0e70:
    // 0x2c0e70: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c0e70u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c0e74:
    // 0x2c0e74: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0e74u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0e78:
    // 0x2c0e78: 0x1f54000  .word       0x01F54000                   # sll         $t0, $s5, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c0e78u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 21), 0));
label_2c0e7c:
    // 0x2c0e7c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0e7cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0e80:
    // 0x2c0e80: 0x1f1000a  movz        $zero, $t7, $s1
    ctx->pc = 0x2c0e80u;
    if (GPR_U64(ctx, 17) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 15));
label_2c0e84:
    // 0x2c0e84: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0e84u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0e88:
    // 0x2c0e88: 0x1f2000b  movn        $zero, $t7, $s2
    ctx->pc = 0x2c0e88u;
    if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 15));
label_2c0e8c:
    // 0x2c0e8c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0e8cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0e90:
    // 0x2c0e90: 0x1f3000c  .word       0x01F3000C                   # syscall     0 # 01F30000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c0e90u;
    ctx->pc = 0x2C0E94u;
runtime->handleSyscall(rdram, ctx, 0x7CC00u);
label_2c0e94:
    // 0x2c0e94: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0e94u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0e98:
    // 0x2c0e98: 0x1f4000d  break       500
    ctx->pc = 0x2c0e98u;
    runtime->handleBreak(rdram, ctx);
label_2c0e9c:
    // 0x2c0e9c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0e9cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0ea0:
    // 0x2c0ea0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c0ea0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c0ea4:
    // 0x2c0ea4: 0x1f589bc  .word       0x01F589BC                   # dsll32      $s1, $s5, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c0ea4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 21) << (32 + 6));
label_2c0ea8:
    // 0x2c0ea8: 0x10071001  beq         $zero, $a3, . + 4 + (0x1001 << 2)
label_2c0eac:
    if (ctx->pc == 0x2C0EACu) {
        ctx->pc = 0x2C0EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0EA8u;
        // 0x2c0eac: 0x1f590bd  .word       0x01F590BD                   # INVALID     $t7, $s5, -0x6F43 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
//         throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2C0EAC raw=0x01F590BD");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0EB0u;
        goto label_2c0eb0;
    }
    ctx->pc = 0x2C0EA8u;
    {
        const bool branch_taken_0x2c0ea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2C0EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0EA8u;
        // 0x2c0eac: 0x1f590bd  .word       0x01F590BD                   # INVALID     $t7, $s5, -0x6F43 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
//         throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2C0EAC raw=0x01F590BD");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0ea8) {
            ctx->pc = 0x2C4EB0u;
            { ctx->pc = 0x2c4eb0; return; }
        }
    }
    ctx->pc = 0x2C0EB0u;
label_2c0eb0:
    // 0x2c0eb0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c0eb0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c0eb4:
    // 0x2c0eb4: 0x1f598be  .word       0x01F598BE                   # dsrl32      $s3, $s5, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c0eb4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) >> (32 + 2));
label_2c0eb8:
    // 0x2c0eb8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c0eb8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c0ebc:
    // 0x2c0ebc: 0x1f5a70b  .word       0x01F5A70B                   # movn        $s4, $t7, $s5 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c0ebcu;
    if (GPR_U64(ctx, 21) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 15));
label_2c0ec0:
    // 0x2c0ec0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c0ec0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c0ec4:
    // 0x2c0ec4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0ec4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0ec8:
    // 0x2c0ec8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c0ec8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c0ecc:
    // 0x2c0ecc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0eccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0ed0:
    // 0x2c0ed0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c0ed0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c0ed4:
    // 0x2c0ed4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0ed4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0ed8:
    // 0x2c0ed8: 0x81fc03bc  lb          $gp, 0x3BC($t7)
    ctx->pc = 0x2c0ed8u;
    SET_GPR_S32(ctx, 28, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 956)));
label_2c0edc:
    // 0x2c0edc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0edcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0ee0:
    // 0x2c0ee0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c0ee0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c0ee4:
    // 0x2c0ee4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0ee4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0ee8:
    // 0x2c0ee8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c0ee8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c0eec:
    // 0x2c0eec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0eecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0ef0:
    // 0x2c0ef0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c0ef0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c0ef4:
    // 0x2c0ef4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0ef4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0ef8:
    // 0x2c0ef8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c0ef8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c0efc:
    // 0x2c0efc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0efcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0f00:
    // 0x2c0f00: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c0f00u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c0f04:
    // 0x2c0f04: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0f04u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0f08:
    // 0x2c0f08: 0x1fb4001  .word       0x01FB4001                   # INVALID     $t7, $k1, 0x4001 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c0f08u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2C0F08 raw=0x01FB4001");
 /* MITIGATED */
label_2c0f0c:
    // 0x2c0f0c: 0x3e01be  .word       0x003E01BE                   # dsrl32      $zero, $fp, 6 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c0f0cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 30) >> (32 + 6));
label_2c0f10:
    // 0x2c0f10: 0x8056033d  lb          $s6, 0x33D($v0)
    ctx->pc = 0x2c0f10u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 829)));
label_2c0f14:
    // 0x2c0f14: 0x20f6a1  .word       0x0020F6A1                   # addu        $fp, $at, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c0f14u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 0)));
label_2c0f18:
    // 0x2c0f18: 0x1964002  .word       0x01964002                   # srl         $t0, $s6, 0 # 01800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c0f18u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 22), 0));
label_2c0f1c:
    // 0x2c0f1c: 0x1c0e65c  .word       0x01C0E65C                   # dmult       $t6, $zero # 0000E640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c0f1cu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2C0F1C raw=0x01C0E65C");
 /* MITIGATED */
label_2c0f20:
    // 0x2c0f20: 0x1f54003  .word       0x01F54003                   # sra         $t0, $s5, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c0f20u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 21), 0));
label_2c0f24:
    // 0x2c0f24: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0f24u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0f28:
    // 0x2c0f28: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c0f28u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c0f2c:
    // 0x2c0f2c: 0x1fbd97c  .word       0x01FBD97C                   # dsll32      $k1, $k1, 5 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c0f2cu;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 27) << (32 + 5));
label_2c0f30:
    // 0x2c0f30: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c0f30u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c0f34:
    // 0x2c0f34: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0f34u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0f38:
    // 0x2c0f38: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c0f38u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c0f3c:
    // 0x2c0f3c: 0x20d69f  .word       0x0020D69F                   # ddivu       $k0, $at, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c0f3cu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2C0F3C raw=0x0020D69F");
 /* MITIGATED */
label_2c0f40:
    // 0x2c0f40: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c0f40u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c0f44:
    // 0x2c0f44: 0x1c0b59c  .word       0x01C0B59C                   # dmult       $t6, $zero # 0000B580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c0f44u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2C0F44 raw=0x01C0B59C");
 /* MITIGATED */
label_2c0f48:
    // 0x2c0f48: 0x3e7d801  .word       0x03E7D801                   # INVALID     $ra, $a3, -0x27FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c0f48u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2C0F48 raw=0x03E7D801");
 /* MITIGATED */
label_2c0f4c:
    // 0x2c0f4c: 0x1f589bc  .word       0x01F589BC                   # dsll32      $s1, $s5, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c0f4cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 21) << (32 + 6));
label_2c0f50:
    // 0x2c0f50: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c0f50u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c0f54:
    // 0x2c0f54: 0x1f590bd  .word       0x01F590BD                   # INVALID     $t7, $s5, -0x6F43 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c0f54u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2C0F54 raw=0x01F590BD");
 /* MITIGATED */
label_2c0f58:
    // 0x2c0f58: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c0f58u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c0f5c:
    // 0x2c0f5c: 0x20d650  .word       0x0020D650                   # mfhi        $k0 # 00200640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c0f5cu;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_2c0f60:
    // 0x2c0f60: 0x3e7b000  .word       0x03E7B000                   # sll         $s6, $a3, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c0f60u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 7), 0));
label_2c0f64:
    // 0x2c0f64: 0x1f598be  .word       0x01F598BE                   # dsrl32      $s3, $s5, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c0f64u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) >> (32 + 2));
label_2c0f68:
    // 0x2c0f68: 0x10073803  beq         $zero, $a3, . + 4 + (0x3803 << 2)
label_2c0f6c:
    if (ctx->pc == 0x2C0F6Cu) {
        ctx->pc = 0x2C0F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0F68u;
        // 0x2c0f6c: 0x1f5a70b  .word       0x01F5A70B                   # movn        $s4, $t7, $s5 # 00000700 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        if (GPR_U64(ctx, 21) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0F70u;
        goto label_2c0f70;
    }
    ctx->pc = 0x2C0F68u;
    {
        const bool branch_taken_0x2c0f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2C0F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0F68u;
        // 0x2c0f6c: 0x1f5a70b  .word       0x01F5A70B                   # movn        $s4, $t7, $s5 # 00000700 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        if (GPR_U64(ctx, 21) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0f68) {
            ctx->pc = 0x2CEF78u;
            return;
        }
    }
    ctx->pc = 0x2C0F70u;
label_2c0f70:
    // 0x2c0f70: 0x10084003  beq         $zero, $t0, . + 4 + (0x4003 << 2)
label_2c0f74:
    if (ctx->pc == 0x2C0F74u) {
        ctx->pc = 0x2C0F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0F70u;
        // 0x2c0f74: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0F78u;
        goto label_2c0f78;
    }
    ctx->pc = 0x2C0F70u;
    {
        const bool branch_taken_0x2c0f70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2C0F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0F70u;
        // 0x2c0f74: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0f70) {
            ctx->pc = 0x2D0F80u;
            return;
        }
    }
    ctx->pc = 0x2C0F78u;
label_2c0f78:
    // 0x2c0f78: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c0f78u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c0f7c:
    // 0x2c0f7c: 0x1fac97d  .word       0x01FAC97D                   # INVALID     $t7, $k0, -0x3683 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c0f7cu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2C0F7C raw=0x01FAC97D");
 /* MITIGATED */
label_2c0f80:
    // 0x2c0f80: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c0f80u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c0f84:
    // 0x2c0f84: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0f84u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0f88:
    // 0x2c0f88: 0x800a57f2  lb          $t2, 0x57F2($zero)
    ctx->pc = 0x2c0f88u;
    SET_GPR_S32(ctx, 10, (int8_t)FAST_READ8(0x57F2u));
label_2c0f8c:
    // 0x2c0f8c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0f8cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0f90:
    // 0x2c0f90: 0x81fc03bc  lb          $gp, 0x3BC($t7)
    ctx->pc = 0x2c0f90u;
    SET_GPR_S32(ctx, 28, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 956)));
label_2c0f94:
    // 0x2c0f94: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0f94u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0f98:
    // 0x2c0f98: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c0f98u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c0f9c:
    // 0x2c0f9c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0f9cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0fa0:
    // 0x2c0fa0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c0fa0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c0fa4:
    // 0x2c0fa4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0fa4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0fa8:
    // 0x2c0fa8: 0x3e7d7ff  .word       0x03E7D7FF                   # dsra32      $k0, $a3, 31 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c0fa8u;
    SET_GPR_S64(ctx, 26, GPR_S64(ctx, 7) >> (32 + 31));
label_2c0fac:
    // 0x2c0fac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0facu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0fb0:
    // 0x2c0fb0: 0x520a07ea  beql        $s0, $t2, . + 4 + (0x7EA << 2)
label_2c0fb4:
    if (ctx->pc == 0x2C0FB4u) {
        ctx->pc = 0x2C0FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0FB0u;
        // 0x2c0fb4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0FB8u;
        goto label_2c0fb8;
    }
    ctx->pc = 0x2C0FB0u;
    {
        const bool branch_taken_0x2c0fb0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        if (branch_taken_0x2c0fb0) {
            ctx->pc = 0x2C0FB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C0FB0u;
            // 0x2c0fb4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C2F5Cu;
            { ctx->pc = 0x2c2f5c; return; }
        }
    }
    ctx->pc = 0x2C0FB8u;
label_2c0fb8:
    // 0x2c0fb8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c0fb8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c0fbc:
    // 0x2c0fbc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0fbcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0fc0:
    // 0x2c0fc0: 0x48000800  .word       0x48000800                   # INVALID     $zero, $zero, 0x800 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2c0fc0u;
//     throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x2C0FC0 raw=0x48000800");
 /* MITIGATED */
label_2c0fc4:
    // 0x2c0fc4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0fc4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0fc8:
    // 0x2c0fc8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c0fc8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c0fcc:
    // 0x2c0fcc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0fccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0fd0:
    // 0x2c0fd0: 0x800206bc  lb          $v0, 0x6BC($zero)
    ctx->pc = 0x2c0fd0u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x6BCu));
label_2c0fd4:
    // 0x2c0fd4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0fd4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0fd8:
    // 0x2c0fd8: 0x10011001  beq         $zero, $at, . + 4 + (0x1001 << 2)
label_2c0fdc:
    if (ctx->pc == 0x2C0FDCu) {
        ctx->pc = 0x2C0FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0FD8u;
        // 0x2c0fdc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0FE0u;
        goto label_2c0fe0;
    }
    ctx->pc = 0x2C0FD8u;
    {
        const bool branch_taken_0x2c0fd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 1));
        ctx->pc = 0x2C0FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0FD8u;
        // 0x2c0fdc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0fd8) {
            ctx->pc = 0x2C4FE0u;
            { ctx->pc = 0x2c4fe0; return; }
        }
    }
    ctx->pc = 0x2C0FE0u;
label_2c0fe0:
    // 0x2c0fe0: 0x10030066  beq         $zero, $v1, . + 4 + (0x66 << 2)
label_2c0fe4:
    if (ctx->pc == 0x2C0FE4u) {
        ctx->pc = 0x2C0FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0FE0u;
        // 0x2c0fe4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0FE8u;
        goto label_2c0fe8;
    }
    ctx->pc = 0x2C0FE0u;
    {
        const bool branch_taken_0x2c0fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        ctx->pc = 0x2C0FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0FE0u;
        // 0x2c0fe4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0fe0) {
            ctx->pc = 0x2C117Cu;
            goto label_2c117c;
        }
    }
    ctx->pc = 0x2C0FE8u;
label_2c0fe8:
    // 0x2c0fe8: 0x1fa0005  .word       0x01FA0005                   # INVALID     $t7, $k0, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c0fe8u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2C0FE8 raw=0x01FA0005");
 /* MITIGATED */
label_2c0fec:
    // 0x2c0fec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0fecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0ff0:
    // 0x2c0ff0: 0x10021031  beq         $zero, $v0, . + 4 + (0x1031 << 2)
label_2c0ff4:
    if (ctx->pc == 0x2C0FF4u) {
        ctx->pc = 0x2C0FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0FF0u;
        // 0x2c0ff4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0FF8u;
        goto label_2c0ff8;
    }
    ctx->pc = 0x2C0FF0u;
    {
        const bool branch_taken_0x2c0ff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C0FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0FF0u;
        // 0x2c0ff4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0ff0) {
            ctx->pc = 0x2C50B8u;
            { ctx->pc = 0x2c50b8; return; }
        }
    }
    ctx->pc = 0x2C0FF8u;
label_2c0ff8:
    // 0x2c0ff8: 0x11eb07ff  beq         $t7, $t3, . + 4 + (0x7FF << 2)
label_2c0ffc:
    if (ctx->pc == 0x2C0FFCu) {
        ctx->pc = 0x2C0FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0FF8u;
        // 0x2c0ffc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1000u;
        goto label_2c1000;
    }
    ctx->pc = 0x2C0FF8u;
    {
        const bool branch_taken_0x2c0ff8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 11));
        ctx->pc = 0x2C0FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0FF8u;
        // 0x2c0ffc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0ff8) {
            ctx->pc = 0x2C2FF8u;
            { ctx->pc = 0x2c2ff8; return; }
        }
    }
    ctx->pc = 0x2C1000u;
label_2c1000:
    // 0x2c1000: 0x100b5801  beq         $zero, $t3, . + 4 + (0x5801 << 2)
label_2c1004:
    if (ctx->pc == 0x2C1004u) {
        ctx->pc = 0x2C1004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1000u;
        // 0x2c1004: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1008u;
        goto label_2c1008;
    }
    ctx->pc = 0x2C1000u;
    {
        const bool branch_taken_0x2c1000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2C1004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1000u;
        // 0x2c1004: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1000) {
            ctx->pc = 0x2D7008u;
            return;
        }
    }
    ctx->pc = 0x2C1008u;
label_2c1008:
    // 0x2c1008: 0x3e2d000  .word       0x03E2D000                   # sll         $k0, $v0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c1008u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
label_2c100c:
    // 0x2c100c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c100cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1010:
    // 0x2c1010: 0x3e2d001  .word       0x03E2D001                   # INVALID     $ra, $v0, -0x2FFF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c1010u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2C1010 raw=0x03E2D001");
 /* MITIGATED */
label_2c1014:
    // 0x2c1014: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1014u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1018:
    // 0x2c1018: 0xb0b1000  j           func_C2C4000
label_2c101c:
    if (ctx->pc == 0x2C101Cu) {
        ctx->pc = 0x2C101Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1018u;
        // 0x2c101c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1020u;
        goto label_2c1020;
    }
    ctx->pc = 0x2C1018u;
    ctx->pc = 0x2C101Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1018u;
    // 0x2c101c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xC2C4000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC2C4000u, 0x2C1018u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2C1020u;
label_2c1020:
    // 0x2c1020: 0xa800fff  j           func_A003FFC
label_2c1024:
    if (ctx->pc == 0x2C1024u) {
        ctx->pc = 0x2C1024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1020u;
        // 0x2c1024: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1028u;
        goto label_2c1028;
    }
    ctx->pc = 0x2C1020u;
    ctx->pc = 0x2C1024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1020u;
    // 0x2c1024: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xA003FFCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xA003FFCu, 0x2C1020u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2C1028u;
label_2c1028:
    // 0x2c1028: 0xb030fff  j           func_C0C3FFC
label_2c102c:
    if (ctx->pc == 0x2C102Cu) {
        ctx->pc = 0x2C102Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1028u;
        // 0x2c102c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1030u;
        goto label_2c1030;
    }
    ctx->pc = 0x2C1028u;
    ctx->pc = 0x2C102Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1028u;
    // 0x2c102c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xC0C3FFCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC0C3FFCu, 0x2C1028u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2C1030u;
label_2c1030:
    // 0x2c1030: 0x100f7012  beq         $zero, $t7, . + 4 + (0x7012 << 2)
label_2c1034:
    if (ctx->pc == 0x2C1034u) {
        ctx->pc = 0x2C1034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1030u;
        // 0x2c1034: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1038u;
        goto label_2c1038;
    }
    ctx->pc = 0x2C1030u;
    {
        const bool branch_taken_0x2c1030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 15));
        ctx->pc = 0x2C1034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1030u;
        // 0x2c1034: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1030) {
            ctx->pc = 0x2DD07Cu;
            return;
        }
    }
    ctx->pc = 0x2C1038u;
label_2c1038:
    // 0x2c1038: 0x1f67ff9  .word       0x01F67FF9                   # INVALID     $t7, $s6, 0x7FF9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c1038u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x2C1038 raw=0x01F67FF9");
 /* MITIGATED */
label_2c103c:
    // 0x2c103c: 0x1e0ffd8  .word       0x01E0FFD8                   # mult        $ra, $t7, $zero # 000007C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c103cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 31, (int32_t)result); }
label_2c1040:
    // 0x2c1040: 0x1f77ffc  .word       0x01F77FFC                   # dsll32      $t7, $s7, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c1040u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 23) << (32 + 31));
label_2c1044:
    // 0x2c1044: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1044u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1048:
    // 0x2c1048: 0x1f87fff  .word       0x01F87FFF                   # dsra32      $t7, $t8, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c1048u;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 24) >> (32 + 31));
label_2c104c:
    // 0x2c104c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c104cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1050:
    // 0x2c1050: 0x0  nop
    ctx->pc = 0x2c1050u;
    // NOP
label_2c1054:
    // 0x2c1054: 0x4a460650  vmaxx.z     $vf25, $vf0, $vf6x
    ctx->pc = 0x2c1054u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[25] = _mm_blendv_ps(ctx->vu0_vf[25], res, _mm_castsi128_ps(mask)); }
label_2c1058:
    // 0x2c1058: 0x1f57ff8  .word       0x01F57FF8                   # dsll        $t7, $s5, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c1058u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 21) << 31);
label_2c105c:
    // 0x2c105c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c105cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1060:
    // 0x2c1060: 0x1f37ffb  .word       0x01F37FFB                   # dsra        $t7, $s3, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c1060u;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 19) >> 31);
label_2c1064:
    // 0x2c1064: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1064u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1068:
    // 0x2c1068: 0x1f47ffe  .word       0x01F47FFE                   # dsrl32      $t7, $s4, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c1068u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 20) >> (32 + 31));
label_2c106c:
    // 0x2c106c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c106cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1070:
    // 0x2c1070: 0x1f07ff7  .word       0x01F07FF7                   # INVALID     $t7, $s0, 0x7FF7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c1070u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x2C1070 raw=0x01F07FF7");
 /* MITIGATED */
label_2c1074:
    // 0x2c1074: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1074u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1078:
    // 0x2c1078: 0x1f17ffa  .word       0x01F17FFA                   # dsrl        $t7, $s1, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c1078u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 17) >> 31);
label_2c107c:
    // 0x2c107c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c107cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1080:
    // 0x2c1080: 0x1f27ffd  .word       0x01F27FFD                   # INVALID     $t7, $s2, 0x7FFD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c1080u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2C1080 raw=0x01F27FFD");
 /* MITIGATED */
label_2c1084:
    // 0x2c1084: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1084u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1088:
    // 0x2c1088: 0x800206bc  lb          $v0, 0x6BC($zero)
    ctx->pc = 0x2c1088u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x6BCu));
label_2c108c:
    // 0x2c108c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c108cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1090:
    // 0x2c1090: 0x10081001  beq         $zero, $t0, . + 4 + (0x1001 << 2)
label_2c1094:
    if (ctx->pc == 0x2C1094u) {
        ctx->pc = 0x2C1094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1090u;
        // 0x2c1094: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1098u;
        goto label_2c1098;
    }
    ctx->pc = 0x2C1090u;
    {
        const bool branch_taken_0x2c1090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2C1094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1090u;
        // 0x2c1094: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1090) {
            ctx->pc = 0x2C5098u;
            { ctx->pc = 0x2c5098; return; }
        }
    }
    ctx->pc = 0x2C1098u;
label_2c1098:
    // 0x2c1098: 0x10091019  beq         $zero, $t1, . + 4 + (0x1019 << 2)
label_2c109c:
    if (ctx->pc == 0x2C109Cu) {
        ctx->pc = 0x2C109Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1098u;
        // 0x2c109c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C10A0u;
        goto label_2c10a0;
    }
    ctx->pc = 0x2C1098u;
    {
        const bool branch_taken_0x2c1098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 9));
        ctx->pc = 0x2C109Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1098u;
        // 0x2c109c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1098) {
            ctx->pc = 0x2C5100u;
            { ctx->pc = 0x2c5100; return; }
        }
    }
    ctx->pc = 0x2C10A0u;
label_2c10a0:
    // 0x2c10a0: 0x3e8a801  .word       0x03E8A801                   # INVALID     $ra, $t0, -0x57FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c10a0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2C10A0 raw=0x03E8A801");
 /* MITIGATED */
label_2c10a4:
    // 0x2c10a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c10a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c10a8:
    // 0x2c10a8: 0x3e89804  sllv        $s3, $t0, $ra
    ctx->pc = 0x2c10a8u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 31) & 0x1F));
label_2c10ac:
    // 0x2c10ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c10acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c10b0:
    // 0x2c10b0: 0x3e8a007  srav        $s4, $t0, $ra
    ctx->pc = 0x2c10b0u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 8), GPR_U32(ctx, 31) & 0x1F));
label_2c10b4:
    // 0x2c10b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c10b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c10b8:
    // 0x2c10b8: 0x3e8a80a  movz        $s5, $ra, $t0
    ctx->pc = 0x2c10b8u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 31));
label_2c10bc:
    // 0x2c10bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c10bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c10c0:
    // 0x2c10c0: 0x3e8b002  .word       0x03E8B002                   # srl         $s6, $t0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c10c0u;
    SET_GPR_S32(ctx, 22, (int32_t)SRL32(GPR_U32(ctx, 8), 0));
label_2c10c4:
    // 0x2c10c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c10c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c10c8:
    // 0x2c10c8: 0x3e8b805  .word       0x03E8B805                   # INVALID     $ra, $t0, -0x47FB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c10c8u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2C10C8 raw=0x03E8B805");
 /* MITIGATED */
label_2c10cc:
    // 0x2c10cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c10ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c10d0:
    // 0x2c10d0: 0x3e8c008  .word       0x03E8C008                   # jr          $ra # 0008C000 <InstrIdType: CPU_SPECIAL>
label_2c10d4:
    if (ctx->pc == 0x2C10D4u) {
        ctx->pc = 0x2C10D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C10D0u;
        // 0x2c10d4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C10D8u;
        goto label_2c10d8;
    }
    ctx->pc = 0x2C10D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C10D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C10D0u;
        // 0x2c10d4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C10D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C10D8u;
label_2c10d8:
    // 0x2c10d8: 0x3e8b00b  movn        $s6, $ra, $t0
    ctx->pc = 0x2c10d8u;
    if (GPR_U64(ctx, 8) != 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 31));
label_2c10dc:
    // 0x2c10dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c10dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c10e0:
    // 0x2c10e0: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c10e0u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_2c10e4:
    // 0x2c10e4: 0x81f182bc  lb          $s1, -0x7D44($t7)
    ctx->pc = 0x2c10e4u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294935228)));
label_2c10e8:
    // 0x2c10e8: 0x3eaaaaaa  .word       0x3EAAAAAA                   # lui         $t2, 0xAAAA # 02A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c10e8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)43690 << 16));
label_2c10ec:
    // 0x2c10ec: 0x81e09723  lb          $zero, -0x68DD($t7)
    ctx->pc = 0x2c10ecu;
    SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294940451)));
label_2c10f0:
    // 0x2c10f0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c10f0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c10f4:
    // 0x2c10f4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c10f4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c10f8:
    // 0x2c10f8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c10f8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c10fc:
    // 0x2c10fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c10fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1100:
    // 0x2c1100: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1100u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c1104:
    // 0x2c1104: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1104u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1108:
    // 0x2c1108: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1108u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c110c:
    // 0x2c110c: 0x1e0e71e  .word       0x01E0E71E                   # ddiv        $gp, $t7, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c110cu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x2C110C raw=0x01E0E71E");
 /* MITIGATED */
label_2c1110:
    // 0x2c1110: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1110u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c1114:
    // 0x2c1114: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1114u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1118:
    // 0x2c1118: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1118u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c111c:
    // 0x2c111c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c111cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1120:
    // 0x2c1120: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1120u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c1124:
    // 0x2c1124: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1124u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1128:
    // 0x2c1128: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1128u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c112c:
    // 0x2c112c: 0x1fc866c  .word       0x01FC866C                   # dadd        $s0, $t7, $gp # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c112cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 15); int64_t b = (int64_t)GPR_S64(ctx, 28); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 16, r); }
label_2c1130:
    // 0x2c1130: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1130u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c1134:
    // 0x2c1134: 0x1fc8eac  .word       0x01FC8EAC                   # dadd        $s1, $t7, $gp # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c1134u;
    { int64_t a = (int64_t)GPR_S64(ctx, 15); int64_t b = (int64_t)GPR_S64(ctx, 28); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 17, r); }
label_2c1138:
    // 0x2c1138: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1138u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c113c:
    // 0x2c113c: 0x1fc96ec  .word       0x01FC96EC                   # dadd        $s2, $t7, $gp # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c113cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 15); int64_t b = (int64_t)GPR_S64(ctx, 28); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, r); }
label_2c1140:
    // 0x2c1140: 0x3f808312  .word       0x3F808312                   # lui         $zero, 0x8312 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c1140u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)33554 << 16));
label_2c1144:
    // 0x2c1144: 0x81e0e1bf  lb          $zero, -0x1E41($t7)
    ctx->pc = 0x2c1144u;
    SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294959551)));
label_2c1148:
    // 0x2c1148: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1148u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c114c:
    // 0x2c114c: 0x1e0cda3  .word       0x01E0CDA3                   # subu        $t9, $t7, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c114cu;
    SET_GPR_S32(ctx, 25, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 0)));
label_2c1150:
    // 0x2c1150: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1150u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c1154:
    // 0x2c1154: 0x1e0e1bf  .word       0x01E0E1BF                   # dsra32      $gp, $zero, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c1154u;
    SET_GPR_S64(ctx, 28, GPR_S64(ctx, 0) >> (32 + 6));
label_2c1158:
    // 0x2c1158: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1158u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c115c:
    // 0x2c115c: 0x1e0d5e3  .word       0x01E0D5E3                   # subu        $k0, $t7, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c115cu;
    SET_GPR_S32(ctx, 26, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 0)));
label_2c1160:
    // 0x2c1160: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1160u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c1164:
    // 0x2c1164: 0x1e0e1bf  .word       0x01E0E1BF                   # dsra32      $gp, $zero, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c1164u;
    SET_GPR_S64(ctx, 28, GPR_S64(ctx, 0) >> (32 + 6));
label_2c1168:
    // 0x2c1168: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1168u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c116c:
    // 0x2c116c: 0x1e0de23  .word       0x01E0DE23                   # subu        $k1, $t7, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c116cu;
    SET_GPR_S32(ctx, 27, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 0)));
label_2c1170:
    // 0x2c1170: 0x437f0000  .word       0x437F0000                   # INVALID     $k1, $ra, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2c1170u;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0x1B at 0x2C1170 raw=0x437F0000");
 /* MITIGATED */
label_2c1174:
    // 0x2c1174: 0x800002ff  lb          $zero, 0x2FF($zero)
    ctx->pc = 0x2c1174u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x2FFu));
label_2c1178:
    // 0x2c1178: 0x3e8b000  .word       0x03E8B000                   # sll         $s6, $t0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c1178u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 8), 0));
label_2c117c:
    // 0x2c117c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c117cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1180:
    // 0x2c1180: 0x3e8b803  .word       0x03E8B803                   # sra         $s7, $t0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c1180u;
    SET_GPR_S32(ctx, 23, SRA32(GPR_S32(ctx, 8), 0));
label_2c1184:
    // 0x2c1184: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1184u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1188:
    // 0x2c1188: 0x3e8c006  srlv        $t8, $t0, $ra
    ctx->pc = 0x2c1188u;
    SET_GPR_S32(ctx, 24, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 31) & 0x1F));
label_2c118c:
    // 0x2c118c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c118cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1190:
    // 0x2c1190: 0x3e8b009  .word       0x03E8B009                   # jalr        $s6, $ra # 00080000 <InstrIdType: CPU_SPECIAL>
label_2c1194:
    if (ctx->pc == 0x2C1194u) {
        ctx->pc = 0x2C1194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1190u;
        // 0x2c1194: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1198u;
        goto label_2c1198;
    }
    ctx->pc = 0x2C1190u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        SET_GPR_U32(ctx, 22, 0x2C1198u);
        ctx->pc = 0x2C1194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1190u;
        // 0x2c1194: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C1190u, 0x2C1198u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C1198u;
label_2c1198:
    // 0x2c1198: 0x800040f0  lb          $zero, 0x40F0($zero)
    ctx->pc = 0x2c1198u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x40F0u));
label_2c119c:
    // 0x2c119c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c119cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c11a0:
    // 0x2c11a0: 0x420f06b7  .word       0x420F06B7                   # INVALID     $s0, $t7, 0x6B7 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2c11a0u;
//     throw std::runtime_error("Unhandled COP0 CO-OP: 0x37 at 0x2C11A0 raw=0x420F06B7");
 /* MITIGATED */
label_2c11a4:
    // 0x2c11a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c11a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c11a8:
    // 0x2c11a8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c11a8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c11ac:
    // 0x2c11ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c11acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c11b0:
    // 0x2c11b0: 0x500a0010  beql        $zero, $t2, . + 4 + (0x10 << 2)
label_2c11b4:
    if (ctx->pc == 0x2C11B4u) {
        ctx->pc = 0x2C11B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C11B0u;
        // 0x2c11b4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C11B8u;
        goto label_2c11b8;
    }
    ctx->pc = 0x2C11B0u;
    {
        const bool branch_taken_0x2c11b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 10));
        if (branch_taken_0x2c11b0) {
            ctx->pc = 0x2C11B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C11B0u;
            // 0x2c11b4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C11F4u;
            goto label_2c11f4;
        }
    }
    ctx->pc = 0x2C11B8u;
label_2c11b8:
    // 0x2c11b8: 0x1fa0005  .word       0x01FA0005                   # INVALID     $t7, $k0, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c11b8u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2C11B8 raw=0x01FA0005");
 /* MITIGATED */
label_2c11bc:
    // 0x2c11bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c11bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c11c0:
    // 0x2c11c0: 0x12015007  beq         $s0, $at, . + 4 + (0x5007 << 2)
label_2c11c4:
    if (ctx->pc == 0x2C11C4u) {
        ctx->pc = 0x2C11C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C11C0u;
        // 0x2c11c4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C11C8u;
        goto label_2c11c8;
    }
    ctx->pc = 0x2C11C0u;
    {
        const bool branch_taken_0x2c11c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        ctx->pc = 0x2C11C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C11C0u;
        // 0x2c11c4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c11c0) {
            ctx->pc = 0x2D51E0u;
            return;
        }
    }
    ctx->pc = 0x2C11C8u;
label_2c11c8:
    // 0x2c11c8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c11c8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c11cc:
    // 0x2c11cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c11ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c11d0:
    // 0x2c11d0: 0x5a000810  blezl       $s0, . + 4 + (0x810 << 2)
label_2c11d4:
    if (ctx->pc == 0x2C11D4u) {
        ctx->pc = 0x2C11D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C11D0u;
        // 0x2c11d4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C11D8u;
        goto label_2c11d8;
    }
    ctx->pc = 0x2C11D0u;
    {
        const bool branch_taken_0x2c11d0 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x2c11d0) {
            ctx->pc = 0x2C11D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C11D0u;
            // 0x2c11d4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C3214u;
            { ctx->pc = 0x2c3214; return; }
        }
    }
    ctx->pc = 0x2C11D8u;
label_2c11d8:
    // 0x2c11d8: 0x10021830  beq         $zero, $v0, . + 4 + (0x1830 << 2)
label_2c11dc:
    if (ctx->pc == 0x2C11DCu) {
        ctx->pc = 0x2C11DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C11D8u;
        // 0x2c11dc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C11E0u;
        goto label_2c11e0;
    }
    ctx->pc = 0x2C11D8u;
    {
        const bool branch_taken_0x2c11d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C11DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C11D8u;
        // 0x2c11dc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c11d8) {
            ctx->pc = 0x2C729Cu;
            { ctx->pc = 0x2c729c; return; }
        }
    }
    ctx->pc = 0x2C11E0u;
label_2c11e0:
    // 0x2c11e0: 0x800016fc  lb          $zero, 0x16FC($zero)
    ctx->pc = 0x2c11e0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x16FCu));
label_2c11e4:
    // 0x2c11e4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c11e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c11e8:
    // 0x2c11e8: 0x10021001  beq         $zero, $v0, . + 4 + (0x1001 << 2)
label_2c11ec:
    if (ctx->pc == 0x2C11ECu) {
        ctx->pc = 0x2C11ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C11E8u;
        // 0x2c11ec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C11F0u;
        goto label_2c11f0;
    }
    ctx->pc = 0x2C11E8u;
    {
        const bool branch_taken_0x2c11e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C11ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C11E8u;
        // 0x2c11ec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c11e8) {
            ctx->pc = 0x2C51F0u;
            { ctx->pc = 0x2c51f0; return; }
        }
    }
    ctx->pc = 0x2C11F0u;
label_2c11f0:
    // 0x2c11f0: 0x10081818  beq         $zero, $t0, . + 4 + (0x1818 << 2)
label_2c11f4:
    if (ctx->pc == 0x2C11F4u) {
        ctx->pc = 0x2C11F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C11F0u;
        // 0x2c11f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C11F8u;
        goto label_2c11f8;
    }
    ctx->pc = 0x2C11F0u;
    {
        const bool branch_taken_0x2c11f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2C11F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C11F0u;
        // 0x2c11f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c11f0) {
            ctx->pc = 0x2C7254u;
            { ctx->pc = 0x2c7254; return; }
        }
    }
    ctx->pc = 0x2C11F8u;
label_2c11f8:
    // 0x2c11f8: 0x11eb57ff  beq         $t7, $t3, . + 4 + (0x57FF << 2)
label_2c11fc:
    if (ctx->pc == 0x2C11FCu) {
        ctx->pc = 0x2C11FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C11F8u;
        // 0x2c11fc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1200u;
        goto label_2c1200;
    }
    ctx->pc = 0x2C11F8u;
    {
        const bool branch_taken_0x2c11f8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 11));
        ctx->pc = 0x2C11FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C11F8u;
        // 0x2c11fc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c11f8) {
            ctx->pc = 0x2D71F8u;
            return;
        }
    }
    ctx->pc = 0x2C1200u;
label_2c1200:
    // 0x2c1200: 0x100b5801  beq         $zero, $t3, . + 4 + (0x5801 << 2)
label_2c1204:
    if (ctx->pc == 0x2C1204u) {
        ctx->pc = 0x2C1204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1200u;
        // 0x2c1204: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1208u;
        goto label_2c1208;
    }
    ctx->pc = 0x2C1200u;
    {
        const bool branch_taken_0x2c1200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2C1204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1200u;
        // 0x2c1204: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1200) {
            ctx->pc = 0x2D7208u;
            return;
        }
    }
    ctx->pc = 0x2C1208u;
label_2c1208:
    // 0x2c1208: 0x3e2d000  .word       0x03E2D000                   # sll         $k0, $v0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c1208u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
label_2c120c:
    // 0x2c120c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c120cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1210:
    // 0x2c1210: 0xb0b1000  j           func_C2C4000
label_2c1214:
    if (ctx->pc == 0x2C1214u) {
        ctx->pc = 0x2C1214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1210u;
        // 0x2c1214: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1218u;
        goto label_2c1218;
    }
    ctx->pc = 0x2C1210u;
    ctx->pc = 0x2C1214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1210u;
    // 0x2c1214: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xC2C4000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC2C4000u, 0x2C1210u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2C1218u;
label_2c1218:
    // 0x2c1218: 0x4201078c  .word       0x4201078C                   # INVALID     $s0, $at, 0x78C # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2c1218u;
//     throw std::runtime_error("Unhandled COP0 CO-OP: 0xC at 0x2C1218 raw=0x4201078C");
 /* MITIGATED */
label_2c121c:
    // 0x2c121c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c121cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1220:
    // 0x2c1220: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1220u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c1224:
    // 0x2c1224: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1224u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1228:
    // 0x2c1228: 0x800016fc  lb          $zero, 0x16FC($zero)
    ctx->pc = 0x2c1228u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x16FCu));
label_2c122c:
    // 0x2c122c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c122cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1230:
    // 0x2c1230: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1230u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c1234:
    // 0x2c1234: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1234u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1238:
    // 0x2c1238: 0x120e7009  beq         $s0, $t6, . + 4 + (0x7009 << 2)
label_2c123c:
    if (ctx->pc == 0x2C123Cu) {
        ctx->pc = 0x2C123Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1238u;
        // 0x2c123c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1240u;
        goto label_2c1240;
    }
    ctx->pc = 0x2C1238u;
    {
        const bool branch_taken_0x2c1238 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 14));
        ctx->pc = 0x2C123Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1238u;
        // 0x2c123c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1238) {
            ctx->pc = 0x2DD260u;
            return;
        }
    }
    ctx->pc = 0x2C1240u;
label_2c1240:
    // 0x2c1240: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1240u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c1244:
    // 0x2c1244: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1244u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1248:
    // 0x2c1248: 0x5a0077bd  blezl       $s0, . + 4 + (0x77BD << 2)
label_2c124c:
    if (ctx->pc == 0x2C124Cu) {
        ctx->pc = 0x2C124Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1248u;
        // 0x2c124c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1250u;
        goto label_2c1250;
    }
    ctx->pc = 0x2C1248u;
    {
        const bool branch_taken_0x2c1248 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x2c1248) {
            ctx->pc = 0x2C124Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C1248u;
            // 0x2c124c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DF140u;
            return;
        }
    }
    ctx->pc = 0x2C1250u;
label_2c1250:
    // 0x2c1250: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1250u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c1254:
    // 0x2c1254: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1254u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1258:
    // 0x2c1258: 0x800106bc  lb          $at, 0x6BC($zero)
    ctx->pc = 0x2c1258u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x6BCu));
label_2c125c:
    // 0x2c125c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c125cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1260:
    // 0x2c1260: 0x100108d4  beq         $zero, $at, . + 4 + (0x8D4 << 2)
label_2c1264:
    if (ctx->pc == 0x2C1264u) {
        ctx->pc = 0x2C1264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1260u;
        // 0x2c1264: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1268u;
        goto label_2c1268;
    }
    ctx->pc = 0x2C1260u;
    {
        const bool branch_taken_0x2c1260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 1));
        ctx->pc = 0x2C1264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1260u;
        // 0x2c1264: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1260) {
            ctx->pc = 0x2C35B4u;
            { ctx->pc = 0x2c35b4; return; }
        }
    }
    ctx->pc = 0x2C1268u;
label_2c1268:
    // 0x2c1268: 0x80000efc  lb          $zero, 0xEFC($zero)
    ctx->pc = 0x2c1268u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0xEFCu));
label_2c126c:
    // 0x2c126c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c126cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1270:
    // 0x2c1270: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1270u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c1274:
    // 0x2c1274: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1274u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1278:
    // 0x2c1278: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1278u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c127c:
    // 0x2c127c: 0x400002ff  .word       0x400002FF                   # mfc0        $zero, Index # 000002FF <InstrIdType: R5900_COP0>
    ctx->pc = 0x2c127cu;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2c1280:
    // 0x2c1280: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1280u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c1284:
    // 0x2c1284: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1284u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1288:
    // 0x2c1288: 0x0  nop
    ctx->pc = 0x2c1288u;
    // NOP
label_2c128c:
    // 0x2c128c: 0x0  nop
    ctx->pc = 0x2c128cu;
    // NOP
label_2c1290:
    // 0x2c1290: 0x0  nop
    ctx->pc = 0x2c1290u;
    // NOP
label_2c1294:
    // 0x2c1294: 0x4a140000  vaddx       $vf0, $vf0, $vf20x
    ctx->pc = 0x2c1294u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[20], ctx->vu0_vf[20], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, 0); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], res, _mm_castsi128_ps(mask)); }
label_2c1298:
    // 0x2c1298: 0x800306bc  lb          $v1, 0x6BC($zero)
    ctx->pc = 0x2c1298u;
    SET_GPR_S32(ctx, 3, (int8_t)FAST_READ8(0x6BCu));
label_2c129c:
    // 0x2c129c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c129cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c12a0:
    // 0x2c12a0: 0x1002182c  beq         $zero, $v0, . + 4 + (0x182C << 2)
label_2c12a4:
    if (ctx->pc == 0x2C12A4u) {
        ctx->pc = 0x2C12A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C12A0u;
        // 0x2c12a4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C12A8u;
        goto label_2c12a8;
    }
    ctx->pc = 0x2C12A0u;
    {
        const bool branch_taken_0x2c12a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C12A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C12A0u;
        // 0x2c12a4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c12a0) {
            ctx->pc = 0x2C7354u;
            { ctx->pc = 0x2c7354; return; }
        }
    }
    ctx->pc = 0x2C12A8u;
label_2c12a8:
    // 0x2c12a8: 0x1f01802  .word       0x01F01802                   # srl         $v1, $s0, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c12a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 0));
label_2c12ac:
    // 0x2c12ac: 0x602958  .word       0x00602958                   # mult        $a1, $v1, $zero # 00000140 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c12acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_2c12b0:
    // 0x2c12b0: 0x1f11803  .word       0x01F11803                   # sra         $v1, $s1, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c12b0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 17), 0));
label_2c12b4:
    // 0x2c12b4: 0x603198  .word       0x00603198                   # mult        $a2, $v1, $zero # 00000180 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c12b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_2c12b8:
    // 0x2c12b8: 0x1f21804  sllv        $v1, $s2, $t7
    ctx->pc = 0x2c12b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), GPR_U32(ctx, 15) & 0x1F));
label_2c12bc:
    // 0x2c12bc: 0x1cb01e8  .word       0x01CB01E8                   # mfsa        $zero # 01CB01C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c12bcu;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_2c12c0:
    // 0x2c12c0: 0x1f31805  .word       0x01F31805                   # INVALID     $t7, $s3, 0x1805 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c12c0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2C12C0 raw=0x01F31805");
 /* MITIGATED */
label_2c12c4:
    // 0x2c12c4: 0x1cb0228  .word       0x01CB0228                   # mfsa        $zero # 01CB0200 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c12c4u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_2c12c8:
    // 0x2c12c8: 0x1f41806  srlv        $v1, $s4, $t7
    ctx->pc = 0x2c12c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 20), GPR_U32(ctx, 15) & 0x1F));
label_2c12cc:
    // 0x2c12cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c12ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c12d0:
    // 0x2c12d0: 0x3e28000  .word       0x03E28000                   # sll         $s0, $v0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c12d0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
label_2c12d4:
    // 0x2c12d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c12d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c12d8:
    // 0x2c12d8: 0x3e28801  .word       0x03E28801                   # INVALID     $ra, $v0, -0x77FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c12d8u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2C12D8 raw=0x03E28801");
 /* MITIGATED */
label_2c12dc:
    // 0x2c12dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c12dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c12e0:
    // 0x2c12e0: 0x3e29002  .word       0x03E29002                   # srl         $s2, $v0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c12e0u;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 2), 0));
label_2c12e4:
    // 0x2c12e4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c12e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c12e8:
    // 0x2c12e8: 0x3e29803  .word       0x03E29803                   # sra         $s3, $v0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c12e8u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 2), 0));
label_2c12ec:
    // 0x2c12ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c12ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c12f0:
    // 0x2c12f0: 0x3e2a004  sllv        $s4, $v0, $ra
    ctx->pc = 0x2c12f0u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 31) & 0x1F));
label_2c12f4:
    // 0x2c12f4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c12f4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c12f8:
    // 0x2c12f8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c12f8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c12fc:
    // 0x2c12fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c12fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1300:
    // 0x2c1300: 0x1861801  .word       0x01861801                   # INVALID     $t4, $a2, 0x1801 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c1300u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2C1300 raw=0x01861801");
 /* MITIGATED */
label_2c1304:
    // 0x2c1304: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1304u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1308:
    // 0x2c1308: 0x271800  .word       0x00271800                   # sll         $v1, $a3, 0 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c1308u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 0));
label_2c130c:
    // 0x2c130c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c130cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1310:
    // 0x2c1310: 0x800016fc  lb          $zero, 0x16FC($zero)
    ctx->pc = 0x2c1310u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x16FCu));
label_2c1314:
    // 0x2c1314: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1314u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1318:
    // 0x2c1318: 0x1851800  .word       0x01851800                   # sll         $v1, $a1, 0 # 01800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c1318u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 0));
label_2c131c:
    // 0x2c131c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c131cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1320:
    // 0x2c1320: 0x281801  .word       0x00281801                   # INVALID     $at, $t0, 0x1801 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c1320u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2C1320 raw=0x00281801");
 /* MITIGATED */
label_2c1324:
    // 0x2c1324: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1324u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1328:
    // 0x2c1328: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1328u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c132c:
    // 0x2c132c: 0x400002ff  .word       0x400002FF                   # mfc0        $zero, Index # 000002FF <InstrIdType: R5900_COP0>
    ctx->pc = 0x2c132cu;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2c1330:
    // 0x2c1330: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1330u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c1334:
    // 0x2c1334: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1334u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1338:
    // 0x2c1338: 0x0  nop
    ctx->pc = 0x2c1338u;
    // NOP
label_2c133c:
    // 0x2c133c: 0x0  nop
    ctx->pc = 0x2c133cu;
    // NOP
label_2c1340:
    // 0x2c1340: 0x0  nop
    ctx->pc = 0x2c1340u;
    // NOP
label_2c1344:
    // 0x2c1344: 0x4ab10450  vmaxx.yw    $vf17, $vf0, $vf17x
    ctx->pc = 0x2c1344u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[17], ctx->vu0_vf[17], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, -1, 0); ctx->vu0_vf[17] = _mm_blendv_ps(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
label_2c1348:
    // 0x2c1348: 0x800206bc  lb          $v0, 0x6BC($zero)
    ctx->pc = 0x2c1348u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x6BCu));
label_2c134c:
    // 0x2c134c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c134cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1350:
    // 0x2c1350: 0x1007102c  beq         $zero, $a3, . + 4 + (0x102C << 2)
label_2c1354:
    if (ctx->pc == 0x2C1354u) {
        ctx->pc = 0x2C1354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1350u;
        // 0x2c1354: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1358u;
        goto label_2c1358;
    }
    ctx->pc = 0x2C1350u;
    {
        const bool branch_taken_0x2c1350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2C1354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1350u;
        // 0x2c1354: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1350) {
            ctx->pc = 0x2C5404u;
            { ctx->pc = 0x2c5404; return; }
        }
    }
    ctx->pc = 0x2C1358u;
label_2c1358:
    // 0x2c1358: 0x10061001  beq         $zero, $a2, . + 4 + (0x1001 << 2)
label_2c135c:
    if (ctx->pc == 0x2C135Cu) {
        ctx->pc = 0x2C135Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1358u;
        // 0x2c135c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1360u;
        goto label_2c1360;
    }
    ctx->pc = 0x2C1358u;
    {
        const bool branch_taken_0x2c1358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 6));
        ctx->pc = 0x2C135Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1358u;
        // 0x2c135c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1358) {
            ctx->pc = 0x2C5360u;
            { ctx->pc = 0x2c5360; return; }
        }
    }
    ctx->pc = 0x2C1360u;
label_2c1360:
    // 0x2c1360: 0x90c3000  j           func_430C000
label_2c1364:
    if (ctx->pc == 0x2C1364u) {
        ctx->pc = 0x2C1364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1360u;
        // 0x2c1364: 0x1e08418  .word       0x01E08418                   # mult        $s0, $t7, $zero # 00000400 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1368u;
        goto label_2c1368;
    }
    ctx->pc = 0x2C1360u;
    ctx->pc = 0x2C1364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1360u;
    // 0x2c1364: 0x1e08418  .word       0x01E08418                   # mult        $s0, $t7, $zero # 00000400 <InstrIdType: R5900_SPECIAL> (Delay Slot)
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C000u, 0x2C1360u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2C1368u;
label_2c1368:
    // 0x2c1368: 0x82e3000  j           func_B8C000
label_2c136c:
    if (ctx->pc == 0x2C136Cu) {
        ctx->pc = 0x2C136Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1368u;
        // 0x2c136c: 0x1e08c58  .word       0x01E08C58                   # mult        $s1, $t7, $zero # 00000440 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1370u;
        goto label_2c1370;
    }
    ctx->pc = 0x2C1368u;
    ctx->pc = 0x2C136Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1368u;
    // 0x2c136c: 0x1e08c58  .word       0x01E08C58                   # mult        $s1, $t7, $zero # 00000440 <InstrIdType: R5900_SPECIAL> (Delay Slot)
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    ctx->in_delay_slot = false;
    ctx->pc = 0xB8C000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xB8C000u, 0x2C1368u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2C1370u;
label_2c1370:
    // 0x2c1370: 0x11eb07ff  beq         $t7, $t3, . + 4 + (0x7FF << 2)
label_2c1374:
    if (ctx->pc == 0x2C1374u) {
        ctx->pc = 0x2C1374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1370u;
        // 0x2c1374: 0x1e09498  .word       0x01E09498                   # mult        $s2, $t7, $zero # 00000480 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1378u;
        goto label_2c1378;
    }
    ctx->pc = 0x2C1370u;
    {
        const bool branch_taken_0x2c1370 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 11));
        ctx->pc = 0x2C1374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1370u;
        // 0x2c1374: 0x1e09498  .word       0x01E09498                   # mult        $s2, $t7, $zero # 00000480 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1370) {
            ctx->pc = 0x2C3370u;
            { ctx->pc = 0x2c3370; return; }
        }
    }
    ctx->pc = 0x2C1378u;
label_2c1378:
    // 0x2c1378: 0x10033001  beq         $zero, $v1, . + 4 + (0x3001 << 2)
label_2c137c:
    if (ctx->pc == 0x2C137Cu) {
        ctx->pc = 0x2C137Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1378u;
        // 0x2c137c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1380u;
        goto label_2c1380;
    }
    ctx->pc = 0x2C1378u;
    {
        const bool branch_taken_0x2c1378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        ctx->pc = 0x2C137Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1378u;
        // 0x2c137c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1378) {
            ctx->pc = 0x2CD380u;
            { ctx->pc = 0x2cd380; return; }
        }
    }
    ctx->pc = 0x2C1380u;
label_2c1380:
    // 0x2c1380: 0x10010002  beq         $zero, $at, . + 4 + (0x2 << 2)
label_2c1384:
    if (ctx->pc == 0x2C1384u) {
        ctx->pc = 0x2C1384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1380u;
        // 0x2c1384: 0x208428  .word       0x00208428                   # mfsa        $s0 # 00200400 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        SET_GPR_U32(ctx, 16, ctx->sa);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1388u;
        goto label_2c1388;
    }
    ctx->pc = 0x2C1380u;
    {
        const bool branch_taken_0x2c1380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 1));
        ctx->pc = 0x2C1384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1380u;
        // 0x2c1384: 0x208428  .word       0x00208428                   # mfsa        $s0 # 00200400 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        SET_GPR_U32(ctx, 16, ctx->sa);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1380) {
            ctx->pc = 0x2C138Cu;
            goto label_2c138c;
        }
    }
    ctx->pc = 0x2C1388u;
label_2c1388:
    // 0x2c1388: 0x80017074  lb          $at, 0x7074($zero)
    ctx->pc = 0x2c1388u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x7074u));
label_2c138c:
    // 0x2c138c: 0x208c68  .word       0x00208C68                   # mfsa        $s1 # 00200440 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c138cu;
    SET_GPR_U32(ctx, 17, ctx->sa);
label_2c1390:
    // 0x2c1390: 0x800b6334  lb          $t3, 0x6334($zero)
    ctx->pc = 0x2c1390u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x6334u));
label_2c1394:
    // 0x2c1394: 0x2094a8  .word       0x002094A8                   # mfsa        $s2 # 00200480 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c1394u;
    SET_GPR_U32(ctx, 18, ctx->sa);
label_2c1398:
    // 0x2c1398: 0x50010002  beql        $zero, $at, . + 4 + (0x2 << 2)
label_2c139c:
    if (ctx->pc == 0x2C139Cu) {
        ctx->pc = 0x2C139Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1398u;
        // 0x2c139c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C13A0u;
        goto label_2c13a0;
    }
    ctx->pc = 0x2C1398u;
    {
        const bool branch_taken_0x2c1398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 1));
        if (branch_taken_0x2c1398) {
            ctx->pc = 0x2C139Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C1398u;
            // 0x2c139c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C13A4u;
            goto label_2c13a4;
        }
    }
    ctx->pc = 0x2C13A0u;
label_2c13a0:
    // 0x2c13a0: 0x800d07f2  lb          $t5, 0x7F2($zero)
    ctx->pc = 0x2c13a0u;
    SET_GPR_S32(ctx, 13, (int8_t)FAST_READ8(0x7F2u));
label_2c13a4:
    // 0x2c13a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c13a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c13a8:
    // 0x2c13a8: 0x100d0003  beq         $zero, $t5, . + 4 + (0x3 << 2)
label_2c13ac:
    if (ctx->pc == 0x2C13ACu) {
        ctx->pc = 0x2C13ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C13A8u;
        // 0x2c13ac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C13B0u;
        goto label_2c13b0;
    }
    ctx->pc = 0x2C13A8u;
    {
        const bool branch_taken_0x2c13a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 13));
        ctx->pc = 0x2C13ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C13A8u;
        // 0x2c13ac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c13a8) {
            ctx->pc = 0x2C13B8u;
            goto label_2c13b8;
        }
    }
    ctx->pc = 0x2C13B0u;
label_2c13b0:
    // 0x2c13b0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c13b0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c13b4:
    // 0x2c13b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c13b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c13b8:
    // 0x2c13b8: 0x800c1970  lb          $t4, 0x1970($zero)
    ctx->pc = 0x2c13b8u;
    SET_GPR_S32(ctx, 12, (int8_t)FAST_READ8(0x1970u));
label_2c13bc:
    // 0x2c13bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c13bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c13c0:
    // 0x2c13c0: 0x1f43000  .word       0x01F43000                   # sll         $a2, $s4, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c13c0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 20), 0));
label_2c13c4:
    // 0x2c13c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c13c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c13c8:
    // 0x2c13c8: 0x800c29b0  lb          $t4, 0x29B0($zero)
    ctx->pc = 0x2c13c8u;
    SET_GPR_S32(ctx, 12, (int8_t)FAST_READ8(0x29B0u));
label_2c13cc:
    // 0x2c13cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c13ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c13d0:
    // 0x2c13d0: 0x22000000  addi        $zero, $s0, 0x0
    ctx->pc = 0x2c13d0u;
    // NOP (addi to $zero)
label_2c13d4:
    // 0x2c13d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c13d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c13d8:
    // 0x2c13d8: 0x809e6bfd  lb          $fp, 0x6BFD($a0)
    ctx->pc = 0x2c13d8u;
    SET_GPR_S32(ctx, 30, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 27645)));
label_2c13dc:
    // 0x2c13dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c13dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c13e0:
    // 0x2c13e0: 0x81e7a37d  lb          $a3, -0x5C83($t7)
    ctx->pc = 0x2c13e0u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294943613)));
label_2c13e4:
    // 0x2c13e4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c13e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c13e8:
    // 0x2c13e8: 0x800c3a30  lb          $t4, 0x3A30($zero)
    ctx->pc = 0x2c13e8u;
    SET_GPR_S32(ctx, 12, (int8_t)FAST_READ8(0x3A30u));
label_2c13ec:
    // 0x2c13ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c13ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c13f0:
    // 0x2c13f0: 0x800c4230  lb          $t4, 0x4230($zero)
    ctx->pc = 0x2c13f0u;
    SET_GPR_S32(ctx, 12, (int8_t)FAST_READ8(0x4230u));
label_2c13f4:
    // 0x2c13f4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c13f4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c13f8:
    // 0x2c13f8: 0x800c4230  lb          $t4, 0x4230($zero)
    ctx->pc = 0x2c13f8u;
    SET_GPR_S32(ctx, 12, (int8_t)FAST_READ8(0x4230u));
label_2c13fc:
    // 0x2c13fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c13fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1400:
    // 0x2c1400: 0x802813ff  lb          $t0, 0x13FF($at)
    ctx->pc = 0x2c1400u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 5119)));
label_2c1404:
    // 0x2c1404: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1404u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1408:
    // 0x2c1408: 0x81e8a37d  lb          $t0, -0x5C83($t7)
    ctx->pc = 0x2c1408u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294943613)));
label_2c140c:
    // 0x2c140c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c140cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1410:
    // 0x2c1410: 0x800b07b2  lb          $t3, 0x7B2($zero)
    ctx->pc = 0x2c1410u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x7B2u));
label_2c1414:
    // 0x2c1414: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1414u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1418:
    // 0x2c1418: 0x800a07b2  lb          $t2, 0x7B2($zero)
    ctx->pc = 0x2c1418u;
    SET_GPR_S32(ctx, 10, (int8_t)FAST_READ8(0x7B2u));
label_2c141c:
    // 0x2c141c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c141cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1420:
    // 0x2c1420: 0x800907b2  lb          $t1, 0x7B2($zero)
    ctx->pc = 0x2c1420u;
    SET_GPR_S32(ctx, 9, (int8_t)FAST_READ8(0x7B2u));
label_2c1424:
    // 0x2c1424: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1424u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1428:
    // 0x2c1428: 0x81f31b7c  lb          $s3, 0x1B7C($t7)
    ctx->pc = 0x2c1428u;
    SET_GPR_S32(ctx, 19, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 7036)));
label_2c142c:
    // 0x2c142c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c142cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1430:
    // 0x2c1430: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1430u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c1434:
    // 0x2c1434: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1434u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1438:
    // 0x2c1438: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1438u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c143c:
    // 0x2c143c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c143cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1440:
    // 0x2c1440: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1440u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c1444:
    // 0x2c1444: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1444u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1448:
    // 0x2c1448: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1448u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c144c:
    // 0x2c144c: 0x1f309bc  .word       0x01F309BC                   # dsll32      $at, $s3, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c144cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 19) << (32 + 6));
label_2c1450:
    // 0x2c1450: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1450u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c1454:
    // 0x2c1454: 0x1f310bd  .word       0x01F310BD                   # INVALID     $t7, $s3, 0x10BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c1454u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2C1454 raw=0x01F310BD");
 /* MITIGATED */
label_2c1458:
    // 0x2c1458: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1458u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c145c:
    // 0x2c145c: 0x1f318be  .word       0x01F318BE                   # dsrl32      $v1, $s3, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c145cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) >> (32 + 2));
label_2c1460:
    // 0x2c1460: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1460u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c1464:
    // 0x2c1464: 0x1e0270b  .word       0x01E0270B                   # movn        $a0, $t7, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c1464u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 15));
label_2c1468:
    // 0x2c1468: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1468u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c146c:
    // 0x2c146c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c146cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1470:
    // 0x2c1470: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1470u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c1474:
    // 0x2c1474: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1474u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1478:
    // 0x2c1478: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1478u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c147c:
    // 0x2c147c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c147cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1480:
    // 0x2c1480: 0x81fc03bc  lb          $gp, 0x3BC($t7)
    ctx->pc = 0x2c1480u;
    SET_GPR_S32(ctx, 28, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 956)));
label_2c1484:
    // 0x2c1484: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1484u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1488:
    // 0x2c1488: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1488u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c148c:
    // 0x2c148c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c148cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1490:
    // 0x2c1490: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1490u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c1494:
    // 0x2c1494: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1494u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1498:
    // 0x2c1498: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1498u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c149c:
    // 0x2c149c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c149cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c14a0:
    // 0x2c14a0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c14a0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c14a4:
    // 0x2c14a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c14a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c14a8:
    // 0x2c14a8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c14a8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c14ac:
    // 0x2c14ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c14acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c14b0:
    // 0x2c14b0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c14b0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c14b4:
    // 0x2c14b4: 0x3e01be  .word       0x003E01BE                   # dsrl32      $zero, $fp, 6 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c14b4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 30) >> (32 + 6));
label_2c14b8:
    // 0x2c14b8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c14b8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c14bc:
    // 0x2c14bc: 0x20f721  .word       0x0020F721                   # addu        $fp, $at, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c14bcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 0)));
label_2c14c0:
    // 0x2c14c0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c14c0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c14c4:
    // 0x2c14c4: 0x1c0e7dc  .word       0x01C0E7DC                   # dmult       $t6, $zero # 0000E7C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c14c4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2C14C4 raw=0x01C0E7DC");
 /* MITIGATED */
label_2c14c8:
    // 0x2c14c8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c14c8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c14cc:
    // 0x2c14cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c14ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c14d0:
    // 0x2c14d0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c14d0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c14d4:
    // 0x2c14d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c14d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c14d8:
    // 0x2c14d8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c14d8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c14dc:
    // 0x2c14dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c14dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c14e0:
    // 0x2c14e0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c14e0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c14e4:
    // 0x2c14e4: 0x20e7df  .word       0x0020E7DF                   # ddivu       $gp, $at, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c14e4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2C14E4 raw=0x0020E7DF");
 /* MITIGATED */
label_2c14e8:
    // 0x2c14e8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c14e8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c14ec:
    // 0x2c14ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c14ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c14f0:
    // 0x2c14f0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c14f0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c14f4:
    // 0x2c14f4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c14f4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c14f8:
    // 0x2c14f8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c14f8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c14fc:
    // 0x2c14fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c14fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1500:
    // 0x2c1500: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1500u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c1504:
    // 0x2c1504: 0x20ffd0  .word       0x0020FFD0                   # mfhi        $ra # 002007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c1504u;
    SET_GPR_U64(ctx, 31, ctx->hi);
label_2c1508:
    // 0x2c1508: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1508u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c150c:
    // 0x2c150c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c150cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1510:
    // 0x2c1510: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1510u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c1514:
    // 0x2c1514: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1514u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1518:
    // 0x2c1518: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1518u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c151c:
    // 0x2c151c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c151cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1520:
    // 0x2c1520: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1520u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c1524:
    // 0x2c1524: 0x1faf97d  .word       0x01FAF97D                   # INVALID     $t7, $k0, -0x683 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c1524u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2C1524 raw=0x01FAF97D");
 /* MITIGATED */
label_2c1528:
    // 0x2c1528: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1528u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c152c:
    // 0x2c152c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c152cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1530:
    // 0x2c1530: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1530u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c1534:
    // 0x2c1534: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1534u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1538:
    // 0x2c1538: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1538u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c153c:
    // 0x2c153c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c153cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1540:
    // 0x2c1540: 0x3e7d002  .word       0x03E7D002                   # srl         $k0, $a3, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c1540u;
    SET_GPR_S32(ctx, 26, (int32_t)SRL32(GPR_U32(ctx, 7), 0));
label_2c1544:
    // 0x2c1544: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1544u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1548:
    // 0x2c1548: 0x3e8d002  .word       0x03E8D002                   # srl         $k0, $t0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c1548u;
    SET_GPR_S32(ctx, 26, (int32_t)SRL32(GPR_U32(ctx, 8), 0));
label_2c154c:
    // 0x2c154c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c154cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->pc = 0x2c1550u;
    return;
}

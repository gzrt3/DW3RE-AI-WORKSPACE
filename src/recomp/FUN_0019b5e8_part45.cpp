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


void FUN_0019b5e8_part45(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1b0da8u: goto label_1b0da8;
        case 0x1b0dacu: goto label_1b0dac;
        case 0x1b0db0u: goto label_1b0db0;
        case 0x1b0db4u: goto label_1b0db4;
        case 0x1b0db8u: goto label_1b0db8;
        case 0x1b0dbcu: goto label_1b0dbc;
        case 0x1b0dc0u: goto label_1b0dc0;
        case 0x1b0dc4u: goto label_1b0dc4;
        case 0x1b0dc8u: goto label_1b0dc8;
        case 0x1b0dccu: goto label_1b0dcc;
        case 0x1b0dd0u: goto label_1b0dd0;
        case 0x1b0dd4u: goto label_1b0dd4;
        case 0x1b0dd8u: goto label_1b0dd8;
        case 0x1b0ddcu: goto label_1b0ddc;
        case 0x1b0de0u: goto label_1b0de0;
        case 0x1b0de4u: goto label_1b0de4;
        case 0x1b0de8u: goto label_1b0de8;
        case 0x1b0decu: goto label_1b0dec;
        case 0x1b0df0u: goto label_1b0df0;
        case 0x1b0df4u: goto label_1b0df4;
        case 0x1b0df8u: goto label_1b0df8;
        case 0x1b0dfcu: goto label_1b0dfc;
        case 0x1b0e00u: goto label_1b0e00;
        case 0x1b0e04u: goto label_1b0e04;
        case 0x1b0e08u: goto label_1b0e08;
        case 0x1b0e0cu: goto label_1b0e0c;
        case 0x1b0e10u: goto label_1b0e10;
        case 0x1b0e14u: goto label_1b0e14;
        case 0x1b0e18u: goto label_1b0e18;
        case 0x1b0e1cu: goto label_1b0e1c;
        case 0x1b0e20u: goto label_1b0e20;
        case 0x1b0e24u: goto label_1b0e24;
        case 0x1b0e28u: goto label_1b0e28;
        case 0x1b0e2cu: goto label_1b0e2c;
        case 0x1b0e30u: goto label_1b0e30;
        case 0x1b0e34u: goto label_1b0e34;
        case 0x1b0e38u: goto label_1b0e38;
        case 0x1b0e3cu: goto label_1b0e3c;
        case 0x1b0e40u: goto label_1b0e40;
        case 0x1b0e44u: goto label_1b0e44;
        case 0x1b0e48u: goto label_1b0e48;
        case 0x1b0e4cu: goto label_1b0e4c;
        case 0x1b0e50u: goto label_1b0e50;
        case 0x1b0e54u: goto label_1b0e54;
        case 0x1b0e58u: goto label_1b0e58;
        case 0x1b0e5cu: goto label_1b0e5c;
        case 0x1b0e60u: goto label_1b0e60;
        case 0x1b0e64u: goto label_1b0e64;
        case 0x1b0e68u: goto label_1b0e68;
        case 0x1b0e6cu: goto label_1b0e6c;
        case 0x1b0e70u: goto label_1b0e70;
        case 0x1b0e74u: goto label_1b0e74;
        case 0x1b0e78u: goto label_1b0e78;
        case 0x1b0e7cu: goto label_1b0e7c;
        case 0x1b0e80u: goto label_1b0e80;
        case 0x1b0e84u: goto label_1b0e84;
        case 0x1b0e88u: goto label_1b0e88;
        case 0x1b0e8cu: goto label_1b0e8c;
        case 0x1b0e90u: goto label_1b0e90;
        case 0x1b0e94u: goto label_1b0e94;
        case 0x1b0e98u: goto label_1b0e98;
        case 0x1b0e9cu: goto label_1b0e9c;
        case 0x1b0ea0u: goto label_1b0ea0;
        case 0x1b0ea4u: goto label_1b0ea4;
        case 0x1b0ea8u: goto label_1b0ea8;
        case 0x1b0eacu: goto label_1b0eac;
        case 0x1b0eb0u: goto label_1b0eb0;
        case 0x1b0eb4u: goto label_1b0eb4;
        case 0x1b0eb8u: goto label_1b0eb8;
        case 0x1b0ebcu: goto label_1b0ebc;
        case 0x1b0ec0u: goto label_1b0ec0;
        case 0x1b0ec4u: goto label_1b0ec4;
        case 0x1b0ec8u: goto label_1b0ec8;
        case 0x1b0eccu: goto label_1b0ecc;
        case 0x1b0ed0u: goto label_1b0ed0;
        case 0x1b0ed4u: goto label_1b0ed4;
        case 0x1b0ed8u: goto label_1b0ed8;
        case 0x1b0edcu: goto label_1b0edc;
        case 0x1b0ee0u: goto label_1b0ee0;
        case 0x1b0ee4u: goto label_1b0ee4;
        case 0x1b0ee8u: goto label_1b0ee8;
        case 0x1b0eecu: goto label_1b0eec;
        case 0x1b0ef0u: goto label_1b0ef0;
        case 0x1b0ef4u: goto label_1b0ef4;
        case 0x1b0ef8u: goto label_1b0ef8;
        case 0x1b0efcu: goto label_1b0efc;
        case 0x1b0f00u: goto label_1b0f00;
        case 0x1b0f04u: goto label_1b0f04;
        case 0x1b0f08u: goto label_1b0f08;
        case 0x1b0f0cu: goto label_1b0f0c;
        case 0x1b0f10u: goto label_1b0f10;
        case 0x1b0f14u: goto label_1b0f14;
        case 0x1b0f18u: goto label_1b0f18;
        case 0x1b0f1cu: goto label_1b0f1c;
        case 0x1b0f20u: goto label_1b0f20;
        case 0x1b0f24u: goto label_1b0f24;
        case 0x1b0f28u: goto label_1b0f28;
        case 0x1b0f2cu: goto label_1b0f2c;
        case 0x1b0f30u: goto label_1b0f30;
        case 0x1b0f34u: goto label_1b0f34;
        case 0x1b0f38u: goto label_1b0f38;
        case 0x1b0f3cu: goto label_1b0f3c;
        case 0x1b0f40u: goto label_1b0f40;
        case 0x1b0f44u: goto label_1b0f44;
        case 0x1b0f48u: goto label_1b0f48;
        case 0x1b0f4cu: goto label_1b0f4c;
        case 0x1b0f50u: goto label_1b0f50;
        case 0x1b0f54u: goto label_1b0f54;
        case 0x1b0f58u: goto label_1b0f58;
        case 0x1b0f5cu: goto label_1b0f5c;
        case 0x1b0f60u: goto label_1b0f60;
        case 0x1b0f64u: goto label_1b0f64;
        case 0x1b0f68u: goto label_1b0f68;
        case 0x1b0f6cu: goto label_1b0f6c;
        case 0x1b0f70u: goto label_1b0f70;
        case 0x1b0f74u: goto label_1b0f74;
        case 0x1b0f78u: goto label_1b0f78;
        case 0x1b0f7cu: goto label_1b0f7c;
        case 0x1b0f80u: goto label_1b0f80;
        case 0x1b0f84u: goto label_1b0f84;
        case 0x1b0f88u: goto label_1b0f88;
        case 0x1b0f8cu: goto label_1b0f8c;
        case 0x1b0f90u: goto label_1b0f90;
        case 0x1b0f94u: goto label_1b0f94;
        case 0x1b0f98u: goto label_1b0f98;
        case 0x1b0f9cu: goto label_1b0f9c;
        case 0x1b0fa0u: goto label_1b0fa0;
        case 0x1b0fa4u: goto label_1b0fa4;
        case 0x1b0fa8u: goto label_1b0fa8;
        case 0x1b0facu: goto label_1b0fac;
        case 0x1b0fb0u: goto label_1b0fb0;
        case 0x1b0fb4u: goto label_1b0fb4;
        case 0x1b0fb8u: goto label_1b0fb8;
        case 0x1b0fbcu: goto label_1b0fbc;
        case 0x1b0fc0u: goto label_1b0fc0;
        case 0x1b0fc4u: goto label_1b0fc4;
        case 0x1b0fc8u: goto label_1b0fc8;
        case 0x1b0fccu: goto label_1b0fcc;
        case 0x1b0fd0u: goto label_1b0fd0;
        case 0x1b0fd4u: goto label_1b0fd4;
        case 0x1b0fd8u: goto label_1b0fd8;
        case 0x1b0fdcu: goto label_1b0fdc;
        case 0x1b0fe0u: goto label_1b0fe0;
        case 0x1b0fe4u: goto label_1b0fe4;
        case 0x1b0fe8u: goto label_1b0fe8;
        case 0x1b0fecu: goto label_1b0fec;
        case 0x1b0ff0u: goto label_1b0ff0;
        case 0x1b0ff4u: goto label_1b0ff4;
        case 0x1b0ff8u: goto label_1b0ff8;
        case 0x1b0ffcu: goto label_1b0ffc;
        case 0x1b1000u: goto label_1b1000;
        case 0x1b1004u: goto label_1b1004;
        case 0x1b1008u: goto label_1b1008;
        case 0x1b100cu: goto label_1b100c;
        case 0x1b1010u: goto label_1b1010;
        case 0x1b1014u: goto label_1b1014;
        case 0x1b1018u: goto label_1b1018;
        case 0x1b101cu: goto label_1b101c;
        case 0x1b1020u: goto label_1b1020;
        case 0x1b1024u: goto label_1b1024;
        case 0x1b1028u: goto label_1b1028;
        case 0x1b102cu: goto label_1b102c;
        case 0x1b1030u: goto label_1b1030;
        case 0x1b1034u: goto label_1b1034;
        case 0x1b1038u: goto label_1b1038;
        case 0x1b103cu: goto label_1b103c;
        case 0x1b1040u: goto label_1b1040;
        case 0x1b1044u: goto label_1b1044;
        case 0x1b1048u: goto label_1b1048;
        case 0x1b104cu: goto label_1b104c;
        case 0x1b1050u: goto label_1b1050;
        case 0x1b1054u: goto label_1b1054;
        case 0x1b1058u: goto label_1b1058;
        case 0x1b105cu: goto label_1b105c;
        case 0x1b1060u: goto label_1b1060;
        case 0x1b1064u: goto label_1b1064;
        case 0x1b1068u: goto label_1b1068;
        case 0x1b106cu: goto label_1b106c;
        case 0x1b1070u: goto label_1b1070;
        case 0x1b1074u: goto label_1b1074;
        case 0x1b1078u: goto label_1b1078;
        case 0x1b107cu: goto label_1b107c;
        case 0x1b1080u: goto label_1b1080;
        case 0x1b1084u: goto label_1b1084;
        case 0x1b1088u: goto label_1b1088;
        case 0x1b108cu: goto label_1b108c;
        case 0x1b1090u: goto label_1b1090;
        case 0x1b1094u: goto label_1b1094;
        case 0x1b1098u: goto label_1b1098;
        case 0x1b109cu: goto label_1b109c;
        case 0x1b10a0u: goto label_1b10a0;
        case 0x1b10a4u: goto label_1b10a4;
        case 0x1b10a8u: goto label_1b10a8;
        case 0x1b10acu: goto label_1b10ac;
        case 0x1b10b0u: goto label_1b10b0;
        case 0x1b10b4u: goto label_1b10b4;
        case 0x1b10b8u: goto label_1b10b8;
        case 0x1b10bcu: goto label_1b10bc;
        case 0x1b10c0u: goto label_1b10c0;
        case 0x1b10c4u: goto label_1b10c4;
        case 0x1b10c8u: goto label_1b10c8;
        case 0x1b10ccu: goto label_1b10cc;
        case 0x1b10d0u: goto label_1b10d0;
        case 0x1b10d4u: goto label_1b10d4;
        case 0x1b10d8u: goto label_1b10d8;
        case 0x1b10dcu: goto label_1b10dc;
        case 0x1b10e0u: goto label_1b10e0;
        case 0x1b10e4u: goto label_1b10e4;
        case 0x1b10e8u: goto label_1b10e8;
        case 0x1b10ecu: goto label_1b10ec;
        case 0x1b10f0u: goto label_1b10f0;
        case 0x1b10f4u: goto label_1b10f4;
        case 0x1b10f8u: goto label_1b10f8;
        case 0x1b10fcu: goto label_1b10fc;
        case 0x1b1100u: goto label_1b1100;
        case 0x1b1104u: goto label_1b1104;
        case 0x1b1108u: goto label_1b1108;
        case 0x1b110cu: goto label_1b110c;
        case 0x1b1110u: goto label_1b1110;
        case 0x1b1114u: goto label_1b1114;
        case 0x1b1118u: goto label_1b1118;
        case 0x1b111cu: goto label_1b111c;
        case 0x1b1120u: goto label_1b1120;
        case 0x1b1124u: goto label_1b1124;
        case 0x1b1128u: goto label_1b1128;
        case 0x1b112cu: goto label_1b112c;
        case 0x1b1130u: goto label_1b1130;
        case 0x1b1134u: goto label_1b1134;
        case 0x1b1138u: goto label_1b1138;
        case 0x1b113cu: goto label_1b113c;
        case 0x1b1140u: goto label_1b1140;
        case 0x1b1144u: goto label_1b1144;
        case 0x1b1148u: goto label_1b1148;
        case 0x1b114cu: goto label_1b114c;
        case 0x1b1150u: goto label_1b1150;
        case 0x1b1154u: goto label_1b1154;
        case 0x1b1158u: goto label_1b1158;
        case 0x1b115cu: goto label_1b115c;
        case 0x1b1160u: goto label_1b1160;
        case 0x1b1164u: goto label_1b1164;
        case 0x1b1168u: goto label_1b1168;
        case 0x1b116cu: goto label_1b116c;
        case 0x1b1170u: goto label_1b1170;
        case 0x1b1174u: goto label_1b1174;
        case 0x1b1178u: goto label_1b1178;
        case 0x1b117cu: goto label_1b117c;
        case 0x1b1180u: goto label_1b1180;
        case 0x1b1184u: goto label_1b1184;
        case 0x1b1188u: goto label_1b1188;
        case 0x1b118cu: goto label_1b118c;
        case 0x1b1190u: goto label_1b1190;
        case 0x1b1194u: goto label_1b1194;
        case 0x1b1198u: goto label_1b1198;
        case 0x1b119cu: goto label_1b119c;
        case 0x1b11a0u: goto label_1b11a0;
        case 0x1b11a4u: goto label_1b11a4;
        case 0x1b11a8u: goto label_1b11a8;
        case 0x1b11acu: goto label_1b11ac;
        case 0x1b11b0u: goto label_1b11b0;
        case 0x1b11b4u: goto label_1b11b4;
        case 0x1b11b8u: goto label_1b11b8;
        case 0x1b11bcu: goto label_1b11bc;
        case 0x1b11c0u: goto label_1b11c0;
        case 0x1b11c4u: goto label_1b11c4;
        case 0x1b11c8u: goto label_1b11c8;
        case 0x1b11ccu: goto label_1b11cc;
        case 0x1b11d0u: goto label_1b11d0;
        case 0x1b11d4u: goto label_1b11d4;
        case 0x1b11d8u: goto label_1b11d8;
        case 0x1b11dcu: goto label_1b11dc;
        case 0x1b11e0u: goto label_1b11e0;
        case 0x1b11e4u: goto label_1b11e4;
        case 0x1b11e8u: goto label_1b11e8;
        case 0x1b11ecu: goto label_1b11ec;
        case 0x1b11f0u: goto label_1b11f0;
        case 0x1b11f4u: goto label_1b11f4;
        case 0x1b11f8u: goto label_1b11f8;
        case 0x1b11fcu: goto label_1b11fc;
        case 0x1b1200u: goto label_1b1200;
        case 0x1b1204u: goto label_1b1204;
        case 0x1b1208u: goto label_1b1208;
        case 0x1b120cu: goto label_1b120c;
        case 0x1b1210u: goto label_1b1210;
        case 0x1b1214u: goto label_1b1214;
        case 0x1b1218u: goto label_1b1218;
        case 0x1b121cu: goto label_1b121c;
        case 0x1b1220u: goto label_1b1220;
        case 0x1b1224u: goto label_1b1224;
        case 0x1b1228u: goto label_1b1228;
        case 0x1b122cu: goto label_1b122c;
        case 0x1b1230u: goto label_1b1230;
        case 0x1b1234u: goto label_1b1234;
        case 0x1b1238u: goto label_1b1238;
        case 0x1b123cu: goto label_1b123c;
        case 0x1b1240u: goto label_1b1240;
        case 0x1b1244u: goto label_1b1244;
        case 0x1b1248u: goto label_1b1248;
        case 0x1b124cu: goto label_1b124c;
        case 0x1b1250u: goto label_1b1250;
        case 0x1b1254u: goto label_1b1254;
        case 0x1b1258u: goto label_1b1258;
        case 0x1b125cu: goto label_1b125c;
        case 0x1b1260u: goto label_1b1260;
        case 0x1b1264u: goto label_1b1264;
        case 0x1b1268u: goto label_1b1268;
        case 0x1b126cu: goto label_1b126c;
        case 0x1b1270u: goto label_1b1270;
        case 0x1b1274u: goto label_1b1274;
        case 0x1b1278u: goto label_1b1278;
        case 0x1b127cu: goto label_1b127c;
        case 0x1b1280u: goto label_1b1280;
        case 0x1b1284u: goto label_1b1284;
        case 0x1b1288u: goto label_1b1288;
        case 0x1b128cu: goto label_1b128c;
        case 0x1b1290u: goto label_1b1290;
        case 0x1b1294u: goto label_1b1294;
        case 0x1b1298u: goto label_1b1298;
        case 0x1b129cu: goto label_1b129c;
        case 0x1b12a0u: goto label_1b12a0;
        case 0x1b12a4u: goto label_1b12a4;
        case 0x1b12a8u: goto label_1b12a8;
        case 0x1b12acu: goto label_1b12ac;
        case 0x1b12b0u: goto label_1b12b0;
        case 0x1b12b4u: goto label_1b12b4;
        case 0x1b12b8u: goto label_1b12b8;
        case 0x1b12bcu: goto label_1b12bc;
        case 0x1b12c0u: goto label_1b12c0;
        case 0x1b12c4u: goto label_1b12c4;
        case 0x1b12c8u: goto label_1b12c8;
        case 0x1b12ccu: goto label_1b12cc;
        case 0x1b12d0u: goto label_1b12d0;
        case 0x1b12d4u: goto label_1b12d4;
        case 0x1b12d8u: goto label_1b12d8;
        case 0x1b12dcu: goto label_1b12dc;
        case 0x1b12e0u: goto label_1b12e0;
        case 0x1b12e4u: goto label_1b12e4;
        case 0x1b12e8u: goto label_1b12e8;
        case 0x1b12ecu: goto label_1b12ec;
        case 0x1b12f0u: goto label_1b12f0;
        case 0x1b12f4u: goto label_1b12f4;
        case 0x1b12f8u: goto label_1b12f8;
        case 0x1b12fcu: goto label_1b12fc;
        case 0x1b1300u: goto label_1b1300;
        case 0x1b1304u: goto label_1b1304;
        case 0x1b1308u: goto label_1b1308;
        case 0x1b130cu: goto label_1b130c;
        case 0x1b1310u: goto label_1b1310;
        case 0x1b1314u: goto label_1b1314;
        case 0x1b1318u: goto label_1b1318;
        case 0x1b131cu: goto label_1b131c;
        case 0x1b1320u: goto label_1b1320;
        case 0x1b1324u: goto label_1b1324;
        case 0x1b1328u: goto label_1b1328;
        case 0x1b132cu: goto label_1b132c;
        case 0x1b1330u: goto label_1b1330;
        case 0x1b1334u: goto label_1b1334;
        case 0x1b1338u: goto label_1b1338;
        case 0x1b133cu: goto label_1b133c;
        case 0x1b1340u: goto label_1b1340;
        case 0x1b1344u: goto label_1b1344;
        case 0x1b1348u: goto label_1b1348;
        case 0x1b134cu: goto label_1b134c;
        case 0x1b1350u: goto label_1b1350;
        case 0x1b1354u: goto label_1b1354;
        case 0x1b1358u: goto label_1b1358;
        case 0x1b135cu: goto label_1b135c;
        case 0x1b1360u: goto label_1b1360;
        case 0x1b1364u: goto label_1b1364;
        case 0x1b1368u: goto label_1b1368;
        case 0x1b136cu: goto label_1b136c;
        case 0x1b1370u: goto label_1b1370;
        case 0x1b1374u: goto label_1b1374;
        case 0x1b1378u: goto label_1b1378;
        case 0x1b137cu: goto label_1b137c;
        case 0x1b1380u: goto label_1b1380;
        case 0x1b1384u: goto label_1b1384;
        case 0x1b1388u: goto label_1b1388;
        case 0x1b138cu: goto label_1b138c;
        case 0x1b1390u: goto label_1b1390;
        case 0x1b1394u: goto label_1b1394;
        case 0x1b1398u: goto label_1b1398;
        case 0x1b139cu: goto label_1b139c;
        case 0x1b13a0u: goto label_1b13a0;
        case 0x1b13a4u: goto label_1b13a4;
        case 0x1b13a8u: goto label_1b13a8;
        case 0x1b13acu: goto label_1b13ac;
        case 0x1b13b0u: goto label_1b13b0;
        case 0x1b13b4u: goto label_1b13b4;
        case 0x1b13b8u: goto label_1b13b8;
        case 0x1b13bcu: goto label_1b13bc;
        case 0x1b13c0u: goto label_1b13c0;
        case 0x1b13c4u: goto label_1b13c4;
        case 0x1b13c8u: goto label_1b13c8;
        case 0x1b13ccu: goto label_1b13cc;
        case 0x1b13d0u: goto label_1b13d0;
        case 0x1b13d4u: goto label_1b13d4;
        case 0x1b13d8u: goto label_1b13d8;
        case 0x1b13dcu: goto label_1b13dc;
        case 0x1b13e0u: goto label_1b13e0;
        case 0x1b13e4u: goto label_1b13e4;
        case 0x1b13e8u: goto label_1b13e8;
        case 0x1b13ecu: goto label_1b13ec;
        case 0x1b13f0u: goto label_1b13f0;
        case 0x1b13f4u: goto label_1b13f4;
        case 0x1b13f8u: goto label_1b13f8;
        case 0x1b13fcu: goto label_1b13fc;
        case 0x1b1400u: goto label_1b1400;
        case 0x1b1404u: goto label_1b1404;
        case 0x1b1408u: goto label_1b1408;
        case 0x1b140cu: goto label_1b140c;
        case 0x1b1410u: goto label_1b1410;
        case 0x1b1414u: goto label_1b1414;
        case 0x1b1418u: goto label_1b1418;
        case 0x1b141cu: goto label_1b141c;
        case 0x1b1420u: goto label_1b1420;
        case 0x1b1424u: goto label_1b1424;
        case 0x1b1428u: goto label_1b1428;
        case 0x1b142cu: goto label_1b142c;
        case 0x1b1430u: goto label_1b1430;
        case 0x1b1434u: goto label_1b1434;
        case 0x1b1438u: goto label_1b1438;
        case 0x1b143cu: goto label_1b143c;
        case 0x1b1440u: goto label_1b1440;
        case 0x1b1444u: goto label_1b1444;
        case 0x1b1448u: goto label_1b1448;
        case 0x1b144cu: goto label_1b144c;
        case 0x1b1450u: goto label_1b1450;
        case 0x1b1454u: goto label_1b1454;
        case 0x1b1458u: goto label_1b1458;
        case 0x1b145cu: goto label_1b145c;
        case 0x1b1460u: goto label_1b1460;
        case 0x1b1464u: goto label_1b1464;
        case 0x1b1468u: goto label_1b1468;
        case 0x1b146cu: goto label_1b146c;
        case 0x1b1470u: goto label_1b1470;
        case 0x1b1474u: goto label_1b1474;
        case 0x1b1478u: goto label_1b1478;
        case 0x1b147cu: goto label_1b147c;
        case 0x1b1480u: goto label_1b1480;
        case 0x1b1484u: goto label_1b1484;
        case 0x1b1488u: goto label_1b1488;
        case 0x1b148cu: goto label_1b148c;
        case 0x1b1490u: goto label_1b1490;
        case 0x1b1494u: goto label_1b1494;
        case 0x1b1498u: goto label_1b1498;
        case 0x1b149cu: goto label_1b149c;
        case 0x1b14a0u: goto label_1b14a0;
        case 0x1b14a4u: goto label_1b14a4;
        case 0x1b14a8u: goto label_1b14a8;
        case 0x1b14acu: goto label_1b14ac;
        case 0x1b14b0u: goto label_1b14b0;
        case 0x1b14b4u: goto label_1b14b4;
        case 0x1b14b8u: goto label_1b14b8;
        case 0x1b14bcu: goto label_1b14bc;
        case 0x1b14c0u: goto label_1b14c0;
        case 0x1b14c4u: goto label_1b14c4;
        case 0x1b14c8u: goto label_1b14c8;
        case 0x1b14ccu: goto label_1b14cc;
        case 0x1b14d0u: goto label_1b14d0;
        case 0x1b14d4u: goto label_1b14d4;
        case 0x1b14d8u: goto label_1b14d8;
        case 0x1b14dcu: goto label_1b14dc;
        case 0x1b14e0u: goto label_1b14e0;
        case 0x1b14e4u: goto label_1b14e4;
        case 0x1b14e8u: goto label_1b14e8;
        case 0x1b14ecu: goto label_1b14ec;
        case 0x1b14f0u: goto label_1b14f0;
        case 0x1b14f4u: goto label_1b14f4;
        case 0x1b14f8u: goto label_1b14f8;
        case 0x1b14fcu: goto label_1b14fc;
        case 0x1b1500u: goto label_1b1500;
        case 0x1b1504u: goto label_1b1504;
        case 0x1b1508u: goto label_1b1508;
        case 0x1b150cu: goto label_1b150c;
        case 0x1b1510u: goto label_1b1510;
        case 0x1b1514u: goto label_1b1514;
        case 0x1b1518u: goto label_1b1518;
        case 0x1b151cu: goto label_1b151c;
        case 0x1b1520u: goto label_1b1520;
        case 0x1b1524u: goto label_1b1524;
        case 0x1b1528u: goto label_1b1528;
        case 0x1b152cu: goto label_1b152c;
        case 0x1b1530u: goto label_1b1530;
        case 0x1b1534u: goto label_1b1534;
        case 0x1b1538u: goto label_1b1538;
        case 0x1b153cu: goto label_1b153c;
        case 0x1b1540u: goto label_1b1540;
        case 0x1b1544u: goto label_1b1544;
        case 0x1b1548u: goto label_1b1548;
        case 0x1b154cu: goto label_1b154c;
        case 0x1b1550u: goto label_1b1550;
        case 0x1b1554u: goto label_1b1554;
        case 0x1b1558u: goto label_1b1558;
        case 0x1b155cu: goto label_1b155c;
        case 0x1b1560u: goto label_1b1560;
        case 0x1b1564u: goto label_1b1564;
        case 0x1b1568u: goto label_1b1568;
        case 0x1b156cu: goto label_1b156c;
        case 0x1b1570u: goto label_1b1570;
        case 0x1b1574u: goto label_1b1574;
        default: return;
    }

label_1b0da8:
    // 0x1b0da8: 0x8c657290  lw          $a1, 0x7290($v1)
    ctx->pc = 0x1b0da8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 29328)));
label_1b0dac:
    // 0x1b0dac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b0dacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1b0db0:
    // 0x1b0db0: 0x18a00004  blez        $a1, . + 4 + (0x4 << 2)
label_1b0db4:
    if (ctx->pc == 0x1B0DB4u) {
        ctx->pc = 0x1B0DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0DB0u;
        // 0x1b0db4: 0xac828cf0  sw          $v0, -0x7310($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294937840), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0DB8u;
        goto label_1b0db8;
    }
    ctx->pc = 0x1B0DB0u;
    {
        const bool branch_taken_0x1b0db0 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x1B0DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0DB0u;
        // 0x1b0db4: 0xac828cf0  sw          $v0, -0x7310($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294937840), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0db0) {
            ctx->pc = 0x1B0DC4u;
            goto label_1b0dc4;
        }
    }
    ctx->pc = 0x1B0DB8u;
label_1b0db8:
    // 0x1b0db8: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x1b0db8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
label_1b0dbc:
    // 0x1b0dbc: 0xc069a30  jal         func_1A68C0
label_1b0dc0:
    if (ctx->pc == 0x1B0DC0u) {
        ctx->pc = 0x1B0DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0DBCu;
        // 0x1b0dc0: 0x2484ac28  addiu       $a0, $a0, -0x53D8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945832));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0DC4u;
        goto label_1b0dc4;
    }
    ctx->pc = 0x1B0DBCu;
    SET_GPR_U32(ctx, 31, 0x1B0DC4u);
    ctx->pc = 0x1B0DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0DBCu;
    // 0x1b0dc0: 0x2484ac28  addiu       $a0, $a0, -0x53D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A68C0u;
    { ctx->pc = 0x1a68c0; return; }
    ctx->pc = 0x1B0DC4u;
label_1b0dc4:
    // 0x1b0dc4: 0x3c080037  lui         $t0, 0x37
    ctx->pc = 0x1b0dc4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)55 << 16));
label_1b0dc8:
    // 0x1b0dc8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b0dc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b0dcc:
    // 0x1b0dcc: 0x250861d8  addiu       $t0, $t0, 0x61D8
    ctx->pc = 0x1b0dccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 25048));
label_1b0dd0:
    // 0x1b0dd0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b0dd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b0dd4:
    // 0x1b0dd4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b0dd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b0dd8:
    // 0x1b0dd8: 0xc06c38e  jal         func_1B0E38
label_1b0ddc:
    if (ctx->pc == 0x1B0DDCu) {
        ctx->pc = 0x1B0DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0DD8u;
        // 0x1b0ddc: 0x24070008  addiu       $a3, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0DE0u;
        goto label_1b0de0;
    }
    ctx->pc = 0x1B0DD8u;
    SET_GPR_U32(ctx, 31, 0x1B0DE0u);
    ctx->pc = 0x1B0DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0DD8u;
    // 0x1b0ddc: 0x24070008  addiu       $a3, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0E38u;
    goto label_1b0e38;
    ctx->pc = 0x1B0DE0u;
label_1b0de0:
    // 0x1b0de0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b0de0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b0de4:
    // 0x1b0de4: 0x3e00008  jr          $ra
label_1b0de8:
    if (ctx->pc == 0x1B0DE8u) {
        ctx->pc = 0x1B0DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0DE4u;
        // 0x1b0de8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0DECu;
        goto label_1b0dec;
    }
    ctx->pc = 0x1B0DE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B0DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0DE4u;
        // 0x1b0de8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B0DE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B0DECu;
label_1b0dec:
    // 0x1b0dec: 0x0  nop
    ctx->pc = 0x1b0decu;
    // NOP
label_1b0df0:
    // 0x1b0df0: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1b0df0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_1b0df4:
    // 0x1b0df4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b0df4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1b0df8:
    // 0x1b0df8: 0x8c437290  lw          $v1, 0x7290($v0)
    ctx->pc = 0x1b0df8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29328)));
label_1b0dfc:
    // 0x1b0dfc: 0x18600004  blez        $v1, . + 4 + (0x4 << 2)
label_1b0e00:
    if (ctx->pc == 0x1B0E00u) {
        ctx->pc = 0x1B0E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0DFCu;
        // 0x1b0e00: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0E04u;
        goto label_1b0e04;
    }
    ctx->pc = 0x1B0DFCu;
    {
        const bool branch_taken_0x1b0dfc = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1B0E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0DFCu;
        // 0x1b0e00: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0dfc) {
            ctx->pc = 0x1B0E10u;
            goto label_1b0e10;
        }
    }
    ctx->pc = 0x1B0E04u;
label_1b0e04:
    // 0x1b0e04: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x1b0e04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
label_1b0e08:
    // 0x1b0e08: 0xc069a30  jal         func_1A68C0
label_1b0e0c:
    if (ctx->pc == 0x1B0E0Cu) {
        ctx->pc = 0x1B0E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0E08u;
        // 0x1b0e0c: 0x2484ac40  addiu       $a0, $a0, -0x53C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945856));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0E10u;
        goto label_1b0e10;
    }
    ctx->pc = 0x1B0E08u;
    SET_GPR_U32(ctx, 31, 0x1B0E10u);
    ctx->pc = 0x1B0E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0E08u;
    // 0x1b0e0c: 0x2484ac40  addiu       $a0, $a0, -0x53C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A68C0u;
    { ctx->pc = 0x1a68c0; return; }
    ctx->pc = 0x1B0E10u;
label_1b0e10:
    // 0x1b0e10: 0x3c080037  lui         $t0, 0x37
    ctx->pc = 0x1b0e10u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)55 << 16));
label_1b0e14:
    // 0x1b0e14: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b0e14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b0e18:
    // 0x1b0e18: 0x250861d8  addiu       $t0, $t0, 0x61D8
    ctx->pc = 0x1b0e18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 25048));
label_1b0e1c:
    // 0x1b0e1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b0e1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b0e20:
    // 0x1b0e20: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b0e20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b0e24:
    // 0x1b0e24: 0xc06c38e  jal         func_1B0E38
label_1b0e28:
    if (ctx->pc == 0x1B0E28u) {
        ctx->pc = 0x1B0E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0E24u;
        // 0x1b0e28: 0x24070006  addiu       $a3, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0E2Cu;
        goto label_1b0e2c;
    }
    ctx->pc = 0x1B0E24u;
    SET_GPR_U32(ctx, 31, 0x1B0E2Cu);
    ctx->pc = 0x1B0E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0E24u;
    // 0x1b0e28: 0x24070006  addiu       $a3, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0E38u;
    goto label_1b0e38;
    ctx->pc = 0x1B0E2Cu;
label_1b0e2c:
    // 0x1b0e2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b0e2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b0e30:
    // 0x1b0e30: 0x3e00008  jr          $ra
label_1b0e34:
    if (ctx->pc == 0x1B0E34u) {
        ctx->pc = 0x1B0E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0E30u;
        // 0x1b0e34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0E38u;
        goto label_1b0e38;
    }
    ctx->pc = 0x1B0E30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B0E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0E30u;
        // 0x1b0e34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B0E30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B0E38u;
label_1b0e38:
    // 0x1b0e38: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1b0e38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_1b0e3c:
    // 0x1b0e3c: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x1b0e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
label_1b0e40:
    // 0x1b0e40: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x1b0e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
label_1b0e44:
    // 0x1b0e44: 0x3c170028  lui         $s7, 0x28
    ctx->pc = 0x1b0e44u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)40 << 16));
label_1b0e48:
    // 0x1b0e48: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1b0e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_1b0e4c:
    // 0x1b0e4c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1b0e4cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b0e50:
    // 0x1b0e50: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x1b0e50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_1b0e54:
    // 0x1b0e54: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1b0e54u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1b0e58:
    // 0x1b0e58: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1b0e58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_1b0e5c:
    // 0x1b0e5c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1b0e5cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1b0e60:
    // 0x1b0e60: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1b0e60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_1b0e64:
    // 0x1b0e64: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1b0e64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1b0e68:
    // 0x1b0e68: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1b0e68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1b0e6c:
    // 0x1b0e6c: 0x26f17380  addiu       $s1, $s7, 0x7380
    ctx->pc = 0x1b0e6cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 29568));
label_1b0e70:
    // 0x1b0e70: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1b0e70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_1b0e74:
    // 0x1b0e74: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x1b0e74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1b0e78:
    // 0x1b0e78: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x1b0e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
label_1b0e7c:
    // 0x1b0e7c: 0xc06be60  jal         func_1AF980
label_1b0e80:
    if (ctx->pc == 0x1B0E80u) {
        ctx->pc = 0x1B0E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0E7Cu;
        // 0x1b0e80: 0x2404000f  addiu       $a0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0E84u;
        goto label_1b0e84;
    }
    ctx->pc = 0x1B0E7Cu;
    SET_GPR_U32(ctx, 31, 0x1B0E84u);
    ctx->pc = 0x1B0E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0E7Cu;
    // 0x1b0e80: 0x2404000f  addiu       $a0, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF980u;
    { ctx->pc = 0x1af980; return; }
    ctx->pc = 0x1B0E84u;
label_1b0e84:
    // 0x1b0e84: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1b0e88:
    if (ctx->pc == 0x1B0E88u) {
        ctx->pc = 0x1B0E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0E84u;
        // 0x1b0e88: 0x3c160028  lui         $s6, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0E8Cu;
        goto label_1b0e8c;
    }
    ctx->pc = 0x1B0E84u;
    {
        const bool branch_taken_0x1b0e84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B0E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0E84u;
        // 0x1b0e88: 0x3c160028  lui         $s6, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0e84) {
            ctx->pc = 0x1B0E94u;
            goto label_1b0e94;
        }
    }
    ctx->pc = 0x1B0E8Cu;
label_1b0e8c:
    // 0x1b0e8c: 0x10000039  b           . + 4 + (0x39 << 2)
label_1b0e90:
    if (ctx->pc == 0x1B0E90u) {
        ctx->pc = 0x1B0E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0E8Cu;
        // 0x1b0e90: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0E94u;
        goto label_1b0e94;
    }
    ctx->pc = 0x1B0E8Cu;
    {
        const bool branch_taken_0x1b0e8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0E8Cu;
        // 0x1b0e90: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0e8c) {
            ctx->pc = 0x1B0F74u;
            goto label_1b0f74;
        }
    }
    ctx->pc = 0x1B0E94u;
label_1b0e94:
    // 0x1b0e94: 0x8ec47290  lw          $a0, 0x7290($s6)
    ctx->pc = 0x1b0e94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 29328)));
label_1b0e98:
    // 0x1b0e98: 0x58800006  blezl       $a0, . + 4 + (0x6 << 2)
label_1b0e9c:
    if (ctx->pc == 0x1B0E9Cu) {
        ctx->pc = 0x1B0E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0E98u;
        // 0x1b0e9c: 0xaef57380  sw          $s5, 0x7380($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 29568), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0EA0u;
        goto label_1b0ea0;
    }
    ctx->pc = 0x1B0E98u;
    {
        const bool branch_taken_0x1b0e98 = (GPR_S32(ctx, 4) <= 0);
        if (branch_taken_0x1b0e98) {
            ctx->pc = 0x1B0E9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B0E98u;
            // 0x1b0e9c: 0xaef57380  sw          $s5, 0x7380($s7) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 23), 29568), GPR_U32(ctx, 21));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B0EB4u;
            goto label_1b0eb4;
        }
    }
    ctx->pc = 0x1B0EA0u;
label_1b0ea0:
    // 0x1b0ea0: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x1b0ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
label_1b0ea4:
    // 0x1b0ea4: 0xc069a30  jal         func_1A68C0
label_1b0ea8:
    if (ctx->pc == 0x1B0EA8u) {
        ctx->pc = 0x1B0EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0EA4u;
        // 0x1b0ea8: 0x2484ac58  addiu       $a0, $a0, -0x53A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945880));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0EACu;
        goto label_1b0eac;
    }
    ctx->pc = 0x1B0EA4u;
    SET_GPR_U32(ctx, 31, 0x1B0EACu);
    ctx->pc = 0x1B0EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0EA4u;
    // 0x1b0ea8: 0x2484ac58  addiu       $a0, $a0, -0x53A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A68C0u;
    { ctx->pc = 0x1a68c0; return; }
    ctx->pc = 0x1B0EACu;
label_1b0eac:
    // 0x1b0eac: 0x8ec47290  lw          $a0, 0x7290($s6)
    ctx->pc = 0x1b0eacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 29328)));
label_1b0eb0:
    // 0x1b0eb0: 0xaef57380  sw          $s5, 0x7380($s7)
    ctx->pc = 0x1b0eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 29568), GPR_U32(ctx, 21));
label_1b0eb4:
    // 0x1b0eb4: 0xae320004  sw          $s2, 0x4($s1)
    ctx->pc = 0x1b0eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 18));
label_1b0eb8:
    // 0x1b0eb8: 0xae330008  sw          $s3, 0x8($s1)
    ctx->pc = 0x1b0eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 19));
label_1b0ebc:
    // 0x1b0ebc: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_1b0ec0:
    if (ctx->pc == 0x1B0EC0u) {
        ctx->pc = 0x1B0EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0EBCu;
        // 0x1b0ec0: 0xae34000c  sw          $s4, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0EC4u;
        goto label_1b0ec4;
    }
    ctx->pc = 0x1B0EBCu;
    {
        const bool branch_taken_0x1b0ebc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0EBCu;
        // 0x1b0ec0: 0xae34000c  sw          $s4, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0ebc) {
            ctx->pc = 0x1B0EDCu;
            goto label_1b0edc;
        }
    }
    ctx->pc = 0x1B0EC4u;
label_1b0ec4:
    // 0x1b0ec4: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1b0ec4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1b0ec8:
    // 0x1b0ec8: 0xa2220010  sb          $v0, 0x10($s1)
    ctx->pc = 0x1b0ec8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 16), (uint8_t)GPR_U32(ctx, 2));
label_1b0ecc:
    // 0x1b0ecc: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x1b0eccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_1b0ed0:
    // 0x1b0ed0: 0xa2230011  sb          $v1, 0x11($s1)
    ctx->pc = 0x1b0ed0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 17), (uint8_t)GPR_U32(ctx, 3));
label_1b0ed4:
    // 0x1b0ed4: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x1b0ed4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_1b0ed8:
    // 0x1b0ed8: 0xa2220012  sb          $v0, 0x12($s1)
    ctx->pc = 0x1b0ed8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 18), (uint8_t)GPR_U32(ctx, 2));
label_1b0edc:
    // 0x1b0edc: 0x18800003  blez        $a0, . + 4 + (0x3 << 2)
label_1b0ee0:
    if (ctx->pc == 0x1B0EE0u) {
        ctx->pc = 0x1B0EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0EDCu;
        // 0x1b0ee0: 0x3c04002d  lui         $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0EE4u;
        goto label_1b0ee4;
    }
    ctx->pc = 0x1B0EDCu;
    {
        const bool branch_taken_0x1b0edc = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1B0EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0EDCu;
        // 0x1b0ee0: 0x3c04002d  lui         $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0edc) {
            ctx->pc = 0x1B0EECu;
            goto label_1b0eec;
        }
    }
    ctx->pc = 0x1B0EE4u;
label_1b0ee4:
    // 0x1b0ee4: 0xc069a30  jal         func_1A68C0
label_1b0ee8:
    if (ctx->pc == 0x1B0EE8u) {
        ctx->pc = 0x1B0EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0EE4u;
        // 0x1b0ee8: 0x2484ac70  addiu       $a0, $a0, -0x5390 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945904));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0EECu;
        goto label_1b0eec;
    }
    ctx->pc = 0x1B0EE4u;
    SET_GPR_U32(ctx, 31, 0x1B0EECu);
    ctx->pc = 0x1B0EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0EE4u;
    // 0x1b0ee8: 0x2484ac70  addiu       $a0, $a0, -0x5390 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A68C0u;
    { ctx->pc = 0x1a68c0; return; }
    ctx->pc = 0x1B0EECu;
label_1b0eec:
    // 0x1b0eec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b0eecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b0ef0:
    // 0x1b0ef0: 0xc069bee  jal         func_1A6FB8
label_1b0ef4:
    if (ctx->pc == 0x1B0EF4u) {
        ctx->pc = 0x1B0EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0EF0u;
        // 0x1b0ef4: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0EF8u;
        goto label_1b0ef8;
    }
    ctx->pc = 0x1B0EF0u;
    SET_GPR_U32(ctx, 31, 0x1B0EF8u);
    ctx->pc = 0x1B0EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0EF0u;
    // 0x1b0ef4: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6FB8u;
    { ctx->pc = 0x1a6fb8; return; }
    ctx->pc = 0x1B0EF8u;
label_1b0ef8:
    // 0x1b0ef8: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1b0ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_1b0efc:
    // 0x1b0efc: 0x3c040029  lui         $a0, 0x29
    ctx->pc = 0x1b0efcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)41 << 16));
label_1b0f00:
    // 0x1b0f00: 0x24507300  addiu       $s0, $v0, 0x7300
    ctx->pc = 0x1b0f00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 29440));
label_1b0f04:
    // 0x1b0f04: 0x24848450  addiu       $a0, $a0, -0x7BB0
    ctx->pc = 0x1b0f04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935632));
label_1b0f08:
    // 0x1b0f08: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1b0f08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b0f0c:
    // 0x1b0f0c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b0f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1b0f10:
    // 0x1b0f10: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1b0f10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1b0f14:
    // 0x1b0f14: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b0f14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b0f18:
    // 0x1b0f18: 0x24080014  addiu       $t0, $zero, 0x14
    ctx->pc = 0x1b0f18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1b0f1c:
    // 0x1b0f1c: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1b0f1cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b0f20:
    // 0x1b0f20: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1b0f20u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1b0f24:
    // 0x1b0f24: 0xc069e2a  jal         func_1A78A8
label_1b0f28:
    if (ctx->pc == 0x1B0F28u) {
        ctx->pc = 0x1B0F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0F24u;
        // 0x1b0f28: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0F2Cu;
        goto label_1b0f2c;
    }
    ctx->pc = 0x1B0F24u;
    SET_GPR_U32(ctx, 31, 0x1B0F2Cu);
    ctx->pc = 0x1B0F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0F24u;
    // 0x1b0f28: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    { ctx->pc = 0x1a78a8; return; }
    ctx->pc = 0x1B0F2Cu;
label_1b0f2c:
    // 0x1b0f2c: 0x4430006  bgezl       $v0, . + 4 + (0x6 << 2)
label_1b0f30:
    if (ctx->pc == 0x1B0F30u) {
        ctx->pc = 0x1B0F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0F2Cu;
        // 0x1b0f30: 0x8ec27290  lw          $v0, 0x7290($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 29328)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0F34u;
        goto label_1b0f34;
    }
    ctx->pc = 0x1B0F2Cu;
    {
        const bool branch_taken_0x1b0f2c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1b0f2c) {
            ctx->pc = 0x1B0F30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B0F2Cu;
            // 0x1b0f30: 0x8ec27290  lw          $v0, 0x7290($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 29328)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B0F48u;
            goto label_1b0f48;
        }
    }
    ctx->pc = 0x1B0F34u;
label_1b0f34:
    // 0x1b0f34: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1b0f34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_1b0f38:
    // 0x1b0f38: 0xc069210  jal         func_1A4840
label_1b0f3c:
    if (ctx->pc == 0x1B0F3Cu) {
        ctx->pc = 0x1B0F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0F38u;
        // 0x1b0f3c: 0x8c4472a8  lw          $a0, 0x72A8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29352)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0F40u;
        goto label_1b0f40;
    }
    ctx->pc = 0x1B0F38u;
    SET_GPR_U32(ctx, 31, 0x1B0F40u);
    ctx->pc = 0x1B0F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0F38u;
    // 0x1b0f3c: 0x8c4472a8  lw          $a0, 0x72A8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29352)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x1B0F40u;
label_1b0f40:
    // 0x1b0f40: 0x1000000c  b           . + 4 + (0xC << 2)
label_1b0f44:
    if (ctx->pc == 0x1B0F44u) {
        ctx->pc = 0x1B0F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0F40u;
        // 0x1b0f44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0F48u;
        goto label_1b0f48;
    }
    ctx->pc = 0x1B0F40u;
    {
        const bool branch_taken_0x1b0f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0F40u;
        // 0x1b0f44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0f40) {
            ctx->pc = 0x1B0F74u;
            goto label_1b0f74;
        }
    }
    ctx->pc = 0x1B0F48u;
label_1b0f48:
    // 0x1b0f48: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_1b0f4c:
    if (ctx->pc == 0x1B0F4Cu) {
        ctx->pc = 0x1B0F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0F48u;
        // 0x1b0f4c: 0x3c04002d  lui         $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0F50u;
        goto label_1b0f50;
    }
    ctx->pc = 0x1B0F48u;
    {
        const bool branch_taken_0x1b0f48 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1B0F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0F48u;
        // 0x1b0f4c: 0x3c04002d  lui         $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0f48) {
            ctx->pc = 0x1B0F58u;
            goto label_1b0f58;
        }
    }
    ctx->pc = 0x1B0F50u;
label_1b0f50:
    // 0x1b0f50: 0xc069a30  jal         func_1A68C0
label_1b0f54:
    if (ctx->pc == 0x1B0F54u) {
        ctx->pc = 0x1B0F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0F50u;
        // 0x1b0f54: 0x2484ac88  addiu       $a0, $a0, -0x5378 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945928));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0F58u;
        goto label_1b0f58;
    }
    ctx->pc = 0x1B0F50u;
    SET_GPR_U32(ctx, 31, 0x1B0F58u);
    ctx->pc = 0x1B0F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0F50u;
    // 0x1b0f54: 0x2484ac88  addiu       $a0, $a0, -0x5378 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A68C0u;
    { ctx->pc = 0x1a68c0; return; }
    ctx->pc = 0x1B0F58u;
label_1b0f58:
    // 0x1b0f58: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x1b0f58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
label_1b0f5c:
    // 0x1b0f5c: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1b0f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
label_1b0f60:
    // 0x1b0f60: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x1b0f60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_1b0f64:
    // 0x1b0f64: 0x8c6472a8  lw          $a0, 0x72A8($v1)
    ctx->pc = 0x1b0f64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 29352)));
label_1b0f68:
    // 0x1b0f68: 0xc069210  jal         func_1A4840
label_1b0f6c:
    if (ctx->pc == 0x1B0F6Cu) {
        ctx->pc = 0x1B0F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0F68u;
        // 0x1b0f6c: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0F70u;
        goto label_1b0f70;
    }
    ctx->pc = 0x1B0F68u;
    SET_GPR_U32(ctx, 31, 0x1B0F70u);
    ctx->pc = 0x1B0F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0F68u;
    // 0x1b0f6c: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x1B0F70u;
label_1b0f70:
    // 0x1b0f70: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b0f70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b0f74:
    // 0x1b0f74: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1b0f74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1b0f78:
    // 0x1b0f78: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x1b0f78u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1b0f7c:
    // 0x1b0f7c: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x1b0f7cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1b0f80:
    // 0x1b0f80: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x1b0f80u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1b0f84:
    // 0x1b0f84: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1b0f84u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1b0f88:
    // 0x1b0f88: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x1b0f88u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1b0f8c:
    // 0x1b0f8c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1b0f8cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1b0f90:
    // 0x1b0f90: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1b0f90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1b0f94:
    // 0x1b0f94: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1b0f94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b0f98:
    // 0x1b0f98: 0x3e00008  jr          $ra
label_1b0f9c:
    if (ctx->pc == 0x1B0F9Cu) {
        ctx->pc = 0x1B0F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0F98u;
        // 0x1b0f9c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0FA0u;
        goto label_1b0fa0;
    }
    ctx->pc = 0x1B0F98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B0F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0F98u;
        // 0x1b0f9c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B0F98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B0FA0u;
label_1b0fa0:
    // 0x1b0fa0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1b0fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_1b0fa4:
    // 0x1b0fa4: 0xffb50080  sd          $s5, 0x80($sp)
    ctx->pc = 0x1b0fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 21));
label_1b0fa8:
    // 0x1b0fa8: 0x3c150029  lui         $s5, 0x29
    ctx->pc = 0x1b0fa8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)41 << 16));
label_1b0fac:
    // 0x1b0fac: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1b0facu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_1b0fb0:
    // 0x1b0fb0: 0x8ea28d0c  lw          $v0, -0x72F4($s5)
    ctx->pc = 0x1b0fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294937868)));
label_1b0fb4:
    // 0x1b0fb4: 0xffb60090  sd          $s6, 0x90($sp)
    ctx->pc = 0x1b0fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
label_1b0fb8:
    // 0x1b0fb8: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x1b0fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
label_1b0fbc:
    // 0x1b0fbc: 0xffb30060  sd          $s3, 0x60($sp)
    ctx->pc = 0x1b0fbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
label_1b0fc0:
    // 0x1b0fc0: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x1b0fc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
label_1b0fc4:
    // 0x1b0fc4: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x1b0fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
label_1b0fc8:
    // 0x1b0fc8: 0x4410008  bgez        $v0, . + 4 + (0x8 << 2)
label_1b0fcc:
    if (ctx->pc == 0x1B0FCCu) {
        ctx->pc = 0x1B0FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0FC8u;
        // 0x1b0fcc: 0xffb00030  sd          $s0, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0FD0u;
        goto label_1b0fd0;
    }
    ctx->pc = 0x1B0FC8u;
    {
        const bool branch_taken_0x1b0fc8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1B0FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0FC8u;
        // 0x1b0fcc: 0xffb00030  sd          $s0, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0fc8) {
            ctx->pc = 0x1B0FECu;
            goto label_1b0fec;
        }
    }
    ctx->pc = 0x1B0FD0u;
label_1b0fd0:
    // 0x1b0fd0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b0fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b0fd4:
    // 0x1b0fd4: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x1b0fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
label_1b0fd8:
    // 0x1b0fd8: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1b0fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_1b0fdc:
    // 0x1b0fdc: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1b0fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1b0fe0:
    // 0x1b0fe0: 0xc069208  jal         func_1A4820
label_1b0fe4:
    if (ctx->pc == 0x1B0FE4u) {
        ctx->pc = 0x1B0FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0FE0u;
        // 0x1b0fe4: 0xafa20018  sw          $v0, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0FE8u;
        goto label_1b0fe8;
    }
    ctx->pc = 0x1B0FE0u;
    SET_GPR_U32(ctx, 31, 0x1B0FE8u);
    ctx->pc = 0x1B0FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0FE0u;
    // 0x1b0fe4: 0xafa20018  sw          $v0, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4820u;
    { ctx->pc = 0x1a4820; return; }
    ctx->pc = 0x1B0FE8u;
label_1b0fe8:
    // 0x1b0fe8: 0xaea28d0c  sw          $v0, -0x72F4($s5)
    ctx->pc = 0x1b0fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4294937868), GPR_U32(ctx, 2));
label_1b0fec:
    // 0x1b0fec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b0fecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b0ff0:
    // 0x1b0ff0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b0ff0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b0ff4:
    // 0x1b0ff4: 0xc06c672  jal         func_1B19C8
label_1b0ff8:
    if (ctx->pc == 0x1B0FF8u) {
        ctx->pc = 0x1B0FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0FF4u;
        // 0x1b0ff8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0FFCu;
        goto label_1b0ffc;
    }
    ctx->pc = 0x1B0FF4u;
    SET_GPR_U32(ctx, 31, 0x1B0FFCu);
    ctx->pc = 0x1B0FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0FF4u;
    // 0x1b0ff8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B19C8u;
    { ctx->pc = 0x1b19c8; return; }
    ctx->pc = 0x1B0FFCu;
label_1b0ffc:
    // 0x1b0ffc: 0xc069218  jal         func_1A4860
label_1b1000:
    if (ctx->pc == 0x1B1000u) {
        ctx->pc = 0x1B1000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0FFCu;
        // 0x1b1000: 0x8ea48d0c  lw          $a0, -0x72F4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294937868)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1004u;
        goto label_1b1004;
    }
    ctx->pc = 0x1B0FFCu;
    SET_GPR_U32(ctx, 31, 0x1B1004u);
    ctx->pc = 0x1B1000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0FFCu;
    // 0x1b1000: 0x8ea48d0c  lw          $a0, -0x72F4($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294937868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4860u;
    { ctx->pc = 0x1a4860; return; }
    ctx->pc = 0x1B1004u;
label_1b1004:
    // 0x1b1004: 0xc069c1a  jal         func_1A7068
label_1b1008:
    if (ctx->pc == 0x1B1008u) {
        ctx->pc = 0x1B1008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1004u;
        // 0x1b1008: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B100Cu;
        goto label_1b100c;
    }
    ctx->pc = 0x1B1004u;
    SET_GPR_U32(ctx, 31, 0x1B100Cu);
    ctx->pc = 0x1B1008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1004u;
    // 0x1b1008: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7068u;
    { ctx->pc = 0x1a7068; return; }
    ctx->pc = 0x1B100Cu;
label_1b100c:
    // 0x1b100c: 0x3c100037  lui         $s0, 0x37
    ctx->pc = 0x1b100cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)55 << 16));
label_1b1010:
    // 0x1b1010: 0x3c160037  lui         $s6, 0x37
    ctx->pc = 0x1b1010u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)55 << 16));
label_1b1014:
    // 0x1b1014: 0x1000000b  b           . + 4 + (0xB << 2)
label_1b1018:
    if (ctx->pc == 0x1B1018u) {
        ctx->pc = 0x1B1018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1014u;
        // 0x1b1018: 0x3c140037  lui         $s4, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B101Cu;
        goto label_1b101c;
    }
    ctx->pc = 0x1B1014u;
    {
        const bool branch_taken_0x1b1014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1014u;
        // 0x1b1018: 0x3c140037  lui         $s4, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1014) {
            ctx->pc = 0x1B1044u;
            goto label_1b1044;
        }
    }
    ctx->pc = 0x1B101Cu;
label_1b101c:
    // 0x1b101c: 0x0  nop
    ctx->pc = 0x1b101cu;
    // NOP
label_1b1020:
    // 0x1b1020: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x1b1020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
label_1b1024:
    // 0x1b1024: 0x0  nop
    ctx->pc = 0x1b1024u;
    // NOP
label_1b1028:
    // 0x1b1028: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b1028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1b102c:
    // 0x1b102c: 0x0  nop
    ctx->pc = 0x1b102cu;
    // NOP
label_1b1030:
    // 0x1b1030: 0x0  nop
    ctx->pc = 0x1b1030u;
    // NOP
label_1b1034:
    // 0x1b1034: 0x0  nop
    ctx->pc = 0x1b1034u;
    // NOP
label_1b1038:
    // 0x1b1038: 0x0  nop
    ctx->pc = 0x1b1038u;
    // NOP
label_1b103c:
    // 0x1b103c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_1b1040:
    if (ctx->pc == 0x1B1040u) {
        ctx->pc = 0x1B1044u;
        goto label_1b1044;
    }
    ctx->pc = 0x1B103Cu;
    {
        const bool branch_taken_0x1b103c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b103c) {
            ctx->pc = 0x1B1028u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b1028;
        }
    }
    ctx->pc = 0x1B1044u;
label_1b1044:
    // 0x1b1044: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x1b1044u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
label_1b1048:
    // 0x1b1048: 0x26046200  addiu       $a0, $s0, 0x6200
    ctx->pc = 0x1b1048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 25088));
label_1b104c:
    // 0x1b104c: 0x34a50400  ori         $a1, $a1, 0x400
    ctx->pc = 0x1b104cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1024);
label_1b1050:
    // 0x1b1050: 0xc069db6  jal         func_1A76D8
label_1b1054:
    if (ctx->pc == 0x1B1054u) {
        ctx->pc = 0x1B1054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1050u;
        // 0x1b1054: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1058u;
        goto label_1b1058;
    }
    ctx->pc = 0x1B1050u;
    SET_GPR_U32(ctx, 31, 0x1B1058u);
    ctx->pc = 0x1B1054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1050u;
    // 0x1b1054: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A76D8u;
    { ctx->pc = 0x1a76d8; return; }
    ctx->pc = 0x1B1058u;
label_1b1058:
    // 0x1b1058: 0x441000c  bgez        $v0, . + 4 + (0xC << 2)
label_1b105c:
    if (ctx->pc == 0x1B105Cu) {
        ctx->pc = 0x1B105Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1058u;
        // 0x1b105c: 0x26126200  addiu       $s2, $s0, 0x6200 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 25088));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1060u;
        goto label_1b1060;
    }
    ctx->pc = 0x1B1058u;
    {
        const bool branch_taken_0x1b1058 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1B105Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1058u;
        // 0x1b105c: 0x26126200  addiu       $s2, $s0, 0x6200 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 25088));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1058) {
            ctx->pc = 0x1B108Cu;
            goto label_1b108c;
        }
    }
    ctx->pc = 0x1B1060u;
label_1b1060:
    // 0x1b1060: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x1b1060u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
label_1b1064:
    // 0x1b1064: 0xc069a30  jal         func_1A68C0
label_1b1068:
    if (ctx->pc == 0x1B1068u) {
        ctx->pc = 0x1B1068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1064u;
        // 0x1b1068: 0x2484ac98  addiu       $a0, $a0, -0x5368 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945944));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B106Cu;
        goto label_1b106c;
    }
    ctx->pc = 0x1B1064u;
    SET_GPR_U32(ctx, 31, 0x1B106Cu);
    ctx->pc = 0x1B1068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1064u;
    // 0x1b1068: 0x2484ac98  addiu       $a0, $a0, -0x5368 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A68C0u;
    { ctx->pc = 0x1a68c0; return; }
    ctx->pc = 0x1B106Cu;
label_1b106c:
    // 0x1b106c: 0x0  nop
    ctx->pc = 0x1b106cu;
    // NOP
label_1b1070:
    // 0x1b1070: 0x0  nop
    ctx->pc = 0x1b1070u;
    // NOP
label_1b1074:
    // 0x1b1074: 0x0  nop
    ctx->pc = 0x1b1074u;
    // NOP
label_1b1078:
    // 0x1b1078: 0x0  nop
    ctx->pc = 0x1b1078u;
    // NOP
label_1b107c:
    // 0x1b107c: 0x0  nop
    ctx->pc = 0x1b107cu;
    // NOP
label_1b1080:
    // 0x1b1080: 0x0  nop
    ctx->pc = 0x1b1080u;
    // NOP
label_1b1084:
    // 0x1b1084: 0x1000fffa  b           . + 4 + (-0x6 << 2)
label_1b1088:
    if (ctx->pc == 0x1B1088u) {
        ctx->pc = 0x1B108Cu;
        goto label_1b108c;
    }
    ctx->pc = 0x1B1084u;
    {
        const bool branch_taken_0x1b1084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1084) {
            ctx->pc = 0x1B1070u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b1070;
        }
    }
    ctx->pc = 0x1B108Cu;
label_1b108c:
    // 0x1b108c: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x1b108cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_1b1090:
    // 0x1b1090: 0x1040ffe3  beqz        $v0, . + 4 + (-0x1D << 2)
label_1b1094:
    if (ctx->pc == 0x1B1094u) {
        ctx->pc = 0x1B1094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1090u;
        // 0x1b1094: 0x240982d  daddu       $s3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1098u;
        goto label_1b1098;
    }
    ctx->pc = 0x1B1090u;
    {
        const bool branch_taken_0x1b1090 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1090u;
        // 0x1b1094: 0x240982d  daddu       $s3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1090) {
            ctx->pc = 0x1B1020u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b1020;
        }
    }
    ctx->pc = 0x1B1098u;
label_1b1098:
    // 0x1b1098: 0x269177c0  addiu       $s1, $s4, 0x77C0
    ctx->pc = 0x1b1098u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 30656));
label_1b109c:
    // 0x1b109c: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1b109cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b10a0:
    // 0x1b10a0: 0x26c76280  addiu       $a3, $s6, 0x6280
    ctx->pc = 0x1b10a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), 25216));
label_1b10a4:
    // 0x1b10a4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b10a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1b10a8:
    // 0x1b10a8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1b10a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1b10ac:
    // 0x1b10ac: 0x240500fe  addiu       $a1, $zero, 0xFE
    ctx->pc = 0x1b10acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
label_1b10b0:
    // 0x1b10b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b10b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b10b4:
    // 0x1b10b4: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x1b10b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_1b10b8:
    // 0x1b10b8: 0x240a000c  addiu       $t2, $zero, 0xC
    ctx->pc = 0x1b10b8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1b10bc:
    // 0x1b10bc: 0xc069e2a  jal         func_1A78A8
label_1b10c0:
    if (ctx->pc == 0x1B10C0u) {
        ctx->pc = 0x1B10C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B10BCu;
        // 0x1b10c0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B10C4u;
        goto label_1b10c4;
    }
    ctx->pc = 0x1B10BCu;
    SET_GPR_U32(ctx, 31, 0x1B10C4u);
    ctx->pc = 0x1B10C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B10BCu;
    // 0x1b10c0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    { ctx->pc = 0x1a78a8; return; }
    ctx->pc = 0x1B10C4u;
label_1b10c4:
    // 0x1b10c4: 0x8ea48d0c  lw          $a0, -0x72F4($s5)
    ctx->pc = 0x1b10c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294937868)));
label_1b10c8:
    // 0x1b10c8: 0xc069210  jal         func_1A4840
label_1b10cc:
    if (ctx->pc == 0x1B10CCu) {
        ctx->pc = 0x1B10CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B10C8u;
        // 0x1b10cc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B10D0u;
        goto label_1b10d0;
    }
    ctx->pc = 0x1B10C8u;
    SET_GPR_U32(ctx, 31, 0x1B10D0u);
    ctx->pc = 0x1B10CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B10C8u;
    // 0x1b10cc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x1B10D0u;
label_1b10d0:
    // 0x1b10d0: 0x6030004  bgezl       $s0, . + 4 + (0x4 << 2)
label_1b10d4:
    if (ctx->pc == 0x1B10D4u) {
        ctx->pc = 0x1B10D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B10D0u;
        // 0x1b10d4: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B10D8u;
        goto label_1b10d8;
    }
    ctx->pc = 0x1B10D0u;
    {
        const bool branch_taken_0x1b10d0 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x1b10d0) {
            ctx->pc = 0x1B10D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B10D0u;
            // 0x1b10d4: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B10E4u;
            goto label_1b10e4;
        }
    }
    ctx->pc = 0x1B10D8u;
label_1b10d8:
    // 0x1b10d8: 0xae600024  sw          $zero, 0x24($s3)
    ctx->pc = 0x1b10d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 0));
label_1b10dc:
    // 0x1b10dc: 0x10000013  b           . + 4 + (0x13 << 2)
label_1b10e0:
    if (ctx->pc == 0x1B10E0u) {
        ctx->pc = 0x1B10E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B10DCu;
        // 0x1b10e0: 0x2602ff9c  addiu       $v0, $s0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967196));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B10E4u;
        goto label_1b10e4;
    }
    ctx->pc = 0x1B10DCu;
    {
        const bool branch_taken_0x1b10dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B10E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B10DCu;
        // 0x1b10e0: 0x2602ff9c  addiu       $v0, $s0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b10dc) {
            ctx->pc = 0x1B112Cu;
            goto label_1b112c;
        }
    }
    ctx->pc = 0x1B10E4u;
label_1b10e4:
    // 0x1b10e4: 0x2842020a  slti        $v0, $v0, 0x20A
    ctx->pc = 0x1b10e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)522) ? 1 : 0);
label_1b10e8:
    // 0x1b10e8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1b10ec:
    if (ctx->pc == 0x1B10ECu) {
        ctx->pc = 0x1B10ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B10E8u;
        // 0x1b10ec: 0x3c04002d  lui         $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B10F0u;
        goto label_1b10f0;
    }
    ctx->pc = 0x1B10E8u;
    {
        const bool branch_taken_0x1b10e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B10ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B10E8u;
        // 0x1b10ec: 0x3c04002d  lui         $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b10e8) {
            ctx->pc = 0x1B1104u;
            goto label_1b1104;
        }
    }
    ctx->pc = 0x1B10F0u;
label_1b10f0:
    // 0x1b10f0: 0xc069a30  jal         func_1A68C0
label_1b10f4:
    if (ctx->pc == 0x1B10F4u) {
        ctx->pc = 0x1B10F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B10F0u;
        // 0x1b10f4: 0x2484acb0  addiu       $a0, $a0, -0x5350 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945968));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B10F8u;
        goto label_1b10f8;
    }
    ctx->pc = 0x1B10F0u;
    SET_GPR_U32(ctx, 31, 0x1B10F8u);
    ctx->pc = 0x1B10F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B10F0u;
    // 0x1b10f4: 0x2484acb0  addiu       $a0, $a0, -0x5350 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A68C0u;
    { ctx->pc = 0x1a68c0; return; }
    ctx->pc = 0x1B10F8u;
label_1b10f8:
    // 0x1b10f8: 0xae600024  sw          $zero, 0x24($s3)
    ctx->pc = 0x1b10f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 0));
label_1b10fc:
    // 0x1b10fc: 0x1000000b  b           . + 4 + (0xB << 2)
label_1b1100:
    if (ctx->pc == 0x1B1100u) {
        ctx->pc = 0x1B1100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B10FCu;
        // 0x1b1100: 0x2402ff88  addiu       $v0, $zero, -0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1104u;
        goto label_1b1104;
    }
    ctx->pc = 0x1B10FCu;
    {
        const bool branch_taken_0x1b10fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B10FCu;
        // 0x1b1100: 0x2402ff88  addiu       $v0, $zero, -0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b10fc) {
            ctx->pc = 0x1B112Cu;
            goto label_1b112c;
        }
    }
    ctx->pc = 0x1B1104u;
label_1b1104:
    // 0x1b1104: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1b1104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1b1108:
    // 0x1b1108: 0x2842020e  slti        $v0, $v0, 0x20E
    ctx->pc = 0x1b1108u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)526) ? 1 : 0);
label_1b110c:
    // 0x1b110c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1b1110:
    if (ctx->pc == 0x1B1110u) {
        ctx->pc = 0x1B1110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B110Cu;
        // 0x1b1110: 0x3c04002d  lui         $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1114u;
        goto label_1b1114;
    }
    ctx->pc = 0x1B110Cu;
    {
        const bool branch_taken_0x1b110c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B110Cu;
        // 0x1b1110: 0x3c04002d  lui         $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b110c) {
            ctx->pc = 0x1B1128u;
            goto label_1b1128;
        }
    }
    ctx->pc = 0x1B1114u;
label_1b1114:
    // 0x1b1114: 0xc069a30  jal         func_1A68C0
label_1b1118:
    if (ctx->pc == 0x1B1118u) {
        ctx->pc = 0x1B1118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1114u;
        // 0x1b1118: 0x2484acd8  addiu       $a0, $a0, -0x5328 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946008));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B111Cu;
        goto label_1b111c;
    }
    ctx->pc = 0x1B1114u;
    SET_GPR_U32(ctx, 31, 0x1B111Cu);
    ctx->pc = 0x1B1118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1114u;
    // 0x1b1118: 0x2484acd8  addiu       $a0, $a0, -0x5328 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A68C0u;
    { ctx->pc = 0x1a68c0; return; }
    ctx->pc = 0x1B111Cu;
label_1b111c:
    // 0x1b111c: 0xae400024  sw          $zero, 0x24($s2)
    ctx->pc = 0x1b111cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 0));
label_1b1120:
    // 0x1b1120: 0x10000002  b           . + 4 + (0x2 << 2)
label_1b1124:
    if (ctx->pc == 0x1B1124u) {
        ctx->pc = 0x1B1124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1120u;
        // 0x1b1124: 0x2402ff87  addiu       $v0, $zero, -0x79 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967175));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1128u;
        goto label_1b1128;
    }
    ctx->pc = 0x1B1120u;
    {
        const bool branch_taken_0x1b1120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1120u;
        // 0x1b1124: 0x2402ff87  addiu       $v0, $zero, -0x79 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967175));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1120) {
            ctx->pc = 0x1B112Cu;
            goto label_1b112c;
        }
    }
    ctx->pc = 0x1B1128u;
label_1b1128:
    // 0x1b1128: 0x8e8277c0  lw          $v0, 0x77C0($s4)
    ctx->pc = 0x1b1128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 30656)));
label_1b112c:
    // 0x1b112c: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1b112cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_1b1130:
    // 0x1b1130: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x1b1130u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1b1134:
    // 0x1b1134: 0xdfb50080  ld          $s5, 0x80($sp)
    ctx->pc = 0x1b1134u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1b1138:
    // 0x1b1138: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x1b1138u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1b113c:
    // 0x1b113c: 0xdfb30060  ld          $s3, 0x60($sp)
    ctx->pc = 0x1b113cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1b1140:
    // 0x1b1140: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x1b1140u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1b1144:
    // 0x1b1144: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x1b1144u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1b1148:
    // 0x1b1148: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x1b1148u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1b114c:
    // 0x1b114c: 0x3e00008  jr          $ra
label_1b1150:
    if (ctx->pc == 0x1B1150u) {
        ctx->pc = 0x1B1150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B114Cu;
        // 0x1b1150: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1154u;
        goto label_1b1154;
    }
    ctx->pc = 0x1B114Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B1150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B114Cu;
        // 0x1b1150: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B114Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B1154u;
label_1b1154:
    // 0x1b1154: 0x0  nop
    ctx->pc = 0x1b1154u;
    // NOP
label_1b1158:
    // 0x1b1158: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b1158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1b115c:
    // 0x1b115c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b115cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1b1160:
    // 0x1b1160: 0x3c100029  lui         $s0, 0x29
    ctx->pc = 0x1b1160u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)41 << 16));
label_1b1164:
    // 0x1b1164: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b1164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1b1168:
    // 0x1b1168: 0x8e048d0c  lw          $a0, -0x72F4($s0)
    ctx->pc = 0x1b1168u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294937868)));
label_1b116c:
    // 0x1b116c: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
label_1b1170:
    if (ctx->pc == 0x1B1170u) {
        ctx->pc = 0x1B1170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B116Cu;
        // 0x1b1170: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1174u;
        goto label_1b1174;
    }
    ctx->pc = 0x1B116Cu;
    {
        const bool branch_taken_0x1b116c = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1B1170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B116Cu;
        // 0x1b1170: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b116c) {
            ctx->pc = 0x1B1188u;
            goto label_1b1188;
        }
    }
    ctx->pc = 0x1B1174u;
label_1b1174:
    // 0x1b1174: 0xc06920c  jal         func_1A4830
label_1b1178:
    if (ctx->pc == 0x1B1178u) {
        ctx->pc = 0x1B117Cu;
        goto label_1b117c;
    }
    ctx->pc = 0x1B1174u;
    SET_GPR_U32(ctx, 31, 0x1B117Cu);
    ctx->pc = 0x1A4830u;
    { ctx->pc = 0x1a4830; return; }
    ctx->pc = 0x1B117Cu;
label_1b117c:
    // 0x1b117c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1b117cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1b1180:
    // 0x1b1180: 0xae038d0c  sw          $v1, -0x72F4($s0)
    ctx->pc = 0x1b1180u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294937868), GPR_U32(ctx, 3));
label_1b1184:
    // 0x1b1184: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b1184u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b1188:
    // 0x1b1188: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b1188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b118c:
    // 0x1b118c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b118cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b1190:
    // 0x1b1190: 0x3e00008  jr          $ra
label_1b1194:
    if (ctx->pc == 0x1B1194u) {
        ctx->pc = 0x1B1194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1190u;
        // 0x1b1194: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1198u;
        goto label_1b1198;
    }
    ctx->pc = 0x1B1190u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B1194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1190u;
        // 0x1b1194: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1190u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B1198u;
label_1b1198:
    // 0x1b1198: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x1b1198u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
label_1b119c:
    // 0x1b119c: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x1b119cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_1b11a0:
    // 0x1b11a0: 0x24c677c0  addiu       $a2, $a2, 0x77C0
    ctx->pc = 0x1b11a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30656));
label_1b11a4:
    // 0x1b11a4: 0x24428d08  addiu       $v0, $v0, -0x72F8
    ctx->pc = 0x1b11a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937864));
label_1b11a8:
    // 0x1b11a8: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x1b11a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
label_1b11ac:
    // 0x1b11ac: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1b11acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_1b11b0:
    // 0x1b11b0: 0x3c040029  lui         $a0, 0x29
    ctx->pc = 0x1b11b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)41 << 16));
label_1b11b4:
    // 0x1b11b4: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b11b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1b11b8:
    // 0x1b11b8: 0x8c838d0c  lw          $v1, -0x72F4($a0)
    ctx->pc = 0x1b11b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294937868)));
label_1b11bc:
    // 0x1b11bc: 0x24426200  addiu       $v0, $v0, 0x6200
    ctx->pc = 0x1b11bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25088));
label_1b11c0:
    // 0x1b11c0: 0x3e00008  jr          $ra
label_1b11c4:
    if (ctx->pc == 0x1B11C4u) {
        ctx->pc = 0x1B11C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B11C0u;
        // 0x1b11c4: 0xacc3003c  sw          $v1, 0x3C($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 60), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B11C8u;
        goto label_1b11c8;
    }
    ctx->pc = 0x1B11C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B11C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B11C0u;
        // 0x1b11c4: 0xacc3003c  sw          $v1, 0x3C($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 60), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B11C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B11C8u;
label_1b11c8:
    // 0x1b11c8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1b11c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1b11cc:
    // 0x1b11cc: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1b11ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
label_1b11d0:
    // 0x1b11d0: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1b11d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_1b11d4:
    // 0x1b11d4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1b11d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1b11d8:
    // 0x1b11d8: 0x24716200  addiu       $s1, $v1, 0x6200
    ctx->pc = 0x1b11d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 25088));
label_1b11dc:
    // 0x1b11dc: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1b11dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1b11e0:
    // 0x1b11e0: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1b11e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_1b11e4:
    // 0x1b11e4: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1b11e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1b11e8:
    // 0x1b11e8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1b11ec:
    if (ctx->pc == 0x1B11ECu) {
        ctx->pc = 0x1B11ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B11E8u;
        // 0x1b11ec: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B11F0u;
        goto label_1b11f0;
    }
    ctx->pc = 0x1B11E8u;
    {
        const bool branch_taken_0x1b11e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B11ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B11E8u;
        // 0x1b11ec: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b11e8) {
            ctx->pc = 0x1B11F8u;
            goto label_1b11f8;
        }
    }
    ctx->pc = 0x1B11F0u;
label_1b11f0:
    // 0x1b11f0: 0x1000001d  b           . + 4 + (0x1D << 2)
label_1b11f4:
    if (ctx->pc == 0x1B11F4u) {
        ctx->pc = 0x1B11F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B11F0u;
        // 0x1b11f4: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B11F8u;
        goto label_1b11f8;
    }
    ctx->pc = 0x1B11F0u;
    {
        const bool branch_taken_0x1b11f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B11F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B11F0u;
        // 0x1b11f4: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b11f0) {
            ctx->pc = 0x1B1268u;
            goto label_1b1268;
        }
    }
    ctx->pc = 0x1B11F8u;
label_1b11f8:
    // 0x1b11f8: 0x3c120029  lui         $s2, 0x29
    ctx->pc = 0x1b11f8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)41 << 16));
label_1b11fc:
    // 0x1b11fc: 0xc06921c  jal         func_1A4870
label_1b1200:
    if (ctx->pc == 0x1B1200u) {
        ctx->pc = 0x1B1200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B11FCu;
        // 0x1b1200: 0x8e448d0c  lw          $a0, -0x72F4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294937868)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1204u;
        goto label_1b1204;
    }
    ctx->pc = 0x1B11FCu;
    SET_GPR_U32(ctx, 31, 0x1B1204u);
    ctx->pc = 0x1B1200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B11FCu;
    // 0x1b1200: 0x8e448d0c  lw          $a0, -0x72F4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294937868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4870u;
    { ctx->pc = 0x1a4870; return; }
    ctx->pc = 0x1B1204u;
label_1b1204:
    // 0x1b1204: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_1b1208:
    if (ctx->pc == 0x1B1208u) {
        ctx->pc = 0x1B1208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1204u;
        // 0x1b1208: 0x3c070037  lui         $a3, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B120Cu;
        goto label_1b120c;
    }
    ctx->pc = 0x1B1204u;
    {
        const bool branch_taken_0x1b1204 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1B1208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1204u;
        // 0x1b1208: 0x3c070037  lui         $a3, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1204) {
            ctx->pc = 0x1B1214u;
            goto label_1b1214;
        }
    }
    ctx->pc = 0x1B120Cu;
label_1b120c:
    // 0x1b120c: 0x10000016  b           . + 4 + (0x16 << 2)
label_1b1210:
    if (ctx->pc == 0x1B1210u) {
        ctx->pc = 0x1B1210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B120Cu;
        // 0x1b1210: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1214u;
        goto label_1b1214;
    }
    ctx->pc = 0x1B120Cu;
    {
        const bool branch_taken_0x1b120c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B120Cu;
        // 0x1b1210: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b120c) {
            ctx->pc = 0x1B1268u;
            goto label_1b1268;
        }
    }
    ctx->pc = 0x1B1214u;
label_1b1214:
    // 0x1b1214: 0x3c090037  lui         $t1, 0x37
    ctx->pc = 0x1b1214u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)55 << 16));
label_1b1218:
    // 0x1b1218: 0x24e76280  addiu       $a3, $a3, 0x6280
    ctx->pc = 0x1b1218u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 25216));
label_1b121c:
    // 0x1b121c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b121cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b1220:
    // 0x1b1220: 0xacf00014  sw          $s0, 0x14($a3)
    ctx->pc = 0x1b1220u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 16));
label_1b1224:
    // 0x1b1224: 0x252977c0  addiu       $t1, $t1, 0x77C0
    ctx->pc = 0x1b1224u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 30656));
label_1b1228:
    // 0x1b1228: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b1228u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1b122c:
    // 0x1b122c: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x1b122cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1b1230:
    // 0x1b1230: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b1230u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b1234:
    // 0x1b1234: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x1b1234u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_1b1238:
    // 0x1b1238: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1b1238u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1b123c:
    // 0x1b123c: 0xc069e2a  jal         func_1A78A8
label_1b1240:
    if (ctx->pc == 0x1B1240u) {
        ctx->pc = 0x1B1240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B123Cu;
        // 0x1b1240: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1244u;
        goto label_1b1244;
    }
    ctx->pc = 0x1B123Cu;
    SET_GPR_U32(ctx, 31, 0x1B1244u);
    ctx->pc = 0x1B1240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B123Cu;
    // 0x1b1240: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    { ctx->pc = 0x1a78a8; return; }
    ctx->pc = 0x1B1244u;
label_1b1244:
    // 0x1b1244: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b1244u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b1248:
    // 0x1b1248: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
label_1b124c:
    if (ctx->pc == 0x1B124Cu) {
        ctx->pc = 0x1B124Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1248u;
        // 0x1b124c: 0x3c030029  lui         $v1, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1250u;
        goto label_1b1250;
    }
    ctx->pc = 0x1B1248u;
    {
        const bool branch_taken_0x1b1248 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B124Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1248u;
        // 0x1b124c: 0x3c030029  lui         $v1, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1248) {
            ctx->pc = 0x1B125Cu;
            goto label_1b125c;
        }
    }
    ctx->pc = 0x1B1250u;
label_1b1250:
    // 0x1b1250: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1b1250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1b1254:
    // 0x1b1254: 0x10000003  b           . + 4 + (0x3 << 2)
label_1b1258:
    if (ctx->pc == 0x1B1258u) {
        ctx->pc = 0x1B1258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1254u;
        // 0x1b1258: 0xac628d08  sw          $v0, -0x72F8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294937864), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B125Cu;
        goto label_1b125c;
    }
    ctx->pc = 0x1B1254u;
    {
        const bool branch_taken_0x1b1254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1254u;
        // 0x1b1258: 0xac628d08  sw          $v0, -0x72F8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294937864), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1254) {
            ctx->pc = 0x1B1264u;
            goto label_1b1264;
        }
    }
    ctx->pc = 0x1B125Cu;
label_1b125c:
    // 0x1b125c: 0xc069210  jal         func_1A4840
label_1b1260:
    if (ctx->pc == 0x1B1260u) {
        ctx->pc = 0x1B1260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B125Cu;
        // 0x1b1260: 0x8e448d0c  lw          $a0, -0x72F4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294937868)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1264u;
        goto label_1b1264;
    }
    ctx->pc = 0x1B125Cu;
    SET_GPR_U32(ctx, 31, 0x1B1264u);
    ctx->pc = 0x1B1260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B125Cu;
    // 0x1b1260: 0x8e448d0c  lw          $a0, -0x72F4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294937868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x1B1264u;
label_1b1264:
    // 0x1b1264: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b1264u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b1268:
    // 0x1b1268: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1b1268u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1b126c:
    // 0x1b126c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1b126cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1b1270:
    // 0x1b1270: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1b1270u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1b1274:
    // 0x1b1274: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1b1274u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b1278:
    // 0x1b1278: 0x3e00008  jr          $ra
label_1b127c:
    if (ctx->pc == 0x1B127Cu) {
        ctx->pc = 0x1B127Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1278u;
        // 0x1b127c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1280u;
        goto label_1b1280;
    }
    ctx->pc = 0x1B1278u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B127Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1278u;
        // 0x1b127c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1278u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B1280u;
label_1b1280:
    // 0x1b1280: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1b1280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1b1284:
    // 0x1b1284: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1b1284u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
label_1b1288:
    // 0x1b1288: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1b1288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_1b128c:
    // 0x1b128c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1b128cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1b1290:
    // 0x1b1290: 0x24726200  addiu       $s2, $v1, 0x6200
    ctx->pc = 0x1b1290u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 25088));
label_1b1294:
    // 0x1b1294: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1b1294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1b1298:
    // 0x1b1298: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x1b1298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_1b129c:
    // 0x1b129c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1b129cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_1b12a0:
    // 0x1b12a0: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x1b12a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_1b12a4:
    // 0x1b12a4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1b12a8:
    if (ctx->pc == 0x1B12A8u) {
        ctx->pc = 0x1B12A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B12A4u;
        // 0x1b12a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B12ACu;
        goto label_1b12ac;
    }
    ctx->pc = 0x1B12A4u;
    {
        const bool branch_taken_0x1b12a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B12A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B12A4u;
        // 0x1b12a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b12a4) {
            ctx->pc = 0x1B12B4u;
            goto label_1b12b4;
        }
    }
    ctx->pc = 0x1B12ACu;
label_1b12ac:
    // 0x1b12ac: 0x1000001e  b           . + 4 + (0x1E << 2)
label_1b12b0:
    if (ctx->pc == 0x1B12B0u) {
        ctx->pc = 0x1B12B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B12ACu;
        // 0x1b12b0: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B12B4u;
        goto label_1b12b4;
    }
    ctx->pc = 0x1B12ACu;
    {
        const bool branch_taken_0x1b12ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B12B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B12ACu;
        // 0x1b12b0: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b12ac) {
            ctx->pc = 0x1B1328u;
            goto label_1b1328;
        }
    }
    ctx->pc = 0x1B12B4u;
label_1b12b4:
    // 0x1b12b4: 0x3c110029  lui         $s1, 0x29
    ctx->pc = 0x1b12b4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)41 << 16));
label_1b12b8:
    // 0x1b12b8: 0xc06921c  jal         func_1A4870
label_1b12bc:
    if (ctx->pc == 0x1B12BCu) {
        ctx->pc = 0x1B12BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B12B8u;
        // 0x1b12bc: 0x8e248d0c  lw          $a0, -0x72F4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294937868)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B12C0u;
        goto label_1b12c0;
    }
    ctx->pc = 0x1B12B8u;
    SET_GPR_U32(ctx, 31, 0x1B12C0u);
    ctx->pc = 0x1B12BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B12B8u;
    // 0x1b12bc: 0x8e248d0c  lw          $a0, -0x72F4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294937868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4870u;
    { ctx->pc = 0x1a4870; return; }
    ctx->pc = 0x1B12C0u;
label_1b12c0:
    // 0x1b12c0: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_1b12c4:
    if (ctx->pc == 0x1B12C4u) {
        ctx->pc = 0x1B12C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B12C0u;
        // 0x1b12c4: 0x3c070037  lui         $a3, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B12C8u;
        goto label_1b12c8;
    }
    ctx->pc = 0x1B12C0u;
    {
        const bool branch_taken_0x1b12c0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1B12C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B12C0u;
        // 0x1b12c4: 0x3c070037  lui         $a3, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b12c0) {
            ctx->pc = 0x1B12D0u;
            goto label_1b12d0;
        }
    }
    ctx->pc = 0x1B12C8u;
label_1b12c8:
    // 0x1b12c8: 0x10000017  b           . + 4 + (0x17 << 2)
label_1b12cc:
    if (ctx->pc == 0x1B12CCu) {
        ctx->pc = 0x1B12CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B12C8u;
        // 0x1b12cc: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B12D0u;
        goto label_1b12d0;
    }
    ctx->pc = 0x1B12C8u;
    {
        const bool branch_taken_0x1b12c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B12CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B12C8u;
        // 0x1b12cc: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b12c8) {
            ctx->pc = 0x1B1328u;
            goto label_1b1328;
        }
    }
    ctx->pc = 0x1B12D0u;
label_1b12d0:
    // 0x1b12d0: 0x3c130037  lui         $s3, 0x37
    ctx->pc = 0x1b12d0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)55 << 16));
label_1b12d4:
    // 0x1b12d4: 0x24e76280  addiu       $a3, $a3, 0x6280
    ctx->pc = 0x1b12d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 25216));
label_1b12d8:
    // 0x1b12d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b12d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1b12dc:
    // 0x1b12dc: 0xacf00004  sw          $s0, 0x4($a3)
    ctx->pc = 0x1b12dcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 16));
label_1b12e0:
    // 0x1b12e0: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1b12e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_1b12e4:
    // 0x1b12e4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b12e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1b12e8:
    // 0x1b12e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b12e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b12ec:
    // 0x1b12ec: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x1b12ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_1b12f0:
    // 0x1b12f0: 0x266977c0  addiu       $t1, $s3, 0x77C0
    ctx->pc = 0x1b12f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 19), 30656));
label_1b12f4:
    // 0x1b12f4: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1b12f4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1b12f8:
    // 0x1b12f8: 0xc069e2a  jal         func_1A78A8
label_1b12fc:
    if (ctx->pc == 0x1B12FCu) {
        ctx->pc = 0x1B12FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B12F8u;
        // 0x1b12fc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1300u;
        goto label_1b1300;
    }
    ctx->pc = 0x1B12F8u;
    SET_GPR_U32(ctx, 31, 0x1B1300u);
    ctx->pc = 0x1B12FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B12F8u;
    // 0x1b12fc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    { ctx->pc = 0x1a78a8; return; }
    ctx->pc = 0x1B1300u;
label_1b1300:
    // 0x1b1300: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b1300u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b1304:
    // 0x1b1304: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_1b1308:
    if (ctx->pc == 0x1B1308u) {
        ctx->pc = 0x1B130Cu;
        goto label_1b130c;
    }
    ctx->pc = 0x1B1304u;
    {
        const bool branch_taken_0x1b1304 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1304) {
            ctx->pc = 0x1B131Cu;
            goto label_1b131c;
        }
    }
    ctx->pc = 0x1B130Cu;
label_1b130c:
    // 0x1b130c: 0xc069210  jal         func_1A4840
label_1b1310:
    if (ctx->pc == 0x1B1310u) {
        ctx->pc = 0x1B1310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B130Cu;
        // 0x1b1310: 0x8e248d0c  lw          $a0, -0x72F4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294937868)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1314u;
        goto label_1b1314;
    }
    ctx->pc = 0x1B130Cu;
    SET_GPR_U32(ctx, 31, 0x1B1314u);
    ctx->pc = 0x1B1310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B130Cu;
    // 0x1b1310: 0x8e248d0c  lw          $a0, -0x72F4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294937868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x1B1314u;
label_1b1314:
    // 0x1b1314: 0x10000004  b           . + 4 + (0x4 << 2)
label_1b1318:
    if (ctx->pc == 0x1B1318u) {
        ctx->pc = 0x1B1318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1314u;
        // 0x1b1318: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B131Cu;
        goto label_1b131c;
    }
    ctx->pc = 0x1B1314u;
    {
        const bool branch_taken_0x1b1314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1314u;
        // 0x1b1318: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1314) {
            ctx->pc = 0x1B1328u;
            goto label_1b1328;
        }
    }
    ctx->pc = 0x1B131Cu;
label_1b131c:
    // 0x1b131c: 0xc069210  jal         func_1A4840
label_1b1320:
    if (ctx->pc == 0x1B1320u) {
        ctx->pc = 0x1B1320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B131Cu;
        // 0x1b1320: 0x8e248d0c  lw          $a0, -0x72F4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294937868)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1324u;
        goto label_1b1324;
    }
    ctx->pc = 0x1B131Cu;
    SET_GPR_U32(ctx, 31, 0x1B1324u);
    ctx->pc = 0x1B1320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B131Cu;
    // 0x1b1320: 0x8e248d0c  lw          $a0, -0x72F4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294937868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x1B1324u;
label_1b1324:
    // 0x1b1324: 0x8e6277c0  lw          $v0, 0x77C0($s3)
    ctx->pc = 0x1b1324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 30656)));
label_1b1328:
    // 0x1b1328: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1b1328u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1b132c:
    // 0x1b132c: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x1b132cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1b1330:
    // 0x1b1330: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1b1330u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1b1334:
    // 0x1b1334: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1b1334u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1b1338:
    // 0x1b1338: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1b1338u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b133c:
    // 0x1b133c: 0x3e00008  jr          $ra
label_1b1340:
    if (ctx->pc == 0x1B1340u) {
        ctx->pc = 0x1B1340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B133Cu;
        // 0x1b1340: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1344u;
        goto label_1b1344;
    }
    ctx->pc = 0x1B133Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B1340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B133Cu;
        // 0x1b1340: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B133Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B1344u;
label_1b1344:
    // 0x1b1344: 0x0  nop
    ctx->pc = 0x1b1344u;
    // NOP
label_1b1348:
    // 0x1b1348: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1b1348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_1b134c:
    // 0x1b134c: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b134cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1b1350:
    // 0x1b1350: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x1b1350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
label_1b1354:
    // 0x1b1354: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x1b1354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
label_1b1358:
    // 0x1b1358: 0x24566200  addiu       $s6, $v0, 0x6200
    ctx->pc = 0x1b1358u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 25088));
label_1b135c:
    // 0x1b135c: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1b135cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_1b1360:
    // 0x1b1360: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1b1360u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1b1364:
    // 0x1b1364: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x1b1364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_1b1368:
    // 0x1b1368: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1b1368u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b136c:
    // 0x1b136c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1b136cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_1b1370:
    // 0x1b1370: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1b1370u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1b1374:
    // 0x1b1374: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1b1374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_1b1378:
    // 0x1b1378: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1b1378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_1b137c:
    // 0x1b137c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1b137cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1b1380:
    // 0x1b1380: 0x8ec20024  lw          $v0, 0x24($s6)
    ctx->pc = 0x1b1380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 36)));
label_1b1384:
    // 0x1b1384: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1b1388:
    if (ctx->pc == 0x1B1388u) {
        ctx->pc = 0x1B1388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1384u;
        // 0x1b1388: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B138Cu;
        goto label_1b138c;
    }
    ctx->pc = 0x1B1384u;
    {
        const bool branch_taken_0x1b1384 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1384u;
        // 0x1b1388: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1384) {
            ctx->pc = 0x1B1394u;
            goto label_1b1394;
        }
    }
    ctx->pc = 0x1B138Cu;
label_1b138c:
    // 0x1b138c: 0x1000002d  b           . + 4 + (0x2D << 2)
label_1b1390:
    if (ctx->pc == 0x1B1390u) {
        ctx->pc = 0x1B1390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B138Cu;
        // 0x1b1390: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1394u;
        goto label_1b1394;
    }
    ctx->pc = 0x1B138Cu;
    {
        const bool branch_taken_0x1b138c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B138Cu;
        // 0x1b1390: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b138c) {
            ctx->pc = 0x1B1444u;
            goto label_1b1444;
        }
    }
    ctx->pc = 0x1B1394u;
label_1b1394:
    // 0x1b1394: 0x3c120029  lui         $s2, 0x29
    ctx->pc = 0x1b1394u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)41 << 16));
label_1b1398:
    // 0x1b1398: 0xc06921c  jal         func_1A4870
label_1b139c:
    if (ctx->pc == 0x1B139Cu) {
        ctx->pc = 0x1B139Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1398u;
        // 0x1b139c: 0x8e448d0c  lw          $a0, -0x72F4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294937868)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B13A0u;
        goto label_1b13a0;
    }
    ctx->pc = 0x1B1398u;
    SET_GPR_U32(ctx, 31, 0x1B13A0u);
    ctx->pc = 0x1B139Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1398u;
    // 0x1b139c: 0x8e448d0c  lw          $a0, -0x72F4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294937868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4870u;
    { ctx->pc = 0x1a4870; return; }
    ctx->pc = 0x1B13A0u;
label_1b13a0:
    // 0x1b13a0: 0x4400028  bltz        $v0, . + 4 + (0x28 << 2)
label_1b13a4:
    if (ctx->pc == 0x1B13A4u) {
        ctx->pc = 0x1B13A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B13A0u;
        // 0x1b13a4: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B13A8u;
        goto label_1b13a8;
    }
    ctx->pc = 0x1B13A0u;
    {
        const bool branch_taken_0x1b13a0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1B13A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B13A0u;
        // 0x1b13a4: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b13a0) {
            ctx->pc = 0x1B1444u;
            goto label_1b1444;
        }
    }
    ctx->pc = 0x1B13A8u;
label_1b13a8:
    // 0x1b13a8: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_1b13ac:
    if (ctx->pc == 0x1B13ACu) {
        ctx->pc = 0x1B13B0u;
        goto label_1b13b0;
    }
    ctx->pc = 0x1B13A8u;
    {
        const bool branch_taken_0x1b13a8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b13a8) {
            ctx->pc = 0x1B13BCu;
            goto label_1b13bc;
        }
    }
    ctx->pc = 0x1B13B0u;
label_1b13b0:
    // 0x1b13b0: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x1b13b0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_1b13b4:
    // 0x1b13b4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1b13b8:
    if (ctx->pc == 0x1B13B8u) {
        ctx->pc = 0x1B13B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B13B4u;
        // 0x1b13b8: 0x3c100037  lui         $s0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B13BCu;
        goto label_1b13bc;
    }
    ctx->pc = 0x1B13B4u;
    {
        const bool branch_taken_0x1b13b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B13B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B13B4u;
        // 0x1b13b8: 0x3c100037  lui         $s0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b13b4) {
            ctx->pc = 0x1B13CCu;
            goto label_1b13cc;
        }
    }
    ctx->pc = 0x1B13BCu;
label_1b13bc:
    // 0x1b13bc: 0xc069210  jal         func_1A4840
label_1b13c0:
    if (ctx->pc == 0x1B13C0u) {
        ctx->pc = 0x1B13C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B13BCu;
        // 0x1b13c0: 0x8e448d0c  lw          $a0, -0x72F4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294937868)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B13C4u;
        goto label_1b13c4;
    }
    ctx->pc = 0x1B13BCu;
    SET_GPR_U32(ctx, 31, 0x1B13C4u);
    ctx->pc = 0x1B13C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B13BCu;
    // 0x1b13c0: 0x8e448d0c  lw          $a0, -0x72F4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294937868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x1B13C4u;
label_1b13c4:
    // 0x1b13c4: 0x1000001f  b           . + 4 + (0x1F << 2)
label_1b13c8:
    if (ctx->pc == 0x1B13C8u) {
        ctx->pc = 0x1B13C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B13C4u;
        // 0x1b13c8: 0x2402ff2e  addiu       $v0, $zero, -0xD2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967086));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B13CCu;
        goto label_1b13cc;
    }
    ctx->pc = 0x1B13C4u;
    {
        const bool branch_taken_0x1b13c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B13C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B13C4u;
        // 0x1b13c8: 0x2402ff2e  addiu       $v0, $zero, -0xD2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967086));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b13c4) {
            ctx->pc = 0x1B1444u;
            goto label_1b1444;
        }
    }
    ctx->pc = 0x1B13CCu;
label_1b13cc:
    // 0x1b13cc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b13ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b13d0:
    // 0x1b13d0: 0x261062c4  addiu       $s0, $s0, 0x62C4
    ctx->pc = 0x1b13d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 25284));
label_1b13d4:
    // 0x1b13d4: 0x240603ff  addiu       $a2, $zero, 0x3FF
    ctx->pc = 0x1b13d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
label_1b13d8:
    // 0x1b13d8: 0xc08f4fe  jal         func_23D3F8
label_1b13dc:
    if (ctx->pc == 0x1B13DCu) {
        ctx->pc = 0x1B13DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B13D8u;
        // 0x1b13dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B13E0u;
        goto label_1b13e0;
    }
    ctx->pc = 0x1B13D8u;
    SET_GPR_U32(ctx, 31, 0x1B13E0u);
    ctx->pc = 0x1B13DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B13D8u;
    // 0x1b13dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D3F8u;
    { ctx->pc = 0x23d3f8; return; }
    ctx->pc = 0x1B13E0u;
label_1b13e0:
    // 0x1b13e0: 0x2603ffec  addiu       $v1, $s0, -0x14
    ctx->pc = 0x1b13e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967276));
label_1b13e4:
    // 0x1b13e4: 0xae14ffec  sw          $s4, -0x14($s0)
    ctx->pc = 0x1b13e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294967276), GPR_U32(ctx, 20));
label_1b13e8:
    // 0x1b13e8: 0xac730008  sw          $s3, 0x8($v1)
    ctx->pc = 0x1b13e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 19));
label_1b13ec:
    // 0x1b13ec: 0x3c090037  lui         $t1, 0x37
    ctx->pc = 0x1b13ecu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)55 << 16));
label_1b13f0:
    // 0x1b13f0: 0xac750004  sw          $s5, 0x4($v1)
    ctx->pc = 0x1b13f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 21));
label_1b13f4:
    // 0x1b13f4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b13f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1b13f8:
    // 0x1b13f8: 0xa0600413  sb          $zero, 0x413($v1)
    ctx->pc = 0x1b13f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1043), (uint8_t)GPR_U32(ctx, 0));
label_1b13fc:
    // 0x1b13fc: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x1b13fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1b1400:
    // 0x1b1400: 0x252977c0  addiu       $t1, $t1, 0x77C0
    ctx->pc = 0x1b1400u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 30656));
label_1b1404:
    // 0x1b1404: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1b1404u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b1408:
    // 0x1b1408: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b1408u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1b140c:
    // 0x1b140c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b140cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b1410:
    // 0x1b1410: 0x24080414  addiu       $t0, $zero, 0x414
    ctx->pc = 0x1b1410u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1044));
label_1b1414:
    // 0x1b1414: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1b1414u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1b1418:
    // 0x1b1418: 0xc069e2a  jal         func_1A78A8
label_1b141c:
    if (ctx->pc == 0x1B141Cu) {
        ctx->pc = 0x1B141Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1418u;
        // 0x1b141c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1420u;
        goto label_1b1420;
    }
    ctx->pc = 0x1B1418u;
    SET_GPR_U32(ctx, 31, 0x1B1420u);
    ctx->pc = 0x1B141Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1418u;
    // 0x1b141c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    { ctx->pc = 0x1a78a8; return; }
    ctx->pc = 0x1B1420u;
label_1b1420:
    // 0x1b1420: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b1420u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b1424:
    // 0x1b1424: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
label_1b1428:
    if (ctx->pc == 0x1B1428u) {
        ctx->pc = 0x1B1428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1424u;
        // 0x1b1428: 0x3c030029  lui         $v1, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B142Cu;
        goto label_1b142c;
    }
    ctx->pc = 0x1B1424u;
    {
        const bool branch_taken_0x1b1424 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1424u;
        // 0x1b1428: 0x3c030029  lui         $v1, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1424) {
            ctx->pc = 0x1B1438u;
            goto label_1b1438;
        }
    }
    ctx->pc = 0x1B142Cu;
label_1b142c:
    // 0x1b142c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1b142cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b1430:
    // 0x1b1430: 0x10000003  b           . + 4 + (0x3 << 2)
label_1b1434:
    if (ctx->pc == 0x1B1434u) {
        ctx->pc = 0x1B1434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1430u;
        // 0x1b1434: 0xac628d08  sw          $v0, -0x72F8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294937864), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1438u;
        goto label_1b1438;
    }
    ctx->pc = 0x1B1430u;
    {
        const bool branch_taken_0x1b1430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1430u;
        // 0x1b1434: 0xac628d08  sw          $v0, -0x72F8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294937864), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1430) {
            ctx->pc = 0x1B1440u;
            goto label_1b1440;
        }
    }
    ctx->pc = 0x1B1438u;
label_1b1438:
    // 0x1b1438: 0xc069210  jal         func_1A4840
label_1b143c:
    if (ctx->pc == 0x1B143Cu) {
        ctx->pc = 0x1B143Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1438u;
        // 0x1b143c: 0x8e448d0c  lw          $a0, -0x72F4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294937868)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1440u;
        goto label_1b1440;
    }
    ctx->pc = 0x1B1438u;
    SET_GPR_U32(ctx, 31, 0x1B1440u);
    ctx->pc = 0x1B143Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1438u;
    // 0x1b143c: 0x8e448d0c  lw          $a0, -0x72F4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294937868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x1B1440u;
label_1b1440:
    // 0x1b1440: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b1440u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b1444:
    // 0x1b1444: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1b1444u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1b1448:
    // 0x1b1448: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x1b1448u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1b144c:
    // 0x1b144c: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x1b144cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1b1450:
    // 0x1b1450: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1b1450u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1b1454:
    // 0x1b1454: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x1b1454u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1b1458:
    // 0x1b1458: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1b1458u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1b145c:
    // 0x1b145c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1b145cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1b1460:
    // 0x1b1460: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1b1460u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b1464:
    // 0x1b1464: 0x3e00008  jr          $ra
label_1b1468:
    if (ctx->pc == 0x1B1468u) {
        ctx->pc = 0x1B1468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1464u;
        // 0x1b1468: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B146Cu;
        goto label_1b146c;
    }
    ctx->pc = 0x1B1464u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B1468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1464u;
        // 0x1b1468: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1464u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B146Cu;
label_1b146c:
    // 0x1b146c: 0x0  nop
    ctx->pc = 0x1b146cu;
    // NOP
label_1b1470:
    // 0x1b1470: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b1470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1b1474:
    // 0x1b1474: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b1474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1b1478:
    // 0x1b1478: 0xc06c4d2  jal         func_1B1348
label_1b147c:
    if (ctx->pc == 0x1B147Cu) {
        ctx->pc = 0x1B147Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1478u;
        // 0x1b147c: 0x24070040  addiu       $a3, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1480u;
        goto label_1b1480;
    }
    ctx->pc = 0x1B1478u;
    SET_GPR_U32(ctx, 31, 0x1B1480u);
    ctx->pc = 0x1B147Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1478u;
    // 0x1b147c: 0x24070040  addiu       $a3, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1348u;
    goto label_1b1348;
    ctx->pc = 0x1B1480u;
label_1b1480:
    // 0x1b1480: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b1480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b1484:
    // 0x1b1484: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
label_1b1488:
    if (ctx->pc == 0x1B1488u) {
        ctx->pc = 0x1B1488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1484u;
        // 0x1b1488: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B148Cu;
        goto label_1b148c;
    }
    ctx->pc = 0x1B1484u;
    {
        const bool branch_taken_0x1b1484 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1484u;
        // 0x1b1488: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1484) {
            ctx->pc = 0x1B1498u;
            goto label_1b1498;
        }
    }
    ctx->pc = 0x1B148Cu;
label_1b148c:
    // 0x1b148c: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x1b148cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
label_1b1490:
    // 0x1b1490: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x1b1490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1b1494:
    // 0x1b1494: 0xac628d08  sw          $v0, -0x72F8($v1)
    ctx->pc = 0x1b1494u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294937864), GPR_U32(ctx, 2));
label_1b1498:
    // 0x1b1498: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1b1498u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b149c:
    // 0x1b149c: 0x3e00008  jr          $ra
label_1b14a0:
    if (ctx->pc == 0x1B14A0u) {
        ctx->pc = 0x1B14A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B149Cu;
        // 0x1b14a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B14A4u;
        goto label_1b14a4;
    }
    ctx->pc = 0x1B149Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B14A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B149Cu;
        // 0x1b14a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B149Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B14A4u;
label_1b14a4:
    // 0x1b14a4: 0x0  nop
    ctx->pc = 0x1b14a4u;
    // NOP
label_1b14a8:
    // 0x1b14a8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1b14a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1b14ac:
    // 0x1b14ac: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1b14acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
label_1b14b0:
    // 0x1b14b0: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1b14b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_1b14b4:
    // 0x1b14b4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1b14b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1b14b8:
    // 0x1b14b8: 0x24716200  addiu       $s1, $v1, 0x6200
    ctx->pc = 0x1b14b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 25088));
label_1b14bc:
    // 0x1b14bc: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1b14bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1b14c0:
    // 0x1b14c0: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1b14c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_1b14c4:
    // 0x1b14c4: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1b14c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1b14c8:
    // 0x1b14c8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1b14cc:
    if (ctx->pc == 0x1B14CCu) {
        ctx->pc = 0x1B14CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B14C8u;
        // 0x1b14cc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B14D0u;
        goto label_1b14d0;
    }
    ctx->pc = 0x1B14C8u;
    {
        const bool branch_taken_0x1b14c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B14CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B14C8u;
        // 0x1b14cc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b14c8) {
            ctx->pc = 0x1B14D8u;
            goto label_1b14d8;
        }
    }
    ctx->pc = 0x1B14D0u;
label_1b14d0:
    // 0x1b14d0: 0x1000001d  b           . + 4 + (0x1D << 2)
label_1b14d4:
    if (ctx->pc == 0x1B14D4u) {
        ctx->pc = 0x1B14D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B14D0u;
        // 0x1b14d4: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B14D8u;
        goto label_1b14d8;
    }
    ctx->pc = 0x1B14D0u;
    {
        const bool branch_taken_0x1b14d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B14D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B14D0u;
        // 0x1b14d4: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b14d0) {
            ctx->pc = 0x1B1548u;
            goto label_1b1548;
        }
    }
    ctx->pc = 0x1B14D8u;
label_1b14d8:
    // 0x1b14d8: 0x3c120029  lui         $s2, 0x29
    ctx->pc = 0x1b14d8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)41 << 16));
label_1b14dc:
    // 0x1b14dc: 0xc06921c  jal         func_1A4870
label_1b14e0:
    if (ctx->pc == 0x1B14E0u) {
        ctx->pc = 0x1B14E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B14DCu;
        // 0x1b14e0: 0x8e448d0c  lw          $a0, -0x72F4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294937868)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B14E4u;
        goto label_1b14e4;
    }
    ctx->pc = 0x1B14DCu;
    SET_GPR_U32(ctx, 31, 0x1B14E4u);
    ctx->pc = 0x1B14E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B14DCu;
    // 0x1b14e0: 0x8e448d0c  lw          $a0, -0x72F4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294937868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4870u;
    { ctx->pc = 0x1a4870; return; }
    ctx->pc = 0x1B14E4u;
label_1b14e4:
    // 0x1b14e4: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_1b14e8:
    if (ctx->pc == 0x1B14E8u) {
        ctx->pc = 0x1B14E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B14E4u;
        // 0x1b14e8: 0x3c070037  lui         $a3, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B14ECu;
        goto label_1b14ec;
    }
    ctx->pc = 0x1B14E4u;
    {
        const bool branch_taken_0x1b14e4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1B14E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B14E4u;
        // 0x1b14e8: 0x3c070037  lui         $a3, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b14e4) {
            ctx->pc = 0x1B14F4u;
            goto label_1b14f4;
        }
    }
    ctx->pc = 0x1B14ECu;
label_1b14ec:
    // 0x1b14ec: 0x10000016  b           . + 4 + (0x16 << 2)
label_1b14f0:
    if (ctx->pc == 0x1B14F0u) {
        ctx->pc = 0x1B14F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B14ECu;
        // 0x1b14f0: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B14F4u;
        goto label_1b14f4;
    }
    ctx->pc = 0x1B14ECu;
    {
        const bool branch_taken_0x1b14ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B14F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B14ECu;
        // 0x1b14f0: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b14ec) {
            ctx->pc = 0x1B1548u;
            goto label_1b1548;
        }
    }
    ctx->pc = 0x1B14F4u;
label_1b14f4:
    // 0x1b14f4: 0x3c090037  lui         $t1, 0x37
    ctx->pc = 0x1b14f4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)55 << 16));
label_1b14f8:
    // 0x1b14f8: 0xacf06280  sw          $s0, 0x6280($a3)
    ctx->pc = 0x1b14f8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 25216), GPR_U32(ctx, 16));
label_1b14fc:
    // 0x1b14fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b14fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b1500:
    // 0x1b1500: 0x24e76280  addiu       $a3, $a3, 0x6280
    ctx->pc = 0x1b1500u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 25216));
label_1b1504:
    // 0x1b1504: 0x252977c0  addiu       $t1, $t1, 0x77C0
    ctx->pc = 0x1b1504u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 30656));
label_1b1508:
    // 0x1b1508: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b1508u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1b150c:
    // 0x1b150c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1b150cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1b1510:
    // 0x1b1510: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b1510u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b1514:
    // 0x1b1514: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x1b1514u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_1b1518:
    // 0x1b1518: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1b1518u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1b151c:
    // 0x1b151c: 0xc069e2a  jal         func_1A78A8
label_1b1520:
    if (ctx->pc == 0x1B1520u) {
        ctx->pc = 0x1B1520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B151Cu;
        // 0x1b1520: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1524u;
        goto label_1b1524;
    }
    ctx->pc = 0x1B151Cu;
    SET_GPR_U32(ctx, 31, 0x1B1524u);
    ctx->pc = 0x1B1520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B151Cu;
    // 0x1b1520: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    { ctx->pc = 0x1a78a8; return; }
    ctx->pc = 0x1B1524u;
label_1b1524:
    // 0x1b1524: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b1524u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b1528:
    // 0x1b1528: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
label_1b152c:
    if (ctx->pc == 0x1B152Cu) {
        ctx->pc = 0x1B152Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1528u;
        // 0x1b152c: 0x3c030029  lui         $v1, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1530u;
        goto label_1b1530;
    }
    ctx->pc = 0x1B1528u;
    {
        const bool branch_taken_0x1b1528 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B152Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1528u;
        // 0x1b152c: 0x3c030029  lui         $v1, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1528) {
            ctx->pc = 0x1B153Cu;
            goto label_1b153c;
        }
    }
    ctx->pc = 0x1B1530u;
label_1b1530:
    // 0x1b1530: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1b1530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1b1534:
    // 0x1b1534: 0x10000003  b           . + 4 + (0x3 << 2)
label_1b1538:
    if (ctx->pc == 0x1B1538u) {
        ctx->pc = 0x1B1538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1534u;
        // 0x1b1538: 0xac628d08  sw          $v0, -0x72F8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294937864), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B153Cu;
        goto label_1b153c;
    }
    ctx->pc = 0x1B1534u;
    {
        const bool branch_taken_0x1b1534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1534u;
        // 0x1b1538: 0xac628d08  sw          $v0, -0x72F8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294937864), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1534) {
            ctx->pc = 0x1B1544u;
            goto label_1b1544;
        }
    }
    ctx->pc = 0x1B153Cu;
label_1b153c:
    // 0x1b153c: 0xc069210  jal         func_1A4840
label_1b1540:
    if (ctx->pc == 0x1B1540u) {
        ctx->pc = 0x1B1540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B153Cu;
        // 0x1b1540: 0x8e448d0c  lw          $a0, -0x72F4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294937868)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1544u;
        goto label_1b1544;
    }
    ctx->pc = 0x1B153Cu;
    SET_GPR_U32(ctx, 31, 0x1B1544u);
    ctx->pc = 0x1B1540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B153Cu;
    // 0x1b1540: 0x8e448d0c  lw          $a0, -0x72F4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294937868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x1B1544u;
label_1b1544:
    // 0x1b1544: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b1544u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b1548:
    // 0x1b1548: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1b1548u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1b154c:
    // 0x1b154c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1b154cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1b1550:
    // 0x1b1550: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1b1550u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1b1554:
    // 0x1b1554: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1b1554u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b1558:
    // 0x1b1558: 0x3e00008  jr          $ra
label_1b155c:
    if (ctx->pc == 0x1B155Cu) {
        ctx->pc = 0x1B155Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1558u;
        // 0x1b155c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1560u;
        goto label_1b1560;
    }
    ctx->pc = 0x1B1558u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B155Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1558u;
        // 0x1b155c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1558u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B1560u;
label_1b1560:
    // 0x1b1560: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1b1560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1b1564:
    // 0x1b1564: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b1564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1b1568:
    // 0x1b1568: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x1b1568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_1b156c:
    // 0x1b156c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1b156cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_1b1570:
    // 0x1b1570: 0x24536200  addiu       $s3, $v0, 0x6200
    ctx->pc = 0x1b1570u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 25088));
label_1b1574:
    // 0x1b1574: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1b1574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    ctx->pc = 0x1b1578u;
    return;
}

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


void FUN_0019b910_part143(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1e0e70u: goto label_1e0e70;
        case 0x1e0e74u: goto label_1e0e74;
        case 0x1e0e78u: goto label_1e0e78;
        case 0x1e0e7cu: goto label_1e0e7c;
        case 0x1e0e80u: goto label_1e0e80;
        case 0x1e0e84u: goto label_1e0e84;
        case 0x1e0e88u: goto label_1e0e88;
        case 0x1e0e8cu: goto label_1e0e8c;
        case 0x1e0e90u: goto label_1e0e90;
        case 0x1e0e94u: goto label_1e0e94;
        case 0x1e0e98u: goto label_1e0e98;
        case 0x1e0e9cu: goto label_1e0e9c;
        case 0x1e0ea0u: goto label_1e0ea0;
        case 0x1e0ea4u: goto label_1e0ea4;
        case 0x1e0ea8u: goto label_1e0ea8;
        case 0x1e0eacu: goto label_1e0eac;
        case 0x1e0eb0u: goto label_1e0eb0;
        case 0x1e0eb4u: goto label_1e0eb4;
        case 0x1e0eb8u: goto label_1e0eb8;
        case 0x1e0ebcu: goto label_1e0ebc;
        case 0x1e0ec0u: goto label_1e0ec0;
        case 0x1e0ec4u: goto label_1e0ec4;
        case 0x1e0ec8u: goto label_1e0ec8;
        case 0x1e0eccu: goto label_1e0ecc;
        case 0x1e0ed0u: goto label_1e0ed0;
        case 0x1e0ed4u: goto label_1e0ed4;
        case 0x1e0ed8u: goto label_1e0ed8;
        case 0x1e0edcu: goto label_1e0edc;
        case 0x1e0ee0u: goto label_1e0ee0;
        case 0x1e0ee4u: goto label_1e0ee4;
        case 0x1e0ee8u: goto label_1e0ee8;
        case 0x1e0eecu: goto label_1e0eec;
        case 0x1e0ef0u: goto label_1e0ef0;
        case 0x1e0ef4u: goto label_1e0ef4;
        case 0x1e0ef8u: goto label_1e0ef8;
        case 0x1e0efcu: goto label_1e0efc;
        case 0x1e0f00u: goto label_1e0f00;
        case 0x1e0f04u: goto label_1e0f04;
        case 0x1e0f08u: goto label_1e0f08;
        case 0x1e0f0cu: goto label_1e0f0c;
        case 0x1e0f10u: goto label_1e0f10;
        case 0x1e0f14u: goto label_1e0f14;
        case 0x1e0f18u: goto label_1e0f18;
        case 0x1e0f1cu: goto label_1e0f1c;
        case 0x1e0f20u: goto label_1e0f20;
        case 0x1e0f24u: goto label_1e0f24;
        case 0x1e0f28u: goto label_1e0f28;
        case 0x1e0f2cu: goto label_1e0f2c;
        case 0x1e0f30u: goto label_1e0f30;
        case 0x1e0f34u: goto label_1e0f34;
        case 0x1e0f38u: goto label_1e0f38;
        case 0x1e0f3cu: goto label_1e0f3c;
        case 0x1e0f40u: goto label_1e0f40;
        case 0x1e0f44u: goto label_1e0f44;
        case 0x1e0f48u: goto label_1e0f48;
        case 0x1e0f4cu: goto label_1e0f4c;
        case 0x1e0f50u: goto label_1e0f50;
        case 0x1e0f54u: goto label_1e0f54;
        case 0x1e0f58u: goto label_1e0f58;
        case 0x1e0f5cu: goto label_1e0f5c;
        case 0x1e0f60u: goto label_1e0f60;
        case 0x1e0f64u: goto label_1e0f64;
        case 0x1e0f68u: goto label_1e0f68;
        case 0x1e0f6cu: goto label_1e0f6c;
        case 0x1e0f70u: goto label_1e0f70;
        case 0x1e0f74u: goto label_1e0f74;
        case 0x1e0f78u: goto label_1e0f78;
        case 0x1e0f7cu: goto label_1e0f7c;
        case 0x1e0f80u: goto label_1e0f80;
        case 0x1e0f84u: goto label_1e0f84;
        case 0x1e0f88u: goto label_1e0f88;
        case 0x1e0f8cu: goto label_1e0f8c;
        case 0x1e0f90u: goto label_1e0f90;
        case 0x1e0f94u: goto label_1e0f94;
        case 0x1e0f98u: goto label_1e0f98;
        case 0x1e0f9cu: goto label_1e0f9c;
        case 0x1e0fa0u: goto label_1e0fa0;
        case 0x1e0fa4u: goto label_1e0fa4;
        case 0x1e0fa8u: goto label_1e0fa8;
        case 0x1e0facu: goto label_1e0fac;
        case 0x1e0fb0u: goto label_1e0fb0;
        case 0x1e0fb4u: goto label_1e0fb4;
        case 0x1e0fb8u: goto label_1e0fb8;
        case 0x1e0fbcu: goto label_1e0fbc;
        case 0x1e0fc0u: goto label_1e0fc0;
        case 0x1e0fc4u: goto label_1e0fc4;
        case 0x1e0fc8u: goto label_1e0fc8;
        case 0x1e0fccu: goto label_1e0fcc;
        case 0x1e0fd0u: goto label_1e0fd0;
        case 0x1e0fd4u: goto label_1e0fd4;
        case 0x1e0fd8u: goto label_1e0fd8;
        case 0x1e0fdcu: goto label_1e0fdc;
        case 0x1e0fe0u: goto label_1e0fe0;
        case 0x1e0fe4u: goto label_1e0fe4;
        case 0x1e0fe8u: goto label_1e0fe8;
        case 0x1e0fecu: goto label_1e0fec;
        case 0x1e0ff0u: goto label_1e0ff0;
        case 0x1e0ff4u: goto label_1e0ff4;
        case 0x1e0ff8u: goto label_1e0ff8;
        case 0x1e0ffcu: goto label_1e0ffc;
        case 0x1e1000u: goto label_1e1000;
        case 0x1e1004u: goto label_1e1004;
        case 0x1e1008u: goto label_1e1008;
        case 0x1e100cu: goto label_1e100c;
        case 0x1e1010u: goto label_1e1010;
        case 0x1e1014u: goto label_1e1014;
        case 0x1e1018u: goto label_1e1018;
        case 0x1e101cu: goto label_1e101c;
        case 0x1e1020u: goto label_1e1020;
        case 0x1e1024u: goto label_1e1024;
        case 0x1e1028u: goto label_1e1028;
        case 0x1e102cu: goto label_1e102c;
        case 0x1e1030u: goto label_1e1030;
        case 0x1e1034u: goto label_1e1034;
        case 0x1e1038u: goto label_1e1038;
        case 0x1e103cu: goto label_1e103c;
        case 0x1e1040u: goto label_1e1040;
        case 0x1e1044u: goto label_1e1044;
        case 0x1e1048u: goto label_1e1048;
        case 0x1e104cu: goto label_1e104c;
        case 0x1e1050u: goto label_1e1050;
        case 0x1e1054u: goto label_1e1054;
        case 0x1e1058u: goto label_1e1058;
        case 0x1e105cu: goto label_1e105c;
        case 0x1e1060u: goto label_1e1060;
        case 0x1e1064u: goto label_1e1064;
        case 0x1e1068u: goto label_1e1068;
        case 0x1e106cu: goto label_1e106c;
        case 0x1e1070u: goto label_1e1070;
        case 0x1e1074u: goto label_1e1074;
        case 0x1e1078u: goto label_1e1078;
        case 0x1e107cu: goto label_1e107c;
        case 0x1e1080u: goto label_1e1080;
        case 0x1e1084u: goto label_1e1084;
        case 0x1e1088u: goto label_1e1088;
        case 0x1e108cu: goto label_1e108c;
        case 0x1e1090u: goto label_1e1090;
        case 0x1e1094u: goto label_1e1094;
        case 0x1e1098u: goto label_1e1098;
        case 0x1e109cu: goto label_1e109c;
        case 0x1e10a0u: goto label_1e10a0;
        case 0x1e10a4u: goto label_1e10a4;
        case 0x1e10a8u: goto label_1e10a8;
        case 0x1e10acu: goto label_1e10ac;
        case 0x1e10b0u: goto label_1e10b0;
        case 0x1e10b4u: goto label_1e10b4;
        case 0x1e10b8u: goto label_1e10b8;
        case 0x1e10bcu: goto label_1e10bc;
        case 0x1e10c0u: goto label_1e10c0;
        case 0x1e10c4u: goto label_1e10c4;
        case 0x1e10c8u: goto label_1e10c8;
        case 0x1e10ccu: goto label_1e10cc;
        case 0x1e10d0u: goto label_1e10d0;
        case 0x1e10d4u: goto label_1e10d4;
        case 0x1e10d8u: goto label_1e10d8;
        case 0x1e10dcu: goto label_1e10dc;
        case 0x1e10e0u: goto label_1e10e0;
        case 0x1e10e4u: goto label_1e10e4;
        case 0x1e10e8u: goto label_1e10e8;
        case 0x1e10ecu: goto label_1e10ec;
        case 0x1e10f0u: goto label_1e10f0;
        case 0x1e10f4u: goto label_1e10f4;
        case 0x1e10f8u: goto label_1e10f8;
        case 0x1e10fcu: goto label_1e10fc;
        case 0x1e1100u: goto label_1e1100;
        case 0x1e1104u: goto label_1e1104;
        case 0x1e1108u: goto label_1e1108;
        case 0x1e110cu: goto label_1e110c;
        case 0x1e1110u: goto label_1e1110;
        case 0x1e1114u: goto label_1e1114;
        case 0x1e1118u: goto label_1e1118;
        case 0x1e111cu: goto label_1e111c;
        case 0x1e1120u: goto label_1e1120;
        case 0x1e1124u: goto label_1e1124;
        case 0x1e1128u: goto label_1e1128;
        case 0x1e112cu: goto label_1e112c;
        case 0x1e1130u: goto label_1e1130;
        case 0x1e1134u: goto label_1e1134;
        case 0x1e1138u: goto label_1e1138;
        case 0x1e113cu: goto label_1e113c;
        case 0x1e1140u: goto label_1e1140;
        case 0x1e1144u: goto label_1e1144;
        case 0x1e1148u: goto label_1e1148;
        case 0x1e114cu: goto label_1e114c;
        case 0x1e1150u: goto label_1e1150;
        case 0x1e1154u: goto label_1e1154;
        case 0x1e1158u: goto label_1e1158;
        case 0x1e115cu: goto label_1e115c;
        case 0x1e1160u: goto label_1e1160;
        case 0x1e1164u: goto label_1e1164;
        case 0x1e1168u: goto label_1e1168;
        case 0x1e116cu: goto label_1e116c;
        case 0x1e1170u: goto label_1e1170;
        case 0x1e1174u: goto label_1e1174;
        case 0x1e1178u: goto label_1e1178;
        case 0x1e117cu: goto label_1e117c;
        case 0x1e1180u: goto label_1e1180;
        case 0x1e1184u: goto label_1e1184;
        case 0x1e1188u: goto label_1e1188;
        case 0x1e118cu: goto label_1e118c;
        case 0x1e1190u: goto label_1e1190;
        case 0x1e1194u: goto label_1e1194;
        case 0x1e1198u: goto label_1e1198;
        case 0x1e119cu: goto label_1e119c;
        case 0x1e11a0u: goto label_1e11a0;
        case 0x1e11a4u: goto label_1e11a4;
        case 0x1e11a8u: goto label_1e11a8;
        case 0x1e11acu: goto label_1e11ac;
        case 0x1e11b0u: goto label_1e11b0;
        case 0x1e11b4u: goto label_1e11b4;
        case 0x1e11b8u: goto label_1e11b8;
        case 0x1e11bcu: goto label_1e11bc;
        case 0x1e11c0u: goto label_1e11c0;
        case 0x1e11c4u: goto label_1e11c4;
        case 0x1e11c8u: goto label_1e11c8;
        case 0x1e11ccu: goto label_1e11cc;
        case 0x1e11d0u: goto label_1e11d0;
        case 0x1e11d4u: goto label_1e11d4;
        case 0x1e11d8u: goto label_1e11d8;
        case 0x1e11dcu: goto label_1e11dc;
        case 0x1e11e0u: goto label_1e11e0;
        case 0x1e11e4u: goto label_1e11e4;
        case 0x1e11e8u: goto label_1e11e8;
        case 0x1e11ecu: goto label_1e11ec;
        case 0x1e11f0u: goto label_1e11f0;
        case 0x1e11f4u: goto label_1e11f4;
        case 0x1e11f8u: goto label_1e11f8;
        case 0x1e11fcu: goto label_1e11fc;
        case 0x1e1200u: goto label_1e1200;
        case 0x1e1204u: goto label_1e1204;
        case 0x1e1208u: goto label_1e1208;
        case 0x1e120cu: goto label_1e120c;
        case 0x1e1210u: goto label_1e1210;
        case 0x1e1214u: goto label_1e1214;
        case 0x1e1218u: goto label_1e1218;
        case 0x1e121cu: goto label_1e121c;
        case 0x1e1220u: goto label_1e1220;
        case 0x1e1224u: goto label_1e1224;
        case 0x1e1228u: goto label_1e1228;
        case 0x1e122cu: goto label_1e122c;
        case 0x1e1230u: goto label_1e1230;
        case 0x1e1234u: goto label_1e1234;
        case 0x1e1238u: goto label_1e1238;
        case 0x1e123cu: goto label_1e123c;
        case 0x1e1240u: goto label_1e1240;
        case 0x1e1244u: goto label_1e1244;
        case 0x1e1248u: goto label_1e1248;
        case 0x1e124cu: goto label_1e124c;
        case 0x1e1250u: goto label_1e1250;
        case 0x1e1254u: goto label_1e1254;
        case 0x1e1258u: goto label_1e1258;
        case 0x1e125cu: goto label_1e125c;
        case 0x1e1260u: goto label_1e1260;
        case 0x1e1264u: goto label_1e1264;
        case 0x1e1268u: goto label_1e1268;
        case 0x1e126cu: goto label_1e126c;
        case 0x1e1270u: goto label_1e1270;
        case 0x1e1274u: goto label_1e1274;
        case 0x1e1278u: goto label_1e1278;
        case 0x1e127cu: goto label_1e127c;
        case 0x1e1280u: goto label_1e1280;
        case 0x1e1284u: goto label_1e1284;
        case 0x1e1288u: goto label_1e1288;
        case 0x1e128cu: goto label_1e128c;
        case 0x1e1290u: goto label_1e1290;
        case 0x1e1294u: goto label_1e1294;
        case 0x1e1298u: goto label_1e1298;
        case 0x1e129cu: goto label_1e129c;
        case 0x1e12a0u: goto label_1e12a0;
        case 0x1e12a4u: goto label_1e12a4;
        case 0x1e12a8u: goto label_1e12a8;
        case 0x1e12acu: goto label_1e12ac;
        case 0x1e12b0u: goto label_1e12b0;
        case 0x1e12b4u: goto label_1e12b4;
        case 0x1e12b8u: goto label_1e12b8;
        case 0x1e12bcu: goto label_1e12bc;
        case 0x1e12c0u: goto label_1e12c0;
        case 0x1e12c4u: goto label_1e12c4;
        case 0x1e12c8u: goto label_1e12c8;
        case 0x1e12ccu: goto label_1e12cc;
        case 0x1e12d0u: goto label_1e12d0;
        case 0x1e12d4u: goto label_1e12d4;
        case 0x1e12d8u: goto label_1e12d8;
        case 0x1e12dcu: goto label_1e12dc;
        case 0x1e12e0u: goto label_1e12e0;
        case 0x1e12e4u: goto label_1e12e4;
        case 0x1e12e8u: goto label_1e12e8;
        case 0x1e12ecu: goto label_1e12ec;
        case 0x1e12f0u: goto label_1e12f0;
        case 0x1e12f4u: goto label_1e12f4;
        case 0x1e12f8u: goto label_1e12f8;
        case 0x1e12fcu: goto label_1e12fc;
        case 0x1e1300u: goto label_1e1300;
        case 0x1e1304u: goto label_1e1304;
        case 0x1e1308u: goto label_1e1308;
        case 0x1e130cu: goto label_1e130c;
        case 0x1e1310u: goto label_1e1310;
        case 0x1e1314u: goto label_1e1314;
        case 0x1e1318u: goto label_1e1318;
        case 0x1e131cu: goto label_1e131c;
        case 0x1e1320u: goto label_1e1320;
        case 0x1e1324u: goto label_1e1324;
        case 0x1e1328u: goto label_1e1328;
        case 0x1e132cu: goto label_1e132c;
        case 0x1e1330u: goto label_1e1330;
        case 0x1e1334u: goto label_1e1334;
        case 0x1e1338u: goto label_1e1338;
        case 0x1e133cu: goto label_1e133c;
        case 0x1e1340u: goto label_1e1340;
        case 0x1e1344u: goto label_1e1344;
        case 0x1e1348u: goto label_1e1348;
        case 0x1e134cu: goto label_1e134c;
        case 0x1e1350u: goto label_1e1350;
        case 0x1e1354u: goto label_1e1354;
        case 0x1e1358u: goto label_1e1358;
        case 0x1e135cu: goto label_1e135c;
        case 0x1e1360u: goto label_1e1360;
        case 0x1e1364u: goto label_1e1364;
        case 0x1e1368u: goto label_1e1368;
        case 0x1e136cu: goto label_1e136c;
        case 0x1e1370u: goto label_1e1370;
        case 0x1e1374u: goto label_1e1374;
        case 0x1e1378u: goto label_1e1378;
        case 0x1e137cu: goto label_1e137c;
        case 0x1e1380u: goto label_1e1380;
        case 0x1e1384u: goto label_1e1384;
        case 0x1e1388u: goto label_1e1388;
        case 0x1e138cu: goto label_1e138c;
        case 0x1e1390u: goto label_1e1390;
        case 0x1e1394u: goto label_1e1394;
        case 0x1e1398u: goto label_1e1398;
        case 0x1e139cu: goto label_1e139c;
        case 0x1e13a0u: goto label_1e13a0;
        case 0x1e13a4u: goto label_1e13a4;
        case 0x1e13a8u: goto label_1e13a8;
        case 0x1e13acu: goto label_1e13ac;
        case 0x1e13b0u: goto label_1e13b0;
        case 0x1e13b4u: goto label_1e13b4;
        case 0x1e13b8u: goto label_1e13b8;
        case 0x1e13bcu: goto label_1e13bc;
        case 0x1e13c0u: goto label_1e13c0;
        case 0x1e13c4u: goto label_1e13c4;
        case 0x1e13c8u: goto label_1e13c8;
        case 0x1e13ccu: goto label_1e13cc;
        case 0x1e13d0u: goto label_1e13d0;
        case 0x1e13d4u: goto label_1e13d4;
        case 0x1e13d8u: goto label_1e13d8;
        case 0x1e13dcu: goto label_1e13dc;
        case 0x1e13e0u: goto label_1e13e0;
        case 0x1e13e4u: goto label_1e13e4;
        case 0x1e13e8u: goto label_1e13e8;
        case 0x1e13ecu: goto label_1e13ec;
        case 0x1e13f0u: goto label_1e13f0;
        case 0x1e13f4u: goto label_1e13f4;
        case 0x1e13f8u: goto label_1e13f8;
        case 0x1e13fcu: goto label_1e13fc;
        case 0x1e1400u: goto label_1e1400;
        case 0x1e1404u: goto label_1e1404;
        case 0x1e1408u: goto label_1e1408;
        case 0x1e140cu: goto label_1e140c;
        case 0x1e1410u: goto label_1e1410;
        case 0x1e1414u: goto label_1e1414;
        case 0x1e1418u: goto label_1e1418;
        case 0x1e141cu: goto label_1e141c;
        case 0x1e1420u: goto label_1e1420;
        case 0x1e1424u: goto label_1e1424;
        case 0x1e1428u: goto label_1e1428;
        case 0x1e142cu: goto label_1e142c;
        case 0x1e1430u: goto label_1e1430;
        case 0x1e1434u: goto label_1e1434;
        case 0x1e1438u: goto label_1e1438;
        case 0x1e143cu: goto label_1e143c;
        case 0x1e1440u: goto label_1e1440;
        case 0x1e1444u: goto label_1e1444;
        case 0x1e1448u: goto label_1e1448;
        case 0x1e144cu: goto label_1e144c;
        case 0x1e1450u: goto label_1e1450;
        case 0x1e1454u: goto label_1e1454;
        case 0x1e1458u: goto label_1e1458;
        case 0x1e145cu: goto label_1e145c;
        case 0x1e1460u: goto label_1e1460;
        case 0x1e1464u: goto label_1e1464;
        case 0x1e1468u: goto label_1e1468;
        case 0x1e146cu: goto label_1e146c;
        case 0x1e1470u: goto label_1e1470;
        case 0x1e1474u: goto label_1e1474;
        case 0x1e1478u: goto label_1e1478;
        case 0x1e147cu: goto label_1e147c;
        case 0x1e1480u: goto label_1e1480;
        case 0x1e1484u: goto label_1e1484;
        case 0x1e1488u: goto label_1e1488;
        case 0x1e148cu: goto label_1e148c;
        case 0x1e1490u: goto label_1e1490;
        case 0x1e1494u: goto label_1e1494;
        case 0x1e1498u: goto label_1e1498;
        case 0x1e149cu: goto label_1e149c;
        case 0x1e14a0u: goto label_1e14a0;
        case 0x1e14a4u: goto label_1e14a4;
        case 0x1e14a8u: goto label_1e14a8;
        case 0x1e14acu: goto label_1e14ac;
        case 0x1e14b0u: goto label_1e14b0;
        case 0x1e14b4u: goto label_1e14b4;
        case 0x1e14b8u: goto label_1e14b8;
        case 0x1e14bcu: goto label_1e14bc;
        case 0x1e14c0u: goto label_1e14c0;
        case 0x1e14c4u: goto label_1e14c4;
        case 0x1e14c8u: goto label_1e14c8;
        case 0x1e14ccu: goto label_1e14cc;
        case 0x1e14d0u: goto label_1e14d0;
        case 0x1e14d4u: goto label_1e14d4;
        case 0x1e14d8u: goto label_1e14d8;
        case 0x1e14dcu: goto label_1e14dc;
        case 0x1e14e0u: goto label_1e14e0;
        case 0x1e14e4u: goto label_1e14e4;
        case 0x1e14e8u: goto label_1e14e8;
        case 0x1e14ecu: goto label_1e14ec;
        case 0x1e14f0u: goto label_1e14f0;
        case 0x1e14f4u: goto label_1e14f4;
        case 0x1e14f8u: goto label_1e14f8;
        case 0x1e14fcu: goto label_1e14fc;
        case 0x1e1500u: goto label_1e1500;
        case 0x1e1504u: goto label_1e1504;
        case 0x1e1508u: goto label_1e1508;
        case 0x1e150cu: goto label_1e150c;
        case 0x1e1510u: goto label_1e1510;
        case 0x1e1514u: goto label_1e1514;
        case 0x1e1518u: goto label_1e1518;
        case 0x1e151cu: goto label_1e151c;
        case 0x1e1520u: goto label_1e1520;
        case 0x1e1524u: goto label_1e1524;
        case 0x1e1528u: goto label_1e1528;
        case 0x1e152cu: goto label_1e152c;
        case 0x1e1530u: goto label_1e1530;
        case 0x1e1534u: goto label_1e1534;
        case 0x1e1538u: goto label_1e1538;
        case 0x1e153cu: goto label_1e153c;
        case 0x1e1540u: goto label_1e1540;
        case 0x1e1544u: goto label_1e1544;
        case 0x1e1548u: goto label_1e1548;
        case 0x1e154cu: goto label_1e154c;
        case 0x1e1550u: goto label_1e1550;
        case 0x1e1554u: goto label_1e1554;
        case 0x1e1558u: goto label_1e1558;
        case 0x1e155cu: goto label_1e155c;
        case 0x1e1560u: goto label_1e1560;
        case 0x1e1564u: goto label_1e1564;
        case 0x1e1568u: goto label_1e1568;
        case 0x1e156cu: goto label_1e156c;
        case 0x1e1570u: goto label_1e1570;
        case 0x1e1574u: goto label_1e1574;
        case 0x1e1578u: goto label_1e1578;
        case 0x1e157cu: goto label_1e157c;
        case 0x1e1580u: goto label_1e1580;
        case 0x1e1584u: goto label_1e1584;
        case 0x1e1588u: goto label_1e1588;
        case 0x1e158cu: goto label_1e158c;
        case 0x1e1590u: goto label_1e1590;
        case 0x1e1594u: goto label_1e1594;
        case 0x1e1598u: goto label_1e1598;
        case 0x1e159cu: goto label_1e159c;
        case 0x1e15a0u: goto label_1e15a0;
        case 0x1e15a4u: goto label_1e15a4;
        case 0x1e15a8u: goto label_1e15a8;
        case 0x1e15acu: goto label_1e15ac;
        case 0x1e15b0u: goto label_1e15b0;
        case 0x1e15b4u: goto label_1e15b4;
        case 0x1e15b8u: goto label_1e15b8;
        case 0x1e15bcu: goto label_1e15bc;
        case 0x1e15c0u: goto label_1e15c0;
        case 0x1e15c4u: goto label_1e15c4;
        case 0x1e15c8u: goto label_1e15c8;
        case 0x1e15ccu: goto label_1e15cc;
        case 0x1e15d0u: goto label_1e15d0;
        case 0x1e15d4u: goto label_1e15d4;
        case 0x1e15d8u: goto label_1e15d8;
        case 0x1e15dcu: goto label_1e15dc;
        case 0x1e15e0u: goto label_1e15e0;
        case 0x1e15e4u: goto label_1e15e4;
        case 0x1e15e8u: goto label_1e15e8;
        case 0x1e15ecu: goto label_1e15ec;
        case 0x1e15f0u: goto label_1e15f0;
        case 0x1e15f4u: goto label_1e15f4;
        case 0x1e15f8u: goto label_1e15f8;
        case 0x1e15fcu: goto label_1e15fc;
        case 0x1e1600u: goto label_1e1600;
        case 0x1e1604u: goto label_1e1604;
        case 0x1e1608u: goto label_1e1608;
        case 0x1e160cu: goto label_1e160c;
        case 0x1e1610u: goto label_1e1610;
        case 0x1e1614u: goto label_1e1614;
        case 0x1e1618u: goto label_1e1618;
        case 0x1e161cu: goto label_1e161c;
        case 0x1e1620u: goto label_1e1620;
        case 0x1e1624u: goto label_1e1624;
        case 0x1e1628u: goto label_1e1628;
        case 0x1e162cu: goto label_1e162c;
        case 0x1e1630u: goto label_1e1630;
        case 0x1e1634u: goto label_1e1634;
        case 0x1e1638u: goto label_1e1638;
        case 0x1e163cu: goto label_1e163c;
        default: return;
    }

label_1e0e70:
    // 0x1e0e70: 0xc0783a8  jal         func_1E0EA0
label_1e0e74:
    if (ctx->pc == 0x1E0E74u) {
        ctx->pc = 0x1E0E78u;
        goto label_1e0e78;
    }
    ctx->pc = 0x1E0E70u;
    SET_GPR_U32(ctx, 31, 0x1E0E78u);
    ctx->pc = 0x1E0EA0u;
    goto label_1e0ea0;
    ctx->pc = 0x1E0E78u;
label_1e0e78:
    // 0x1e0e78: 0x8f848db0  lw          $a0, -0x7250($gp)
    ctx->pc = 0x1e0e78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938032)));
label_1e0e7c:
    // 0x1e0e7c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e0e7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e0e80:
    // 0x1e0e80: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e0e80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1e0e84:
    // 0x1e0e84: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e0e84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e0e88:
    // 0x1e0e88: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e0e88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e0e8c:
    // 0x1e0e8c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e0e8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e0e90:
    // 0x1e0e90: 0x64100a  movz        $v0, $v1, $a0
    ctx->pc = 0x1e0e90u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
label_1e0e94:
    // 0x1e0e94: 0x3e00008  jr          $ra
label_1e0e98:
    if (ctx->pc == 0x1E0E98u) {
        ctx->pc = 0x1E0E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0E94u;
        // 0x1e0e98: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0E9Cu;
        goto label_1e0e9c;
    }
    ctx->pc = 0x1E0E94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0E94u;
        // 0x1e0e98: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0E94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E0E9Cu;
label_1e0e9c:
    // 0x1e0e9c: 0x0  nop
    ctx->pc = 0x1e0e9cu;
    // NOP
label_1e0ea0:
    // 0x1e0ea0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1e0ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1e0ea4:
    // 0x1e0ea4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1e0ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1e0ea8:
    // 0x1e0ea8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1e0ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1e0eac:
    // 0x1e0eac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e0eacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1e0eb0:
    // 0x1e0eb0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e0eb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1e0eb4:
    // 0x1e0eb4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1e0eb4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e0eb8:
    // 0x1e0eb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e0eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e0ebc:
    // 0x1e0ebc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e0ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e0ec0:
    // 0x1e0ec0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1e0ec0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e0ec4:
    // 0x1e0ec4: 0x27828da8  addiu       $v0, $gp, -0x7258
    ctx->pc = 0x1e0ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938024));
label_1e0ec8:
    // 0x1e0ec8: 0x538821  addu        $s1, $v0, $s3
    ctx->pc = 0x1e0ec8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1e0ecc:
    // 0x1e0ecc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1e0eccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1e0ed0:
    // 0x1e0ed0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1e0ed4:
    if (ctx->pc == 0x1E0ED4u) {
        ctx->pc = 0x1E0ED8u;
        goto label_1e0ed8;
    }
    ctx->pc = 0x1E0ED0u;
    {
        const bool branch_taken_0x1e0ed0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0ed0) {
            ctx->pc = 0x1E0EE4u;
            goto label_1e0ee4;
        }
    }
    ctx->pc = 0x1E0ED8u;
label_1e0ed8:
    // 0x1e0ed8: 0xc070038  jal         func_1C00E0
label_1e0edc:
    if (ctx->pc == 0x1E0EDCu) {
        ctx->pc = 0x1E0EE0u;
        goto label_1e0ee0;
    }
    ctx->pc = 0x1E0ED8u;
    SET_GPR_U32(ctx, 31, 0x1E0EE0u);
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x1E0EE0u;
label_1e0ee0:
    // 0x1e0ee0: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1e0ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_1e0ee4:
    // 0x1e0ee4: 0x0  nop
    ctx->pc = 0x1e0ee4u;
    // NOP
label_1e0ee8:
    // 0x1e0ee8: 0x27828da0  addiu       $v0, $gp, -0x7260
    ctx->pc = 0x1e0ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938016));
label_1e0eec:
    // 0x1e0eec: 0x538821  addu        $s1, $v0, $s3
    ctx->pc = 0x1e0eecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1e0ef0:
    // 0x1e0ef0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1e0ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1e0ef4:
    // 0x1e0ef4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1e0ef8:
    if (ctx->pc == 0x1E0EF8u) {
        ctx->pc = 0x1E0EFCu;
        goto label_1e0efc;
    }
    ctx->pc = 0x1E0EF4u;
    {
        const bool branch_taken_0x1e0ef4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0ef4) {
            ctx->pc = 0x1E0F08u;
            goto label_1e0f08;
        }
    }
    ctx->pc = 0x1E0EFCu;
label_1e0efc:
    // 0x1e0efc: 0xc070038  jal         func_1C00E0
label_1e0f00:
    if (ctx->pc == 0x1E0F00u) {
        ctx->pc = 0x1E0F04u;
        goto label_1e0f04;
    }
    ctx->pc = 0x1E0EFCu;
    SET_GPR_U32(ctx, 31, 0x1E0F04u);
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x1E0F04u;
label_1e0f04:
    // 0x1e0f04: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1e0f04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_1e0f08:
    // 0x1e0f08: 0x27828d98  addiu       $v0, $gp, -0x7268
    ctx->pc = 0x1e0f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938008));
label_1e0f0c:
    // 0x1e0f0c: 0x538821  addu        $s1, $v0, $s3
    ctx->pc = 0x1e0f0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1e0f10:
    // 0x1e0f10: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1e0f10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1e0f14:
    // 0x1e0f14: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1e0f18:
    if (ctx->pc == 0x1E0F18u) {
        ctx->pc = 0x1E0F1Cu;
        goto label_1e0f1c;
    }
    ctx->pc = 0x1E0F14u;
    {
        const bool branch_taken_0x1e0f14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0f14) {
            ctx->pc = 0x1E0F28u;
            goto label_1e0f28;
        }
    }
    ctx->pc = 0x1E0F1Cu;
label_1e0f1c:
    // 0x1e0f1c: 0xc070038  jal         func_1C00E0
label_1e0f20:
    if (ctx->pc == 0x1E0F20u) {
        ctx->pc = 0x1E0F24u;
        goto label_1e0f24;
    }
    ctx->pc = 0x1E0F1Cu;
    SET_GPR_U32(ctx, 31, 0x1E0F24u);
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x1E0F24u;
label_1e0f24:
    // 0x1e0f24: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1e0f24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_1e0f28:
    // 0x1e0f28: 0x27828d78  addiu       $v0, $gp, -0x7288
    ctx->pc = 0x1e0f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937976));
label_1e0f2c:
    // 0x1e0f2c: 0x538821  addu        $s1, $v0, $s3
    ctx->pc = 0x1e0f2cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1e0f30:
    // 0x1e0f30: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1e0f30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1e0f34:
    // 0x1e0f34: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1e0f38:
    if (ctx->pc == 0x1E0F38u) {
        ctx->pc = 0x1E0F3Cu;
        goto label_1e0f3c;
    }
    ctx->pc = 0x1E0F34u;
    {
        const bool branch_taken_0x1e0f34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0f34) {
            ctx->pc = 0x1E0F48u;
            goto label_1e0f48;
        }
    }
    ctx->pc = 0x1E0F3Cu;
label_1e0f3c:
    // 0x1e0f3c: 0xc070038  jal         func_1C00E0
label_1e0f40:
    if (ctx->pc == 0x1E0F40u) {
        ctx->pc = 0x1E0F44u;
        goto label_1e0f44;
    }
    ctx->pc = 0x1E0F3Cu;
    SET_GPR_U32(ctx, 31, 0x1E0F44u);
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x1E0F44u;
label_1e0f44:
    // 0x1e0f44: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1e0f44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_1e0f48:
    // 0x1e0f48: 0x27828d58  addiu       $v0, $gp, -0x72A8
    ctx->pc = 0x1e0f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937944));
label_1e0f4c:
    // 0x1e0f4c: 0x538821  addu        $s1, $v0, $s3
    ctx->pc = 0x1e0f4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1e0f50:
    // 0x1e0f50: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1e0f50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1e0f54:
    // 0x1e0f54: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1e0f58:
    if (ctx->pc == 0x1E0F58u) {
        ctx->pc = 0x1E0F5Cu;
        goto label_1e0f5c;
    }
    ctx->pc = 0x1E0F54u;
    {
        const bool branch_taken_0x1e0f54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0f54) {
            ctx->pc = 0x1E0F68u;
            goto label_1e0f68;
        }
    }
    ctx->pc = 0x1E0F5Cu;
label_1e0f5c:
    // 0x1e0f5c: 0xc070038  jal         func_1C00E0
label_1e0f60:
    if (ctx->pc == 0x1E0F60u) {
        ctx->pc = 0x1E0F64u;
        goto label_1e0f64;
    }
    ctx->pc = 0x1E0F5Cu;
    SET_GPR_U32(ctx, 31, 0x1E0F64u);
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x1E0F64u;
label_1e0f64:
    // 0x1e0f64: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1e0f64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_1e0f68:
    // 0x1e0f68: 0x27828d40  addiu       $v0, $gp, -0x72C0
    ctx->pc = 0x1e0f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937920));
label_1e0f6c:
    // 0x1e0f6c: 0x538821  addu        $s1, $v0, $s3
    ctx->pc = 0x1e0f6cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1e0f70:
    // 0x1e0f70: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1e0f70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1e0f74:
    // 0x1e0f74: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1e0f78:
    if (ctx->pc == 0x1E0F78u) {
        ctx->pc = 0x1E0F7Cu;
        goto label_1e0f7c;
    }
    ctx->pc = 0x1E0F74u;
    {
        const bool branch_taken_0x1e0f74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0f74) {
            ctx->pc = 0x1E0F88u;
            goto label_1e0f88;
        }
    }
    ctx->pc = 0x1E0F7Cu;
label_1e0f7c:
    // 0x1e0f7c: 0xc070038  jal         func_1C00E0
label_1e0f80:
    if (ctx->pc == 0x1E0F80u) {
        ctx->pc = 0x1E0F84u;
        goto label_1e0f84;
    }
    ctx->pc = 0x1E0F7Cu;
    SET_GPR_U32(ctx, 31, 0x1E0F84u);
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x1E0F84u;
label_1e0f84:
    // 0x1e0f84: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1e0f84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_1e0f88:
    // 0x1e0f88: 0x8f838218  lw          $v1, -0x7DE8($gp)
    ctx->pc = 0x1e0f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_1e0f8c:
    // 0x1e0f8c: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x1e0f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_1e0f90:
    // 0x1e0f90: 0x1462001d  bne         $v1, $v0, . + 4 + (0x1D << 2)
label_1e0f94:
    if (ctx->pc == 0x1E0F94u) {
        ctx->pc = 0x1E0F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0F90u;
        // 0x1e0f94: 0x27828d88  addiu       $v0, $gp, -0x7278 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937992));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0F98u;
        goto label_1e0f98;
    }
    ctx->pc = 0x1E0F90u;
    {
        const bool branch_taken_0x1e0f90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E0F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0F90u;
        // 0x1e0f94: 0x27828d88  addiu       $v0, $gp, -0x7278 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937992));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0f90) {
            ctx->pc = 0x1E1008u;
            goto label_1e1008;
        }
    }
    ctx->pc = 0x1E0F98u;
label_1e0f98:
    // 0x1e0f98: 0x538821  addu        $s1, $v0, $s3
    ctx->pc = 0x1e0f98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1e0f9c:
    // 0x1e0f9c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1e0f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1e0fa0:
    // 0x1e0fa0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1e0fa4:
    if (ctx->pc == 0x1E0FA4u) {
        ctx->pc = 0x1E0FA8u;
        goto label_1e0fa8;
    }
    ctx->pc = 0x1E0FA0u;
    {
        const bool branch_taken_0x1e0fa0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0fa0) {
            ctx->pc = 0x1E0FB4u;
            goto label_1e0fb4;
        }
    }
    ctx->pc = 0x1E0FA8u;
label_1e0fa8:
    // 0x1e0fa8: 0xc070038  jal         func_1C00E0
label_1e0fac:
    if (ctx->pc == 0x1E0FACu) {
        ctx->pc = 0x1E0FB0u;
        goto label_1e0fb0;
    }
    ctx->pc = 0x1E0FA8u;
    SET_GPR_U32(ctx, 31, 0x1E0FB0u);
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x1E0FB0u;
label_1e0fb0:
    // 0x1e0fb0: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1e0fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_1e0fb4:
    // 0x1e0fb4: 0x0  nop
    ctx->pc = 0x1e0fb4u;
    // NOP
label_1e0fb8:
    // 0x1e0fb8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1e0fb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e0fbc:
    // 0x1e0fbc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1e0fbcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e0fc0:
    // 0x1e0fc0: 0x0  nop
    ctx->pc = 0x1e0fc0u;
    // NOP
label_1e0fc4:
    // 0x1e0fc4: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1e0fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
label_1e0fc8:
    // 0x1e0fc8: 0x244226b0  addiu       $v0, $v0, 0x26B0
    ctx->pc = 0x1e0fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9904));
label_1e0fcc:
    // 0x1e0fcc: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1e0fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1e0fd0:
    // 0x1e0fd0: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x1e0fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_1e0fd4:
    // 0x1e0fd4: 0x52a021  addu        $s4, $v0, $s2
    ctx->pc = 0x1e0fd4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_1e0fd8:
    // 0x1e0fd8: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x1e0fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1e0fdc:
    // 0x1e0fdc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1e0fe0:
    if (ctx->pc == 0x1E0FE0u) {
        ctx->pc = 0x1E0FE4u;
        goto label_1e0fe4;
    }
    ctx->pc = 0x1E0FDCu;
    {
        const bool branch_taken_0x1e0fdc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0fdc) {
            ctx->pc = 0x1E0FF0u;
            goto label_1e0ff0;
        }
    }
    ctx->pc = 0x1E0FE4u;
label_1e0fe4:
    // 0x1e0fe4: 0xc070038  jal         func_1C00E0
label_1e0fe8:
    if (ctx->pc == 0x1E0FE8u) {
        ctx->pc = 0x1E0FECu;
        goto label_1e0fec;
    }
    ctx->pc = 0x1E0FE4u;
    SET_GPR_U32(ctx, 31, 0x1E0FECu);
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x1E0FECu;
label_1e0fec:
    // 0x1e0fec: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x1e0fecu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
label_1e0ff0:
    // 0x1e0ff0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1e0ff0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1e0ff4:
    // 0x1e0ff4: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x1e0ff4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
label_1e0ff8:
    // 0x1e0ff8: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
label_1e0ffc:
    if (ctx->pc == 0x1E0FFCu) {
        ctx->pc = 0x1E0FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0FF8u;
        // 0x1e0ffc: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1000u;
        goto label_1e1000;
    }
    ctx->pc = 0x1E0FF8u;
    {
        const bool branch_taken_0x1e0ff8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E0FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0FF8u;
        // 0x1e0ffc: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0ff8) {
            ctx->pc = 0x1E0FC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e0fc0;
        }
    }
    ctx->pc = 0x1E1000u;
label_1e1000:
    // 0x1e1000: 0x1000001b  b           . + 4 + (0x1B << 2)
label_1e1004:
    if (ctx->pc == 0x1E1004u) {
        ctx->pc = 0x1E1008u;
        goto label_1e1008;
    }
    ctx->pc = 0x1E1000u;
    {
        const bool branch_taken_0x1e1000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1000) {
            ctx->pc = 0x1E1070u;
            goto label_1e1070;
        }
    }
    ctx->pc = 0x1E1008u;
label_1e1008:
    // 0x1e1008: 0x27828d88  addiu       $v0, $gp, -0x7278
    ctx->pc = 0x1e1008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937992));
label_1e100c:
    // 0x1e100c: 0x538821  addu        $s1, $v0, $s3
    ctx->pc = 0x1e100cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1e1010:
    // 0x1e1010: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1e1010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1e1014:
    // 0x1e1014: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1e1018:
    if (ctx->pc == 0x1E1018u) {
        ctx->pc = 0x1E101Cu;
        goto label_1e101c;
    }
    ctx->pc = 0x1E1014u;
    {
        const bool branch_taken_0x1e1014 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1014) {
            ctx->pc = 0x1E1028u;
            goto label_1e1028;
        }
    }
    ctx->pc = 0x1E101Cu;
label_1e101c:
    // 0x1e101c: 0xc070038  jal         func_1C00E0
label_1e1020:
    if (ctx->pc == 0x1E1020u) {
        ctx->pc = 0x1E1024u;
        goto label_1e1024;
    }
    ctx->pc = 0x1E101Cu;
    SET_GPR_U32(ctx, 31, 0x1E1024u);
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x1E1024u;
label_1e1024:
    // 0x1e1024: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1e1024u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_1e1028:
    // 0x1e1028: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1e1028u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e102c:
    // 0x1e102c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1e102cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e1030:
    // 0x1e1030: 0x0  nop
    ctx->pc = 0x1e1030u;
    // NOP
label_1e1034:
    // 0x1e1034: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1e1034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
label_1e1038:
    // 0x1e1038: 0x244226b0  addiu       $v0, $v0, 0x26B0
    ctx->pc = 0x1e1038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9904));
label_1e103c:
    // 0x1e103c: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1e103cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1e1040:
    // 0x1e1040: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x1e1040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_1e1044:
    // 0x1e1044: 0x51a021  addu        $s4, $v0, $s1
    ctx->pc = 0x1e1044u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1e1048:
    // 0x1e1048: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x1e1048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1e104c:
    // 0x1e104c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1e1050:
    if (ctx->pc == 0x1E1050u) {
        ctx->pc = 0x1E1054u;
        goto label_1e1054;
    }
    ctx->pc = 0x1E104Cu;
    {
        const bool branch_taken_0x1e104c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e104c) {
            ctx->pc = 0x1E1060u;
            goto label_1e1060;
        }
    }
    ctx->pc = 0x1E1054u;
label_1e1054:
    // 0x1e1054: 0xc070038  jal         func_1C00E0
label_1e1058:
    if (ctx->pc == 0x1E1058u) {
        ctx->pc = 0x1E105Cu;
        goto label_1e105c;
    }
    ctx->pc = 0x1E1054u;
    SET_GPR_U32(ctx, 31, 0x1E105Cu);
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x1E105Cu;
label_1e105c:
    // 0x1e105c: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x1e105cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
label_1e1060:
    // 0x1e1060: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1e1060u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1e1064:
    // 0x1e1064: 0x2a420003  slti        $v0, $s2, 0x3
    ctx->pc = 0x1e1064u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
label_1e1068:
    // 0x1e1068: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
label_1e106c:
    if (ctx->pc == 0x1E106Cu) {
        ctx->pc = 0x1E106Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1068u;
        // 0x1e106c: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1070u;
        goto label_1e1070;
    }
    ctx->pc = 0x1E1068u;
    {
        const bool branch_taken_0x1e1068 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E106Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1068u;
        // 0x1e106c: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1068) {
            ctx->pc = 0x1E1030u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e1030;
        }
    }
    ctx->pc = 0x1E1070u;
label_1e1070:
    // 0x1e1070: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1e1070u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1e1074:
    // 0x1e1074: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x1e1074u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_1e1078:
    // 0x1e1078: 0x1440ff92  bnez        $v0, . + 4 + (-0x6E << 2)
label_1e107c:
    if (ctx->pc == 0x1E107Cu) {
        ctx->pc = 0x1E107Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1078u;
        // 0x1e107c: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1080u;
        goto label_1e1080;
    }
    ctx->pc = 0x1E1078u;
    {
        const bool branch_taken_0x1e1078 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E107Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1078u;
        // 0x1e107c: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1078) {
            ctx->pc = 0x1E0EC4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e0ec4;
        }
    }
    ctx->pc = 0x1E1080u;
label_1e1080:
    // 0x1e1080: 0xc07ab58  jal         func_1EAD60
label_1e1084:
    if (ctx->pc == 0x1E1084u) {
        ctx->pc = 0x1E1088u;
        goto label_1e1088;
    }
    ctx->pc = 0x1E1080u;
    SET_GPR_U32(ctx, 31, 0x1E1088u);
    ctx->pc = 0x1EAD60u;
    { ctx->pc = 0x1ead60; return; }
    ctx->pc = 0x1E1088u;
label_1e1088:
    // 0x1e1088: 0xc04e19c  jal         func_138670
label_1e108c:
    if (ctx->pc == 0x1E108Cu) {
        ctx->pc = 0x1E1090u;
        goto label_1e1090;
    }
    ctx->pc = 0x1E1088u;
    SET_GPR_U32(ctx, 31, 0x1E1090u);
    ctx->pc = 0x138670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138670u, 0x1E1088u, 0x1E1090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1090u;
label_1e1090:
    // 0x1e1090: 0x8f838db0  lw          $v1, -0x7250($gp)
    ctx->pc = 0x1e1090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938032)));
label_1e1094:
    // 0x1e1094: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1e1098:
    if (ctx->pc == 0x1E1098u) {
        ctx->pc = 0x1E109Cu;
        goto label_1e109c;
    }
    ctx->pc = 0x1E1094u;
    {
        const bool branch_taken_0x1e1094 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1094) {
            ctx->pc = 0x1E10A4u;
            goto label_1e10a4;
        }
    }
    ctx->pc = 0x1E109Cu;
label_1e109c:
    // 0x1e109c: 0xc07a0dc  jal         func_1E8370
label_1e10a0:
    if (ctx->pc == 0x1E10A0u) {
        ctx->pc = 0x1E10A4u;
        goto label_1e10a4;
    }
    ctx->pc = 0x1E109Cu;
    SET_GPR_U32(ctx, 31, 0x1E10A4u);
    ctx->pc = 0x1E8370u;
    { ctx->pc = 0x1e8370; return; }
    ctx->pc = 0x1E10A4u;
label_1e10a4:
    // 0x1e10a4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1e10a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1e10a8:
    // 0x1e10a8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1e10a8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1e10ac:
    // 0x1e10ac: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e10acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e10b0:
    // 0x1e10b0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e10b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e10b4:
    // 0x1e10b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e10b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e10b8:
    // 0x1e10b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e10b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e10bc:
    // 0x1e10bc: 0x3e00008  jr          $ra
label_1e10c0:
    if (ctx->pc == 0x1E10C0u) {
        ctx->pc = 0x1E10C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E10BCu;
        // 0x1e10c0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E10C4u;
        goto label_1e10c4;
    }
    ctx->pc = 0x1E10BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E10C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E10BCu;
        // 0x1e10c0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E10BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E10C4u;
label_1e10c4:
    // 0x1e10c4: 0x0  nop
    ctx->pc = 0x1e10c4u;
    // NOP
label_1e10c8:
    // 0x1e10c8: 0x0  nop
    ctx->pc = 0x1e10c8u;
    // NOP
label_1e10cc:
    // 0x1e10cc: 0x0  nop
    ctx->pc = 0x1e10ccu;
    // NOP
label_1e10d0:
    // 0x1e10d0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1e10d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_1e10d4:
    // 0x1e10d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e10d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e10d8:
    // 0x1e10d8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1e10d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_1e10dc:
    // 0x1e10dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e10dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e10e0:
    // 0x1e10e0: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x1e10e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_1e10e4:
    // 0x1e10e4: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1e10e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_1e10e8:
    // 0x1e10e8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1e10e8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e10ec:
    // 0x1e10ec: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1e10ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_1e10f0:
    // 0x1e10f0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1e10f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e10f4:
    // 0x1e10f4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1e10f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_1e10f8:
    // 0x1e10f8: 0xc06dfd4  jal         func_1B7F50
label_1e10fc:
    if (ctx->pc == 0x1E10FCu) {
        ctx->pc = 0x1E10FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E10F8u;
        // 0x1e10fc: 0x7fb00020  sq          $s0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1100u;
        goto label_1e1100;
    }
    ctx->pc = 0x1E10F8u;
    SET_GPR_U32(ctx, 31, 0x1E1100u);
    ctx->pc = 0x1E10FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E10F8u;
    // 0x1e10fc: 0x7fb00020  sq          $s0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7F50u;
    { ctx->pc = 0x1b7f50; return; }
    ctx->pc = 0x1E1100u;
label_1e1100:
    // 0x1e1100: 0xc041738  jal         func_105CE0
label_1e1104:
    if (ctx->pc == 0x1E1104u) {
        ctx->pc = 0x1E1104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1100u;
        // 0x1e1104: 0x240407e8  addiu       $a0, $zero, 0x7E8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1108u;
        goto label_1e1108;
    }
    ctx->pc = 0x1E1100u;
    SET_GPR_U32(ctx, 31, 0x1E1108u);
    ctx->pc = 0x1E1104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1100u;
    // 0x1e1104: 0x240407e8  addiu       $a0, $zero, 0x7E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105CE0u, 0x1E1100u, 0x1E1108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1108u;
label_1e1108:
    // 0x1e1108: 0x22ac0  sll         $a1, $v0, 11
    ctx->pc = 0x1e1108u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
label_1e110c:
    // 0x1e110c: 0xc070080  jal         func_1C0200
label_1e1110:
    if (ctx->pc == 0x1E1110u) {
        ctx->pc = 0x1E1110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E110Cu;
        // 0x1e1110: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1114u;
        goto label_1e1114;
    }
    ctx->pc = 0x1E110Cu;
    SET_GPR_U32(ctx, 31, 0x1E1114u);
    ctx->pc = 0x1E1110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E110Cu;
    // 0x1e1110: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x1E1114u;
label_1e1114:
    // 0x1e1114: 0x240407e8  addiu       $a0, $zero, 0x7E8
    ctx->pc = 0x1e1114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2024));
label_1e1118:
    // 0x1e1118: 0xc0416e4  jal         func_105B90
label_1e111c:
    if (ctx->pc == 0x1E111Cu) {
        ctx->pc = 0x1E111Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1118u;
        // 0x1e111c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1120u;
        goto label_1e1120;
    }
    ctx->pc = 0x1E1118u;
    SET_GPR_U32(ctx, 31, 0x1E1120u);
    ctx->pc = 0x1E111Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1118u;
    // 0x1e111c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105B90u, 0x1E1118u, 0x1E1120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1120u;
label_1e1120:
    // 0x1e1120: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e1120u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e1124:
    // 0x1e1124: 0xc060678  jal         func_1819E0
label_1e1128:
    if (ctx->pc == 0x1E1128u) {
        ctx->pc = 0x1E1128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1124u;
        // 0x1e1128: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E112Cu;
        goto label_1e112c;
    }
    ctx->pc = 0x1E1124u;
    SET_GPR_U32(ctx, 31, 0x1E112Cu);
    ctx->pc = 0x1E1128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1124u;
    // 0x1e1128: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1819E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1819E0u, 0x1E1124u, 0x1E112Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E112Cu;
label_1e112c:
    // 0x1e112c: 0x28c3c  dsll32      $s1, $v0, 16
    ctx->pc = 0x1e112cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 16));
label_1e1130:
    // 0x1e1130: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1e1130u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e1134:
    // 0x1e1134: 0x118c3f  dsra32      $s1, $s1, 16
    ctx->pc = 0x1e1134u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
label_1e1138:
    // 0x1e1138: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1e1138u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e113c:
    // 0x1e113c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e113cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e1140:
    // 0x1e1140: 0xc0602c8  jal         func_180B20
label_1e1144:
    if (ctx->pc == 0x1E1144u) {
        ctx->pc = 0x1E1144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1140u;
        // 0x1e1144: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1148u;
        goto label_1e1148;
    }
    ctx->pc = 0x1E1140u;
    SET_GPR_U32(ctx, 31, 0x1E1148u);
    ctx->pc = 0x1E1144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1140u;
    // 0x1e1144: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180B20u, 0x1E1140u, 0x1E1148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1148u;
label_1e1148:
    // 0x1e1148: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1e1148u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e114c:
    // 0x1e114c: 0x26470018  addiu       $a3, $s2, 0x18
    ctx->pc = 0x1e114cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
label_1e1150:
    // 0x1e1150: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e1150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e1154:
    // 0x1e1154: 0x27a6008e  addiu       $a2, $sp, 0x8E
    ctx->pc = 0x1e1154u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 142));
label_1e1158:
    // 0x1e1158: 0xc060390  jal         func_180E40
label_1e115c:
    if (ctx->pc == 0x1E115Cu) {
        ctx->pc = 0x1E115Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1158u;
        // 0x1e115c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1160u;
        goto label_1e1160;
    }
    ctx->pc = 0x1E1158u;
    SET_GPR_U32(ctx, 31, 0x1E1160u);
    ctx->pc = 0x1E115Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1158u;
    // 0x1e115c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180E40u, 0x1E1158u, 0x1E1160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1160u;
label_1e1160:
    // 0x1e1160: 0x3c03004b  lui         $v1, 0x4B
    ctx->pc = 0x1e1160u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)75 << 16));
label_1e1164:
    // 0x1e1164: 0x24632900  addiu       $v1, $v1, 0x2900
    ctx->pc = 0x1e1164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10496));
label_1e1168:
    // 0x1e1168: 0x738821  addu        $s1, $v1, $s3
    ctx->pc = 0x1e1168u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_1e116c:
    // 0x1e116c: 0xfe220000  sd          $v0, 0x0($s1)
    ctx->pc = 0x1e116cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
label_1e1170:
    // 0x1e1170: 0xde240000  ld          $a0, 0x0($s1)
    ctx->pc = 0x1e1170u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 0)));
label_1e1174:
    // 0x1e1174: 0xc06063c  jal         func_1818F0
label_1e1178:
    if (ctx->pc == 0x1E1178u) {
        ctx->pc = 0x1E1178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1174u;
        // 0x1e1178: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E117Cu;
        goto label_1e117c;
    }
    ctx->pc = 0x1E1174u;
    SET_GPR_U32(ctx, 31, 0x1E117Cu);
    ctx->pc = 0x1E1178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1174u;
    // 0x1e1178: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1818F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1818F0u, 0x1E1174u, 0x1E117Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E117Cu;
label_1e117c:
    // 0x1e117c: 0xfe220000  sd          $v0, 0x0($s1)
    ctx->pc = 0x1e117cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
label_1e1180:
    // 0x1e1180: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1e1180u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1e1184:
    // 0x1e1184: 0x87b1008e  lh          $s1, 0x8E($sp)
    ctx->pc = 0x1e1184u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 142)));
label_1e1188:
    // 0x1e1188: 0x2a420028  slti        $v0, $s2, 0x28
    ctx->pc = 0x1e1188u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)40) ? 1 : 0);
label_1e118c:
    // 0x1e118c: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
label_1e1190:
    if (ctx->pc == 0x1E1190u) {
        ctx->pc = 0x1E1190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E118Cu;
        // 0x1e1190: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1194u;
        goto label_1e1194;
    }
    ctx->pc = 0x1E118Cu;
    {
        const bool branch_taken_0x1e118c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E1190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E118Cu;
        // 0x1e1190: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e118c) {
            ctx->pc = 0x1E113Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e113c;
        }
    }
    ctx->pc = 0x1E1194u;
label_1e1194:
    // 0x1e1194: 0xc070038  jal         func_1C00E0
label_1e1198:
    if (ctx->pc == 0x1E1198u) {
        ctx->pc = 0x1E1198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1194u;
        // 0x1e1198: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E119Cu;
        goto label_1e119c;
    }
    ctx->pc = 0x1E1194u;
    SET_GPR_U32(ctx, 31, 0x1E119Cu);
    ctx->pc = 0x1E1198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1194u;
    // 0x1e1198: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x1E119Cu;
label_1e119c:
    // 0x1e119c: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x1e119cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_1e11a0:
    // 0x1e11a0: 0xaf948218  sw          $s4, -0x7DE8($gp)
    ctx->pc = 0x1e11a0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935064), GPR_U32(ctx, 20));
label_1e11a4:
    // 0x1e11a4: 0xaf828dc0  sw          $v0, -0x7240($gp)
    ctx->pc = 0x1e11a4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938048), GPR_U32(ctx, 2));
label_1e11a8:
    // 0x1e11a8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1e11a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e11ac:
    // 0x1e11ac: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1e11acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e11b0:
    // 0x1e11b0: 0x27828da8  addiu       $v0, $gp, -0x7258
    ctx->pc = 0x1e11b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938024));
label_1e11b4:
    // 0x1e11b4: 0x538821  addu        $s1, $v0, $s3
    ctx->pc = 0x1e11b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1e11b8:
    // 0x1e11b8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1e11b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1e11bc:
    // 0x1e11bc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1e11c0:
    if (ctx->pc == 0x1E11C0u) {
        ctx->pc = 0x1E11C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E11BCu;
        // 0x1e11c0: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E11C4u;
        goto label_1e11c4;
    }
    ctx->pc = 0x1E11BCu;
    {
        const bool branch_taken_0x1e11bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E11C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E11BCu;
        // 0x1e11c0: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e11bc) {
            ctx->pc = 0x1E11D0u;
            goto label_1e11d0;
        }
    }
    ctx->pc = 0x1E11C4u;
label_1e11c4:
    // 0x1e11c4: 0xc070080  jal         func_1C0200
label_1e11c8:
    if (ctx->pc == 0x1E11C8u) {
        ctx->pc = 0x1E11C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E11C4u;
        // 0x1e11c8: 0x240500b0  addiu       $a1, $zero, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E11CCu;
        goto label_1e11cc;
    }
    ctx->pc = 0x1E11C4u;
    SET_GPR_U32(ctx, 31, 0x1E11CCu);
    ctx->pc = 0x1E11C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E11C4u;
    // 0x1e11c8: 0x240500b0  addiu       $a1, $zero, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x1E11CCu;
label_1e11cc:
    // 0x1e11cc: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1e11ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1e11d0:
    // 0x1e11d0: 0x27828da0  addiu       $v0, $gp, -0x7260
    ctx->pc = 0x1e11d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938016));
label_1e11d4:
    // 0x1e11d4: 0x538821  addu        $s1, $v0, $s3
    ctx->pc = 0x1e11d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1e11d8:
    // 0x1e11d8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1e11d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1e11dc:
    // 0x1e11dc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1e11e0:
    if (ctx->pc == 0x1E11E0u) {
        ctx->pc = 0x1E11E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E11DCu;
        // 0x1e11e0: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E11E4u;
        goto label_1e11e4;
    }
    ctx->pc = 0x1E11DCu;
    {
        const bool branch_taken_0x1e11dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E11E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E11DCu;
        // 0x1e11e0: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e11dc) {
            ctx->pc = 0x1E11F0u;
            goto label_1e11f0;
        }
    }
    ctx->pc = 0x1E11E4u;
label_1e11e4:
    // 0x1e11e4: 0xc070080  jal         func_1C0200
label_1e11e8:
    if (ctx->pc == 0x1E11E8u) {
        ctx->pc = 0x1E11E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E11E4u;
        // 0x1e11e8: 0x240500b0  addiu       $a1, $zero, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E11ECu;
        goto label_1e11ec;
    }
    ctx->pc = 0x1E11E4u;
    SET_GPR_U32(ctx, 31, 0x1E11ECu);
    ctx->pc = 0x1E11E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E11E4u;
    // 0x1e11e8: 0x240500b0  addiu       $a1, $zero, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x1E11ECu;
label_1e11ec:
    // 0x1e11ec: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1e11ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1e11f0:
    // 0x1e11f0: 0x27828d98  addiu       $v0, $gp, -0x7268
    ctx->pc = 0x1e11f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938008));
label_1e11f4:
    // 0x1e11f4: 0x538821  addu        $s1, $v0, $s3
    ctx->pc = 0x1e11f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1e11f8:
    // 0x1e11f8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1e11f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1e11fc:
    // 0x1e11fc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1e1200:
    if (ctx->pc == 0x1E1200u) {
        ctx->pc = 0x1E1200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E11FCu;
        // 0x1e1200: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1204u;
        goto label_1e1204;
    }
    ctx->pc = 0x1E11FCu;
    {
        const bool branch_taken_0x1e11fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E1200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E11FCu;
        // 0x1e1200: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e11fc) {
            ctx->pc = 0x1E1210u;
            goto label_1e1210;
        }
    }
    ctx->pc = 0x1E1204u;
label_1e1204:
    // 0x1e1204: 0xc070080  jal         func_1C0200
label_1e1208:
    if (ctx->pc == 0x1E1208u) {
        ctx->pc = 0x1E1208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1204u;
        // 0x1e1208: 0x240500b0  addiu       $a1, $zero, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E120Cu;
        goto label_1e120c;
    }
    ctx->pc = 0x1E1204u;
    SET_GPR_U32(ctx, 31, 0x1E120Cu);
    ctx->pc = 0x1E1208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1204u;
    // 0x1e1208: 0x240500b0  addiu       $a1, $zero, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x1E120Cu;
label_1e120c:
    // 0x1e120c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1e120cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1e1210:
    // 0x1e1210: 0x27828d78  addiu       $v0, $gp, -0x7288
    ctx->pc = 0x1e1210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937976));
label_1e1214:
    // 0x1e1214: 0x538821  addu        $s1, $v0, $s3
    ctx->pc = 0x1e1214u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1e1218:
    // 0x1e1218: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1e1218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1e121c:
    // 0x1e121c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1e1220:
    if (ctx->pc == 0x1E1220u) {
        ctx->pc = 0x1E1220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E121Cu;
        // 0x1e1220: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1224u;
        goto label_1e1224;
    }
    ctx->pc = 0x1E121Cu;
    {
        const bool branch_taken_0x1e121c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E1220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E121Cu;
        // 0x1e1220: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e121c) {
            ctx->pc = 0x1E1230u;
            goto label_1e1230;
        }
    }
    ctx->pc = 0x1E1224u;
label_1e1224:
    // 0x1e1224: 0xc070080  jal         func_1C0200
label_1e1228:
    if (ctx->pc == 0x1E1228u) {
        ctx->pc = 0x1E1228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1224u;
        // 0x1e1228: 0x24050540  addiu       $a1, $zero, 0x540 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1344));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E122Cu;
        goto label_1e122c;
    }
    ctx->pc = 0x1E1224u;
    SET_GPR_U32(ctx, 31, 0x1E122Cu);
    ctx->pc = 0x1E1228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1224u;
    // 0x1e1228: 0x24050540  addiu       $a1, $zero, 0x540 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x1E122Cu;
label_1e122c:
    // 0x1e122c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1e122cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1e1230:
    // 0x1e1230: 0x27828d58  addiu       $v0, $gp, -0x72A8
    ctx->pc = 0x1e1230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937944));
label_1e1234:
    // 0x1e1234: 0x538821  addu        $s1, $v0, $s3
    ctx->pc = 0x1e1234u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1e1238:
    // 0x1e1238: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1e1238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1e123c:
    // 0x1e123c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1e1240:
    if (ctx->pc == 0x1E1240u) {
        ctx->pc = 0x1E1240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E123Cu;
        // 0x1e1240: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1244u;
        goto label_1e1244;
    }
    ctx->pc = 0x1E123Cu;
    {
        const bool branch_taken_0x1e123c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E1240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E123Cu;
        // 0x1e1240: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e123c) {
            ctx->pc = 0x1E1250u;
            goto label_1e1250;
        }
    }
    ctx->pc = 0x1E1244u;
label_1e1244:
    // 0x1e1244: 0xc070080  jal         func_1C0200
label_1e1248:
    if (ctx->pc == 0x1E1248u) {
        ctx->pc = 0x1E1248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1244u;
        // 0x1e1248: 0x24050510  addiu       $a1, $zero, 0x510 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1296));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E124Cu;
        goto label_1e124c;
    }
    ctx->pc = 0x1E1244u;
    SET_GPR_U32(ctx, 31, 0x1E124Cu);
    ctx->pc = 0x1E1248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1244u;
    // 0x1e1248: 0x24050510  addiu       $a1, $zero, 0x510 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x1E124Cu;
label_1e124c:
    // 0x1e124c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1e124cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1e1250:
    // 0x1e1250: 0x27828d40  addiu       $v0, $gp, -0x72C0
    ctx->pc = 0x1e1250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937920));
label_1e1254:
    // 0x1e1254: 0x538821  addu        $s1, $v0, $s3
    ctx->pc = 0x1e1254u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1e1258:
    // 0x1e1258: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1e1258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1e125c:
    // 0x1e125c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1e1260:
    if (ctx->pc == 0x1E1260u) {
        ctx->pc = 0x1E1260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E125Cu;
        // 0x1e1260: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1264u;
        goto label_1e1264;
    }
    ctx->pc = 0x1E125Cu;
    {
        const bool branch_taken_0x1e125c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E1260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E125Cu;
        // 0x1e1260: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e125c) {
            ctx->pc = 0x1E1270u;
            goto label_1e1270;
        }
    }
    ctx->pc = 0x1E1264u;
label_1e1264:
    // 0x1e1264: 0xc070080  jal         func_1C0200
label_1e1268:
    if (ctx->pc == 0x1E1268u) {
        ctx->pc = 0x1E1268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1264u;
        // 0x1e1268: 0x24050970  addiu       $a1, $zero, 0x970 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2416));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E126Cu;
        goto label_1e126c;
    }
    ctx->pc = 0x1E1264u;
    SET_GPR_U32(ctx, 31, 0x1E126Cu);
    ctx->pc = 0x1E1268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1264u;
    // 0x1e1268: 0x24050970  addiu       $a1, $zero, 0x970 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x1E126Cu;
label_1e126c:
    // 0x1e126c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1e126cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1e1270:
    // 0x1e1270: 0x8f838218  lw          $v1, -0x7DE8($gp)
    ctx->pc = 0x1e1270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_1e1274:
    // 0x1e1274: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x1e1274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_1e1278:
    // 0x1e1278: 0x1462001d  bne         $v1, $v0, . + 4 + (0x1D << 2)
label_1e127c:
    if (ctx->pc == 0x1E127Cu) {
        ctx->pc = 0x1E127Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1278u;
        // 0x1e127c: 0x27828d88  addiu       $v0, $gp, -0x7278 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937992));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1280u;
        goto label_1e1280;
    }
    ctx->pc = 0x1E1278u;
    {
        const bool branch_taken_0x1e1278 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E127Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1278u;
        // 0x1e127c: 0x27828d88  addiu       $v0, $gp, -0x7278 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937992));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1278) {
            ctx->pc = 0x1E12F0u;
            goto label_1e12f0;
        }
    }
    ctx->pc = 0x1E1280u;
label_1e1280:
    // 0x1e1280: 0x538821  addu        $s1, $v0, $s3
    ctx->pc = 0x1e1280u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1e1284:
    // 0x1e1284: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1e1284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1e1288:
    // 0x1e1288: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1e128c:
    if (ctx->pc == 0x1E128Cu) {
        ctx->pc = 0x1E128Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1288u;
        // 0x1e128c: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1290u;
        goto label_1e1290;
    }
    ctx->pc = 0x1E1288u;
    {
        const bool branch_taken_0x1e1288 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E128Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1288u;
        // 0x1e128c: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1288) {
            ctx->pc = 0x1E129Cu;
            goto label_1e129c;
        }
    }
    ctx->pc = 0x1E1290u;
label_1e1290:
    // 0x1e1290: 0xc070080  jal         func_1C0200
label_1e1294:
    if (ctx->pc == 0x1E1294u) {
        ctx->pc = 0x1E1294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1290u;
        // 0x1e1294: 0x24051d70  addiu       $a1, $zero, 0x1D70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7536));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1298u;
        goto label_1e1298;
    }
    ctx->pc = 0x1E1290u;
    SET_GPR_U32(ctx, 31, 0x1E1298u);
    ctx->pc = 0x1E1294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1290u;
    // 0x1e1294: 0x24051d70  addiu       $a1, $zero, 0x1D70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x1E1298u;
label_1e1298:
    // 0x1e1298: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1e1298u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1e129c:
    // 0x1e129c: 0x0  nop
    ctx->pc = 0x1e129cu;
    // NOP
label_1e12a0:
    // 0x1e12a0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1e12a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e12a4:
    // 0x1e12a4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1e12a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e12a8:
    // 0x1e12a8: 0x0  nop
    ctx->pc = 0x1e12a8u;
    // NOP
label_1e12ac:
    // 0x1e12ac: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1e12acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
label_1e12b0:
    // 0x1e12b0: 0x244226b0  addiu       $v0, $v0, 0x26B0
    ctx->pc = 0x1e12b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9904));
label_1e12b4:
    // 0x1e12b4: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1e12b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1e12b8:
    // 0x1e12b8: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x1e12b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_1e12bc:
    // 0x1e12bc: 0x52a021  addu        $s4, $v0, $s2
    ctx->pc = 0x1e12bcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_1e12c0:
    // 0x1e12c0: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1e12c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1e12c4:
    // 0x1e12c4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1e12c8:
    if (ctx->pc == 0x1E12C8u) {
        ctx->pc = 0x1E12C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E12C4u;
        // 0x1e12c8: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E12CCu;
        goto label_1e12cc;
    }
    ctx->pc = 0x1E12C4u;
    {
        const bool branch_taken_0x1e12c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E12C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E12C4u;
        // 0x1e12c8: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e12c4) {
            ctx->pc = 0x1E12D8u;
            goto label_1e12d8;
        }
    }
    ctx->pc = 0x1E12CCu;
label_1e12cc:
    // 0x1e12cc: 0xc070080  jal         func_1C0200
label_1e12d0:
    if (ctx->pc == 0x1E12D0u) {
        ctx->pc = 0x1E12D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E12CCu;
        // 0x1e12d0: 0x24050160  addiu       $a1, $zero, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E12D4u;
        goto label_1e12d4;
    }
    ctx->pc = 0x1E12CCu;
    SET_GPR_U32(ctx, 31, 0x1E12D4u);
    ctx->pc = 0x1E12D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E12CCu;
    // 0x1e12d0: 0x24050160  addiu       $a1, $zero, 0x160 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x1E12D4u;
label_1e12d4:
    // 0x1e12d4: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x1e12d4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_1e12d8:
    // 0x1e12d8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1e12d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1e12dc:
    // 0x1e12dc: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x1e12dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
label_1e12e0:
    // 0x1e12e0: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
label_1e12e4:
    if (ctx->pc == 0x1E12E4u) {
        ctx->pc = 0x1E12E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E12E0u;
        // 0x1e12e4: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E12E8u;
        goto label_1e12e8;
    }
    ctx->pc = 0x1E12E0u;
    {
        const bool branch_taken_0x1e12e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E12E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E12E0u;
        // 0x1e12e4: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e12e0) {
            ctx->pc = 0x1E12A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e12a8;
        }
    }
    ctx->pc = 0x1E12E8u;
label_1e12e8:
    // 0x1e12e8: 0x1000001b  b           . + 4 + (0x1B << 2)
label_1e12ec:
    if (ctx->pc == 0x1E12ECu) {
        ctx->pc = 0x1E12F0u;
        goto label_1e12f0;
    }
    ctx->pc = 0x1E12E8u;
    {
        const bool branch_taken_0x1e12e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e12e8) {
            ctx->pc = 0x1E1358u;
            goto label_1e1358;
        }
    }
    ctx->pc = 0x1E12F0u;
label_1e12f0:
    // 0x1e12f0: 0x27828d88  addiu       $v0, $gp, -0x7278
    ctx->pc = 0x1e12f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937992));
label_1e12f4:
    // 0x1e12f4: 0x538821  addu        $s1, $v0, $s3
    ctx->pc = 0x1e12f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1e12f8:
    // 0x1e12f8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1e12f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1e12fc:
    // 0x1e12fc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1e1300:
    if (ctx->pc == 0x1E1300u) {
        ctx->pc = 0x1E1300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E12FCu;
        // 0x1e1300: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1304u;
        goto label_1e1304;
    }
    ctx->pc = 0x1E12FCu;
    {
        const bool branch_taken_0x1e12fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E1300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E12FCu;
        // 0x1e1300: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e12fc) {
            ctx->pc = 0x1E1310u;
            goto label_1e1310;
        }
    }
    ctx->pc = 0x1E1304u;
label_1e1304:
    // 0x1e1304: 0xc070080  jal         func_1C0200
label_1e1308:
    if (ctx->pc == 0x1E1308u) {
        ctx->pc = 0x1E1308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1304u;
        // 0x1e1308: 0x240519b0  addiu       $a1, $zero, 0x19B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6576));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E130Cu;
        goto label_1e130c;
    }
    ctx->pc = 0x1E1304u;
    SET_GPR_U32(ctx, 31, 0x1E130Cu);
    ctx->pc = 0x1E1308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1304u;
    // 0x1e1308: 0x240519b0  addiu       $a1, $zero, 0x19B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x1E130Cu;
label_1e130c:
    // 0x1e130c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1e130cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1e1310:
    // 0x1e1310: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1e1310u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e1314:
    // 0x1e1314: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1e1314u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e1318:
    // 0x1e1318: 0x0  nop
    ctx->pc = 0x1e1318u;
    // NOP
label_1e131c:
    // 0x1e131c: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1e131cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
label_1e1320:
    // 0x1e1320: 0x244226b0  addiu       $v0, $v0, 0x26B0
    ctx->pc = 0x1e1320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9904));
label_1e1324:
    // 0x1e1324: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1e1324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1e1328:
    // 0x1e1328: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x1e1328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_1e132c:
    // 0x1e132c: 0x519021  addu        $s2, $v0, $s1
    ctx->pc = 0x1e132cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1e1330:
    // 0x1e1330: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1e1330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1e1334:
    // 0x1e1334: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1e1338:
    if (ctx->pc == 0x1E1338u) {
        ctx->pc = 0x1E1338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1334u;
        // 0x1e1338: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E133Cu;
        goto label_1e133c;
    }
    ctx->pc = 0x1E1334u;
    {
        const bool branch_taken_0x1e1334 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E1338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1334u;
        // 0x1e1338: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1334) {
            ctx->pc = 0x1E1348u;
            goto label_1e1348;
        }
    }
    ctx->pc = 0x1E133Cu;
label_1e133c:
    // 0x1e133c: 0xc070080  jal         func_1C0200
label_1e1340:
    if (ctx->pc == 0x1E1340u) {
        ctx->pc = 0x1E1340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E133Cu;
        // 0x1e1340: 0x24050160  addiu       $a1, $zero, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1344u;
        goto label_1e1344;
    }
    ctx->pc = 0x1E133Cu;
    SET_GPR_U32(ctx, 31, 0x1E1344u);
    ctx->pc = 0x1E1340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E133Cu;
    // 0x1e1340: 0x24050160  addiu       $a1, $zero, 0x160 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x1E1344u;
label_1e1344:
    // 0x1e1344: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1e1344u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_1e1348:
    // 0x1e1348: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1e1348u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_1e134c:
    // 0x1e134c: 0x2a820003  slti        $v0, $s4, 0x3
    ctx->pc = 0x1e134cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)3) ? 1 : 0);
label_1e1350:
    // 0x1e1350: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
label_1e1354:
    if (ctx->pc == 0x1E1354u) {
        ctx->pc = 0x1E1354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1350u;
        // 0x1e1354: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1358u;
        goto label_1e1358;
    }
    ctx->pc = 0x1E1350u;
    {
        const bool branch_taken_0x1e1350 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E1354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1350u;
        // 0x1e1354: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1350) {
            ctx->pc = 0x1E1318u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e1318;
        }
    }
    ctx->pc = 0x1E1358u;
label_1e1358:
    // 0x1e1358: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1e1358u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1e135c:
    // 0x1e135c: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x1e135cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_1e1360:
    // 0x1e1360: 0x1440ff93  bnez        $v0, . + 4 + (-0x6D << 2)
label_1e1364:
    if (ctx->pc == 0x1E1364u) {
        ctx->pc = 0x1E1364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1360u;
        // 0x1e1364: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1368u;
        goto label_1e1368;
    }
    ctx->pc = 0x1E1360u;
    {
        const bool branch_taken_0x1e1360 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E1364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1360u;
        // 0x1e1364: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1360) {
            ctx->pc = 0x1E11B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e11b0;
        }
    }
    ctx->pc = 0x1E1368u;
label_1e1368:
    // 0x1e1368: 0x8f838218  lw          $v1, -0x7DE8($gp)
    ctx->pc = 0x1e1368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_1e136c:
    // 0x1e136c: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x1e136cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_1e1370:
    // 0x1e1370: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_1e1374:
    if (ctx->pc == 0x1E1374u) {
        ctx->pc = 0x1E1374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1370u;
        // 0x1e1374: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1378u;
        goto label_1e1378;
    }
    ctx->pc = 0x1E1370u;
    {
        const bool branch_taken_0x1e1370 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E1374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1370u;
        // 0x1e1374: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1370) {
            ctx->pc = 0x1E137Cu;
            goto label_1e137c;
        }
    }
    ctx->pc = 0x1E1378u;
label_1e1378:
    // 0x1e1378: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1e1378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1e137c:
    // 0x1e137c: 0xaf828dbc  sw          $v0, -0x7244($gp)
    ctx->pc = 0x1e137cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938044), GPR_U32(ctx, 2));
label_1e1380:
    // 0x1e1380: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1e1380u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e1384:
    // 0x1e1384: 0x10000081  b           . + 4 + (0x81 << 2)
label_1e1388:
    if (ctx->pc == 0x1E1388u) {
        ctx->pc = 0x1E1388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1384u;
        // 0x1e1388: 0xaf808db8  sw          $zero, -0x7248($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938040), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E138Cu;
        goto label_1e138c;
    }
    ctx->pc = 0x1E1384u;
    {
        const bool branch_taken_0x1e1384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1384u;
        // 0x1e1388: 0xaf808db8  sw          $zero, -0x7248($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938040), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1384) {
            ctx->pc = 0x1E158Cu;
            goto label_1e158c;
        }
    }
    ctx->pc = 0x1E138Cu;
label_1e138c:
    // 0x1e138c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1e138cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1e1390:
    // 0x1e1390: 0x15220032  bne         $t1, $v0, . + 4 + (0x32 << 2)
label_1e1394:
    if (ctx->pc == 0x1E1394u) {
        ctx->pc = 0x1E1394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1390u;
        // 0x1e1394: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1398u;
        goto label_1e1398;
    }
    ctx->pc = 0x1E1390u;
    {
        const bool branch_taken_0x1e1390 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E1394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1390u;
        // 0x1e1394: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1390) {
            ctx->pc = 0x1E145Cu;
            goto label_1e145c;
        }
    }
    ctx->pc = 0x1E1398u;
label_1e1398:
    // 0x1e1398: 0xc05610c  jal         func_158430
label_1e139c:
    if (ctx->pc == 0x1E139Cu) {
        ctx->pc = 0x1E13A0u;
        goto label_1e13a0;
    }
    ctx->pc = 0x1E1398u;
    SET_GPR_U32(ctx, 31, 0x1E13A0u);
    ctx->pc = 0x158430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158430u, 0x1E1398u, 0x1E13A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E13A0u;
label_1e13a0:
    // 0x1e13a0: 0x10400078  beqz        $v0, . + 4 + (0x78 << 2)
label_1e13a4:
    if (ctx->pc == 0x1E13A4u) {
        ctx->pc = 0x1E13A8u;
        goto label_1e13a8;
    }
    ctx->pc = 0x1E13A0u;
    {
        const bool branch_taken_0x1e13a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e13a0) {
            ctx->pc = 0x1E1584u;
            goto label_1e1584;
        }
    }
    ctx->pc = 0x1E13A8u;
label_1e13a8:
    // 0x1e13a8: 0x8f858db8  lw          $a1, -0x7248($gp)
    ctx->pc = 0x1e13a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
label_1e13ac:
    // 0x1e13ac: 0x3c04004b  lui         $a0, 0x4B
    ctx->pc = 0x1e13acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)75 << 16));
label_1e13b0:
    // 0x1e13b0: 0x248428a0  addiu       $a0, $a0, 0x28A0
    ctx->pc = 0x1e13b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10400));
label_1e13b4:
    // 0x1e13b4: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x1e13b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_1e13b8:
    // 0x1e13b8: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1e13b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1e13bc:
    // 0x1e13bc: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1e13bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1e13c0:
    // 0x1e13c0: 0xac900000  sw          $s0, 0x0($a0)
    ctx->pc = 0x1e13c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 16));
label_1e13c4:
    // 0x1e13c4: 0x8f848218  lw          $a0, -0x7DE8($gp)
    ctx->pc = 0x1e13c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_1e13c8:
    // 0x1e13c8: 0x1483000d  bne         $a0, $v1, . + 4 + (0xD << 2)
label_1e13cc:
    if (ctx->pc == 0x1E13CCu) {
        ctx->pc = 0x1E13CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E13C8u;
        // 0x1e13cc: 0x3c03004b  lui         $v1, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)75 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E13D0u;
        goto label_1e13d0;
    }
    ctx->pc = 0x1E13C8u;
    {
        const bool branch_taken_0x1e13c8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1E13CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E13C8u;
        // 0x1e13cc: 0x3c03004b  lui         $v1, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)75 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e13c8) {
            ctx->pc = 0x1E1400u;
            goto label_1e1400;
        }
    }
    ctx->pc = 0x1E13D0u;
label_1e13d0:
    // 0x1e13d0: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x1e13d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_1e13d4:
    // 0x1e13d4: 0x246326d0  addiu       $v1, $v1, 0x26D0
    ctx->pc = 0x1e13d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9936));
label_1e13d8:
    // 0x1e13d8: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x1e13d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1e13dc:
    // 0x1e13dc: 0x3c03004b  lui         $v1, 0x4B
    ctx->pc = 0x1e13dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)75 << 16));
label_1e13e0:
    // 0x1e13e0: 0x24632840  addiu       $v1, $v1, 0x2840
    ctx->pc = 0x1e13e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10304));
label_1e13e4:
    // 0x1e13e4: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x1e13e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1e13e8:
    // 0x1e13e8: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1e13e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e13ec:
    // 0x1e13ec: 0x24a30000  addiu       $v1, $a1, 0x0
    ctx->pc = 0x1e13ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 0));
label_1e13f0:
    // 0x1e13f0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1e13f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1e13f4:
    // 0x1e13f4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1e13f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1e13f8:
    // 0x1e13f8: 0x1000000f  b           . + 4 + (0xF << 2)
label_1e13fc:
    if (ctx->pc == 0x1E13FCu) {
        ctx->pc = 0x1E13FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E13F8u;
        // 0x1e13fc: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1400u;
        goto label_1e1400;
    }
    ctx->pc = 0x1E13F8u;
    {
        const bool branch_taken_0x1e13f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E13FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E13F8u;
        // 0x1e13fc: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e13f8) {
            ctx->pc = 0x1E1438u;
            goto label_1e1438;
        }
    }
    ctx->pc = 0x1E1400u;
label_1e1400:
    // 0x1e1400: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x1e1400u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_1e1404:
    // 0x1e1404: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1e1404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1e1408:
    // 0x1e1408: 0x3c04004b  lui         $a0, 0x4B
    ctx->pc = 0x1e1408u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)75 << 16));
label_1e140c:
    // 0x1e140c: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x1e140cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1e1410:
    // 0x1e1410: 0x248426d0  addiu       $a0, $a0, 0x26D0
    ctx->pc = 0x1e1410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9936));
label_1e1414:
    // 0x1e1414: 0x3c03004b  lui         $v1, 0x4B
    ctx->pc = 0x1e1414u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)75 << 16));
label_1e1418:
    // 0x1e1418: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x1e1418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1e141c:
    // 0x1e141c: 0x24632840  addiu       $v1, $v1, 0x2840
    ctx->pc = 0x1e141cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10304));
label_1e1420:
    // 0x1e1420: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1e1420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1e1424:
    // 0x1e1424: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1e1424u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1e1428:
    // 0x1e1428: 0x24a30000  addiu       $v1, $a1, 0x0
    ctx->pc = 0x1e1428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 0));
label_1e142c:
    // 0x1e142c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1e142cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1e1430:
    // 0x1e1430: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1e1430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1e1434:
    // 0x1e1434: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1e1434u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_1e1438:
    // 0x1e1438: 0x3c03004b  lui         $v1, 0x4B
    ctx->pc = 0x1e1438u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)75 << 16));
label_1e143c:
    // 0x1e143c: 0x24632840  addiu       $v1, $v1, 0x2840
    ctx->pc = 0x1e143cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10304));
label_1e1440:
    // 0x1e1440: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1e1440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e1444:
    // 0x1e1444: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1e1444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1e1448:
    // 0x1e1448: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1e1448u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_1e144c:
    // 0x1e144c: 0x8f828db8  lw          $v0, -0x7248($gp)
    ctx->pc = 0x1e144cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
label_1e1450:
    // 0x1e1450: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e1450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1e1454:
    // 0x1e1454: 0x1000004b  b           . + 4 + (0x4B << 2)
label_1e1458:
    if (ctx->pc == 0x1E1458u) {
        ctx->pc = 0x1E1458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1454u;
        // 0x1e1458: 0xaf828db8  sw          $v0, -0x7248($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938040), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E145Cu;
        goto label_1e145c;
    }
    ctx->pc = 0x1E1454u;
    {
        const bool branch_taken_0x1e1454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1454u;
        // 0x1e1458: 0xaf828db8  sw          $v0, -0x7248($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938040), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1454) {
            ctx->pc = 0x1E1584u;
            goto label_1e1584;
        }
    }
    ctx->pc = 0x1E145Cu;
label_1e145c:
    // 0x1e145c: 0x0  nop
    ctx->pc = 0x1e145cu;
    // NOP
label_1e1460:
    // 0x1e1460: 0x39220011  xori        $v0, $t1, 0x11
    ctx->pc = 0x1e1460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) ^ (uint64_t)(uint16_t)17);
label_1e1464:
    // 0x1e1464: 0x2c450001  sltiu       $a1, $v0, 0x1
    ctx->pc = 0x1e1464u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1e1468:
    // 0x1e1468: 0xc056128  jal         func_1584A0
label_1e146c:
    if (ctx->pc == 0x1E146Cu) {
        ctx->pc = 0x1E146Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1468u;
        // 0x1e146c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1470u;
        goto label_1e1470;
    }
    ctx->pc = 0x1E1468u;
    SET_GPR_U32(ctx, 31, 0x1E1470u);
    ctx->pc = 0x1E146Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1468u;
    // 0x1e146c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1584A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584A0u, 0x1E1468u, 0x1E1470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1470u;
label_1e1470:
    // 0x1e1470: 0x10400044  beqz        $v0, . + 4 + (0x44 << 2)
label_1e1474:
    if (ctx->pc == 0x1E1474u) {
        ctx->pc = 0x1E1478u;
        goto label_1e1478;
    }
    ctx->pc = 0x1E1470u;
    {
        const bool branch_taken_0x1e1470 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1470) {
            ctx->pc = 0x1E1584u;
            goto label_1e1584;
        }
    }
    ctx->pc = 0x1E1478u;
label_1e1478:
    // 0x1e1478: 0x8f888db8  lw          $t0, -0x7248($gp)
    ctx->pc = 0x1e1478u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
label_1e147c:
    // 0x1e147c: 0x3c05004b  lui         $a1, 0x4B
    ctx->pc = 0x1e147cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)75 << 16));
label_1e1480:
    // 0x1e1480: 0x3c03004b  lui         $v1, 0x4B
    ctx->pc = 0x1e1480u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)75 << 16));
label_1e1484:
    // 0x1e1484: 0x24a528a0  addiu       $a1, $a1, 0x28A0
    ctx->pc = 0x1e1484u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10400));
label_1e1488:
    // 0x1e1488: 0x24632840  addiu       $v1, $v1, 0x2840
    ctx->pc = 0x1e1488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10304));
label_1e148c:
    // 0x1e148c: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x1e148cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_1e1490:
    // 0x1e1490: 0x83080  sll         $a2, $t0, 2
    ctx->pc = 0x1e1490u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_1e1494:
    // 0x1e1494: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1e1494u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1e1498:
    // 0x1e1498: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1e1498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1e149c:
    // 0x1e149c: 0xacb00000  sw          $s0, 0x0($a1)
    ctx->pc = 0x1e149cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 16));
label_1e14a0:
    // 0x1e14a0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1e14a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_1e14a4:
    // 0x1e14a4: 0x8f858218  lw          $a1, -0x7DE8($gp)
    ctx->pc = 0x1e14a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_1e14a8:
    // 0x1e14a8: 0x14a40019  bne         $a1, $a0, . + 4 + (0x19 << 2)
label_1e14ac:
    if (ctx->pc == 0x1E14ACu) {
        ctx->pc = 0x1E14ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E14A8u;
        // 0x1e14ac: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E14B0u;
        goto label_1e14b0;
    }
    ctx->pc = 0x1E14A8u;
    {
        const bool branch_taken_0x1e14a8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x1E14ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E14A8u;
        // 0x1e14ac: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e14a8) {
            ctx->pc = 0x1E1510u;
            goto label_1e1510;
        }
    }
    ctx->pc = 0x1E14B0u;
label_1e14b0:
    // 0x1e14b0: 0x3c04004b  lui         $a0, 0x4B
    ctx->pc = 0x1e14b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)75 << 16));
label_1e14b4:
    // 0x1e14b4: 0x82900  sll         $a1, $t0, 4
    ctx->pc = 0x1e14b4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
label_1e14b8:
    // 0x1e14b8: 0x248426d0  addiu       $a0, $a0, 0x26D0
    ctx->pc = 0x1e14b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9936));
label_1e14bc:
    // 0x1e14bc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e14bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e14c0:
    // 0x1e14c0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1e14c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1e14c4:
    // 0x1e14c4: 0x24850000  addiu       $a1, $a0, 0x0
    ctx->pc = 0x1e14c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 0));
label_1e14c8:
    // 0x1e14c8: 0xe62004  sllv        $a0, $a2, $a3
    ctx->pc = 0x1e14c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 7) & 0x1F));
label_1e14cc:
    // 0x1e14cc: 0x442024  and         $a0, $v0, $a0
    ctx->pc = 0x1e14ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_1e14d0:
    // 0x1e14d0: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_1e14d4:
    if (ctx->pc == 0x1E14D4u) {
        ctx->pc = 0x1E14D8u;
        goto label_1e14d8;
    }
    ctx->pc = 0x1E14D0u;
    {
        const bool branch_taken_0x1e14d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e14d0) {
            ctx->pc = 0x1E14F4u;
            goto label_1e14f4;
        }
    }
    ctx->pc = 0x1E14D8u;
label_1e14d8:
    // 0x1e14d8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1e14d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1e14dc:
    // 0x1e14dc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1e14dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1e14e0:
    // 0x1e14e0: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x1e14e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_1e14e4:
    // 0x1e14e4: 0xac870000  sw          $a3, 0x0($a0)
    ctx->pc = 0x1e14e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 7));
label_1e14e8:
    // 0x1e14e8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1e14e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1e14ec:
    // 0x1e14ec: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1e14ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1e14f0:
    // 0x1e14f0: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1e14f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_1e14f4:
    // 0x1e14f4: 0x0  nop
    ctx->pc = 0x1e14f4u;
    // NOP
label_1e14f8:
    // 0x1e14f8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1e14f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_1e14fc:
    // 0x1e14fc: 0x28e40004  slti        $a0, $a3, 0x4
    ctx->pc = 0x1e14fcu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)4) ? 1 : 0);
label_1e1500:
    // 0x1e1500: 0x1480fff1  bnez        $a0, . + 4 + (-0xF << 2)
label_1e1504:
    if (ctx->pc == 0x1E1504u) {
        ctx->pc = 0x1E1508u;
        goto label_1e1508;
    }
    ctx->pc = 0x1E1500u;
    {
        const bool branch_taken_0x1e1500 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e1500) {
            ctx->pc = 0x1E14C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e14c8;
        }
    }
    ctx->pc = 0x1E1508u;
label_1e1508:
    // 0x1e1508: 0x1000001b  b           . + 4 + (0x1B << 2)
label_1e150c:
    if (ctx->pc == 0x1E150Cu) {
        ctx->pc = 0x1E1510u;
        goto label_1e1510;
    }
    ctx->pc = 0x1E1508u;
    {
        const bool branch_taken_0x1e1508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1508) {
            ctx->pc = 0x1E1578u;
            goto label_1e1578;
        }
    }
    ctx->pc = 0x1E1510u;
label_1e1510:
    // 0x1e1510: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e1510u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e1514:
    // 0x1e1514: 0x82840  sll         $a1, $t0, 1
    ctx->pc = 0x1e1514u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
label_1e1518:
    // 0x1e1518: 0x3c04004b  lui         $a0, 0x4B
    ctx->pc = 0x1e1518u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)75 << 16));
label_1e151c:
    // 0x1e151c: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x1e151cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
label_1e1520:
    // 0x1e1520: 0x248426d0  addiu       $a0, $a0, 0x26D0
    ctx->pc = 0x1e1520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9936));
label_1e1524:
    // 0x1e1524: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1e1524u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1e1528:
    // 0x1e1528: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e1528u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e152c:
    // 0x1e152c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1e152cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1e1530:
    // 0x1e1530: 0x24850000  addiu       $a1, $a0, 0x0
    ctx->pc = 0x1e1530u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 0));
label_1e1534:
    // 0x1e1534: 0x0  nop
    ctx->pc = 0x1e1534u;
    // NOP
label_1e1538:
    // 0x1e1538: 0xe62004  sllv        $a0, $a2, $a3
    ctx->pc = 0x1e1538u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 7) & 0x1F));
label_1e153c:
    // 0x1e153c: 0x442024  and         $a0, $v0, $a0
    ctx->pc = 0x1e153cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_1e1540:
    // 0x1e1540: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_1e1544:
    if (ctx->pc == 0x1E1544u) {
        ctx->pc = 0x1E1548u;
        goto label_1e1548;
    }
    ctx->pc = 0x1E1540u;
    {
        const bool branch_taken_0x1e1540 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1540) {
            ctx->pc = 0x1E1564u;
            goto label_1e1564;
        }
    }
    ctx->pc = 0x1E1548u;
label_1e1548:
    // 0x1e1548: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1e1548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1e154c:
    // 0x1e154c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1e154cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1e1550:
    // 0x1e1550: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x1e1550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_1e1554:
    // 0x1e1554: 0xac870000  sw          $a3, 0x0($a0)
    ctx->pc = 0x1e1554u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 7));
label_1e1558:
    // 0x1e1558: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1e1558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1e155c:
    // 0x1e155c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1e155cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1e1560:
    // 0x1e1560: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1e1560u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_1e1564:
    // 0x1e1564: 0x0  nop
    ctx->pc = 0x1e1564u;
    // NOP
label_1e1568:
    // 0x1e1568: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1e1568u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_1e156c:
    // 0x1e156c: 0x28e40003  slti        $a0, $a3, 0x3
    ctx->pc = 0x1e156cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)3) ? 1 : 0);
label_1e1570:
    // 0x1e1570: 0x1480fff0  bnez        $a0, . + 4 + (-0x10 << 2)
label_1e1574:
    if (ctx->pc == 0x1E1574u) {
        ctx->pc = 0x1E1578u;
        goto label_1e1578;
    }
    ctx->pc = 0x1E1570u;
    {
        const bool branch_taken_0x1e1570 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e1570) {
            ctx->pc = 0x1E1534u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e1534;
        }
    }
    ctx->pc = 0x1E1578u;
label_1e1578:
    // 0x1e1578: 0x8f828db8  lw          $v0, -0x7248($gp)
    ctx->pc = 0x1e1578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
label_1e157c:
    // 0x1e157c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e157cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1e1580:
    // 0x1e1580: 0xaf828db8  sw          $v0, -0x7248($gp)
    ctx->pc = 0x1e1580u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938040), GPR_U32(ctx, 2));
label_1e1584:
    // 0x1e1584: 0x0  nop
    ctx->pc = 0x1e1584u;
    // NOP
label_1e1588:
    // 0x1e1588: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1e1588u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1e158c:
    // 0x1e158c: 0x0  nop
    ctx->pc = 0x1e158cu;
    // NOP
label_1e1590:
    // 0x1e1590: 0x8f898218  lw          $t1, -0x7DE8($gp)
    ctx->pc = 0x1e1590u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_1e1594:
    // 0x1e1594: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x1e1594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_1e1598:
    // 0x1e1598: 0x15220002  bne         $t1, $v0, . + 4 + (0x2 << 2)
label_1e159c:
    if (ctx->pc == 0x1E159Cu) {
        ctx->pc = 0x1E159Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1598u;
        // 0x1e159c: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E15A0u;
        goto label_1e15a0;
    }
    ctx->pc = 0x1E1598u;
    {
        const bool branch_taken_0x1e1598 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E159Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1598u;
        // 0x1e159c: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1598) {
            ctx->pc = 0x1E15A4u;
            goto label_1e15a4;
        }
    }
    ctx->pc = 0x1E15A0u;
label_1e15a0:
    // 0x1e15a0: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x1e15a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_1e15a4:
    // 0x1e15a4: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1e15a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1e15a8:
    // 0x1e15a8: 0x1440ff78  bnez        $v0, . + 4 + (-0x88 << 2)
label_1e15ac:
    if (ctx->pc == 0x1E15ACu) {
        ctx->pc = 0x1E15B0u;
        goto label_1e15b0;
    }
    ctx->pc = 0x1E15A8u;
    {
        const bool branch_taken_0x1e15a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e15a8) {
            ctx->pc = 0x1E138Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e138c;
        }
    }
    ctx->pc = 0x1E15B0u;
label_1e15b0:
    // 0x1e15b0: 0x8f8a8db8  lw          $t2, -0x7248($gp)
    ctx->pc = 0x1e15b0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
label_1e15b4:
    // 0x1e15b4: 0x29410006  slti        $at, $t2, 0x6
    ctx->pc = 0x1e15b4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)6) ? 1 : 0);
label_1e15b8:
    // 0x1e15b8: 0x10200016  beqz        $at, . + 4 + (0x16 << 2)
label_1e15bc:
    if (ctx->pc == 0x1E15BCu) {
        ctx->pc = 0x1E15BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E15B8u;
        // 0x1e15bc: 0x29410006  slti        $at, $t2, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E15C0u;
        goto label_1e15c0;
    }
    ctx->pc = 0x1E15B8u;
    {
        const bool branch_taken_0x1e15b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E15BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E15B8u;
        // 0x1e15bc: 0x29410006  slti        $at, $t2, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e15b8) {
            ctx->pc = 0x1E1614u;
            goto label_1e1614;
        }
    }
    ctx->pc = 0x1E15C0u;
label_1e15c0:
    // 0x1e15c0: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
label_1e15c4:
    if (ctx->pc == 0x1E15C4u) {
        ctx->pc = 0x1E15C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E15C0u;
        // 0x1e15c4: 0xa4080  sll         $t0, $t2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E15C8u;
        goto label_1e15c8;
    }
    ctx->pc = 0x1E15C0u;
    {
        const bool branch_taken_0x1e15c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E15C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E15C0u;
        // 0x1e15c4: 0xa4080  sll         $t0, $t2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e15c0) {
            ctx->pc = 0x1E1614u;
            goto label_1e1614;
        }
    }
    ctx->pc = 0x1E15C8u;
label_1e15c8:
    // 0x1e15c8: 0x3c05004b  lui         $a1, 0x4B
    ctx->pc = 0x1e15c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)75 << 16));
label_1e15cc:
    // 0x1e15cc: 0x3c04004b  lui         $a0, 0x4B
    ctx->pc = 0x1e15ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)75 << 16));
label_1e15d0:
    // 0x1e15d0: 0x24a528a0  addiu       $a1, $a1, 0x28A0
    ctx->pc = 0x1e15d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10400));
label_1e15d4:
    // 0x1e15d4: 0x24842840  addiu       $a0, $a0, 0x2840
    ctx->pc = 0x1e15d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10304));
label_1e15d8:
    // 0x1e15d8: 0x24070011  addiu       $a3, $zero, 0x11
    ctx->pc = 0x1e15d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_1e15dc:
    // 0x1e15dc: 0x15270002  bne         $t1, $a3, . + 4 + (0x2 << 2)
label_1e15e0:
    if (ctx->pc == 0x1E15E0u) {
        ctx->pc = 0x1E15E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E15DCu;
        // 0x1e15e0: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E15E4u;
        goto label_1e15e4;
    }
    ctx->pc = 0x1E15DCu;
    {
        const bool branch_taken_0x1e15dc = (GPR_U64(ctx, 9) != GPR_U64(ctx, 7));
        ctx->pc = 0x1E15E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E15DCu;
        // 0x1e15e0: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e15dc) {
            ctx->pc = 0x1E15E8u;
            goto label_1e15e8;
        }
    }
    ctx->pc = 0x1E15E4u;
label_1e15e4:
    // 0x1e15e4: 0x24060017  addiu       $a2, $zero, 0x17
    ctx->pc = 0x1e15e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_1e15e8:
    // 0x1e15e8: 0xa81821  addu        $v1, $a1, $t0
    ctx->pc = 0x1e15e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
label_1e15ec:
    // 0x1e15ec: 0x881021  addu        $v0, $a0, $t0
    ctx->pc = 0x1e15ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
label_1e15f0:
    // 0x1e15f0: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x1e15f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
label_1e15f4:
    // 0x1e15f4: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1e15f4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_1e15f8:
    // 0x1e15f8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1e15f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_1e15fc:
    // 0x1e15fc: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x1e15fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
label_1e1600:
    // 0x1e1600: 0x8f838db8  lw          $v1, -0x7248($gp)
    ctx->pc = 0x1e1600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
label_1e1604:
    // 0x1e1604: 0x29420006  slti        $v0, $t2, 0x6
    ctx->pc = 0x1e1604u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)6) ? 1 : 0);
label_1e1608:
    // 0x1e1608: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1e1608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1e160c:
    // 0x1e160c: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
label_1e1610:
    if (ctx->pc == 0x1E1610u) {
        ctx->pc = 0x1E1610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E160Cu;
        // 0x1e1610: 0xaf838db8  sw          $v1, -0x7248($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938040), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1614u;
        goto label_1e1614;
    }
    ctx->pc = 0x1E160Cu;
    {
        const bool branch_taken_0x1e160c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E1610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E160Cu;
        // 0x1e1610: 0xaf838db8  sw          $v1, -0x7248($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938040), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e160c) {
            ctx->pc = 0x1E15DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e15dc;
        }
    }
    ctx->pc = 0x1E1614u;
label_1e1614:
    // 0x1e1614: 0x0  nop
    ctx->pc = 0x1e1614u;
    // NOP
label_1e1618:
    // 0x1e1618: 0xc078d54  jal         func_1E3550
label_1e161c:
    if (ctx->pc == 0x1E161Cu) {
        ctx->pc = 0x1E161Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1618u;
        // 0x1e161c: 0xaf808db0  sw          $zero, -0x7250($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938032), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1620u;
        goto label_1e1620;
    }
    ctx->pc = 0x1E1618u;
    SET_GPR_U32(ctx, 31, 0x1E1620u);
    ctx->pc = 0x1E161Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1618u;
    // 0x1e161c: 0xaf808db0  sw          $zero, -0x7250($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938032), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3550u;
    { ctx->pc = 0x1e3550; return; }
    ctx->pc = 0x1E1620u;
label_1e1620:
    // 0x1e1620: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1e1620u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e1624:
    // 0x1e1624: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1e1624u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e1628:
    // 0x1e1628: 0x27828da8  addiu       $v0, $gp, -0x7258
    ctx->pc = 0x1e1628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938024));
label_1e162c:
    // 0x1e162c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1e162cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1e1630:
    // 0x1e1630: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e1630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1e1634:
    // 0x1e1634: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x1e1634u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1e1638:
    // 0x1e1638: 0xc05e234  jal         func_1788D0
label_1e163c:
    if (ctx->pc == 0x1E163Cu) {
        ctx->pc = 0x1E163Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1638u;
        // 0x1e163c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1640u;
        { ctx->pc = 0x1e1640; return; }
    }
    ctx->pc = 0x1E1638u;
    SET_GPR_U32(ctx, 31, 0x1E1640u);
    ctx->pc = 0x1E163Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1638u;
    // 0x1e163c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788D0u, 0x1E1638u, 0x1E1640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1640u;
    ctx->pc = 0x1e1640u;
    return;
}

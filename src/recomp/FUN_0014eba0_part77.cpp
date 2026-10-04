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


void FUN_0014eba0_part77(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x173d60u: goto label_173d60;
        case 0x173d64u: goto label_173d64;
        case 0x173d68u: goto label_173d68;
        case 0x173d6cu: goto label_173d6c;
        case 0x173d70u: goto label_173d70;
        case 0x173d74u: goto label_173d74;
        case 0x173d78u: goto label_173d78;
        case 0x173d7cu: goto label_173d7c;
        case 0x173d80u: goto label_173d80;
        case 0x173d84u: goto label_173d84;
        case 0x173d88u: goto label_173d88;
        case 0x173d8cu: goto label_173d8c;
        case 0x173d90u: goto label_173d90;
        case 0x173d94u: goto label_173d94;
        case 0x173d98u: goto label_173d98;
        case 0x173d9cu: goto label_173d9c;
        case 0x173da0u: goto label_173da0;
        case 0x173da4u: goto label_173da4;
        case 0x173da8u: goto label_173da8;
        case 0x173dacu: goto label_173dac;
        case 0x173db0u: goto label_173db0;
        case 0x173db4u: goto label_173db4;
        case 0x173db8u: goto label_173db8;
        case 0x173dbcu: goto label_173dbc;
        case 0x173dc0u: goto label_173dc0;
        case 0x173dc4u: goto label_173dc4;
        case 0x173dc8u: goto label_173dc8;
        case 0x173dccu: goto label_173dcc;
        case 0x173dd0u: goto label_173dd0;
        case 0x173dd4u: goto label_173dd4;
        case 0x173dd8u: goto label_173dd8;
        case 0x173ddcu: goto label_173ddc;
        case 0x173de0u: goto label_173de0;
        case 0x173de4u: goto label_173de4;
        case 0x173de8u: goto label_173de8;
        case 0x173decu: goto label_173dec;
        case 0x173df0u: goto label_173df0;
        case 0x173df4u: goto label_173df4;
        case 0x173df8u: goto label_173df8;
        case 0x173dfcu: goto label_173dfc;
        case 0x173e00u: goto label_173e00;
        case 0x173e04u: goto label_173e04;
        case 0x173e08u: goto label_173e08;
        case 0x173e0cu: goto label_173e0c;
        case 0x173e10u: goto label_173e10;
        case 0x173e14u: goto label_173e14;
        case 0x173e18u: goto label_173e18;
        case 0x173e1cu: goto label_173e1c;
        case 0x173e20u: goto label_173e20;
        case 0x173e24u: goto label_173e24;
        case 0x173e28u: goto label_173e28;
        case 0x173e2cu: goto label_173e2c;
        case 0x173e30u: goto label_173e30;
        case 0x173e34u: goto label_173e34;
        case 0x173e38u: goto label_173e38;
        case 0x173e3cu: goto label_173e3c;
        case 0x173e40u: goto label_173e40;
        case 0x173e44u: goto label_173e44;
        case 0x173e48u: goto label_173e48;
        case 0x173e4cu: goto label_173e4c;
        case 0x173e50u: goto label_173e50;
        case 0x173e54u: goto label_173e54;
        case 0x173e58u: goto label_173e58;
        case 0x173e5cu: goto label_173e5c;
        case 0x173e60u: goto label_173e60;
        case 0x173e64u: goto label_173e64;
        case 0x173e68u: goto label_173e68;
        case 0x173e6cu: goto label_173e6c;
        case 0x173e70u: goto label_173e70;
        case 0x173e74u: goto label_173e74;
        case 0x173e78u: goto label_173e78;
        case 0x173e7cu: goto label_173e7c;
        case 0x173e80u: goto label_173e80;
        case 0x173e84u: goto label_173e84;
        case 0x173e88u: goto label_173e88;
        case 0x173e8cu: goto label_173e8c;
        case 0x173e90u: goto label_173e90;
        case 0x173e94u: goto label_173e94;
        case 0x173e98u: goto label_173e98;
        case 0x173e9cu: goto label_173e9c;
        case 0x173ea0u: goto label_173ea0;
        case 0x173ea4u: goto label_173ea4;
        case 0x173ea8u: goto label_173ea8;
        case 0x173eacu: goto label_173eac;
        case 0x173eb0u: goto label_173eb0;
        case 0x173eb4u: goto label_173eb4;
        case 0x173eb8u: goto label_173eb8;
        case 0x173ebcu: goto label_173ebc;
        case 0x173ec0u: goto label_173ec0;
        case 0x173ec4u: goto label_173ec4;
        case 0x173ec8u: goto label_173ec8;
        case 0x173eccu: goto label_173ecc;
        case 0x173ed0u: goto label_173ed0;
        case 0x173ed4u: goto label_173ed4;
        case 0x173ed8u: goto label_173ed8;
        case 0x173edcu: goto label_173edc;
        case 0x173ee0u: goto label_173ee0;
        case 0x173ee4u: goto label_173ee4;
        case 0x173ee8u: goto label_173ee8;
        case 0x173eecu: goto label_173eec;
        case 0x173ef0u: goto label_173ef0;
        case 0x173ef4u: goto label_173ef4;
        case 0x173ef8u: goto label_173ef8;
        case 0x173efcu: goto label_173efc;
        case 0x173f00u: goto label_173f00;
        case 0x173f04u: goto label_173f04;
        case 0x173f08u: goto label_173f08;
        case 0x173f0cu: goto label_173f0c;
        case 0x173f10u: goto label_173f10;
        case 0x173f14u: goto label_173f14;
        case 0x173f18u: goto label_173f18;
        case 0x173f1cu: goto label_173f1c;
        case 0x173f20u: goto label_173f20;
        case 0x173f24u: goto label_173f24;
        case 0x173f28u: goto label_173f28;
        case 0x173f2cu: goto label_173f2c;
        case 0x173f30u: goto label_173f30;
        case 0x173f34u: goto label_173f34;
        case 0x173f38u: goto label_173f38;
        case 0x173f3cu: goto label_173f3c;
        case 0x173f40u: goto label_173f40;
        case 0x173f44u: goto label_173f44;
        case 0x173f48u: goto label_173f48;
        case 0x173f4cu: goto label_173f4c;
        case 0x173f50u: goto label_173f50;
        case 0x173f54u: goto label_173f54;
        case 0x173f58u: goto label_173f58;
        case 0x173f5cu: goto label_173f5c;
        case 0x173f60u: goto label_173f60;
        case 0x173f64u: goto label_173f64;
        case 0x173f68u: goto label_173f68;
        case 0x173f6cu: goto label_173f6c;
        case 0x173f70u: goto label_173f70;
        case 0x173f74u: goto label_173f74;
        case 0x173f78u: goto label_173f78;
        case 0x173f7cu: goto label_173f7c;
        case 0x173f80u: goto label_173f80;
        case 0x173f84u: goto label_173f84;
        case 0x173f88u: goto label_173f88;
        case 0x173f8cu: goto label_173f8c;
        case 0x173f90u: goto label_173f90;
        case 0x173f94u: goto label_173f94;
        case 0x173f98u: goto label_173f98;
        case 0x173f9cu: goto label_173f9c;
        case 0x173fa0u: goto label_173fa0;
        case 0x173fa4u: goto label_173fa4;
        case 0x173fa8u: goto label_173fa8;
        case 0x173facu: goto label_173fac;
        case 0x173fb0u: goto label_173fb0;
        case 0x173fb4u: goto label_173fb4;
        case 0x173fb8u: goto label_173fb8;
        case 0x173fbcu: goto label_173fbc;
        case 0x173fc0u: goto label_173fc0;
        case 0x173fc4u: goto label_173fc4;
        case 0x173fc8u: goto label_173fc8;
        case 0x173fccu: goto label_173fcc;
        case 0x173fd0u: goto label_173fd0;
        case 0x173fd4u: goto label_173fd4;
        case 0x173fd8u: goto label_173fd8;
        case 0x173fdcu: goto label_173fdc;
        case 0x173fe0u: goto label_173fe0;
        case 0x173fe4u: goto label_173fe4;
        case 0x173fe8u: goto label_173fe8;
        case 0x173fecu: goto label_173fec;
        case 0x173ff0u: goto label_173ff0;
        case 0x173ff4u: goto label_173ff4;
        case 0x173ff8u: goto label_173ff8;
        case 0x173ffcu: goto label_173ffc;
        case 0x174000u: goto label_174000;
        case 0x174004u: goto label_174004;
        case 0x174008u: goto label_174008;
        case 0x17400cu: goto label_17400c;
        case 0x174010u: goto label_174010;
        case 0x174014u: goto label_174014;
        case 0x174018u: goto label_174018;
        case 0x17401cu: goto label_17401c;
        case 0x174020u: goto label_174020;
        case 0x174024u: goto label_174024;
        case 0x174028u: goto label_174028;
        case 0x17402cu: goto label_17402c;
        case 0x174030u: goto label_174030;
        case 0x174034u: goto label_174034;
        case 0x174038u: goto label_174038;
        case 0x17403cu: goto label_17403c;
        case 0x174040u: goto label_174040;
        case 0x174044u: goto label_174044;
        case 0x174048u: goto label_174048;
        case 0x17404cu: goto label_17404c;
        case 0x174050u: goto label_174050;
        case 0x174054u: goto label_174054;
        case 0x174058u: goto label_174058;
        case 0x17405cu: goto label_17405c;
        case 0x174060u: goto label_174060;
        case 0x174064u: goto label_174064;
        case 0x174068u: goto label_174068;
        case 0x17406cu: goto label_17406c;
        case 0x174070u: goto label_174070;
        case 0x174074u: goto label_174074;
        case 0x174078u: goto label_174078;
        case 0x17407cu: goto label_17407c;
        case 0x174080u: goto label_174080;
        case 0x174084u: goto label_174084;
        case 0x174088u: goto label_174088;
        case 0x17408cu: goto label_17408c;
        case 0x174090u: goto label_174090;
        case 0x174094u: goto label_174094;
        case 0x174098u: goto label_174098;
        case 0x17409cu: goto label_17409c;
        case 0x1740a0u: goto label_1740a0;
        case 0x1740a4u: goto label_1740a4;
        case 0x1740a8u: goto label_1740a8;
        case 0x1740acu: goto label_1740ac;
        case 0x1740b0u: goto label_1740b0;
        case 0x1740b4u: goto label_1740b4;
        case 0x1740b8u: goto label_1740b8;
        case 0x1740bcu: goto label_1740bc;
        case 0x1740c0u: goto label_1740c0;
        case 0x1740c4u: goto label_1740c4;
        case 0x1740c8u: goto label_1740c8;
        case 0x1740ccu: goto label_1740cc;
        case 0x1740d0u: goto label_1740d0;
        case 0x1740d4u: goto label_1740d4;
        case 0x1740d8u: goto label_1740d8;
        case 0x1740dcu: goto label_1740dc;
        case 0x1740e0u: goto label_1740e0;
        case 0x1740e4u: goto label_1740e4;
        case 0x1740e8u: goto label_1740e8;
        case 0x1740ecu: goto label_1740ec;
        case 0x1740f0u: goto label_1740f0;
        case 0x1740f4u: goto label_1740f4;
        case 0x1740f8u: goto label_1740f8;
        case 0x1740fcu: goto label_1740fc;
        case 0x174100u: goto label_174100;
        case 0x174104u: goto label_174104;
        case 0x174108u: goto label_174108;
        case 0x17410cu: goto label_17410c;
        case 0x174110u: goto label_174110;
        case 0x174114u: goto label_174114;
        case 0x174118u: goto label_174118;
        case 0x17411cu: goto label_17411c;
        case 0x174120u: goto label_174120;
        case 0x174124u: goto label_174124;
        case 0x174128u: goto label_174128;
        case 0x17412cu: goto label_17412c;
        case 0x174130u: goto label_174130;
        case 0x174134u: goto label_174134;
        case 0x174138u: goto label_174138;
        case 0x17413cu: goto label_17413c;
        case 0x174140u: goto label_174140;
        case 0x174144u: goto label_174144;
        case 0x174148u: goto label_174148;
        case 0x17414cu: goto label_17414c;
        case 0x174150u: goto label_174150;
        case 0x174154u: goto label_174154;
        case 0x174158u: goto label_174158;
        case 0x17415cu: goto label_17415c;
        case 0x174160u: goto label_174160;
        case 0x174164u: goto label_174164;
        case 0x174168u: goto label_174168;
        case 0x17416cu: goto label_17416c;
        case 0x174170u: goto label_174170;
        case 0x174174u: goto label_174174;
        case 0x174178u: goto label_174178;
        case 0x17417cu: goto label_17417c;
        case 0x174180u: goto label_174180;
        case 0x174184u: goto label_174184;
        case 0x174188u: goto label_174188;
        case 0x17418cu: goto label_17418c;
        case 0x174190u: goto label_174190;
        case 0x174194u: goto label_174194;
        case 0x174198u: goto label_174198;
        case 0x17419cu: goto label_17419c;
        case 0x1741a0u: goto label_1741a0;
        case 0x1741a4u: goto label_1741a4;
        case 0x1741a8u: goto label_1741a8;
        case 0x1741acu: goto label_1741ac;
        case 0x1741b0u: goto label_1741b0;
        case 0x1741b4u: goto label_1741b4;
        case 0x1741b8u: goto label_1741b8;
        case 0x1741bcu: goto label_1741bc;
        case 0x1741c0u: goto label_1741c0;
        case 0x1741c4u: goto label_1741c4;
        case 0x1741c8u: goto label_1741c8;
        case 0x1741ccu: goto label_1741cc;
        case 0x1741d0u: goto label_1741d0;
        case 0x1741d4u: goto label_1741d4;
        case 0x1741d8u: goto label_1741d8;
        case 0x1741dcu: goto label_1741dc;
        case 0x1741e0u: goto label_1741e0;
        case 0x1741e4u: goto label_1741e4;
        case 0x1741e8u: goto label_1741e8;
        case 0x1741ecu: goto label_1741ec;
        case 0x1741f0u: goto label_1741f0;
        case 0x1741f4u: goto label_1741f4;
        case 0x1741f8u: goto label_1741f8;
        case 0x1741fcu: goto label_1741fc;
        case 0x174200u: goto label_174200;
        case 0x174204u: goto label_174204;
        case 0x174208u: goto label_174208;
        case 0x17420cu: goto label_17420c;
        case 0x174210u: goto label_174210;
        case 0x174214u: goto label_174214;
        case 0x174218u: goto label_174218;
        case 0x17421cu: goto label_17421c;
        case 0x174220u: goto label_174220;
        case 0x174224u: goto label_174224;
        case 0x174228u: goto label_174228;
        case 0x17422cu: goto label_17422c;
        case 0x174230u: goto label_174230;
        case 0x174234u: goto label_174234;
        case 0x174238u: goto label_174238;
        case 0x17423cu: goto label_17423c;
        case 0x174240u: goto label_174240;
        case 0x174244u: goto label_174244;
        case 0x174248u: goto label_174248;
        case 0x17424cu: goto label_17424c;
        case 0x174250u: goto label_174250;
        case 0x174254u: goto label_174254;
        case 0x174258u: goto label_174258;
        case 0x17425cu: goto label_17425c;
        case 0x174260u: goto label_174260;
        case 0x174264u: goto label_174264;
        case 0x174268u: goto label_174268;
        case 0x17426cu: goto label_17426c;
        case 0x174270u: goto label_174270;
        case 0x174274u: goto label_174274;
        case 0x174278u: goto label_174278;
        case 0x17427cu: goto label_17427c;
        case 0x174280u: goto label_174280;
        case 0x174284u: goto label_174284;
        case 0x174288u: goto label_174288;
        case 0x17428cu: goto label_17428c;
        case 0x174290u: goto label_174290;
        case 0x174294u: goto label_174294;
        case 0x174298u: goto label_174298;
        case 0x17429cu: goto label_17429c;
        case 0x1742a0u: goto label_1742a0;
        case 0x1742a4u: goto label_1742a4;
        case 0x1742a8u: goto label_1742a8;
        case 0x1742acu: goto label_1742ac;
        case 0x1742b0u: goto label_1742b0;
        case 0x1742b4u: goto label_1742b4;
        case 0x1742b8u: goto label_1742b8;
        case 0x1742bcu: goto label_1742bc;
        case 0x1742c0u: goto label_1742c0;
        case 0x1742c4u: goto label_1742c4;
        case 0x1742c8u: goto label_1742c8;
        case 0x1742ccu: goto label_1742cc;
        case 0x1742d0u: goto label_1742d0;
        case 0x1742d4u: goto label_1742d4;
        case 0x1742d8u: goto label_1742d8;
        case 0x1742dcu: goto label_1742dc;
        case 0x1742e0u: goto label_1742e0;
        case 0x1742e4u: goto label_1742e4;
        case 0x1742e8u: goto label_1742e8;
        case 0x1742ecu: goto label_1742ec;
        case 0x1742f0u: goto label_1742f0;
        case 0x1742f4u: goto label_1742f4;
        case 0x1742f8u: goto label_1742f8;
        case 0x1742fcu: goto label_1742fc;
        case 0x174300u: goto label_174300;
        case 0x174304u: goto label_174304;
        case 0x174308u: goto label_174308;
        case 0x17430cu: goto label_17430c;
        case 0x174310u: goto label_174310;
        case 0x174314u: goto label_174314;
        case 0x174318u: goto label_174318;
        case 0x17431cu: goto label_17431c;
        case 0x174320u: goto label_174320;
        case 0x174324u: goto label_174324;
        case 0x174328u: goto label_174328;
        case 0x17432cu: goto label_17432c;
        case 0x174330u: goto label_174330;
        case 0x174334u: goto label_174334;
        case 0x174338u: goto label_174338;
        case 0x17433cu: goto label_17433c;
        case 0x174340u: goto label_174340;
        case 0x174344u: goto label_174344;
        case 0x174348u: goto label_174348;
        case 0x17434cu: goto label_17434c;
        case 0x174350u: goto label_174350;
        case 0x174354u: goto label_174354;
        case 0x174358u: goto label_174358;
        case 0x17435cu: goto label_17435c;
        case 0x174360u: goto label_174360;
        case 0x174364u: goto label_174364;
        case 0x174368u: goto label_174368;
        case 0x17436cu: goto label_17436c;
        case 0x174370u: goto label_174370;
        case 0x174374u: goto label_174374;
        case 0x174378u: goto label_174378;
        case 0x17437cu: goto label_17437c;
        case 0x174380u: goto label_174380;
        case 0x174384u: goto label_174384;
        case 0x174388u: goto label_174388;
        case 0x17438cu: goto label_17438c;
        case 0x174390u: goto label_174390;
        case 0x174394u: goto label_174394;
        case 0x174398u: goto label_174398;
        case 0x17439cu: goto label_17439c;
        case 0x1743a0u: goto label_1743a0;
        case 0x1743a4u: goto label_1743a4;
        case 0x1743a8u: goto label_1743a8;
        case 0x1743acu: goto label_1743ac;
        case 0x1743b0u: goto label_1743b0;
        case 0x1743b4u: goto label_1743b4;
        case 0x1743b8u: goto label_1743b8;
        case 0x1743bcu: goto label_1743bc;
        case 0x1743c0u: goto label_1743c0;
        case 0x1743c4u: goto label_1743c4;
        case 0x1743c8u: goto label_1743c8;
        case 0x1743ccu: goto label_1743cc;
        case 0x1743d0u: goto label_1743d0;
        case 0x1743d4u: goto label_1743d4;
        case 0x1743d8u: goto label_1743d8;
        case 0x1743dcu: goto label_1743dc;
        case 0x1743e0u: goto label_1743e0;
        case 0x1743e4u: goto label_1743e4;
        case 0x1743e8u: goto label_1743e8;
        case 0x1743ecu: goto label_1743ec;
        case 0x1743f0u: goto label_1743f0;
        case 0x1743f4u: goto label_1743f4;
        case 0x1743f8u: goto label_1743f8;
        case 0x1743fcu: goto label_1743fc;
        case 0x174400u: goto label_174400;
        case 0x174404u: goto label_174404;
        case 0x174408u: goto label_174408;
        case 0x17440cu: goto label_17440c;
        case 0x174410u: goto label_174410;
        case 0x174414u: goto label_174414;
        case 0x174418u: goto label_174418;
        case 0x17441cu: goto label_17441c;
        case 0x174420u: goto label_174420;
        case 0x174424u: goto label_174424;
        case 0x174428u: goto label_174428;
        case 0x17442cu: goto label_17442c;
        case 0x174430u: goto label_174430;
        case 0x174434u: goto label_174434;
        case 0x174438u: goto label_174438;
        case 0x17443cu: goto label_17443c;
        case 0x174440u: goto label_174440;
        case 0x174444u: goto label_174444;
        case 0x174448u: goto label_174448;
        case 0x17444cu: goto label_17444c;
        case 0x174450u: goto label_174450;
        case 0x174454u: goto label_174454;
        case 0x174458u: goto label_174458;
        case 0x17445cu: goto label_17445c;
        case 0x174460u: goto label_174460;
        case 0x174464u: goto label_174464;
        case 0x174468u: goto label_174468;
        case 0x17446cu: goto label_17446c;
        case 0x174470u: goto label_174470;
        case 0x174474u: goto label_174474;
        case 0x174478u: goto label_174478;
        case 0x17447cu: goto label_17447c;
        case 0x174480u: goto label_174480;
        case 0x174484u: goto label_174484;
        case 0x174488u: goto label_174488;
        case 0x17448cu: goto label_17448c;
        case 0x174490u: goto label_174490;
        case 0x174494u: goto label_174494;
        case 0x174498u: goto label_174498;
        case 0x17449cu: goto label_17449c;
        case 0x1744a0u: goto label_1744a0;
        case 0x1744a4u: goto label_1744a4;
        case 0x1744a8u: goto label_1744a8;
        case 0x1744acu: goto label_1744ac;
        case 0x1744b0u: goto label_1744b0;
        case 0x1744b4u: goto label_1744b4;
        case 0x1744b8u: goto label_1744b8;
        case 0x1744bcu: goto label_1744bc;
        case 0x1744c0u: goto label_1744c0;
        case 0x1744c4u: goto label_1744c4;
        case 0x1744c8u: goto label_1744c8;
        case 0x1744ccu: goto label_1744cc;
        case 0x1744d0u: goto label_1744d0;
        case 0x1744d4u: goto label_1744d4;
        case 0x1744d8u: goto label_1744d8;
        case 0x1744dcu: goto label_1744dc;
        case 0x1744e0u: goto label_1744e0;
        case 0x1744e4u: goto label_1744e4;
        case 0x1744e8u: goto label_1744e8;
        case 0x1744ecu: goto label_1744ec;
        case 0x1744f0u: goto label_1744f0;
        case 0x1744f4u: goto label_1744f4;
        case 0x1744f8u: goto label_1744f8;
        case 0x1744fcu: goto label_1744fc;
        case 0x174500u: goto label_174500;
        case 0x174504u: goto label_174504;
        case 0x174508u: goto label_174508;
        case 0x17450cu: goto label_17450c;
        case 0x174510u: goto label_174510;
        case 0x174514u: goto label_174514;
        case 0x174518u: goto label_174518;
        case 0x17451cu: goto label_17451c;
        case 0x174520u: goto label_174520;
        case 0x174524u: goto label_174524;
        case 0x174528u: goto label_174528;
        case 0x17452cu: goto label_17452c;
        default: return;
    }

label_173d60:
    // 0x173d60: 0x24060016  addiu       $a2, $zero, 0x16
    ctx->pc = 0x173d60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_173d64:
    // 0x173d64: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x173d64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_173d68:
    // 0x173d68: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x173d68u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_173d6c:
    // 0x173d6c: 0xc066c72  jal         func_19B1C8
label_173d70:
    if (ctx->pc == 0x173D70u) {
        ctx->pc = 0x173D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173D6Cu;
        // 0x173d70: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173D74u;
        goto label_173d74;
    }
    ctx->pc = 0x173D6Cu;
    SET_GPR_U32(ctx, 31, 0x173D74u);
    ctx->pc = 0x173D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173D6Cu;
    // 0x173d70: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x173D74u;
label_173d74:
    // 0x173d74: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x173d74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_173d78:
    // 0x173d78: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x173d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_173d7c:
    // 0x173d7c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x173d7cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_173d80:
    // 0x173d80: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x173d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_173d84:
    // 0x173d84: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x173d84u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_173d88:
    // 0x173d88: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x173d88u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_173d8c:
    // 0x173d8c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x173d8cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_173d90:
    // 0x173d90: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x173d90u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_173d94:
    // 0x173d94: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x173d94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_173d98:
    // 0x173d98: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x173d98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_173d9c:
    // 0x173d9c: 0x3e00008  jr          $ra
label_173da0:
    if (ctx->pc == 0x173DA0u) {
        ctx->pc = 0x173DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173D9Cu;
        // 0x173da0: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173DA4u;
        goto label_173da4;
    }
    ctx->pc = 0x173D9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173D9Cu;
        // 0x173da0: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x173D9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x173DA4u;
label_173da4:
    // 0x173da4: 0x0  nop
    ctx->pc = 0x173da4u;
    // NOP
label_173da8:
    // 0x173da8: 0x0  nop
    ctx->pc = 0x173da8u;
    // NOP
label_173dac:
    // 0x173dac: 0x0  nop
    ctx->pc = 0x173dacu;
    // NOP
label_173db0:
    // 0x173db0: 0x3c055000  lui         $a1, 0x5000
    ctx->pc = 0x173db0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20480 << 16));
label_173db4:
    // 0x173db4: 0x3c032136  lui         $v1, 0x2136
    ctx->pc = 0x173db4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8502 << 16));
label_173db8:
    // 0x173db8: 0x34a90015  ori         $t1, $a1, 0x15
    ctx->pc = 0x173db8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)21);
label_173dbc:
    // 0x173dbc: 0x3463c000  ori         $v1, $v1, 0xC000
    ctx->pc = 0x173dbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49152);
label_173dc0:
    // 0x173dc0: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x173dc0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
label_173dc4:
    // 0x173dc4: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x173dc4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_173dc8:
    // 0x173dc8: 0x3403800a  ori         $v1, $zero, 0x800A
    ctx->pc = 0x173dc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32778);
label_173dcc:
    // 0x173dcc: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x173dccu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_173dd0:
    // 0x173dd0: 0xe48c02c0  swc1        $f12, 0x2C0($a0)
    ctx->pc = 0x173dd0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 704), bits); }
label_173dd4:
    // 0x173dd4: 0x654025  or          $t0, $v1, $a1
    ctx->pc = 0x173dd4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_173dd8:
    // 0x173dd8: 0x24070041  addiu       $a3, $zero, 0x41
    ctx->pc = 0x173dd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
label_173ddc:
    // 0x173ddc: 0x10000025  b           . + 4 + (0x25 << 2)
label_173de0:
    if (ctx->pc == 0x173DE0u) {
        ctx->pc = 0x173DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173DDCu;
        // 0x173de0: 0x24060060  addiu       $a2, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173DE4u;
        goto label_173de4;
    }
    ctx->pc = 0x173DDCu;
    {
        const bool branch_taken_0x173ddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173DDCu;
        // 0x173de0: 0x24060060  addiu       $a2, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173ddc) {
            ctx->pc = 0x173E74u;
            goto label_173e74;
        }
    }
    ctx->pc = 0x173DE4u;
label_173de4:
    // 0x173de4: 0xad400000  sw          $zero, 0x0($t2)
    ctx->pc = 0x173de4u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 0));
label_173de8:
    // 0x173de8: 0x254b0020  addiu       $t3, $t2, 0x20
    ctx->pc = 0x173de8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 10), 32));
label_173dec:
    // 0x173dec: 0xad400004  sw          $zero, 0x4($t2)
    ctx->pc = 0x173decu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 0));
label_173df0:
    // 0x173df0: 0x256b0010  addiu       $t3, $t3, 0x10
    ctx->pc = 0x173df0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
label_173df4:
    // 0x173df4: 0xad400008  sw          $zero, 0x8($t2)
    ctx->pc = 0x173df4u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 0));
label_173df8:
    // 0x173df8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x173df8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_173dfc:
    // 0x173dfc: 0xad49000c  sw          $t1, 0xC($t2)
    ctx->pc = 0x173dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 12), GPR_U32(ctx, 9));
label_173e00:
    // 0x173e00: 0xfd480010  sd          $t0, 0x10($t2)
    ctx->pc = 0x173e00u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 16), GPR_U64(ctx, 8));
label_173e04:
    // 0x173e04: 0xfd470018  sd          $a3, 0x18($t2)
    ctx->pc = 0x173e04u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 24), GPR_U64(ctx, 7));
label_173e08:
    // 0x173e08: 0xad400020  sw          $zero, 0x20($t2)
    ctx->pc = 0x173e08u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 32), GPR_U32(ctx, 0));
label_173e0c:
    // 0x173e0c: 0xad400024  sw          $zero, 0x24($t2)
    ctx->pc = 0x173e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 36), GPR_U32(ctx, 0));
label_173e10:
    // 0x173e10: 0xad400028  sw          $zero, 0x28($t2)
    ctx->pc = 0x173e10u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 40), GPR_U32(ctx, 0));
label_173e14:
    // 0x173e14: 0xad46002c  sw          $a2, 0x2C($t2)
    ctx->pc = 0x173e14u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 44), GPR_U32(ctx, 6));
label_173e18:
    // 0x173e18: 0xad600000  sw          $zero, 0x0($t3)
    ctx->pc = 0x173e18u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 0));
label_173e1c:
    // 0x173e1c: 0xad600004  sw          $zero, 0x4($t3)
    ctx->pc = 0x173e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 0));
label_173e20:
    // 0x173e20: 0xad600008  sw          $zero, 0x8($t3)
    ctx->pc = 0x173e20u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 8), GPR_U32(ctx, 0));
label_173e24:
    // 0x173e24: 0xad60000c  sw          $zero, 0xC($t3)
    ctx->pc = 0x173e24u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 12), GPR_U32(ctx, 0));
label_173e28:
    // 0x173e28: 0x1000000c  b           . + 4 + (0xC << 2)
label_173e2c:
    if (ctx->pc == 0x173E2Cu) {
        ctx->pc = 0x173E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173E28u;
        // 0x173e2c: 0x256b0010  addiu       $t3, $t3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173E30u;
        goto label_173e30;
    }
    ctx->pc = 0x173E28u;
    {
        const bool branch_taken_0x173e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173E28u;
        // 0x173e2c: 0x256b0010  addiu       $t3, $t3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173e28) {
            ctx->pc = 0x173E5Cu;
            goto label_173e5c;
        }
    }
    ctx->pc = 0x173E30u;
label_173e30:
    // 0x173e30: 0xad600000  sw          $zero, 0x0($t3)
    ctx->pc = 0x173e30u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 0));
label_173e34:
    // 0x173e34: 0xad600004  sw          $zero, 0x4($t3)
    ctx->pc = 0x173e34u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 0));
label_173e38:
    // 0x173e38: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x173e38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_173e3c:
    // 0x173e3c: 0xad600008  sw          $zero, 0x8($t3)
    ctx->pc = 0x173e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 8), GPR_U32(ctx, 0));
label_173e40:
    // 0x173e40: 0xad60000c  sw          $zero, 0xC($t3)
    ctx->pc = 0x173e40u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 12), GPR_U32(ctx, 0));
label_173e44:
    // 0x173e44: 0x256b0010  addiu       $t3, $t3, 0x10
    ctx->pc = 0x173e44u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
label_173e48:
    // 0x173e48: 0xad600000  sw          $zero, 0x0($t3)
    ctx->pc = 0x173e48u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 0));
label_173e4c:
    // 0x173e4c: 0xad600004  sw          $zero, 0x4($t3)
    ctx->pc = 0x173e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 0));
label_173e50:
    // 0x173e50: 0xad600008  sw          $zero, 0x8($t3)
    ctx->pc = 0x173e50u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 8), GPR_U32(ctx, 0));
label_173e54:
    // 0x173e54: 0xad60000c  sw          $zero, 0xC($t3)
    ctx->pc = 0x173e54u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 12), GPR_U32(ctx, 0));
label_173e58:
    // 0x173e58: 0x256b0010  addiu       $t3, $t3, 0x10
    ctx->pc = 0x173e58u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
label_173e5c:
    // 0x173e5c: 0x0  nop
    ctx->pc = 0x173e5cu;
    // NOP
label_173e60:
    // 0x173e60: 0x28650009  slti        $a1, $v1, 0x9
    ctx->pc = 0x173e60u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
label_173e64:
    // 0x173e64: 0x14a0fff2  bnez        $a1, . + 4 + (-0xE << 2)
label_173e68:
    if (ctx->pc == 0x173E68u) {
        ctx->pc = 0x173E6Cu;
        goto label_173e6c;
    }
    ctx->pc = 0x173E64u;
    {
        const bool branch_taken_0x173e64 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x173e64) {
            ctx->pc = 0x173E30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_173e30;
        }
    }
    ctx->pc = 0x173E6Cu;
label_173e6c:
    // 0x173e6c: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x173e6cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
label_173e70:
    // 0x173e70: 0x254a0160  addiu       $t2, $t2, 0x160
    ctx->pc = 0x173e70u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 352));
label_173e74:
    // 0x173e74: 0x0  nop
    ctx->pc = 0x173e74u;
    // NOP
label_173e78:
    // 0x173e78: 0x29830002  slti        $v1, $t4, 0x2
    ctx->pc = 0x173e78u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 12) < (int64_t)(int32_t)2) ? 1 : 0);
label_173e7c:
    // 0x173e7c: 0x1460ffd9  bnez        $v1, . + 4 + (-0x27 << 2)
label_173e80:
    if (ctx->pc == 0x173E80u) {
        ctx->pc = 0x173E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173E7Cu;
        // 0x173e80: 0x3c0543b4  lui         $a1, 0x43B4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17332 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173E84u;
        goto label_173e84;
    }
    ctx->pc = 0x173E7Cu;
    {
        const bool branch_taken_0x173e7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x173E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173E7Cu;
        // 0x173e80: 0x3c0543b4  lui         $a1, 0x43B4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17332 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173e7c) {
            ctx->pc = 0x173DE4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_173de4;
        }
    }
    ctx->pc = 0x173E84u;
label_173e84:
    // 0x173e84: 0xac8002d0  sw          $zero, 0x2D0($a0)
    ctx->pc = 0x173e84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 720), GPR_U32(ctx, 0));
label_173e88:
    // 0x173e88: 0x44852000  mtc1        $a1, $f4
    ctx->pc = 0x173e88u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_173e8c:
    // 0x173e8c: 0xac8002d4  sw          $zero, 0x2D4($a0)
    ctx->pc = 0x173e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 724), GPR_U32(ctx, 0));
label_173e90:
    // 0x173e90: 0x3c064100  lui         $a2, 0x4100
    ctx->pc = 0x173e90u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16640 << 16));
label_173e94:
    // 0x173e94: 0x3c0c3f80  lui         $t4, 0x3F80
    ctx->pc = 0x173e94u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)16256 << 16));
label_173e98:
    // 0x173e98: 0x3c054049  lui         $a1, 0x4049
    ctx->pc = 0x173e98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16457 << 16));
label_173e9c:
    // 0x173e9c: 0xac8002d8  sw          $zero, 0x2D8($a0)
    ctx->pc = 0x173e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 728), GPR_U32(ctx, 0));
label_173ea0:
    // 0x173ea0: 0x34a50fdb  ori         $a1, $a1, 0xFDB
    ctx->pc = 0x173ea0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4059);
label_173ea4:
    // 0x173ea4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x173ea4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_173ea8:
    // 0x173ea8: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x173ea8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_173eac:
    // 0x173eac: 0xac8c02dc  sw          $t4, 0x2DC($a0)
    ctx->pc = 0x173eacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 732), GPR_U32(ctx, 12));
label_173eb0:
    // 0x173eb0: 0x44861800  mtc1        $a2, $f3
    ctx->pc = 0x173eb0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_173eb4:
    // 0x173eb4: 0x248b02e0  addiu       $t3, $a0, 0x2E0
    ctx->pc = 0x173eb4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), 736));
label_173eb8:
    // 0x173eb8: 0x3c054334  lui         $a1, 0x4334
    ctx->pc = 0x173eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17204 << 16));
label_173ebc:
    // 0x173ebc: 0x248a02e4  addiu       $t2, $a0, 0x2E4
    ctx->pc = 0x173ebcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), 740));
label_173ec0:
    // 0x173ec0: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x173ec0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_173ec4:
    // 0x173ec4: 0x248702e8  addiu       $a3, $a0, 0x2E8
    ctx->pc = 0x173ec4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 744));
label_173ec8:
    // 0x173ec8: 0x1000001b  b           . + 4 + (0x1B << 2)
label_173ecc:
    if (ctx->pc == 0x173ECCu) {
        ctx->pc = 0x173ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173EC8u;
        // 0x173ecc: 0x248502ec  addiu       $a1, $a0, 0x2EC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 748));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173ED0u;
        goto label_173ed0;
    }
    ctx->pc = 0x173EC8u;
    {
        const bool branch_taken_0x173ec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173EC8u;
        // 0x173ecc: 0x248502ec  addiu       $a1, $a0, 0x2EC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 748));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173ec8) {
            ctx->pc = 0x173F38u;
            goto label_173f38;
        }
    }
    ctx->pc = 0x173ED0u;
label_173ed0:
    // 0x173ed0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x173ed0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_173ed4:
    // 0x173ed4: 0x0  nop
    ctx->pc = 0x173ed4u;
    // NOP
label_173ed8:
    // 0x173ed8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x173ed8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_173edc:
    // 0x173edc: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x173edcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_173ee0:
    // 0x173ee0: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x173ee0u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[3];
label_173ee4:
    // 0x173ee4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x173ee4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_173ee8:
    // 0x173ee8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x173ee8u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
label_173eec:
    // 0x173eec: 0x44090000  mfc1        $t1, $f0
    ctx->pc = 0x173eecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
label_173ef0:
    // 0x173ef0: 0x48a90800  qmtc2.ni    $t1, $vf1
    ctx->pc = 0x173ef0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 9));
label_173ef4:
    // 0x173ef4: 0x4a000138  vcallms     0x20
    ctx->pc = 0x173ef4u;
    {     ctx->vu0_tpc = 0x20;     runtime->executeVU0Microprogram(rdram, ctx, 0x20); }
label_173ef8:
    // 0x173ef8: 0x48290801  qmfc2.i     $t1, $vf1
    ctx->pc = 0x173ef8u;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[1]));
label_173efc:
    // 0x173efc: 0x44892800  mtc1        $t1, $f5
    ctx->pc = 0x173efcu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_173f00:
    // 0x173f00: 0x48291000  qmfc2.ni    $t1, $vf2
    ctx->pc = 0x173f00u;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[2]));
label_173f04:
    // 0x173f04: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x173f04u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_173f08:
    // 0x173f08: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x173f08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_173f0c:
    // 0x173f0c: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x173f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_173f10:
    // 0x173f10: 0x1644821  addu        $t1, $t3, $a0
    ctx->pc = 0x173f10u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
label_173f14:
    // 0x173f14: 0x1444021  addu        $t0, $t2, $a0
    ctx->pc = 0x173f14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
label_173f18:
    // 0x173f18: 0xe43021  addu        $a2, $a3, $a0
    ctx->pc = 0x173f18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_173f1c:
    // 0x173f1c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x173f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_173f20:
    // 0x173f20: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x173f20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_173f24:
    // 0x173f24: 0xe5200000  swc1        $f0, 0x0($t1)
    ctx->pc = 0x173f24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
label_173f28:
    // 0x173f28: 0x46056002  mul.s       $f0, $f12, $f5
    ctx->pc = 0x173f28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[5]);
label_173f2c:
    // 0x173f2c: 0xad000000  sw          $zero, 0x0($t0)
    ctx->pc = 0x173f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
label_173f30:
    // 0x173f30: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x173f30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_173f34:
    // 0x173f34: 0xac8c0000  sw          $t4, 0x0($a0)
    ctx->pc = 0x173f34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 12));
label_173f38:
    // 0x173f38: 0x28640009  slti        $a0, $v1, 0x9
    ctx->pc = 0x173f38u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
label_173f3c:
    // 0x173f3c: 0x1480ffe4  bnez        $a0, . + 4 + (-0x1C << 2)
label_173f40:
    if (ctx->pc == 0x173F40u) {
        ctx->pc = 0x173F44u;
        goto label_173f44;
    }
    ctx->pc = 0x173F3Cu;
    {
        const bool branch_taken_0x173f3c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x173f3c) {
            ctx->pc = 0x173ED0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_173ed0;
        }
    }
    ctx->pc = 0x173F44u;
label_173f44:
    // 0x173f44: 0x3e00008  jr          $ra
label_173f48:
    if (ctx->pc == 0x173F48u) {
        ctx->pc = 0x173F4Cu;
        goto label_173f4c;
    }
    ctx->pc = 0x173F44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x173F44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x173F4Cu;
label_173f4c:
    // 0x173f4c: 0x0  nop
    ctx->pc = 0x173f4cu;
    // NOP
label_173f50:
    // 0x173f50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x173f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_173f54:
    // 0x173f54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x173f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_173f58:
    // 0x173f58: 0xc072f90  jal         func_1CBE40
label_173f5c:
    if (ctx->pc == 0x173F5Cu) {
        ctx->pc = 0x173F60u;
        goto label_173f60;
    }
    ctx->pc = 0x173F58u;
    SET_GPR_U32(ctx, 31, 0x173F60u);
    ctx->pc = 0x1CBE40u;
    { ctx->pc = 0x1cbe40; return; }
    ctx->pc = 0x173F60u;
label_173f60:
    // 0x173f60: 0xc070038  jal         func_1C00E0
label_173f64:
    if (ctx->pc == 0x173F64u) {
        ctx->pc = 0x173F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173F60u;
        // 0x173f64: 0x8f84874c  lw          $a0, -0x78B4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936396)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173F68u;
        goto label_173f68;
    }
    ctx->pc = 0x173F60u;
    SET_GPR_U32(ctx, 31, 0x173F68u);
    ctx->pc = 0x173F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173F60u;
    // 0x173f64: 0x8f84874c  lw          $a0, -0x78B4($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936396)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x173F68u;
label_173f68:
    // 0x173f68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x173f68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_173f6c:
    // 0x173f6c: 0x3e00008  jr          $ra
label_173f70:
    if (ctx->pc == 0x173F70u) {
        ctx->pc = 0x173F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173F6Cu;
        // 0x173f70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173F74u;
        goto label_173f74;
    }
    ctx->pc = 0x173F6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173F6Cu;
        // 0x173f70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x173F6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x173F74u;
label_173f74:
    // 0x173f74: 0x0  nop
    ctx->pc = 0x173f74u;
    // NOP
label_173f78:
    // 0x173f78: 0x0  nop
    ctx->pc = 0x173f78u;
    // NOP
label_173f7c:
    // 0x173f7c: 0x0  nop
    ctx->pc = 0x173f7cu;
    // NOP
label_173f80:
    // 0x173f80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x173f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_173f84:
    // 0x173f84: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x173f84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_173f88:
    // 0x173f88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x173f88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_173f8c:
    // 0x173f8c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x173f8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_173f90:
    // 0x173f90: 0xa42051f6  sh          $zero, 0x51F6($at)
    ctx->pc = 0x173f90u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 20982), (uint16_t)GPR_U32(ctx, 0));
label_173f94:
    // 0x173f94: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x173f94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_173f98:
    // 0x173f98: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x173f98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_173f9c:
    // 0x173f9c: 0xc058d08  jal         func_163420
label_173fa0:
    if (ctx->pc == 0x173FA0u) {
        ctx->pc = 0x173FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173F9Cu;
        // 0x173fa0: 0xa42051f4  sh          $zero, 0x51F4($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 20980), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173FA4u;
        goto label_173fa4;
    }
    ctx->pc = 0x173F9Cu;
    SET_GPR_U32(ctx, 31, 0x173FA4u);
    ctx->pc = 0x173FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173F9Cu;
    // 0x173fa0: 0xa42051f4  sh          $zero, 0x51F4($at) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 1), 20980), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x163420u;
    { ctx->pc = 0x163420; return; }
    ctx->pc = 0x173FA4u;
label_173fa4:
    // 0x173fa4: 0x8f828748  lw          $v0, -0x78B8($gp)
    ctx->pc = 0x173fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936392)));
label_173fa8:
    // 0x173fa8: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_173fac:
    if (ctx->pc == 0x173FACu) {
        ctx->pc = 0x173FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173FA8u;
        // 0x173fac: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173FB0u;
        goto label_173fb0;
    }
    ctx->pc = 0x173FA8u;
    {
        const bool branch_taken_0x173fa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x173FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173FA8u;
        // 0x173fac: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173fa8) {
            ctx->pc = 0x174000u;
            goto label_174000;
        }
    }
    ctx->pc = 0x173FB0u;
label_173fb0:
    // 0x173fb0: 0x3c05002f  lui         $a1, 0x2F
    ctx->pc = 0x173fb0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47 << 16));
label_173fb4:
    // 0x173fb4: 0x8c264974  lw          $a2, 0x4974($at)
    ctx->pc = 0x173fb4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18804)));
label_173fb8:
    // 0x173fb8: 0x24a52570  addiu       $a1, $a1, 0x2570
    ctx->pc = 0x173fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9584));
label_173fbc:
    // 0x173fbc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x173fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_173fc0:
    // 0x173fc0: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x173fc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_173fc4:
    // 0x173fc4: 0x61200  sll         $v0, $a2, 8
    ctx->pc = 0x173fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_173fc8:
    // 0x173fc8: 0x8c23496c  lw          $v1, 0x496C($at)
    ctx->pc = 0x173fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18796)));
label_173fcc:
    // 0x173fcc: 0x463023  subu        $a2, $v0, $a2
    ctx->pc = 0x173fccu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_173fd0:
    // 0x173fd0: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x173fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_173fd4:
    // 0x173fd4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x173fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_173fd8:
    // 0x173fd8: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x173fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_173fdc:
    // 0x173fdc: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x173fdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_173fe0:
    // 0x173fe0: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x173fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_173fe4:
    // 0x173fe4: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x173fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_173fe8:
    // 0x173fe8: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x173fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_173fec:
    // 0x173fec: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x173fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_173ff0:
    // 0x173ff0: 0xc05da58  jal         func_176960
label_173ff4:
    if (ctx->pc == 0x173FF4u) {
        ctx->pc = 0x173FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173FF0u;
        // 0x173ff4: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173FF8u;
        goto label_173ff8;
    }
    ctx->pc = 0x173FF0u;
    SET_GPR_U32(ctx, 31, 0x173FF8u);
    ctx->pc = 0x173FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173FF0u;
    // 0x173ff4: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x176960u;
    { ctx->pc = 0x176960; return; }
    ctx->pc = 0x173FF8u;
label_173ff8:
    // 0x173ff8: 0x10000003  b           . + 4 + (0x3 << 2)
label_173ffc:
    if (ctx->pc == 0x173FFCu) {
        ctx->pc = 0x174000u;
        goto label_174000;
    }
    ctx->pc = 0x173FF8u;
    {
        const bool branch_taken_0x173ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x173ff8) {
            ctx->pc = 0x174008u;
            goto label_174008;
        }
    }
    ctx->pc = 0x174000u;
label_174000:
    // 0x174000: 0xc04df94  jal         func_137E50
label_174004:
    if (ctx->pc == 0x174004u) {
        ctx->pc = 0x174008u;
        goto label_174008;
    }
    ctx->pc = 0x174000u;
    SET_GPR_U32(ctx, 31, 0x174008u);
    ctx->pc = 0x137E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137E50u, 0x174000u, 0x174008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174008u;
label_174008:
    // 0x174008: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x174008u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_17400c:
    // 0x17400c: 0x2402002f  addiu       $v0, $zero, 0x2F
    ctx->pc = 0x17400cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
label_174010:
    // 0x174010: 0x9023490c  lbu         $v1, 0x490C($at)
    ctx->pc = 0x174010u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18700)));
label_174014:
    // 0x174014: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_174018:
    if (ctx->pc == 0x174018u) {
        ctx->pc = 0x17401Cu;
        goto label_17401c;
    }
    ctx->pc = 0x174014u;
    {
        const bool branch_taken_0x174014 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x174014) {
            ctx->pc = 0x174024u;
            goto label_174024;
        }
    }
    ctx->pc = 0x17401Cu;
label_17401c:
    // 0x17401c: 0xc08a608  jal         func_229820
label_174020:
    if (ctx->pc == 0x174020u) {
        ctx->pc = 0x174024u;
        goto label_174024;
    }
    ctx->pc = 0x17401Cu;
    SET_GPR_U32(ctx, 31, 0x174024u);
    ctx->pc = 0x229820u;
    { ctx->pc = 0x229820; return; }
    ctx->pc = 0x174024u;
label_174024:
    // 0x174024: 0xc04bee0  jal         func_12FB80
label_174028:
    if (ctx->pc == 0x174028u) {
        ctx->pc = 0x17402Cu;
        goto label_17402c;
    }
    ctx->pc = 0x174024u;
    SET_GPR_U32(ctx, 31, 0x17402Cu);
    ctx->pc = 0x12FB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FB80u, 0x174024u, 0x17402Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17402Cu;
label_17402c:
    // 0x17402c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17402cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_174030:
    // 0x174030: 0x3e00008  jr          $ra
label_174034:
    if (ctx->pc == 0x174034u) {
        ctx->pc = 0x174034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174030u;
        // 0x174034: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174038u;
        goto label_174038;
    }
    ctx->pc = 0x174030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174030u;
        // 0x174034: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x174030u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x174038u;
label_174038:
    // 0x174038: 0x0  nop
    ctx->pc = 0x174038u;
    // NOP
label_17403c:
    // 0x17403c: 0x0  nop
    ctx->pc = 0x17403cu;
    // NOP
label_174040:
    // 0x174040: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x174040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_174044:
    // 0x174044: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x174044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_174048:
    // 0x174048: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x174048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_17404c:
    // 0x17404c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17404cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_174050:
    // 0x174050: 0x8f828590  lw          $v0, -0x7A70($gp)
    ctx->pc = 0x174050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_174054:
    // 0x174054: 0x304201c0  andi        $v0, $v0, 0x1C0
    ctx->pc = 0x174054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)448);
label_174058:
    // 0x174058: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_17405c:
    if (ctx->pc == 0x17405Cu) {
        ctx->pc = 0x174060u;
        goto label_174060;
    }
    ctx->pc = 0x174058u;
    {
        const bool branch_taken_0x174058 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x174058) {
            ctx->pc = 0x174080u;
            goto label_174080;
        }
    }
    ctx->pc = 0x174060u;
label_174060:
    // 0x174060: 0xc05d33c  jal         func_174CF0
label_174064:
    if (ctx->pc == 0x174064u) {
        ctx->pc = 0x174068u;
        goto label_174068;
    }
    ctx->pc = 0x174060u;
    SET_GPR_U32(ctx, 31, 0x174068u);
    ctx->pc = 0x174CF0u;
    { ctx->pc = 0x174cf0; return; }
    ctx->pc = 0x174068u;
label_174068:
    // 0x174068: 0xc088318  jal         func_220C60
label_17406c:
    if (ctx->pc == 0x17406Cu) {
        ctx->pc = 0x174070u;
        goto label_174070;
    }
    ctx->pc = 0x174068u;
    SET_GPR_U32(ctx, 31, 0x174070u);
    ctx->pc = 0x220C60u;
    { ctx->pc = 0x220c60; return; }
    ctx->pc = 0x174070u;
label_174070:
    // 0x174070: 0xc05d038  jal         func_1740E0
label_174074:
    if (ctx->pc == 0x174074u) {
        ctx->pc = 0x174078u;
        goto label_174078;
    }
    ctx->pc = 0x174070u;
    SET_GPR_U32(ctx, 31, 0x174078u);
    ctx->pc = 0x1740E0u;
    goto label_1740e0;
    ctx->pc = 0x174078u;
label_174078:
    // 0x174078: 0x10000011  b           . + 4 + (0x11 << 2)
label_17407c:
    if (ctx->pc == 0x17407Cu) {
        ctx->pc = 0x174080u;
        goto label_174080;
    }
    ctx->pc = 0x174078u;
    {
        const bool branch_taken_0x174078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x174078) {
            ctx->pc = 0x1740C0u;
            goto label_1740c0;
        }
    }
    ctx->pc = 0x174080u;
label_174080:
    // 0x174080: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x174080u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_174084:
    // 0x174084: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x174084u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_174088:
    // 0x174088: 0x0  nop
    ctx->pc = 0x174088u;
    // NOP
label_17408c:
    // 0x17408c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x17408cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_174090:
    // 0x174090: 0x24421300  addiu       $v0, $v0, 0x1300
    ctx->pc = 0x174090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4864));
label_174094:
    // 0x174094: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x174094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_174098:
    // 0x174098: 0x9042367c  lbu         $v0, 0x367C($v0)
    ctx->pc = 0x174098u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 13948)));
label_17409c:
    // 0x17409c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1740a0:
    if (ctx->pc == 0x1740A0u) {
        ctx->pc = 0x1740A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17409Cu;
        // 0x1740a0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1740A4u;
        goto label_1740a4;
    }
    ctx->pc = 0x17409Cu;
    {
        const bool branch_taken_0x17409c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1740A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17409Cu;
        // 0x1740a0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17409c) {
            ctx->pc = 0x1740ACu;
            goto label_1740ac;
        }
    }
    ctx->pc = 0x1740A4u;
label_1740a4:
    // 0x1740a4: 0xc057f18  jal         func_15FC60
label_1740a8:
    if (ctx->pc == 0x1740A8u) {
        ctx->pc = 0x1740A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1740A4u;
        // 0x1740a8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1740ACu;
        goto label_1740ac;
    }
    ctx->pc = 0x1740A4u;
    SET_GPR_U32(ctx, 31, 0x1740ACu);
    ctx->pc = 0x1740A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1740A4u;
    // 0x1740a8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15FC60u;
    { ctx->pc = 0x15fc60; return; }
    ctx->pc = 0x1740ACu;
label_1740ac:
    // 0x1740ac: 0x0  nop
    ctx->pc = 0x1740acu;
    // NOP
label_1740b0:
    // 0x1740b0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1740b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1740b4:
    // 0x1740b4: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x1740b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_1740b8:
    // 0x1740b8: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
label_1740bc:
    if (ctx->pc == 0x1740BCu) {
        ctx->pc = 0x1740BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1740B8u;
        // 0x1740bc: 0x26310090  addiu       $s1, $s1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1740C0u;
        goto label_1740c0;
    }
    ctx->pc = 0x1740B8u;
    {
        const bool branch_taken_0x1740b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1740BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1740B8u;
        // 0x1740bc: 0x26310090  addiu       $s1, $s1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1740b8) {
            ctx->pc = 0x174088u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_174088;
        }
    }
    ctx->pc = 0x1740C0u;
label_1740c0:
    // 0x1740c0: 0xc05d234  jal         func_1748D0
label_1740c4:
    if (ctx->pc == 0x1740C4u) {
        ctx->pc = 0x1740C8u;
        goto label_1740c8;
    }
    ctx->pc = 0x1740C0u;
    SET_GPR_U32(ctx, 31, 0x1740C8u);
    ctx->pc = 0x1748D0u;
    { ctx->pc = 0x1748d0; return; }
    ctx->pc = 0x1740C8u;
label_1740c8:
    // 0x1740c8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1740c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1740cc:
    // 0x1740cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1740ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1740d0:
    // 0x1740d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1740d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1740d4:
    // 0x1740d4: 0x3e00008  jr          $ra
label_1740d8:
    if (ctx->pc == 0x1740D8u) {
        ctx->pc = 0x1740D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1740D4u;
        // 0x1740d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1740DCu;
        goto label_1740dc;
    }
    ctx->pc = 0x1740D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1740D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1740D4u;
        // 0x1740d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1740D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1740DCu;
label_1740dc:
    // 0x1740dc: 0x0  nop
    ctx->pc = 0x1740dcu;
    // NOP
label_1740e0:
    // 0x1740e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1740e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1740e4:
    // 0x1740e4: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1740e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1740e8:
    // 0x1740e8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1740e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1740ec:
    // 0x1740ec: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x1740ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_1740f0:
    // 0x1740f0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1740f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1740f4:
    // 0x1740f4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1740f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1740f8:
    // 0x1740f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1740f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1740fc:
    // 0x1740fc: 0x9024490c  lbu         $a0, 0x490C($at)
    ctx->pc = 0x1740fcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18700)));
label_174100:
    // 0x174100: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
label_174104:
    if (ctx->pc == 0x174104u) {
        ctx->pc = 0x174104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174100u;
        // 0x174104: 0x24030036  addiu       $v1, $zero, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174108u;
        goto label_174108;
    }
    ctx->pc = 0x174100u;
    {
        const bool branch_taken_0x174100 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x174104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174100u;
        // 0x174104: 0x24030036  addiu       $v1, $zero, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174100) {
            ctx->pc = 0x174118u;
            goto label_174118;
        }
    }
    ctx->pc = 0x174108u;
label_174108:
    // 0x174108: 0xc08a5e0  jal         func_229780
label_17410c:
    if (ctx->pc == 0x17410Cu) {
        ctx->pc = 0x174110u;
        goto label_174110;
    }
    ctx->pc = 0x174108u;
    SET_GPR_U32(ctx, 31, 0x174110u);
    ctx->pc = 0x229780u;
    { ctx->pc = 0x229780; return; }
    ctx->pc = 0x174110u;
label_174110:
    // 0x174110: 0x100000be  b           . + 4 + (0xBE << 2)
label_174114:
    if (ctx->pc == 0x174114u) {
        ctx->pc = 0x174114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174110u;
        // 0x174114: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174118u;
        goto label_174118;
    }
    ctx->pc = 0x174110u;
    {
        const bool branch_taken_0x174110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174110u;
        // 0x174114: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174110) {
            ctx->pc = 0x17440Cu;
            goto label_17440c;
        }
    }
    ctx->pc = 0x174118u;
label_174118:
    // 0x174118: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
label_17411c:
    if (ctx->pc == 0x17411Cu) {
        ctx->pc = 0x174120u;
        goto label_174120;
    }
    ctx->pc = 0x174118u;
    {
        const bool branch_taken_0x174118 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x174118) {
            ctx->pc = 0x174130u;
            goto label_174130;
        }
    }
    ctx->pc = 0x174120u;
label_174120:
    // 0x174120: 0xc08a960  jal         func_22A580
label_174124:
    if (ctx->pc == 0x174124u) {
        ctx->pc = 0x174128u;
        goto label_174128;
    }
    ctx->pc = 0x174120u;
    SET_GPR_U32(ctx, 31, 0x174128u);
    ctx->pc = 0x22A580u;
    { ctx->pc = 0x22a580; return; }
    ctx->pc = 0x174128u;
label_174128:
    // 0x174128: 0x100000b7  b           . + 4 + (0xB7 << 2)
label_17412c:
    if (ctx->pc == 0x17412Cu) {
        ctx->pc = 0x174130u;
        goto label_174130;
    }
    ctx->pc = 0x174128u;
    {
        const bool branch_taken_0x174128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x174128) {
            ctx->pc = 0x174408u;
            goto label_174408;
        }
    }
    ctx->pc = 0x174130u;
label_174130:
    // 0x174130: 0x24030062  addiu       $v1, $zero, 0x62
    ctx->pc = 0x174130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
label_174134:
    // 0x174134: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
label_174138:
    if (ctx->pc == 0x174138u) {
        ctx->pc = 0x174138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174134u;
        // 0x174138: 0x24030063  addiu       $v1, $zero, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17413Cu;
        goto label_17413c;
    }
    ctx->pc = 0x174134u;
    {
        const bool branch_taken_0x174134 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x174138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174134u;
        // 0x174138: 0x24030063  addiu       $v1, $zero, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174134) {
            ctx->pc = 0x17414Cu;
            goto label_17414c;
        }
    }
    ctx->pc = 0x17413Cu;
label_17413c:
    // 0x17413c: 0xc08a8f8  jal         func_22A3E0
label_174140:
    if (ctx->pc == 0x174140u) {
        ctx->pc = 0x174144u;
        goto label_174144;
    }
    ctx->pc = 0x17413Cu;
    SET_GPR_U32(ctx, 31, 0x174144u);
    ctx->pc = 0x22A3E0u;
    { ctx->pc = 0x22a3e0; return; }
    ctx->pc = 0x174144u;
label_174144:
    // 0x174144: 0x100000b0  b           . + 4 + (0xB0 << 2)
label_174148:
    if (ctx->pc == 0x174148u) {
        ctx->pc = 0x17414Cu;
        goto label_17414c;
    }
    ctx->pc = 0x174144u;
    {
        const bool branch_taken_0x174144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x174144) {
            ctx->pc = 0x174408u;
            goto label_174408;
        }
    }
    ctx->pc = 0x17414Cu;
label_17414c:
    // 0x17414c: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
label_174150:
    if (ctx->pc == 0x174150u) {
        ctx->pc = 0x174154u;
        goto label_174154;
    }
    ctx->pc = 0x17414Cu;
    {
        const bool branch_taken_0x17414c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x17414c) {
            ctx->pc = 0x174164u;
            goto label_174164;
        }
    }
    ctx->pc = 0x174154u;
label_174154:
    // 0x174154: 0xc08a6f4  jal         func_229BD0
label_174158:
    if (ctx->pc == 0x174158u) {
        ctx->pc = 0x17415Cu;
        goto label_17415c;
    }
    ctx->pc = 0x174154u;
    SET_GPR_U32(ctx, 31, 0x17415Cu);
    ctx->pc = 0x229BD0u;
    { ctx->pc = 0x229bd0; return; }
    ctx->pc = 0x17415Cu;
label_17415c:
    // 0x17415c: 0x100000aa  b           . + 4 + (0xAA << 2)
label_174160:
    if (ctx->pc == 0x174160u) {
        ctx->pc = 0x174164u;
        goto label_174164;
    }
    ctx->pc = 0x17415Cu;
    {
        const bool branch_taken_0x17415c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17415c) {
            ctx->pc = 0x174408u;
            goto label_174408;
        }
    }
    ctx->pc = 0x174164u;
label_174164:
    // 0x174164: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x174164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_174168:
    // 0x174168: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
label_17416c:
    if (ctx->pc == 0x17416Cu) {
        ctx->pc = 0x17416Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174168u;
        // 0x17416c: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174170u;
        goto label_174170;
    }
    ctx->pc = 0x174168u;
    {
        const bool branch_taken_0x174168 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x17416Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174168u;
        // 0x17416c: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174168) {
            ctx->pc = 0x174180u;
            goto label_174180;
        }
    }
    ctx->pc = 0x174170u;
label_174170:
    // 0x174170: 0xc08a61c  jal         func_229870
label_174174:
    if (ctx->pc == 0x174174u) {
        ctx->pc = 0x174178u;
        goto label_174178;
    }
    ctx->pc = 0x174170u;
    SET_GPR_U32(ctx, 31, 0x174178u);
    ctx->pc = 0x229870u;
    { ctx->pc = 0x229870; return; }
    ctx->pc = 0x174178u;
label_174178:
    // 0x174178: 0x100000a3  b           . + 4 + (0xA3 << 2)
label_17417c:
    if (ctx->pc == 0x17417Cu) {
        ctx->pc = 0x174180u;
        goto label_174180;
    }
    ctx->pc = 0x174178u;
    {
        const bool branch_taken_0x174178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x174178) {
            ctx->pc = 0x174408u;
            goto label_174408;
        }
    }
    ctx->pc = 0x174180u;
label_174180:
    // 0x174180: 0x90234912  lbu         $v1, 0x4912($at)
    ctx->pc = 0x174180u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18706)));
label_174184:
    // 0x174184: 0x1060006a  beqz        $v1, . + 4 + (0x6A << 2)
label_174188:
    if (ctx->pc == 0x174188u) {
        ctx->pc = 0x17418Cu;
        goto label_17418c;
    }
    ctx->pc = 0x174184u;
    {
        const bool branch_taken_0x174184 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x174184) {
            ctx->pc = 0x174330u;
            goto label_174330;
        }
    }
    ctx->pc = 0x17418Cu;
label_17418c:
    // 0x17418c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x17418cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_174190:
    // 0x174190: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x174190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_174194:
    // 0x174194: 0x8c244900  lw          $a0, 0x4900($at)
    ctx->pc = 0x174194u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18688)));
label_174198:
    // 0x174198: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x174198u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_17419c:
    // 0x17419c: 0x0  nop
    ctx->pc = 0x17419cu;
    // NOP
label_1741a0:
    // 0x1741a0: 0x0  nop
    ctx->pc = 0x1741a0u;
    // NOP
label_1741a4:
    // 0x1741a4: 0x1810  mfhi        $v1
    ctx->pc = 0x1741a4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_1741a8:
    // 0x1741a8: 0x14600061  bnez        $v1, . + 4 + (0x61 << 2)
label_1741ac:
    if (ctx->pc == 0x1741ACu) {
        ctx->pc = 0x1741ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1741A8u;
        // 0x1741ac: 0x3c12002f  lui         $s2, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)47 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1741B0u;
        goto label_1741b0;
    }
    ctx->pc = 0x1741A8u;
    {
        const bool branch_taken_0x1741a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1741ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1741A8u;
        // 0x1741ac: 0x3c12002f  lui         $s2, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)47 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1741a8) {
            ctx->pc = 0x174330u;
            goto label_174330;
        }
    }
    ctx->pc = 0x1741B0u;
label_1741b0:
    // 0x1741b0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1741b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1741b4:
    // 0x1741b4: 0x26522570  addiu       $s2, $s2, 0x2570
    ctx->pc = 0x1741b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 9584));
label_1741b8:
    // 0x1741b8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1741b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1741bc:
    // 0x1741bc: 0x0  nop
    ctx->pc = 0x1741bcu;
    // NOP
label_1741c0:
    // 0x1741c0: 0x0  nop
    ctx->pc = 0x1741c0u;
    // NOP
label_1741c4:
    // 0x1741c4: 0x9243003d  lbu         $v1, 0x3D($s2)
    ctx->pc = 0x1741c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 61)));
label_1741c8:
    // 0x1741c8: 0x14600050  bnez        $v1, . + 4 + (0x50 << 2)
label_1741cc:
    if (ctx->pc == 0x1741CCu) {
        ctx->pc = 0x1741CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1741C8u;
        // 0x1741cc: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1741D0u;
        goto label_1741d0;
    }
    ctx->pc = 0x1741C8u;
    {
        const bool branch_taken_0x1741c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1741CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1741C8u;
        // 0x1741cc: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1741c8) {
            ctx->pc = 0x17430Cu;
            goto label_17430c;
        }
    }
    ctx->pc = 0x1741D0u;
label_1741d0:
    // 0x1741d0: 0x24030039  addiu       $v1, $zero, 0x39
    ctx->pc = 0x1741d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
label_1741d4:
    // 0x1741d4: 0x9024490c  lbu         $a0, 0x490C($at)
    ctx->pc = 0x1741d4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18700)));
label_1741d8:
    // 0x1741d8: 0x14830037  bne         $a0, $v1, . + 4 + (0x37 << 2)
label_1741dc:
    if (ctx->pc == 0x1741DCu) {
        ctx->pc = 0x1741DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1741D8u;
        // 0x1741dc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1741E0u;
        goto label_1741e0;
    }
    ctx->pc = 0x1741D8u;
    {
        const bool branch_taken_0x1741d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1741DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1741D8u;
        // 0x1741dc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1741d8) {
            ctx->pc = 0x1742B8u;
            goto label_1742b8;
        }
    }
    ctx->pc = 0x1741E0u;
label_1741e0:
    // 0x1741e0: 0x16030035  bne         $s0, $v1, . + 4 + (0x35 << 2)
label_1741e4:
    if (ctx->pc == 0x1741E4u) {
        ctx->pc = 0x1741E8u;
        goto label_1741e8;
    }
    ctx->pc = 0x1741E0u;
    {
        const bool branch_taken_0x1741e0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x1741e0) {
            ctx->pc = 0x1742B8u;
            goto label_1742b8;
        }
    }
    ctx->pc = 0x1741E8u;
label_1741e8:
    // 0x1741e8: 0x92430039  lbu         $v1, 0x39($s2)
    ctx->pc = 0x1741e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 57)));
label_1741ec:
    // 0x1741ec: 0x2861004a  slti        $at, $v1, 0x4A
    ctx->pc = 0x1741ecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)74) ? 1 : 0);
label_1741f0:
    // 0x1741f0: 0x10200046  beqz        $at, . + 4 + (0x46 << 2)
label_1741f4:
    if (ctx->pc == 0x1741F4u) {
        ctx->pc = 0x1741F8u;
        goto label_1741f8;
    }
    ctx->pc = 0x1741F0u;
    {
        const bool branch_taken_0x1741f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1741f0) {
            ctx->pc = 0x17430Cu;
            goto label_17430c;
        }
    }
    ctx->pc = 0x1741F8u;
label_1741f8:
    // 0x1741f8: 0x92430022  lbu         $v1, 0x22($s2)
    ctx->pc = 0x1741f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 34)));
label_1741fc:
    // 0x1741fc: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1741fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_174200:
    // 0x174200: 0x92420023  lbu         $v0, 0x23($s2)
    ctx->pc = 0x174200u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 35)));
label_174204:
    // 0x174204: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x174204u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_174208:
    // 0x174208: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x174208u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_17420c:
    // 0x17420c: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x17420cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_174210:
    // 0x174210: 0xc04494c  jal         func_112530
label_174214:
    if (ctx->pc == 0x174214u) {
        ctx->pc = 0x174214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174210u;
        // 0x174214: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174218u;
        goto label_174218;
    }
    ctx->pc = 0x174210u;
    SET_GPR_U32(ctx, 31, 0x174218u);
    ctx->pc = 0x174214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174210u;
    // 0x174214: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112530u, 0x174210u, 0x174218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174218u;
label_174218:
    // 0x174218: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
label_17421c:
    if (ctx->pc == 0x17421Cu) {
        ctx->pc = 0x174220u;
        goto label_174220;
    }
    ctx->pc = 0x174218u;
    {
        const bool branch_taken_0x174218 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x174218) {
            ctx->pc = 0x17430Cu;
            goto label_17430c;
        }
    }
    ctx->pc = 0x174220u;
label_174220:
    // 0x174220: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x174220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_174224:
    // 0x174224: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x174224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_174228:
    // 0x174228: 0x90840014  lbu         $a0, 0x14($a0)
    ctx->pc = 0x174228u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 20)));
label_17422c:
    // 0x17422c: 0x14830037  bne         $a0, $v1, . + 4 + (0x37 << 2)
label_174230:
    if (ctx->pc == 0x174230u) {
        ctx->pc = 0x174234u;
        goto label_174234;
    }
    ctx->pc = 0x17422Cu;
    {
        const bool branch_taken_0x17422c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x17422c) {
            ctx->pc = 0x17430Cu;
            goto label_17430c;
        }
    }
    ctx->pc = 0x174234u;
label_174234:
    // 0x174234: 0x92450039  lbu         $a1, 0x39($s2)
    ctx->pc = 0x174234u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 57)));
label_174238:
    // 0x174238: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x174238u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17423c:
    // 0x17423c: 0x8f8384e0  lw          $v1, -0x7B20($gp)
    ctx->pc = 0x17423cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935776)));
label_174240:
    // 0x174240: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x174240u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_174244:
    // 0x174244: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x174244u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_174248:
    // 0x174248: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x174248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_17424c:
    // 0x17424c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x17424cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_174250:
    // 0x174250: 0x643821  addu        $a3, $v1, $a0
    ctx->pc = 0x174250u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_174254:
    // 0x174254: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x174254u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_174258:
    // 0x174258: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x174258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_17425c:
    // 0x17425c: 0x0  nop
    ctx->pc = 0x17425cu;
    // NOP
label_174260:
    // 0x174260: 0xea1821  addu        $v1, $a3, $t2
    ctx->pc = 0x174260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
label_174264:
    // 0x174264: 0x8c680000  lw          $t0, 0x0($v1)
    ctx->pc = 0x174264u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_174268:
    // 0x174268: 0x1100000c  beqz        $t0, . + 4 + (0xC << 2)
label_17426c:
    if (ctx->pc == 0x17426Cu) {
        ctx->pc = 0x174270u;
        goto label_174270;
    }
    ctx->pc = 0x174268u;
    {
        const bool branch_taken_0x174268 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x174268) {
            ctx->pc = 0x17429Cu;
            goto label_17429c;
        }
    }
    ctx->pc = 0x174270u;
label_174270:
    // 0x174270: 0x91030231  lbu         $v1, 0x231($t0)
    ctx->pc = 0x174270u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 561)));
label_174274:
    // 0x174274: 0x10660003  beq         $v1, $a2, . + 4 + (0x3 << 2)
label_174278:
    if (ctx->pc == 0x174278u) {
        ctx->pc = 0x17427Cu;
        goto label_17427c;
    }
    ctx->pc = 0x174274u;
    {
        const bool branch_taken_0x174274 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x174274) {
            ctx->pc = 0x174284u;
            goto label_174284;
        }
    }
    ctx->pc = 0x17427Cu;
label_17427c:
    // 0x17427c: 0x14650007  bne         $v1, $a1, . + 4 + (0x7 << 2)
label_174280:
    if (ctx->pc == 0x174280u) {
        ctx->pc = 0x174284u;
        goto label_174284;
    }
    ctx->pc = 0x17427Cu;
    {
        const bool branch_taken_0x17427c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x17427c) {
            ctx->pc = 0x17429Cu;
            goto label_17429c;
        }
    }
    ctx->pc = 0x174284u;
label_174284:
    // 0x174284: 0x0  nop
    ctx->pc = 0x174284u;
    // NOP
label_174288:
    // 0x174288: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x174288u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_17428c:
    // 0x17428c: 0xdd040270  ld          $a0, 0x270($t0)
    ctx->pc = 0x17428cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 8), 624)));
label_174290:
    // 0x174290: 0xdc23a380  ld          $v1, -0x5C80($at)
    ctx->pc = 0x174290u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 1), 4294943616)));
label_174294:
    // 0x174294: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x174294u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_174298:
    // 0x174298: 0xfd030270  sd          $v1, 0x270($t0)
    ctx->pc = 0x174298u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 624), GPR_U64(ctx, 3));
label_17429c:
    // 0x17429c: 0x0  nop
    ctx->pc = 0x17429cu;
    // NOP
label_1742a0:
    // 0x1742a0: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1742a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_1742a4:
    // 0x1742a4: 0x29230009  slti        $v1, $t1, 0x9
    ctx->pc = 0x1742a4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)9) ? 1 : 0);
label_1742a8:
    // 0x1742a8: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
label_1742ac:
    if (ctx->pc == 0x1742ACu) {
        ctx->pc = 0x1742ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1742A8u;
        // 0x1742ac: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1742B0u;
        goto label_1742b0;
    }
    ctx->pc = 0x1742A8u;
    {
        const bool branch_taken_0x1742a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1742ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1742A8u;
        // 0x1742ac: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1742a8) {
            ctx->pc = 0x17425Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17425c;
        }
    }
    ctx->pc = 0x1742B0u;
label_1742b0:
    // 0x1742b0: 0x10000016  b           . + 4 + (0x16 << 2)
label_1742b4:
    if (ctx->pc == 0x1742B4u) {
        ctx->pc = 0x1742B8u;
        goto label_1742b8;
    }
    ctx->pc = 0x1742B0u;
    {
        const bool branch_taken_0x1742b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1742b0) {
            ctx->pc = 0x17430Cu;
            goto label_17430c;
        }
    }
    ctx->pc = 0x1742B8u;
label_1742b8:
    // 0x1742b8: 0x92440039  lbu         $a0, 0x39($s2)
    ctx->pc = 0x1742b8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 57)));
label_1742bc:
    // 0x1742bc: 0x2403004a  addiu       $v1, $zero, 0x4A
    ctx->pc = 0x1742bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
label_1742c0:
    // 0x1742c0: 0x14830012  bne         $a0, $v1, . + 4 + (0x12 << 2)
label_1742c4:
    if (ctx->pc == 0x1742C4u) {
        ctx->pc = 0x1742C8u;
        goto label_1742c8;
    }
    ctx->pc = 0x1742C0u;
    {
        const bool branch_taken_0x1742c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1742c0) {
            ctx->pc = 0x17430Cu;
            goto label_17430c;
        }
    }
    ctx->pc = 0x1742C8u;
label_1742c8:
    // 0x1742c8: 0x92430022  lbu         $v1, 0x22($s2)
    ctx->pc = 0x1742c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 34)));
label_1742cc:
    // 0x1742cc: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1742ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1742d0:
    // 0x1742d0: 0x92420023  lbu         $v0, 0x23($s2)
    ctx->pc = 0x1742d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 35)));
label_1742d4:
    // 0x1742d4: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1742d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1742d8:
    // 0x1742d8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1742d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_1742dc:
    // 0x1742dc: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x1742dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1742e0:
    // 0x1742e0: 0xc04494c  jal         func_112530
label_1742e4:
    if (ctx->pc == 0x1742E4u) {
        ctx->pc = 0x1742E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1742E0u;
        // 0x1742e4: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1742E8u;
        goto label_1742e8;
    }
    ctx->pc = 0x1742E0u;
    SET_GPR_U32(ctx, 31, 0x1742E8u);
    ctx->pc = 0x1742E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1742E0u;
    // 0x1742e4: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112530u, 0x1742E0u, 0x1742E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1742E8u;
label_1742e8:
    // 0x1742e8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1742ec:
    if (ctx->pc == 0x1742ECu) {
        ctx->pc = 0x1742F0u;
        goto label_1742f0;
    }
    ctx->pc = 0x1742E8u;
    {
        const bool branch_taken_0x1742e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1742e8) {
            ctx->pc = 0x17430Cu;
            goto label_17430c;
        }
    }
    ctx->pc = 0x1742F0u;
label_1742f0:
    // 0x1742f0: 0x86430032  lh          $v1, 0x32($s2)
    ctx->pc = 0x1742f0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 50)));
label_1742f4:
    // 0x1742f4: 0x2463fff6  addiu       $v1, $v1, -0xA
    ctx->pc = 0x1742f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967286));
label_1742f8:
    // 0x1742f8: 0xa6430032  sh          $v1, 0x32($s2)
    ctx->pc = 0x1742f8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 50), (uint16_t)GPR_U32(ctx, 3));
label_1742fc:
    // 0x1742fc: 0x86430032  lh          $v1, 0x32($s2)
    ctx->pc = 0x1742fcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 50)));
label_174300:
    // 0x174300: 0x1c600002  bgtz        $v1, . + 4 + (0x2 << 2)
label_174304:
    if (ctx->pc == 0x174304u) {
        ctx->pc = 0x174304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174300u;
        // 0x174304: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174308u;
        goto label_174308;
    }
    ctx->pc = 0x174300u;
    {
        const bool branch_taken_0x174300 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x174304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174300u;
        // 0x174304: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174300) {
            ctx->pc = 0x17430Cu;
            goto label_17430c;
        }
    }
    ctx->pc = 0x174308u;
label_174308:
    // 0x174308: 0xa6430032  sh          $v1, 0x32($s2)
    ctx->pc = 0x174308u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 50), (uint16_t)GPR_U32(ctx, 3));
label_17430c:
    // 0x17430c: 0x0  nop
    ctx->pc = 0x17430cu;
    // NOP
label_174310:
    // 0x174310: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x174310u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_174314:
    // 0x174314: 0x2a2300ff  slti        $v1, $s1, 0xFF
    ctx->pc = 0x174314u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)255) ? 1 : 0);
label_174318:
    // 0x174318: 0x1460ffa8  bnez        $v1, . + 4 + (-0x58 << 2)
label_17431c:
    if (ctx->pc == 0x17431Cu) {
        ctx->pc = 0x17431Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174318u;
        // 0x17431c: 0x26520048  addiu       $s2, $s2, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174320u;
        goto label_174320;
    }
    ctx->pc = 0x174318u;
    {
        const bool branch_taken_0x174318 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17431Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174318u;
        // 0x17431c: 0x26520048  addiu       $s2, $s2, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174318) {
            ctx->pc = 0x1741BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1741bc;
        }
    }
    ctx->pc = 0x174320u;
label_174320:
    // 0x174320: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x174320u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_174324:
    // 0x174324: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x174324u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_174328:
    // 0x174328: 0x1460ffa4  bnez        $v1, . + 4 + (-0x5C << 2)
label_17432c:
    if (ctx->pc == 0x17432Cu) {
        ctx->pc = 0x17432Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174328u;
        // 0x17432c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174330u;
        goto label_174330;
    }
    ctx->pc = 0x174328u;
    {
        const bool branch_taken_0x174328 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17432Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174328u;
        // 0x17432c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174328) {
            ctx->pc = 0x1741BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1741bc;
        }
    }
    ctx->pc = 0x174330u;
label_174330:
    // 0x174330: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x174330u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_174334:
    // 0x174334: 0x9024490d  lbu         $a0, 0x490D($at)
    ctx->pc = 0x174334u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18701)));
label_174338:
    // 0x174338: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x174338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_17433c:
    // 0x17433c: 0x14830012  bne         $a0, $v1, . + 4 + (0x12 << 2)
label_174340:
    if (ctx->pc == 0x174340u) {
        ctx->pc = 0x174340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17433Cu;
        // 0x174340: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174344u;
        goto label_174344;
    }
    ctx->pc = 0x17433Cu;
    {
        const bool branch_taken_0x17433c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x174340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17433Cu;
        // 0x174340: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17433c) {
            ctx->pc = 0x174388u;
            goto label_174388;
        }
    }
    ctx->pc = 0x174344u;
label_174344:
    // 0x174344: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x174344u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_174348:
    // 0x174348: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x174348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_17434c:
    // 0x17434c: 0x9024490c  lbu         $a0, 0x490C($at)
    ctx->pc = 0x17434cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18700)));
label_174350:
    // 0x174350: 0x1483002d  bne         $a0, $v1, . + 4 + (0x2D << 2)
label_174354:
    if (ctx->pc == 0x174354u) {
        ctx->pc = 0x174354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174350u;
        // 0x174354: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174358u;
        goto label_174358;
    }
    ctx->pc = 0x174350u;
    {
        const bool branch_taken_0x174350 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x174354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174350u;
        // 0x174354: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174350) {
            ctx->pc = 0x174408u;
            goto label_174408;
        }
    }
    ctx->pc = 0x174358u;
label_174358:
    // 0x174358: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x174358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_17435c:
    // 0x17435c: 0x8c244900  lw          $a0, 0x4900($at)
    ctx->pc = 0x17435cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18688)));
label_174360:
    // 0x174360: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x174360u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_174364:
    // 0x174364: 0x0  nop
    ctx->pc = 0x174364u;
    // NOP
label_174368:
    // 0x174368: 0x0  nop
    ctx->pc = 0x174368u;
    // NOP
label_17436c:
    // 0x17436c: 0x1810  mfhi        $v1
    ctx->pc = 0x17436cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_174370:
    // 0x174370: 0x14600025  bnez        $v1, . + 4 + (0x25 << 2)
label_174374:
    if (ctx->pc == 0x174374u) {
        ctx->pc = 0x174374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174370u;
        // 0x174374: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174378u;
        goto label_174378;
    }
    ctx->pc = 0x174370u;
    {
        const bool branch_taken_0x174370 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x174374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174370u;
        // 0x174374: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174370) {
            ctx->pc = 0x174408u;
            goto label_174408;
        }
    }
    ctx->pc = 0x174378u;
label_174378:
    // 0x174378: 0xc05d190  jal         func_174640
label_17437c:
    if (ctx->pc == 0x17437Cu) {
        ctx->pc = 0x174380u;
        goto label_174380;
    }
    ctx->pc = 0x174378u;
    SET_GPR_U32(ctx, 31, 0x174380u);
    ctx->pc = 0x174640u;
    { ctx->pc = 0x174640; return; }
    ctx->pc = 0x174380u;
label_174380:
    // 0x174380: 0x10000021  b           . + 4 + (0x21 << 2)
label_174384:
    if (ctx->pc == 0x174384u) {
        ctx->pc = 0x174388u;
        goto label_174388;
    }
    ctx->pc = 0x174380u;
    {
        const bool branch_taken_0x174380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x174380) {
            ctx->pc = 0x174408u;
            goto label_174408;
        }
    }
    ctx->pc = 0x174388u;
label_174388:
    // 0x174388: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x174388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_17438c:
    // 0x17438c: 0x9024490c  lbu         $a0, 0x490C($at)
    ctx->pc = 0x17438cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18700)));
label_174390:
    // 0x174390: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
label_174394:
    if (ctx->pc == 0x174394u) {
        ctx->pc = 0x174394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174390u;
        // 0x174394: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174398u;
        goto label_174398;
    }
    ctx->pc = 0x174390u;
    {
        const bool branch_taken_0x174390 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x174394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174390u;
        // 0x174394: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174390) {
            ctx->pc = 0x1743A8u;
            goto label_1743a8;
        }
    }
    ctx->pc = 0x174398u;
label_174398:
    // 0x174398: 0xc05d14c  jal         func_174530
label_17439c:
    if (ctx->pc == 0x17439Cu) {
        ctx->pc = 0x17439Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174398u;
        // 0x17439c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1743A0u;
        goto label_1743a0;
    }
    ctx->pc = 0x174398u;
    SET_GPR_U32(ctx, 31, 0x1743A0u);
    ctx->pc = 0x17439Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174398u;
    // 0x17439c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174530u;
    { ctx->pc = 0x174530; return; }
    ctx->pc = 0x1743A0u;
label_1743a0:
    // 0x1743a0: 0x10000019  b           . + 4 + (0x19 << 2)
label_1743a4:
    if (ctx->pc == 0x1743A4u) {
        ctx->pc = 0x1743A8u;
        goto label_1743a8;
    }
    ctx->pc = 0x1743A0u;
    {
        const bool branch_taken_0x1743a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1743a0) {
            ctx->pc = 0x174408u;
            goto label_174408;
        }
    }
    ctx->pc = 0x1743A8u;
label_1743a8:
    // 0x1743a8: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
label_1743ac:
    if (ctx->pc == 0x1743ACu) {
        ctx->pc = 0x1743B0u;
        goto label_1743b0;
    }
    ctx->pc = 0x1743A8u;
    {
        const bool branch_taken_0x1743a8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1743a8) {
            ctx->pc = 0x1743C0u;
            goto label_1743c0;
        }
    }
    ctx->pc = 0x1743B0u;
label_1743b0:
    // 0x1743b0: 0xc05d14c  jal         func_174530
label_1743b4:
    if (ctx->pc == 0x1743B4u) {
        ctx->pc = 0x1743B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1743B0u;
        // 0x1743b4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1743B8u;
        goto label_1743b8;
    }
    ctx->pc = 0x1743B0u;
    SET_GPR_U32(ctx, 31, 0x1743B8u);
    ctx->pc = 0x1743B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1743B0u;
    // 0x1743b4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174530u;
    { ctx->pc = 0x174530; return; }
    ctx->pc = 0x1743B8u;
label_1743b8:
    // 0x1743b8: 0x10000013  b           . + 4 + (0x13 << 2)
label_1743bc:
    if (ctx->pc == 0x1743BCu) {
        ctx->pc = 0x1743C0u;
        goto label_1743c0;
    }
    ctx->pc = 0x1743B8u;
    {
        const bool branch_taken_0x1743b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1743b8) {
            ctx->pc = 0x174408u;
            goto label_174408;
        }
    }
    ctx->pc = 0x1743C0u;
label_1743c0:
    // 0x1743c0: 0x2403003a  addiu       $v1, $zero, 0x3A
    ctx->pc = 0x1743c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
label_1743c4:
    // 0x1743c4: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
label_1743c8:
    if (ctx->pc == 0x1743C8u) {
        ctx->pc = 0x1743C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1743C4u;
        // 0x1743c8: 0x2403003b  addiu       $v1, $zero, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1743CCu;
        goto label_1743cc;
    }
    ctx->pc = 0x1743C4u;
    {
        const bool branch_taken_0x1743c4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1743C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1743C4u;
        // 0x1743c8: 0x2403003b  addiu       $v1, $zero, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1743c4) {
            ctx->pc = 0x1743DCu;
            goto label_1743dc;
        }
    }
    ctx->pc = 0x1743CCu;
label_1743cc:
    // 0x1743cc: 0xc05d14c  jal         func_174530
label_1743d0:
    if (ctx->pc == 0x1743D0u) {
        ctx->pc = 0x1743D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1743CCu;
        // 0x1743d0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1743D4u;
        goto label_1743d4;
    }
    ctx->pc = 0x1743CCu;
    SET_GPR_U32(ctx, 31, 0x1743D4u);
    ctx->pc = 0x1743D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1743CCu;
    // 0x1743d0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174530u;
    { ctx->pc = 0x174530; return; }
    ctx->pc = 0x1743D4u;
label_1743d4:
    // 0x1743d4: 0x1000000c  b           . + 4 + (0xC << 2)
label_1743d8:
    if (ctx->pc == 0x1743D8u) {
        ctx->pc = 0x1743DCu;
        goto label_1743dc;
    }
    ctx->pc = 0x1743D4u;
    {
        const bool branch_taken_0x1743d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1743d4) {
            ctx->pc = 0x174408u;
            goto label_174408;
        }
    }
    ctx->pc = 0x1743DCu;
label_1743dc:
    // 0x1743dc: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
label_1743e0:
    if (ctx->pc == 0x1743E0u) {
        ctx->pc = 0x1743E4u;
        goto label_1743e4;
    }
    ctx->pc = 0x1743DCu;
    {
        const bool branch_taken_0x1743dc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1743dc) {
            ctx->pc = 0x1743F4u;
            goto label_1743f4;
        }
    }
    ctx->pc = 0x1743E4u;
label_1743e4:
    // 0x1743e4: 0xc05d14c  jal         func_174530
label_1743e8:
    if (ctx->pc == 0x1743E8u) {
        ctx->pc = 0x1743E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1743E4u;
        // 0x1743e8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1743ECu;
        goto label_1743ec;
    }
    ctx->pc = 0x1743E4u;
    SET_GPR_U32(ctx, 31, 0x1743ECu);
    ctx->pc = 0x1743E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1743E4u;
    // 0x1743e8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174530u;
    { ctx->pc = 0x174530; return; }
    ctx->pc = 0x1743ECu;
label_1743ec:
    // 0x1743ec: 0x10000006  b           . + 4 + (0x6 << 2)
label_1743f0:
    if (ctx->pc == 0x1743F0u) {
        ctx->pc = 0x1743F4u;
        goto label_1743f4;
    }
    ctx->pc = 0x1743ECu;
    {
        const bool branch_taken_0x1743ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1743ec) {
            ctx->pc = 0x174408u;
            goto label_174408;
        }
    }
    ctx->pc = 0x1743F4u;
label_1743f4:
    // 0x1743f4: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x1743f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_1743f8:
    // 0x1743f8: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
label_1743fc:
    if (ctx->pc == 0x1743FCu) {
        ctx->pc = 0x174400u;
        goto label_174400;
    }
    ctx->pc = 0x1743F8u;
    {
        const bool branch_taken_0x1743f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1743f8) {
            ctx->pc = 0x174408u;
            goto label_174408;
        }
    }
    ctx->pc = 0x174400u;
label_174400:
    // 0x174400: 0xc05d14c  jal         func_174530
label_174404:
    if (ctx->pc == 0x174404u) {
        ctx->pc = 0x174404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174400u;
        // 0x174404: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174408u;
        goto label_174408;
    }
    ctx->pc = 0x174400u;
    SET_GPR_U32(ctx, 31, 0x174408u);
    ctx->pc = 0x174404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174400u;
    // 0x174404: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174530u;
    { ctx->pc = 0x174530; return; }
    ctx->pc = 0x174408u;
label_174408:
    // 0x174408: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x174408u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17440c:
    // 0x17440c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x17440cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_174410:
    // 0x174410: 0x0  nop
    ctx->pc = 0x174410u;
    // NOP
label_174414:
    // 0x174414: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x174414u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
label_174418:
    // 0x174418: 0x24631300  addiu       $v1, $v1, 0x1300
    ctx->pc = 0x174418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4864));
label_17441c:
    // 0x17441c: 0x702821  addu        $a1, $v1, $s0
    ctx->pc = 0x17441cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_174420:
    // 0x174420: 0x90a3367c  lbu         $v1, 0x367C($a1)
    ctx->pc = 0x174420u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 13948)));
label_174424:
    // 0x174424: 0x10600037  beqz        $v1, . + 4 + (0x37 << 2)
label_174428:
    if (ctx->pc == 0x174428u) {
        ctx->pc = 0x174428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174424u;
        // 0x174428: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17442Cu;
        goto label_17442c;
    }
    ctx->pc = 0x174424u;
    {
        const bool branch_taken_0x174424 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x174428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174424u;
        // 0x174428: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174424) {
            ctx->pc = 0x174504u;
            goto label_174504;
        }
    }
    ctx->pc = 0x17442Cu;
label_17442c:
    // 0x17442c: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x17442cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_174430:
    // 0x174430: 0x9023490c  lbu         $v1, 0x490C($at)
    ctx->pc = 0x174430u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18700)));
label_174434:
    // 0x174434: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_174438:
    if (ctx->pc == 0x174438u) {
        ctx->pc = 0x174438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174434u;
        // 0x174438: 0x24020034  addiu       $v0, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17443Cu;
        goto label_17443c;
    }
    ctx->pc = 0x174434u;
    {
        const bool branch_taken_0x174434 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x174438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174434u;
        // 0x174438: 0x24020034  addiu       $v0, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174434) {
            ctx->pc = 0x17445Cu;
            goto label_17445c;
        }
    }
    ctx->pc = 0x17443Cu;
label_17443c:
    // 0x17443c: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_174440:
    if (ctx->pc == 0x174440u) {
        ctx->pc = 0x174444u;
        goto label_174444;
    }
    ctx->pc = 0x17443Cu;
    {
        const bool branch_taken_0x17443c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x17443c) {
            ctx->pc = 0x17445Cu;
            goto label_17445c;
        }
    }
    ctx->pc = 0x174444u;
label_174444:
    // 0x174444: 0x2462ffad  addiu       $v0, $v1, -0x53
    ctx->pc = 0x174444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967213));
label_174448:
    // 0x174448: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x174448u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_17444c:
    // 0x17444c: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_174450:
    if (ctx->pc == 0x174450u) {
        ctx->pc = 0x174450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17444Cu;
        // 0x174450: 0x24020055  addiu       $v0, $zero, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174454u;
        goto label_174454;
    }
    ctx->pc = 0x17444Cu;
    {
        const bool branch_taken_0x17444c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x174450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17444Cu;
        // 0x174450: 0x24020055  addiu       $v0, $zero, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17444c) {
            ctx->pc = 0x17445Cu;
            goto label_17445c;
        }
    }
    ctx->pc = 0x174454u;
label_174454:
    // 0x174454: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
label_174458:
    if (ctx->pc == 0x174458u) {
        ctx->pc = 0x17445Cu;
        goto label_17445c;
    }
    ctx->pc = 0x174454u;
    {
        const bool branch_taken_0x174454 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x174454) {
            ctx->pc = 0x174498u;
            goto label_174498;
        }
    }
    ctx->pc = 0x17445Cu;
label_17445c:
    // 0x17445c: 0x0  nop
    ctx->pc = 0x17445cu;
    // NOP
label_174460:
    // 0x174460: 0x8ca33668  lw          $v1, 0x3668($a1)
    ctx->pc = 0x174460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 13928)));
label_174464:
    // 0x174464: 0x90640218  lbu         $a0, 0x218($v1)
    ctx->pc = 0x174464u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 536)));
label_174468:
    // 0x174468: 0x28820007  slti        $v0, $a0, 0x7
    ctx->pc = 0x174468u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)7) ? 1 : 0);
label_17446c:
    // 0x17446c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_174470:
    if (ctx->pc == 0x174470u) {
        ctx->pc = 0x174474u;
        goto label_174474;
    }
    ctx->pc = 0x17446Cu;
    {
        const bool branch_taken_0x17446c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17446c) {
            ctx->pc = 0x174498u;
            goto label_174498;
        }
    }
    ctx->pc = 0x174474u;
label_174474:
    // 0x174474: 0x90630219  lbu         $v1, 0x219($v1)
    ctx->pc = 0x174474u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 537)));
label_174478:
    // 0x174478: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x174478u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_17447c:
    // 0x17447c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_174480:
    if (ctx->pc == 0x174480u) {
        ctx->pc = 0x174480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17447Cu;
        // 0x174480: 0x2881000a  slti        $at, $a0, 0xA (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)10) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x174484u;
        goto label_174484;
    }
    ctx->pc = 0x17447Cu;
    {
        const bool branch_taken_0x17447c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x174480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17447Cu;
        // 0x174480: 0x2881000a  slti        $at, $a0, 0xA (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)10) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17447c) {
            ctx->pc = 0x174498u;
            goto label_174498;
        }
    }
    ctx->pc = 0x174484u;
label_174484:
    // 0x174484: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_174488:
    if (ctx->pc == 0x174488u) {
        ctx->pc = 0x17448Cu;
        goto label_17448c;
    }
    ctx->pc = 0x174484u;
    {
        const bool branch_taken_0x174484 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x174484) {
            ctx->pc = 0x174498u;
            goto label_174498;
        }
    }
    ctx->pc = 0x17448Cu;
label_17448c:
    // 0x17448c: 0x28610005  slti        $at, $v1, 0x5
    ctx->pc = 0x17448cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
label_174490:
    // 0x174490: 0x14200013  bnez        $at, . + 4 + (0x13 << 2)
label_174494:
    if (ctx->pc == 0x174494u) {
        ctx->pc = 0x174498u;
        goto label_174498;
    }
    ctx->pc = 0x174490u;
    {
        const bool branch_taken_0x174490 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x174490) {
            ctx->pc = 0x1744E0u;
            goto label_1744e0;
        }
    }
    ctx->pc = 0x174498u;
label_174498:
    // 0x174498: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x174498u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_17449c:
    // 0x17449c: 0x9023490d  lbu         $v1, 0x490D($at)
    ctx->pc = 0x17449cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18701)));
label_1744a0:
    // 0x1744a0: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1744a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1744a4:
    // 0x1744a4: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
label_1744a8:
    if (ctx->pc == 0x1744A8u) {
        ctx->pc = 0x1744ACu;
        goto label_1744ac;
    }
    ctx->pc = 0x1744A4u;
    {
        const bool branch_taken_0x1744a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1744a4) {
            ctx->pc = 0x1744F4u;
            goto label_1744f4;
        }
    }
    ctx->pc = 0x1744ACu;
label_1744ac:
    // 0x1744ac: 0x8ca43668  lw          $a0, 0x3668($a1)
    ctx->pc = 0x1744acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 13928)));
label_1744b0:
    // 0x1744b0: 0x90830218  lbu         $v1, 0x218($a0)
    ctx->pc = 0x1744b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 536)));
label_1744b4:
    // 0x1744b4: 0x28620007  slti        $v0, $v1, 0x7
    ctx->pc = 0x1744b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)7) ? 1 : 0);
label_1744b8:
    // 0x1744b8: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_1744bc:
    if (ctx->pc == 0x1744BCu) {
        ctx->pc = 0x1744C0u;
        goto label_1744c0;
    }
    ctx->pc = 0x1744B8u;
    {
        const bool branch_taken_0x1744b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1744b8) {
            ctx->pc = 0x1744F4u;
            goto label_1744f4;
        }
    }
    ctx->pc = 0x1744C0u;
label_1744c0:
    // 0x1744c0: 0x90820219  lbu         $v0, 0x219($a0)
    ctx->pc = 0x1744c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 537)));
label_1744c4:
    // 0x1744c4: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
label_1744c8:
    if (ctx->pc == 0x1744C8u) {
        ctx->pc = 0x1744C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1744C4u;
        // 0x1744c8: 0x2861000c  slti        $at, $v1, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)12) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1744CCu;
        goto label_1744cc;
    }
    ctx->pc = 0x1744C4u;
    {
        const bool branch_taken_0x1744c4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1744C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1744C4u;
        // 0x1744c8: 0x2861000c  slti        $at, $v1, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)12) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1744c4) {
            ctx->pc = 0x1744F4u;
            goto label_1744f4;
        }
    }
    ctx->pc = 0x1744CCu;
label_1744cc:
    // 0x1744cc: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
label_1744d0:
    if (ctx->pc == 0x1744D0u) {
        ctx->pc = 0x1744D4u;
        goto label_1744d4;
    }
    ctx->pc = 0x1744CCu;
    {
        const bool branch_taken_0x1744cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1744cc) {
            ctx->pc = 0x1744F4u;
            goto label_1744f4;
        }
    }
    ctx->pc = 0x1744D4u;
label_1744d4:
    // 0x1744d4: 0x28410007  slti        $at, $v0, 0x7
    ctx->pc = 0x1744d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)7) ? 1 : 0);
label_1744d8:
    // 0x1744d8: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
label_1744dc:
    if (ctx->pc == 0x1744DCu) {
        ctx->pc = 0x1744E0u;
        goto label_1744e0;
    }
    ctx->pc = 0x1744D8u;
    {
        const bool branch_taken_0x1744d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1744d8) {
            ctx->pc = 0x1744F4u;
            goto label_1744f4;
        }
    }
    ctx->pc = 0x1744E0u;
label_1744e0:
    // 0x1744e0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1744e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1744e4:
    // 0x1744e4: 0xc057f18  jal         func_15FC60
label_1744e8:
    if (ctx->pc == 0x1744E8u) {
        ctx->pc = 0x1744E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1744E4u;
        // 0x1744e8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1744ECu;
        goto label_1744ec;
    }
    ctx->pc = 0x1744E4u;
    SET_GPR_U32(ctx, 31, 0x1744ECu);
    ctx->pc = 0x1744E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1744E4u;
    // 0x1744e8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15FC60u;
    { ctx->pc = 0x15fc60; return; }
    ctx->pc = 0x1744ECu;
label_1744ec:
    // 0x1744ec: 0x10000005  b           . + 4 + (0x5 << 2)
label_1744f0:
    if (ctx->pc == 0x1744F0u) {
        ctx->pc = 0x1744F4u;
        goto label_1744f4;
    }
    ctx->pc = 0x1744ECu;
    {
        const bool branch_taken_0x1744ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1744ec) {
            ctx->pc = 0x174504u;
            goto label_174504;
        }
    }
    ctx->pc = 0x1744F4u;
label_1744f4:
    // 0x1744f4: 0x0  nop
    ctx->pc = 0x1744f4u;
    // NOP
label_1744f8:
    // 0x1744f8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1744f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1744fc:
    // 0x1744fc: 0xc057f18  jal         func_15FC60
label_174500:
    if (ctx->pc == 0x174500u) {
        ctx->pc = 0x174500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1744FCu;
        // 0x174500: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174504u;
        goto label_174504;
    }
    ctx->pc = 0x1744FCu;
    SET_GPR_U32(ctx, 31, 0x174504u);
    ctx->pc = 0x174500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1744FCu;
    // 0x174500: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15FC60u;
    { ctx->pc = 0x15fc60; return; }
    ctx->pc = 0x174504u;
label_174504:
    // 0x174504: 0x0  nop
    ctx->pc = 0x174504u;
    // NOP
label_174508:
    // 0x174508: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x174508u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_17450c:
    // 0x17450c: 0x2a230002  slti        $v1, $s1, 0x2
    ctx->pc = 0x17450cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
label_174510:
    // 0x174510: 0x1460ffbf  bnez        $v1, . + 4 + (-0x41 << 2)
label_174514:
    if (ctx->pc == 0x174514u) {
        ctx->pc = 0x174514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174510u;
        // 0x174514: 0x26100090  addiu       $s0, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174518u;
        goto label_174518;
    }
    ctx->pc = 0x174510u;
    {
        const bool branch_taken_0x174510 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x174514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174510u;
        // 0x174514: 0x26100090  addiu       $s0, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174510) {
            ctx->pc = 0x174410u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_174410;
        }
    }
    ctx->pc = 0x174518u;
label_174518:
    // 0x174518: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x174518u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_17451c:
    // 0x17451c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17451cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_174520:
    // 0x174520: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x174520u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_174524:
    // 0x174524: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x174524u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_174528:
    // 0x174528: 0x3e00008  jr          $ra
label_17452c:
    if (ctx->pc == 0x17452Cu) {
        ctx->pc = 0x17452Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174528u;
        // 0x17452c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174530u;
        { ctx->pc = 0x174530; return; }
    }
    ctx->pc = 0x174528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17452Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174528u;
        // 0x17452c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x174528u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x174530u;
    ctx->pc = 0x174530u;
    return;
}

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

// Function: FUN_001d49b0
// Address: 0x1d49b0 - 0x254d4c
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_001d49b0_part196(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x233d20u: goto label_233d20;
        case 0x233d24u: goto label_233d24;
        case 0x233d28u: goto label_233d28;
        case 0x233d2cu: goto label_233d2c;
        case 0x233d30u: goto label_233d30;
        case 0x233d34u: goto label_233d34;
        case 0x233d38u: goto label_233d38;
        case 0x233d3cu: goto label_233d3c;
        case 0x233d40u: goto label_233d40;
        case 0x233d44u: goto label_233d44;
        case 0x233d48u: goto label_233d48;
        case 0x233d4cu: goto label_233d4c;
        case 0x233d50u: goto label_233d50;
        case 0x233d54u: goto label_233d54;
        case 0x233d58u: goto label_233d58;
        case 0x233d5cu: goto label_233d5c;
        case 0x233d60u: goto label_233d60;
        case 0x233d64u: goto label_233d64;
        case 0x233d68u: goto label_233d68;
        case 0x233d6cu: goto label_233d6c;
        case 0x233d70u: goto label_233d70;
        case 0x233d74u: goto label_233d74;
        case 0x233d78u: goto label_233d78;
        case 0x233d7cu: goto label_233d7c;
        case 0x233d80u: goto label_233d80;
        case 0x233d84u: goto label_233d84;
        case 0x233d88u: goto label_233d88;
        case 0x233d8cu: goto label_233d8c;
        case 0x233d90u: goto label_233d90;
        case 0x233d94u: goto label_233d94;
        case 0x233d98u: goto label_233d98;
        case 0x233d9cu: goto label_233d9c;
        case 0x233da0u: goto label_233da0;
        case 0x233da4u: goto label_233da4;
        case 0x233da8u: goto label_233da8;
        case 0x233dacu: goto label_233dac;
        case 0x233db0u: goto label_233db0;
        case 0x233db4u: goto label_233db4;
        case 0x233db8u: goto label_233db8;
        case 0x233dbcu: goto label_233dbc;
        case 0x233dc0u: goto label_233dc0;
        case 0x233dc4u: goto label_233dc4;
        case 0x233dc8u: goto label_233dc8;
        case 0x233dccu: goto label_233dcc;
        case 0x233dd0u: goto label_233dd0;
        case 0x233dd4u: goto label_233dd4;
        case 0x233dd8u: goto label_233dd8;
        case 0x233ddcu: goto label_233ddc;
        case 0x233de0u: goto label_233de0;
        case 0x233de4u: goto label_233de4;
        case 0x233de8u: goto label_233de8;
        case 0x233decu: goto label_233dec;
        case 0x233df0u: goto label_233df0;
        case 0x233df4u: goto label_233df4;
        case 0x233df8u: goto label_233df8;
        case 0x233dfcu: goto label_233dfc;
        case 0x233e00u: goto label_233e00;
        case 0x233e04u: goto label_233e04;
        case 0x233e08u: goto label_233e08;
        case 0x233e0cu: goto label_233e0c;
        case 0x233e10u: goto label_233e10;
        case 0x233e14u: goto label_233e14;
        case 0x233e18u: goto label_233e18;
        case 0x233e1cu: goto label_233e1c;
        case 0x233e20u: goto label_233e20;
        case 0x233e24u: goto label_233e24;
        case 0x233e28u: goto label_233e28;
        case 0x233e2cu: goto label_233e2c;
        case 0x233e30u: goto label_233e30;
        case 0x233e34u: goto label_233e34;
        case 0x233e38u: goto label_233e38;
        case 0x233e3cu: goto label_233e3c;
        case 0x233e40u: goto label_233e40;
        case 0x233e44u: goto label_233e44;
        case 0x233e48u: goto label_233e48;
        case 0x233e4cu: goto label_233e4c;
        case 0x233e50u: goto label_233e50;
        case 0x233e54u: goto label_233e54;
        case 0x233e58u: goto label_233e58;
        case 0x233e5cu: goto label_233e5c;
        case 0x233e60u: goto label_233e60;
        case 0x233e64u: goto label_233e64;
        case 0x233e68u: goto label_233e68;
        case 0x233e6cu: goto label_233e6c;
        case 0x233e70u: goto label_233e70;
        case 0x233e74u: goto label_233e74;
        case 0x233e78u: goto label_233e78;
        case 0x233e7cu: goto label_233e7c;
        case 0x233e80u: goto label_233e80;
        case 0x233e84u: goto label_233e84;
        case 0x233e88u: goto label_233e88;
        case 0x233e8cu: goto label_233e8c;
        case 0x233e90u: goto label_233e90;
        case 0x233e94u: goto label_233e94;
        case 0x233e98u: goto label_233e98;
        case 0x233e9cu: goto label_233e9c;
        case 0x233ea0u: goto label_233ea0;
        case 0x233ea4u: goto label_233ea4;
        case 0x233ea8u: goto label_233ea8;
        case 0x233eacu: goto label_233eac;
        case 0x233eb0u: goto label_233eb0;
        case 0x233eb4u: goto label_233eb4;
        case 0x233eb8u: goto label_233eb8;
        case 0x233ebcu: goto label_233ebc;
        case 0x233ec0u: goto label_233ec0;
        case 0x233ec4u: goto label_233ec4;
        case 0x233ec8u: goto label_233ec8;
        case 0x233eccu: goto label_233ecc;
        case 0x233ed0u: goto label_233ed0;
        case 0x233ed4u: goto label_233ed4;
        case 0x233ed8u: goto label_233ed8;
        case 0x233edcu: goto label_233edc;
        case 0x233ee0u: goto label_233ee0;
        case 0x233ee4u: goto label_233ee4;
        case 0x233ee8u: goto label_233ee8;
        case 0x233eecu: goto label_233eec;
        case 0x233ef0u: goto label_233ef0;
        case 0x233ef4u: goto label_233ef4;
        case 0x233ef8u: goto label_233ef8;
        case 0x233efcu: goto label_233efc;
        case 0x233f00u: goto label_233f00;
        case 0x233f04u: goto label_233f04;
        case 0x233f08u: goto label_233f08;
        case 0x233f0cu: goto label_233f0c;
        case 0x233f10u: goto label_233f10;
        case 0x233f14u: goto label_233f14;
        case 0x233f18u: goto label_233f18;
        case 0x233f1cu: goto label_233f1c;
        case 0x233f20u: goto label_233f20;
        case 0x233f24u: goto label_233f24;
        case 0x233f28u: goto label_233f28;
        case 0x233f2cu: goto label_233f2c;
        case 0x233f30u: goto label_233f30;
        case 0x233f34u: goto label_233f34;
        case 0x233f38u: goto label_233f38;
        case 0x233f3cu: goto label_233f3c;
        case 0x233f40u: goto label_233f40;
        case 0x233f44u: goto label_233f44;
        case 0x233f48u: goto label_233f48;
        case 0x233f4cu: goto label_233f4c;
        case 0x233f50u: goto label_233f50;
        case 0x233f54u: goto label_233f54;
        case 0x233f58u: goto label_233f58;
        case 0x233f5cu: goto label_233f5c;
        case 0x233f60u: goto label_233f60;
        case 0x233f64u: goto label_233f64;
        case 0x233f68u: goto label_233f68;
        case 0x233f6cu: goto label_233f6c;
        case 0x233f70u: goto label_233f70;
        case 0x233f74u: goto label_233f74;
        case 0x233f78u: goto label_233f78;
        case 0x233f7cu: goto label_233f7c;
        case 0x233f80u: goto label_233f80;
        case 0x233f84u: goto label_233f84;
        case 0x233f88u: goto label_233f88;
        case 0x233f8cu: goto label_233f8c;
        case 0x233f90u: goto label_233f90;
        case 0x233f94u: goto label_233f94;
        case 0x233f98u: goto label_233f98;
        case 0x233f9cu: goto label_233f9c;
        case 0x233fa0u: goto label_233fa0;
        case 0x233fa4u: goto label_233fa4;
        case 0x233fa8u: goto label_233fa8;
        case 0x233facu: goto label_233fac;
        case 0x233fb0u: goto label_233fb0;
        case 0x233fb4u: goto label_233fb4;
        case 0x233fb8u: goto label_233fb8;
        case 0x233fbcu: goto label_233fbc;
        case 0x233fc0u: goto label_233fc0;
        case 0x233fc4u: goto label_233fc4;
        case 0x233fc8u: goto label_233fc8;
        case 0x233fccu: goto label_233fcc;
        case 0x233fd0u: goto label_233fd0;
        case 0x233fd4u: goto label_233fd4;
        case 0x233fd8u: goto label_233fd8;
        case 0x233fdcu: goto label_233fdc;
        case 0x233fe0u: goto label_233fe0;
        case 0x233fe4u: goto label_233fe4;
        case 0x233fe8u: goto label_233fe8;
        case 0x233fecu: goto label_233fec;
        case 0x233ff0u: goto label_233ff0;
        case 0x233ff4u: goto label_233ff4;
        case 0x233ff8u: goto label_233ff8;
        case 0x233ffcu: goto label_233ffc;
        case 0x234000u: goto label_234000;
        case 0x234004u: goto label_234004;
        case 0x234008u: goto label_234008;
        case 0x23400cu: goto label_23400c;
        case 0x234010u: goto label_234010;
        case 0x234014u: goto label_234014;
        case 0x234018u: goto label_234018;
        case 0x23401cu: goto label_23401c;
        case 0x234020u: goto label_234020;
        case 0x234024u: goto label_234024;
        case 0x234028u: goto label_234028;
        case 0x23402cu: goto label_23402c;
        case 0x234030u: goto label_234030;
        case 0x234034u: goto label_234034;
        case 0x234038u: goto label_234038;
        case 0x23403cu: goto label_23403c;
        case 0x234040u: goto label_234040;
        case 0x234044u: goto label_234044;
        case 0x234048u: goto label_234048;
        case 0x23404cu: goto label_23404c;
        case 0x234050u: goto label_234050;
        case 0x234054u: goto label_234054;
        case 0x234058u: goto label_234058;
        case 0x23405cu: goto label_23405c;
        case 0x234060u: goto label_234060;
        case 0x234064u: goto label_234064;
        case 0x234068u: goto label_234068;
        case 0x23406cu: goto label_23406c;
        case 0x234070u: goto label_234070;
        case 0x234074u: goto label_234074;
        case 0x234078u: goto label_234078;
        case 0x23407cu: goto label_23407c;
        case 0x234080u: goto label_234080;
        case 0x234084u: goto label_234084;
        case 0x234088u: goto label_234088;
        case 0x23408cu: goto label_23408c;
        case 0x234090u: goto label_234090;
        case 0x234094u: goto label_234094;
        case 0x234098u: goto label_234098;
        case 0x23409cu: goto label_23409c;
        case 0x2340a0u: goto label_2340a0;
        case 0x2340a4u: goto label_2340a4;
        case 0x2340a8u: goto label_2340a8;
        case 0x2340acu: goto label_2340ac;
        case 0x2340b0u: goto label_2340b0;
        case 0x2340b4u: goto label_2340b4;
        case 0x2340b8u: goto label_2340b8;
        case 0x2340bcu: goto label_2340bc;
        case 0x2340c0u: goto label_2340c0;
        case 0x2340c4u: goto label_2340c4;
        case 0x2340c8u: goto label_2340c8;
        case 0x2340ccu: goto label_2340cc;
        case 0x2340d0u: goto label_2340d0;
        case 0x2340d4u: goto label_2340d4;
        case 0x2340d8u: goto label_2340d8;
        case 0x2340dcu: goto label_2340dc;
        case 0x2340e0u: goto label_2340e0;
        case 0x2340e4u: goto label_2340e4;
        case 0x2340e8u: goto label_2340e8;
        case 0x2340ecu: goto label_2340ec;
        case 0x2340f0u: goto label_2340f0;
        case 0x2340f4u: goto label_2340f4;
        case 0x2340f8u: goto label_2340f8;
        case 0x2340fcu: goto label_2340fc;
        case 0x234100u: goto label_234100;
        case 0x234104u: goto label_234104;
        case 0x234108u: goto label_234108;
        case 0x23410cu: goto label_23410c;
        case 0x234110u: goto label_234110;
        case 0x234114u: goto label_234114;
        case 0x234118u: goto label_234118;
        case 0x23411cu: goto label_23411c;
        case 0x234120u: goto label_234120;
        case 0x234124u: goto label_234124;
        case 0x234128u: goto label_234128;
        case 0x23412cu: goto label_23412c;
        case 0x234130u: goto label_234130;
        case 0x234134u: goto label_234134;
        case 0x234138u: goto label_234138;
        case 0x23413cu: goto label_23413c;
        case 0x234140u: goto label_234140;
        case 0x234144u: goto label_234144;
        case 0x234148u: goto label_234148;
        case 0x23414cu: goto label_23414c;
        case 0x234150u: goto label_234150;
        case 0x234154u: goto label_234154;
        case 0x234158u: goto label_234158;
        case 0x23415cu: goto label_23415c;
        case 0x234160u: goto label_234160;
        case 0x234164u: goto label_234164;
        case 0x234168u: goto label_234168;
        case 0x23416cu: goto label_23416c;
        case 0x234170u: goto label_234170;
        case 0x234174u: goto label_234174;
        case 0x234178u: goto label_234178;
        case 0x23417cu: goto label_23417c;
        case 0x234180u: goto label_234180;
        case 0x234184u: goto label_234184;
        case 0x234188u: goto label_234188;
        case 0x23418cu: goto label_23418c;
        case 0x234190u: goto label_234190;
        case 0x234194u: goto label_234194;
        case 0x234198u: goto label_234198;
        case 0x23419cu: goto label_23419c;
        case 0x2341a0u: goto label_2341a0;
        case 0x2341a4u: goto label_2341a4;
        case 0x2341a8u: goto label_2341a8;
        case 0x2341acu: goto label_2341ac;
        case 0x2341b0u: goto label_2341b0;
        case 0x2341b4u: goto label_2341b4;
        case 0x2341b8u: goto label_2341b8;
        case 0x2341bcu: goto label_2341bc;
        case 0x2341c0u: goto label_2341c0;
        case 0x2341c4u: goto label_2341c4;
        case 0x2341c8u: goto label_2341c8;
        case 0x2341ccu: goto label_2341cc;
        case 0x2341d0u: goto label_2341d0;
        case 0x2341d4u: goto label_2341d4;
        case 0x2341d8u: goto label_2341d8;
        case 0x2341dcu: goto label_2341dc;
        case 0x2341e0u: goto label_2341e0;
        case 0x2341e4u: goto label_2341e4;
        case 0x2341e8u: goto label_2341e8;
        case 0x2341ecu: goto label_2341ec;
        case 0x2341f0u: goto label_2341f0;
        case 0x2341f4u: goto label_2341f4;
        case 0x2341f8u: goto label_2341f8;
        case 0x2341fcu: goto label_2341fc;
        case 0x234200u: goto label_234200;
        case 0x234204u: goto label_234204;
        case 0x234208u: goto label_234208;
        case 0x23420cu: goto label_23420c;
        case 0x234210u: goto label_234210;
        case 0x234214u: goto label_234214;
        case 0x234218u: goto label_234218;
        case 0x23421cu: goto label_23421c;
        case 0x234220u: goto label_234220;
        case 0x234224u: goto label_234224;
        case 0x234228u: goto label_234228;
        case 0x23422cu: goto label_23422c;
        case 0x234230u: goto label_234230;
        case 0x234234u: goto label_234234;
        case 0x234238u: goto label_234238;
        case 0x23423cu: goto label_23423c;
        case 0x234240u: goto label_234240;
        case 0x234244u: goto label_234244;
        case 0x234248u: goto label_234248;
        case 0x23424cu: goto label_23424c;
        case 0x234250u: goto label_234250;
        case 0x234254u: goto label_234254;
        case 0x234258u: goto label_234258;
        case 0x23425cu: goto label_23425c;
        case 0x234260u: goto label_234260;
        case 0x234264u: goto label_234264;
        case 0x234268u: goto label_234268;
        case 0x23426cu: goto label_23426c;
        case 0x234270u: goto label_234270;
        case 0x234274u: goto label_234274;
        case 0x234278u: goto label_234278;
        case 0x23427cu: goto label_23427c;
        case 0x234280u: goto label_234280;
        case 0x234284u: goto label_234284;
        case 0x234288u: goto label_234288;
        case 0x23428cu: goto label_23428c;
        case 0x234290u: goto label_234290;
        case 0x234294u: goto label_234294;
        case 0x234298u: goto label_234298;
        case 0x23429cu: goto label_23429c;
        case 0x2342a0u: goto label_2342a0;
        case 0x2342a4u: goto label_2342a4;
        case 0x2342a8u: goto label_2342a8;
        case 0x2342acu: goto label_2342ac;
        case 0x2342b0u: goto label_2342b0;
        case 0x2342b4u: goto label_2342b4;
        case 0x2342b8u: goto label_2342b8;
        case 0x2342bcu: goto label_2342bc;
        case 0x2342c0u: goto label_2342c0;
        case 0x2342c4u: goto label_2342c4;
        case 0x2342c8u: goto label_2342c8;
        case 0x2342ccu: goto label_2342cc;
        case 0x2342d0u: goto label_2342d0;
        case 0x2342d4u: goto label_2342d4;
        case 0x2342d8u: goto label_2342d8;
        case 0x2342dcu: goto label_2342dc;
        case 0x2342e0u: goto label_2342e0;
        case 0x2342e4u: goto label_2342e4;
        case 0x2342e8u: goto label_2342e8;
        case 0x2342ecu: goto label_2342ec;
        case 0x2342f0u: goto label_2342f0;
        case 0x2342f4u: goto label_2342f4;
        case 0x2342f8u: goto label_2342f8;
        case 0x2342fcu: goto label_2342fc;
        case 0x234300u: goto label_234300;
        case 0x234304u: goto label_234304;
        case 0x234308u: goto label_234308;
        case 0x23430cu: goto label_23430c;
        case 0x234310u: goto label_234310;
        case 0x234314u: goto label_234314;
        case 0x234318u: goto label_234318;
        case 0x23431cu: goto label_23431c;
        case 0x234320u: goto label_234320;
        case 0x234324u: goto label_234324;
        case 0x234328u: goto label_234328;
        case 0x23432cu: goto label_23432c;
        case 0x234330u: goto label_234330;
        case 0x234334u: goto label_234334;
        case 0x234338u: goto label_234338;
        case 0x23433cu: goto label_23433c;
        case 0x234340u: goto label_234340;
        case 0x234344u: goto label_234344;
        case 0x234348u: goto label_234348;
        case 0x23434cu: goto label_23434c;
        case 0x234350u: goto label_234350;
        case 0x234354u: goto label_234354;
        case 0x234358u: goto label_234358;
        case 0x23435cu: goto label_23435c;
        case 0x234360u: goto label_234360;
        case 0x234364u: goto label_234364;
        case 0x234368u: goto label_234368;
        case 0x23436cu: goto label_23436c;
        case 0x234370u: goto label_234370;
        case 0x234374u: goto label_234374;
        case 0x234378u: goto label_234378;
        case 0x23437cu: goto label_23437c;
        case 0x234380u: goto label_234380;
        case 0x234384u: goto label_234384;
        case 0x234388u: goto label_234388;
        case 0x23438cu: goto label_23438c;
        case 0x234390u: goto label_234390;
        case 0x234394u: goto label_234394;
        case 0x234398u: goto label_234398;
        case 0x23439cu: goto label_23439c;
        case 0x2343a0u: goto label_2343a0;
        case 0x2343a4u: goto label_2343a4;
        case 0x2343a8u: goto label_2343a8;
        case 0x2343acu: goto label_2343ac;
        case 0x2343b0u: goto label_2343b0;
        case 0x2343b4u: goto label_2343b4;
        case 0x2343b8u: goto label_2343b8;
        case 0x2343bcu: goto label_2343bc;
        case 0x2343c0u: goto label_2343c0;
        case 0x2343c4u: goto label_2343c4;
        case 0x2343c8u: goto label_2343c8;
        case 0x2343ccu: goto label_2343cc;
        case 0x2343d0u: goto label_2343d0;
        case 0x2343d4u: goto label_2343d4;
        case 0x2343d8u: goto label_2343d8;
        case 0x2343dcu: goto label_2343dc;
        case 0x2343e0u: goto label_2343e0;
        case 0x2343e4u: goto label_2343e4;
        case 0x2343e8u: goto label_2343e8;
        case 0x2343ecu: goto label_2343ec;
        case 0x2343f0u: goto label_2343f0;
        case 0x2343f4u: goto label_2343f4;
        case 0x2343f8u: goto label_2343f8;
        case 0x2343fcu: goto label_2343fc;
        case 0x234400u: goto label_234400;
        case 0x234404u: goto label_234404;
        case 0x234408u: goto label_234408;
        case 0x23440cu: goto label_23440c;
        case 0x234410u: goto label_234410;
        case 0x234414u: goto label_234414;
        case 0x234418u: goto label_234418;
        case 0x23441cu: goto label_23441c;
        case 0x234420u: goto label_234420;
        case 0x234424u: goto label_234424;
        case 0x234428u: goto label_234428;
        case 0x23442cu: goto label_23442c;
        case 0x234430u: goto label_234430;
        case 0x234434u: goto label_234434;
        case 0x234438u: goto label_234438;
        case 0x23443cu: goto label_23443c;
        case 0x234440u: goto label_234440;
        case 0x234444u: goto label_234444;
        case 0x234448u: goto label_234448;
        case 0x23444cu: goto label_23444c;
        case 0x234450u: goto label_234450;
        case 0x234454u: goto label_234454;
        case 0x234458u: goto label_234458;
        case 0x23445cu: goto label_23445c;
        case 0x234460u: goto label_234460;
        case 0x234464u: goto label_234464;
        case 0x234468u: goto label_234468;
        case 0x23446cu: goto label_23446c;
        case 0x234470u: goto label_234470;
        case 0x234474u: goto label_234474;
        case 0x234478u: goto label_234478;
        case 0x23447cu: goto label_23447c;
        case 0x234480u: goto label_234480;
        case 0x234484u: goto label_234484;
        case 0x234488u: goto label_234488;
        case 0x23448cu: goto label_23448c;
        case 0x234490u: goto label_234490;
        case 0x234494u: goto label_234494;
        case 0x234498u: goto label_234498;
        case 0x23449cu: goto label_23449c;
        case 0x2344a0u: goto label_2344a0;
        case 0x2344a4u: goto label_2344a4;
        case 0x2344a8u: goto label_2344a8;
        case 0x2344acu: goto label_2344ac;
        case 0x2344b0u: goto label_2344b0;
        case 0x2344b4u: goto label_2344b4;
        case 0x2344b8u: goto label_2344b8;
        case 0x2344bcu: goto label_2344bc;
        case 0x2344c0u: goto label_2344c0;
        case 0x2344c4u: goto label_2344c4;
        case 0x2344c8u: goto label_2344c8;
        case 0x2344ccu: goto label_2344cc;
        case 0x2344d0u: goto label_2344d0;
        case 0x2344d4u: goto label_2344d4;
        case 0x2344d8u: goto label_2344d8;
        case 0x2344dcu: goto label_2344dc;
        case 0x2344e0u: goto label_2344e0;
        case 0x2344e4u: goto label_2344e4;
        case 0x2344e8u: goto label_2344e8;
        case 0x2344ecu: goto label_2344ec;
        default: return;
    }

label_233d20:
    // 0x233d20: 0xc08e93e  jal         func_23A4F8
label_233d24:
    if (ctx->pc == 0x233D24u) {
        ctx->pc = 0x233D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233D20u;
        // 0x233d24: 0x2f02021  addu        $a0, $s7, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233D28u;
        goto label_233d28;
    }
    ctx->pc = 0x233D20u;
    SET_GPR_U32(ctx, 31, 0x233D28u);
    ctx->pc = 0x233D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233D20u;
    // 0x233d24: 0x2f02021  addu        $a0, $s7, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    { ctx->pc = 0x23a4f8; return; }
    ctx->pc = 0x233D28u;
label_233d28:
    // 0x233d28: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x233d28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_233d2c:
    // 0x233d2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x233d2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_233d30:
    // 0x233d30: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x233d30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_233d34:
    // 0x233d34: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x233d34u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_233d38:
    // 0x233d38: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x233d38u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_233d3c:
    // 0x233d3c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x233d3cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_233d40:
    // 0x233d40: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x233d40u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_233d44:
    // 0x233d44: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x233d44u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_233d48:
    // 0x233d48: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x233d48u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_233d4c:
    // 0x233d4c: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x233d4cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_233d50:
    // 0x233d50: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x233d50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_233d54:
    // 0x233d54: 0x3e00008  jr          $ra
label_233d58:
    if (ctx->pc == 0x233D58u) {
        ctx->pc = 0x233D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233D54u;
        // 0x233d58: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233D5Cu;
        goto label_233d5c;
    }
    ctx->pc = 0x233D54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x233D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233D54u;
        // 0x233d58: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x233D54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x233D5Cu;
label_233d5c:
    // 0x233d5c: 0x0  nop
    ctx->pc = 0x233d5cu;
    // NOP
label_233d60:
    // 0x233d60: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x233d60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
label_233d64:
    // 0x233d64: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x233d64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_233d68:
    // 0x233d68: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x233d68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
label_233d6c:
    // 0x233d6c: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x233d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
label_233d70:
    // 0x233d70: 0x18e00008  blez        $a3, . + 4 + (0x8 << 2)
label_233d74:
    if (ctx->pc == 0x233D74u) {
        ctx->pc = 0x233D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233D70u;
        // 0x233d74: 0xac870010  sw          $a3, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233D78u;
        goto label_233d78;
    }
    ctx->pc = 0x233D70u;
    {
        const bool branch_taken_0x233d70 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x233D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233D70u;
        // 0x233d74: 0xac870010  sw          $a3, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233d70) {
            ctx->pc = 0x233D94u;
            goto label_233d94;
        }
    }
    ctx->pc = 0x233D78u;
label_233d78:
    // 0x233d78: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x233d78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_233d7c:
    // 0x233d7c: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x233d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
label_233d80:
    // 0x233d80: 0x0  nop
    ctx->pc = 0x233d80u;
    // NOP
label_233d84:
    // 0x233d84: 0x0  nop
    ctx->pc = 0x233d84u;
    // NOP
label_233d88:
    // 0x233d88: 0x0  nop
    ctx->pc = 0x233d88u;
    // NOP
label_233d8c:
    // 0x233d8c: 0x14e0fffa  bnez        $a3, . + 4 + (-0x6 << 2)
label_233d90:
    if (ctx->pc == 0x233D90u) {
        ctx->pc = 0x233D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233D8Cu;
        // 0x233d90: 0x24c60048  addiu       $a2, $a2, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233D94u;
        goto label_233d94;
    }
    ctx->pc = 0x233D8Cu;
    {
        const bool branch_taken_0x233d8c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x233D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233D8Cu;
        // 0x233d90: 0x24c60048  addiu       $a2, $a2, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233d8c) {
            ctx->pc = 0x233D78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_233d78;
        }
    }
    ctx->pc = 0x233D94u;
label_233d94:
    // 0x233d94: 0x3e00008  jr          $ra
label_233d98:
    if (ctx->pc == 0x233D98u) {
        ctx->pc = 0x233D9Cu;
        goto label_233d9c;
    }
    ctx->pc = 0x233D94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x233D94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x233D9Cu;
label_233d9c:
    // 0x233d9c: 0x0  nop
    ctx->pc = 0x233d9cu;
    // NOP
label_233da0:
    // 0x233da0: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x233da0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
label_233da4:
    // 0x233da4: 0x3e00008  jr          $ra
label_233da8:
    if (ctx->pc == 0x233DA8u) {
        ctx->pc = 0x233DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233DA4u;
        // 0x233da8: 0xac800008  sw          $zero, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233DACu;
        goto label_233dac;
    }
    ctx->pc = 0x233DA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x233DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233DA4u;
        // 0x233da8: 0xac800008  sw          $zero, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x233DA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x233DACu;
label_233dac:
    // 0x233dac: 0x0  nop
    ctx->pc = 0x233dacu;
    // NOP
label_233db0:
    // 0x233db0: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x233db0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_233db4:
    // 0x233db4: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x233db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_233db8:
    // 0x233db8: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x233db8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
label_233dbc:
    // 0x233dbc: 0x3e00008  jr          $ra
label_233dc0:
    if (ctx->pc == 0x233DC0u) {
        ctx->pc = 0x233DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233DBCu;
        // 0x233dc0: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x233DC4u;
        goto label_233dc4;
    }
    ctx->pc = 0x233DBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x233DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233DBCu;
        // 0x233dc0: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x233DBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x233DC4u;
label_233dc4:
    // 0x233dc4: 0x0  nop
    ctx->pc = 0x233dc4u;
    // NOP
label_233dc8:
    // 0x233dc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x233dc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_233dcc:
    // 0x233dcc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x233dccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_233dd0:
    // 0x233dd0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x233dd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_233dd4:
    // 0x233dd4: 0xc06b518  jal         func_1AD460
label_233dd8:
    if (ctx->pc == 0x233DD8u) {
        ctx->pc = 0x233DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233DD4u;
        // 0x233dd8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233DDCu;
        goto label_233ddc;
    }
    ctx->pc = 0x233DD4u;
    SET_GPR_U32(ctx, 31, 0x233DDCu);
    ctx->pc = 0x233DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233DD4u;
    // 0x233dd8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD460u, 0x233DD4u, 0x233DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233DDCu;
label_233ddc:
    // 0x233ddc: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x233ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_233de0:
    // 0x233de0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x233de0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_233de4:
    // 0x233de4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x233de4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_233de8:
    // 0x233de8: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x233de8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_233dec:
    // 0x233dec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x233decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_233df0:
    // 0x233df0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x233df0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_233df4:
    // 0x233df4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x233df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_233df8:
    // 0x233df8: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x233df8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_233dfc:
    // 0x233dfc: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x233dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_233e00:
    // 0x233e00: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x233e00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_233e04:
    // 0x233e04: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x233e04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_233e08:
    // 0x233e08: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x233e08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_233e0c:
    // 0x233e0c: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
label_233e10:
    if (ctx->pc == 0x233E10u) {
        ctx->pc = 0x233E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233E0Cu;
        // 0x233e10: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x233E14u;
        goto label_233e14;
    }
    ctx->pc = 0x233E0Cu;
    {
        const bool branch_taken_0x233e0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x233e0c) {
            ctx->pc = 0x233E10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x233E0Cu;
            // 0x233e10: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x233E14u;
            goto label_233e14;
        }
    }
    ctx->pc = 0x233E14u;
label_233e14:
    // 0x233e14: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x233e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_233e18:
    // 0x233e18: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x233e18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_233e1c:
    // 0x233e1c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x233e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_233e20:
    // 0x233e20: 0x44001a  div         $zero, $v0, $a0
    ctx->pc = 0x233e20u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_233e24:
    // 0x233e24: 0x1810  mfhi        $v1
    ctx->pc = 0x233e24u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_233e28:
    // 0x233e28: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x233e28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_233e2c:
    // 0x233e2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x233e2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_233e30:
    // 0x233e30: 0x806b52a  j           func_1AD4A8
label_233e34:
    if (ctx->pc == 0x233E34u) {
        ctx->pc = 0x233E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233E30u;
        // 0x233e34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233E38u;
        goto label_233e38;
    }
    ctx->pc = 0x233E30u;
    ctx->pc = 0x233E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233E30u;
    // 0x233e34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD4A8u;
    FUN_001ad4a8_0x1ad4a8(rdram, ctx, runtime); return;
    ctx->pc = 0x233E38u;
label_233e38:
    // 0x233e38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x233e38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_233e3c:
    // 0x233e3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x233e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_233e40:
    // 0x233e40: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x233e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_233e44:
    // 0x233e44: 0xc08cf6c  jal         func_233DB0
label_233e48:
    if (ctx->pc == 0x233E48u) {
        ctx->pc = 0x233E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233E44u;
        // 0x233e48: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233E4Cu;
        goto label_233e4c;
    }
    ctx->pc = 0x233E44u;
    SET_GPR_U32(ctx, 31, 0x233E4Cu);
    ctx->pc = 0x233E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233E44u;
    // 0x233e48: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233DB0u;
    goto label_233db0;
    ctx->pc = 0x233E4Cu;
label_233e4c:
    // 0x233e4c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_233e50:
    if (ctx->pc == 0x233E50u) {
        ctx->pc = 0x233E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233E4Cu;
        // 0x233e50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233E54u;
        goto label_233e54;
    }
    ctx->pc = 0x233E4Cu;
    {
        const bool branch_taken_0x233e4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x233e4c) {
            ctx->pc = 0x233E50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x233E4Cu;
            // 0x233e50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x233E64u;
            goto label_233e64;
        }
    }
    ctx->pc = 0x233E54u;
label_233e54:
    // 0x233e54: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x233e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_233e58:
    // 0x233e58: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x233e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_233e5c:
    // 0x233e5c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x233e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_233e60:
    // 0x233e60: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x233e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_233e64:
    // 0x233e64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x233e64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_233e68:
    // 0x233e68: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x233e68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_233e6c:
    // 0x233e6c: 0x3e00008  jr          $ra
label_233e70:
    if (ctx->pc == 0x233E70u) {
        ctx->pc = 0x233E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233E6Cu;
        // 0x233e70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233E74u;
        goto label_233e74;
    }
    ctx->pc = 0x233E6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x233E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233E6Cu;
        // 0x233e70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x233E6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x233E74u;
label_233e74:
    // 0x233e74: 0x0  nop
    ctx->pc = 0x233e74u;
    // NOP
label_233e78:
    // 0x233e78: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x233e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_233e7c:
    // 0x233e7c: 0x3e00008  jr          $ra
label_233e80:
    if (ctx->pc == 0x233E80u) {
        ctx->pc = 0x233E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233E7Cu;
        // 0x233e80: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x233E84u;
        goto label_233e84;
    }
    ctx->pc = 0x233E7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x233E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233E7Cu;
        // 0x233e80: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x233E7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x233E84u;
label_233e84:
    // 0x233e84: 0x0  nop
    ctx->pc = 0x233e84u;
    // NOP
label_233e88:
    // 0x233e88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x233e88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_233e8c:
    // 0x233e8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x233e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_233e90:
    // 0x233e90: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x233e90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_233e94:
    // 0x233e94: 0xc08cf9e  jal         func_233E78
label_233e98:
    if (ctx->pc == 0x233E98u) {
        ctx->pc = 0x233E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233E94u;
        // 0x233e98: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233E9Cu;
        goto label_233e9c;
    }
    ctx->pc = 0x233E94u;
    SET_GPR_U32(ctx, 31, 0x233E9Cu);
    ctx->pc = 0x233E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233E94u;
    // 0x233e98: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233E78u;
    goto label_233e78;
    ctx->pc = 0x233E9Cu;
label_233e9c:
    // 0x233e9c: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
label_233ea0:
    if (ctx->pc == 0x233EA0u) {
        ctx->pc = 0x233EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233E9Cu;
        // 0x233ea0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233EA4u;
        goto label_233ea4;
    }
    ctx->pc = 0x233E9Cu;
    {
        const bool branch_taken_0x233e9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x233e9c) {
            ctx->pc = 0x233EA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x233E9Cu;
            // 0x233ea0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x233EDCu;
            goto label_233edc;
        }
    }
    ctx->pc = 0x233EA4u;
label_233ea4:
    // 0x233ea4: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x233ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_233ea8:
    // 0x233ea8: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x233ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_233eac:
    // 0x233eac: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x233eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_233eb0:
    // 0x233eb0: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x233eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_233eb4:
    // 0x233eb4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x233eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_233eb8:
    // 0x233eb8: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_233ebc:
    if (ctx->pc == 0x233EBCu) {
        ctx->pc = 0x233EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233EB8u;
        // 0x233ebc: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x233EC0u;
        goto label_233ec0;
    }
    ctx->pc = 0x233EB8u;
    {
        const bool branch_taken_0x233eb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x233eb8) {
            ctx->pc = 0x233EBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x233EB8u;
            // 0x233ebc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x233EC0u;
            goto label_233ec0;
        }
    }
    ctx->pc = 0x233EC0u;
label_233ec0:
    // 0x233ec0: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x233ec0u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_233ec4:
    // 0x233ec4: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x233ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_233ec8:
    // 0x233ec8: 0x2010  mfhi        $a0
    ctx->pc = 0x233ec8u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_233ecc:
    // 0x233ecc: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x233eccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_233ed0:
    // 0x233ed0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x233ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_233ed4:
    // 0x233ed4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x233ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_233ed8:
    // 0x233ed8: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x233ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_233edc:
    // 0x233edc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x233edcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_233ee0:
    // 0x233ee0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x233ee0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_233ee4:
    // 0x233ee4: 0x3e00008  jr          $ra
label_233ee8:
    if (ctx->pc == 0x233EE8u) {
        ctx->pc = 0x233EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233EE4u;
        // 0x233ee8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233EECu;
        goto label_233eec;
    }
    ctx->pc = 0x233EE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x233EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233EE4u;
        // 0x233ee8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x233EE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x233EECu;
label_233eec:
    // 0x233eec: 0x0  nop
    ctx->pc = 0x233eecu;
    // NOP
label_233ef0:
    // 0x233ef0: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x233ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_233ef4:
    // 0x233ef4: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_233ef8:
    if (ctx->pc == 0x233EF8u) {
        ctx->pc = 0x233EFCu;
        goto label_233efc;
    }
    ctx->pc = 0x233EF4u;
    {
        const bool branch_taken_0x233ef4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x233ef4) {
            ctx->pc = 0x233F08u;
            goto label_233f08;
        }
    }
    ctx->pc = 0x233EFCu;
label_233efc:
    // 0x233efc: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x233efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_233f00:
    // 0x233f00: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x233f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_233f04:
    // 0x233f04: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x233f04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_233f08:
    // 0x233f08: 0x3e00008  jr          $ra
label_233f0c:
    if (ctx->pc == 0x233F0Cu) {
        ctx->pc = 0x233F10u;
        goto label_233f10;
    }
    ctx->pc = 0x233F08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x233F08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x233F10u;
label_233f10:
    // 0x233f10: 0xc0602d  daddu       $t4, $a2, $zero
    ctx->pc = 0x233f10u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_233f14:
    // 0x233f14: 0x3c060029  lui         $a2, 0x29
    ctx->pc = 0x233f14u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)41 << 16));
label_233f18:
    // 0x233f18: 0x24c704b0  addiu       $a3, $a2, 0x4B0
    ctx->pc = 0x233f18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 1200));
label_233f1c:
    // 0x233f1c: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x233f1cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_233f20:
    // 0x233f20: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x233f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_233f24:
    // 0x233f24: 0xc1902  srl         $v1, $t4, 4
    ctx->pc = 0x233f24u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 12), 4));
label_233f28:
    // 0x233f28: 0x8ce80004  lw          $t0, 0x4($a3)
    ctx->pc = 0x233f28u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_233f2c:
    // 0x233f2c: 0x52102  srl         $a0, $a1, 4
    ctx->pc = 0x233f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 4));
label_233f30:
    // 0x233f30: 0x25102  srl         $t2, $v0, 4
    ctx->pc = 0x233f30u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
label_233f34:
    // 0x233f34: 0xad240008  sw          $a0, 0x8($t1)
    ctx->pc = 0x233f34u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 4));
label_233f38:
    // 0x233f38: 0x8a1023  subu        $v0, $a0, $t2
    ctx->pc = 0x233f38u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
label_233f3c:
    // 0x233f3c: 0xad23000c  sw          $v1, 0xC($t1)
    ctx->pc = 0x233f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 3));
label_233f40:
    // 0x233f40: 0x84102  srl         $t0, $t0, 4
    ctx->pc = 0x233f40u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 8), 4));
label_233f44:
    // 0x233f44: 0xad240000  sw          $a0, 0x0($t1)
    ctx->pc = 0x233f44u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
label_233f48:
    // 0x233f48: 0xad230004  sw          $v1, 0x4($t1)
    ctx->pc = 0x233f48u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 3));
label_233f4c:
    // 0x233f4c: 0x25842  srl         $t3, $v0, 1
    ctx->pc = 0x233f4cu;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_233f50:
    // 0x233f50: 0xad20001c  sw          $zero, 0x1C($t1)
    ctx->pc = 0x233f50u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 28), GPR_U32(ctx, 0));
label_233f54:
    // 0x233f54: 0x681023  subu        $v0, $v1, $t0
    ctx->pc = 0x233f54u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_233f58:
    // 0x233f58: 0xad200018  sw          $zero, 0x18($t1)
    ctx->pc = 0x233f58u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 24), GPR_U32(ctx, 0));
label_233f5c:
    // 0x233f5c: 0x1443023  subu        $a2, $t2, $a0
    ctx->pc = 0x233f5cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
label_233f60:
    // 0x233f60: 0xad200014  sw          $zero, 0x14($t1)
    ctx->pc = 0x233f60u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 20), GPR_U32(ctx, 0));
label_233f64:
    // 0x233f64: 0x22042  srl         $a0, $v0, 1
    ctx->pc = 0x233f64u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_233f68:
    // 0x233f68: 0xad200010  sw          $zero, 0x10($t1)
    ctx->pc = 0x233f68u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 16), GPR_U32(ctx, 0));
label_233f6c:
    // 0x233f6c: 0x1031823  subu        $v1, $t0, $v1
    ctx->pc = 0x233f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_233f70:
    // 0x233f70: 0xe0682d  daddu       $t5, $a3, $zero
    ctx->pc = 0x233f70u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_233f74:
    // 0x233f74: 0x63042  srl         $a2, $a2, 1
    ctx->pc = 0x233f74u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
label_233f78:
    // 0x233f78: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x233f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_233f7c:
    // 0x233f7c: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x233f7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_233f80:
    // 0x233f80: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_233f84:
    if (ctx->pc == 0x233F84u) {
        ctx->pc = 0x233F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233F80u;
        // 0x233f84: 0x31842  srl         $v1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233F88u;
        goto label_233f88;
    }
    ctx->pc = 0x233F80u;
    {
        const bool branch_taken_0x233f80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x233F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233F80u;
        // 0x233f84: 0x31842  srl         $v1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233f80) {
            ctx->pc = 0x233F98u;
            goto label_233f98;
        }
    }
    ctx->pc = 0x233F88u;
label_233f88:
    // 0x233f88: 0xad2b0010  sw          $t3, 0x10($t1)
    ctx->pc = 0x233f88u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 16), GPR_U32(ctx, 11));
label_233f8c:
    // 0x233f8c: 0x10000003  b           . + 4 + (0x3 << 2)
label_233f90:
    if (ctx->pc == 0x233F90u) {
        ctx->pc = 0x233F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233F8Cu;
        // 0x233f90: 0xad2a0008  sw          $t2, 0x8($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233F94u;
        goto label_233f94;
    }
    ctx->pc = 0x233F8Cu;
    {
        const bool branch_taken_0x233f8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233F8Cu;
        // 0x233f90: 0xad2a0008  sw          $t2, 0x8($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233f8c) {
            ctx->pc = 0x233F9Cu;
            goto label_233f9c;
        }
    }
    ctx->pc = 0x233F94u;
label_233f94:
    // 0x233f94: 0x0  nop
    ctx->pc = 0x233f94u;
    // NOP
label_233f98:
    // 0x233f98: 0xad260018  sw          $a2, 0x18($t1)
    ctx->pc = 0x233f98u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 24), GPR_U32(ctx, 6));
label_233f9c:
    // 0x233f9c: 0x8da20004  lw          $v0, 0x4($t5)
    ctx->pc = 0x233f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4)));
label_233fa0:
    // 0x233fa0: 0x4c102b  sltu        $v0, $v0, $t4
    ctx->pc = 0x233fa0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
label_233fa4:
    // 0x233fa4: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_233fa8:
    if (ctx->pc == 0x233FA8u) {
        ctx->pc = 0x233FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233FA4u;
        // 0x233fa8: 0xad23001c  sw          $v1, 0x1C($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233FACu;
        goto label_233fac;
    }
    ctx->pc = 0x233FA4u;
    {
        const bool branch_taken_0x233fa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x233fa4) {
            ctx->pc = 0x233FA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x233FA4u;
            // 0x233fa8: 0xad23001c  sw          $v1, 0x1C($t1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 9), 28), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x233FB4u;
            goto label_233fb4;
        }
    }
    ctx->pc = 0x233FACu;
label_233fac:
    // 0x233fac: 0xad240014  sw          $a0, 0x14($t1)
    ctx->pc = 0x233facu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 20), GPR_U32(ctx, 4));
label_233fb0:
    // 0x233fb0: 0xad28000c  sw          $t0, 0xC($t1)
    ctx->pc = 0x233fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 8));
label_233fb4:
    // 0x233fb4: 0x8d230018  lw          $v1, 0x18($t1)
    ctx->pc = 0x233fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 24)));
label_233fb8:
    // 0x233fb8: 0x8d22001c  lw          $v0, 0x1C($t1)
    ctx->pc = 0x233fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 28)));
label_233fbc:
    // 0x233fbc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x233fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_233fc0:
    // 0x233fc0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x233fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_233fc4:
    // 0x233fc4: 0xad230018  sw          $v1, 0x18($t1)
    ctx->pc = 0x233fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 24), GPR_U32(ctx, 3));
label_233fc8:
    // 0x233fc8: 0x3e00008  jr          $ra
label_233fcc:
    if (ctx->pc == 0x233FCCu) {
        ctx->pc = 0x233FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233FC8u;
        // 0x233fcc: 0xad22001c  sw          $v0, 0x1C($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233FD0u;
        goto label_233fd0;
    }
    ctx->pc = 0x233FC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x233FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233FC8u;
        // 0x233fcc: 0xad22001c  sw          $v0, 0x1C($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x233FC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x233FD0u;
label_233fd0:
    // 0x233fd0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x233fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_233fd4:
    // 0x233fd4: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x233fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
label_233fd8:
    // 0x233fd8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x233fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_233fdc:
    // 0x233fdc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x233fdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_233fe0:
    // 0x233fe0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x233fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_233fe4:
    // 0x233fe4: 0x3c080029  lui         $t0, 0x29
    ctx->pc = 0x233fe4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)41 << 16));
label_233fe8:
    // 0x233fe8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x233fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_233fec:
    // 0x233fec: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x233fecu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_233ff0:
    // 0x233ff0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x233ff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_233ff4:
    // 0x233ff4: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x233ff4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_233ff8:
    // 0x233ff8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x233ff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_233ffc:
    // 0x233ffc: 0x250804b0  addiu       $t0, $t0, 0x4B0
    ctx->pc = 0x233ffcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1200));
label_234000:
    // 0x234000: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x234000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_234004:
    // 0x234004: 0x2524000f  addiu       $a0, $t1, 0xF
    ctx->pc = 0x234004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 15));
label_234008:
    // 0x234008: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x234008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_23400c:
    // 0x23400c: 0x29220000  slti        $v0, $t1, 0x0
    ctx->pc = 0x23400cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)0) ? 1 : 0);
label_234010:
    // 0x234010: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x234010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
label_234014:
    // 0x234014: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x234014u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
label_234018:
    // 0x234018: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x234018u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_23401c:
    // 0x23401c: 0xa35025  or          $t2, $a1, $v1
    ctx->pc = 0x23401cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_234020:
    // 0x234020: 0x82480b  movn        $t1, $a0, $v0
    ctx->pc = 0x234020u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 4));
label_234024:
    // 0x234024: 0x8d840010  lw          $a0, 0x10($t4)
    ctx->pc = 0x234024u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 16)));
label_234028:
    // 0x234028: 0x1073821  addu        $a3, $t0, $a3
    ctx->pc = 0x234028u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
label_23402c:
    // 0x23402c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x23402cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_234030:
    // 0x234030: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x234030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
label_234034:
    // 0x234034: 0xfd420000  sd          $v0, 0x0($t2)
    ctx->pc = 0x234034u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 2));
label_234038:
    // 0x234038: 0x254a0008  addiu       $t2, $t2, 0x8
    ctx->pc = 0x234038u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
label_23403c:
    // 0x23403c: 0x9ce30008  lwu         $v1, 0x8($a3)
    ctx->pc = 0x23403cu;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_234040:
    // 0x234040: 0x94903  sra         $t1, $t1, 4
    ctx->pc = 0x234040u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 9), 4));
label_234044:
    // 0x234044: 0x9d050010  lwu         $a1, 0x10($t0)
    ctx->pc = 0x234044u;
    SET_GPR_ZE32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 8), 16)));
label_234048:
    // 0x234048: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x234048u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23404c:
    // 0x23404c: 0xfd400000  sd          $zero, 0x0($t2)
    ctx->pc = 0x23404cu;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 0));
label_234050:
    // 0x234050: 0x254a0008  addiu       $t2, $t2, 0x8
    ctx->pc = 0x234050u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
label_234054:
    // 0x234054: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x234054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_234058:
    // 0x234058: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x234058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_23405c:
    // 0x23405c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x23405cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_234060:
    // 0x234060: 0x892018  mult        $a0, $a0, $t1
    ctx->pc = 0x234060u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_234064:
    // 0x234064: 0xfd420000  sd          $v0, 0x0($t2)
    ctx->pc = 0x234064u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 2));
label_234068:
    // 0x234068: 0x254a0008  addiu       $t2, $t2, 0x8
    ctx->pc = 0x234068u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
label_23406c:
    // 0x23406c: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x23406cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_234070:
    // 0x234070: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x234070u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_234074:
    // 0x234074: 0x52c3c  dsll32      $a1, $a1, 16
    ctx->pc = 0x234074u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
label_234078:
    // 0x234078: 0xfd420000  sd          $v0, 0x0($t2)
    ctx->pc = 0x234078u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 2));
label_23407c:
    // 0x23407c: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x23407cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_234080:
    // 0x234080: 0x8d870014  lw          $a3, 0x14($t4)
    ctx->pc = 0x234080u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 20)));
label_234084:
    // 0x234084: 0x254a0008  addiu       $t2, $t2, 0x8
    ctx->pc = 0x234084u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
label_234088:
    // 0x234088: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x234088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_23408c:
    // 0x23408c: 0xfd430000  sd          $v1, 0x0($t2)
    ctx->pc = 0x23408cu;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 3));
label_234090:
    // 0x234090: 0x254a0008  addiu       $t2, $t2, 0x8
    ctx->pc = 0x234090u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
label_234094:
    // 0x234094: 0xfd420000  sd          $v0, 0x0($t2)
    ctx->pc = 0x234094u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 2));
label_234098:
    // 0x234098: 0x254a0008  addiu       $t2, $t2, 0x8
    ctx->pc = 0x234098u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
label_23409c:
    // 0x23409c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x23409cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2340a0:
    // 0x2340a0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2340a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_2340a4:
    // 0x2340a4: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x2340a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
label_2340a8:
    // 0x2340a8: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x2340a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_2340ac:
    // 0x2340ac: 0x8d830008  lw          $v1, 0x8($t4)
    ctx->pc = 0x2340acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 8)));
label_2340b0:
    // 0x2340b0: 0x42280  sll         $a0, $a0, 10
    ctx->pc = 0x2340b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 10));
label_2340b4:
    // 0x2340b4: 0xfd420000  sd          $v0, 0x0($t2)
    ctx->pc = 0x2340b4u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 2));
label_2340b8:
    // 0x2340b8: 0x254a0008  addiu       $t2, $t2, 0x8
    ctx->pc = 0x2340b8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
label_2340bc:
    // 0x2340bc: 0x24020052  addiu       $v0, $zero, 0x52
    ctx->pc = 0x2340bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
label_2340c0:
    // 0x2340c0: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x2340c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_2340c4:
    // 0x2340c4: 0xfd420000  sd          $v0, 0x0($t2)
    ctx->pc = 0x2340c4u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 2));
label_2340c8:
    // 0x2340c8: 0x1060004d  beqz        $v1, . + 4 + (0x4D << 2)
label_2340cc:
    if (ctx->pc == 0x2340CCu) {
        ctx->pc = 0x2340CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2340C8u;
        // 0x2340cc: 0x254a0008  addiu       $t2, $t2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2340D0u;
        goto label_2340d0;
    }
    ctx->pc = 0x2340C8u;
    {
        const bool branch_taken_0x2340c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2340CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2340C8u;
        // 0x2340cc: 0x254a0008  addiu       $t2, $t2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2340c8) {
            ctx->pc = 0x234200u;
            goto label_234200;
        }
    }
    ctx->pc = 0x2340D0u;
label_2340d0:
    // 0x2340d0: 0x8d8f000c  lw          $t7, 0xC($t4)
    ctx->pc = 0x2340d0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 12)));
label_2340d4:
    // 0x2340d4: 0x60c82d  daddu       $t9, $v1, $zero
    ctx->pc = 0x2340d4u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2340d8:
    // 0x2340d8: 0x320b82d  daddu       $s7, $t9, $zero
    ctx->pc = 0x2340d8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
label_2340dc:
    // 0x2340dc: 0x12f1023  subu        $v0, $t1, $t7
    ctx->pc = 0x2340dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 15)));
label_2340e0:
    // 0x2340e0: 0x1e0b02d  daddu       $s6, $t7, $zero
    ctx->pc = 0x2340e0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
label_2340e4:
    // 0x2340e4: 0x2aa80  sll         $s5, $v0, 10
    ctx->pc = 0x2340e4u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
label_2340e8:
    // 0x2340e8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2340e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2340ec:
    // 0x2340ec: 0x10800040  beqz        $a0, . + 4 + (0x40 << 2)
label_2340f0:
    if (ctx->pc == 0x2340F0u) {
        ctx->pc = 0x2340F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2340ECu;
        // 0x2340f0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2340F4u;
        goto label_2340f4;
    }
    ctx->pc = 0x2340ECu;
    {
        const bool branch_taken_0x2340ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2340F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2340ECu;
        // 0x2340f0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2340ec) {
            ctx->pc = 0x2341F0u;
            goto label_2341f0;
        }
    }
    ctx->pc = 0x2340F4u;
label_2340f4:
    // 0x2340f4: 0x8d830018  lw          $v1, 0x18($t4)
    ctx->pc = 0x2340f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 24)));
label_2340f8:
    // 0x2340f8: 0x81100  sll         $v0, $t0, 4
    ctx->pc = 0x2340f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
label_2340fc:
    // 0x2340fc: 0x3c0b0fff  lui         $t3, 0xFFF
    ctx->pc = 0x2340fcu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)4095 << 16));
label_234100:
    // 0x234100: 0x8d85001c  lw          $a1, 0x1C($t4)
    ctx->pc = 0x234100u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 28)));
label_234104:
    // 0x234104: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x234104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_234108:
    // 0x234108: 0x26eeffff  addiu       $t6, $s7, -0x1
    ctx->pc = 0x234108u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
label_23410c:
    // 0x23410c: 0x2683c  dsll32      $t5, $v0, 0
    ctx->pc = 0x23410cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 2) << (32 + 0));
label_234110:
    // 0x234110: 0x3c141000  lui         $s4, 0x1000
    ctx->pc = 0x234110u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)4096 << 16));
label_234114:
    // 0x234114: 0x36940004  ori         $s4, $s4, 0x4
    ctx->pc = 0x234114u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)4);
label_234118:
    // 0x234118: 0x3c131000  lui         $s3, 0x1000
    ctx->pc = 0x234118u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)4096 << 16));
label_23411c:
    // 0x23411c: 0x13983c  dsll32      $s3, $s3, 0
    ctx->pc = 0x23411cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) << (32 + 0));
label_234120:
    // 0x234120: 0x36730002  ori         $s3, $s3, 0x2
    ctx->pc = 0x234120u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)2);
label_234124:
    // 0x234124: 0x2412000e  addiu       $s2, $zero, 0xE
    ctx->pc = 0x234124u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_234128:
    // 0x234128: 0x24110051  addiu       $s1, $zero, 0x51
    ctx->pc = 0x234128u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
label_23412c:
    // 0x23412c: 0x24100053  addiu       $s0, $zero, 0x53
    ctx->pc = 0x23412cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
label_234130:
    // 0x234130: 0x3c090800  lui         $t1, 0x800
    ctx->pc = 0x234130u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)2048 << 16));
label_234134:
    // 0x234134: 0x9483c  dsll32      $t1, $t1, 0
    ctx->pc = 0x234134u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 0));
label_234138:
    // 0x234138: 0x35290040  ori         $t1, $t1, 0x40
    ctx->pc = 0x234138u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)64);
label_23413c:
    // 0x23413c: 0x356bffff  ori         $t3, $t3, 0xFFFF
    ctx->pc = 0x23413cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)65535);
label_234140:
    // 0x234140: 0x3c183000  lui         $t8, 0x3000
    ctx->pc = 0x234140u;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)12288 << 16));
label_234144:
    // 0x234144: 0x37180040  ori         $t8, $t8, 0x40
    ctx->pc = 0x234144u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) | (uint64_t)(uint16_t)64);
label_234148:
    // 0x234148: 0x150e0004  bne         $t0, $t6, . + 4 + (0x4 << 2)
label_23414c:
    if (ctx->pc == 0x23414Cu) {
        ctx->pc = 0x23414Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234148u;
        // 0x23414c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234150u;
        goto label_234150;
    }
    ctx->pc = 0x234148u;
    {
        const bool branch_taken_0x234148 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 14));
        ctx->pc = 0x23414Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234148u;
        // 0x23414c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234148) {
            ctx->pc = 0x23415Cu;
            goto label_23415c;
        }
    }
    ctx->pc = 0x234150u;
label_234150:
    // 0x234150: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x234150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_234154:
    // 0x234154: 0xe21026  xor         $v0, $a3, $v0
    ctx->pc = 0x234154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 2));
label_234158:
    // 0x234158: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x234158u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_23415c:
    // 0x23415c: 0xfd540000  sd          $s4, 0x0($t2)
    ctx->pc = 0x23415cu;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 20));
label_234160:
    // 0x234160: 0x254a0008  addiu       $t2, $t2, 0x8
    ctx->pc = 0x234160u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
label_234164:
    // 0x234164: 0xfd400000  sd          $zero, 0x0($t2)
    ctx->pc = 0x234164u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 0));
label_234168:
    // 0x234168: 0x254a0008  addiu       $t2, $t2, 0x8
    ctx->pc = 0x234168u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
label_23416c:
    // 0x23416c: 0xfd530000  sd          $s3, 0x0($t2)
    ctx->pc = 0x23416cu;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 19));
label_234170:
    // 0x234170: 0x254a0008  addiu       $t2, $t2, 0x8
    ctx->pc = 0x234170u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
label_234174:
    // 0x234174: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x234174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_234178:
    // 0x234178: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x234178u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_23417c:
    // 0x23417c: 0xfd520000  sd          $s2, 0x0($t2)
    ctx->pc = 0x23417cu;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 18));
label_234180:
    // 0x234180: 0x254a0008  addiu       $t2, $t2, 0x8
    ctx->pc = 0x234180u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
label_234184:
    // 0x234184: 0x1a21025  or          $v0, $t5, $v0
    ctx->pc = 0x234184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) | GPR_U64(ctx, 2));
label_234188:
    // 0x234188: 0x31bf8  dsll        $v1, $v1, 15
    ctx->pc = 0x234188u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 15);
label_23418c:
    // 0x23418c: 0xfd420000  sd          $v0, 0x0($t2)
    ctx->pc = 0x23418cu;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 2));
label_234190:
    // 0x234190: 0x254a0008  addiu       $t2, $t2, 0x8
    ctx->pc = 0x234190u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
label_234194:
    // 0x234194: 0xfd510000  sd          $s1, 0x0($t2)
    ctx->pc = 0x234194u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 17));
label_234198:
    // 0x234198: 0x254a0008  addiu       $t2, $t2, 0x8
    ctx->pc = 0x234198u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
label_23419c:
    // 0x23419c: 0xfd400000  sd          $zero, 0x0($t2)
    ctx->pc = 0x23419cu;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 0));
label_2341a0:
    // 0x2341a0: 0x254a0008  addiu       $t2, $t2, 0x8
    ctx->pc = 0x2341a0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
label_2341a4:
    // 0x2341a4: 0xfd500000  sd          $s0, 0x0($t2)
    ctx->pc = 0x2341a4u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 16));
label_2341a8:
    // 0x2341a8: 0x254a0008  addiu       $t2, $t2, 0x8
    ctx->pc = 0x2341a8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
label_2341ac:
    // 0x2341ac: 0xcb1024  and         $v0, $a2, $t3
    ctx->pc = 0x2341acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 11));
label_2341b0:
    // 0x2341b0: 0x24c60400  addiu       $a2, $a2, 0x400
    ctx->pc = 0x2341b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1024));
label_2341b4:
    // 0x2341b4: 0x691825  or          $v1, $v1, $t1
    ctx->pc = 0x2341b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 9));
label_2341b8:
    // 0x2341b8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2341b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_2341bc:
    // 0x2341bc: 0xfd430000  sd          $v1, 0x0($t2)
    ctx->pc = 0x2341bcu;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 3));
label_2341c0:
    // 0x2341c0: 0x254a0008  addiu       $t2, $t2, 0x8
    ctx->pc = 0x2341c0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
label_2341c4:
    // 0x2341c4: 0xfd400000  sd          $zero, 0x0($t2)
    ctx->pc = 0x2341c4u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 0));
label_2341c8:
    // 0x2341c8: 0x254a0008  addiu       $t2, $t2, 0x8
    ctx->pc = 0x2341c8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
label_2341cc:
    // 0x2341cc: 0x581025  or          $v0, $v0, $t8
    ctx->pc = 0x2341ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 24));
label_2341d0:
    // 0x2341d0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2341d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_2341d4:
    // 0x2341d4: 0x1e0202d  daddu       $a0, $t7, $zero
    ctx->pc = 0x2341d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
label_2341d8:
    // 0x2341d8: 0xfd420000  sd          $v0, 0x0($t2)
    ctx->pc = 0x2341d8u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 2));
label_2341dc:
    // 0x2341dc: 0x254a0008  addiu       $t2, $t2, 0x8
    ctx->pc = 0x2341dcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
label_2341e0:
    // 0x2341e0: 0xe4102b  sltu        $v0, $a3, $a0
    ctx->pc = 0x2341e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_2341e4:
    // 0x2341e4: 0xfd400000  sd          $zero, 0x0($t2)
    ctx->pc = 0x2341e4u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 0));
label_2341e8:
    // 0x2341e8: 0x1440ffd7  bnez        $v0, . + 4 + (-0x29 << 2)
label_2341ec:
    if (ctx->pc == 0x2341ECu) {
        ctx->pc = 0x2341ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2341E8u;
        // 0x2341ec: 0x254a0008  addiu       $t2, $t2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2341F0u;
        goto label_2341f0;
    }
    ctx->pc = 0x2341E8u;
    {
        const bool branch_taken_0x2341e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2341ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2341E8u;
        // 0x2341ec: 0x254a0008  addiu       $t2, $t2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2341e8) {
            ctx->pc = 0x234148u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_234148;
        }
    }
    ctx->pc = 0x2341F0u;
label_2341f0:
    // 0x2341f0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2341f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_2341f4:
    // 0x2341f4: 0x119102b  sltu        $v0, $t0, $t9
    ctx->pc = 0x2341f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 25)) ? 1 : 0);
label_2341f8:
    // 0x2341f8: 0x1440ffbb  bnez        $v0, . + 4 + (-0x45 << 2)
label_2341fc:
    if (ctx->pc == 0x2341FCu) {
        ctx->pc = 0x2341FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2341F8u;
        // 0x2341fc: 0xd53021  addu        $a2, $a2, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234200u;
        goto label_234200;
    }
    ctx->pc = 0x2341F8u;
    {
        const bool branch_taken_0x2341f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2341FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2341F8u;
        // 0x2341fc: 0xd53021  addu        $a2, $a2, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2341f8) {
            ctx->pc = 0x2340E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2340e8;
        }
    }
    ctx->pc = 0x234200u;
label_234200:
    // 0x234200: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x234200u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_234204:
    // 0x234204: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x234204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
label_234208:
    // 0x234208: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x234208u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_23420c:
    // 0x23420c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x23420cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_234210:
    // 0x234210: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x234210u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_234214:
    // 0x234214: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x234214u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_234218:
    // 0x234218: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x234218u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_23421c:
    // 0x23421c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x23421cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_234220:
    // 0x234220: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x234220u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_234224:
    // 0x234224: 0xfd400008  sd          $zero, 0x8($t2)
    ctx->pc = 0x234224u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 8), GPR_U64(ctx, 0));
label_234228:
    // 0x234228: 0xfd420000  sd          $v0, 0x0($t2)
    ctx->pc = 0x234228u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 2));
label_23422c:
    // 0x23422c: 0x3e00008  jr          $ra
label_234230:
    if (ctx->pc == 0x234230u) {
        ctx->pc = 0x234230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23422Cu;
        // 0x234230: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234234u;
        goto label_234234;
    }
    ctx->pc = 0x23422Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x234230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23422Cu;
        // 0x234230: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23422Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x234234u;
label_234234:
    // 0x234234: 0x0  nop
    ctx->pc = 0x234234u;
    // NOP
label_234238:
    // 0x234238: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x234238u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_23423c:
    // 0x23423c: 0x8f8482d0  lw          $a0, -0x7D30($gp)
    ctx->pc = 0x23423cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
label_234240:
    // 0x234240: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x234240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_234244:
    // 0x234244: 0x3c110029  lui         $s1, 0x29
    ctx->pc = 0x234244u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)41 << 16));
label_234248:
    // 0x234248: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x234248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_23424c:
    // 0x23424c: 0x262604b0  addiu       $a2, $s1, 0x4B0
    ctx->pc = 0x23424cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1200));
label_234250:
    // 0x234250: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x234250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_234254:
    // 0x234254: 0x3c020009  lui         $v0, 0x9
    ctx->pc = 0x234254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9 << 16));
label_234258:
    // 0x234258: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x234258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_23425c:
    // 0x23425c: 0x8c421268  lw          $v0, 0x1268($v0)
    ctx->pc = 0x23425cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4712)));
label_234260:
    // 0x234260: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
label_234264:
    if (ctx->pc == 0x234264u) {
        ctx->pc = 0x234264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234260u;
        // 0x234264: 0x90c5001f  lbu         $a1, 0x1F($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 31)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234268u;
        goto label_234268;
    }
    ctx->pc = 0x234260u;
    {
        const bool branch_taken_0x234260 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x234264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234260u;
        // 0x234264: 0x90c5001f  lbu         $a1, 0x1F($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 31)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234260) {
            ctx->pc = 0x234330u;
            goto label_234330;
        }
    }
    ctx->pc = 0x234268u;
label_234268:
    // 0x234268: 0x3c020009  lui         $v0, 0x9
    ctx->pc = 0x234268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9 << 16));
label_23426c:
    // 0x23426c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x23426cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_234270:
    // 0x234270: 0x8c42126c  lw          $v0, 0x126C($v0)
    ctx->pc = 0x234270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4716)));
label_234274:
    // 0x234274: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x234274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_234278:
    // 0x234278: 0x3c010009  lui         $at, 0x9
    ctx->pc = 0x234278u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9 << 16));
label_23427c:
    // 0x23427c: 0x240821  addu        $at, $at, $a0
    ctx->pc = 0x23427cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
label_234280:
    // 0x234280: 0xac22126c  sw          $v0, 0x126C($at)
    ctx->pc = 0x234280u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4716), GPR_U32(ctx, 2));
label_234284:
    // 0x234284: 0x3c030009  lui         $v1, 0x9
    ctx->pc = 0x234284u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)9 << 16));
label_234288:
    // 0x234288: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x234288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_23428c:
    // 0x23428c: 0x8c631270  lw          $v1, 0x1270($v1)
    ctx->pc = 0x23428cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4720)));
label_234290:
    // 0x234290: 0x50600028  beql        $v1, $zero, . + 4 + (0x28 << 2)
label_234294:
    if (ctx->pc == 0x234294u) {
        ctx->pc = 0x234294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234290u;
        // 0x234294: 0x262304b0  addiu       $v1, $s1, 0x4B0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234298u;
        goto label_234298;
    }
    ctx->pc = 0x234290u;
    {
        const bool branch_taken_0x234290 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x234290) {
            ctx->pc = 0x234294u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x234290u;
            // 0x234294: 0x262304b0  addiu       $v1, $s1, 0x4B0 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1200));
            ctx->in_delay_slot = false;
            ctx->pc = 0x234334u;
            goto label_234334;
        }
    }
    ctx->pc = 0x234298u;
label_234298:
    // 0x234298: 0x3c020009  lui         $v0, 0x9
    ctx->pc = 0x234298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9 << 16));
label_23429c:
    // 0x23429c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x23429cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2342a0:
    // 0x2342a0: 0x8c42126c  lw          $v0, 0x126C($v0)
    ctx->pc = 0x2342a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4716)));
label_2342a4:
    // 0x2342a4: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x2342a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_2342a8:
    // 0x2342a8: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
label_2342ac:
    if (ctx->pc == 0x2342ACu) {
        ctx->pc = 0x2342ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2342A8u;
        // 0x2342ac: 0x262304b0  addiu       $v1, $s1, 0x4B0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2342B0u;
        goto label_2342b0;
    }
    ctx->pc = 0x2342A8u;
    {
        const bool branch_taken_0x2342a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2342ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2342A8u;
        // 0x2342ac: 0x262304b0  addiu       $v1, $s1, 0x4B0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2342a8) {
            ctx->pc = 0x234334u;
            goto label_234334;
        }
    }
    ctx->pc = 0x2342B0u;
label_2342b0:
    // 0x2342b0: 0x3c020009  lui         $v0, 0x9
    ctx->pc = 0x2342b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9 << 16));
label_2342b4:
    // 0x2342b4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2342b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2342b8:
    // 0x2342b8: 0x8c42126c  lw          $v0, 0x126C($v0)
    ctx->pc = 0x2342b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4716)));
label_2342bc:
    // 0x2342bc: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x2342bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2342c0:
    // 0x2342c0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2342c4:
    if (ctx->pc == 0x2342C4u) {
        ctx->pc = 0x2342C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2342C0u;
        // 0x2342c4: 0x3c100029  lui         $s0, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2342C8u;
        goto label_2342c8;
    }
    ctx->pc = 0x2342C0u;
    {
        const bool branch_taken_0x2342c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2342C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2342C0u;
        // 0x2342c4: 0x3c100029  lui         $s0, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2342c0) {
            ctx->pc = 0x2342E0u;
            goto label_2342e0;
        }
    }
    ctx->pc = 0x2342C8u;
label_2342c8:
    // 0x2342c8: 0x26030508  addiu       $v1, $s0, 0x508
    ctx->pc = 0x2342c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1288));
label_2342cc:
    // 0x2342cc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2342ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_2342d0:
    // 0x2342d0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2342d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2342d4:
    // 0x2342d4: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x2342d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_2342d8:
    // 0x2342d8: 0x10000002  b           . + 4 + (0x2 << 2)
label_2342dc:
    if (ctx->pc == 0x2342DCu) {
        ctx->pc = 0x2342DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2342D8u;
        // 0x2342dc: 0x8cc50038  lw          $a1, 0x38($a2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2342E0u;
        goto label_2342e0;
    }
    ctx->pc = 0x2342D8u;
    {
        const bool branch_taken_0x2342d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2342DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2342D8u;
        // 0x2342dc: 0x8cc50038  lw          $a1, 0x38($a2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2342d8) {
            ctx->pc = 0x2342E4u;
            goto label_2342e4;
        }
    }
    ctx->pc = 0x2342E0u;
label_2342e0:
    // 0x2342e0: 0x8cc50038  lw          $a1, 0x38($a2)
    ctx->pc = 0x2342e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 56)));
label_2342e4:
    // 0x2342e4: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
label_2342e8:
    if (ctx->pc == 0x2342E8u) {
        ctx->pc = 0x2342E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2342E4u;
        // 0x2342e8: 0x26020508  addiu       $v0, $s0, 0x508 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2342ECu;
        goto label_2342ec;
    }
    ctx->pc = 0x2342E4u;
    {
        const bool branch_taken_0x2342e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2342E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2342E4u;
        // 0x2342e8: 0x26020508  addiu       $v0, $s0, 0x508 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2342e4) {
            ctx->pc = 0x234304u;
            goto label_234304;
        }
    }
    ctx->pc = 0x2342ECu;
label_2342ec:
    // 0x2342ec: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2342ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2342f0:
    // 0x2342f0: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x2342f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_2342f4:
    // 0x2342f4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2342f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2342f8:
    // 0x2342f8: 0xa0f809  jalr        $a1
label_2342fc:
    if (ctx->pc == 0x2342FCu) {
        ctx->pc = 0x2342FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2342F8u;
        // 0x2342fc: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234300u;
        goto label_234300;
    }
    ctx->pc = 0x2342F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x234300u);
        ctx->pc = 0x2342FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2342F8u;
        // 0x2342fc: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2342F8u, 0x234300u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x234300u;
label_234300:
    // 0x234300: 0x8f8482d0  lw          $a0, -0x7D30($gp)
    ctx->pc = 0x234300u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
label_234304:
    // 0x234304: 0x3c030009  lui         $v1, 0x9
    ctx->pc = 0x234304u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)9 << 16));
label_234308:
    // 0x234308: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x234308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_23430c:
    // 0x23430c: 0x8c63126c  lw          $v1, 0x126C($v1)
    ctx->pc = 0x23430cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4716)));
label_234310:
    // 0x234310: 0x26020508  addiu       $v0, $s0, 0x508
    ctx->pc = 0x234310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1288));
label_234314:
    // 0x234314: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x234314u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
label_234318:
    // 0x234318: 0x3c010009  lui         $at, 0x9
    ctx->pc = 0x234318u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9 << 16));
label_23431c:
    // 0x23431c: 0x240821  addu        $at, $at, $a0
    ctx->pc = 0x23431cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
label_234320:
    // 0x234320: 0xac20126c  sw          $zero, 0x126C($at)
    ctx->pc = 0x234320u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4716), GPR_U32(ctx, 0));
label_234324:
    // 0x234324: 0x3c010009  lui         $at, 0x9
    ctx->pc = 0x234324u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9 << 16));
label_234328:
    // 0x234328: 0x240821  addu        $at, $at, $a0
    ctx->pc = 0x234328u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
label_23432c:
    // 0x23432c: 0xac201270  sw          $zero, 0x1270($at)
    ctx->pc = 0x23432cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4720), GPR_U32(ctx, 0));
label_234330:
    // 0x234330: 0x262304b0  addiu       $v1, $s1, 0x4B0
    ctx->pc = 0x234330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1200));
label_234334:
    // 0x234334: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x234334u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_234338:
    // 0x234338: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x234338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_23433c:
    // 0x23433c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23433cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_234340:
    // 0x234340: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x234340u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_234344:
    // 0x234344: 0x3e00008  jr          $ra
label_234348:
    if (ctx->pc == 0x234348u) {
        ctx->pc = 0x234348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234344u;
        // 0x234348: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23434Cu;
        goto label_23434c;
    }
    ctx->pc = 0x234344u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x234348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234344u;
        // 0x234348: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x234344u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23434Cu;
label_23434c:
    // 0x23434c: 0x0  nop
    ctx->pc = 0x23434cu;
    // NOP
label_234350:
    // 0x234350: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x234350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_234354:
    // 0x234354: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x234354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_234358:
    // 0x234358: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x234358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_23435c:
    // 0x23435c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23435cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_234360:
    // 0x234360: 0xc06641a  jal         func_199068
label_234364:
    if (ctx->pc == 0x234364u) {
        ctx->pc = 0x234364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234360u;
        // 0x234364: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234368u;
        goto label_234368;
    }
    ctx->pc = 0x234360u;
    SET_GPR_U32(ctx, 31, 0x234368u);
    ctx->pc = 0x234364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234360u;
    // 0x234364: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199068u, 0x234360u, 0x234368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234368u;
label_234368:
    // 0x234368: 0x1050fffd  beq         $v0, $s0, . + 4 + (-0x3 << 2)
label_23436c:
    if (ctx->pc == 0x23436Cu) {
        ctx->pc = 0x23436Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234368u;
        // 0x23436c: 0x8f8282d0  lw          $v0, -0x7D30($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234370u;
        goto label_234370;
    }
    ctx->pc = 0x234368u;
    {
        const bool branch_taken_0x234368 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x23436Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234368u;
        // 0x23436c: 0x8f8282d0  lw          $v0, -0x7D30($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234368) {
            ctx->pc = 0x234360u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_234360;
        }
    }
    ctx->pc = 0x234370u;
label_234370:
    // 0x234370: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x234370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_234374:
    // 0x234374: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x234374u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_234378:
    // 0x234378: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x234378u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_23437c:
    // 0x23437c: 0x3c010009  lui         $at, 0x9
    ctx->pc = 0x23437cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9 << 16));
label_234380:
    // 0x234380: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x234380u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
label_234384:
    // 0x234384: 0xac20126c  sw          $zero, 0x126C($at)
    ctx->pc = 0x234384u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4716), GPR_U32(ctx, 0));
label_234388:
    // 0x234388: 0x3c010009  lui         $at, 0x9
    ctx->pc = 0x234388u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9 << 16));
label_23438c:
    // 0x23438c: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x23438cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
label_234390:
    // 0x234390: 0xac231268  sw          $v1, 0x1268($at)
    ctx->pc = 0x234390u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4712), GPR_U32(ctx, 3));
label_234394:
    // 0x234394: 0x3e00008  jr          $ra
label_234398:
    if (ctx->pc == 0x234398u) {
        ctx->pc = 0x234398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234394u;
        // 0x234398: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23439Cu;
        goto label_23439c;
    }
    ctx->pc = 0x234394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x234398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234394u;
        // 0x234398: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x234394u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23439Cu;
label_23439c:
    // 0x23439c: 0x0  nop
    ctx->pc = 0x23439cu;
    // NOP
label_2343a0:
    // 0x2343a0: 0x8f8282d0  lw          $v0, -0x7D30($gp)
    ctx->pc = 0x2343a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
label_2343a4:
    // 0x2343a4: 0x3c010009  lui         $at, 0x9
    ctx->pc = 0x2343a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9 << 16));
label_2343a8:
    // 0x2343a8: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x2343a8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
label_2343ac:
    // 0x2343ac: 0x3e00008  jr          $ra
label_2343b0:
    if (ctx->pc == 0x2343B0u) {
        ctx->pc = 0x2343B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2343ACu;
        // 0x2343b0: 0xac201268  sw          $zero, 0x1268($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4712), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2343B4u;
        goto label_2343b4;
    }
    ctx->pc = 0x2343ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2343B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2343ACu;
        // 0x2343b0: 0xac201268  sw          $zero, 0x1268($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4712), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2343ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2343B4u;
label_2343b4:
    // 0x2343b4: 0x0  nop
    ctx->pc = 0x2343b4u;
    // NOP
label_2343b8:
    // 0x2343b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2343b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2343bc:
    // 0x2343bc: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x2343bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_2343c0:
    // 0x2343c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2343c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2343c4:
    // 0x2343c4: 0x8c50ac70  lw          $s0, -0x5390($v0)
    ctx->pc = 0x2343c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945904)));
label_2343c8:
    // 0x2343c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2343c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2343cc:
    // 0x2343cc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2343ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2343d0:
    // 0x2343d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2343d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2343d4:
    // 0x2343d4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2343d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_2343d8:
    // 0x2343d8: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x2343d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2343dc:
    // 0x2343dc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2343dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_2343e0:
    // 0x2343e0: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_2343e4:
    if (ctx->pc == 0x2343E4u) {
        ctx->pc = 0x2343E8u;
        goto label_2343e8;
    }
    ctx->pc = 0x2343E0u;
    {
        const bool branch_taken_0x2343e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2343e0) {
            ctx->pc = 0x2343FCu;
            goto label_2343fc;
        }
    }
    ctx->pc = 0x2343E8u;
label_2343e8:
    // 0x2343e8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2343e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2343ec:
    // 0x2343ec: 0x40f809  jalr        $v0
label_2343f0:
    if (ctx->pc == 0x2343F0u) {
        ctx->pc = 0x2343F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2343ECu;
        // 0x2343f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2343F4u;
        goto label_2343f4;
    }
    ctx->pc = 0x2343ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2343F4u);
        ctx->pc = 0x2343F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2343ECu;
        // 0x2343f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2343ECu, 0x2343F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2343F4u;
label_2343f4:
    // 0x2343f4: 0x5452fffa  bnel        $v0, $s2, . + 4 + (-0x6 << 2)
label_2343f8:
    if (ctx->pc == 0x2343F8u) {
        ctx->pc = 0x2343F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2343F4u;
        // 0x2343f8: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2343FCu;
        goto label_2343fc;
    }
    ctx->pc = 0x2343F4u;
    {
        const bool branch_taken_0x2343f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x2343f4) {
            ctx->pc = 0x2343F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2343F4u;
            // 0x2343f8: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2343E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2343e0;
        }
    }
    ctx->pc = 0x2343FCu;
label_2343fc:
    // 0x2343fc: 0xf  sync
    ctx->pc = 0x2343fcu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_234400:
    // 0x234400: 0x42000038  ei
    ctx->pc = 0x234400u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_234404:
    // 0x234404: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x234404u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_234408:
    // 0x234408: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x234408u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_23440c:
    // 0x23440c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x23440cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_234410:
    // 0x234410: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x234410u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_234414:
    // 0x234414: 0x3e00008  jr          $ra
label_234418:
    if (ctx->pc == 0x234418u) {
        ctx->pc = 0x234418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234414u;
        // 0x234418: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23441Cu;
        goto label_23441c;
    }
    ctx->pc = 0x234414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x234418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234414u;
        // 0x234418: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x234414u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23441Cu;
label_23441c:
    // 0x23441c: 0x0  nop
    ctx->pc = 0x23441cu;
    // NOP
label_234420:
    // 0x234420: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x234420u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
label_234424:
    // 0x234424: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x234424u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_234428:
    // 0x234428: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x234428u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23442c:
    // 0x23442c: 0x24060078  addiu       $a2, $zero, 0x78
    ctx->pc = 0x23442cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_234430:
    // 0x234430: 0x2484ac80  addiu       $a0, $a0, -0x5380
    ctx->pc = 0x234430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945920));
label_234434:
    // 0x234434: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x234434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_234438:
    // 0x234438: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x234438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_23443c:
    // 0x23443c: 0xc08e9ac  jal         func_23A6B0
label_234440:
    if (ctx->pc == 0x234440u) {
        ctx->pc = 0x234440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23443Cu;
        // 0x234440: 0xac40ac70  sw          $zero, -0x5390($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294945904), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234444u;
        goto label_234444;
    }
    ctx->pc = 0x23443Cu;
    SET_GPR_U32(ctx, 31, 0x234444u);
    ctx->pc = 0x234440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23443Cu;
    // 0x234440: 0xac40ac70  sw          $zero, -0x5390($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294945904), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A6B0u;
    { ctx->pc = 0x23a6b0; return; }
    ctx->pc = 0x234444u;
label_234444:
    // 0x234444: 0x3c040023  lui         $a0, 0x23
    ctx->pc = 0x234444u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)35 << 16));
label_234448:
    // 0x234448: 0xc0667d4  jal         func_199F50
label_23444c:
    if (ctx->pc == 0x23444Cu) {
        ctx->pc = 0x23444Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234448u;
        // 0x23444c: 0x248443b8  addiu       $a0, $a0, 0x43B8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234450u;
        goto label_234450;
    }
    ctx->pc = 0x234448u;
    SET_GPR_U32(ctx, 31, 0x234450u);
    ctx->pc = 0x23444Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234448u;
    // 0x23444c: 0x248443b8  addiu       $a0, $a0, 0x43B8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199F50u, 0x234448u, 0x234450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234450u;
label_234450:
    // 0x234450: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x234450u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_234454:
    // 0x234454: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x234454u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_234458:
    // 0x234458: 0x3e00008  jr          $ra
label_23445c:
    if (ctx->pc == 0x23445Cu) {
        ctx->pc = 0x23445Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234458u;
        // 0x23445c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234460u;
        goto label_234460;
    }
    ctx->pc = 0x234458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23445Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234458u;
        // 0x23445c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x234458u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x234460u;
label_234460:
    // 0x234460: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x234460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_234464:
    // 0x234464: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x234464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_234468:
    // 0x234468: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x234468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_23446c:
    // 0x23446c: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x23446cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
label_234470:
    // 0x234470: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x234470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_234474:
    // 0x234474: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x234474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_234478:
    // 0x234478: 0x2451ac80  addiu       $s1, $v0, -0x5380
    ctx->pc = 0x234478u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945920));
label_23447c:
    // 0x23447c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x23447cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_234480:
    // 0x234480: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x234480u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_234484:
    // 0x234484: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x234484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_234488:
    // 0x234488: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x234488u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23448c:
    // 0x23448c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x23448cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_234490:
    // 0x234490: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x234490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_234494:
    // 0x234494: 0x5440001a  bnel        $v0, $zero, . + 4 + (0x1A << 2)
label_234498:
    if (ctx->pc == 0x234498u) {
        ctx->pc = 0x234498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234494u;
        // 0x234498: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23449Cu;
        goto label_23449c;
    }
    ctx->pc = 0x234494u;
    {
        const bool branch_taken_0x234494 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x234494) {
            ctx->pc = 0x234498u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x234494u;
            // 0x234498: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x234500u;
            { ctx->pc = 0x234500; return; }
        }
    }
    ctx->pc = 0x23449Cu;
label_23449c:
    // 0x23449c: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
label_2344a0:
    if (ctx->pc == 0x2344A0u) {
        ctx->pc = 0x2344A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23449Cu;
        // 0x2344a0: 0x2470ac70  addiu       $s0, $v1, -0x5390 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945904));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2344A4u;
        goto label_2344a4;
    }
    ctx->pc = 0x23449Cu;
    {
        const bool branch_taken_0x23449c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2344A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23449Cu;
        // 0x2344a0: 0x2470ac70  addiu       $s0, $v1, -0x5390 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945904));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23449c) {
            ctx->pc = 0x2344D8u;
            goto label_2344d8;
        }
    }
    ctx->pc = 0x2344A4u;
label_2344a4:
    // 0x2344a4: 0x10000003  b           . + 4 + (0x3 << 2)
label_2344a8:
    if (ctx->pc == 0x2344A8u) {
        ctx->pc = 0x2344A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2344A4u;
        // 0x2344a8: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2344ACu;
        goto label_2344ac;
    }
    ctx->pc = 0x2344A4u;
    {
        const bool branch_taken_0x2344a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2344A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2344A4u;
        // 0x2344a8: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2344a4) {
            ctx->pc = 0x2344B4u;
            goto label_2344b4;
        }
    }
    ctx->pc = 0x2344ACu;
label_2344ac:
    // 0x2344ac: 0x0  nop
    ctx->pc = 0x2344acu;
    // NOP
label_2344b0:
    // 0x2344b0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2344b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2344b4:
    // 0x2344b4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_2344b8:
    if (ctx->pc == 0x2344B8u) {
        ctx->pc = 0x2344BCu;
        goto label_2344bc;
    }
    ctx->pc = 0x2344B4u;
    {
        const bool branch_taken_0x2344b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2344b4) {
            ctx->pc = 0x2344D0u;
            goto label_2344d0;
        }
    }
    ctx->pc = 0x2344BCu;
label_2344bc:
    // 0x2344bc: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2344bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_2344c0:
    // 0x2344c0: 0x5445fffb  bnel        $v0, $a1, . + 4 + (-0x5 << 2)
label_2344c4:
    if (ctx->pc == 0x2344C4u) {
        ctx->pc = 0x2344C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2344C0u;
        // 0x2344c4: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2344C8u;
        goto label_2344c8;
    }
    ctx->pc = 0x2344C0u;
    {
        const bool branch_taken_0x2344c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x2344c0) {
            ctx->pc = 0x2344C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2344C0u;
            // 0x2344c4: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2344B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2344b0;
        }
    }
    ctx->pc = 0x2344C8u;
label_2344c8:
    // 0x2344c8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_2344cc:
    if (ctx->pc == 0x2344CCu) {
        ctx->pc = 0x2344D0u;
        goto label_2344d0;
    }
    ctx->pc = 0x2344C8u;
    {
        const bool branch_taken_0x2344c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2344c8) {
            ctx->pc = 0x2344D8u;
            goto label_2344d8;
        }
    }
    ctx->pc = 0x2344D0u;
label_2344d0:
    // 0x2344d0: 0x14a4000f  bne         $a1, $a0, . + 4 + (0xF << 2)
label_2344d4:
    if (ctx->pc == 0x2344D4u) {
        ctx->pc = 0x2344D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2344D0u;
        // 0x2344d4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2344D8u;
        goto label_2344d8;
    }
    ctx->pc = 0x2344D0u;
    {
        const bool branch_taken_0x2344d0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x2344D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2344D0u;
        // 0x2344d4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2344d0) {
            ctx->pc = 0x234510u;
            { ctx->pc = 0x234510; return; }
        }
    }
    ctx->pc = 0x2344D8u;
label_2344d8:
    // 0x2344d8: 0xc06b518  jal         func_1AD460
label_2344dc:
    if (ctx->pc == 0x2344DCu) {
        ctx->pc = 0x2344E0u;
        goto label_2344e0;
    }
    ctx->pc = 0x2344D8u;
    SET_GPR_U32(ctx, 31, 0x2344E0u);
    ctx->pc = 0x1AD460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD460u, 0x2344D8u, 0x2344E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2344E0u;
label_2344e0:
    // 0x2344e0: 0xae330004  sw          $s3, 0x4($s1)
    ctx->pc = 0x2344e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 19));
label_2344e4:
    // 0x2344e4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2344e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2344e8:
    // 0x2344e8: 0xae320008  sw          $s2, 0x8($s1)
    ctx->pc = 0x2344e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 18));
label_2344ec:
    // 0x2344ec: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2344ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x2344f0u;
    return;
}

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


void FUN_0019b910_part276(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x221d80u: goto label_221d80;
        case 0x221d84u: goto label_221d84;
        case 0x221d88u: goto label_221d88;
        case 0x221d8cu: goto label_221d8c;
        case 0x221d90u: goto label_221d90;
        case 0x221d94u: goto label_221d94;
        case 0x221d98u: goto label_221d98;
        case 0x221d9cu: goto label_221d9c;
        case 0x221da0u: goto label_221da0;
        case 0x221da4u: goto label_221da4;
        case 0x221da8u: goto label_221da8;
        case 0x221dacu: goto label_221dac;
        case 0x221db0u: goto label_221db0;
        case 0x221db4u: goto label_221db4;
        case 0x221db8u: goto label_221db8;
        case 0x221dbcu: goto label_221dbc;
        case 0x221dc0u: goto label_221dc0;
        case 0x221dc4u: goto label_221dc4;
        case 0x221dc8u: goto label_221dc8;
        case 0x221dccu: goto label_221dcc;
        case 0x221dd0u: goto label_221dd0;
        case 0x221dd4u: goto label_221dd4;
        case 0x221dd8u: goto label_221dd8;
        case 0x221ddcu: goto label_221ddc;
        case 0x221de0u: goto label_221de0;
        case 0x221de4u: goto label_221de4;
        case 0x221de8u: goto label_221de8;
        case 0x221decu: goto label_221dec;
        case 0x221df0u: goto label_221df0;
        case 0x221df4u: goto label_221df4;
        case 0x221df8u: goto label_221df8;
        case 0x221dfcu: goto label_221dfc;
        case 0x221e00u: goto label_221e00;
        case 0x221e04u: goto label_221e04;
        case 0x221e08u: goto label_221e08;
        case 0x221e0cu: goto label_221e0c;
        case 0x221e10u: goto label_221e10;
        case 0x221e14u: goto label_221e14;
        case 0x221e18u: goto label_221e18;
        case 0x221e1cu: goto label_221e1c;
        case 0x221e20u: goto label_221e20;
        case 0x221e24u: goto label_221e24;
        case 0x221e28u: goto label_221e28;
        case 0x221e2cu: goto label_221e2c;
        case 0x221e30u: goto label_221e30;
        case 0x221e34u: goto label_221e34;
        case 0x221e38u: goto label_221e38;
        case 0x221e3cu: goto label_221e3c;
        case 0x221e40u: goto label_221e40;
        case 0x221e44u: goto label_221e44;
        case 0x221e48u: goto label_221e48;
        case 0x221e4cu: goto label_221e4c;
        case 0x221e50u: goto label_221e50;
        case 0x221e54u: goto label_221e54;
        case 0x221e58u: goto label_221e58;
        case 0x221e5cu: goto label_221e5c;
        case 0x221e60u: goto label_221e60;
        case 0x221e64u: goto label_221e64;
        case 0x221e68u: goto label_221e68;
        case 0x221e6cu: goto label_221e6c;
        case 0x221e70u: goto label_221e70;
        case 0x221e74u: goto label_221e74;
        case 0x221e78u: goto label_221e78;
        case 0x221e7cu: goto label_221e7c;
        case 0x221e80u: goto label_221e80;
        case 0x221e84u: goto label_221e84;
        case 0x221e88u: goto label_221e88;
        case 0x221e8cu: goto label_221e8c;
        case 0x221e90u: goto label_221e90;
        case 0x221e94u: goto label_221e94;
        case 0x221e98u: goto label_221e98;
        case 0x221e9cu: goto label_221e9c;
        case 0x221ea0u: goto label_221ea0;
        case 0x221ea4u: goto label_221ea4;
        case 0x221ea8u: goto label_221ea8;
        case 0x221eacu: goto label_221eac;
        case 0x221eb0u: goto label_221eb0;
        case 0x221eb4u: goto label_221eb4;
        case 0x221eb8u: goto label_221eb8;
        case 0x221ebcu: goto label_221ebc;
        case 0x221ec0u: goto label_221ec0;
        case 0x221ec4u: goto label_221ec4;
        case 0x221ec8u: goto label_221ec8;
        case 0x221eccu: goto label_221ecc;
        case 0x221ed0u: goto label_221ed0;
        case 0x221ed4u: goto label_221ed4;
        case 0x221ed8u: goto label_221ed8;
        case 0x221edcu: goto label_221edc;
        case 0x221ee0u: goto label_221ee0;
        case 0x221ee4u: goto label_221ee4;
        case 0x221ee8u: goto label_221ee8;
        case 0x221eecu: goto label_221eec;
        case 0x221ef0u: goto label_221ef0;
        case 0x221ef4u: goto label_221ef4;
        case 0x221ef8u: goto label_221ef8;
        case 0x221efcu: goto label_221efc;
        case 0x221f00u: goto label_221f00;
        case 0x221f04u: goto label_221f04;
        case 0x221f08u: goto label_221f08;
        case 0x221f0cu: goto label_221f0c;
        case 0x221f10u: goto label_221f10;
        case 0x221f14u: goto label_221f14;
        case 0x221f18u: goto label_221f18;
        case 0x221f1cu: goto label_221f1c;
        case 0x221f20u: goto label_221f20;
        case 0x221f24u: goto label_221f24;
        case 0x221f28u: goto label_221f28;
        case 0x221f2cu: goto label_221f2c;
        case 0x221f30u: goto label_221f30;
        case 0x221f34u: goto label_221f34;
        case 0x221f38u: goto label_221f38;
        case 0x221f3cu: goto label_221f3c;
        case 0x221f40u: goto label_221f40;
        case 0x221f44u: goto label_221f44;
        case 0x221f48u: goto label_221f48;
        case 0x221f4cu: goto label_221f4c;
        case 0x221f50u: goto label_221f50;
        case 0x221f54u: goto label_221f54;
        case 0x221f58u: goto label_221f58;
        case 0x221f5cu: goto label_221f5c;
        case 0x221f60u: goto label_221f60;
        case 0x221f64u: goto label_221f64;
        case 0x221f68u: goto label_221f68;
        case 0x221f6cu: goto label_221f6c;
        case 0x221f70u: goto label_221f70;
        case 0x221f74u: goto label_221f74;
        case 0x221f78u: goto label_221f78;
        case 0x221f7cu: goto label_221f7c;
        case 0x221f80u: goto label_221f80;
        case 0x221f84u: goto label_221f84;
        case 0x221f88u: goto label_221f88;
        case 0x221f8cu: goto label_221f8c;
        case 0x221f90u: goto label_221f90;
        case 0x221f94u: goto label_221f94;
        case 0x221f98u: goto label_221f98;
        case 0x221f9cu: goto label_221f9c;
        case 0x221fa0u: goto label_221fa0;
        case 0x221fa4u: goto label_221fa4;
        case 0x221fa8u: goto label_221fa8;
        case 0x221facu: goto label_221fac;
        case 0x221fb0u: goto label_221fb0;
        case 0x221fb4u: goto label_221fb4;
        case 0x221fb8u: goto label_221fb8;
        case 0x221fbcu: goto label_221fbc;
        case 0x221fc0u: goto label_221fc0;
        case 0x221fc4u: goto label_221fc4;
        case 0x221fc8u: goto label_221fc8;
        case 0x221fccu: goto label_221fcc;
        case 0x221fd0u: goto label_221fd0;
        case 0x221fd4u: goto label_221fd4;
        case 0x221fd8u: goto label_221fd8;
        case 0x221fdcu: goto label_221fdc;
        case 0x221fe0u: goto label_221fe0;
        case 0x221fe4u: goto label_221fe4;
        case 0x221fe8u: goto label_221fe8;
        case 0x221fecu: goto label_221fec;
        case 0x221ff0u: goto label_221ff0;
        case 0x221ff4u: goto label_221ff4;
        case 0x221ff8u: goto label_221ff8;
        case 0x221ffcu: goto label_221ffc;
        case 0x222000u: goto label_222000;
        case 0x222004u: goto label_222004;
        case 0x222008u: goto label_222008;
        case 0x22200cu: goto label_22200c;
        case 0x222010u: goto label_222010;
        case 0x222014u: goto label_222014;
        case 0x222018u: goto label_222018;
        case 0x22201cu: goto label_22201c;
        case 0x222020u: goto label_222020;
        case 0x222024u: goto label_222024;
        case 0x222028u: goto label_222028;
        case 0x22202cu: goto label_22202c;
        case 0x222030u: goto label_222030;
        case 0x222034u: goto label_222034;
        case 0x222038u: goto label_222038;
        case 0x22203cu: goto label_22203c;
        case 0x222040u: goto label_222040;
        case 0x222044u: goto label_222044;
        case 0x222048u: goto label_222048;
        case 0x22204cu: goto label_22204c;
        case 0x222050u: goto label_222050;
        case 0x222054u: goto label_222054;
        case 0x222058u: goto label_222058;
        case 0x22205cu: goto label_22205c;
        case 0x222060u: goto label_222060;
        case 0x222064u: goto label_222064;
        case 0x222068u: goto label_222068;
        case 0x22206cu: goto label_22206c;
        case 0x222070u: goto label_222070;
        case 0x222074u: goto label_222074;
        case 0x222078u: goto label_222078;
        case 0x22207cu: goto label_22207c;
        case 0x222080u: goto label_222080;
        case 0x222084u: goto label_222084;
        case 0x222088u: goto label_222088;
        case 0x22208cu: goto label_22208c;
        case 0x222090u: goto label_222090;
        case 0x222094u: goto label_222094;
        case 0x222098u: goto label_222098;
        case 0x22209cu: goto label_22209c;
        case 0x2220a0u: goto label_2220a0;
        case 0x2220a4u: goto label_2220a4;
        case 0x2220a8u: goto label_2220a8;
        case 0x2220acu: goto label_2220ac;
        case 0x2220b0u: goto label_2220b0;
        case 0x2220b4u: goto label_2220b4;
        case 0x2220b8u: goto label_2220b8;
        case 0x2220bcu: goto label_2220bc;
        case 0x2220c0u: goto label_2220c0;
        case 0x2220c4u: goto label_2220c4;
        case 0x2220c8u: goto label_2220c8;
        case 0x2220ccu: goto label_2220cc;
        case 0x2220d0u: goto label_2220d0;
        case 0x2220d4u: goto label_2220d4;
        case 0x2220d8u: goto label_2220d8;
        case 0x2220dcu: goto label_2220dc;
        case 0x2220e0u: goto label_2220e0;
        case 0x2220e4u: goto label_2220e4;
        case 0x2220e8u: goto label_2220e8;
        case 0x2220ecu: goto label_2220ec;
        case 0x2220f0u: goto label_2220f0;
        case 0x2220f4u: goto label_2220f4;
        case 0x2220f8u: goto label_2220f8;
        case 0x2220fcu: goto label_2220fc;
        case 0x222100u: goto label_222100;
        case 0x222104u: goto label_222104;
        case 0x222108u: goto label_222108;
        case 0x22210cu: goto label_22210c;
        case 0x222110u: goto label_222110;
        case 0x222114u: goto label_222114;
        case 0x222118u: goto label_222118;
        case 0x22211cu: goto label_22211c;
        case 0x222120u: goto label_222120;
        case 0x222124u: goto label_222124;
        case 0x222128u: goto label_222128;
        case 0x22212cu: goto label_22212c;
        case 0x222130u: goto label_222130;
        case 0x222134u: goto label_222134;
        case 0x222138u: goto label_222138;
        case 0x22213cu: goto label_22213c;
        case 0x222140u: goto label_222140;
        case 0x222144u: goto label_222144;
        case 0x222148u: goto label_222148;
        case 0x22214cu: goto label_22214c;
        case 0x222150u: goto label_222150;
        case 0x222154u: goto label_222154;
        case 0x222158u: goto label_222158;
        case 0x22215cu: goto label_22215c;
        case 0x222160u: goto label_222160;
        case 0x222164u: goto label_222164;
        case 0x222168u: goto label_222168;
        case 0x22216cu: goto label_22216c;
        case 0x222170u: goto label_222170;
        case 0x222174u: goto label_222174;
        case 0x222178u: goto label_222178;
        case 0x22217cu: goto label_22217c;
        case 0x222180u: goto label_222180;
        case 0x222184u: goto label_222184;
        case 0x222188u: goto label_222188;
        case 0x22218cu: goto label_22218c;
        case 0x222190u: goto label_222190;
        case 0x222194u: goto label_222194;
        case 0x222198u: goto label_222198;
        case 0x22219cu: goto label_22219c;
        case 0x2221a0u: goto label_2221a0;
        case 0x2221a4u: goto label_2221a4;
        case 0x2221a8u: goto label_2221a8;
        case 0x2221acu: goto label_2221ac;
        case 0x2221b0u: goto label_2221b0;
        case 0x2221b4u: goto label_2221b4;
        case 0x2221b8u: goto label_2221b8;
        case 0x2221bcu: goto label_2221bc;
        case 0x2221c0u: goto label_2221c0;
        case 0x2221c4u: goto label_2221c4;
        case 0x2221c8u: goto label_2221c8;
        case 0x2221ccu: goto label_2221cc;
        case 0x2221d0u: goto label_2221d0;
        case 0x2221d4u: goto label_2221d4;
        case 0x2221d8u: goto label_2221d8;
        case 0x2221dcu: goto label_2221dc;
        case 0x2221e0u: goto label_2221e0;
        case 0x2221e4u: goto label_2221e4;
        case 0x2221e8u: goto label_2221e8;
        case 0x2221ecu: goto label_2221ec;
        case 0x2221f0u: goto label_2221f0;
        case 0x2221f4u: goto label_2221f4;
        case 0x2221f8u: goto label_2221f8;
        case 0x2221fcu: goto label_2221fc;
        case 0x222200u: goto label_222200;
        case 0x222204u: goto label_222204;
        case 0x222208u: goto label_222208;
        case 0x22220cu: goto label_22220c;
        case 0x222210u: goto label_222210;
        case 0x222214u: goto label_222214;
        case 0x222218u: goto label_222218;
        case 0x22221cu: goto label_22221c;
        case 0x222220u: goto label_222220;
        case 0x222224u: goto label_222224;
        case 0x222228u: goto label_222228;
        case 0x22222cu: goto label_22222c;
        case 0x222230u: goto label_222230;
        case 0x222234u: goto label_222234;
        case 0x222238u: goto label_222238;
        case 0x22223cu: goto label_22223c;
        case 0x222240u: goto label_222240;
        case 0x222244u: goto label_222244;
        case 0x222248u: goto label_222248;
        case 0x22224cu: goto label_22224c;
        case 0x222250u: goto label_222250;
        case 0x222254u: goto label_222254;
        case 0x222258u: goto label_222258;
        case 0x22225cu: goto label_22225c;
        case 0x222260u: goto label_222260;
        case 0x222264u: goto label_222264;
        case 0x222268u: goto label_222268;
        case 0x22226cu: goto label_22226c;
        case 0x222270u: goto label_222270;
        case 0x222274u: goto label_222274;
        case 0x222278u: goto label_222278;
        case 0x22227cu: goto label_22227c;
        case 0x222280u: goto label_222280;
        case 0x222284u: goto label_222284;
        case 0x222288u: goto label_222288;
        case 0x22228cu: goto label_22228c;
        case 0x222290u: goto label_222290;
        case 0x222294u: goto label_222294;
        case 0x222298u: goto label_222298;
        case 0x22229cu: goto label_22229c;
        case 0x2222a0u: goto label_2222a0;
        case 0x2222a4u: goto label_2222a4;
        case 0x2222a8u: goto label_2222a8;
        case 0x2222acu: goto label_2222ac;
        case 0x2222b0u: goto label_2222b0;
        case 0x2222b4u: goto label_2222b4;
        case 0x2222b8u: goto label_2222b8;
        case 0x2222bcu: goto label_2222bc;
        case 0x2222c0u: goto label_2222c0;
        case 0x2222c4u: goto label_2222c4;
        case 0x2222c8u: goto label_2222c8;
        case 0x2222ccu: goto label_2222cc;
        case 0x2222d0u: goto label_2222d0;
        case 0x2222d4u: goto label_2222d4;
        case 0x2222d8u: goto label_2222d8;
        case 0x2222dcu: goto label_2222dc;
        case 0x2222e0u: goto label_2222e0;
        case 0x2222e4u: goto label_2222e4;
        case 0x2222e8u: goto label_2222e8;
        case 0x2222ecu: goto label_2222ec;
        case 0x2222f0u: goto label_2222f0;
        case 0x2222f4u: goto label_2222f4;
        case 0x2222f8u: goto label_2222f8;
        case 0x2222fcu: goto label_2222fc;
        case 0x222300u: goto label_222300;
        case 0x222304u: goto label_222304;
        case 0x222308u: goto label_222308;
        case 0x22230cu: goto label_22230c;
        case 0x222310u: goto label_222310;
        case 0x222314u: goto label_222314;
        case 0x222318u: goto label_222318;
        case 0x22231cu: goto label_22231c;
        case 0x222320u: goto label_222320;
        case 0x222324u: goto label_222324;
        case 0x222328u: goto label_222328;
        case 0x22232cu: goto label_22232c;
        case 0x222330u: goto label_222330;
        case 0x222334u: goto label_222334;
        case 0x222338u: goto label_222338;
        case 0x22233cu: goto label_22233c;
        case 0x222340u: goto label_222340;
        case 0x222344u: goto label_222344;
        case 0x222348u: goto label_222348;
        case 0x22234cu: goto label_22234c;
        case 0x222350u: goto label_222350;
        case 0x222354u: goto label_222354;
        case 0x222358u: goto label_222358;
        case 0x22235cu: goto label_22235c;
        case 0x222360u: goto label_222360;
        case 0x222364u: goto label_222364;
        case 0x222368u: goto label_222368;
        case 0x22236cu: goto label_22236c;
        case 0x222370u: goto label_222370;
        case 0x222374u: goto label_222374;
        case 0x222378u: goto label_222378;
        case 0x22237cu: goto label_22237c;
        case 0x222380u: goto label_222380;
        case 0x222384u: goto label_222384;
        case 0x222388u: goto label_222388;
        case 0x22238cu: goto label_22238c;
        case 0x222390u: goto label_222390;
        case 0x222394u: goto label_222394;
        case 0x222398u: goto label_222398;
        case 0x22239cu: goto label_22239c;
        case 0x2223a0u: goto label_2223a0;
        case 0x2223a4u: goto label_2223a4;
        case 0x2223a8u: goto label_2223a8;
        case 0x2223acu: goto label_2223ac;
        case 0x2223b0u: goto label_2223b0;
        case 0x2223b4u: goto label_2223b4;
        case 0x2223b8u: goto label_2223b8;
        case 0x2223bcu: goto label_2223bc;
        case 0x2223c0u: goto label_2223c0;
        case 0x2223c4u: goto label_2223c4;
        case 0x2223c8u: goto label_2223c8;
        case 0x2223ccu: goto label_2223cc;
        case 0x2223d0u: goto label_2223d0;
        case 0x2223d4u: goto label_2223d4;
        case 0x2223d8u: goto label_2223d8;
        case 0x2223dcu: goto label_2223dc;
        case 0x2223e0u: goto label_2223e0;
        case 0x2223e4u: goto label_2223e4;
        case 0x2223e8u: goto label_2223e8;
        case 0x2223ecu: goto label_2223ec;
        case 0x2223f0u: goto label_2223f0;
        case 0x2223f4u: goto label_2223f4;
        case 0x2223f8u: goto label_2223f8;
        case 0x2223fcu: goto label_2223fc;
        case 0x222400u: goto label_222400;
        case 0x222404u: goto label_222404;
        case 0x222408u: goto label_222408;
        case 0x22240cu: goto label_22240c;
        case 0x222410u: goto label_222410;
        case 0x222414u: goto label_222414;
        case 0x222418u: goto label_222418;
        case 0x22241cu: goto label_22241c;
        case 0x222420u: goto label_222420;
        case 0x222424u: goto label_222424;
        case 0x222428u: goto label_222428;
        case 0x22242cu: goto label_22242c;
        case 0x222430u: goto label_222430;
        case 0x222434u: goto label_222434;
        case 0x222438u: goto label_222438;
        case 0x22243cu: goto label_22243c;
        case 0x222440u: goto label_222440;
        case 0x222444u: goto label_222444;
        case 0x222448u: goto label_222448;
        case 0x22244cu: goto label_22244c;
        case 0x222450u: goto label_222450;
        case 0x222454u: goto label_222454;
        case 0x222458u: goto label_222458;
        case 0x22245cu: goto label_22245c;
        case 0x222460u: goto label_222460;
        case 0x222464u: goto label_222464;
        case 0x222468u: goto label_222468;
        case 0x22246cu: goto label_22246c;
        case 0x222470u: goto label_222470;
        case 0x222474u: goto label_222474;
        case 0x222478u: goto label_222478;
        case 0x22247cu: goto label_22247c;
        case 0x222480u: goto label_222480;
        case 0x222484u: goto label_222484;
        case 0x222488u: goto label_222488;
        case 0x22248cu: goto label_22248c;
        case 0x222490u: goto label_222490;
        case 0x222494u: goto label_222494;
        case 0x222498u: goto label_222498;
        case 0x22249cu: goto label_22249c;
        case 0x2224a0u: goto label_2224a0;
        case 0x2224a4u: goto label_2224a4;
        case 0x2224a8u: goto label_2224a8;
        case 0x2224acu: goto label_2224ac;
        case 0x2224b0u: goto label_2224b0;
        case 0x2224b4u: goto label_2224b4;
        case 0x2224b8u: goto label_2224b8;
        case 0x2224bcu: goto label_2224bc;
        case 0x2224c0u: goto label_2224c0;
        case 0x2224c4u: goto label_2224c4;
        case 0x2224c8u: goto label_2224c8;
        case 0x2224ccu: goto label_2224cc;
        case 0x2224d0u: goto label_2224d0;
        case 0x2224d4u: goto label_2224d4;
        case 0x2224d8u: goto label_2224d8;
        case 0x2224dcu: goto label_2224dc;
        case 0x2224e0u: goto label_2224e0;
        case 0x2224e4u: goto label_2224e4;
        case 0x2224e8u: goto label_2224e8;
        case 0x2224ecu: goto label_2224ec;
        case 0x2224f0u: goto label_2224f0;
        case 0x2224f4u: goto label_2224f4;
        case 0x2224f8u: goto label_2224f8;
        case 0x2224fcu: goto label_2224fc;
        case 0x222500u: goto label_222500;
        case 0x222504u: goto label_222504;
        case 0x222508u: goto label_222508;
        case 0x22250cu: goto label_22250c;
        case 0x222510u: goto label_222510;
        case 0x222514u: goto label_222514;
        case 0x222518u: goto label_222518;
        case 0x22251cu: goto label_22251c;
        case 0x222520u: goto label_222520;
        case 0x222524u: goto label_222524;
        case 0x222528u: goto label_222528;
        case 0x22252cu: goto label_22252c;
        case 0x222530u: goto label_222530;
        case 0x222534u: goto label_222534;
        case 0x222538u: goto label_222538;
        case 0x22253cu: goto label_22253c;
        case 0x222540u: goto label_222540;
        case 0x222544u: goto label_222544;
        case 0x222548u: goto label_222548;
        case 0x22254cu: goto label_22254c;
        default: return;
    }

label_221d80:
    // 0x221d80: 0x100000ee  b           . + 4 + (0xEE << 2)
label_221d84:
    if (ctx->pc == 0x221D84u) {
        ctx->pc = 0x221D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221D80u;
        // 0x221d84: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221D88u;
        goto label_221d88;
    }
    ctx->pc = 0x221D80u;
    {
        const bool branch_taken_0x221d80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221D80u;
        // 0x221d84: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221d80) {
            ctx->pc = 0x22213Cu;
            goto label_22213c;
        }
    }
    ctx->pc = 0x221D88u;
label_221d88:
    // 0x221d88: 0x8f8592d8  lw          $a1, -0x6D28($gp)
    ctx->pc = 0x221d88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939352)));
label_221d8c:
    // 0x221d8c: 0xc056ff8  jal         func_15BFE0
label_221d90:
    if (ctx->pc == 0x221D90u) {
        ctx->pc = 0x221D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221D8Cu;
        // 0x221d90: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221D94u;
        goto label_221d94;
    }
    ctx->pc = 0x221D8Cu;
    SET_GPR_U32(ctx, 31, 0x221D94u);
    ctx->pc = 0x221D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221D8Cu;
    // 0x221d90: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BFE0u, 0x221D8Cu, 0x221D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221D94u;
label_221d94:
    // 0x221d94: 0x104000e9  beqz        $v0, . + 4 + (0xE9 << 2)
label_221d98:
    if (ctx->pc == 0x221D98u) {
        ctx->pc = 0x221D9Cu;
        goto label_221d9c;
    }
    ctx->pc = 0x221D94u;
    {
        const bool branch_taken_0x221d94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x221d94) {
            ctx->pc = 0x22213Cu;
            goto label_22213c;
        }
    }
    ctx->pc = 0x221D9Cu;
label_221d9c:
    // 0x221d9c: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x221d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_221da0:
    // 0x221da0: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x221da0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_221da4:
    // 0x221da4: 0x9486000a  lhu         $a2, 0xA($a0)
    ctx->pc = 0x221da4u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
label_221da8:
    // 0x221da8: 0x14c30004  bne         $a2, $v1, . + 4 + (0x4 << 2)
label_221dac:
    if (ctx->pc == 0x221DACu) {
        ctx->pc = 0x221DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221DA8u;
        // 0x221dac: 0x24030019  addiu       $v1, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221DB0u;
        goto label_221db0;
    }
    ctx->pc = 0x221DA8u;
    {
        const bool branch_taken_0x221da8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x221DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221DA8u;
        // 0x221dac: 0x24030019  addiu       $v1, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221da8) {
            ctx->pc = 0x221DBCu;
            goto label_221dbc;
        }
    }
    ctx->pc = 0x221DB0u;
label_221db0:
    // 0x221db0: 0x2410000a  addiu       $s0, $zero, 0xA
    ctx->pc = 0x221db0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_221db4:
    // 0x221db4: 0x100000e1  b           . + 4 + (0xE1 << 2)
label_221db8:
    if (ctx->pc == 0x221DB8u) {
        ctx->pc = 0x221DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221DB4u;
        // 0x221db8: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221DBCu;
        goto label_221dbc;
    }
    ctx->pc = 0x221DB4u;
    {
        const bool branch_taken_0x221db4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221DB4u;
        // 0x221db8: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221db4) {
            ctx->pc = 0x22213Cu;
            goto label_22213c;
        }
    }
    ctx->pc = 0x221DBCu;
label_221dbc:
    // 0x221dbc: 0x14c30004  bne         $a2, $v1, . + 4 + (0x4 << 2)
label_221dc0:
    if (ctx->pc == 0x221DC0u) {
        ctx->pc = 0x221DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221DBCu;
        // 0x221dc0: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221DC4u;
        goto label_221dc4;
    }
    ctx->pc = 0x221DBCu;
    {
        const bool branch_taken_0x221dbc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x221DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221DBCu;
        // 0x221dc0: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221dbc) {
            ctx->pc = 0x221DD0u;
            goto label_221dd0;
        }
    }
    ctx->pc = 0x221DC4u;
label_221dc4:
    // 0x221dc4: 0x24100012  addiu       $s0, $zero, 0x12
    ctx->pc = 0x221dc4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_221dc8:
    // 0x221dc8: 0x100000dc  b           . + 4 + (0xDC << 2)
label_221dcc:
    if (ctx->pc == 0x221DCCu) {
        ctx->pc = 0x221DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221DC8u;
        // 0x221dcc: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221DD0u;
        goto label_221dd0;
    }
    ctx->pc = 0x221DC8u;
    {
        const bool branch_taken_0x221dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221DC8u;
        // 0x221dcc: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221dc8) {
            ctx->pc = 0x22213Cu;
            goto label_22213c;
        }
    }
    ctx->pc = 0x221DD0u;
label_221dd0:
    // 0x221dd0: 0x14c50004  bne         $a2, $a1, . + 4 + (0x4 << 2)
label_221dd4:
    if (ctx->pc == 0x221DD4u) {
        ctx->pc = 0x221DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221DD0u;
        // 0x221dd4: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221DD8u;
        goto label_221dd8;
    }
    ctx->pc = 0x221DD0u;
    {
        const bool branch_taken_0x221dd0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 5));
        ctx->pc = 0x221DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221DD0u;
        // 0x221dd4: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221dd0) {
            ctx->pc = 0x221DE4u;
            goto label_221de4;
        }
    }
    ctx->pc = 0x221DD8u;
label_221dd8:
    // 0x221dd8: 0x2410000e  addiu       $s0, $zero, 0xE
    ctx->pc = 0x221dd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_221ddc:
    // 0x221ddc: 0x100000d7  b           . + 4 + (0xD7 << 2)
label_221de0:
    if (ctx->pc == 0x221DE0u) {
        ctx->pc = 0x221DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221DDCu;
        // 0x221de0: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221DE4u;
        goto label_221de4;
    }
    ctx->pc = 0x221DDCu;
    {
        const bool branch_taken_0x221ddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221DDCu;
        // 0x221de0: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221ddc) {
            ctx->pc = 0x22213Cu;
            goto label_22213c;
        }
    }
    ctx->pc = 0x221DE4u;
label_221de4:
    // 0x221de4: 0x14c30004  bne         $a2, $v1, . + 4 + (0x4 << 2)
label_221de8:
    if (ctx->pc == 0x221DE8u) {
        ctx->pc = 0x221DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221DE4u;
        // 0x221de8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221DECu;
        goto label_221dec;
    }
    ctx->pc = 0x221DE4u;
    {
        const bool branch_taken_0x221de4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x221DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221DE4u;
        // 0x221de8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221de4) {
            ctx->pc = 0x221DF8u;
            goto label_221df8;
        }
    }
    ctx->pc = 0x221DECu;
label_221dec:
    // 0x221dec: 0x24100016  addiu       $s0, $zero, 0x16
    ctx->pc = 0x221decu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_221df0:
    // 0x221df0: 0x100000d2  b           . + 4 + (0xD2 << 2)
label_221df4:
    if (ctx->pc == 0x221DF4u) {
        ctx->pc = 0x221DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221DF0u;
        // 0x221df4: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221DF8u;
        goto label_221df8;
    }
    ctx->pc = 0x221DF0u;
    {
        const bool branch_taken_0x221df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221DF0u;
        // 0x221df4: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221df0) {
            ctx->pc = 0x22213Cu;
            goto label_22213c;
        }
    }
    ctx->pc = 0x221DF8u;
label_221df8:
    // 0x221df8: 0x14c40004  bne         $a2, $a0, . + 4 + (0x4 << 2)
label_221dfc:
    if (ctx->pc == 0x221DFCu) {
        ctx->pc = 0x221DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221DF8u;
        // 0x221dfc: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221E00u;
        goto label_221e00;
    }
    ctx->pc = 0x221DF8u;
    {
        const bool branch_taken_0x221df8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 4));
        ctx->pc = 0x221DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221DF8u;
        // 0x221dfc: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221df8) {
            ctx->pc = 0x221E0Cu;
            goto label_221e0c;
        }
    }
    ctx->pc = 0x221E00u;
label_221e00:
    // 0x221e00: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x221e00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_221e04:
    // 0x221e04: 0x100000cd  b           . + 4 + (0xCD << 2)
label_221e08:
    if (ctx->pc == 0x221E08u) {
        ctx->pc = 0x221E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221E04u;
        // 0x221e08: 0x24100017  addiu       $s0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221E0Cu;
        goto label_221e0c;
    }
    ctx->pc = 0x221E04u;
    {
        const bool branch_taken_0x221e04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221E04u;
        // 0x221e08: 0x24100017  addiu       $s0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221e04) {
            ctx->pc = 0x22213Cu;
            goto label_22213c;
        }
    }
    ctx->pc = 0x221E0Cu;
label_221e0c:
    // 0x221e0c: 0x14c30004  bne         $a2, $v1, . + 4 + (0x4 << 2)
label_221e10:
    if (ctx->pc == 0x221E10u) {
        ctx->pc = 0x221E14u;
        goto label_221e14;
    }
    ctx->pc = 0x221E0Cu;
    {
        const bool branch_taken_0x221e0c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x221e0c) {
            ctx->pc = 0x221E20u;
            goto label_221e20;
        }
    }
    ctx->pc = 0x221E14u;
label_221e14:
    // 0x221e14: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x221e14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_221e18:
    // 0x221e18: 0x100000c8  b           . + 4 + (0xC8 << 2)
label_221e1c:
    if (ctx->pc == 0x221E1Cu) {
        ctx->pc = 0x221E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221E18u;
        // 0x221e1c: 0x2410000f  addiu       $s0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221E20u;
        goto label_221e20;
    }
    ctx->pc = 0x221E18u;
    {
        const bool branch_taken_0x221e18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221E18u;
        // 0x221e1c: 0x2410000f  addiu       $s0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221e18) {
            ctx->pc = 0x22213Cu;
            goto label_22213c;
        }
    }
    ctx->pc = 0x221E20u;
label_221e20:
    // 0x221e20: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x221e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_221e24:
    // 0x221e24: 0x14c30004  bne         $a2, $v1, . + 4 + (0x4 << 2)
label_221e28:
    if (ctx->pc == 0x221E28u) {
        ctx->pc = 0x221E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221E24u;
        // 0x221e28: 0x24030009  addiu       $v1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221E2Cu;
        goto label_221e2c;
    }
    ctx->pc = 0x221E24u;
    {
        const bool branch_taken_0x221e24 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x221E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221E24u;
        // 0x221e28: 0x24030009  addiu       $v1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221e24) {
            ctx->pc = 0x221E38u;
            goto label_221e38;
        }
    }
    ctx->pc = 0x221E2Cu;
label_221e2c:
    // 0x221e2c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x221e2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_221e30:
    // 0x221e30: 0x100000c2  b           . + 4 + (0xC2 << 2)
label_221e34:
    if (ctx->pc == 0x221E34u) {
        ctx->pc = 0x221E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221E30u;
        // 0x221e34: 0x24100010  addiu       $s0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221E38u;
        goto label_221e38;
    }
    ctx->pc = 0x221E30u;
    {
        const bool branch_taken_0x221e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221E30u;
        // 0x221e34: 0x24100010  addiu       $s0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221e30) {
            ctx->pc = 0x22213Cu;
            goto label_22213c;
        }
    }
    ctx->pc = 0x221E38u;
label_221e38:
    // 0x221e38: 0x14c300c0  bne         $a2, $v1, . + 4 + (0xC0 << 2)
label_221e3c:
    if (ctx->pc == 0x221E3Cu) {
        ctx->pc = 0x221E40u;
        goto label_221e40;
    }
    ctx->pc = 0x221E38u;
    {
        const bool branch_taken_0x221e38 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x221e38) {
            ctx->pc = 0x22213Cu;
            goto label_22213c;
        }
    }
    ctx->pc = 0x221E40u;
label_221e40:
    // 0x221e40: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x221e40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_221e44:
    // 0x221e44: 0x100000bd  b           . + 4 + (0xBD << 2)
label_221e48:
    if (ctx->pc == 0x221E48u) {
        ctx->pc = 0x221E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221E44u;
        // 0x221e48: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221E4Cu;
        goto label_221e4c;
    }
    ctx->pc = 0x221E44u;
    {
        const bool branch_taken_0x221e44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221E44u;
        // 0x221e48: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221e44) {
            ctx->pc = 0x22213Cu;
            goto label_22213c;
        }
    }
    ctx->pc = 0x221E4Cu;
label_221e4c:
    // 0x221e4c: 0x8f8592d8  lw          $a1, -0x6D28($gp)
    ctx->pc = 0x221e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939352)));
label_221e50:
    // 0x221e50: 0xc056ff8  jal         func_15BFE0
label_221e54:
    if (ctx->pc == 0x221E54u) {
        ctx->pc = 0x221E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221E50u;
        // 0x221e54: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221E58u;
        goto label_221e58;
    }
    ctx->pc = 0x221E50u;
    SET_GPR_U32(ctx, 31, 0x221E58u);
    ctx->pc = 0x221E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221E50u;
    // 0x221e54: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BFE0u, 0x221E50u, 0x221E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221E58u;
label_221e58:
    // 0x221e58: 0x104000b8  beqz        $v0, . + 4 + (0xB8 << 2)
label_221e5c:
    if (ctx->pc == 0x221E5Cu) {
        ctx->pc = 0x221E60u;
        goto label_221e60;
    }
    ctx->pc = 0x221E58u;
    {
        const bool branch_taken_0x221e58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x221e58) {
            ctx->pc = 0x22213Cu;
            goto label_22213c;
        }
    }
    ctx->pc = 0x221E60u;
label_221e60:
    // 0x221e60: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x221e60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_221e64:
    // 0x221e64: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x221e64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_221e68:
    // 0x221e68: 0x9484000a  lhu         $a0, 0xA($a0)
    ctx->pc = 0x221e68u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
label_221e6c:
    // 0x221e6c: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
label_221e70:
    if (ctx->pc == 0x221E70u) {
        ctx->pc = 0x221E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221E6Cu;
        // 0x221e70: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221E74u;
        goto label_221e74;
    }
    ctx->pc = 0x221E6Cu;
    {
        const bool branch_taken_0x221e6c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x221E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221E6Cu;
        // 0x221e70: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221e6c) {
            ctx->pc = 0x221E80u;
            goto label_221e80;
        }
    }
    ctx->pc = 0x221E74u;
label_221e74:
    // 0x221e74: 0x2410000b  addiu       $s0, $zero, 0xB
    ctx->pc = 0x221e74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_221e78:
    // 0x221e78: 0x100000b0  b           . + 4 + (0xB0 << 2)
label_221e7c:
    if (ctx->pc == 0x221E7Cu) {
        ctx->pc = 0x221E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221E78u;
        // 0x221e7c: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221E80u;
        goto label_221e80;
    }
    ctx->pc = 0x221E78u;
    {
        const bool branch_taken_0x221e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221E78u;
        // 0x221e7c: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221e78) {
            ctx->pc = 0x22213Cu;
            goto label_22213c;
        }
    }
    ctx->pc = 0x221E80u;
label_221e80:
    // 0x221e80: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
label_221e84:
    if (ctx->pc == 0x221E84u) {
        ctx->pc = 0x221E88u;
        goto label_221e88;
    }
    ctx->pc = 0x221E80u;
    {
        const bool branch_taken_0x221e80 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x221e80) {
            ctx->pc = 0x221E94u;
            goto label_221e94;
        }
    }
    ctx->pc = 0x221E88u;
label_221e88:
    // 0x221e88: 0x24100013  addiu       $s0, $zero, 0x13
    ctx->pc = 0x221e88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_221e8c:
    // 0x221e8c: 0x100000ab  b           . + 4 + (0xAB << 2)
label_221e90:
    if (ctx->pc == 0x221E90u) {
        ctx->pc = 0x221E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221E8Cu;
        // 0x221e90: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221E94u;
        goto label_221e94;
    }
    ctx->pc = 0x221E8Cu;
    {
        const bool branch_taken_0x221e8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221E8Cu;
        // 0x221e90: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221e8c) {
            ctx->pc = 0x22213Cu;
            goto label_22213c;
        }
    }
    ctx->pc = 0x221E94u;
label_221e94:
    // 0x221e94: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x221e94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_221e98:
    // 0x221e98: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
label_221e9c:
    if (ctx->pc == 0x221E9Cu) {
        ctx->pc = 0x221E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221E98u;
        // 0x221e9c: 0x2403001d  addiu       $v1, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221EA0u;
        goto label_221ea0;
    }
    ctx->pc = 0x221E98u;
    {
        const bool branch_taken_0x221e98 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x221E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221E98u;
        // 0x221e9c: 0x2403001d  addiu       $v1, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221e98) {
            ctx->pc = 0x221EACu;
            goto label_221eac;
        }
    }
    ctx->pc = 0x221EA0u;
label_221ea0:
    // 0x221ea0: 0x2410000c  addiu       $s0, $zero, 0xC
    ctx->pc = 0x221ea0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_221ea4:
    // 0x221ea4: 0x100000a5  b           . + 4 + (0xA5 << 2)
label_221ea8:
    if (ctx->pc == 0x221EA8u) {
        ctx->pc = 0x221EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221EA4u;
        // 0x221ea8: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221EACu;
        goto label_221eac;
    }
    ctx->pc = 0x221EA4u;
    {
        const bool branch_taken_0x221ea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221EA4u;
        // 0x221ea8: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221ea4) {
            ctx->pc = 0x22213Cu;
            goto label_22213c;
        }
    }
    ctx->pc = 0x221EACu;
label_221eac:
    // 0x221eac: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
label_221eb0:
    if (ctx->pc == 0x221EB0u) {
        ctx->pc = 0x221EB4u;
        goto label_221eb4;
    }
    ctx->pc = 0x221EACu;
    {
        const bool branch_taken_0x221eac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x221eac) {
            ctx->pc = 0x221EC0u;
            goto label_221ec0;
        }
    }
    ctx->pc = 0x221EB4u;
label_221eb4:
    // 0x221eb4: 0x24100014  addiu       $s0, $zero, 0x14
    ctx->pc = 0x221eb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_221eb8:
    // 0x221eb8: 0x100000a0  b           . + 4 + (0xA0 << 2)
label_221ebc:
    if (ctx->pc == 0x221EBCu) {
        ctx->pc = 0x221EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221EB8u;
        // 0x221ebc: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221EC0u;
        goto label_221ec0;
    }
    ctx->pc = 0x221EB8u;
    {
        const bool branch_taken_0x221eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221EB8u;
        // 0x221ebc: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221eb8) {
            ctx->pc = 0x22213Cu;
            goto label_22213c;
        }
    }
    ctx->pc = 0x221EC0u;
label_221ec0:
    // 0x221ec0: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
label_221ec4:
    if (ctx->pc == 0x221EC4u) {
        ctx->pc = 0x221EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221EC0u;
        // 0x221ec4: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221EC8u;
        goto label_221ec8;
    }
    ctx->pc = 0x221EC0u;
    {
        const bool branch_taken_0x221ec0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x221EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221EC0u;
        // 0x221ec4: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221ec0) {
            ctx->pc = 0x221ED4u;
            goto label_221ed4;
        }
    }
    ctx->pc = 0x221EC8u;
label_221ec8:
    // 0x221ec8: 0x2410000d  addiu       $s0, $zero, 0xD
    ctx->pc = 0x221ec8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_221ecc:
    // 0x221ecc: 0x1000009b  b           . + 4 + (0x9B << 2)
label_221ed0:
    if (ctx->pc == 0x221ED0u) {
        ctx->pc = 0x221ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221ECCu;
        // 0x221ed0: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221ED4u;
        goto label_221ed4;
    }
    ctx->pc = 0x221ECCu;
    {
        const bool branch_taken_0x221ecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221ECCu;
        // 0x221ed0: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221ecc) {
            ctx->pc = 0x22213Cu;
            goto label_22213c;
        }
    }
    ctx->pc = 0x221ED4u;
label_221ed4:
    // 0x221ed4: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
label_221ed8:
    if (ctx->pc == 0x221ED8u) {
        ctx->pc = 0x221EDCu;
        goto label_221edc;
    }
    ctx->pc = 0x221ED4u;
    {
        const bool branch_taken_0x221ed4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x221ed4) {
            ctx->pc = 0x221EE8u;
            goto label_221ee8;
        }
    }
    ctx->pc = 0x221EDCu;
label_221edc:
    // 0x221edc: 0x24100015  addiu       $s0, $zero, 0x15
    ctx->pc = 0x221edcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_221ee0:
    // 0x221ee0: 0x10000096  b           . + 4 + (0x96 << 2)
label_221ee4:
    if (ctx->pc == 0x221EE4u) {
        ctx->pc = 0x221EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221EE0u;
        // 0x221ee4: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221EE8u;
        goto label_221ee8;
    }
    ctx->pc = 0x221EE0u;
    {
        const bool branch_taken_0x221ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221EE0u;
        // 0x221ee4: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221ee0) {
            ctx->pc = 0x22213Cu;
            goto label_22213c;
        }
    }
    ctx->pc = 0x221EE8u;
label_221ee8:
    // 0x221ee8: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x221ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_221eec:
    // 0x221eec: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
label_221ef0:
    if (ctx->pc == 0x221EF0u) {
        ctx->pc = 0x221EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221EECu;
        // 0x221ef0: 0x2403000c  addiu       $v1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221EF4u;
        goto label_221ef4;
    }
    ctx->pc = 0x221EECu;
    {
        const bool branch_taken_0x221eec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x221EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221EECu;
        // 0x221ef0: 0x2403000c  addiu       $v1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221eec) {
            ctx->pc = 0x221F00u;
            goto label_221f00;
        }
    }
    ctx->pc = 0x221EF4u;
label_221ef4:
    // 0x221ef4: 0x24100011  addiu       $s0, $zero, 0x11
    ctx->pc = 0x221ef4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_221ef8:
    // 0x221ef8: 0x10000090  b           . + 4 + (0x90 << 2)
label_221efc:
    if (ctx->pc == 0x221EFCu) {
        ctx->pc = 0x221EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221EF8u;
        // 0x221efc: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221F00u;
        goto label_221f00;
    }
    ctx->pc = 0x221EF8u;
    {
        const bool branch_taken_0x221ef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221EF8u;
        // 0x221efc: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221ef8) {
            ctx->pc = 0x22213Cu;
            goto label_22213c;
        }
    }
    ctx->pc = 0x221F00u;
label_221f00:
    // 0x221f00: 0x1483008e  bne         $a0, $v1, . + 4 + (0x8E << 2)
label_221f04:
    if (ctx->pc == 0x221F04u) {
        ctx->pc = 0x221F08u;
        goto label_221f08;
    }
    ctx->pc = 0x221F00u;
    {
        const bool branch_taken_0x221f00 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x221f00) {
            ctx->pc = 0x22213Cu;
            goto label_22213c;
        }
    }
    ctx->pc = 0x221F08u;
label_221f08:
    // 0x221f08: 0x24100005  addiu       $s0, $zero, 0x5
    ctx->pc = 0x221f08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_221f0c:
    // 0x221f0c: 0x1000008b  b           . + 4 + (0x8B << 2)
label_221f10:
    if (ctx->pc == 0x221F10u) {
        ctx->pc = 0x221F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221F0Cu;
        // 0x221f10: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221F14u;
        goto label_221f14;
    }
    ctx->pc = 0x221F0Cu;
    {
        const bool branch_taken_0x221f0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221F0Cu;
        // 0x221f10: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221f0c) {
            ctx->pc = 0x22213Cu;
            goto label_22213c;
        }
    }
    ctx->pc = 0x221F14u;
label_221f14:
    // 0x221f14: 0x8f8592d8  lw          $a1, -0x6D28($gp)
    ctx->pc = 0x221f14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939352)));
label_221f18:
    // 0x221f18: 0xc056ff8  jal         func_15BFE0
label_221f1c:
    if (ctx->pc == 0x221F1Cu) {
        ctx->pc = 0x221F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221F18u;
        // 0x221f1c: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221F20u;
        goto label_221f20;
    }
    ctx->pc = 0x221F18u;
    SET_GPR_U32(ctx, 31, 0x221F20u);
    ctx->pc = 0x221F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221F18u;
    // 0x221f1c: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BFE0u, 0x221F18u, 0x221F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221F20u;
label_221f20:
    // 0x221f20: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_221f24:
    if (ctx->pc == 0x221F24u) {
        ctx->pc = 0x221F28u;
        goto label_221f28;
    }
    ctx->pc = 0x221F20u;
    {
        const bool branch_taken_0x221f20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x221f20) {
            ctx->pc = 0x221F48u;
            goto label_221f48;
        }
    }
    ctx->pc = 0x221F28u;
label_221f28:
    // 0x221f28: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x221f28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_221f2c:
    // 0x221f2c: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x221f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_221f30:
    // 0x221f30: 0x9484000a  lhu         $a0, 0xA($a0)
    ctx->pc = 0x221f30u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
label_221f34:
    // 0x221f34: 0x14830081  bne         $a0, $v1, . + 4 + (0x81 << 2)
label_221f38:
    if (ctx->pc == 0x221F38u) {
        ctx->pc = 0x221F3Cu;
        goto label_221f3c;
    }
    ctx->pc = 0x221F34u;
    {
        const bool branch_taken_0x221f34 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x221f34) {
            ctx->pc = 0x22213Cu;
            goto label_22213c;
        }
    }
    ctx->pc = 0x221F3Cu;
label_221f3c:
    // 0x221f3c: 0x24100008  addiu       $s0, $zero, 0x8
    ctx->pc = 0x221f3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_221f40:
    // 0x221f40: 0x1000007e  b           . + 4 + (0x7E << 2)
label_221f44:
    if (ctx->pc == 0x221F44u) {
        ctx->pc = 0x221F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221F40u;
        // 0x221f44: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221F48u;
        goto label_221f48;
    }
    ctx->pc = 0x221F40u;
    {
        const bool branch_taken_0x221f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221F40u;
        // 0x221f44: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221f40) {
            ctx->pc = 0x22213Cu;
            goto label_22213c;
        }
    }
    ctx->pc = 0x221F48u;
label_221f48:
    // 0x221f48: 0x8f8592d8  lw          $a1, -0x6D28($gp)
    ctx->pc = 0x221f48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939352)));
label_221f4c:
    // 0x221f4c: 0xc056ff8  jal         func_15BFE0
label_221f50:
    if (ctx->pc == 0x221F50u) {
        ctx->pc = 0x221F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221F4Cu;
        // 0x221f50: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221F54u;
        goto label_221f54;
    }
    ctx->pc = 0x221F4Cu;
    SET_GPR_U32(ctx, 31, 0x221F54u);
    ctx->pc = 0x221F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221F4Cu;
    // 0x221f50: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BFE0u, 0x221F4Cu, 0x221F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221F54u;
label_221f54:
    // 0x221f54: 0x10400079  beqz        $v0, . + 4 + (0x79 << 2)
label_221f58:
    if (ctx->pc == 0x221F58u) {
        ctx->pc = 0x221F5Cu;
        goto label_221f5c;
    }
    ctx->pc = 0x221F54u;
    {
        const bool branch_taken_0x221f54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x221f54) {
            ctx->pc = 0x22213Cu;
            goto label_22213c;
        }
    }
    ctx->pc = 0x221F5Cu;
label_221f5c:
    // 0x221f5c: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x221f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_221f60:
    // 0x221f60: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x221f60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_221f64:
    // 0x221f64: 0x9484000a  lhu         $a0, 0xA($a0)
    ctx->pc = 0x221f64u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
label_221f68:
    // 0x221f68: 0x14830074  bne         $a0, $v1, . + 4 + (0x74 << 2)
label_221f6c:
    if (ctx->pc == 0x221F6Cu) {
        ctx->pc = 0x221F70u;
        goto label_221f70;
    }
    ctx->pc = 0x221F68u;
    {
        const bool branch_taken_0x221f68 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x221f68) {
            ctx->pc = 0x22213Cu;
            goto label_22213c;
        }
    }
    ctx->pc = 0x221F70u;
label_221f70:
    // 0x221f70: 0x24100009  addiu       $s0, $zero, 0x9
    ctx->pc = 0x221f70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_221f74:
    // 0x221f74: 0x10000071  b           . + 4 + (0x71 << 2)
label_221f78:
    if (ctx->pc == 0x221F78u) {
        ctx->pc = 0x221F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221F74u;
        // 0x221f78: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221F7Cu;
        goto label_221f7c;
    }
    ctx->pc = 0x221F74u;
    {
        const bool branch_taken_0x221f74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221F74u;
        // 0x221f78: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221f74) {
            ctx->pc = 0x22213Cu;
            goto label_22213c;
        }
    }
    ctx->pc = 0x221F7Cu;
label_221f7c:
    // 0x221f7c: 0x8f8592d8  lw          $a1, -0x6D28($gp)
    ctx->pc = 0x221f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939352)));
label_221f80:
    // 0x221f80: 0xc056ff8  jal         func_15BFE0
label_221f84:
    if (ctx->pc == 0x221F84u) {
        ctx->pc = 0x221F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221F80u;
        // 0x221f84: 0x24040011  addiu       $a0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221F88u;
        goto label_221f88;
    }
    ctx->pc = 0x221F80u;
    SET_GPR_U32(ctx, 31, 0x221F88u);
    ctx->pc = 0x221F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221F80u;
    // 0x221f84: 0x24040011  addiu       $a0, $zero, 0x11 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BFE0u, 0x221F80u, 0x221F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221F88u;
label_221f88:
    // 0x221f88: 0x1040006c  beqz        $v0, . + 4 + (0x6C << 2)
label_221f8c:
    if (ctx->pc == 0x221F8Cu) {
        ctx->pc = 0x221F90u;
        goto label_221f90;
    }
    ctx->pc = 0x221F88u;
    {
        const bool branch_taken_0x221f88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x221f88) {
            ctx->pc = 0x22213Cu;
            goto label_22213c;
        }
    }
    ctx->pc = 0x221F90u;
label_221f90:
    // 0x221f90: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x221f90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_221f94:
    // 0x221f94: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x221f94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_221f98:
    // 0x221f98: 0x9484000a  lhu         $a0, 0xA($a0)
    ctx->pc = 0x221f98u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
label_221f9c:
    // 0x221f9c: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
label_221fa0:
    if (ctx->pc == 0x221FA0u) {
        ctx->pc = 0x221FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221F9Cu;
        // 0x221fa0: 0x24030009  addiu       $v1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221FA4u;
        goto label_221fa4;
    }
    ctx->pc = 0x221F9Cu;
    {
        const bool branch_taken_0x221f9c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x221FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221F9Cu;
        // 0x221fa0: 0x24030009  addiu       $v1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221f9c) {
            ctx->pc = 0x221FACu;
            goto label_221fac;
        }
    }
    ctx->pc = 0x221FA4u;
label_221fa4:
    // 0x221fa4: 0x24100008  addiu       $s0, $zero, 0x8
    ctx->pc = 0x221fa4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_221fa8:
    // 0x221fa8: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x221fa8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_221fac:
    // 0x221fac: 0x14830063  bne         $a0, $v1, . + 4 + (0x63 << 2)
label_221fb0:
    if (ctx->pc == 0x221FB0u) {
        ctx->pc = 0x221FB4u;
        goto label_221fb4;
    }
    ctx->pc = 0x221FACu;
    {
        const bool branch_taken_0x221fac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x221fac) {
            ctx->pc = 0x22213Cu;
            goto label_22213c;
        }
    }
    ctx->pc = 0x221FB4u;
label_221fb4:
    // 0x221fb4: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x221fb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_221fb8:
    // 0x221fb8: 0x10000060  b           . + 4 + (0x60 << 2)
label_221fbc:
    if (ctx->pc == 0x221FBCu) {
        ctx->pc = 0x221FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221FB8u;
        // 0x221fbc: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221FC0u;
        goto label_221fc0;
    }
    ctx->pc = 0x221FB8u;
    {
        const bool branch_taken_0x221fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221FB8u;
        // 0x221fbc: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221fb8) {
            ctx->pc = 0x22213Cu;
            goto label_22213c;
        }
    }
    ctx->pc = 0x221FC0u;
label_221fc0:
    // 0x221fc0: 0x8f8592d8  lw          $a1, -0x6D28($gp)
    ctx->pc = 0x221fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939352)));
label_221fc4:
    // 0x221fc4: 0xc056ff8  jal         func_15BFE0
label_221fc8:
    if (ctx->pc == 0x221FC8u) {
        ctx->pc = 0x221FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221FC4u;
        // 0x221fc8: 0x24040024  addiu       $a0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221FCCu;
        goto label_221fcc;
    }
    ctx->pc = 0x221FC4u;
    SET_GPR_U32(ctx, 31, 0x221FCCu);
    ctx->pc = 0x221FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221FC4u;
    // 0x221fc8: 0x24040024  addiu       $a0, $zero, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BFE0u, 0x221FC4u, 0x221FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221FCCu;
label_221fcc:
    // 0x221fcc: 0x1040005b  beqz        $v0, . + 4 + (0x5B << 2)
label_221fd0:
    if (ctx->pc == 0x221FD0u) {
        ctx->pc = 0x221FD4u;
        goto label_221fd4;
    }
    ctx->pc = 0x221FCCu;
    {
        const bool branch_taken_0x221fcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x221fcc) {
            ctx->pc = 0x22213Cu;
            goto label_22213c;
        }
    }
    ctx->pc = 0x221FD4u;
label_221fd4:
    // 0x221fd4: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x221fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_221fd8:
    // 0x221fd8: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x221fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_221fdc:
    // 0x221fdc: 0x9484000a  lhu         $a0, 0xA($a0)
    ctx->pc = 0x221fdcu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
label_221fe0:
    // 0x221fe0: 0x14830056  bne         $a0, $v1, . + 4 + (0x56 << 2)
label_221fe4:
    if (ctx->pc == 0x221FE4u) {
        ctx->pc = 0x221FE8u;
        goto label_221fe8;
    }
    ctx->pc = 0x221FE0u;
    {
        const bool branch_taken_0x221fe0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x221fe0) {
            ctx->pc = 0x22213Cu;
            goto label_22213c;
        }
    }
    ctx->pc = 0x221FE8u;
label_221fe8:
    // 0x221fe8: 0x24100006  addiu       $s0, $zero, 0x6
    ctx->pc = 0x221fe8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_221fec:
    // 0x221fec: 0x10000053  b           . + 4 + (0x53 << 2)
label_221ff0:
    if (ctx->pc == 0x221FF0u) {
        ctx->pc = 0x221FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221FECu;
        // 0x221ff0: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221FF4u;
        goto label_221ff4;
    }
    ctx->pc = 0x221FECu;
    {
        const bool branch_taken_0x221fec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221FECu;
        // 0x221ff0: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221fec) {
            ctx->pc = 0x22213Cu;
            goto label_22213c;
        }
    }
    ctx->pc = 0x221FF4u;
label_221ff4:
    // 0x221ff4: 0x8f8592d8  lw          $a1, -0x6D28($gp)
    ctx->pc = 0x221ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939352)));
label_221ff8:
    // 0x221ff8: 0xc056ff8  jal         func_15BFE0
label_221ffc:
    if (ctx->pc == 0x221FFCu) {
        ctx->pc = 0x221FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221FF8u;
        // 0x221ffc: 0x24040011  addiu       $a0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x222000u;
        goto label_222000;
    }
    ctx->pc = 0x221FF8u;
    SET_GPR_U32(ctx, 31, 0x222000u);
    ctx->pc = 0x221FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221FF8u;
    // 0x221ffc: 0x24040011  addiu       $a0, $zero, 0x11 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BFE0u, 0x221FF8u, 0x222000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222000u;
label_222000:
    // 0x222000: 0x1040004e  beqz        $v0, . + 4 + (0x4E << 2)
label_222004:
    if (ctx->pc == 0x222004u) {
        ctx->pc = 0x222008u;
        goto label_222008;
    }
    ctx->pc = 0x222000u;
    {
        const bool branch_taken_0x222000 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x222000) {
            ctx->pc = 0x22213Cu;
            goto label_22213c;
        }
    }
    ctx->pc = 0x222008u;
label_222008:
    // 0x222008: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x222008u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_22200c:
    // 0x22200c: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x22200cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_222010:
    // 0x222010: 0x9484000a  lhu         $a0, 0xA($a0)
    ctx->pc = 0x222010u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
label_222014:
    // 0x222014: 0x14830049  bne         $a0, $v1, . + 4 + (0x49 << 2)
label_222018:
    if (ctx->pc == 0x222018u) {
        ctx->pc = 0x22201Cu;
        goto label_22201c;
    }
    ctx->pc = 0x222014u;
    {
        const bool branch_taken_0x222014 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x222014) {
            ctx->pc = 0x22213Cu;
            goto label_22213c;
        }
    }
    ctx->pc = 0x22201Cu;
label_22201c:
    // 0x22201c: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x22201cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_222020:
    // 0x222020: 0x10000046  b           . + 4 + (0x46 << 2)
label_222024:
    if (ctx->pc == 0x222024u) {
        ctx->pc = 0x222024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222020u;
        // 0x222024: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x222028u;
        goto label_222028;
    }
    ctx->pc = 0x222020u;
    {
        const bool branch_taken_0x222020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222020u;
        // 0x222024: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222020) {
            ctx->pc = 0x22213Cu;
            goto label_22213c;
        }
    }
    ctx->pc = 0x222028u;
label_222028:
    // 0x222028: 0x8f8592d8  lw          $a1, -0x6D28($gp)
    ctx->pc = 0x222028u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939352)));
label_22202c:
    // 0x22202c: 0xc056ff8  jal         func_15BFE0
label_222030:
    if (ctx->pc == 0x222030u) {
        ctx->pc = 0x222030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22202Cu;
        // 0x222030: 0x24040023  addiu       $a0, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        ctx->pc = 0x222034u;
        goto label_222034;
    }
    ctx->pc = 0x22202Cu;
    SET_GPR_U32(ctx, 31, 0x222034u);
    ctx->pc = 0x222030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22202Cu;
    // 0x222030: 0x24040023  addiu       $a0, $zero, 0x23 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BFE0u, 0x22202Cu, 0x222034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222034u;
label_222034:
    // 0x222034: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
label_222038:
    if (ctx->pc == 0x222038u) {
        ctx->pc = 0x22203Cu;
        goto label_22203c;
    }
    ctx->pc = 0x222034u;
    {
        const bool branch_taken_0x222034 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x222034) {
            ctx->pc = 0x22213Cu;
            goto label_22213c;
        }
    }
    ctx->pc = 0x22203Cu;
label_22203c:
    // 0x22203c: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x22203cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_222040:
    // 0x222040: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x222040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_222044:
    // 0x222044: 0x9484000a  lhu         $a0, 0xA($a0)
    ctx->pc = 0x222044u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
label_222048:
    // 0x222048: 0x1483003c  bne         $a0, $v1, . + 4 + (0x3C << 2)
label_22204c:
    if (ctx->pc == 0x22204Cu) {
        ctx->pc = 0x222050u;
        goto label_222050;
    }
    ctx->pc = 0x222048u;
    {
        const bool branch_taken_0x222048 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x222048) {
            ctx->pc = 0x22213Cu;
            goto label_22213c;
        }
    }
    ctx->pc = 0x222050u;
label_222050:
    // 0x222050: 0x24100005  addiu       $s0, $zero, 0x5
    ctx->pc = 0x222050u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_222054:
    // 0x222054: 0x10000039  b           . + 4 + (0x39 << 2)
label_222058:
    if (ctx->pc == 0x222058u) {
        ctx->pc = 0x222058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222054u;
        // 0x222058: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22205Cu;
        goto label_22205c;
    }
    ctx->pc = 0x222054u;
    {
        const bool branch_taken_0x222054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222054u;
        // 0x222058: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222054) {
            ctx->pc = 0x22213Cu;
            goto label_22213c;
        }
    }
    ctx->pc = 0x22205Cu;
label_22205c:
    // 0x22205c: 0x8f8592d8  lw          $a1, -0x6D28($gp)
    ctx->pc = 0x22205cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939352)));
label_222060:
    // 0x222060: 0xc056ff8  jal         func_15BFE0
label_222064:
    if (ctx->pc == 0x222064u) {
        ctx->pc = 0x222064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222060u;
        // 0x222064: 0x24040024  addiu       $a0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        ctx->pc = 0x222068u;
        goto label_222068;
    }
    ctx->pc = 0x222060u;
    SET_GPR_U32(ctx, 31, 0x222068u);
    ctx->pc = 0x222064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222060u;
    // 0x222064: 0x24040024  addiu       $a0, $zero, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BFE0u, 0x222060u, 0x222068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222068u;
label_222068:
    // 0x222068: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
label_22206c:
    if (ctx->pc == 0x22206Cu) {
        ctx->pc = 0x222070u;
        goto label_222070;
    }
    ctx->pc = 0x222068u;
    {
        const bool branch_taken_0x222068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x222068) {
            ctx->pc = 0x22213Cu;
            goto label_22213c;
        }
    }
    ctx->pc = 0x222070u;
label_222070:
    // 0x222070: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x222070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_222074:
    // 0x222074: 0x24030025  addiu       $v1, $zero, 0x25
    ctx->pc = 0x222074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_222078:
    // 0x222078: 0x9484000a  lhu         $a0, 0xA($a0)
    ctx->pc = 0x222078u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
label_22207c:
    // 0x22207c: 0x1483002f  bne         $a0, $v1, . + 4 + (0x2F << 2)
label_222080:
    if (ctx->pc == 0x222080u) {
        ctx->pc = 0x222084u;
        goto label_222084;
    }
    ctx->pc = 0x22207Cu;
    {
        const bool branch_taken_0x22207c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x22207c) {
            ctx->pc = 0x22213Cu;
            goto label_22213c;
        }
    }
    ctx->pc = 0x222084u;
label_222084:
    // 0x222084: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x222084u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_222088:
    // 0x222088: 0x1000002c  b           . + 4 + (0x2C << 2)
label_22208c:
    if (ctx->pc == 0x22208Cu) {
        ctx->pc = 0x22208Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222088u;
        // 0x22208c: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x222090u;
        goto label_222090;
    }
    ctx->pc = 0x222088u;
    {
        const bool branch_taken_0x222088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22208Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222088u;
        // 0x22208c: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222088) {
            ctx->pc = 0x22213Cu;
            goto label_22213c;
        }
    }
    ctx->pc = 0x222090u;
label_222090:
    // 0x222090: 0x8f8592d8  lw          $a1, -0x6D28($gp)
    ctx->pc = 0x222090u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939352)));
label_222094:
    // 0x222094: 0xc056ff8  jal         func_15BFE0
label_222098:
    if (ctx->pc == 0x222098u) {
        ctx->pc = 0x222098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222094u;
        // 0x222098: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22209Cu;
        goto label_22209c;
    }
    ctx->pc = 0x222094u;
    SET_GPR_U32(ctx, 31, 0x22209Cu);
    ctx->pc = 0x222098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222094u;
    // 0x222098: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BFE0u, 0x222094u, 0x22209Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22209Cu;
label_22209c:
    // 0x22209c: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_2220a0:
    if (ctx->pc == 0x2220A0u) {
        ctx->pc = 0x2220A4u;
        goto label_2220a4;
    }
    ctx->pc = 0x22209Cu;
    {
        const bool branch_taken_0x22209c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22209c) {
            ctx->pc = 0x22213Cu;
            goto label_22213c;
        }
    }
    ctx->pc = 0x2220A4u;
label_2220a4:
    // 0x2220a4: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x2220a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2220a8:
    // 0x2220a8: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x2220a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_2220ac:
    // 0x2220ac: 0x9484000a  lhu         $a0, 0xA($a0)
    ctx->pc = 0x2220acu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
label_2220b0:
    // 0x2220b0: 0x14830022  bne         $a0, $v1, . + 4 + (0x22 << 2)
label_2220b4:
    if (ctx->pc == 0x2220B4u) {
        ctx->pc = 0x2220B8u;
        goto label_2220b8;
    }
    ctx->pc = 0x2220B0u;
    {
        const bool branch_taken_0x2220b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2220b0) {
            ctx->pc = 0x22213Cu;
            goto label_22213c;
        }
    }
    ctx->pc = 0x2220B8u;
label_2220b8:
    // 0x2220b8: 0x8f8792d8  lw          $a3, -0x6D28($gp)
    ctx->pc = 0x2220b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939352)));
label_2220bc:
    // 0x2220bc: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x2220bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
label_2220c0:
    // 0x2220c0: 0x3c06002f  lui         $a2, 0x2F
    ctx->pc = 0x2220c0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)47 << 16));
label_2220c4:
    // 0x2220c4: 0x24841300  addiu       $a0, $a0, 0x1300
    ctx->pc = 0x2220c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4864));
label_2220c8:
    // 0x2220c8: 0x24c62570  addiu       $a2, $a2, 0x2570
    ctx->pc = 0x2220c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9584));
label_2220cc:
    // 0x2220cc: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x2220ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_2220d0:
    // 0x2220d0: 0x728c0  sll         $a1, $a3, 3
    ctx->pc = 0x2220d0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_2220d4:
    // 0x2220d4: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x2220d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_2220d8:
    // 0x2220d8: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x2220d8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_2220dc:
    // 0x2220dc: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2220dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_2220e0:
    // 0x2220e0: 0x8c873674  lw          $a3, 0x3674($a0)
    ctx->pc = 0x2220e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 13940)));
label_2220e4:
    // 0x2220e4: 0x8c85366c  lw          $a1, 0x366C($a0)
    ctx->pc = 0x2220e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 13932)));
label_2220e8:
    // 0x2220e8: 0x72200  sll         $a0, $a3, 8
    ctx->pc = 0x2220e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_2220ec:
    // 0x2220ec: 0x873823  subu        $a3, $a0, $a3
    ctx->pc = 0x2220ecu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_2220f0:
    // 0x2220f0: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x2220f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_2220f4:
    // 0x2220f4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2220f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_2220f8:
    // 0x2220f8: 0x728c0  sll         $a1, $a3, 3
    ctx->pc = 0x2220f8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_2220fc:
    // 0x2220fc: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x2220fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_222100:
    // 0x222100: 0x428c0  sll         $a1, $a0, 3
    ctx->pc = 0x222100u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_222104:
    // 0x222104: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x222104u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_222108:
    // 0x222108: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x222108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_22210c:
    // 0x22210c: 0x24840000  addiu       $a0, $a0, 0x0
    ctx->pc = 0x22210cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 0));
label_222110:
    // 0x222110: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x222110u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_222114:
    // 0x222114: 0x90a40022  lbu         $a0, 0x22($a1)
    ctx->pc = 0x222114u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 34)));
label_222118:
    // 0x222118: 0x14830008  bne         $a0, $v1, . + 4 + (0x8 << 2)
label_22211c:
    if (ctx->pc == 0x22211Cu) {
        ctx->pc = 0x222120u;
        goto label_222120;
    }
    ctx->pc = 0x222118u;
    {
        const bool branch_taken_0x222118 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x222118) {
            ctx->pc = 0x22213Cu;
            goto label_22213c;
        }
    }
    ctx->pc = 0x222120u;
label_222120:
    // 0x222120: 0x90a40023  lbu         $a0, 0x23($a1)
    ctx->pc = 0x222120u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 35)));
label_222124:
    // 0x222124: 0x28830009  slti        $v1, $a0, 0x9
    ctx->pc = 0x222124u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)9) ? 1 : 0);
label_222128:
    // 0x222128: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_22212c:
    if (ctx->pc == 0x22212Cu) {
        ctx->pc = 0x22212Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222128u;
        // 0x22212c: 0x2881000c  slti        $at, $a0, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)12) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x222130u;
        goto label_222130;
    }
    ctx->pc = 0x222128u;
    {
        const bool branch_taken_0x222128 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22212Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222128u;
        // 0x22212c: 0x2881000c  slti        $at, $a0, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)12) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x222128) {
            ctx->pc = 0x22213Cu;
            goto label_22213c;
        }
    }
    ctx->pc = 0x222130u;
label_222130:
    // 0x222130: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_222134:
    if (ctx->pc == 0x222134u) {
        ctx->pc = 0x222138u;
        goto label_222138;
    }
    ctx->pc = 0x222130u;
    {
        const bool branch_taken_0x222130 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x222130) {
            ctx->pc = 0x22213Cu;
            goto label_22213c;
        }
    }
    ctx->pc = 0x222138u;
label_222138:
    // 0x222138: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x222138u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22213c:
    // 0x22213c: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_222140:
    if (ctx->pc == 0x222140u) {
        ctx->pc = 0x222144u;
        goto label_222144;
    }
    ctx->pc = 0x22213Cu;
    {
        const bool branch_taken_0x22213c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x22213c) {
            ctx->pc = 0x22216Cu;
            goto label_22216c;
        }
    }
    ctx->pc = 0x222144u;
label_222144:
    // 0x222144: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
label_222148:
    if (ctx->pc == 0x222148u) {
        ctx->pc = 0x222148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222144u;
        // 0x222148: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22214Cu;
        goto label_22214c;
    }
    ctx->pc = 0x222144u;
    {
        const bool branch_taken_0x222144 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x222148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222144u;
        // 0x222148: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222144) {
            ctx->pc = 0x222154u;
            goto label_222154;
        }
    }
    ctx->pc = 0x22214Cu;
label_22214c:
    // 0x22214c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x22214cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_222150:
    // 0x222150: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x222150u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_222154:
    // 0x222154: 0x92660034  lbu         $a2, 0x34($s3)
    ctx->pc = 0x222154u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 52)));
label_222158:
    // 0x222158: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x222158u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22215c:
    // 0x22215c: 0x92670035  lbu         $a3, 0x35($s3)
    ctx->pc = 0x22215cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 53)));
label_222160:
    // 0x222160: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x222160u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_222164:
    // 0x222164: 0xc05d3e4  jal         func_174F90
label_222168:
    if (ctx->pc == 0x222168u) {
        ctx->pc = 0x222168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222164u;
        // 0x222168: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22216Cu;
        goto label_22216c;
    }
    ctx->pc = 0x222164u;
    SET_GPR_U32(ctx, 31, 0x22216Cu);
    ctx->pc = 0x222168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222164u;
    // 0x222168: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174F90u, 0x222164u, 0x22216Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22216Cu;
label_22216c:
    // 0x22216c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x22216cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_222170:
    // 0x222170: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x222170u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_222174:
    // 0x222174: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x222174u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_222178:
    // 0x222178: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x222178u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22217c:
    // 0x22217c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22217cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_222180:
    // 0x222180: 0x3e00008  jr          $ra
label_222184:
    if (ctx->pc == 0x222184u) {
        ctx->pc = 0x222184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222180u;
        // 0x222184: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x222188u;
        goto label_222188;
    }
    ctx->pc = 0x222180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x222184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222180u;
        // 0x222184: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x222180u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x222188u;
label_222188:
    // 0x222188: 0x0  nop
    ctx->pc = 0x222188u;
    // NOP
label_22218c:
    // 0x22218c: 0x0  nop
    ctx->pc = 0x22218cu;
    // NOP
label_222190:
    // 0x222190: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x222190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_222194:
    // 0x222194: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x222194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_222198:
    // 0x222198: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x222198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_22219c:
    // 0x22219c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22219cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2221a0:
    // 0x2221a0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2221a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2221a4:
    // 0x2221a4: 0x8f82863c  lw          $v0, -0x79C4($gp)
    ctx->pc = 0x2221a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936124)));
label_2221a8:
    // 0x2221a8: 0x10400057  beqz        $v0, . + 4 + (0x57 << 2)
label_2221ac:
    if (ctx->pc == 0x2221ACu) {
        ctx->pc = 0x2221ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2221A8u;
        // 0x2221ac: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2221B0u;
        goto label_2221b0;
    }
    ctx->pc = 0x2221A8u;
    {
        const bool branch_taken_0x2221a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2221ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2221A8u;
        // 0x2221ac: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2221a8) {
            ctx->pc = 0x222308u;
            goto label_222308;
        }
    }
    ctx->pc = 0x2221B0u;
label_2221b0:
    // 0x2221b0: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x2221b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_2221b4:
    // 0x2221b4: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x2221b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_2221b8:
    // 0x2221b8: 0x9023490c  lbu         $v1, 0x490C($at)
    ctx->pc = 0x2221b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18700)));
label_2221bc:
    // 0x2221bc: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
label_2221c0:
    if (ctx->pc == 0x2221C0u) {
        ctx->pc = 0x2221C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2221BCu;
        // 0x2221c0: 0x24020042  addiu       $v0, $zero, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2221C4u;
        goto label_2221c4;
    }
    ctx->pc = 0x2221BCu;
    {
        const bool branch_taken_0x2221bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2221C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2221BCu;
        // 0x2221c0: 0x24020042  addiu       $v0, $zero, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2221bc) {
            ctx->pc = 0x2221E4u;
            goto label_2221e4;
        }
    }
    ctx->pc = 0x2221C4u;
label_2221c4:
    // 0x2221c4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2221c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2221c8:
    // 0x2221c8: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2221c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2221cc:
    // 0x2221cc: 0x9463000a  lhu         $v1, 0xA($v1)
    ctx->pc = 0x2221ccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
label_2221d0:
    // 0x2221d0: 0x1462004b  bne         $v1, $v0, . + 4 + (0x4B << 2)
label_2221d4:
    if (ctx->pc == 0x2221D4u) {
        ctx->pc = 0x2221D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2221D0u;
        // 0x2221d4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2221D8u;
        goto label_2221d8;
    }
    ctx->pc = 0x2221D0u;
    {
        const bool branch_taken_0x2221d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2221D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2221D0u;
        // 0x2221d4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2221d0) {
            ctx->pc = 0x222300u;
            goto label_222300;
        }
    }
    ctx->pc = 0x2221D8u;
label_2221d8:
    // 0x2221d8: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2221d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2221dc:
    // 0x2221dc: 0x10000047  b           . + 4 + (0x47 << 2)
label_2221e0:
    if (ctx->pc == 0x2221E0u) {
        ctx->pc = 0x2221E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2221DCu;
        // 0x2221e0: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2221E4u;
        goto label_2221e4;
    }
    ctx->pc = 0x2221DCu;
    {
        const bool branch_taken_0x2221dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2221E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2221DCu;
        // 0x2221e0: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2221dc) {
            ctx->pc = 0x2222FCu;
            goto label_2222fc;
        }
    }
    ctx->pc = 0x2221E4u;
label_2221e4:
    // 0x2221e4: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
label_2221e8:
    if (ctx->pc == 0x2221E8u) {
        ctx->pc = 0x2221ECu;
        goto label_2221ec;
    }
    ctx->pc = 0x2221E4u;
    {
        const bool branch_taken_0x2221e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2221e4) {
            ctx->pc = 0x222224u;
            goto label_222224;
        }
    }
    ctx->pc = 0x2221ECu;
label_2221ec:
    // 0x2221ec: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2221ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2221f0:
    // 0x2221f0: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x2221f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_2221f4:
    // 0x2221f4: 0x9463000a  lhu         $v1, 0xA($v1)
    ctx->pc = 0x2221f4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
label_2221f8:
    // 0x2221f8: 0x14620040  bne         $v1, $v0, . + 4 + (0x40 << 2)
label_2221fc:
    if (ctx->pc == 0x2221FCu) {
        ctx->pc = 0x222200u;
        goto label_222200;
    }
    ctx->pc = 0x2221F8u;
    {
        const bool branch_taken_0x2221f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2221f8) {
            ctx->pc = 0x2222FCu;
            goto label_2222fc;
        }
    }
    ctx->pc = 0x222200u;
label_222200:
    // 0x222200: 0x8f8592d8  lw          $a1, -0x6D28($gp)
    ctx->pc = 0x222200u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939352)));
label_222204:
    // 0x222204: 0xc056ff8  jal         func_15BFE0
label_222208:
    if (ctx->pc == 0x222208u) {
        ctx->pc = 0x222208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222204u;
        // 0x222208: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22220Cu;
        goto label_22220c;
    }
    ctx->pc = 0x222204u;
    SET_GPR_U32(ctx, 31, 0x22220Cu);
    ctx->pc = 0x222208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222204u;
    // 0x222208: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BFE0u, 0x222204u, 0x22220Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22220Cu;
label_22220c:
    // 0x22220c: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
label_222210:
    if (ctx->pc == 0x222210u) {
        ctx->pc = 0x222214u;
        goto label_222214;
    }
    ctx->pc = 0x22220Cu;
    {
        const bool branch_taken_0x22220c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22220c) {
            ctx->pc = 0x2222FCu;
            goto label_2222fc;
        }
    }
    ctx->pc = 0x222214u;
label_222214:
    // 0x222214: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x222214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_222218:
    // 0x222218: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x222218u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22221c:
    // 0x22221c: 0x10000037  b           . + 4 + (0x37 << 2)
label_222220:
    if (ctx->pc == 0x222220u) {
        ctx->pc = 0x222220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22221Cu;
        // 0x222220: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x222224u;
        goto label_222224;
    }
    ctx->pc = 0x22221Cu;
    {
        const bool branch_taken_0x22221c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22221Cu;
        // 0x222220: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22221c) {
            ctx->pc = 0x2222FCu;
            goto label_2222fc;
        }
    }
    ctx->pc = 0x222224u;
label_222224:
    // 0x222224: 0x24020043  addiu       $v0, $zero, 0x43
    ctx->pc = 0x222224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
label_222228:
    // 0x222228: 0x1462001a  bne         $v1, $v0, . + 4 + (0x1A << 2)
label_22222c:
    if (ctx->pc == 0x22222Cu) {
        ctx->pc = 0x22222Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222228u;
        // 0x22222c: 0x24020056  addiu       $v0, $zero, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
        ctx->in_delay_slot = false;
        ctx->pc = 0x222230u;
        goto label_222230;
    }
    ctx->pc = 0x222228u;
    {
        const bool branch_taken_0x222228 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x22222Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222228u;
        // 0x22222c: 0x24020056  addiu       $v0, $zero, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222228) {
            ctx->pc = 0x222294u;
            goto label_222294;
        }
    }
    ctx->pc = 0x222230u;
label_222230:
    // 0x222230: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x222230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_222234:
    // 0x222234: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x222234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_222238:
    // 0x222238: 0x9463000a  lhu         $v1, 0xA($v1)
    ctx->pc = 0x222238u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
label_22223c:
    // 0x22223c: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
label_222240:
    if (ctx->pc == 0x222240u) {
        ctx->pc = 0x222240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22223Cu;
        // 0x222240: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x222244u;
        goto label_222244;
    }
    ctx->pc = 0x22223Cu;
    {
        const bool branch_taken_0x22223c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x222240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22223Cu;
        // 0x222240: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22223c) {
            ctx->pc = 0x222268u;
            goto label_222268;
        }
    }
    ctx->pc = 0x222244u;
label_222244:
    // 0x222244: 0x8f8592d8  lw          $a1, -0x6D28($gp)
    ctx->pc = 0x222244u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939352)));
label_222248:
    // 0x222248: 0xc056ff8  jal         func_15BFE0
label_22224c:
    if (ctx->pc == 0x22224Cu) {
        ctx->pc = 0x22224Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222248u;
        // 0x22224c: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x222250u;
        goto label_222250;
    }
    ctx->pc = 0x222248u;
    SET_GPR_U32(ctx, 31, 0x222250u);
    ctx->pc = 0x22224Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222248u;
    // 0x22224c: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BFE0u, 0x222248u, 0x222250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222250u;
label_222250:
    // 0x222250: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
label_222254:
    if (ctx->pc == 0x222254u) {
        ctx->pc = 0x222258u;
        goto label_222258;
    }
    ctx->pc = 0x222250u;
    {
        const bool branch_taken_0x222250 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x222250) {
            ctx->pc = 0x2222FCu;
            goto label_2222fc;
        }
    }
    ctx->pc = 0x222258u;
label_222258:
    // 0x222258: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x222258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_22225c:
    // 0x22225c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x22225cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_222260:
    // 0x222260: 0x10000026  b           . + 4 + (0x26 << 2)
label_222264:
    if (ctx->pc == 0x222264u) {
        ctx->pc = 0x222264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222260u;
        // 0x222264: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x222268u;
        goto label_222268;
    }
    ctx->pc = 0x222260u;
    {
        const bool branch_taken_0x222260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222260u;
        // 0x222264: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222260) {
            ctx->pc = 0x2222FCu;
            goto label_2222fc;
        }
    }
    ctx->pc = 0x222268u;
label_222268:
    // 0x222268: 0x14620024  bne         $v1, $v0, . + 4 + (0x24 << 2)
label_22226c:
    if (ctx->pc == 0x22226Cu) {
        ctx->pc = 0x222270u;
        goto label_222270;
    }
    ctx->pc = 0x222268u;
    {
        const bool branch_taken_0x222268 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x222268) {
            ctx->pc = 0x2222FCu;
            goto label_2222fc;
        }
    }
    ctx->pc = 0x222270u;
label_222270:
    // 0x222270: 0x8f8592d8  lw          $a1, -0x6D28($gp)
    ctx->pc = 0x222270u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939352)));
label_222274:
    // 0x222274: 0xc056ff8  jal         func_15BFE0
label_222278:
    if (ctx->pc == 0x222278u) {
        ctx->pc = 0x222278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222274u;
        // 0x222278: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22227Cu;
        goto label_22227c;
    }
    ctx->pc = 0x222274u;
    SET_GPR_U32(ctx, 31, 0x22227Cu);
    ctx->pc = 0x222278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222274u;
    // 0x222278: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BFE0u, 0x222274u, 0x22227Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22227Cu;
label_22227c:
    // 0x22227c: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_222280:
    if (ctx->pc == 0x222280u) {
        ctx->pc = 0x222284u;
        goto label_222284;
    }
    ctx->pc = 0x22227Cu;
    {
        const bool branch_taken_0x22227c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22227c) {
            ctx->pc = 0x2222FCu;
            goto label_2222fc;
        }
    }
    ctx->pc = 0x222284u;
label_222284:
    // 0x222284: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x222284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_222288:
    // 0x222288: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x222288u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22228c:
    // 0x22228c: 0x1000001b  b           . + 4 + (0x1B << 2)
label_222290:
    if (ctx->pc == 0x222290u) {
        ctx->pc = 0x222290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22228Cu;
        // 0x222290: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x222294u;
        goto label_222294;
    }
    ctx->pc = 0x22228Cu;
    {
        const bool branch_taken_0x22228c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22228Cu;
        // 0x222290: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22228c) {
            ctx->pc = 0x2222FCu;
            goto label_2222fc;
        }
    }
    ctx->pc = 0x222294u;
label_222294:
    // 0x222294: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
label_222298:
    if (ctx->pc == 0x222298u) {
        ctx->pc = 0x22229Cu;
        goto label_22229c;
    }
    ctx->pc = 0x222294u;
    {
        const bool branch_taken_0x222294 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x222294) {
            ctx->pc = 0x2222D4u;
            goto label_2222d4;
        }
    }
    ctx->pc = 0x22229Cu;
label_22229c:
    // 0x22229c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x22229cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2222a0:
    // 0x2222a0: 0x24020023  addiu       $v0, $zero, 0x23
    ctx->pc = 0x2222a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_2222a4:
    // 0x2222a4: 0x9463000a  lhu         $v1, 0xA($v1)
    ctx->pc = 0x2222a4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
label_2222a8:
    // 0x2222a8: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
label_2222ac:
    if (ctx->pc == 0x2222ACu) {
        ctx->pc = 0x2222B0u;
        goto label_2222b0;
    }
    ctx->pc = 0x2222A8u;
    {
        const bool branch_taken_0x2222a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2222a8) {
            ctx->pc = 0x2222FCu;
            goto label_2222fc;
        }
    }
    ctx->pc = 0x2222B0u;
label_2222b0:
    // 0x2222b0: 0x8f8592d8  lw          $a1, -0x6D28($gp)
    ctx->pc = 0x2222b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939352)));
label_2222b4:
    // 0x2222b4: 0xc056ff8  jal         func_15BFE0
label_2222b8:
    if (ctx->pc == 0x2222B8u) {
        ctx->pc = 0x2222B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2222B4u;
        // 0x2222b8: 0x2404001b  addiu       $a0, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2222BCu;
        goto label_2222bc;
    }
    ctx->pc = 0x2222B4u;
    SET_GPR_U32(ctx, 31, 0x2222BCu);
    ctx->pc = 0x2222B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2222B4u;
    // 0x2222b8: 0x2404001b  addiu       $a0, $zero, 0x1B (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BFE0u, 0x2222B4u, 0x2222BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2222BCu;
label_2222bc:
    // 0x2222bc: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_2222c0:
    if (ctx->pc == 0x2222C0u) {
        ctx->pc = 0x2222C4u;
        goto label_2222c4;
    }
    ctx->pc = 0x2222BCu;
    {
        const bool branch_taken_0x2222bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2222bc) {
            ctx->pc = 0x2222FCu;
            goto label_2222fc;
        }
    }
    ctx->pc = 0x2222C4u;
label_2222c4:
    // 0x2222c4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2222c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2222c8:
    // 0x2222c8: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2222c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2222cc:
    // 0x2222cc: 0x1000000b  b           . + 4 + (0xB << 2)
label_2222d0:
    if (ctx->pc == 0x2222D0u) {
        ctx->pc = 0x2222D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2222CCu;
        // 0x2222d0: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2222D4u;
        goto label_2222d4;
    }
    ctx->pc = 0x2222CCu;
    {
        const bool branch_taken_0x2222cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2222D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2222CCu;
        // 0x2222d0: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2222cc) {
            ctx->pc = 0x2222FCu;
            goto label_2222fc;
        }
    }
    ctx->pc = 0x2222D4u;
label_2222d4:
    // 0x2222d4: 0x2402005f  addiu       $v0, $zero, 0x5F
    ctx->pc = 0x2222d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
label_2222d8:
    // 0x2222d8: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_2222dc:
    if (ctx->pc == 0x2222DCu) {
        ctx->pc = 0x2222E0u;
        goto label_2222e0;
    }
    ctx->pc = 0x2222D8u;
    {
        const bool branch_taken_0x2222d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2222d8) {
            ctx->pc = 0x2222FCu;
            goto label_2222fc;
        }
    }
    ctx->pc = 0x2222E0u;
label_2222e0:
    // 0x2222e0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2222e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2222e4:
    // 0x2222e4: 0x240200f8  addiu       $v0, $zero, 0xF8
    ctx->pc = 0x2222e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 248));
label_2222e8:
    // 0x2222e8: 0x9463000a  lhu         $v1, 0xA($v1)
    ctx->pc = 0x2222e8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
label_2222ec:
    // 0x2222ec: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_2222f0:
    if (ctx->pc == 0x2222F0u) {
        ctx->pc = 0x2222F4u;
        goto label_2222f4;
    }
    ctx->pc = 0x2222ECu;
    {
        const bool branch_taken_0x2222ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2222ec) {
            ctx->pc = 0x2222FCu;
            goto label_2222fc;
        }
    }
    ctx->pc = 0x2222F4u;
label_2222f4:
    // 0x2222f4: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2222f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2222f8:
    // 0x2222f8: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x2222f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
label_2222fc:
    // 0x2222fc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2222fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_222300:
    // 0x222300: 0x10000085  b           . + 4 + (0x85 << 2)
label_222304:
    if (ctx->pc == 0x222304u) {
        ctx->pc = 0x222304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222300u;
        // 0x222304: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x222308u;
        goto label_222308;
    }
    ctx->pc = 0x222300u;
    {
        const bool branch_taken_0x222300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222300u;
        // 0x222304: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222300) {
            ctx->pc = 0x222518u;
            goto label_222518;
        }
    }
    ctx->pc = 0x222308u;
label_222308:
    // 0x222308: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x222308u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_22230c:
    // 0x22230c: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x22230cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_222310:
    // 0x222310: 0x9023490d  lbu         $v1, 0x490D($at)
    ctx->pc = 0x222310u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18701)));
label_222314:
    // 0x222314: 0x10620075  beq         $v1, $v0, . + 4 + (0x75 << 2)
label_222318:
    if (ctx->pc == 0x222318u) {
        ctx->pc = 0x222318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222314u;
        // 0x222318: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22231Cu;
        goto label_22231c;
    }
    ctx->pc = 0x222314u;
    {
        const bool branch_taken_0x222314 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x222318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222314u;
        // 0x222318: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222314) {
            ctx->pc = 0x2224ECu;
            goto label_2224ec;
        }
    }
    ctx->pc = 0x22231Cu;
label_22231c:
    // 0x22231c: 0x10620073  beq         $v1, $v0, . + 4 + (0x73 << 2)
label_222320:
    if (ctx->pc == 0x222320u) {
        ctx->pc = 0x222324u;
        goto label_222324;
    }
    ctx->pc = 0x22231Cu;
    {
        const bool branch_taken_0x22231c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x22231c) {
            ctx->pc = 0x2224ECu;
            goto label_2224ec;
        }
    }
    ctx->pc = 0x222324u;
label_222324:
    // 0x222324: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x222324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_222328:
    // 0x222328: 0x10620068  beq         $v1, $v0, . + 4 + (0x68 << 2)
label_22232c:
    if (ctx->pc == 0x22232Cu) {
        ctx->pc = 0x22232Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222328u;
        // 0x22232c: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x222330u;
        goto label_222330;
    }
    ctx->pc = 0x222328u;
    {
        const bool branch_taken_0x222328 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x22232Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222328u;
        // 0x22232c: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222328) {
            ctx->pc = 0x2224CCu;
            goto label_2224cc;
        }
    }
    ctx->pc = 0x222330u;
label_222330:
    // 0x222330: 0x1062005e  beq         $v1, $v0, . + 4 + (0x5E << 2)
label_222334:
    if (ctx->pc == 0x222334u) {
        ctx->pc = 0x222334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222330u;
        // 0x222334: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x222338u;
        goto label_222338;
    }
    ctx->pc = 0x222330u;
    {
        const bool branch_taken_0x222330 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x222334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222330u;
        // 0x222334: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222330) {
            ctx->pc = 0x2224ACu;
            goto label_2224ac;
        }
    }
    ctx->pc = 0x222338u;
label_222338:
    // 0x222338: 0x10650053  beq         $v1, $a1, . + 4 + (0x53 << 2)
label_22233c:
    if (ctx->pc == 0x22233Cu) {
        ctx->pc = 0x22233Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222338u;
        // 0x22233c: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x222340u;
        goto label_222340;
    }
    ctx->pc = 0x222338u;
    {
        const bool branch_taken_0x222338 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x22233Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222338u;
        // 0x22233c: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222338) {
            ctx->pc = 0x222488u;
            goto label_222488;
        }
    }
    ctx->pc = 0x222340u;
label_222340:
    // 0x222340: 0x10620042  beq         $v1, $v0, . + 4 + (0x42 << 2)
label_222344:
    if (ctx->pc == 0x222344u) {
        ctx->pc = 0x222348u;
        goto label_222348;
    }
    ctx->pc = 0x222340u;
    {
        const bool branch_taken_0x222340 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x222340) {
            ctx->pc = 0x22244Cu;
            goto label_22244c;
        }
    }
    ctx->pc = 0x222348u;
label_222348:
    // 0x222348: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x222348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_22234c:
    // 0x22234c: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
label_222350:
    if (ctx->pc == 0x222350u) {
        ctx->pc = 0x222350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22234Cu;
        // 0x222350: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x222354u;
        goto label_222354;
    }
    ctx->pc = 0x22234Cu;
    {
        const bool branch_taken_0x22234c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x222350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22234Cu;
        // 0x222350: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22234c) {
            ctx->pc = 0x2223C4u;
            goto label_2223c4;
        }
    }
    ctx->pc = 0x222354u;
label_222354:
    // 0x222354: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
label_222358:
    if (ctx->pc == 0x222358u) {
        ctx->pc = 0x22235Cu;
        goto label_22235c;
    }
    ctx->pc = 0x222354u;
    {
        const bool branch_taken_0x222354 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x222354) {
            ctx->pc = 0x222390u;
            goto label_222390;
        }
    }
    ctx->pc = 0x22235Cu;
label_22235c:
    // 0x22235c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x22235cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_222360:
    // 0x222360: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_222364:
    if (ctx->pc == 0x222364u) {
        ctx->pc = 0x222368u;
        goto label_222368;
    }
    ctx->pc = 0x222360u;
    {
        const bool branch_taken_0x222360 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x222360) {
            ctx->pc = 0x222370u;
            goto label_222370;
        }
    }
    ctx->pc = 0x222368u;
label_222368:
    // 0x222368: 0x1000006a  b           . + 4 + (0x6A << 2)
label_22236c:
    if (ctx->pc == 0x22236Cu) {
        ctx->pc = 0x22236Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222368u;
        // 0x22236c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x222370u;
        goto label_222370;
    }
    ctx->pc = 0x222368u;
    {
        const bool branch_taken_0x222368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22236Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222368u;
        // 0x22236c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222368) {
            ctx->pc = 0x222514u;
            goto label_222514;
        }
    }
    ctx->pc = 0x222370u;
label_222370:
    // 0x222370: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x222370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_222374:
    // 0x222374: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x222374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_222378:
    // 0x222378: 0x9463000a  lhu         $v1, 0xA($v1)
    ctx->pc = 0x222378u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
label_22237c:
    // 0x22237c: 0x14620064  bne         $v1, $v0, . + 4 + (0x64 << 2)
label_222380:
    if (ctx->pc == 0x222380u) {
        ctx->pc = 0x222384u;
        goto label_222384;
    }
    ctx->pc = 0x22237Cu;
    {
        const bool branch_taken_0x22237c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x22237c) {
            ctx->pc = 0x222510u;
            goto label_222510;
        }
    }
    ctx->pc = 0x222384u;
label_222384:
    // 0x222384: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x222384u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_222388:
    // 0x222388: 0x10000061  b           . + 4 + (0x61 << 2)
label_22238c:
    if (ctx->pc == 0x22238Cu) {
        ctx->pc = 0x22238Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222388u;
        // 0x22238c: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x222390u;
        goto label_222390;
    }
    ctx->pc = 0x222388u;
    {
        const bool branch_taken_0x222388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22238Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222388u;
        // 0x22238c: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222388) {
            ctx->pc = 0x222510u;
            goto label_222510;
        }
    }
    ctx->pc = 0x222390u;
label_222390:
    // 0x222390: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x222390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_222394:
    // 0x222394: 0x24020023  addiu       $v0, $zero, 0x23
    ctx->pc = 0x222394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_222398:
    // 0x222398: 0x9463000a  lhu         $v1, 0xA($v1)
    ctx->pc = 0x222398u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
label_22239c:
    // 0x22239c: 0x1462005c  bne         $v1, $v0, . + 4 + (0x5C << 2)
label_2223a0:
    if (ctx->pc == 0x2223A0u) {
        ctx->pc = 0x2223A4u;
        goto label_2223a4;
    }
    ctx->pc = 0x22239Cu;
    {
        const bool branch_taken_0x22239c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x22239c) {
            ctx->pc = 0x222510u;
            goto label_222510;
        }
    }
    ctx->pc = 0x2223A4u;
label_2223a4:
    // 0x2223a4: 0xc084b7c  jal         func_212DF0
label_2223a8:
    if (ctx->pc == 0x2223A8u) {
        ctx->pc = 0x2223A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2223A4u;
        // 0x2223a8: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2223ACu;
        goto label_2223ac;
    }
    ctx->pc = 0x2223A4u;
    SET_GPR_U32(ctx, 31, 0x2223ACu);
    ctx->pc = 0x2223A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2223A4u;
    // 0x2223a8: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212DF0u;
    { ctx->pc = 0x212df0; return; }
    ctx->pc = 0x2223ACu;
label_2223ac:
    // 0x2223ac: 0x10400058  beqz        $v0, . + 4 + (0x58 << 2)
label_2223b0:
    if (ctx->pc == 0x2223B0u) {
        ctx->pc = 0x2223B4u;
        goto label_2223b4;
    }
    ctx->pc = 0x2223ACu;
    {
        const bool branch_taken_0x2223ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2223ac) {
            ctx->pc = 0x222510u;
            goto label_222510;
        }
    }
    ctx->pc = 0x2223B4u;
label_2223b4:
    // 0x2223b4: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2223b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2223b8:
    // 0x2223b8: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2223b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2223bc:
    // 0x2223bc: 0x10000054  b           . + 4 + (0x54 << 2)
label_2223c0:
    if (ctx->pc == 0x2223C0u) {
        ctx->pc = 0x2223C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2223BCu;
        // 0x2223c0: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2223C4u;
        goto label_2223c4;
    }
    ctx->pc = 0x2223BCu;
    {
        const bool branch_taken_0x2223bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2223C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2223BCu;
        // 0x2223c0: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2223bc) {
            ctx->pc = 0x222510u;
            goto label_222510;
        }
    }
    ctx->pc = 0x2223C4u;
label_2223c4:
    // 0x2223c4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2223c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2223c8:
    // 0x2223c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2223c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2223cc:
    // 0x2223cc: 0x9463000a  lhu         $v1, 0xA($v1)
    ctx->pc = 0x2223ccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
label_2223d0:
    // 0x2223d0: 0x1462004f  bne         $v1, $v0, . + 4 + (0x4F << 2)
label_2223d4:
    if (ctx->pc == 0x2223D4u) {
        ctx->pc = 0x2223D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2223D0u;
        // 0x2223d4: 0x3c01002f  lui         $at, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2223D8u;
        goto label_2223d8;
    }
    ctx->pc = 0x2223D0u;
    {
        const bool branch_taken_0x2223d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2223D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2223D0u;
        // 0x2223d4: 0x3c01002f  lui         $at, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2223d0) {
            ctx->pc = 0x222510u;
            goto label_222510;
        }
    }
    ctx->pc = 0x2223D8u;
label_2223d8:
    // 0x2223d8: 0x3c04002f  lui         $a0, 0x2F
    ctx->pc = 0x2223d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
label_2223dc:
    // 0x2223dc: 0x8c232570  lw          $v1, 0x2570($at)
    ctx->pc = 0x2223dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9584)));
label_2223e0:
    // 0x2223e0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2223e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2223e4:
    // 0x2223e4: 0x9463000a  lhu         $v1, 0xA($v1)
    ctx->pc = 0x2223e4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
label_2223e8:
    // 0x2223e8: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
label_2223ec:
    if (ctx->pc == 0x2223ECu) {
        ctx->pc = 0x2223ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2223E8u;
        // 0x2223ec: 0x24842570  addiu       $a0, $a0, 0x2570 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9584));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2223F0u;
        goto label_2223f0;
    }
    ctx->pc = 0x2223E8u;
    {
        const bool branch_taken_0x2223e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2223ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2223E8u;
        // 0x2223ec: 0x24842570  addiu       $a0, $a0, 0x2570 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9584));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2223e8) {
            ctx->pc = 0x222410u;
            goto label_222410;
        }
    }
    ctx->pc = 0x2223F0u;
label_2223f0:
    // 0x2223f0: 0xc0448bc  jal         func_1122F0
label_2223f4:
    if (ctx->pc == 0x2223F4u) {
        ctx->pc = 0x2223F8u;
        goto label_2223f8;
    }
    ctx->pc = 0x2223F0u;
    SET_GPR_U32(ctx, 31, 0x2223F8u);
    ctx->pc = 0x1122F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1122F0u, 0x2223F0u, 0x2223F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2223F8u;
label_2223f8:
    // 0x2223f8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2223fc:
    if (ctx->pc == 0x2223FCu) {
        ctx->pc = 0x222400u;
        goto label_222400;
    }
    ctx->pc = 0x2223F8u;
    {
        const bool branch_taken_0x2223f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2223f8) {
            ctx->pc = 0x222410u;
            goto label_222410;
        }
    }
    ctx->pc = 0x222400u;
label_222400:
    // 0x222400: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x222400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_222404:
    // 0x222404: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x222404u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_222408:
    // 0x222408: 0x10000041  b           . + 4 + (0x41 << 2)
label_22240c:
    if (ctx->pc == 0x22240Cu) {
        ctx->pc = 0x22240Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222408u;
        // 0x22240c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x222410u;
        goto label_222410;
    }
    ctx->pc = 0x222408u;
    {
        const bool branch_taken_0x222408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22240Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222408u;
        // 0x22240c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222408) {
            ctx->pc = 0x222510u;
            goto label_222510;
        }
    }
    ctx->pc = 0x222410u;
label_222410:
    // 0x222410: 0x3c04002f  lui         $a0, 0x2F
    ctx->pc = 0x222410u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
label_222414:
    // 0x222414: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x222414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_222418:
    // 0x222418: 0x24846d28  addiu       $a0, $a0, 0x6D28
    ctx->pc = 0x222418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27944));
label_22241c:
    // 0x22241c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x22241cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_222420:
    // 0x222420: 0x9463000a  lhu         $v1, 0xA($v1)
    ctx->pc = 0x222420u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
label_222424:
    // 0x222424: 0x1462003a  bne         $v1, $v0, . + 4 + (0x3A << 2)
label_222428:
    if (ctx->pc == 0x222428u) {
        ctx->pc = 0x22242Cu;
        goto label_22242c;
    }
    ctx->pc = 0x222424u;
    {
        const bool branch_taken_0x222424 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x222424) {
            ctx->pc = 0x222510u;
            goto label_222510;
        }
    }
    ctx->pc = 0x22242Cu;
label_22242c:
    // 0x22242c: 0xc0448bc  jal         func_1122F0
label_222430:
    if (ctx->pc == 0x222430u) {
        ctx->pc = 0x222434u;
        goto label_222434;
    }
    ctx->pc = 0x22242Cu;
    SET_GPR_U32(ctx, 31, 0x222434u);
    ctx->pc = 0x1122F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1122F0u, 0x22242Cu, 0x222434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222434u;
label_222434:
    // 0x222434: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
label_222438:
    if (ctx->pc == 0x222438u) {
        ctx->pc = 0x22243Cu;
        goto label_22243c;
    }
    ctx->pc = 0x222434u;
    {
        const bool branch_taken_0x222434 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x222434) {
            ctx->pc = 0x222510u;
            goto label_222510;
        }
    }
    ctx->pc = 0x22243Cu;
label_22243c:
    // 0x22243c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x22243cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_222440:
    // 0x222440: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x222440u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_222444:
    // 0x222444: 0x10000032  b           . + 4 + (0x32 << 2)
label_222448:
    if (ctx->pc == 0x222448u) {
        ctx->pc = 0x222448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222444u;
        // 0x222448: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22244Cu;
        goto label_22244c;
    }
    ctx->pc = 0x222444u;
    {
        const bool branch_taken_0x222444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222444u;
        // 0x222448: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222444) {
            ctx->pc = 0x222510u;
            goto label_222510;
        }
    }
    ctx->pc = 0x22244Cu;
label_22244c:
    // 0x22244c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x22244cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_222450:
    // 0x222450: 0x24020022  addiu       $v0, $zero, 0x22
    ctx->pc = 0x222450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_222454:
    // 0x222454: 0x9463000a  lhu         $v1, 0xA($v1)
    ctx->pc = 0x222454u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
label_222458:
    // 0x222458: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_22245c:
    if (ctx->pc == 0x22245Cu) {
        ctx->pc = 0x22245Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222458u;
        // 0x22245c: 0x240200c2  addiu       $v0, $zero, 0xC2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 194));
        ctx->in_delay_slot = false;
        ctx->pc = 0x222460u;
        goto label_222460;
    }
    ctx->pc = 0x222458u;
    {
        const bool branch_taken_0x222458 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x22245Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222458u;
        // 0x22245c: 0x240200c2  addiu       $v0, $zero, 0xC2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 194));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222458) {
            ctx->pc = 0x222470u;
            goto label_222470;
        }
    }
    ctx->pc = 0x222460u;
label_222460:
    // 0x222460: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x222460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_222464:
    // 0x222464: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x222464u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_222468:
    // 0x222468: 0x10000029  b           . + 4 + (0x29 << 2)
label_22246c:
    if (ctx->pc == 0x22246Cu) {
        ctx->pc = 0x22246Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222468u;
        // 0x22246c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x222470u;
        goto label_222470;
    }
    ctx->pc = 0x222468u;
    {
        const bool branch_taken_0x222468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22246Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222468u;
        // 0x22246c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222468) {
            ctx->pc = 0x222510u;
            goto label_222510;
        }
    }
    ctx->pc = 0x222470u;
label_222470:
    // 0x222470: 0x14620027  bne         $v1, $v0, . + 4 + (0x27 << 2)
label_222474:
    if (ctx->pc == 0x222474u) {
        ctx->pc = 0x222478u;
        goto label_222478;
    }
    ctx->pc = 0x222470u;
    {
        const bool branch_taken_0x222470 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x222470) {
            ctx->pc = 0x222510u;
            goto label_222510;
        }
    }
    ctx->pc = 0x222478u;
label_222478:
    // 0x222478: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x222478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_22247c:
    // 0x22247c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x22247cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_222480:
    // 0x222480: 0x10000023  b           . + 4 + (0x23 << 2)
label_222484:
    if (ctx->pc == 0x222484u) {
        ctx->pc = 0x222484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222480u;
        // 0x222484: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x222488u;
        goto label_222488;
    }
    ctx->pc = 0x222480u;
    {
        const bool branch_taken_0x222480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222480u;
        // 0x222484: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222480) {
            ctx->pc = 0x222510u;
            goto label_222510;
        }
    }
    ctx->pc = 0x222488u;
label_222488:
    // 0x222488: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x222488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_22248c:
    // 0x22248c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22248cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_222490:
    // 0x222490: 0x9463000a  lhu         $v1, 0xA($v1)
    ctx->pc = 0x222490u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
label_222494:
    // 0x222494: 0x1462001e  bne         $v1, $v0, . + 4 + (0x1E << 2)
label_222498:
    if (ctx->pc == 0x222498u) {
        ctx->pc = 0x22249Cu;
        goto label_22249c;
    }
    ctx->pc = 0x222494u;
    {
        const bool branch_taken_0x222494 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x222494) {
            ctx->pc = 0x222510u;
            goto label_222510;
        }
    }
    ctx->pc = 0x22249Cu;
label_22249c:
    // 0x22249c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22249cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2224a0:
    // 0x2224a0: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2224a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2224a4:
    // 0x2224a4: 0x1000001a  b           . + 4 + (0x1A << 2)
label_2224a8:
    if (ctx->pc == 0x2224A8u) {
        ctx->pc = 0x2224A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2224A4u;
        // 0x2224a8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2224ACu;
        goto label_2224ac;
    }
    ctx->pc = 0x2224A4u;
    {
        const bool branch_taken_0x2224a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2224A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2224A4u;
        // 0x2224a8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2224a4) {
            ctx->pc = 0x222510u;
            goto label_222510;
        }
    }
    ctx->pc = 0x2224ACu;
label_2224ac:
    // 0x2224ac: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2224acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2224b0:
    // 0x2224b0: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x2224b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_2224b4:
    // 0x2224b4: 0x9463000a  lhu         $v1, 0xA($v1)
    ctx->pc = 0x2224b4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
label_2224b8:
    // 0x2224b8: 0x14620015  bne         $v1, $v0, . + 4 + (0x15 << 2)
label_2224bc:
    if (ctx->pc == 0x2224BCu) {
        ctx->pc = 0x2224C0u;
        goto label_2224c0;
    }
    ctx->pc = 0x2224B8u;
    {
        const bool branch_taken_0x2224b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2224b8) {
            ctx->pc = 0x222510u;
            goto label_222510;
        }
    }
    ctx->pc = 0x2224C0u;
label_2224c0:
    // 0x2224c0: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2224c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2224c4:
    // 0x2224c4: 0x10000012  b           . + 4 + (0x12 << 2)
label_2224c8:
    if (ctx->pc == 0x2224C8u) {
        ctx->pc = 0x2224C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2224C4u;
        // 0x2224c8: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2224CCu;
        goto label_2224cc;
    }
    ctx->pc = 0x2224C4u;
    {
        const bool branch_taken_0x2224c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2224C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2224C4u;
        // 0x2224c8: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2224c4) {
            ctx->pc = 0x222510u;
            goto label_222510;
        }
    }
    ctx->pc = 0x2224CCu;
label_2224cc:
    // 0x2224cc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2224ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2224d0:
    // 0x2224d0: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2224d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2224d4:
    // 0x2224d4: 0x9463000a  lhu         $v1, 0xA($v1)
    ctx->pc = 0x2224d4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
label_2224d8:
    // 0x2224d8: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
label_2224dc:
    if (ctx->pc == 0x2224DCu) {
        ctx->pc = 0x2224DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2224D8u;
        // 0x2224dc: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2224E0u;
        goto label_2224e0;
    }
    ctx->pc = 0x2224D8u;
    {
        const bool branch_taken_0x2224d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2224DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2224D8u;
        // 0x2224dc: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2224d8) {
            ctx->pc = 0x222510u;
            goto label_222510;
        }
    }
    ctx->pc = 0x2224E0u;
label_2224e0:
    // 0x2224e0: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2224e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2224e4:
    // 0x2224e4: 0x1000000a  b           . + 4 + (0xA << 2)
label_2224e8:
    if (ctx->pc == 0x2224E8u) {
        ctx->pc = 0x2224E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2224E4u;
        // 0x2224e8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2224ECu;
        goto label_2224ec;
    }
    ctx->pc = 0x2224E4u;
    {
        const bool branch_taken_0x2224e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2224E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2224E4u;
        // 0x2224e8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2224e4) {
            ctx->pc = 0x222510u;
            goto label_222510;
        }
    }
    ctx->pc = 0x2224ECu;
label_2224ec:
    // 0x2224ec: 0x90820034  lbu         $v0, 0x34($a0)
    ctx->pc = 0x2224ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 52)));
label_2224f0:
    // 0x2224f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2224f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2224f4:
    // 0x2224f4: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
label_2224f8:
    if (ctx->pc == 0x2224F8u) {
        ctx->pc = 0x2224FCu;
        goto label_2224fc;
    }
    ctx->pc = 0x2224F4u;
    {
        const bool branch_taken_0x2224f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2224f4) {
            ctx->pc = 0x222510u;
            goto label_222510;
        }
    }
    ctx->pc = 0x2224FCu;
label_2224fc:
    // 0x2224fc: 0x90820035  lbu         $v0, 0x35($a0)
    ctx->pc = 0x2224fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 53)));
label_222500:
    // 0x222500: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_222504:
    if (ctx->pc == 0x222504u) {
        ctx->pc = 0x222508u;
        goto label_222508;
    }
    ctx->pc = 0x222500u;
    {
        const bool branch_taken_0x222500 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x222500) {
            ctx->pc = 0x222510u;
            goto label_222510;
        }
    }
    ctx->pc = 0x222508u;
label_222508:
    // 0x222508: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x222508u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_22250c:
    // 0x22250c: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x22250cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_222510:
    // 0x222510: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x222510u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_222514:
    // 0x222514: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x222514u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_222518:
    // 0x222518: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x222518u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22251c:
    // 0x22251c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22251cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_222520:
    // 0x222520: 0x3e00008  jr          $ra
label_222524:
    if (ctx->pc == 0x222524u) {
        ctx->pc = 0x222524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222520u;
        // 0x222524: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x222528u;
        goto label_222528;
    }
    ctx->pc = 0x222520u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x222524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222520u;
        // 0x222524: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x222520u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x222528u;
label_222528:
    // 0x222528: 0x0  nop
    ctx->pc = 0x222528u;
    // NOP
label_22252c:
    // 0x22252c: 0x0  nop
    ctx->pc = 0x22252cu;
    // NOP
label_222530:
    // 0x222530: 0x90830034  lbu         $v1, 0x34($a0)
    ctx->pc = 0x222530u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 52)));
label_222534:
    // 0x222534: 0x10600049  beqz        $v1, . + 4 + (0x49 << 2)
label_222538:
    if (ctx->pc == 0x222538u) {
        ctx->pc = 0x222538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222534u;
        // 0x222538: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22253Cu;
        goto label_22253c;
    }
    ctx->pc = 0x222534u;
    {
        const bool branch_taken_0x222534 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x222538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222534u;
        // 0x222538: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222534) {
            ctx->pc = 0x22265Cu;
            { ctx->pc = 0x22265c; return; }
        }
    }
    ctx->pc = 0x22253Cu;
label_22253c:
    // 0x22253c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x22253cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_222540:
    // 0x222540: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x222540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_222544:
    // 0x222544: 0x84254af4  lh          $a1, 0x4AF4($at)
    ctx->pc = 0x222544u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19188)));
label_222548:
    // 0x222548: 0x14a30044  bne         $a1, $v1, . + 4 + (0x44 << 2)
label_22254c:
    if (ctx->pc == 0x22254Cu) {
        ctx->pc = 0x222550u;
        { ctx->pc = 0x222550; return; }
    }
    ctx->pc = 0x222548u;
    {
        const bool branch_taken_0x222548 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x222548) {
            ctx->pc = 0x22265Cu;
            { ctx->pc = 0x22265c; return; }
        }
    }
    ctx->pc = 0x222550u;
    ctx->pc = 0x222550u;
    return;
}

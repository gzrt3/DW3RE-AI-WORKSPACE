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


void FUN_0017faa0_part497(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x271da0u: goto label_271da0;
        case 0x271da4u: goto label_271da4;
        case 0x271da8u: goto label_271da8;
        case 0x271dacu: goto label_271dac;
        case 0x271db0u: goto label_271db0;
        case 0x271db4u: goto label_271db4;
        case 0x271db8u: goto label_271db8;
        case 0x271dbcu: goto label_271dbc;
        case 0x271dc0u: goto label_271dc0;
        case 0x271dc4u: goto label_271dc4;
        case 0x271dc8u: goto label_271dc8;
        case 0x271dccu: goto label_271dcc;
        case 0x271dd0u: goto label_271dd0;
        case 0x271dd4u: goto label_271dd4;
        case 0x271dd8u: goto label_271dd8;
        case 0x271ddcu: goto label_271ddc;
        case 0x271de0u: goto label_271de0;
        case 0x271de4u: goto label_271de4;
        case 0x271de8u: goto label_271de8;
        case 0x271decu: goto label_271dec;
        case 0x271df0u: goto label_271df0;
        case 0x271df4u: goto label_271df4;
        case 0x271df8u: goto label_271df8;
        case 0x271dfcu: goto label_271dfc;
        case 0x271e00u: goto label_271e00;
        case 0x271e04u: goto label_271e04;
        case 0x271e08u: goto label_271e08;
        case 0x271e0cu: goto label_271e0c;
        case 0x271e10u: goto label_271e10;
        case 0x271e14u: goto label_271e14;
        case 0x271e18u: goto label_271e18;
        case 0x271e1cu: goto label_271e1c;
        case 0x271e20u: goto label_271e20;
        case 0x271e24u: goto label_271e24;
        case 0x271e28u: goto label_271e28;
        case 0x271e2cu: goto label_271e2c;
        case 0x271e30u: goto label_271e30;
        case 0x271e34u: goto label_271e34;
        case 0x271e38u: goto label_271e38;
        case 0x271e3cu: goto label_271e3c;
        case 0x271e40u: goto label_271e40;
        case 0x271e44u: goto label_271e44;
        case 0x271e48u: goto label_271e48;
        case 0x271e4cu: goto label_271e4c;
        case 0x271e50u: goto label_271e50;
        case 0x271e54u: goto label_271e54;
        case 0x271e58u: goto label_271e58;
        case 0x271e5cu: goto label_271e5c;
        case 0x271e60u: goto label_271e60;
        case 0x271e64u: goto label_271e64;
        case 0x271e68u: goto label_271e68;
        case 0x271e6cu: goto label_271e6c;
        case 0x271e70u: goto label_271e70;
        case 0x271e74u: goto label_271e74;
        case 0x271e78u: goto label_271e78;
        case 0x271e7cu: goto label_271e7c;
        case 0x271e80u: goto label_271e80;
        case 0x271e84u: goto label_271e84;
        case 0x271e88u: goto label_271e88;
        case 0x271e8cu: goto label_271e8c;
        case 0x271e90u: goto label_271e90;
        case 0x271e94u: goto label_271e94;
        case 0x271e98u: goto label_271e98;
        case 0x271e9cu: goto label_271e9c;
        case 0x271ea0u: goto label_271ea0;
        case 0x271ea4u: goto label_271ea4;
        case 0x271ea8u: goto label_271ea8;
        case 0x271eacu: goto label_271eac;
        case 0x271eb0u: goto label_271eb0;
        case 0x271eb4u: goto label_271eb4;
        case 0x271eb8u: goto label_271eb8;
        case 0x271ebcu: goto label_271ebc;
        case 0x271ec0u: goto label_271ec0;
        case 0x271ec4u: goto label_271ec4;
        case 0x271ec8u: goto label_271ec8;
        case 0x271eccu: goto label_271ecc;
        case 0x271ed0u: goto label_271ed0;
        case 0x271ed4u: goto label_271ed4;
        case 0x271ed8u: goto label_271ed8;
        case 0x271edcu: goto label_271edc;
        case 0x271ee0u: goto label_271ee0;
        case 0x271ee4u: goto label_271ee4;
        case 0x271ee8u: goto label_271ee8;
        case 0x271eecu: goto label_271eec;
        case 0x271ef0u: goto label_271ef0;
        case 0x271ef4u: goto label_271ef4;
        case 0x271ef8u: goto label_271ef8;
        case 0x271efcu: goto label_271efc;
        case 0x271f00u: goto label_271f00;
        case 0x271f04u: goto label_271f04;
        case 0x271f08u: goto label_271f08;
        case 0x271f0cu: goto label_271f0c;
        case 0x271f10u: goto label_271f10;
        case 0x271f14u: goto label_271f14;
        case 0x271f18u: goto label_271f18;
        case 0x271f1cu: goto label_271f1c;
        case 0x271f20u: goto label_271f20;
        case 0x271f24u: goto label_271f24;
        case 0x271f28u: goto label_271f28;
        case 0x271f2cu: goto label_271f2c;
        case 0x271f30u: goto label_271f30;
        case 0x271f34u: goto label_271f34;
        case 0x271f38u: goto label_271f38;
        case 0x271f3cu: goto label_271f3c;
        case 0x271f40u: goto label_271f40;
        case 0x271f44u: goto label_271f44;
        case 0x271f48u: goto label_271f48;
        case 0x271f4cu: goto label_271f4c;
        case 0x271f50u: goto label_271f50;
        case 0x271f54u: goto label_271f54;
        case 0x271f58u: goto label_271f58;
        case 0x271f5cu: goto label_271f5c;
        case 0x271f60u: goto label_271f60;
        case 0x271f64u: goto label_271f64;
        case 0x271f68u: goto label_271f68;
        case 0x271f6cu: goto label_271f6c;
        case 0x271f70u: goto label_271f70;
        case 0x271f74u: goto label_271f74;
        case 0x271f78u: goto label_271f78;
        case 0x271f7cu: goto label_271f7c;
        case 0x271f80u: goto label_271f80;
        case 0x271f84u: goto label_271f84;
        case 0x271f88u: goto label_271f88;
        case 0x271f8cu: goto label_271f8c;
        case 0x271f90u: goto label_271f90;
        case 0x271f94u: goto label_271f94;
        case 0x271f98u: goto label_271f98;
        case 0x271f9cu: goto label_271f9c;
        case 0x271fa0u: goto label_271fa0;
        case 0x271fa4u: goto label_271fa4;
        case 0x271fa8u: goto label_271fa8;
        case 0x271facu: goto label_271fac;
        case 0x271fb0u: goto label_271fb0;
        case 0x271fb4u: goto label_271fb4;
        case 0x271fb8u: goto label_271fb8;
        case 0x271fbcu: goto label_271fbc;
        case 0x271fc0u: goto label_271fc0;
        case 0x271fc4u: goto label_271fc4;
        case 0x271fc8u: goto label_271fc8;
        case 0x271fccu: goto label_271fcc;
        case 0x271fd0u: goto label_271fd0;
        case 0x271fd4u: goto label_271fd4;
        case 0x271fd8u: goto label_271fd8;
        case 0x271fdcu: goto label_271fdc;
        case 0x271fe0u: goto label_271fe0;
        case 0x271fe4u: goto label_271fe4;
        case 0x271fe8u: goto label_271fe8;
        case 0x271fecu: goto label_271fec;
        case 0x271ff0u: goto label_271ff0;
        case 0x271ff4u: goto label_271ff4;
        case 0x271ff8u: goto label_271ff8;
        case 0x271ffcu: goto label_271ffc;
        case 0x272000u: goto label_272000;
        case 0x272004u: goto label_272004;
        case 0x272008u: goto label_272008;
        case 0x27200cu: goto label_27200c;
        case 0x272010u: goto label_272010;
        case 0x272014u: goto label_272014;
        case 0x272018u: goto label_272018;
        case 0x27201cu: goto label_27201c;
        case 0x272020u: goto label_272020;
        case 0x272024u: goto label_272024;
        case 0x272028u: goto label_272028;
        case 0x27202cu: goto label_27202c;
        case 0x272030u: goto label_272030;
        case 0x272034u: goto label_272034;
        case 0x272038u: goto label_272038;
        case 0x27203cu: goto label_27203c;
        case 0x272040u: goto label_272040;
        case 0x272044u: goto label_272044;
        case 0x272048u: goto label_272048;
        case 0x27204cu: goto label_27204c;
        case 0x272050u: goto label_272050;
        case 0x272054u: goto label_272054;
        case 0x272058u: goto label_272058;
        case 0x27205cu: goto label_27205c;
        case 0x272060u: goto label_272060;
        case 0x272064u: goto label_272064;
        case 0x272068u: goto label_272068;
        case 0x27206cu: goto label_27206c;
        case 0x272070u: goto label_272070;
        case 0x272074u: goto label_272074;
        case 0x272078u: goto label_272078;
        case 0x27207cu: goto label_27207c;
        case 0x272080u: goto label_272080;
        case 0x272084u: goto label_272084;
        case 0x272088u: goto label_272088;
        case 0x27208cu: goto label_27208c;
        case 0x272090u: goto label_272090;
        case 0x272094u: goto label_272094;
        case 0x272098u: goto label_272098;
        case 0x27209cu: goto label_27209c;
        case 0x2720a0u: goto label_2720a0;
        case 0x2720a4u: goto label_2720a4;
        case 0x2720a8u: goto label_2720a8;
        case 0x2720acu: goto label_2720ac;
        case 0x2720b0u: goto label_2720b0;
        case 0x2720b4u: goto label_2720b4;
        case 0x2720b8u: goto label_2720b8;
        case 0x2720bcu: goto label_2720bc;
        case 0x2720c0u: goto label_2720c0;
        case 0x2720c4u: goto label_2720c4;
        case 0x2720c8u: goto label_2720c8;
        case 0x2720ccu: goto label_2720cc;
        case 0x2720d0u: goto label_2720d0;
        case 0x2720d4u: goto label_2720d4;
        case 0x2720d8u: goto label_2720d8;
        case 0x2720dcu: goto label_2720dc;
        case 0x2720e0u: goto label_2720e0;
        case 0x2720e4u: goto label_2720e4;
        case 0x2720e8u: goto label_2720e8;
        case 0x2720ecu: goto label_2720ec;
        case 0x2720f0u: goto label_2720f0;
        case 0x2720f4u: goto label_2720f4;
        case 0x2720f8u: goto label_2720f8;
        case 0x2720fcu: goto label_2720fc;
        case 0x272100u: goto label_272100;
        case 0x272104u: goto label_272104;
        case 0x272108u: goto label_272108;
        case 0x27210cu: goto label_27210c;
        case 0x272110u: goto label_272110;
        case 0x272114u: goto label_272114;
        case 0x272118u: goto label_272118;
        case 0x27211cu: goto label_27211c;
        case 0x272120u: goto label_272120;
        case 0x272124u: goto label_272124;
        case 0x272128u: goto label_272128;
        case 0x27212cu: goto label_27212c;
        case 0x272130u: goto label_272130;
        case 0x272134u: goto label_272134;
        case 0x272138u: goto label_272138;
        case 0x27213cu: goto label_27213c;
        case 0x272140u: goto label_272140;
        case 0x272144u: goto label_272144;
        case 0x272148u: goto label_272148;
        case 0x27214cu: goto label_27214c;
        case 0x272150u: goto label_272150;
        case 0x272154u: goto label_272154;
        case 0x272158u: goto label_272158;
        case 0x27215cu: goto label_27215c;
        case 0x272160u: goto label_272160;
        case 0x272164u: goto label_272164;
        case 0x272168u: goto label_272168;
        case 0x27216cu: goto label_27216c;
        case 0x272170u: goto label_272170;
        case 0x272174u: goto label_272174;
        case 0x272178u: goto label_272178;
        case 0x27217cu: goto label_27217c;
        case 0x272180u: goto label_272180;
        case 0x272184u: goto label_272184;
        case 0x272188u: goto label_272188;
        case 0x27218cu: goto label_27218c;
        case 0x272190u: goto label_272190;
        case 0x272194u: goto label_272194;
        case 0x272198u: goto label_272198;
        case 0x27219cu: goto label_27219c;
        case 0x2721a0u: goto label_2721a0;
        case 0x2721a4u: goto label_2721a4;
        case 0x2721a8u: goto label_2721a8;
        case 0x2721acu: goto label_2721ac;
        case 0x2721b0u: goto label_2721b0;
        case 0x2721b4u: goto label_2721b4;
        case 0x2721b8u: goto label_2721b8;
        case 0x2721bcu: goto label_2721bc;
        case 0x2721c0u: goto label_2721c0;
        case 0x2721c4u: goto label_2721c4;
        case 0x2721c8u: goto label_2721c8;
        case 0x2721ccu: goto label_2721cc;
        case 0x2721d0u: goto label_2721d0;
        case 0x2721d4u: goto label_2721d4;
        case 0x2721d8u: goto label_2721d8;
        case 0x2721dcu: goto label_2721dc;
        case 0x2721e0u: goto label_2721e0;
        case 0x2721e4u: goto label_2721e4;
        case 0x2721e8u: goto label_2721e8;
        case 0x2721ecu: goto label_2721ec;
        case 0x2721f0u: goto label_2721f0;
        case 0x2721f4u: goto label_2721f4;
        case 0x2721f8u: goto label_2721f8;
        case 0x2721fcu: goto label_2721fc;
        case 0x272200u: goto label_272200;
        case 0x272204u: goto label_272204;
        case 0x272208u: goto label_272208;
        case 0x27220cu: goto label_27220c;
        case 0x272210u: goto label_272210;
        case 0x272214u: goto label_272214;
        case 0x272218u: goto label_272218;
        case 0x27221cu: goto label_27221c;
        case 0x272220u: goto label_272220;
        case 0x272224u: goto label_272224;
        case 0x272228u: goto label_272228;
        case 0x27222cu: goto label_27222c;
        case 0x272230u: goto label_272230;
        case 0x272234u: goto label_272234;
        case 0x272238u: goto label_272238;
        case 0x27223cu: goto label_27223c;
        case 0x272240u: goto label_272240;
        case 0x272244u: goto label_272244;
        case 0x272248u: goto label_272248;
        case 0x27224cu: goto label_27224c;
        case 0x272250u: goto label_272250;
        case 0x272254u: goto label_272254;
        case 0x272258u: goto label_272258;
        case 0x27225cu: goto label_27225c;
        case 0x272260u: goto label_272260;
        case 0x272264u: goto label_272264;
        case 0x272268u: goto label_272268;
        case 0x27226cu: goto label_27226c;
        case 0x272270u: goto label_272270;
        case 0x272274u: goto label_272274;
        case 0x272278u: goto label_272278;
        case 0x27227cu: goto label_27227c;
        case 0x272280u: goto label_272280;
        case 0x272284u: goto label_272284;
        case 0x272288u: goto label_272288;
        case 0x27228cu: goto label_27228c;
        case 0x272290u: goto label_272290;
        case 0x272294u: goto label_272294;
        case 0x272298u: goto label_272298;
        case 0x27229cu: goto label_27229c;
        case 0x2722a0u: goto label_2722a0;
        case 0x2722a4u: goto label_2722a4;
        case 0x2722a8u: goto label_2722a8;
        case 0x2722acu: goto label_2722ac;
        case 0x2722b0u: goto label_2722b0;
        case 0x2722b4u: goto label_2722b4;
        case 0x2722b8u: goto label_2722b8;
        case 0x2722bcu: goto label_2722bc;
        case 0x2722c0u: goto label_2722c0;
        case 0x2722c4u: goto label_2722c4;
        case 0x2722c8u: goto label_2722c8;
        case 0x2722ccu: goto label_2722cc;
        case 0x2722d0u: goto label_2722d0;
        case 0x2722d4u: goto label_2722d4;
        case 0x2722d8u: goto label_2722d8;
        case 0x2722dcu: goto label_2722dc;
        case 0x2722e0u: goto label_2722e0;
        case 0x2722e4u: goto label_2722e4;
        case 0x2722e8u: goto label_2722e8;
        case 0x2722ecu: goto label_2722ec;
        case 0x2722f0u: goto label_2722f0;
        case 0x2722f4u: goto label_2722f4;
        case 0x2722f8u: goto label_2722f8;
        case 0x2722fcu: goto label_2722fc;
        case 0x272300u: goto label_272300;
        case 0x272304u: goto label_272304;
        case 0x272308u: goto label_272308;
        case 0x27230cu: goto label_27230c;
        case 0x272310u: goto label_272310;
        case 0x272314u: goto label_272314;
        case 0x272318u: goto label_272318;
        case 0x27231cu: goto label_27231c;
        case 0x272320u: goto label_272320;
        case 0x272324u: goto label_272324;
        case 0x272328u: goto label_272328;
        case 0x27232cu: goto label_27232c;
        case 0x272330u: goto label_272330;
        case 0x272334u: goto label_272334;
        case 0x272338u: goto label_272338;
        case 0x27233cu: goto label_27233c;
        case 0x272340u: goto label_272340;
        case 0x272344u: goto label_272344;
        case 0x272348u: goto label_272348;
        case 0x27234cu: goto label_27234c;
        case 0x272350u: goto label_272350;
        case 0x272354u: goto label_272354;
        case 0x272358u: goto label_272358;
        case 0x27235cu: goto label_27235c;
        case 0x272360u: goto label_272360;
        case 0x272364u: goto label_272364;
        case 0x272368u: goto label_272368;
        case 0x27236cu: goto label_27236c;
        case 0x272370u: goto label_272370;
        case 0x272374u: goto label_272374;
        case 0x272378u: goto label_272378;
        case 0x27237cu: goto label_27237c;
        case 0x272380u: goto label_272380;
        case 0x272384u: goto label_272384;
        case 0x272388u: goto label_272388;
        case 0x27238cu: goto label_27238c;
        case 0x272390u: goto label_272390;
        case 0x272394u: goto label_272394;
        case 0x272398u: goto label_272398;
        case 0x27239cu: goto label_27239c;
        case 0x2723a0u: goto label_2723a0;
        case 0x2723a4u: goto label_2723a4;
        case 0x2723a8u: goto label_2723a8;
        case 0x2723acu: goto label_2723ac;
        case 0x2723b0u: goto label_2723b0;
        case 0x2723b4u: goto label_2723b4;
        case 0x2723b8u: goto label_2723b8;
        case 0x2723bcu: goto label_2723bc;
        case 0x2723c0u: goto label_2723c0;
        case 0x2723c4u: goto label_2723c4;
        case 0x2723c8u: goto label_2723c8;
        case 0x2723ccu: goto label_2723cc;
        case 0x2723d0u: goto label_2723d0;
        case 0x2723d4u: goto label_2723d4;
        case 0x2723d8u: goto label_2723d8;
        case 0x2723dcu: goto label_2723dc;
        case 0x2723e0u: goto label_2723e0;
        case 0x2723e4u: goto label_2723e4;
        case 0x2723e8u: goto label_2723e8;
        case 0x2723ecu: goto label_2723ec;
        case 0x2723f0u: goto label_2723f0;
        case 0x2723f4u: goto label_2723f4;
        case 0x2723f8u: goto label_2723f8;
        case 0x2723fcu: goto label_2723fc;
        case 0x272400u: goto label_272400;
        case 0x272404u: goto label_272404;
        case 0x272408u: goto label_272408;
        case 0x27240cu: goto label_27240c;
        case 0x272410u: goto label_272410;
        case 0x272414u: goto label_272414;
        case 0x272418u: goto label_272418;
        case 0x27241cu: goto label_27241c;
        case 0x272420u: goto label_272420;
        case 0x272424u: goto label_272424;
        case 0x272428u: goto label_272428;
        case 0x27242cu: goto label_27242c;
        case 0x272430u: goto label_272430;
        case 0x272434u: goto label_272434;
        case 0x272438u: goto label_272438;
        case 0x27243cu: goto label_27243c;
        case 0x272440u: goto label_272440;
        case 0x272444u: goto label_272444;
        case 0x272448u: goto label_272448;
        case 0x27244cu: goto label_27244c;
        case 0x272450u: goto label_272450;
        case 0x272454u: goto label_272454;
        case 0x272458u: goto label_272458;
        case 0x27245cu: goto label_27245c;
        case 0x272460u: goto label_272460;
        case 0x272464u: goto label_272464;
        case 0x272468u: goto label_272468;
        case 0x27246cu: goto label_27246c;
        case 0x272470u: goto label_272470;
        case 0x272474u: goto label_272474;
        case 0x272478u: goto label_272478;
        case 0x27247cu: goto label_27247c;
        case 0x272480u: goto label_272480;
        case 0x272484u: goto label_272484;
        case 0x272488u: goto label_272488;
        case 0x27248cu: goto label_27248c;
        case 0x272490u: goto label_272490;
        case 0x272494u: goto label_272494;
        case 0x272498u: goto label_272498;
        case 0x27249cu: goto label_27249c;
        case 0x2724a0u: goto label_2724a0;
        case 0x2724a4u: goto label_2724a4;
        case 0x2724a8u: goto label_2724a8;
        case 0x2724acu: goto label_2724ac;
        case 0x2724b0u: goto label_2724b0;
        case 0x2724b4u: goto label_2724b4;
        case 0x2724b8u: goto label_2724b8;
        case 0x2724bcu: goto label_2724bc;
        case 0x2724c0u: goto label_2724c0;
        case 0x2724c4u: goto label_2724c4;
        case 0x2724c8u: goto label_2724c8;
        case 0x2724ccu: goto label_2724cc;
        case 0x2724d0u: goto label_2724d0;
        case 0x2724d4u: goto label_2724d4;
        case 0x2724d8u: goto label_2724d8;
        case 0x2724dcu: goto label_2724dc;
        case 0x2724e0u: goto label_2724e0;
        case 0x2724e4u: goto label_2724e4;
        case 0x2724e8u: goto label_2724e8;
        case 0x2724ecu: goto label_2724ec;
        case 0x2724f0u: goto label_2724f0;
        case 0x2724f4u: goto label_2724f4;
        case 0x2724f8u: goto label_2724f8;
        case 0x2724fcu: goto label_2724fc;
        case 0x272500u: goto label_272500;
        case 0x272504u: goto label_272504;
        case 0x272508u: goto label_272508;
        case 0x27250cu: goto label_27250c;
        case 0x272510u: goto label_272510;
        case 0x272514u: goto label_272514;
        case 0x272518u: goto label_272518;
        case 0x27251cu: goto label_27251c;
        case 0x272520u: goto label_272520;
        case 0x272524u: goto label_272524;
        case 0x272528u: goto label_272528;
        case 0x27252cu: goto label_27252c;
        case 0x272530u: goto label_272530;
        case 0x272534u: goto label_272534;
        case 0x272538u: goto label_272538;
        case 0x27253cu: goto label_27253c;
        case 0x272540u: goto label_272540;
        case 0x272544u: goto label_272544;
        case 0x272548u: goto label_272548;
        case 0x27254cu: goto label_27254c;
        case 0x272550u: goto label_272550;
        case 0x272554u: goto label_272554;
        case 0x272558u: goto label_272558;
        case 0x27255cu: goto label_27255c;
        case 0x272560u: goto label_272560;
        case 0x272564u: goto label_272564;
        case 0x272568u: goto label_272568;
        case 0x27256cu: goto label_27256c;
        default: return;
    }

label_271da0:
    // 0x271da0: 0x84f8  dsll        $s0, $zero, 19
    ctx->pc = 0x271da0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) << 19);
label_271da4:
    // 0x271da4: 0xc430  tge         $zero, $zero, 784
    ctx->pc = 0x271da4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_271da8:
    // 0x271da8: 0x0  nop
    ctx->pc = 0x271da8u;
    // NOP
label_271dac:
    // 0x271dac: 0x0  nop
    ctx->pc = 0x271dacu;
    // NOP
label_271db0:
    // 0x271db0: 0x8511  .word       0x00008511                   # mthi        $zero # 00008500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271db0u;
    ctx->hi = GPR_U64(ctx, 0);
label_271db4:
    // 0x271db4: 0xa5f0  tge         $zero, $zero, 663
    ctx->pc = 0x271db4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_271db8:
    // 0x271db8: 0x0  nop
    ctx->pc = 0x271db8u;
    // NOP
label_271dbc:
    // 0x271dbc: 0x0  nop
    ctx->pc = 0x271dbcu;
    // NOP
label_271dc0:
    // 0x271dc0: 0x8526  .word       0x00008526                   # xor         $s0, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271dc0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_271dc4:
    // 0x271dc4: 0x9ff0  tge         $zero, $zero, 639
    ctx->pc = 0x271dc4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_271dc8:
    // 0x271dc8: 0x0  nop
    ctx->pc = 0x271dc8u;
    // NOP
label_271dcc:
    // 0x271dcc: 0x0  nop
    ctx->pc = 0x271dccu;
    // NOP
label_271dd0:
    // 0x271dd0: 0x853a  dsrl        $s0, $zero, 20
    ctx->pc = 0x271dd0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) >> 20);
label_271dd4:
    // 0x271dd4: 0xc4c0  sll         $t8, $zero, 19
    ctx->pc = 0x271dd4u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_271dd8:
    // 0x271dd8: 0x0  nop
    ctx->pc = 0x271dd8u;
    // NOP
label_271ddc:
    // 0x271ddc: 0x0  nop
    ctx->pc = 0x271ddcu;
    // NOP
label_271de0:
    // 0x271de0: 0x8553  .word       0x00008553                   # mtlo        $zero # 00008540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271de0u;
    ctx->lo = GPR_U64(ctx, 0);
label_271de4:
    // 0x271de4: 0x4830  tge         $zero, $zero, 288
    ctx->pc = 0x271de4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_271de8:
    // 0x271de8: 0x0  nop
    ctx->pc = 0x271de8u;
    // NOP
label_271dec:
    // 0x271dec: 0x0  nop
    ctx->pc = 0x271decu;
    // NOP
label_271df0:
    // 0x271df0: 0x855d  .word       0x0000855D                   # dmultu      $zero, $zero # 00008540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271df0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x271DF0 raw=0x0000855D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_271df4:
    // 0x271df4: 0x7430  tge         $zero, $zero, 464
    ctx->pc = 0x271df4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_271df8:
    // 0x271df8: 0x0  nop
    ctx->pc = 0x271df8u;
    // NOP
label_271dfc:
    // 0x271dfc: 0x0  nop
    ctx->pc = 0x271dfcu;
    // NOP
label_271e00:
    // 0x271e00: 0x856c  .word       0x0000856C                   # dadd        $s0, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271e00u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 16, r); }
label_271e04:
    // 0x271e04: 0xaec0  sll         $s5, $zero, 27
    ctx->pc = 0x271e04u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_271e08:
    // 0x271e08: 0x0  nop
    ctx->pc = 0x271e08u;
    // NOP
label_271e0c:
    // 0x271e0c: 0x0  nop
    ctx->pc = 0x271e0cu;
    // NOP
label_271e10:
    // 0x271e10: 0x8582  srl         $s0, $zero, 22
    ctx->pc = 0x271e10u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 0), 22));
label_271e14:
    // 0x271e14: 0x13b50  .word       0x00013B50                   # mfhi        $a3 # 00010340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271e14u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_271e18:
    // 0x271e18: 0x0  nop
    ctx->pc = 0x271e18u;
    // NOP
label_271e1c:
    // 0x271e1c: 0x0  nop
    ctx->pc = 0x271e1cu;
    // NOP
label_271e20:
    // 0x271e20: 0x85aa  .word       0x000085AA                   # slt         $s0, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271e20u;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_271e24:
    // 0x271e24: 0x27a0  .word       0x000027A0                   # add         $a0, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271e24u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
label_271e28:
    // 0x271e28: 0x0  nop
    ctx->pc = 0x271e28u;
    // NOP
label_271e2c:
    // 0x271e2c: 0x0  nop
    ctx->pc = 0x271e2cu;
    // NOP
label_271e30:
    // 0x271e30: 0x85af  .word       0x000085AF                   # dsubu       $s0, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271e30u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_271e34:
    // 0x271e34: 0xb470  tge         $zero, $zero, 721
    ctx->pc = 0x271e34u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_271e38:
    // 0x271e38: 0x0  nop
    ctx->pc = 0x271e38u;
    // NOP
label_271e3c:
    // 0x271e3c: 0x0  nop
    ctx->pc = 0x271e3cu;
    // NOP
label_271e40:
    // 0x271e40: 0x85c6  .word       0x000085C6                   # srlv        $s0, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271e40u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_271e44:
    // 0x271e44: 0x8be0  .word       0x00008BE0                   # add         $s1, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271e44u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_271e48:
    // 0x271e48: 0x0  nop
    ctx->pc = 0x271e48u;
    // NOP
label_271e4c:
    // 0x271e4c: 0x0  nop
    ctx->pc = 0x271e4cu;
    // NOP
label_271e50:
    // 0x271e50: 0x85d8  .word       0x000085D8                   # mult        $s0, $zero, $zero # 000005C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x271e50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
label_271e54:
    // 0x271e54: 0x9680  sll         $s2, $zero, 26
    ctx->pc = 0x271e54u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
label_271e58:
    // 0x271e58: 0x0  nop
    ctx->pc = 0x271e58u;
    // NOP
label_271e5c:
    // 0x271e5c: 0x0  nop
    ctx->pc = 0x271e5cu;
    // NOP
label_271e60:
    // 0x271e60: 0x85eb  .word       0x000085EB                   # sltu        $s0, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271e60u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_271e64:
    // 0x271e64: 0x4e80  sll         $t1, $zero, 26
    ctx->pc = 0x271e64u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
label_271e68:
    // 0x271e68: 0x0  nop
    ctx->pc = 0x271e68u;
    // NOP
label_271e6c:
    // 0x271e6c: 0x0  nop
    ctx->pc = 0x271e6cu;
    // NOP
label_271e70:
    // 0x271e70: 0x85f5  .word       0x000085F5                   # INVALID     $zero, $zero, -0x7A0B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271e70u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x271E70 raw=0x000085F5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_271e74:
    // 0x271e74: 0xe160  .word       0x0000E160                   # add         $gp, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271e74u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 28, (int32_t)result);     } }
label_271e78:
    // 0x271e78: 0x0  nop
    ctx->pc = 0x271e78u;
    // NOP
label_271e7c:
    // 0x271e7c: 0x0  nop
    ctx->pc = 0x271e7cu;
    // NOP
label_271e80:
    // 0x271e80: 0x8612  .word       0x00008612                   # mflo        $s0 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271e80u;
    SET_GPR_U64(ctx, 16, ctx->lo);
label_271e84:
    // 0x271e84: 0xe590  .word       0x0000E590                   # mfhi        $gp # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271e84u;
    SET_GPR_U64(ctx, 28, ctx->hi);
label_271e88:
    // 0x271e88: 0x0  nop
    ctx->pc = 0x271e88u;
    // NOP
label_271e8c:
    // 0x271e8c: 0x0  nop
    ctx->pc = 0x271e8cu;
    // NOP
label_271e90:
    // 0x271e90: 0x862f  .word       0x0000862F                   # dsubu       $s0, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271e90u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_271e94:
    // 0x271e94: 0xe960  .word       0x0000E960                   # add         $sp, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271e94u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 29, (int32_t)result);     } }
label_271e98:
    // 0x271e98: 0x0  nop
    ctx->pc = 0x271e98u;
    // NOP
label_271e9c:
    // 0x271e9c: 0x0  nop
    ctx->pc = 0x271e9cu;
    // NOP
label_271ea0:
    // 0x271ea0: 0x864d  break       0, 537
    ctx->pc = 0x271ea0u;
    runtime->handleBreak(rdram, ctx);
label_271ea4:
    // 0x271ea4: 0xa1e0  .word       0x0000A1E0                   # add         $s4, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271ea4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_271ea8:
    // 0x271ea8: 0x0  nop
    ctx->pc = 0x271ea8u;
    // NOP
label_271eac:
    // 0x271eac: 0x0  nop
    ctx->pc = 0x271eacu;
    // NOP
label_271eb0:
    // 0x271eb0: 0x8662  .word       0x00008662                   # neg         $s0, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271eb0u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 16, (int32_t)tmp); }
label_271eb4:
    // 0x271eb4: 0xc2c0  sll         $t8, $zero, 11
    ctx->pc = 0x271eb4u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_271eb8:
    // 0x271eb8: 0x0  nop
    ctx->pc = 0x271eb8u;
    // NOP
label_271ebc:
    // 0x271ebc: 0x0  nop
    ctx->pc = 0x271ebcu;
    // NOP
label_271ec0:
    // 0x271ec0: 0x867b  dsra        $s0, $zero, 25
    ctx->pc = 0x271ec0u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 0) >> 25);
label_271ec4:
    // 0x271ec4: 0x5d90  .word       0x00005D90                   # mfhi        $t3 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271ec4u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_271ec8:
    // 0x271ec8: 0x0  nop
    ctx->pc = 0x271ec8u;
    // NOP
label_271ecc:
    // 0x271ecc: 0x0  nop
    ctx->pc = 0x271eccu;
    // NOP
label_271ed0:
    // 0x271ed0: 0x8687  .word       0x00008687                   # srav        $s0, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271ed0u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_271ed4:
    // 0x271ed4: 0x9ec0  sll         $s3, $zero, 27
    ctx->pc = 0x271ed4u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_271ed8:
    // 0x271ed8: 0x0  nop
    ctx->pc = 0x271ed8u;
    // NOP
label_271edc:
    // 0x271edc: 0x0  nop
    ctx->pc = 0x271edcu;
    // NOP
label_271ee0:
    // 0x271ee0: 0x869b  .word       0x0000869B                   # divu        $s0, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271ee0u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_271ee4:
    // 0x271ee4: 0x5ba0  .word       0x00005BA0                   # add         $t3, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271ee4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_271ee8:
    // 0x271ee8: 0x0  nop
    ctx->pc = 0x271ee8u;
    // NOP
label_271eec:
    // 0x271eec: 0x0  nop
    ctx->pc = 0x271eecu;
    // NOP
label_271ef0:
    // 0x271ef0: 0x86a7  .word       0x000086A7                   # not         $s0, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271ef0u;
    SET_GPR_U64(ctx, 16, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_271ef4:
    // 0x271ef4: 0xc6a0  .word       0x0000C6A0                   # add         $t8, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271ef4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
label_271ef8:
    // 0x271ef8: 0x0  nop
    ctx->pc = 0x271ef8u;
    // NOP
label_271efc:
    // 0x271efc: 0x0  nop
    ctx->pc = 0x271efcu;
    // NOP
label_271f00:
    // 0x271f00: 0x86c0  sll         $s0, $zero, 27
    ctx->pc = 0x271f00u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_271f04:
    // 0x271f04: 0x7700  sll         $t6, $zero, 28
    ctx->pc = 0x271f04u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_271f08:
    // 0x271f08: 0x0  nop
    ctx->pc = 0x271f08u;
    // NOP
label_271f0c:
    // 0x271f0c: 0x0  nop
    ctx->pc = 0x271f0cu;
    // NOP
label_271f10:
    // 0x271f10: 0x86cf  .word       0x000086CF                   # sync.p # 00008000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271f10u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_271f14:
    // 0x271f14: 0x9520  .word       0x00009520                   # add         $s2, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271f14u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_271f18:
    // 0x271f18: 0x0  nop
    ctx->pc = 0x271f18u;
    // NOP
label_271f1c:
    // 0x271f1c: 0x0  nop
    ctx->pc = 0x271f1cu;
    // NOP
label_271f20:
    // 0x271f20: 0x86e2  .word       0x000086E2                   # neg         $s0, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271f20u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 16, (int32_t)tmp); }
label_271f24:
    // 0x271f24: 0xab30  tge         $zero, $zero, 684
    ctx->pc = 0x271f24u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_271f28:
    // 0x271f28: 0x0  nop
    ctx->pc = 0x271f28u;
    // NOP
label_271f2c:
    // 0x271f2c: 0x0  nop
    ctx->pc = 0x271f2cu;
    // NOP
label_271f30:
    // 0x271f30: 0x86f8  dsll        $s0, $zero, 27
    ctx->pc = 0x271f30u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) << 27);
label_271f34:
    // 0x271f34: 0xe9e0  .word       0x0000E9E0                   # add         $sp, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271f34u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 29, (int32_t)result);     } }
label_271f38:
    // 0x271f38: 0x0  nop
    ctx->pc = 0x271f38u;
    // NOP
label_271f3c:
    // 0x271f3c: 0x0  nop
    ctx->pc = 0x271f3cu;
    // NOP
label_271f40:
    // 0x271f40: 0x8716  .word       0x00008716                   # dsrlv       $s0, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271f40u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_271f44:
    // 0x271f44: 0xdb20  .word       0x0000DB20                   # add         $k1, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271f44u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 27, (int32_t)result);     } }
label_271f48:
    // 0x271f48: 0x0  nop
    ctx->pc = 0x271f48u;
    // NOP
label_271f4c:
    // 0x271f4c: 0x0  nop
    ctx->pc = 0x271f4cu;
    // NOP
label_271f50:
    // 0x271f50: 0x8732  tlt         $zero, $zero, 540
    ctx->pc = 0x271f50u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_271f54:
    // 0x271f54: 0xb290  .word       0x0000B290                   # mfhi        $s6 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271f54u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_271f58:
    // 0x271f58: 0x0  nop
    ctx->pc = 0x271f58u;
    // NOP
label_271f5c:
    // 0x271f5c: 0x0  nop
    ctx->pc = 0x271f5cu;
    // NOP
label_271f60:
    // 0x271f60: 0x8749  .word       0x00008749                   # jalr        $s0, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
label_271f64:
    if (ctx->pc == 0x271F64u) {
        ctx->pc = 0x271F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271F60u;
        // 0x271f64: 0x85e0  .word       0x000085E0                   # add         $s0, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x271F68u;
        goto label_271f68;
    }
    ctx->pc = 0x271F60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 16, 0x271F68u);
        ctx->pc = 0x271F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271F60u;
        // 0x271f64: 0x85e0  .word       0x000085E0                   # add         $s0, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x271F60u, 0x271F68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x271F68u;
label_271f68:
    // 0x271f68: 0x0  nop
    ctx->pc = 0x271f68u;
    // NOP
label_271f6c:
    // 0x271f6c: 0x0  nop
    ctx->pc = 0x271f6cu;
    // NOP
label_271f70:
    // 0x271f70: 0x875a  .word       0x0000875A                   # div         $s0, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271f70u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_271f74:
    // 0x271f74: 0x74c0  sll         $t6, $zero, 19
    ctx->pc = 0x271f74u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_271f78:
    // 0x271f78: 0x0  nop
    ctx->pc = 0x271f78u;
    // NOP
label_271f7c:
    // 0x271f7c: 0x0  nop
    ctx->pc = 0x271f7cu;
    // NOP
label_271f80:
    // 0x271f80: 0x8769  .word       0x00008769                   # mtsa        $zero # 00008740 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x271f80u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_271f84:
    // 0x271f84: 0x3a70  tge         $zero, $zero, 233
    ctx->pc = 0x271f84u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_271f88:
    // 0x271f88: 0x0  nop
    ctx->pc = 0x271f88u;
    // NOP
label_271f8c:
    // 0x271f8c: 0x0  nop
    ctx->pc = 0x271f8cu;
    // NOP
label_271f90:
    // 0x271f90: 0x8771  tgeu        $zero, $zero, 541
    ctx->pc = 0x271f90u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_271f94:
    // 0x271f94: 0x6640  sll         $t4, $zero, 25
    ctx->pc = 0x271f94u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 25));
label_271f98:
    // 0x271f98: 0x0  nop
    ctx->pc = 0x271f98u;
    // NOP
label_271f9c:
    // 0x271f9c: 0x0  nop
    ctx->pc = 0x271f9cu;
    // NOP
label_271fa0:
    // 0x271fa0: 0x877e  dsrl32      $s0, $zero, 29
    ctx->pc = 0x271fa0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) >> (32 + 29));
label_271fa4:
    // 0x271fa4: 0x43a0  .word       0x000043A0                   # add         $t0, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271fa4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_271fa8:
    // 0x271fa8: 0x0  nop
    ctx->pc = 0x271fa8u;
    // NOP
label_271fac:
    // 0x271fac: 0x0  nop
    ctx->pc = 0x271facu;
    // NOP
label_271fb0:
    // 0x271fb0: 0x8787  .word       0x00008787                   # srav        $s0, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271fb0u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_271fb4:
    // 0x271fb4: 0x6bf0  tge         $zero, $zero, 431
    ctx->pc = 0x271fb4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_271fb8:
    // 0x271fb8: 0x0  nop
    ctx->pc = 0x271fb8u;
    // NOP
label_271fbc:
    // 0x271fbc: 0x0  nop
    ctx->pc = 0x271fbcu;
    // NOP
label_271fc0:
    // 0x271fc0: 0x8795  .word       0x00008795                   # INVALID     $zero, $zero, -0x786B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271fc0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x271FC0 raw=0x00008795"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_271fc4:
    // 0x271fc4: 0x6550  .word       0x00006550                   # mfhi        $t4 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271fc4u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_271fc8:
    // 0x271fc8: 0x0  nop
    ctx->pc = 0x271fc8u;
    // NOP
label_271fcc:
    // 0x271fcc: 0x0  nop
    ctx->pc = 0x271fccu;
    // NOP
label_271fd0:
    // 0x271fd0: 0x87a2  .word       0x000087A2                   # neg         $s0, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271fd0u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 16, (int32_t)tmp); }
label_271fd4:
    // 0x271fd4: 0x4d00  sll         $t1, $zero, 20
    ctx->pc = 0x271fd4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
label_271fd8:
    // 0x271fd8: 0x0  nop
    ctx->pc = 0x271fd8u;
    // NOP
label_271fdc:
    // 0x271fdc: 0x0  nop
    ctx->pc = 0x271fdcu;
    // NOP
label_271fe0:
    // 0x271fe0: 0x87ac  .word       0x000087AC                   # dadd        $s0, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271fe0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 16, r); }
label_271fe4:
    // 0x271fe4: 0x6df0  tge         $zero, $zero, 439
    ctx->pc = 0x271fe4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_271fe8:
    // 0x271fe8: 0x0  nop
    ctx->pc = 0x271fe8u;
    // NOP
label_271fec:
    // 0x271fec: 0x0  nop
    ctx->pc = 0x271fecu;
    // NOP
label_271ff0:
    // 0x271ff0: 0x87ba  dsrl        $s0, $zero, 30
    ctx->pc = 0x271ff0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) >> 30);
label_271ff4:
    // 0x271ff4: 0x43f0  tge         $zero, $zero, 271
    ctx->pc = 0x271ff4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_271ff8:
    // 0x271ff8: 0x0  nop
    ctx->pc = 0x271ff8u;
    // NOP
label_271ffc:
    // 0x271ffc: 0x0  nop
    ctx->pc = 0x271ffcu;
    // NOP
label_272000:
    // 0x272000: 0x87c3  sra         $s0, $zero, 31
    ctx->pc = 0x272000u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 0), 31));
label_272004:
    // 0x272004: 0x8020  add         $s0, $zero, $zero
    ctx->pc = 0x272004u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_272008:
    // 0x272008: 0x0  nop
    ctx->pc = 0x272008u;
    // NOP
label_27200c:
    // 0x27200c: 0x0  nop
    ctx->pc = 0x27200cu;
    // NOP
label_272010:
    // 0x272010: 0x87d4  .word       0x000087D4                   # dsllv       $s0, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272010u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_272014:
    // 0x272014: 0x6b90  .word       0x00006B90                   # mfhi        $t5 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272014u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_272018:
    // 0x272018: 0x0  nop
    ctx->pc = 0x272018u;
    // NOP
label_27201c:
    // 0x27201c: 0x0  nop
    ctx->pc = 0x27201cu;
    // NOP
label_272020:
    // 0x272020: 0x87e2  .word       0x000087E2                   # neg         $s0, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272020u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 16, (int32_t)tmp); }
label_272024:
    // 0x272024: 0x25c0  sll         $a0, $zero, 23
    ctx->pc = 0x272024u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 0), 23));
label_272028:
    // 0x272028: 0x0  nop
    ctx->pc = 0x272028u;
    // NOP
label_27202c:
    // 0x27202c: 0x0  nop
    ctx->pc = 0x27202cu;
    // NOP
label_272030:
    // 0x272030: 0x87e7  .word       0x000087E7                   # not         $s0, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272030u;
    SET_GPR_U64(ctx, 16, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_272034:
    // 0x272034: 0x38a0  .word       0x000038A0                   # add         $a3, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272034u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_272038:
    // 0x272038: 0x0  nop
    ctx->pc = 0x272038u;
    // NOP
label_27203c:
    // 0x27203c: 0x0  nop
    ctx->pc = 0x27203cu;
    // NOP
label_272040:
    // 0x272040: 0x87ef  .word       0x000087EF                   # dsubu       $s0, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272040u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_272044:
    // 0x272044: 0x7bf0  tge         $zero, $zero, 495
    ctx->pc = 0x272044u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_272048:
    // 0x272048: 0x0  nop
    ctx->pc = 0x272048u;
    // NOP
label_27204c:
    // 0x27204c: 0x0  nop
    ctx->pc = 0x27204cu;
    // NOP
label_272050:
    // 0x272050: 0x87ff  dsra32      $s0, $zero, 31
    ctx->pc = 0x272050u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 0) >> (32 + 31));
label_272054:
    // 0x272054: 0x5470  tge         $zero, $zero, 337
    ctx->pc = 0x272054u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_272058:
    // 0x272058: 0x0  nop
    ctx->pc = 0x272058u;
    // NOP
label_27205c:
    // 0x27205c: 0x0  nop
    ctx->pc = 0x27205cu;
    // NOP
label_272060:
    // 0x272060: 0x880a  movz        $s1, $zero, $zero
    ctx->pc = 0x272060u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
label_272064:
    // 0x272064: 0x7f90  .word       0x00007F90                   # mfhi        $t7 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272064u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_272068:
    // 0x272068: 0x0  nop
    ctx->pc = 0x272068u;
    // NOP
label_27206c:
    // 0x27206c: 0x0  nop
    ctx->pc = 0x27206cu;
    // NOP
label_272070:
    // 0x272070: 0x881a  div         $s1, $zero, $zero
    ctx->pc = 0x272070u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_272074:
    // 0x272074: 0x8fa0  .word       0x00008FA0                   # add         $s1, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272074u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_272078:
    // 0x272078: 0x0  nop
    ctx->pc = 0x272078u;
    // NOP
label_27207c:
    // 0x27207c: 0x0  nop
    ctx->pc = 0x27207cu;
    // NOP
label_272080:
    // 0x272080: 0x882c  dadd        $s1, $zero, $zero
    ctx->pc = 0x272080u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 17, r); }
label_272084:
    // 0x272084: 0x8f80  sll         $s1, $zero, 30
    ctx->pc = 0x272084u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 30));
label_272088:
    // 0x272088: 0x0  nop
    ctx->pc = 0x272088u;
    // NOP
label_27208c:
    // 0x27208c: 0x0  nop
    ctx->pc = 0x27208cu;
    // NOP
label_272090:
    // 0x272090: 0x883e  dsrl32      $s1, $zero, 0
    ctx->pc = 0x272090u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) >> (32 + 0));
label_272094:
    // 0x272094: 0x7a20  .word       0x00007A20                   # add         $t7, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272094u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_272098:
    // 0x272098: 0x0  nop
    ctx->pc = 0x272098u;
    // NOP
label_27209c:
    // 0x27209c: 0x0  nop
    ctx->pc = 0x27209cu;
    // NOP
label_2720a0:
    // 0x2720a0: 0x884e  .word       0x0000884E                   # INVALID     $zero, $zero, -0x77B2 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2720a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x2720A0 raw=0x0000884E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2720a4:
    // 0x2720a4: 0xd970  tge         $zero, $zero, 869
    ctx->pc = 0x2720a4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2720a8:
    // 0x2720a8: 0x0  nop
    ctx->pc = 0x2720a8u;
    // NOP
label_2720ac:
    // 0x2720ac: 0x0  nop
    ctx->pc = 0x2720acu;
    // NOP
label_2720b0:
    // 0x2720b0: 0x886a  .word       0x0000886A                   # slt         $s1, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2720b0u;
    SET_GPR_U64(ctx, 17, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_2720b4:
    // 0x2720b4: 0x43f0  tge         $zero, $zero, 271
    ctx->pc = 0x2720b4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2720b8:
    // 0x2720b8: 0x0  nop
    ctx->pc = 0x2720b8u;
    // NOP
label_2720bc:
    // 0x2720bc: 0x0  nop
    ctx->pc = 0x2720bcu;
    // NOP
label_2720c0:
    // 0x2720c0: 0x8873  tltu        $zero, $zero, 545
    ctx->pc = 0x2720c0u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2720c4:
    // 0x2720c4: 0x6ff0  tge         $zero, $zero, 447
    ctx->pc = 0x2720c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2720c8:
    // 0x2720c8: 0x0  nop
    ctx->pc = 0x2720c8u;
    // NOP
label_2720cc:
    // 0x2720cc: 0x0  nop
    ctx->pc = 0x2720ccu;
    // NOP
label_2720d0:
    // 0x2720d0: 0x8881  .word       0x00008881                   # INVALID     $zero, $zero, -0x777F # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2720d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2720D0 raw=0x00008881"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2720d4:
    // 0x2720d4: 0x7ac0  sll         $t7, $zero, 11
    ctx->pc = 0x2720d4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_2720d8:
    // 0x2720d8: 0x0  nop
    ctx->pc = 0x2720d8u;
    // NOP
label_2720dc:
    // 0x2720dc: 0x0  nop
    ctx->pc = 0x2720dcu;
    // NOP
label_2720e0:
    // 0x2720e0: 0x8891  .word       0x00008891                   # mthi        $zero # 00008880 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2720e0u;
    ctx->hi = GPR_U64(ctx, 0);
label_2720e4:
    // 0x2720e4: 0x8050  .word       0x00008050                   # mfhi        $s0 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2720e4u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_2720e8:
    // 0x2720e8: 0x0  nop
    ctx->pc = 0x2720e8u;
    // NOP
label_2720ec:
    // 0x2720ec: 0x0  nop
    ctx->pc = 0x2720ecu;
    // NOP
label_2720f0:
    // 0x2720f0: 0x88a2  .word       0x000088A2                   # neg         $s1, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2720f0u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 17, (int32_t)tmp); }
label_2720f4:
    // 0x2720f4: 0x4a40  sll         $t1, $zero, 9
    ctx->pc = 0x2720f4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 9));
label_2720f8:
    // 0x2720f8: 0x0  nop
    ctx->pc = 0x2720f8u;
    // NOP
label_2720fc:
    // 0x2720fc: 0x0  nop
    ctx->pc = 0x2720fcu;
    // NOP
label_272100:
    // 0x272100: 0x88ac  .word       0x000088AC                   # dadd        $s1, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272100u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 17, r); }
label_272104:
    // 0x272104: 0x8450  .word       0x00008450                   # mfhi        $s0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272104u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_272108:
    // 0x272108: 0x0  nop
    ctx->pc = 0x272108u;
    // NOP
label_27210c:
    // 0x27210c: 0x0  nop
    ctx->pc = 0x27210cu;
    // NOP
label_272110:
    // 0x272110: 0x88bd  .word       0x000088BD                   # INVALID     $zero, $zero, -0x7743 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272110u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x272110 raw=0x000088BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_272114:
    // 0x272114: 0x9330  tge         $zero, $zero, 588
    ctx->pc = 0x272114u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_272118:
    // 0x272118: 0x0  nop
    ctx->pc = 0x272118u;
    // NOP
label_27211c:
    // 0x27211c: 0x0  nop
    ctx->pc = 0x27211cu;
    // NOP
label_272120:
    // 0x272120: 0x88d0  .word       0x000088D0                   # mfhi        $s1 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272120u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_272124:
    // 0x272124: 0x7f20  .word       0x00007F20                   # add         $t7, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272124u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_272128:
    // 0x272128: 0x0  nop
    ctx->pc = 0x272128u;
    // NOP
label_27212c:
    // 0x27212c: 0x0  nop
    ctx->pc = 0x27212cu;
    // NOP
label_272130:
    // 0x272130: 0x88e0  .word       0x000088E0                   # add         $s1, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272130u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_272134:
    // 0x272134: 0x7620  .word       0x00007620                   # add         $t6, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272134u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_272138:
    // 0x272138: 0x0  nop
    ctx->pc = 0x272138u;
    // NOP
label_27213c:
    // 0x27213c: 0x0  nop
    ctx->pc = 0x27213cu;
    // NOP
label_272140:
    // 0x272140: 0x88ef  .word       0x000088EF                   # dsubu       $s1, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272140u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_272144:
    // 0x272144: 0x4e30  tge         $zero, $zero, 312
    ctx->pc = 0x272144u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_272148:
    // 0x272148: 0x0  nop
    ctx->pc = 0x272148u;
    // NOP
label_27214c:
    // 0x27214c: 0x0  nop
    ctx->pc = 0x27214cu;
    // NOP
label_272150:
    // 0x272150: 0x88f9  .word       0x000088F9                   # INVALID     $zero, $zero, -0x7707 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272150u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x272150 raw=0x000088F9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_272154:
    // 0x272154: 0x5900  sll         $t3, $zero, 4
    ctx->pc = 0x272154u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_272158:
    // 0x272158: 0x0  nop
    ctx->pc = 0x272158u;
    // NOP
label_27215c:
    // 0x27215c: 0x0  nop
    ctx->pc = 0x27215cu;
    // NOP
label_272160:
    // 0x272160: 0x8905  .word       0x00008905                   # INVALID     $zero, $zero, -0x76FB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272160u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x272160 raw=0x00008905"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_272164:
    // 0x272164: 0x7c30  tge         $zero, $zero, 496
    ctx->pc = 0x272164u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_272168:
    // 0x272168: 0x0  nop
    ctx->pc = 0x272168u;
    // NOP
label_27216c:
    // 0x27216c: 0x0  nop
    ctx->pc = 0x27216cu;
    // NOP
label_272170:
    // 0x272170: 0x8915  .word       0x00008915                   # INVALID     $zero, $zero, -0x76EB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272170u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x272170 raw=0x00008915"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_272174:
    // 0x272174: 0x7cc0  sll         $t7, $zero, 19
    ctx->pc = 0x272174u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_272178:
    // 0x272178: 0x0  nop
    ctx->pc = 0x272178u;
    // NOP
label_27217c:
    // 0x27217c: 0x0  nop
    ctx->pc = 0x27217cu;
    // NOP
label_272180:
    // 0x272180: 0x8925  .word       0x00008925                   # move        $s1, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272180u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_272184:
    // 0x272184: 0xa7a0  .word       0x0000A7A0                   # add         $s4, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272184u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_272188:
    // 0x272188: 0x0  nop
    ctx->pc = 0x272188u;
    // NOP
label_27218c:
    // 0x27218c: 0x0  nop
    ctx->pc = 0x27218cu;
    // NOP
label_272190:
    // 0x272190: 0x893a  dsrl        $s1, $zero, 4
    ctx->pc = 0x272190u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) >> 4);
label_272194:
    // 0x272194: 0x5670  tge         $zero, $zero, 345
    ctx->pc = 0x272194u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_272198:
    // 0x272198: 0x0  nop
    ctx->pc = 0x272198u;
    // NOP
label_27219c:
    // 0x27219c: 0x0  nop
    ctx->pc = 0x27219cu;
    // NOP
label_2721a0:
    // 0x2721a0: 0x8945  .word       0x00008945                   # INVALID     $zero, $zero, -0x76BB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2721a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2721A0 raw=0x00008945"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2721a4:
    // 0x2721a4: 0x8bb0  tge         $zero, $zero, 558
    ctx->pc = 0x2721a4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2721a8:
    // 0x2721a8: 0x0  nop
    ctx->pc = 0x2721a8u;
    // NOP
label_2721ac:
    // 0x2721ac: 0x0  nop
    ctx->pc = 0x2721acu;
    // NOP
label_2721b0:
    // 0x2721b0: 0x8957  .word       0x00008957                   # dsrav       $s1, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2721b0u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_2721b4:
    // 0x2721b4: 0x6ba0  .word       0x00006BA0                   # add         $t5, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2721b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_2721b8:
    // 0x2721b8: 0x0  nop
    ctx->pc = 0x2721b8u;
    // NOP
label_2721bc:
    // 0x2721bc: 0x0  nop
    ctx->pc = 0x2721bcu;
    // NOP
label_2721c0:
    // 0x2721c0: 0x8965  .word       0x00008965                   # move        $s1, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2721c0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_2721c4:
    // 0x2721c4: 0x8950  .word       0x00008950                   # mfhi        $s1 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2721c4u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_2721c8:
    // 0x2721c8: 0x0  nop
    ctx->pc = 0x2721c8u;
    // NOP
label_2721cc:
    // 0x2721cc: 0x0  nop
    ctx->pc = 0x2721ccu;
    // NOP
label_2721d0:
    // 0x2721d0: 0x8977  .word       0x00008977                   # INVALID     $zero, $zero, -0x7689 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2721d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x2721D0 raw=0x00008977"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2721d4:
    // 0x2721d4: 0x99f0  tge         $zero, $zero, 615
    ctx->pc = 0x2721d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2721d8:
    // 0x2721d8: 0x0  nop
    ctx->pc = 0x2721d8u;
    // NOP
label_2721dc:
    // 0x2721dc: 0x0  nop
    ctx->pc = 0x2721dcu;
    // NOP
label_2721e0:
    // 0x2721e0: 0x898b  .word       0x0000898B                   # movn        $s1, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2721e0u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
label_2721e4:
    // 0x2721e4: 0x7280  sll         $t6, $zero, 10
    ctx->pc = 0x2721e4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_2721e8:
    // 0x2721e8: 0x0  nop
    ctx->pc = 0x2721e8u;
    // NOP
label_2721ec:
    // 0x2721ec: 0x0  nop
    ctx->pc = 0x2721ecu;
    // NOP
label_2721f0:
    // 0x2721f0: 0x899a  .word       0x0000899A                   # div         $s1, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2721f0u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_2721f4:
    // 0x2721f4: 0x5c20  .word       0x00005C20                   # add         $t3, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2721f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_2721f8:
    // 0x2721f8: 0x0  nop
    ctx->pc = 0x2721f8u;
    // NOP
label_2721fc:
    // 0x2721fc: 0x0  nop
    ctx->pc = 0x2721fcu;
    // NOP
label_272200:
    // 0x272200: 0x89a6  .word       0x000089A6                   # xor         $s1, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272200u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_272204:
    // 0x272204: 0x5ec0  sll         $t3, $zero, 27
    ctx->pc = 0x272204u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_272208:
    // 0x272208: 0x0  nop
    ctx->pc = 0x272208u;
    // NOP
label_27220c:
    // 0x27220c: 0x0  nop
    ctx->pc = 0x27220cu;
    // NOP
label_272210:
    // 0x272210: 0x89b2  tlt         $zero, $zero, 550
    ctx->pc = 0x272210u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_272214:
    // 0x272214: 0x5ea0  .word       0x00005EA0                   # add         $t3, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272214u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_272218:
    // 0x272218: 0x0  nop
    ctx->pc = 0x272218u;
    // NOP
label_27221c:
    // 0x27221c: 0x0  nop
    ctx->pc = 0x27221cu;
    // NOP
label_272220:
    // 0x272220: 0x89be  dsrl32      $s1, $zero, 6
    ctx->pc = 0x272220u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) >> (32 + 6));
label_272224:
    // 0x272224: 0x6a90  .word       0x00006A90                   # mfhi        $t5 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272224u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_272228:
    // 0x272228: 0x0  nop
    ctx->pc = 0x272228u;
    // NOP
label_27222c:
    // 0x27222c: 0x0  nop
    ctx->pc = 0x27222cu;
    // NOP
label_272230:
    // 0x272230: 0x89cc  syscall     551
    ctx->pc = 0x272230u;
    ctx->pc = 0x272234u;
runtime->handleSyscall(rdram, ctx, 0x227u);
label_272234:
    // 0x272234: 0x7c40  sll         $t7, $zero, 17
    ctx->pc = 0x272234u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_272238:
    // 0x272238: 0x0  nop
    ctx->pc = 0x272238u;
    // NOP
label_27223c:
    // 0x27223c: 0x0  nop
    ctx->pc = 0x27223cu;
    // NOP
label_272240:
    // 0x272240: 0x89dc  .word       0x000089DC                   # dmult       $zero, $zero # 000089C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272240u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x272240 raw=0x000089DC"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_272244:
    // 0x272244: 0xa840  sll         $s5, $zero, 1
    ctx->pc = 0x272244u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 1));
label_272248:
    // 0x272248: 0x0  nop
    ctx->pc = 0x272248u;
    // NOP
label_27224c:
    // 0x27224c: 0x0  nop
    ctx->pc = 0x27224cu;
    // NOP
label_272250:
    // 0x272250: 0x89f2  tlt         $zero, $zero, 551
    ctx->pc = 0x272250u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_272254:
    // 0x272254: 0x6fb0  tge         $zero, $zero, 446
    ctx->pc = 0x272254u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_272258:
    // 0x272258: 0x0  nop
    ctx->pc = 0x272258u;
    // NOP
label_27225c:
    // 0x27225c: 0x0  nop
    ctx->pc = 0x27225cu;
    // NOP
label_272260:
    // 0x272260: 0x8a00  sll         $s1, $zero, 8
    ctx->pc = 0x272260u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 8));
label_272264:
    // 0x272264: 0x6250  .word       0x00006250                   # mfhi        $t4 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272264u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_272268:
    // 0x272268: 0x0  nop
    ctx->pc = 0x272268u;
    // NOP
label_27226c:
    // 0x27226c: 0x0  nop
    ctx->pc = 0x27226cu;
    // NOP
label_272270:
    // 0x272270: 0x8a0d  break       0, 552
    ctx->pc = 0x272270u;
    runtime->handleBreak(rdram, ctx);
label_272274:
    // 0x272274: 0x5800  sll         $t3, $zero, 0
    ctx->pc = 0x272274u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_272278:
    // 0x272278: 0x0  nop
    ctx->pc = 0x272278u;
    // NOP
label_27227c:
    // 0x27227c: 0x0  nop
    ctx->pc = 0x27227cu;
    // NOP
label_272280:
    // 0x272280: 0x8a18  .word       0x00008A18                   # mult        $s1, $zero, $zero # 00000200 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x272280u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
label_272284:
    // 0x272284: 0x59a0  .word       0x000059A0                   # add         $t3, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272284u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_272288:
    // 0x272288: 0x0  nop
    ctx->pc = 0x272288u;
    // NOP
label_27228c:
    // 0x27228c: 0x0  nop
    ctx->pc = 0x27228cu;
    // NOP
label_272290:
    // 0x272290: 0x8a24  .word       0x00008A24                   # and         $s1, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272290u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_272294:
    // 0x272294: 0x8020  add         $s0, $zero, $zero
    ctx->pc = 0x272294u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_272298:
    // 0x272298: 0x0  nop
    ctx->pc = 0x272298u;
    // NOP
label_27229c:
    // 0x27229c: 0x0  nop
    ctx->pc = 0x27229cu;
    // NOP
label_2722a0:
    // 0x2722a0: 0x8a35  .word       0x00008A35                   # INVALID     $zero, $zero, -0x75CB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2722a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x2722A0 raw=0x00008A35"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2722a4:
    // 0x2722a4: 0x6c20  .word       0x00006C20                   # add         $t5, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2722a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_2722a8:
    // 0x2722a8: 0x0  nop
    ctx->pc = 0x2722a8u;
    // NOP
label_2722ac:
    // 0x2722ac: 0x0  nop
    ctx->pc = 0x2722acu;
    // NOP
label_2722b0:
    // 0x2722b0: 0x8a43  sra         $s1, $zero, 9
    ctx->pc = 0x2722b0u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 0), 9));
label_2722b4:
    // 0x2722b4: 0x6230  tge         $zero, $zero, 392
    ctx->pc = 0x2722b4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2722b8:
    // 0x2722b8: 0x0  nop
    ctx->pc = 0x2722b8u;
    // NOP
label_2722bc:
    // 0x2722bc: 0x0  nop
    ctx->pc = 0x2722bcu;
    // NOP
label_2722c0:
    // 0x2722c0: 0x8a50  .word       0x00008A50                   # mfhi        $s1 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2722c0u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_2722c4:
    // 0x2722c4: 0x56c0  sll         $t2, $zero, 27
    ctx->pc = 0x2722c4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_2722c8:
    // 0x2722c8: 0x0  nop
    ctx->pc = 0x2722c8u;
    // NOP
label_2722cc:
    // 0x2722cc: 0x0  nop
    ctx->pc = 0x2722ccu;
    // NOP
label_2722d0:
    // 0x2722d0: 0x8a5b  .word       0x00008A5B                   # divu        $s1, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2722d0u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_2722d4:
    // 0x2722d4: 0x5e90  .word       0x00005E90                   # mfhi        $t3 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2722d4u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_2722d8:
    // 0x2722d8: 0x0  nop
    ctx->pc = 0x2722d8u;
    // NOP
label_2722dc:
    // 0x2722dc: 0x0  nop
    ctx->pc = 0x2722dcu;
    // NOP
label_2722e0:
    // 0x2722e0: 0x8a67  .word       0x00008A67                   # not         $s1, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2722e0u;
    SET_GPR_U64(ctx, 17, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_2722e4:
    // 0x2722e4: 0x52c0  sll         $t2, $zero, 11
    ctx->pc = 0x2722e4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_2722e8:
    // 0x2722e8: 0x0  nop
    ctx->pc = 0x2722e8u;
    // NOP
label_2722ec:
    // 0x2722ec: 0x0  nop
    ctx->pc = 0x2722ecu;
    // NOP
label_2722f0:
    // 0x2722f0: 0x8a72  tlt         $zero, $zero, 553
    ctx->pc = 0x2722f0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2722f4:
    // 0x2722f4: 0x67a0  .word       0x000067A0                   # add         $t4, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2722f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_2722f8:
    // 0x2722f8: 0x0  nop
    ctx->pc = 0x2722f8u;
    // NOP
label_2722fc:
    // 0x2722fc: 0x0  nop
    ctx->pc = 0x2722fcu;
    // NOP
label_272300:
    // 0x272300: 0x8a7f  dsra32      $s1, $zero, 9
    ctx->pc = 0x272300u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 0) >> (32 + 9));
label_272304:
    // 0x272304: 0x66c0  sll         $t4, $zero, 27
    ctx->pc = 0x272304u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_272308:
    // 0x272308: 0x0  nop
    ctx->pc = 0x272308u;
    // NOP
label_27230c:
    // 0x27230c: 0x0  nop
    ctx->pc = 0x27230cu;
    // NOP
label_272310:
    // 0x272310: 0x8a8c  syscall     554
    ctx->pc = 0x272310u;
    ctx->pc = 0x272314u;
runtime->handleSyscall(rdram, ctx, 0x22Au);
label_272314:
    // 0x272314: 0x5f60  .word       0x00005F60                   # add         $t3, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272314u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_272318:
    // 0x272318: 0x0  nop
    ctx->pc = 0x272318u;
    // NOP
label_27231c:
    // 0x27231c: 0x0  nop
    ctx->pc = 0x27231cu;
    // NOP
label_272320:
    // 0x272320: 0x8a98  .word       0x00008A98                   # mult        $s1, $zero, $zero # 00000280 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x272320u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
label_272324:
    // 0x272324: 0x6550  .word       0x00006550                   # mfhi        $t4 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272324u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_272328:
    // 0x272328: 0x0  nop
    ctx->pc = 0x272328u;
    // NOP
label_27232c:
    // 0x27232c: 0x0  nop
    ctx->pc = 0x27232cu;
    // NOP
label_272330:
    // 0x272330: 0x8aa5  .word       0x00008AA5                   # move        $s1, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272330u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_272334:
    // 0x272334: 0x9080  sll         $s2, $zero, 2
    ctx->pc = 0x272334u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_272338:
    // 0x272338: 0x0  nop
    ctx->pc = 0x272338u;
    // NOP
label_27233c:
    // 0x27233c: 0x0  nop
    ctx->pc = 0x27233cu;
    // NOP
label_272340:
    // 0x272340: 0x8ab8  dsll        $s1, $zero, 10
    ctx->pc = 0x272340u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) << 10);
label_272344:
    // 0x272344: 0x5d50  .word       0x00005D50                   # mfhi        $t3 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272344u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_272348:
    // 0x272348: 0x0  nop
    ctx->pc = 0x272348u;
    // NOP
label_27234c:
    // 0x27234c: 0x0  nop
    ctx->pc = 0x27234cu;
    // NOP
label_272350:
    // 0x272350: 0x8ac4  .word       0x00008AC4                   # sllv        $s1, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272350u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_272354:
    // 0x272354: 0x5230  tge         $zero, $zero, 328
    ctx->pc = 0x272354u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_272358:
    // 0x272358: 0x0  nop
    ctx->pc = 0x272358u;
    // NOP
label_27235c:
    // 0x27235c: 0x0  nop
    ctx->pc = 0x27235cu;
    // NOP
label_272360:
    // 0x272360: 0x8acf  .word       0x00008ACF                   # sync # 00008800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272360u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_272364:
    // 0x272364: 0x58c0  sll         $t3, $zero, 3
    ctx->pc = 0x272364u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_272368:
    // 0x272368: 0x0  nop
    ctx->pc = 0x272368u;
    // NOP
label_27236c:
    // 0x27236c: 0x0  nop
    ctx->pc = 0x27236cu;
    // NOP
label_272370:
    // 0x272370: 0x8adb  .word       0x00008ADB                   # divu        $s1, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272370u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_272374:
    // 0x272374: 0x7b20  .word       0x00007B20                   # add         $t7, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272374u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_272378:
    // 0x272378: 0x0  nop
    ctx->pc = 0x272378u;
    // NOP
label_27237c:
    // 0x27237c: 0x0  nop
    ctx->pc = 0x27237cu;
    // NOP
label_272380:
    // 0x272380: 0x8aeb  .word       0x00008AEB                   # sltu        $s1, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272380u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_272384:
    // 0x272384: 0x8910  .word       0x00008910                   # mfhi        $s1 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272384u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_272388:
    // 0x272388: 0x0  nop
    ctx->pc = 0x272388u;
    // NOP
label_27238c:
    // 0x27238c: 0x0  nop
    ctx->pc = 0x27238cu;
    // NOP
label_272390:
    // 0x272390: 0x8afd  .word       0x00008AFD                   # INVALID     $zero, $zero, -0x7503 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272390u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x272390 raw=0x00008AFD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_272394:
    // 0x272394: 0xa650  .word       0x0000A650                   # mfhi        $s4 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272394u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_272398:
    // 0x272398: 0x0  nop
    ctx->pc = 0x272398u;
    // NOP
label_27239c:
    // 0x27239c: 0x0  nop
    ctx->pc = 0x27239cu;
    // NOP
label_2723a0:
    // 0x2723a0: 0x8b12  .word       0x00008B12                   # mflo        $s1 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2723a0u;
    SET_GPR_U64(ctx, 17, ctx->lo);
label_2723a4:
    // 0x2723a4: 0x7da0  .word       0x00007DA0                   # add         $t7, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2723a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_2723a8:
    // 0x2723a8: 0x0  nop
    ctx->pc = 0x2723a8u;
    // NOP
label_2723ac:
    // 0x2723ac: 0x0  nop
    ctx->pc = 0x2723acu;
    // NOP
label_2723b0:
    // 0x2723b0: 0x8b22  .word       0x00008B22                   # neg         $s1, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2723b0u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 17, (int32_t)tmp); }
label_2723b4:
    // 0x2723b4: 0x7720  .word       0x00007720                   # add         $t6, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2723b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_2723b8:
    // 0x2723b8: 0x0  nop
    ctx->pc = 0x2723b8u;
    // NOP
label_2723bc:
    // 0x2723bc: 0x0  nop
    ctx->pc = 0x2723bcu;
    // NOP
label_2723c0:
    // 0x2723c0: 0x8b31  tgeu        $zero, $zero, 556
    ctx->pc = 0x2723c0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2723c4:
    // 0x2723c4: 0x8cc0  sll         $s1, $zero, 19
    ctx->pc = 0x2723c4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_2723c8:
    // 0x2723c8: 0x0  nop
    ctx->pc = 0x2723c8u;
    // NOP
label_2723cc:
    // 0x2723cc: 0x0  nop
    ctx->pc = 0x2723ccu;
    // NOP
label_2723d0:
    // 0x2723d0: 0x8b43  sra         $s1, $zero, 13
    ctx->pc = 0x2723d0u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 0), 13));
label_2723d4:
    // 0x2723d4: 0x5b00  sll         $t3, $zero, 12
    ctx->pc = 0x2723d4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_2723d8:
    // 0x2723d8: 0x0  nop
    ctx->pc = 0x2723d8u;
    // NOP
label_2723dc:
    // 0x2723dc: 0x0  nop
    ctx->pc = 0x2723dcu;
    // NOP
label_2723e0:
    // 0x2723e0: 0x8b4f  .word       0x00008B4F                   # sync # 00008800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2723e0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_2723e4:
    // 0x2723e4: 0x8630  tge         $zero, $zero, 536
    ctx->pc = 0x2723e4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2723e8:
    // 0x2723e8: 0x0  nop
    ctx->pc = 0x2723e8u;
    // NOP
label_2723ec:
    // 0x2723ec: 0x0  nop
    ctx->pc = 0x2723ecu;
    // NOP
label_2723f0:
    // 0x2723f0: 0x8b60  .word       0x00008B60                   # add         $s1, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2723f0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_2723f4:
    // 0x2723f4: 0x6080  sll         $t4, $zero, 2
    ctx->pc = 0x2723f4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_2723f8:
    // 0x2723f8: 0x0  nop
    ctx->pc = 0x2723f8u;
    // NOP
label_2723fc:
    // 0x2723fc: 0x0  nop
    ctx->pc = 0x2723fcu;
    // NOP
label_272400:
    // 0x272400: 0x8b6d  .word       0x00008B6D                   # daddu       $s1, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272400u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_272404:
    // 0x272404: 0x3fe0  .word       0x00003FE0                   # add         $a3, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272404u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_272408:
    // 0x272408: 0x0  nop
    ctx->pc = 0x272408u;
    // NOP
label_27240c:
    // 0x27240c: 0x0  nop
    ctx->pc = 0x27240cu;
    // NOP
label_272410:
    // 0x272410: 0x8b75  .word       0x00008B75                   # INVALID     $zero, $zero, -0x748B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272410u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x272410 raw=0x00008B75"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_272414:
    // 0x272414: 0x8f10  .word       0x00008F10                   # mfhi        $s1 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272414u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_272418:
    // 0x272418: 0x0  nop
    ctx->pc = 0x272418u;
    // NOP
label_27241c:
    // 0x27241c: 0x0  nop
    ctx->pc = 0x27241cu;
    // NOP
label_272420:
    // 0x272420: 0x8b87  .word       0x00008B87                   # srav        $s1, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272420u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_272424:
    // 0x272424: 0x7820  add         $t7, $zero, $zero
    ctx->pc = 0x272424u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_272428:
    // 0x272428: 0x0  nop
    ctx->pc = 0x272428u;
    // NOP
label_27242c:
    // 0x27242c: 0x0  nop
    ctx->pc = 0x27242cu;
    // NOP
label_272430:
    // 0x272430: 0x8b97  .word       0x00008B97                   # dsrav       $s1, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272430u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_272434:
    // 0x272434: 0x80d0  .word       0x000080D0                   # mfhi        $s0 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272434u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_272438:
    // 0x272438: 0x0  nop
    ctx->pc = 0x272438u;
    // NOP
label_27243c:
    // 0x27243c: 0x0  nop
    ctx->pc = 0x27243cu;
    // NOP
label_272440:
    // 0x272440: 0x8ba8  .word       0x00008BA8                   # mfsa        $s1 # 00000380 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x272440u;
    SET_GPR_U32(ctx, 17, ctx->sa);
label_272444:
    // 0x272444: 0x58c0  sll         $t3, $zero, 3
    ctx->pc = 0x272444u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_272448:
    // 0x272448: 0x0  nop
    ctx->pc = 0x272448u;
    // NOP
label_27244c:
    // 0x27244c: 0x0  nop
    ctx->pc = 0x27244cu;
    // NOP
label_272450:
    // 0x272450: 0x8bb4  teq         $zero, $zero, 558
    ctx->pc = 0x272450u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_272454:
    // 0x272454: 0x6b50  .word       0x00006B50                   # mfhi        $t5 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272454u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_272458:
    // 0x272458: 0x0  nop
    ctx->pc = 0x272458u;
    // NOP
label_27245c:
    // 0x27245c: 0x0  nop
    ctx->pc = 0x27245cu;
    // NOP
label_272460:
    // 0x272460: 0x8bc2  srl         $s1, $zero, 15
    ctx->pc = 0x272460u;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 0), 15));
label_272464:
    // 0x272464: 0x94c0  sll         $s2, $zero, 19
    ctx->pc = 0x272464u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_272468:
    // 0x272468: 0x0  nop
    ctx->pc = 0x272468u;
    // NOP
label_27246c:
    // 0x27246c: 0x0  nop
    ctx->pc = 0x27246cu;
    // NOP
label_272470:
    // 0x272470: 0x8bd5  .word       0x00008BD5                   # INVALID     $zero, $zero, -0x742B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272470u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x272470 raw=0x00008BD5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_272474:
    // 0x272474: 0x8680  sll         $s0, $zero, 26
    ctx->pc = 0x272474u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
label_272478:
    // 0x272478: 0x0  nop
    ctx->pc = 0x272478u;
    // NOP
label_27247c:
    // 0x27247c: 0x0  nop
    ctx->pc = 0x27247cu;
    // NOP
label_272480:
    // 0x272480: 0x8be6  .word       0x00008BE6                   # xor         $s1, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272480u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_272484:
    // 0x272484: 0x3020  add         $a2, $zero, $zero
    ctx->pc = 0x272484u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_272488:
    // 0x272488: 0x0  nop
    ctx->pc = 0x272488u;
    // NOP
label_27248c:
    // 0x27248c: 0x0  nop
    ctx->pc = 0x27248cu;
    // NOP
label_272490:
    // 0x272490: 0x8bed  .word       0x00008BED                   # daddu       $s1, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272490u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_272494:
    // 0x272494: 0x2cc0  sll         $a1, $zero, 19
    ctx->pc = 0x272494u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_272498:
    // 0x272498: 0x0  nop
    ctx->pc = 0x272498u;
    // NOP
label_27249c:
    // 0x27249c: 0x0  nop
    ctx->pc = 0x27249cu;
    // NOP
label_2724a0:
    // 0x2724a0: 0x8bf3  tltu        $zero, $zero, 559
    ctx->pc = 0x2724a0u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2724a4:
    // 0x2724a4: 0x6880  sll         $t5, $zero, 2
    ctx->pc = 0x2724a4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_2724a8:
    // 0x2724a8: 0x0  nop
    ctx->pc = 0x2724a8u;
    // NOP
label_2724ac:
    // 0x2724ac: 0x0  nop
    ctx->pc = 0x2724acu;
    // NOP
label_2724b0:
    // 0x2724b0: 0x8c01  .word       0x00008C01                   # INVALID     $zero, $zero, -0x73FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2724b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2724B0 raw=0x00008C01"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2724b4:
    // 0x2724b4: 0x3a50  .word       0x00003A50                   # mfhi        $a3 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2724b4u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_2724b8:
    // 0x2724b8: 0x0  nop
    ctx->pc = 0x2724b8u;
    // NOP
label_2724bc:
    // 0x2724bc: 0x0  nop
    ctx->pc = 0x2724bcu;
    // NOP
label_2724c0:
    // 0x2724c0: 0x8c09  .word       0x00008C09                   # jalr        $s1, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
label_2724c4:
    if (ctx->pc == 0x2724C4u) {
        ctx->pc = 0x2724C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2724C0u;
        // 0x2724c4: 0x7f10  .word       0x00007F10                   # mfhi        $t7 # 00000700 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 15, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2724C8u;
        goto label_2724c8;
    }
    ctx->pc = 0x2724C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 17, 0x2724C8u);
        ctx->pc = 0x2724C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2724C0u;
        // 0x2724c4: 0x7f10  .word       0x00007F10                   # mfhi        $t7 # 00000700 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 15, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2724C0u, 0x2724C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2724C8u;
label_2724c8:
    // 0x2724c8: 0x0  nop
    ctx->pc = 0x2724c8u;
    // NOP
label_2724cc:
    // 0x2724cc: 0x0  nop
    ctx->pc = 0x2724ccu;
    // NOP
label_2724d0:
    // 0x2724d0: 0x8c19  .word       0x00008C19                   # multu       $zero, $zero # 00008C00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2724d0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
label_2724d4:
    // 0x2724d4: 0x7730  tge         $zero, $zero, 476
    ctx->pc = 0x2724d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2724d8:
    // 0x2724d8: 0x0  nop
    ctx->pc = 0x2724d8u;
    // NOP
label_2724dc:
    // 0x2724dc: 0x0  nop
    ctx->pc = 0x2724dcu;
    // NOP
label_2724e0:
    // 0x2724e0: 0x8c28  .word       0x00008C28                   # mfsa        $s1 # 00000400 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2724e0u;
    SET_GPR_U32(ctx, 17, ctx->sa);
label_2724e4:
    // 0x2724e4: 0x2e40  sll         $a1, $zero, 25
    ctx->pc = 0x2724e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 0), 25));
label_2724e8:
    // 0x2724e8: 0x0  nop
    ctx->pc = 0x2724e8u;
    // NOP
label_2724ec:
    // 0x2724ec: 0x0  nop
    ctx->pc = 0x2724ecu;
    // NOP
label_2724f0:
    // 0x2724f0: 0x8c2e  .word       0x00008C2E                   # dsub        $s1, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2724f0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 17, r); }
label_2724f4:
    // 0x2724f4: 0x1ad0  .word       0x00001AD0                   # mfhi        $v1 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2724f4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_2724f8:
    // 0x2724f8: 0x0  nop
    ctx->pc = 0x2724f8u;
    // NOP
label_2724fc:
    // 0x2724fc: 0x0  nop
    ctx->pc = 0x2724fcu;
    // NOP
label_272500:
    // 0x272500: 0x8c32  tlt         $zero, $zero, 560
    ctx->pc = 0x272500u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_272504:
    // 0x272504: 0x3090  .word       0x00003090                   # mfhi        $a2 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272504u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_272508:
    // 0x272508: 0x0  nop
    ctx->pc = 0x272508u;
    // NOP
label_27250c:
    // 0x27250c: 0x0  nop
    ctx->pc = 0x27250cu;
    // NOP
label_272510:
    // 0x272510: 0x8c39  .word       0x00008C39                   # INVALID     $zero, $zero, -0x73C7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272510u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x272510 raw=0x00008C39"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_272514:
    // 0x272514: 0x23e0  .word       0x000023E0                   # add         $a0, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272514u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
label_272518:
    // 0x272518: 0x0  nop
    ctx->pc = 0x272518u;
    // NOP
label_27251c:
    // 0x27251c: 0x0  nop
    ctx->pc = 0x27251cu;
    // NOP
label_272520:
    // 0x272520: 0x8c3e  dsrl32      $s1, $zero, 16
    ctx->pc = 0x272520u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) >> (32 + 16));
label_272524:
    // 0x272524: 0x7b00  sll         $t7, $zero, 12
    ctx->pc = 0x272524u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_272528:
    // 0x272528: 0x0  nop
    ctx->pc = 0x272528u;
    // NOP
label_27252c:
    // 0x27252c: 0x0  nop
    ctx->pc = 0x27252cu;
    // NOP
label_272530:
    // 0x272530: 0x8c4e  .word       0x00008C4E                   # INVALID     $zero, $zero, -0x73B2 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272530u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x272530 raw=0x00008C4E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_272534:
    // 0x272534: 0x4100  sll         $t0, $zero, 4
    ctx->pc = 0x272534u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_272538:
    // 0x272538: 0x0  nop
    ctx->pc = 0x272538u;
    // NOP
label_27253c:
    // 0x27253c: 0x0  nop
    ctx->pc = 0x27253cu;
    // NOP
label_272540:
    // 0x272540: 0x8c57  .word       0x00008C57                   # dsrav       $s1, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272540u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_272544:
    // 0x272544: 0x2670  tge         $zero, $zero, 153
    ctx->pc = 0x272544u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_272548:
    // 0x272548: 0x0  nop
    ctx->pc = 0x272548u;
    // NOP
label_27254c:
    // 0x27254c: 0x0  nop
    ctx->pc = 0x27254cu;
    // NOP
label_272550:
    // 0x272550: 0x8c5c  .word       0x00008C5C                   # dmult       $zero, $zero # 00008C40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272550u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x272550 raw=0x00008C5C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_272554:
    // 0x272554: 0x2500  sll         $a0, $zero, 20
    ctx->pc = 0x272554u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
label_272558:
    // 0x272558: 0x0  nop
    ctx->pc = 0x272558u;
    // NOP
label_27255c:
    // 0x27255c: 0x0  nop
    ctx->pc = 0x27255cu;
    // NOP
label_272560:
    // 0x272560: 0x8c61  .word       0x00008C61                   # addu        $s1, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272560u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_272564:
    // 0x272564: 0x1b70  tge         $zero, $zero, 109
    ctx->pc = 0x272564u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_272568:
    // 0x272568: 0x0  nop
    ctx->pc = 0x272568u;
    // NOP
label_27256c:
    // 0x27256c: 0x0  nop
    ctx->pc = 0x27256cu;
    // NOP
    ctx->pc = 0x272570u;
    return;
}

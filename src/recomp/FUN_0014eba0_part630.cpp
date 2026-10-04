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


void FUN_0014eba0_part630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x281db0u: goto label_281db0;
        case 0x281db4u: goto label_281db4;
        case 0x281db8u: goto label_281db8;
        case 0x281dbcu: goto label_281dbc;
        case 0x281dc0u: goto label_281dc0;
        case 0x281dc4u: goto label_281dc4;
        case 0x281dc8u: goto label_281dc8;
        case 0x281dccu: goto label_281dcc;
        case 0x281dd0u: goto label_281dd0;
        case 0x281dd4u: goto label_281dd4;
        case 0x281dd8u: goto label_281dd8;
        case 0x281ddcu: goto label_281ddc;
        case 0x281de0u: goto label_281de0;
        case 0x281de4u: goto label_281de4;
        case 0x281de8u: goto label_281de8;
        case 0x281decu: goto label_281dec;
        case 0x281df0u: goto label_281df0;
        case 0x281df4u: goto label_281df4;
        case 0x281df8u: goto label_281df8;
        case 0x281dfcu: goto label_281dfc;
        case 0x281e00u: goto label_281e00;
        case 0x281e04u: goto label_281e04;
        case 0x281e08u: goto label_281e08;
        case 0x281e0cu: goto label_281e0c;
        case 0x281e10u: goto label_281e10;
        case 0x281e14u: goto label_281e14;
        case 0x281e18u: goto label_281e18;
        case 0x281e1cu: goto label_281e1c;
        case 0x281e20u: goto label_281e20;
        case 0x281e24u: goto label_281e24;
        case 0x281e28u: goto label_281e28;
        case 0x281e2cu: goto label_281e2c;
        case 0x281e30u: goto label_281e30;
        case 0x281e34u: goto label_281e34;
        case 0x281e38u: goto label_281e38;
        case 0x281e3cu: goto label_281e3c;
        case 0x281e40u: goto label_281e40;
        case 0x281e44u: goto label_281e44;
        case 0x281e48u: goto label_281e48;
        case 0x281e4cu: goto label_281e4c;
        case 0x281e50u: goto label_281e50;
        case 0x281e54u: goto label_281e54;
        case 0x281e58u: goto label_281e58;
        case 0x281e5cu: goto label_281e5c;
        case 0x281e60u: goto label_281e60;
        case 0x281e64u: goto label_281e64;
        case 0x281e68u: goto label_281e68;
        case 0x281e6cu: goto label_281e6c;
        case 0x281e70u: goto label_281e70;
        case 0x281e74u: goto label_281e74;
        case 0x281e78u: goto label_281e78;
        case 0x281e7cu: goto label_281e7c;
        case 0x281e80u: goto label_281e80;
        case 0x281e84u: goto label_281e84;
        case 0x281e88u: goto label_281e88;
        case 0x281e8cu: goto label_281e8c;
        case 0x281e90u: goto label_281e90;
        case 0x281e94u: goto label_281e94;
        case 0x281e98u: goto label_281e98;
        case 0x281e9cu: goto label_281e9c;
        case 0x281ea0u: goto label_281ea0;
        case 0x281ea4u: goto label_281ea4;
        case 0x281ea8u: goto label_281ea8;
        case 0x281eacu: goto label_281eac;
        case 0x281eb0u: goto label_281eb0;
        case 0x281eb4u: goto label_281eb4;
        case 0x281eb8u: goto label_281eb8;
        case 0x281ebcu: goto label_281ebc;
        case 0x281ec0u: goto label_281ec0;
        case 0x281ec4u: goto label_281ec4;
        case 0x281ec8u: goto label_281ec8;
        case 0x281eccu: goto label_281ecc;
        case 0x281ed0u: goto label_281ed0;
        case 0x281ed4u: goto label_281ed4;
        case 0x281ed8u: goto label_281ed8;
        case 0x281edcu: goto label_281edc;
        case 0x281ee0u: goto label_281ee0;
        case 0x281ee4u: goto label_281ee4;
        case 0x281ee8u: goto label_281ee8;
        case 0x281eecu: goto label_281eec;
        case 0x281ef0u: goto label_281ef0;
        case 0x281ef4u: goto label_281ef4;
        case 0x281ef8u: goto label_281ef8;
        case 0x281efcu: goto label_281efc;
        case 0x281f00u: goto label_281f00;
        case 0x281f04u: goto label_281f04;
        case 0x281f08u: goto label_281f08;
        case 0x281f0cu: goto label_281f0c;
        case 0x281f10u: goto label_281f10;
        case 0x281f14u: goto label_281f14;
        case 0x281f18u: goto label_281f18;
        case 0x281f1cu: goto label_281f1c;
        case 0x281f20u: goto label_281f20;
        case 0x281f24u: goto label_281f24;
        case 0x281f28u: goto label_281f28;
        case 0x281f2cu: goto label_281f2c;
        case 0x281f30u: goto label_281f30;
        case 0x281f34u: goto label_281f34;
        case 0x281f38u: goto label_281f38;
        case 0x281f3cu: goto label_281f3c;
        case 0x281f40u: goto label_281f40;
        case 0x281f44u: goto label_281f44;
        case 0x281f48u: goto label_281f48;
        case 0x281f4cu: goto label_281f4c;
        case 0x281f50u: goto label_281f50;
        case 0x281f54u: goto label_281f54;
        case 0x281f58u: goto label_281f58;
        case 0x281f5cu: goto label_281f5c;
        case 0x281f60u: goto label_281f60;
        case 0x281f64u: goto label_281f64;
        case 0x281f68u: goto label_281f68;
        case 0x281f6cu: goto label_281f6c;
        case 0x281f70u: goto label_281f70;
        case 0x281f74u: goto label_281f74;
        case 0x281f78u: goto label_281f78;
        case 0x281f7cu: goto label_281f7c;
        case 0x281f80u: goto label_281f80;
        case 0x281f84u: goto label_281f84;
        case 0x281f88u: goto label_281f88;
        case 0x281f8cu: goto label_281f8c;
        case 0x281f90u: goto label_281f90;
        case 0x281f94u: goto label_281f94;
        case 0x281f98u: goto label_281f98;
        case 0x281f9cu: goto label_281f9c;
        case 0x281fa0u: goto label_281fa0;
        case 0x281fa4u: goto label_281fa4;
        case 0x281fa8u: goto label_281fa8;
        case 0x281facu: goto label_281fac;
        case 0x281fb0u: goto label_281fb0;
        case 0x281fb4u: goto label_281fb4;
        case 0x281fb8u: goto label_281fb8;
        case 0x281fbcu: goto label_281fbc;
        case 0x281fc0u: goto label_281fc0;
        case 0x281fc4u: goto label_281fc4;
        case 0x281fc8u: goto label_281fc8;
        case 0x281fccu: goto label_281fcc;
        case 0x281fd0u: goto label_281fd0;
        case 0x281fd4u: goto label_281fd4;
        case 0x281fd8u: goto label_281fd8;
        case 0x281fdcu: goto label_281fdc;
        case 0x281fe0u: goto label_281fe0;
        case 0x281fe4u: goto label_281fe4;
        case 0x281fe8u: goto label_281fe8;
        case 0x281fecu: goto label_281fec;
        case 0x281ff0u: goto label_281ff0;
        case 0x281ff4u: goto label_281ff4;
        case 0x281ff8u: goto label_281ff8;
        case 0x281ffcu: goto label_281ffc;
        case 0x282000u: goto label_282000;
        case 0x282004u: goto label_282004;
        case 0x282008u: goto label_282008;
        case 0x28200cu: goto label_28200c;
        case 0x282010u: goto label_282010;
        case 0x282014u: goto label_282014;
        case 0x282018u: goto label_282018;
        case 0x28201cu: goto label_28201c;
        case 0x282020u: goto label_282020;
        case 0x282024u: goto label_282024;
        case 0x282028u: goto label_282028;
        case 0x28202cu: goto label_28202c;
        case 0x282030u: goto label_282030;
        case 0x282034u: goto label_282034;
        case 0x282038u: goto label_282038;
        case 0x28203cu: goto label_28203c;
        case 0x282040u: goto label_282040;
        case 0x282044u: goto label_282044;
        case 0x282048u: goto label_282048;
        case 0x28204cu: goto label_28204c;
        case 0x282050u: goto label_282050;
        case 0x282054u: goto label_282054;
        case 0x282058u: goto label_282058;
        case 0x28205cu: goto label_28205c;
        case 0x282060u: goto label_282060;
        case 0x282064u: goto label_282064;
        case 0x282068u: goto label_282068;
        case 0x28206cu: goto label_28206c;
        case 0x282070u: goto label_282070;
        case 0x282074u: goto label_282074;
        case 0x282078u: goto label_282078;
        case 0x28207cu: goto label_28207c;
        case 0x282080u: goto label_282080;
        case 0x282084u: goto label_282084;
        case 0x282088u: goto label_282088;
        case 0x28208cu: goto label_28208c;
        case 0x282090u: goto label_282090;
        case 0x282094u: goto label_282094;
        case 0x282098u: goto label_282098;
        case 0x28209cu: goto label_28209c;
        case 0x2820a0u: goto label_2820a0;
        case 0x2820a4u: goto label_2820a4;
        case 0x2820a8u: goto label_2820a8;
        case 0x2820acu: goto label_2820ac;
        case 0x2820b0u: goto label_2820b0;
        case 0x2820b4u: goto label_2820b4;
        case 0x2820b8u: goto label_2820b8;
        case 0x2820bcu: goto label_2820bc;
        case 0x2820c0u: goto label_2820c0;
        case 0x2820c4u: goto label_2820c4;
        case 0x2820c8u: goto label_2820c8;
        case 0x2820ccu: goto label_2820cc;
        case 0x2820d0u: goto label_2820d0;
        case 0x2820d4u: goto label_2820d4;
        case 0x2820d8u: goto label_2820d8;
        case 0x2820dcu: goto label_2820dc;
        case 0x2820e0u: goto label_2820e0;
        case 0x2820e4u: goto label_2820e4;
        case 0x2820e8u: goto label_2820e8;
        case 0x2820ecu: goto label_2820ec;
        case 0x2820f0u: goto label_2820f0;
        case 0x2820f4u: goto label_2820f4;
        case 0x2820f8u: goto label_2820f8;
        case 0x2820fcu: goto label_2820fc;
        case 0x282100u: goto label_282100;
        case 0x282104u: goto label_282104;
        case 0x282108u: goto label_282108;
        case 0x28210cu: goto label_28210c;
        case 0x282110u: goto label_282110;
        case 0x282114u: goto label_282114;
        case 0x282118u: goto label_282118;
        case 0x28211cu: goto label_28211c;
        case 0x282120u: goto label_282120;
        case 0x282124u: goto label_282124;
        case 0x282128u: goto label_282128;
        case 0x28212cu: goto label_28212c;
        case 0x282130u: goto label_282130;
        case 0x282134u: goto label_282134;
        case 0x282138u: goto label_282138;
        case 0x28213cu: goto label_28213c;
        case 0x282140u: goto label_282140;
        case 0x282144u: goto label_282144;
        case 0x282148u: goto label_282148;
        case 0x28214cu: goto label_28214c;
        case 0x282150u: goto label_282150;
        case 0x282154u: goto label_282154;
        case 0x282158u: goto label_282158;
        case 0x28215cu: goto label_28215c;
        case 0x282160u: goto label_282160;
        case 0x282164u: goto label_282164;
        case 0x282168u: goto label_282168;
        case 0x28216cu: goto label_28216c;
        case 0x282170u: goto label_282170;
        case 0x282174u: goto label_282174;
        case 0x282178u: goto label_282178;
        case 0x28217cu: goto label_28217c;
        case 0x282180u: goto label_282180;
        case 0x282184u: goto label_282184;
        case 0x282188u: goto label_282188;
        case 0x28218cu: goto label_28218c;
        case 0x282190u: goto label_282190;
        case 0x282194u: goto label_282194;
        case 0x282198u: goto label_282198;
        case 0x28219cu: goto label_28219c;
        case 0x2821a0u: goto label_2821a0;
        case 0x2821a4u: goto label_2821a4;
        case 0x2821a8u: goto label_2821a8;
        case 0x2821acu: goto label_2821ac;
        case 0x2821b0u: goto label_2821b0;
        case 0x2821b4u: goto label_2821b4;
        case 0x2821b8u: goto label_2821b8;
        case 0x2821bcu: goto label_2821bc;
        case 0x2821c0u: goto label_2821c0;
        case 0x2821c4u: goto label_2821c4;
        case 0x2821c8u: goto label_2821c8;
        case 0x2821ccu: goto label_2821cc;
        case 0x2821d0u: goto label_2821d0;
        case 0x2821d4u: goto label_2821d4;
        case 0x2821d8u: goto label_2821d8;
        case 0x2821dcu: goto label_2821dc;
        case 0x2821e0u: goto label_2821e0;
        case 0x2821e4u: goto label_2821e4;
        case 0x2821e8u: goto label_2821e8;
        case 0x2821ecu: goto label_2821ec;
        case 0x2821f0u: goto label_2821f0;
        case 0x2821f4u: goto label_2821f4;
        case 0x2821f8u: goto label_2821f8;
        case 0x2821fcu: goto label_2821fc;
        case 0x282200u: goto label_282200;
        case 0x282204u: goto label_282204;
        case 0x282208u: goto label_282208;
        case 0x28220cu: goto label_28220c;
        case 0x282210u: goto label_282210;
        case 0x282214u: goto label_282214;
        case 0x282218u: goto label_282218;
        case 0x28221cu: goto label_28221c;
        case 0x282220u: goto label_282220;
        case 0x282224u: goto label_282224;
        case 0x282228u: goto label_282228;
        case 0x28222cu: goto label_28222c;
        case 0x282230u: goto label_282230;
        case 0x282234u: goto label_282234;
        case 0x282238u: goto label_282238;
        case 0x28223cu: goto label_28223c;
        case 0x282240u: goto label_282240;
        case 0x282244u: goto label_282244;
        case 0x282248u: goto label_282248;
        case 0x28224cu: goto label_28224c;
        case 0x282250u: goto label_282250;
        case 0x282254u: goto label_282254;
        case 0x282258u: goto label_282258;
        case 0x28225cu: goto label_28225c;
        case 0x282260u: goto label_282260;
        case 0x282264u: goto label_282264;
        case 0x282268u: goto label_282268;
        case 0x28226cu: goto label_28226c;
        case 0x282270u: goto label_282270;
        case 0x282274u: goto label_282274;
        case 0x282278u: goto label_282278;
        case 0x28227cu: goto label_28227c;
        case 0x282280u: goto label_282280;
        case 0x282284u: goto label_282284;
        case 0x282288u: goto label_282288;
        case 0x28228cu: goto label_28228c;
        case 0x282290u: goto label_282290;
        case 0x282294u: goto label_282294;
        case 0x282298u: goto label_282298;
        case 0x28229cu: goto label_28229c;
        case 0x2822a0u: goto label_2822a0;
        case 0x2822a4u: goto label_2822a4;
        case 0x2822a8u: goto label_2822a8;
        case 0x2822acu: goto label_2822ac;
        case 0x2822b0u: goto label_2822b0;
        case 0x2822b4u: goto label_2822b4;
        case 0x2822b8u: goto label_2822b8;
        case 0x2822bcu: goto label_2822bc;
        case 0x2822c0u: goto label_2822c0;
        case 0x2822c4u: goto label_2822c4;
        case 0x2822c8u: goto label_2822c8;
        case 0x2822ccu: goto label_2822cc;
        case 0x2822d0u: goto label_2822d0;
        case 0x2822d4u: goto label_2822d4;
        case 0x2822d8u: goto label_2822d8;
        case 0x2822dcu: goto label_2822dc;
        case 0x2822e0u: goto label_2822e0;
        case 0x2822e4u: goto label_2822e4;
        case 0x2822e8u: goto label_2822e8;
        case 0x2822ecu: goto label_2822ec;
        case 0x2822f0u: goto label_2822f0;
        case 0x2822f4u: goto label_2822f4;
        case 0x2822f8u: goto label_2822f8;
        case 0x2822fcu: goto label_2822fc;
        case 0x282300u: goto label_282300;
        case 0x282304u: goto label_282304;
        case 0x282308u: goto label_282308;
        case 0x28230cu: goto label_28230c;
        case 0x282310u: goto label_282310;
        case 0x282314u: goto label_282314;
        case 0x282318u: goto label_282318;
        case 0x28231cu: goto label_28231c;
        case 0x282320u: goto label_282320;
        case 0x282324u: goto label_282324;
        case 0x282328u: goto label_282328;
        case 0x28232cu: goto label_28232c;
        case 0x282330u: goto label_282330;
        case 0x282334u: goto label_282334;
        case 0x282338u: goto label_282338;
        case 0x28233cu: goto label_28233c;
        case 0x282340u: goto label_282340;
        case 0x282344u: goto label_282344;
        case 0x282348u: goto label_282348;
        case 0x28234cu: goto label_28234c;
        case 0x282350u: goto label_282350;
        case 0x282354u: goto label_282354;
        case 0x282358u: goto label_282358;
        case 0x28235cu: goto label_28235c;
        case 0x282360u: goto label_282360;
        case 0x282364u: goto label_282364;
        case 0x282368u: goto label_282368;
        case 0x28236cu: goto label_28236c;
        case 0x282370u: goto label_282370;
        case 0x282374u: goto label_282374;
        case 0x282378u: goto label_282378;
        case 0x28237cu: goto label_28237c;
        case 0x282380u: goto label_282380;
        case 0x282384u: goto label_282384;
        case 0x282388u: goto label_282388;
        case 0x28238cu: goto label_28238c;
        case 0x282390u: goto label_282390;
        case 0x282394u: goto label_282394;
        case 0x282398u: goto label_282398;
        case 0x28239cu: goto label_28239c;
        case 0x2823a0u: goto label_2823a0;
        case 0x2823a4u: goto label_2823a4;
        case 0x2823a8u: goto label_2823a8;
        case 0x2823acu: goto label_2823ac;
        case 0x2823b0u: goto label_2823b0;
        case 0x2823b4u: goto label_2823b4;
        case 0x2823b8u: goto label_2823b8;
        case 0x2823bcu: goto label_2823bc;
        case 0x2823c0u: goto label_2823c0;
        case 0x2823c4u: goto label_2823c4;
        case 0x2823c8u: goto label_2823c8;
        case 0x2823ccu: goto label_2823cc;
        case 0x2823d0u: goto label_2823d0;
        case 0x2823d4u: goto label_2823d4;
        case 0x2823d8u: goto label_2823d8;
        case 0x2823dcu: goto label_2823dc;
        case 0x2823e0u: goto label_2823e0;
        case 0x2823e4u: goto label_2823e4;
        case 0x2823e8u: goto label_2823e8;
        case 0x2823ecu: goto label_2823ec;
        case 0x2823f0u: goto label_2823f0;
        case 0x2823f4u: goto label_2823f4;
        case 0x2823f8u: goto label_2823f8;
        case 0x2823fcu: goto label_2823fc;
        case 0x282400u: goto label_282400;
        case 0x282404u: goto label_282404;
        case 0x282408u: goto label_282408;
        case 0x28240cu: goto label_28240c;
        case 0x282410u: goto label_282410;
        case 0x282414u: goto label_282414;
        case 0x282418u: goto label_282418;
        case 0x28241cu: goto label_28241c;
        case 0x282420u: goto label_282420;
        case 0x282424u: goto label_282424;
        case 0x282428u: goto label_282428;
        case 0x28242cu: goto label_28242c;
        case 0x282430u: goto label_282430;
        case 0x282434u: goto label_282434;
        case 0x282438u: goto label_282438;
        case 0x28243cu: goto label_28243c;
        case 0x282440u: goto label_282440;
        case 0x282444u: goto label_282444;
        case 0x282448u: goto label_282448;
        case 0x28244cu: goto label_28244c;
        case 0x282450u: goto label_282450;
        case 0x282454u: goto label_282454;
        case 0x282458u: goto label_282458;
        case 0x28245cu: goto label_28245c;
        case 0x282460u: goto label_282460;
        case 0x282464u: goto label_282464;
        case 0x282468u: goto label_282468;
        case 0x28246cu: goto label_28246c;
        case 0x282470u: goto label_282470;
        case 0x282474u: goto label_282474;
        case 0x282478u: goto label_282478;
        case 0x28247cu: goto label_28247c;
        case 0x282480u: goto label_282480;
        case 0x282484u: goto label_282484;
        case 0x282488u: goto label_282488;
        case 0x28248cu: goto label_28248c;
        case 0x282490u: goto label_282490;
        case 0x282494u: goto label_282494;
        case 0x282498u: goto label_282498;
        case 0x28249cu: goto label_28249c;
        case 0x2824a0u: goto label_2824a0;
        case 0x2824a4u: goto label_2824a4;
        case 0x2824a8u: goto label_2824a8;
        case 0x2824acu: goto label_2824ac;
        case 0x2824b0u: goto label_2824b0;
        case 0x2824b4u: goto label_2824b4;
        case 0x2824b8u: goto label_2824b8;
        case 0x2824bcu: goto label_2824bc;
        case 0x2824c0u: goto label_2824c0;
        case 0x2824c4u: goto label_2824c4;
        case 0x2824c8u: goto label_2824c8;
        case 0x2824ccu: goto label_2824cc;
        case 0x2824d0u: goto label_2824d0;
        case 0x2824d4u: goto label_2824d4;
        case 0x2824d8u: goto label_2824d8;
        case 0x2824dcu: goto label_2824dc;
        case 0x2824e0u: goto label_2824e0;
        case 0x2824e4u: goto label_2824e4;
        case 0x2824e8u: goto label_2824e8;
        case 0x2824ecu: goto label_2824ec;
        case 0x2824f0u: goto label_2824f0;
        case 0x2824f4u: goto label_2824f4;
        case 0x2824f8u: goto label_2824f8;
        case 0x2824fcu: goto label_2824fc;
        case 0x282500u: goto label_282500;
        case 0x282504u: goto label_282504;
        case 0x282508u: goto label_282508;
        case 0x28250cu: goto label_28250c;
        case 0x282510u: goto label_282510;
        case 0x282514u: goto label_282514;
        case 0x282518u: goto label_282518;
        case 0x28251cu: goto label_28251c;
        case 0x282520u: goto label_282520;
        case 0x282524u: goto label_282524;
        case 0x282528u: goto label_282528;
        case 0x28252cu: goto label_28252c;
        case 0x282530u: goto label_282530;
        case 0x282534u: goto label_282534;
        case 0x282538u: goto label_282538;
        case 0x28253cu: goto label_28253c;
        case 0x282540u: goto label_282540;
        case 0x282544u: goto label_282544;
        case 0x282548u: goto label_282548;
        case 0x28254cu: goto label_28254c;
        case 0x282550u: goto label_282550;
        case 0x282554u: goto label_282554;
        case 0x282558u: goto label_282558;
        case 0x28255cu: goto label_28255c;
        case 0x282560u: goto label_282560;
        case 0x282564u: goto label_282564;
        case 0x282568u: goto label_282568;
        case 0x28256cu: goto label_28256c;
        case 0x282570u: goto label_282570;
        case 0x282574u: goto label_282574;
        case 0x282578u: goto label_282578;
        case 0x28257cu: goto label_28257c;
        default: return;
    }

label_281db0:
    // 0x281db0: 0x7f7f7f7f  sq          $ra, 0x7F7F($k1)
    ctx->pc = 0x281db0u;
    WRITE128(ADD32(GPR_U32(ctx, 27), 32639), GPR_VEC(ctx, 31));
label_281db4:
    // 0x281db4: 0x7f7f7f7f  sq          $ra, 0x7F7F($k1)
    ctx->pc = 0x281db4u;
    WRITE128(ADD32(GPR_U32(ctx, 27), 32639), GPR_VEC(ctx, 31));
label_281db8:
    // 0x281db8: 0x7f7f7f7f  sq          $ra, 0x7F7F($k1)
    ctx->pc = 0x281db8u;
    WRITE128(ADD32(GPR_U32(ctx, 27), 32639), GPR_VEC(ctx, 31));
label_281dbc:
    // 0x281dbc: 0x7f7f7f7f  sq          $ra, 0x7F7F($k1)
    ctx->pc = 0x281dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 27), 32639), GPR_VEC(ctx, 31));
label_281dc0:
    // 0x281dc0: 0x7f7f7f7f  sq          $ra, 0x7F7F($k1)
    ctx->pc = 0x281dc0u;
    WRITE128(ADD32(GPR_U32(ctx, 27), 32639), GPR_VEC(ctx, 31));
label_281dc4:
    // 0x281dc4: 0x7f7f7f7f  sq          $ra, 0x7F7F($k1)
    ctx->pc = 0x281dc4u;
    WRITE128(ADD32(GPR_U32(ctx, 27), 32639), GPR_VEC(ctx, 31));
label_281dc8:
    // 0x281dc8: 0x7f7f7f7f  sq          $ra, 0x7F7F($k1)
    ctx->pc = 0x281dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 27), 32639), GPR_VEC(ctx, 31));
label_281dcc:
    // 0x281dcc: 0x7f7f7f7f  sq          $ra, 0x7F7F($k1)
    ctx->pc = 0x281dccu;
    WRITE128(ADD32(GPR_U32(ctx, 27), 32639), GPR_VEC(ctx, 31));
label_281dd0:
    // 0x281dd0: 0x7f7f7f7f  sq          $ra, 0x7F7F($k1)
    ctx->pc = 0x281dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 27), 32639), GPR_VEC(ctx, 31));
label_281dd4:
    // 0x281dd4: 0x7f7f7f7f  sq          $ra, 0x7F7F($k1)
    ctx->pc = 0x281dd4u;
    WRITE128(ADD32(GPR_U32(ctx, 27), 32639), GPR_VEC(ctx, 31));
label_281dd8:
    // 0x281dd8: 0x7f7f7f7f  sq          $ra, 0x7F7F($k1)
    ctx->pc = 0x281dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 27), 32639), GPR_VEC(ctx, 31));
label_281ddc:
    // 0x281ddc: 0x7f7f7f7f  sq          $ra, 0x7F7F($k1)
    ctx->pc = 0x281ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 27), 32639), GPR_VEC(ctx, 31));
label_281de0:
    // 0x281de0: 0x7f7f7f7f  sq          $ra, 0x7F7F($k1)
    ctx->pc = 0x281de0u;
    WRITE128(ADD32(GPR_U32(ctx, 27), 32639), GPR_VEC(ctx, 31));
label_281de4:
    // 0x281de4: 0x7f7f7f7f  sq          $ra, 0x7F7F($k1)
    ctx->pc = 0x281de4u;
    WRITE128(ADD32(GPR_U32(ctx, 27), 32639), GPR_VEC(ctx, 31));
label_281de8:
    // 0x281de8: 0x0  nop
    ctx->pc = 0x281de8u;
    // NOP
label_281dec:
    // 0x281dec: 0x0  nop
    ctx->pc = 0x281decu;
    // NOP
label_281df0:
    // 0x281df0: 0x7f7f7f7f  sq          $ra, 0x7F7F($k1)
    ctx->pc = 0x281df0u;
    WRITE128(ADD32(GPR_U32(ctx, 27), 32639), GPR_VEC(ctx, 31));
label_281df4:
    // 0x281df4: 0x7f7f7f7f  sq          $ra, 0x7F7F($k1)
    ctx->pc = 0x281df4u;
    WRITE128(ADD32(GPR_U32(ctx, 27), 32639), GPR_VEC(ctx, 31));
label_281df8:
    // 0x281df8: 0x7f7f7f7f  sq          $ra, 0x7F7F($k1)
    ctx->pc = 0x281df8u;
    WRITE128(ADD32(GPR_U32(ctx, 27), 32639), GPR_VEC(ctx, 31));
label_281dfc:
    // 0x281dfc: 0x7f7f7f7f  sq          $ra, 0x7F7F($k1)
    ctx->pc = 0x281dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 27), 32639), GPR_VEC(ctx, 31));
label_281e00:
    // 0x281e00: 0x7f7f7f7f  sq          $ra, 0x7F7F($k1)
    ctx->pc = 0x281e00u;
    WRITE128(ADD32(GPR_U32(ctx, 27), 32639), GPR_VEC(ctx, 31));
label_281e04:
    // 0x281e04: 0x0  nop
    ctx->pc = 0x281e04u;
    // NOP
label_281e08:
    // 0x281e08: 0x0  nop
    ctx->pc = 0x281e08u;
    // NOP
label_281e0c:
    // 0x281e0c: 0x0  nop
    ctx->pc = 0x281e0cu;
    // NOP
label_281e10:
    // 0x281e10: 0x7f7f7f7f  sq          $ra, 0x7F7F($k1)
    ctx->pc = 0x281e10u;
    WRITE128(ADD32(GPR_U32(ctx, 27), 32639), GPR_VEC(ctx, 31));
label_281e14:
    // 0x281e14: 0x7f7f7f7f  sq          $ra, 0x7F7F($k1)
    ctx->pc = 0x281e14u;
    WRITE128(ADD32(GPR_U32(ctx, 27), 32639), GPR_VEC(ctx, 31));
label_281e18:
    // 0x281e18: 0x7f7f7f7f  sq          $ra, 0x7F7F($k1)
    ctx->pc = 0x281e18u;
    WRITE128(ADD32(GPR_U32(ctx, 27), 32639), GPR_VEC(ctx, 31));
label_281e1c:
    // 0x281e1c: 0x7f7f7f7f  sq          $ra, 0x7F7F($k1)
    ctx->pc = 0x281e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 27), 32639), GPR_VEC(ctx, 31));
label_281e20:
    // 0x281e20: 0x7f7f7f7f  sq          $ra, 0x7F7F($k1)
    ctx->pc = 0x281e20u;
    WRITE128(ADD32(GPR_U32(ctx, 27), 32639), GPR_VEC(ctx, 31));
label_281e24:
    // 0x281e24: 0x0  nop
    ctx->pc = 0x281e24u;
    // NOP
label_281e28:
    // 0x281e28: 0x70707070  .word       0x70707070                   # pmfhl.uw    $t6 # 00700000 <InstrIdType: R5900_MMI_PMFHL>
    ctx->pc = 0x281e28u;
    SET_GPR_VEC(ctx, 14, PS2_PMFHL_UW(ctx->hi, ctx->lo));
label_281e2c:
    // 0x281e2c: 0x70707070  .word       0x70707070                   # pmfhl.uw    $t6 # 00700000 <InstrIdType: R5900_MMI_PMFHL>
    ctx->pc = 0x281e2cu;
    SET_GPR_VEC(ctx, 14, PS2_PMFHL_UW(ctx->hi, ctx->lo));
label_281e30:
    // 0x281e30: 0x7070  tge         $zero, $zero, 449
    ctx->pc = 0x281e30u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_281e34:
    // 0x281e34: 0x0  nop
    ctx->pc = 0x281e34u;
    // NOP
label_281e38:
    // 0x281e38: 0x0  nop
    ctx->pc = 0x281e38u;
    // NOP
label_281e3c:
    // 0x281e3c: 0x0  nop
    ctx->pc = 0x281e3cu;
    // NOP
label_281e40:
    // 0x281e40: 0x7f7f2040  sq          $ra, 0x2040($k1)
    ctx->pc = 0x281e40u;
    WRITE128(ADD32(GPR_U32(ctx, 27), 8256), GPR_VEC(ctx, 31));
label_281e44:
    // 0x281e44: 0x7f7f7f7f  sq          $ra, 0x7F7F($k1)
    ctx->pc = 0x281e44u;
    WRITE128(ADD32(GPR_U32(ctx, 27), 32639), GPR_VEC(ctx, 31));
label_281e48:
    // 0x281e48: 0x7f7f7f7f  sq          $ra, 0x7F7F($k1)
    ctx->pc = 0x281e48u;
    WRITE128(ADD32(GPR_U32(ctx, 27), 32639), GPR_VEC(ctx, 31));
label_281e4c:
    // 0x281e4c: 0x7f7f407f  sq          $ra, 0x407F($k1)
    ctx->pc = 0x281e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 27), 16511), GPR_VEC(ctx, 31));
label_281e50:
    // 0x281e50: 0x7f404040  sq          $zero, 0x4040($k0)
    ctx->pc = 0x281e50u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 16448), GPR_VEC(ctx, 0));
label_281e54:
    // 0x281e54: 0x7f7f7f7f  sq          $ra, 0x7F7F($k1)
    ctx->pc = 0x281e54u;
    WRITE128(ADD32(GPR_U32(ctx, 27), 32639), GPR_VEC(ctx, 31));
label_281e58:
    // 0x281e58: 0x7f407f7f  sq          $zero, 0x7F7F($k0)
    ctx->pc = 0x281e58u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 32639), GPR_VEC(ctx, 0));
label_281e5c:
    // 0x281e5c: 0x7f7f7f  .word       0x007F7F7F                   # dsra32      $t7, $ra, 29 # 00600000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281e5cu;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 31) >> (32 + 29));
label_281e60:
    // 0x281e60: 0x50505050  beql        $v0, $s0, . + 4 + (0x5050 << 2)
label_281e64:
    if (ctx->pc == 0x281E64u) {
        ctx->pc = 0x281E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281E60u;
        // 0x281e64: 0x50505050  beql        $v0, $s0, . + 4 + (0x5050 << 2) (Delay Slot)
        // Likely branch instruction at 0x281E64 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x281E68u;
        goto label_281e68;
    }
    ctx->pc = 0x281E60u;
    {
        const bool branch_taken_0x281e60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x281e60) {
            ctx->pc = 0x281E64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x281E60u;
            // 0x281e64: 0x50505050  beql        $v0, $s0, . + 4 + (0x5050 << 2) (Delay Slot)
            // Likely branch instruction at 0x281E64 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x295FA4u;
            { ctx->pc = 0x295fa4; return; }
        }
    }
    ctx->pc = 0x281E68u;
label_281e68:
    // 0x281e68: 0x50505050  beql        $v0, $s0, . + 4 + (0x5050 << 2)
label_281e6c:
    if (ctx->pc == 0x281E6Cu) {
        ctx->pc = 0x281E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281E68u;
        // 0x281e6c: 0x505050  .word       0x00505050                   # mfhi        $t2 # 00500040 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 10, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x281E70u;
        goto label_281e70;
    }
    ctx->pc = 0x281E68u;
    {
        const bool branch_taken_0x281e68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x281e68) {
            ctx->pc = 0x281E6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x281E68u;
            // 0x281e6c: 0x505050  .word       0x00505050                   # mfhi        $t2 # 00500040 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            SET_GPR_U64(ctx, 10, ctx->hi);
            ctx->in_delay_slot = false;
            ctx->pc = 0x295FACu;
            { ctx->pc = 0x295fac; return; }
        }
    }
    ctx->pc = 0x281E70u;
label_281e70:
    // 0x281e70: 0x281e60  .word       0x00281E60                   # add         $v1, $at, $t0 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281e70u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 8);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_281e74:
    // 0x281e74: 0x281d70  tge         $at, $t0, 117
    ctx->pc = 0x281e74u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 8)) { runtime->handleTrap(rdram, ctx); }
label_281e78:
    // 0x281e78: 0x281db0  tge         $at, $t0, 118
    ctx->pc = 0x281e78u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 8)) { runtime->handleTrap(rdram, ctx); }
label_281e7c:
    // 0x281e7c: 0x281df0  tge         $at, $t0, 119
    ctx->pc = 0x281e7cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 8)) { runtime->handleTrap(rdram, ctx); }
label_281e80:
    // 0x281e80: 0x281e10  .word       0x00281E10                   # mfhi        $v1 # 00280600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281e80u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_281e84:
    // 0x281e84: 0x281e28  .word       0x00281E28                   # mfsa        $v1 # 00280600 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x281e84u;
    SET_GPR_U32(ctx, 3, ctx->sa);
label_281e88:
    // 0x281e88: 0x281e40  .word       0x00281E40                   # sll         $v1, $t0, 25 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281e88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 25));
label_281e8c:
    // 0x281e8c: 0x281e40  .word       0x00281E40                   # sll         $v1, $t0, 25 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 25));
label_281e90:
    // 0x281e90: 0x2d0320  .word       0x002D0320                   # add         $zero, $at, $t5 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281e90u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 13);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_281e94:
    // 0x281e94: 0x2d0328  .word       0x002D0328                   # mfsa        $zero # 002D0300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x281e94u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_281e98:
    // 0x281e98: 0x281e60  .word       0x00281E60                   # add         $v1, $at, $t0 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281e98u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 8);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_281e9c:
    // 0x281e9c: 0x281e60  .word       0x00281E60                   # add         $v1, $at, $t0 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281e9cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 8);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_281ea0:
    // 0x281ea0: 0x281d70  tge         $at, $t0, 117
    ctx->pc = 0x281ea0u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 8)) { runtime->handleTrap(rdram, ctx); }
label_281ea4:
    // 0x281ea4: 0x281df0  tge         $at, $t0, 119
    ctx->pc = 0x281ea4u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 8)) { runtime->handleTrap(rdram, ctx); }
label_281ea8:
    // 0x281ea8: 0x2d0320  .word       0x002D0320                   # add         $zero, $at, $t5 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281ea8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 13);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_281eac:
    // 0x281eac: 0x0  nop
    ctx->pc = 0x281eacu;
    // NOP
label_281eb0:
    // 0x281eb0: 0x0  nop
    ctx->pc = 0x281eb0u;
    // NOP
label_281eb4:
    // 0x281eb4: 0x0  nop
    ctx->pc = 0x281eb4u;
    // NOP
label_281eb8:
    // 0x281eb8: 0x0  nop
    ctx->pc = 0x281eb8u;
    // NOP
label_281ebc:
    // 0x281ebc: 0x3fff  dsra32      $a3, $zero, 31
    ctx->pc = 0x281ebcu;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 0) >> (32 + 31));
label_281ec0:
    // 0x281ec0: 0x0  nop
    ctx->pc = 0x281ec0u;
    // NOP
label_281ec4:
    // 0x281ec4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281ec4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x281EC4 raw=0x00000001");
 /* MITIGATED */
label_281ec8:
    // 0x281ec8: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x281ec8u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_281ecc:
    // 0x281ecc: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x281eccu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_281ed0:
    // 0x281ed0: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x281ed0u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_281ed4:
    // 0x281ed4: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281ed4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x281ED4 raw=0x00000005");
 /* MITIGATED */
label_281ed8:
    // 0x281ed8: 0x0  nop
    ctx->pc = 0x281ed8u;
    // NOP
label_281edc:
    // 0x281edc: 0x0  nop
    ctx->pc = 0x281edcu;
    // NOP
label_281ee0:
    // 0x281ee0: 0x0  nop
    ctx->pc = 0x281ee0u;
    // NOP
label_281ee4:
    // 0x281ee4: 0x0  nop
    ctx->pc = 0x281ee4u;
    // NOP
label_281ee8:
    // 0x281ee8: 0x0  nop
    ctx->pc = 0x281ee8u;
    // NOP
label_281eec:
    // 0x281eec: 0x0  nop
    ctx->pc = 0x281eecu;
    // NOP
label_281ef0:
    // 0x281ef0: 0xa0004  sllv        $zero, $t2, $zero
    ctx->pc = 0x281ef0u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 0) & 0x1F));
label_281ef4:
    // 0x281ef4: 0x880  sll         $at, $zero, 2
    ctx->pc = 0x281ef4u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_281ef8:
    // 0x281ef8: 0x1d000003  bgtz        $t0, . + 4 + (0x3 << 2)
label_281efc:
    if (ctx->pc == 0x281EFCu) {
        ctx->pc = 0x281EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281EF8u;
        // 0x281efc: 0x1fffff  dsra32      $ra, $ra, 31 (Delay Slot)
        SET_GPR_S64(ctx, 31, GPR_S64(ctx, 31) >> (32 + 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281F00u;
        goto label_281f00;
    }
    ctx->pc = 0x281EF8u;
    {
        const bool branch_taken_0x281ef8 = (GPR_S32(ctx, 8) > 0);
        ctx->pc = 0x281EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281EF8u;
        // 0x281efc: 0x1fffff  dsra32      $ra, $ra, 31 (Delay Slot)
        SET_GPR_S64(ctx, 31, GPR_S64(ctx, 31) >> (32 + 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281ef8) {
            ctx->pc = 0x281F08u;
            goto label_281f08;
        }
    }
    ctx->pc = 0x281F00u;
label_281f00:
    // 0x281f00: 0x1d010003  .word       0x1D010003                   # bgtz        $t0, . + 4 + (0x3 << 2) # 00010000 <InstrIdType: CPU_NORMAL>
label_281f04:
    if (ctx->pc == 0x281F04u) {
        ctx->pc = 0x281F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281F00u;
        // 0x281f04: 0x1ffff  dsra32      $ra, $at, 31 (Delay Slot)
        SET_GPR_S64(ctx, 31, GPR_S64(ctx, 1) >> (32 + 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281F08u;
        goto label_281f08;
    }
    ctx->pc = 0x281F00u;
    {
        const bool branch_taken_0x281f00 = (GPR_S32(ctx, 8) > 0);
        ctx->pc = 0x281F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281F00u;
        // 0x281f04: 0x1ffff  dsra32      $ra, $at, 31 (Delay Slot)
        SET_GPR_S64(ctx, 31, GPR_S64(ctx, 1) >> (32 + 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281f00) {
            ctx->pc = 0x281F10u;
            goto label_281f10;
        }
    }
    ctx->pc = 0x281F08u;
label_281f08:
    // 0x281f08: 0x8000001  j           func_000004
label_281f0c:
    if (ctx->pc == 0x281F0Cu) {
        ctx->pc = 0x281F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281F08u;
        // 0x281f0c: 0xf00  sll         $at, $zero, 28 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281F10u;
        goto label_281f10;
    }
    ctx->pc = 0x281F08u;
    ctx->pc = 0x281F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281F08u;
    // 0x281f0c: 0xf00  sll         $at, $zero, 28 (Delay Slot)
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4u, 0x281F08u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x281F10u;
label_281f10:
    // 0x281f10: 0x8010001  j           func_040004
label_281f14:
    if (ctx->pc == 0x281F14u) {
        ctx->pc = 0x281F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281F10u;
        // 0x281f14: 0xf0c  syscall     60 (Delay Slot)
        ctx->pc = 0x281F18u;
        runtime->handleSyscall(rdram, ctx, 0x3Cu);
        ctx->in_delay_slot = false;
        ctx->pc = 0x281F18u;
        goto label_281f18;
    }
    ctx->pc = 0x281F10u;
    ctx->pc = 0x281F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281F10u;
    // 0x281f14: 0xf0c  syscall     60 (Delay Slot)
    ctx->pc = 0x281F18u;
    runtime->handleSyscall(rdram, ctx, 0x3Cu);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40004u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40004u, 0x281F10u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x281F18u;
label_281f18:
    // 0x281f18: 0xd810001  jal         func_6040004
label_281f1c:
    if (ctx->pc == 0x281F1Cu) {
        ctx->pc = 0x281F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281F18u;
        // 0x281f1c: 0x7fff  dsra32      $t7, $zero, 31 (Delay Slot)
        SET_GPR_S64(ctx, 15, GPR_S64(ctx, 0) >> (32 + 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281F20u;
        goto label_281f20;
    }
    ctx->pc = 0x281F18u;
    SET_GPR_U32(ctx, 31, 0x281F20u);
    ctx->pc = 0x281F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281F18u;
    // 0x281f1c: 0x7fff  dsra32      $t7, $zero, 31 (Delay Slot)
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 0) >> (32 + 31));
    ctx->in_delay_slot = false;
    ctx->pc = 0x6040004u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x6040004u, 0x281F18u, 0x281F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281F20u;
label_281f20:
    // 0x281f20: 0xe810001  jal         func_A040004
label_281f24:
    if (ctx->pc == 0x281F24u) {
        ctx->pc = 0x281F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281F20u;
        // 0x281f24: 0x7fff  dsra32      $t7, $zero, 31 (Delay Slot)
        SET_GPR_S64(ctx, 15, GPR_S64(ctx, 0) >> (32 + 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281F28u;
        goto label_281f28;
    }
    ctx->pc = 0x281F20u;
    SET_GPR_U32(ctx, 31, 0x281F28u);
    ctx->pc = 0x281F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281F20u;
    // 0x281f24: 0x7fff  dsra32      $t7, $zero, 31 (Delay Slot)
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 0) >> (32 + 31));
    ctx->in_delay_slot = false;
    ctx->pc = 0xA040004u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xA040004u, 0x281F20u, 0x281F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281F28u;
label_281f28:
    // 0x281f28: 0xf800001  jal         func_E000004
label_281f2c:
    if (ctx->pc == 0x281F2Cu) {
        ctx->pc = 0x281F30u;
        goto label_281f30;
    }
    ctx->pc = 0x281F28u;
    SET_GPR_U32(ctx, 31, 0x281F30u);
    ctx->pc = 0xE000004u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xE000004u, 0x281F28u, 0x281F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281F30u;
label_281f30:
    // 0x281f30: 0x10800001  beqz        $a0, . + 4 + (0x1 << 2)
label_281f34:
    if (ctx->pc == 0x281F34u) {
        ctx->pc = 0x281F38u;
        goto label_281f38;
    }
    ctx->pc = 0x281F30u;
    {
        const bool branch_taken_0x281f30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x281f30) {
            ctx->pc = 0x281F38u;
            goto label_281f38;
        }
    }
    ctx->pc = 0x281F38u;
label_281f38:
    // 0x281f38: 0xf810001  jal         func_E040004
label_281f3c:
    if (ctx->pc == 0x281F3Cu) {
        ctx->pc = 0x281F40u;
        goto label_281f40;
    }
    ctx->pc = 0x281F38u;
    SET_GPR_U32(ctx, 31, 0x281F40u);
    ctx->pc = 0xE040004u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xE040004u, 0x281F38u, 0x281F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281F40u;
label_281f40:
    // 0x281f40: 0x10810001  beq         $a0, $at, . + 4 + (0x1 << 2)
label_281f44:
    if (ctx->pc == 0x281F44u) {
        ctx->pc = 0x281F48u;
        goto label_281f48;
    }
    ctx->pc = 0x281F40u;
    {
        const bool branch_taken_0x281f40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 1));
        if (branch_taken_0x281f40) {
            ctx->pc = 0x281F48u;
            goto label_281f48;
        }
    }
    ctx->pc = 0x281F48u;
label_281f48:
    // 0x281f48: 0x1a010002  .word       0x1A010002                   # blez        $s0, . + 4 + (0x2 << 2) # 00010000 <InstrIdType: CPU_NORMAL>
label_281f4c:
    if (ctx->pc == 0x281F4Cu) {
        ctx->pc = 0x281F50u;
        goto label_281f50;
    }
    ctx->pc = 0x281F48u;
    {
        const bool branch_taken_0x281f48 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x281f48) {
            ctx->pc = 0x281F54u;
            goto label_281f54;
        }
    }
    ctx->pc = 0x281F50u;
label_281f50:
    // 0x281f50: 0x1b010002  .word       0x1B010002                   # blez        $t8, . + 4 + (0x2 << 2) # 00010000 <InstrIdType: CPU_NORMAL>
label_281f54:
    if (ctx->pc == 0x281F54u) {
        ctx->pc = 0x281F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281F50u;
        // 0x281f54: 0x3fffff  .word       0x003FFFFF                   # dsra32      $ra, $ra, 31 # 00200000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S64(ctx, 31, GPR_S64(ctx, 31) >> (32 + 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281F58u;
        goto label_281f58;
    }
    ctx->pc = 0x281F50u;
    {
        const bool branch_taken_0x281f50 = (GPR_S32(ctx, 24) <= 0);
        ctx->pc = 0x281F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281F50u;
        // 0x281f54: 0x3fffff  .word       0x003FFFFF                   # dsra32      $ra, $ra, 31 # 00200000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S64(ctx, 31, GPR_S64(ctx, 31) >> (32 + 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281f50) {
            ctx->pc = 0x281F5Cu;
            goto label_281f5c;
        }
    }
    ctx->pc = 0x281F58u;
label_281f58:
    // 0x281f58: 0x0  nop
    ctx->pc = 0x281f58u;
    // NOP
label_281f5c:
    // 0x281f5c: 0x0  nop
    ctx->pc = 0x281f5cu;
    // NOP
label_281f60:
    // 0x281f60: 0x9800001  j           func_6000004
label_281f64:
    if (ctx->pc == 0x281F64u) {
        ctx->pc = 0x281F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281F60u;
        // 0x281f64: 0x3fff  dsra32      $a3, $zero, 31 (Delay Slot)
        SET_GPR_S64(ctx, 7, GPR_S64(ctx, 0) >> (32 + 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281F68u;
        goto label_281f68;
    }
    ctx->pc = 0x281F60u;
    ctx->pc = 0x281F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281F60u;
    // 0x281f64: 0x3fff  dsra32      $a3, $zero, 31 (Delay Slot)
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 0) >> (32 + 31));
    ctx->in_delay_slot = false;
    ctx->pc = 0x6000004u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x6000004u, 0x281F60u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x281F68u;
label_281f68:
    // 0x281f68: 0xa800001  j           func_A000004
label_281f6c:
    if (ctx->pc == 0x281F6Cu) {
        ctx->pc = 0x281F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281F68u;
        // 0x281f6c: 0x3fff  dsra32      $a3, $zero, 31 (Delay Slot)
        SET_GPR_S64(ctx, 7, GPR_S64(ctx, 0) >> (32 + 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281F70u;
        goto label_281f70;
    }
    ctx->pc = 0x281F68u;
    ctx->pc = 0x281F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281F68u;
    // 0x281f6c: 0x3fff  dsra32      $a3, $zero, 31 (Delay Slot)
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 0) >> (32 + 31));
    ctx->in_delay_slot = false;
    ctx->pc = 0xA000004u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xA000004u, 0x281F68u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x281F70u;
label_281f70:
    // 0x281f70: 0x9810001  j           func_6040004
label_281f74:
    if (ctx->pc == 0x281F74u) {
        ctx->pc = 0x281F78u;
        goto label_281f78;
    }
    ctx->pc = 0x281F70u;
    ctx->pc = 0x6040004u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x6040004u, 0x281F70u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x281F78u;
label_281f78:
    // 0x281f78: 0xa810001  j           func_A040004
label_281f7c:
    if (ctx->pc == 0x281F7Cu) {
        ctx->pc = 0x281F80u;
        goto label_281f80;
    }
    ctx->pc = 0x281F78u;
    ctx->pc = 0xA040004u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xA040004u, 0x281F78u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x281F80u;
label_281f80:
    // 0x281f80: 0x1ec81eff  .word       0x1EC81EFF                   # bgtz        $s6, . + 4 + (0x1EFF << 2) # 00080000 <InstrIdType: CPU_NORMAL>
label_281f84:
    if (ctx->pc == 0x281F84u) {
        ctx->pc = 0x281F88u;
        goto label_281f88;
    }
    ctx->pc = 0x281F80u;
    {
        const bool branch_taken_0x281f80 = (GPR_S32(ctx, 22) > 0);
        if (branch_taken_0x281f80) {
            ctx->pc = 0x289B80u;
            { ctx->pc = 0x289b80; return; }
        }
    }
    ctx->pc = 0x281F88u;
label_281f88:
    // 0x281f88: 0x0  nop
    ctx->pc = 0x281f88u;
    // NOP
label_281f8c:
    // 0x281f8c: 0xc81ec800  lwc2        $30, -0x3800($zero)
    ctx->pc = 0x281f8cu;
//     throw std::runtime_error("Unhandled opcode: 0x32 at 0x281F8C raw=0xC81EC800");
 /* MITIGATED */
label_281f90:
    // 0x281f90: 0x1e  ddiv        $zero, $zero, $zero
    ctx->pc = 0x281f90u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x281F90 raw=0x0000001E");
 /* MITIGATED */
label_281f94:
    // 0x281f94: 0x0  nop
    ctx->pc = 0x281f94u;
    // NOP
label_281f98:
    // 0x281f98: 0x0  nop
    ctx->pc = 0x281f98u;
    // NOP
label_281f9c:
    // 0x281f9c: 0x0  nop
    ctx->pc = 0x281f9cu;
    // NOP
label_281fa0:
    // 0x281fa0: 0x8005  .word       0x00008005                   # INVALID     $zero, $zero, -0x7FFB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281fa0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x281FA0 raw=0x00008005");
 /* MITIGATED */
label_281fa4:
    // 0x281fa4: 0x10000000  b           . + 4 + (0x0 << 2)
label_281fa8:
    if (ctx->pc == 0x281FA8u) {
        ctx->pc = 0x281FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281FA4u;
        // 0x281fa8: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
//         throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x281FA8 raw=0x0000000E");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x281FACu;
        goto label_281fac;
    }
    ctx->pc = 0x281FA4u;
    {
        const bool branch_taken_0x281fa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x281FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281FA4u;
        // 0x281fa8: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
//         throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x281FA8 raw=0x0000000E");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        if (branch_taken_0x281fa4) {
            ctx->pc = 0x281FA8u;
            goto label_281fa8;
        }
    }
    ctx->pc = 0x281FACu;
label_281fac:
    // 0x281fac: 0x0  nop
    ctx->pc = 0x281facu;
    // NOP
label_281fb0:
    // 0x281fb0: 0x0  nop
    ctx->pc = 0x281fb0u;
    // NOP
label_281fb4:
    // 0x281fb4: 0xbf800000  cache       0x00, 0x0($gp)
    ctx->pc = 0x281fb4u;
    // CACHE instruction (ignored)
label_281fb8:
    // 0x281fb8: 0x0  nop
    ctx->pc = 0x281fb8u;
    // NOP
label_281fbc:
    // 0x281fbc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x281fbcu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_281fc0:
    // 0x281fc0: 0x0  nop
    ctx->pc = 0x281fc0u;
    // NOP
label_281fc4:
    // 0x281fc4: 0xbf800000  cache       0x00, 0x0($gp)
    ctx->pc = 0x281fc4u;
    // CACHE instruction (ignored)
label_281fc8:
    // 0x281fc8: 0x0  nop
    ctx->pc = 0x281fc8u;
    // NOP
label_281fcc:
    // 0x281fcc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x281fccu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_281fd0:
    // 0x281fd0: 0x7ce  .word       0x000007CE                   # INVALID     $zero, $zero, 0x7CE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281fd0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x281FD0 raw=0x000007CE");
 /* MITIGATED */
label_281fd4:
    // 0x281fd4: 0x7cf  sync.p
    ctx->pc = 0x281fd4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_281fd8:
    // 0x281fd8: 0x7d0  .word       0x000007D0                   # mfhi        $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281fd8u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_281fdc:
    // 0x281fdc: 0x7d1  .word       0x000007D1                   # mthi        $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281fdcu;
    ctx->hi = GPR_U64(ctx, 0);
label_281fe0:
    // 0x281fe0: 0x7d2  .word       0x000007D2                   # mflo        $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281fe0u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_281fe4:
    // 0x281fe4: 0x7d3  .word       0x000007D3                   # mtlo        $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281fe4u;
    ctx->lo = GPR_U64(ctx, 0);
label_281fe8:
    // 0x281fe8: 0x7d4  .word       0x000007D4                   # dsllv       $zero, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281fe8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_281fec:
    // 0x281fec: 0x7d5  .word       0x000007D5                   # INVALID     $zero, $zero, 0x7D5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281fecu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x281FEC raw=0x000007D5");
 /* MITIGATED */
label_281ff0:
    // 0x281ff0: 0x7d6  .word       0x000007D6                   # dsrlv       $zero, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281ff0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_281ff4:
    // 0x281ff4: 0x7d7  .word       0x000007D7                   # dsrav       $zero, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281ff4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_281ff8:
    // 0x281ff8: 0x7d8  .word       0x000007D8                   # mult        $zero, $zero, $zero # 000007C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x281ff8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_281ffc:
    // 0x281ffc: 0x7d9  .word       0x000007D9                   # multu       $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281ffcu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_282000:
    // 0x282000: 0x7da  .word       0x000007DA                   # div         $zero, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x282000u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_282004:
    // 0x282004: 0x7db  .word       0x000007DB                   # divu        $zero, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x282004u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_282008:
    // 0x282008: 0x7dc  .word       0x000007DC                   # dmult       $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x282008u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x282008 raw=0x000007DC");
 /* MITIGATED */
label_28200c:
    // 0x28200c: 0x7dd  .word       0x000007DD                   # dmultu      $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28200cu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x28200C raw=0x000007DD");
 /* MITIGATED */
label_282010:
    // 0x282010: 0x7de  .word       0x000007DE                   # ddiv        $zero, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x282010u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x282010 raw=0x000007DE");
 /* MITIGATED */
label_282014:
    // 0x282014: 0x7df  .word       0x000007DF                   # ddivu       $zero, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x282014u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x282014 raw=0x000007DF");
 /* MITIGATED */
label_282018:
    // 0x282018: 0x7e0  .word       0x000007E0                   # add         $zero, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x282018u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_28201c:
    // 0x28201c: 0x7e1  .word       0x000007E1                   # addu        $zero, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28201cu;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_282020:
    // 0x282020: 0x7e2  .word       0x000007E2                   # neg         $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x282020u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 0, (int32_t)tmp); }
label_282024:
    // 0x282024: 0x7e3  .word       0x000007E3                   # negu        $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x282024u;
    SET_GPR_S32(ctx, 0, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_282028:
    // 0x282028: 0x7e4  .word       0x000007E4                   # and         $zero, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x282028u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_28202c:
    // 0x28202c: 0x0  nop
    ctx->pc = 0x28202cu;
    // NOP
label_282030:
    // 0x282030: 0x7b7  .word       0x000007B7                   # INVALID     $zero, $zero, 0x7B7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x282030u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x282030 raw=0x000007B7");
 /* MITIGATED */
label_282034:
    // 0x282034: 0x7b8  dsll        $zero, $zero, 30
    ctx->pc = 0x282034u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 30);
label_282038:
    // 0x282038: 0x7b9  .word       0x000007B9                   # INVALID     $zero, $zero, 0x7B9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x282038u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x282038 raw=0x000007B9");
 /* MITIGATED */
label_28203c:
    // 0x28203c: 0x7ba  dsrl        $zero, $zero, 30
    ctx->pc = 0x28203cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> 30);
label_282040:
    // 0x282040: 0x7bb  dsra        $zero, $zero, 30
    ctx->pc = 0x282040u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> 30);
label_282044:
    // 0x282044: 0x7bc  dsll32      $zero, $zero, 30
    ctx->pc = 0x282044u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 30));
label_282048:
    // 0x282048: 0x7bd  .word       0x000007BD                   # INVALID     $zero, $zero, 0x7BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x282048u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x282048 raw=0x000007BD");
 /* MITIGATED */
label_28204c:
    // 0x28204c: 0x7be  dsrl32      $zero, $zero, 30
    ctx->pc = 0x28204cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (32 + 30));
label_282050:
    // 0x282050: 0x7bf  dsra32      $zero, $zero, 30
    ctx->pc = 0x282050u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 30));
label_282054:
    // 0x282054: 0x7c0  sll         $zero, $zero, 31
    ctx->pc = 0x282054u;
    
label_282058:
    // 0x282058: 0x7c1  .word       0x000007C1                   # INVALID     $zero, $zero, 0x7C1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x282058u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x282058 raw=0x000007C1");
 /* MITIGATED */
label_28205c:
    // 0x28205c: 0x7c2  srl         $zero, $zero, 31
    ctx->pc = 0x28205cu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 31));
label_282060:
    // 0x282060: 0x7c3  sra         $zero, $zero, 31
    ctx->pc = 0x282060u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 31));
label_282064:
    // 0x282064: 0x7c4  .word       0x000007C4                   # sllv        $zero, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x282064u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_282068:
    // 0x282068: 0x7c5  .word       0x000007C5                   # INVALID     $zero, $zero, 0x7C5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x282068u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x282068 raw=0x000007C5");
 /* MITIGATED */
label_28206c:
    // 0x28206c: 0x7c6  .word       0x000007C6                   # srlv        $zero, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28206cu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_282070:
    // 0x282070: 0x7c7  .word       0x000007C7                   # srav        $zero, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x282070u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_282074:
    // 0x282074: 0x7c8  .word       0x000007C8                   # jr          $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
label_282078:
    if (ctx->pc == 0x282078u) {
        ctx->pc = 0x282078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282074u;
        // 0x282078: 0x7c9  .word       0x000007C9                   # jalr        $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JALR $0, $0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x28207Cu;
        goto label_28207c;
    }
    ctx->pc = 0x282074u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x282078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282074u;
        // 0x282078: 0x7c9  .word       0x000007C9                   # jalr        $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JALR $0, $0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x282074u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x28207Cu;
label_28207c:
    // 0x28207c: 0x7ca  .word       0x000007CA                   # movz        $zero, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28207cu;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_282080:
    // 0x282080: 0x7cb  .word       0x000007CB                   # movn        $zero, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x282080u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_282084:
    // 0x282084: 0x7cc  syscall     31
    ctx->pc = 0x282084u;
    ctx->pc = 0x282088u;
runtime->handleSyscall(rdram, ctx, 0x1Fu);
label_282088:
    // 0x282088: 0x7cd  break       0, 31
    ctx->pc = 0x282088u;
    runtime->handleBreak(rdram, ctx);
label_28208c:
    // 0x28208c: 0x0  nop
    ctx->pc = 0x28208cu;
    // NOP
label_282090:
    // 0x282090: 0xb13  .word       0x00000B13                   # mtlo        $zero # 00000B00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x282090u;
    ctx->lo = GPR_U64(ctx, 0);
label_282094:
    // 0x282094: 0xb14  .word       0x00000B14                   # dsllv       $at, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x282094u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_282098:
    // 0x282098: 0xb15  .word       0x00000B15                   # INVALID     $zero, $zero, 0xB15 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x282098u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x282098 raw=0x00000B15");
 /* MITIGATED */
label_28209c:
    // 0x28209c: 0xb16  .word       0x00000B16                   # dsrlv       $at, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28209cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_2820a0:
    // 0x2820a0: 0xb17  .word       0x00000B17                   # dsrav       $at, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2820a0u;
    SET_GPR_S64(ctx, 1, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_2820a4:
    // 0x2820a4: 0xb18  .word       0x00000B18                   # mult        $at, $zero, $zero # 00000300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2820a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
label_2820a8:
    // 0x2820a8: 0xb19  .word       0x00000B19                   # multu       $zero, $zero # 00000B00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2820a8u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
label_2820ac:
    // 0x2820ac: 0xb1a  .word       0x00000B1A                   # div         $at, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2820acu;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_2820b0:
    // 0x2820b0: 0xb1b  .word       0x00000B1B                   # divu        $at, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2820b0u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_2820b4:
    // 0x2820b4: 0xb1c  .word       0x00000B1C                   # dmult       $zero, $zero # 00000B00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2820b4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2820B4 raw=0x00000B1C");
 /* MITIGATED */
label_2820b8:
    // 0x2820b8: 0xb1d  .word       0x00000B1D                   # dmultu      $zero, $zero # 00000B00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2820b8u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x2820B8 raw=0x00000B1D");
 /* MITIGATED */
label_2820bc:
    // 0x2820bc: 0xb1e  .word       0x00000B1E                   # ddiv        $at, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2820bcu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x2820BC raw=0x00000B1E");
 /* MITIGATED */
label_2820c0:
    // 0x2820c0: 0xb1f  .word       0x00000B1F                   # ddivu       $at, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2820c0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2820C0 raw=0x00000B1F");
 /* MITIGATED */
label_2820c4:
    // 0x2820c4: 0xb20  .word       0x00000B20                   # add         $at, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2820c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_2820c8:
    // 0x2820c8: 0xb21  .word       0x00000B21                   # addu        $at, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2820c8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2820cc:
    // 0x2820cc: 0xb22  .word       0x00000B22                   # neg         $at, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2820ccu;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 1, (int32_t)tmp); }
label_2820d0:
    // 0x2820d0: 0xb23  .word       0x00000B23                   # negu        $at, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2820d0u;
    SET_GPR_S32(ctx, 1, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2820d4:
    // 0x2820d4: 0xb24  .word       0x00000B24                   # and         $at, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2820d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_2820d8:
    // 0x2820d8: 0xb25  .word       0x00000B25                   # move        $at, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2820d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_2820dc:
    // 0x2820dc: 0xb26  .word       0x00000B26                   # xor         $at, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2820dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_2820e0:
    // 0x2820e0: 0xb27  .word       0x00000B27                   # not         $at, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2820e0u;
    SET_GPR_U64(ctx, 1, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_2820e4:
    // 0x2820e4: 0xb28  .word       0x00000B28                   # mfsa        $at # 00000300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2820e4u;
    SET_GPR_U32(ctx, 1, ctx->sa);
label_2820e8:
    // 0x2820e8: 0xb29  .word       0x00000B29                   # mtsa        $zero # 00000B00 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2820e8u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_2820ec:
    // 0x2820ec: 0x0  nop
    ctx->pc = 0x2820ecu;
    // NOP
label_2820f0:
    // 0x2820f0: 0xafb  dsra        $at, $zero, 11
    ctx->pc = 0x2820f0u;
    SET_GPR_S64(ctx, 1, GPR_S64(ctx, 0) >> 11);
label_2820f4:
    // 0x2820f4: 0xafc  dsll32      $at, $zero, 11
    ctx->pc = 0x2820f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) << (32 + 11));
label_2820f8:
    // 0x2820f8: 0xafd  .word       0x00000AFD                   # INVALID     $zero, $zero, 0xAFD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2820f8u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2820F8 raw=0x00000AFD");
 /* MITIGATED */
label_2820fc:
    // 0x2820fc: 0xafe  dsrl32      $at, $zero, 11
    ctx->pc = 0x2820fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) >> (32 + 11));
label_282100:
    // 0x282100: 0xaff  dsra32      $at, $zero, 11
    ctx->pc = 0x282100u;
    SET_GPR_S64(ctx, 1, GPR_S64(ctx, 0) >> (32 + 11));
label_282104:
    // 0x282104: 0xb00  sll         $at, $zero, 12
    ctx->pc = 0x282104u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_282108:
    // 0x282108: 0xb01  .word       0x00000B01                   # INVALID     $zero, $zero, 0xB01 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x282108u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x282108 raw=0x00000B01");
 /* MITIGATED */
label_28210c:
    // 0x28210c: 0xb02  srl         $at, $zero, 12
    ctx->pc = 0x28210cu;
    SET_GPR_S32(ctx, 1, (int32_t)SRL32(GPR_U32(ctx, 0), 12));
label_282110:
    // 0x282110: 0xb03  sra         $at, $zero, 12
    ctx->pc = 0x282110u;
    SET_GPR_S32(ctx, 1, SRA32(GPR_S32(ctx, 0), 12));
label_282114:
    // 0x282114: 0xb05  .word       0x00000B05                   # INVALID     $zero, $zero, 0xB05 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x282114u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x282114 raw=0x00000B05");
 /* MITIGATED */
label_282118:
    // 0x282118: 0xb06  .word       0x00000B06                   # srlv        $at, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x282118u;
    SET_GPR_S32(ctx, 1, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_28211c:
    // 0x28211c: 0xb07  .word       0x00000B07                   # srav        $at, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28211cu;
    SET_GPR_S32(ctx, 1, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_282120:
    // 0x282120: 0xb08  .word       0x00000B08                   # jr          $zero # 00000B00 <InstrIdType: CPU_SPECIAL>
label_282124:
    if (ctx->pc == 0x282124u) {
        ctx->pc = 0x282124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282120u;
        // 0x282124: 0xb09  .word       0x00000B09                   # jalr        $at, $zero # 00000300 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JALR $1, $0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x282128u;
        goto label_282128;
    }
    ctx->pc = 0x282120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x282124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282120u;
        // 0x282124: 0xb09  .word       0x00000B09                   # jalr        $at, $zero # 00000300 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JALR $1, $0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x282120u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x282128u;
label_282128:
    // 0x282128: 0xb0a  .word       0x00000B0A                   # movz        $at, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x282128u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 1, GPR_VEC(ctx, 0));
label_28212c:
    // 0x28212c: 0xb0b  .word       0x00000B0B                   # movn        $at, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28212cu;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 1, GPR_VEC(ctx, 0));
label_282130:
    // 0x282130: 0xb0c  syscall     44
    ctx->pc = 0x282130u;
    ctx->pc = 0x282134u;
runtime->handleSyscall(rdram, ctx, 0x2Cu);
label_282134:
    // 0x282134: 0xb0d  break       0, 44
    ctx->pc = 0x282134u;
    runtime->handleBreak(rdram, ctx);
label_282138:
    // 0x282138: 0xb0e  .word       0x00000B0E                   # INVALID     $zero, $zero, 0xB0E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x282138u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x282138 raw=0x00000B0E");
 /* MITIGATED */
label_28213c:
    // 0x28213c: 0xb0f  .word       0x00000B0F                   # sync # 00000800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28213cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_282140:
    // 0x282140: 0xb10  .word       0x00000B10                   # mfhi        $at # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x282140u;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_282144:
    // 0x282144: 0xb11  .word       0x00000B11                   # mthi        $zero # 00000B00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x282144u;
    ctx->hi = GPR_U64(ctx, 0);
label_282148:
    // 0x282148: 0xb12  .word       0x00000B12                   # mflo        $at # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x282148u;
    SET_GPR_U64(ctx, 1, ctx->lo);
label_28214c:
    // 0x28214c: 0x0  nop
    ctx->pc = 0x28214cu;
    // NOP
label_282150:
    // 0x282150: 0x4783d600  .word       0x4783D600                   # INVALID     $gp, $v1, -0x2A00 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x282150u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x1C, function 0x0 at 0x282150 raw=0x4783D600");
 /* MITIGATED */
label_282154:
    // 0x282154: 0x0  nop
    ctx->pc = 0x282154u;
    // NOP
label_282158:
    // 0x282158: 0x46c73800  .word       0x46C73800                   # INVALID     $s6, $a3, 0x3800 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x282158u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x16, function 0x0 at 0x282158 raw=0x46C73800");
 /* MITIGATED */
label_28215c:
    // 0x28215c: 0x0  nop
    ctx->pc = 0x28215cu;
    // NOP
label_282160:
    // 0x282160: 0x4783d600  .word       0x4783D600                   # INVALID     $gp, $v1, -0x2A00 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x282160u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x1C, function 0x0 at 0x282160 raw=0x4783D600");
 /* MITIGATED */
label_282164:
    // 0x282164: 0x0  nop
    ctx->pc = 0x282164u;
    // NOP
label_282168:
    // 0x282168: 0x46cf0800  .word       0x46CF0800                   # INVALID     $s6, $t7, 0x800 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x282168u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x16, function 0x0 at 0x282168 raw=0x46CF0800");
 /* MITIGATED */
label_28216c:
    // 0x28216c: 0x0  nop
    ctx->pc = 0x28216cu;
    // NOP
label_282170:
    // 0x282170: 0x0  nop
    ctx->pc = 0x282170u;
    // NOP
label_282174:
    // 0x282174: 0x80  sll         $zero, $zero, 2
    ctx->pc = 0x282174u;
    
label_282178:
    // 0x282178: 0x48  .word       0x00000048                   # jr          $zero # 00000040 <InstrIdType: CPU_SPECIAL>
label_28217c:
    if (ctx->pc == 0x28217Cu) {
        ctx->pc = 0x28217Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282178u;
        // 0x28217c: 0x80  sll         $zero, $zero, 2 (Delay Slot)
        ctx->in_delay_slot = false;
        ctx->pc = 0x282180u;
        goto label_282180;
    }
    ctx->pc = 0x282178u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x28217Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282178u;
        // 0x28217c: 0x80  sll         $zero, $zero, 2 (Delay Slot)
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x282178u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x282180u;
label_282180:
    // 0x282180: 0x44  .word       0x00000044                   # sllv        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x282180u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_282184:
    // 0x282184: 0x80  sll         $zero, $zero, 2
    ctx->pc = 0x282184u;
    
label_282188:
    // 0x282188: 0x42  srl         $zero, $zero, 1
    ctx->pc = 0x282188u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 1));
label_28218c:
    // 0x28218c: 0x80  sll         $zero, $zero, 2
    ctx->pc = 0x28218cu;
    
label_282190:
    // 0x282190: 0x44d80000  ctc1        $t8, $0
    ctx->pc = 0x282190u;
    // CTC1 to FCR0 ignored
label_282194:
    // 0x282194: 0x44f20000  .word       0x44F20000                   # INVALID     $a3, $s2, 0x0 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x282194u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x7, function 0x0 at 0x282194 raw=0x44F20000");
 /* MITIGATED */
label_282198:
    // 0x282198: 0x0  nop
    ctx->pc = 0x282198u;
    // NOP
label_28219c:
    // 0x28219c: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28219cu;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x28219C raw=0x42800000");
 /* MITIGATED */
label_2821a0:
    // 0x2821a0: 0x45140000  .word       0x45140000                   # INVALID     $t0, $s4, 0x0 # 00000000 <InstrIdType: CPU_COP1_BC1>
    ctx->pc = 0x2821a0u;
    // FPU branch instruction - handled elsewhere
label_2821a4:
    // 0x2821a4: 0x45070000  .word       0x45070000                   # INVALID     $t0, $a3, 0x0 # 00000000 <InstrIdType: CPU_COP1_BC1>
    ctx->pc = 0x2821a4u;
    // FPU branch instruction - handled elsewhere
label_2821a8:
    // 0x2821a8: 0x0  nop
    ctx->pc = 0x2821a8u;
    // NOP
label_2821ac:
    // 0x2821ac: 0x463b8000  .word       0x463B8000                   # INVALID     $s1, $k1, -0x8000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2821acu;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x11, function 0x0 at 0x2821AC raw=0x463B8000");
 /* MITIGATED */
label_2821b0:
    // 0x2821b0: 0x0  nop
    ctx->pc = 0x2821b0u;
    // NOP
label_2821b4:
    // 0x2821b4: 0x0  nop
    ctx->pc = 0x2821b4u;
    // NOP
label_2821b8:
    // 0x2821b8: 0x0  nop
    ctx->pc = 0x2821b8u;
    // NOP
label_2821bc:
    // 0x2821bc: 0x0  nop
    ctx->pc = 0x2821bcu;
    // NOP
label_2821c0:
    // 0x2821c0: 0x0  nop
    ctx->pc = 0x2821c0u;
    // NOP
label_2821c4:
    // 0x2821c4: 0x0  nop
    ctx->pc = 0x2821c4u;
    // NOP
label_2821c8:
    // 0x2821c8: 0x0  nop
    ctx->pc = 0x2821c8u;
    // NOP
label_2821cc:
    // 0x2821cc: 0x0  nop
    ctx->pc = 0x2821ccu;
    // NOP
label_2821d0:
    // 0x2821d0: 0x0  nop
    ctx->pc = 0x2821d0u;
    // NOP
label_2821d4:
    // 0x2821d4: 0x0  nop
    ctx->pc = 0x2821d4u;
    // NOP
label_2821d8:
    // 0x2821d8: 0x0  nop
    ctx->pc = 0x2821d8u;
    // NOP
label_2821dc:
    // 0x2821dc: 0x0  nop
    ctx->pc = 0x2821dcu;
    // NOP
label_2821e0:
    // 0x2821e0: 0x0  nop
    ctx->pc = 0x2821e0u;
    // NOP
label_2821e4:
    // 0x2821e4: 0x0  nop
    ctx->pc = 0x2821e4u;
    // NOP
label_2821e8:
    // 0x2821e8: 0x0  nop
    ctx->pc = 0x2821e8u;
    // NOP
label_2821ec:
    // 0x2821ec: 0x0  nop
    ctx->pc = 0x2821ecu;
    // NOP
label_2821f0:
    // 0x2821f0: 0x0  nop
    ctx->pc = 0x2821f0u;
    // NOP
label_2821f4:
    // 0x2821f4: 0x0  nop
    ctx->pc = 0x2821f4u;
    // NOP
label_2821f8:
    // 0x2821f8: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2821f8u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_2821fc:
    // 0x2821fc: 0x0  nop
    ctx->pc = 0x2821fcu;
    // NOP
label_282200:
    // 0x282200: 0xbe9db22d  cache       0x1D, -0x4DD3($s4)
    ctx->pc = 0x282200u;
    // CACHE instruction (ignored)
label_282204:
    // 0x282204: 0xbe3645a2  cache       0x16, 0x45A2($s1)
    ctx->pc = 0x282204u;
    // CACHE instruction (ignored)
label_282208:
    // 0x282208: 0x0  nop
    ctx->pc = 0x282208u;
    // NOP
label_28220c:
    // 0x28220c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28220cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_282210:
    // 0x282210: 0x0  nop
    ctx->pc = 0x282210u;
    // NOP
label_282214:
    // 0x282214: 0x0  nop
    ctx->pc = 0x282214u;
    // NOP
label_282218:
    // 0x282218: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282218u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_28221c:
    // 0x28221c: 0x0  nop
    ctx->pc = 0x28221cu;
    // NOP
label_282220:
    // 0x282220: 0x3e9db22d  .word       0x3E9DB22D                   # lui         $sp, 0xB22D # 02800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282220u;
    SET_GPR_S32(ctx, 29, (int32_t)((uint32_t)45613 << 16));
label_282224:
    // 0x282224: 0xbe3645a2  cache       0x16, 0x45A2($s1)
    ctx->pc = 0x282224u;
    // CACHE instruction (ignored)
label_282228:
    // 0x282228: 0x0  nop
    ctx->pc = 0x282228u;
    // NOP
label_28222c:
    // 0x28222c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28222cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_282230:
    // 0x282230: 0x0  nop
    ctx->pc = 0x282230u;
    // NOP
label_282234:
    // 0x282234: 0x0  nop
    ctx->pc = 0x282234u;
    // NOP
label_282238:
    // 0x282238: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282238u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_28223c:
    // 0x28223c: 0x0  nop
    ctx->pc = 0x28223cu;
    // NOP
label_282240:
    // 0x282240: 0x3e9db22d  .word       0x3E9DB22D                   # lui         $sp, 0xB22D # 02800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282240u;
    SET_GPR_S32(ctx, 29, (int32_t)((uint32_t)45613 << 16));
label_282244:
    // 0x282244: 0xbe3645a2  cache       0x16, 0x45A2($s1)
    ctx->pc = 0x282244u;
    // CACHE instruction (ignored)
label_282248:
    // 0x282248: 0xc293f021  ll          $s3, -0xFDF($s4)
    ctx->pc = 0x282248u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 4294963233); SET_GPR_S32(ctx, 19, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28224c:
    // 0x28224c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28224cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_282250:
    // 0x282250: 0x0  nop
    ctx->pc = 0x282250u;
    // NOP
label_282254:
    // 0x282254: 0x0  nop
    ctx->pc = 0x282254u;
    // NOP
label_282258:
    // 0x282258: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282258u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_28225c:
    // 0x28225c: 0x0  nop
    ctx->pc = 0x28225cu;
    // NOP
label_282260:
    // 0x282260: 0xbe9db22d  cache       0x1D, -0x4DD3($s4)
    ctx->pc = 0x282260u;
    // CACHE instruction (ignored)
label_282264:
    // 0x282264: 0xbe3645a2  cache       0x16, 0x45A2($s1)
    ctx->pc = 0x282264u;
    // CACHE instruction (ignored)
label_282268:
    // 0x282268: 0x0  nop
    ctx->pc = 0x282268u;
    // NOP
label_28226c:
    // 0x28226c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28226cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_282270:
    // 0x282270: 0x0  nop
    ctx->pc = 0x282270u;
    // NOP
label_282274:
    // 0x282274: 0x0  nop
    ctx->pc = 0x282274u;
    // NOP
label_282278:
    // 0x282278: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282278u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_28227c:
    // 0x28227c: 0x0  nop
    ctx->pc = 0x28227cu;
    // NOP
label_282280:
    // 0x282280: 0x3e9db22d  .word       0x3E9DB22D                   # lui         $sp, 0xB22D # 02800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282280u;
    SET_GPR_S32(ctx, 29, (int32_t)((uint32_t)45613 << 16));
label_282284:
    // 0x282284: 0xbe3645a2  cache       0x16, 0x45A2($s1)
    ctx->pc = 0x282284u;
    // CACHE instruction (ignored)
label_282288:
    // 0x282288: 0xc293f021  ll          $s3, -0xFDF($s4)
    ctx->pc = 0x282288u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 4294963233); SET_GPR_S32(ctx, 19, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28228c:
    // 0x28228c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28228cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_282290:
    // 0x282290: 0x0  nop
    ctx->pc = 0x282290u;
    // NOP
label_282294:
    // 0x282294: 0x0  nop
    ctx->pc = 0x282294u;
    // NOP
label_282298:
    // 0x282298: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282298u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_28229c:
    // 0x28229c: 0x0  nop
    ctx->pc = 0x28229cu;
    // NOP
label_2822a0:
    // 0x2822a0: 0xbe9db22d  cache       0x1D, -0x4DD3($s4)
    ctx->pc = 0x2822a0u;
    // CACHE instruction (ignored)
label_2822a4:
    // 0x2822a4: 0xbe3645a2  cache       0x16, 0x45A2($s1)
    ctx->pc = 0x2822a4u;
    // CACHE instruction (ignored)
label_2822a8:
    // 0x2822a8: 0xc293f021  ll          $s3, -0xFDF($s4)
    ctx->pc = 0x2822a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 4294963233); SET_GPR_S32(ctx, 19, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2822ac:
    // 0x2822ac: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2822acu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_2822b0:
    // 0x2822b0: 0x0  nop
    ctx->pc = 0x2822b0u;
    // NOP
label_2822b4:
    // 0x2822b4: 0x0  nop
    ctx->pc = 0x2822b4u;
    // NOP
label_2822b8:
    // 0x2822b8: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2822b8u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_2822bc:
    // 0x2822bc: 0x0  nop
    ctx->pc = 0x2822bcu;
    // NOP
label_2822c0:
    // 0x2822c0: 0x0  nop
    ctx->pc = 0x2822c0u;
    // NOP
label_2822c4:
    // 0x2822c4: 0x3eb5c28f  .word       0x3EB5C28F                   # lui         $s5, 0xC28F # 02A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2822c4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)49807 << 16));
label_2822c8:
    // 0x2822c8: 0x0  nop
    ctx->pc = 0x2822c8u;
    // NOP
label_2822cc:
    // 0x2822cc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2822ccu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_2822d0:
    // 0x2822d0: 0x0  nop
    ctx->pc = 0x2822d0u;
    // NOP
label_2822d4:
    // 0x2822d4: 0x0  nop
    ctx->pc = 0x2822d4u;
    // NOP
label_2822d8:
    // 0x2822d8: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2822d8u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_2822dc:
    // 0x2822dc: 0x0  nop
    ctx->pc = 0x2822dcu;
    // NOP
label_2822e0:
    // 0x2822e0: 0xbe9db22d  cache       0x1D, -0x4DD3($s4)
    ctx->pc = 0x2822e0u;
    // CACHE instruction (ignored)
label_2822e4:
    // 0x2822e4: 0xbe3645a2  cache       0x16, 0x45A2($s1)
    ctx->pc = 0x2822e4u;
    // CACHE instruction (ignored)
label_2822e8:
    // 0x2822e8: 0x0  nop
    ctx->pc = 0x2822e8u;
    // NOP
label_2822ec:
    // 0x2822ec: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2822ecu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_2822f0:
    // 0x2822f0: 0x0  nop
    ctx->pc = 0x2822f0u;
    // NOP
label_2822f4:
    // 0x2822f4: 0x0  nop
    ctx->pc = 0x2822f4u;
    // NOP
label_2822f8:
    // 0x2822f8: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2822f8u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_2822fc:
    // 0x2822fc: 0x0  nop
    ctx->pc = 0x2822fcu;
    // NOP
label_282300:
    // 0x282300: 0xbe9db22d  cache       0x1D, -0x4DD3($s4)
    ctx->pc = 0x282300u;
    // CACHE instruction (ignored)
label_282304:
    // 0x282304: 0xbe3645a2  cache       0x16, 0x45A2($s1)
    ctx->pc = 0x282304u;
    // CACHE instruction (ignored)
label_282308:
    // 0x282308: 0xc293f021  ll          $s3, -0xFDF($s4)
    ctx->pc = 0x282308u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 4294963233); SET_GPR_S32(ctx, 19, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28230c:
    // 0x28230c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28230cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_282310:
    // 0x282310: 0x0  nop
    ctx->pc = 0x282310u;
    // NOP
label_282314:
    // 0x282314: 0x0  nop
    ctx->pc = 0x282314u;
    // NOP
label_282318:
    // 0x282318: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282318u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_28231c:
    // 0x28231c: 0x0  nop
    ctx->pc = 0x28231cu;
    // NOP
label_282320:
    // 0x282320: 0x0  nop
    ctx->pc = 0x282320u;
    // NOP
label_282324:
    // 0x282324: 0x3eb5c28f  .word       0x3EB5C28F                   # lui         $s5, 0xC28F # 02A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282324u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)49807 << 16));
label_282328:
    // 0x282328: 0x0  nop
    ctx->pc = 0x282328u;
    // NOP
label_28232c:
    // 0x28232c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28232cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_282330:
    // 0x282330: 0x0  nop
    ctx->pc = 0x282330u;
    // NOP
label_282334:
    // 0x282334: 0x0  nop
    ctx->pc = 0x282334u;
    // NOP
label_282338:
    // 0x282338: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282338u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_28233c:
    // 0x28233c: 0x0  nop
    ctx->pc = 0x28233cu;
    // NOP
label_282340:
    // 0x282340: 0xbe9db22d  cache       0x1D, -0x4DD3($s4)
    ctx->pc = 0x282340u;
    // CACHE instruction (ignored)
label_282344:
    // 0x282344: 0xbe3645a2  cache       0x16, 0x45A2($s1)
    ctx->pc = 0x282344u;
    // CACHE instruction (ignored)
label_282348:
    // 0x282348: 0xc293f021  ll          $s3, -0xFDF($s4)
    ctx->pc = 0x282348u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 4294963233); SET_GPR_S32(ctx, 19, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28234c:
    // 0x28234c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28234cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_282350:
    // 0x282350: 0x0  nop
    ctx->pc = 0x282350u;
    // NOP
label_282354:
    // 0x282354: 0x0  nop
    ctx->pc = 0x282354u;
    // NOP
label_282358:
    // 0x282358: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282358u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_28235c:
    // 0x28235c: 0x0  nop
    ctx->pc = 0x28235cu;
    // NOP
label_282360:
    // 0x282360: 0x0  nop
    ctx->pc = 0x282360u;
    // NOP
label_282364:
    // 0x282364: 0x3eb5c28f  .word       0x3EB5C28F                   # lui         $s5, 0xC28F # 02A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282364u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)49807 << 16));
label_282368:
    // 0x282368: 0xc293f021  ll          $s3, -0xFDF($s4)
    ctx->pc = 0x282368u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 4294963233); SET_GPR_S32(ctx, 19, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28236c:
    // 0x28236c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28236cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_282370:
    // 0x282370: 0x0  nop
    ctx->pc = 0x282370u;
    // NOP
label_282374:
    // 0x282374: 0x0  nop
    ctx->pc = 0x282374u;
    // NOP
label_282378:
    // 0x282378: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282378u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_28237c:
    // 0x28237c: 0x0  nop
    ctx->pc = 0x28237cu;
    // NOP
label_282380:
    // 0x282380: 0x3e9db22d  .word       0x3E9DB22D                   # lui         $sp, 0xB22D # 02800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282380u;
    SET_GPR_S32(ctx, 29, (int32_t)((uint32_t)45613 << 16));
label_282384:
    // 0x282384: 0xbe3645a2  cache       0x16, 0x45A2($s1)
    ctx->pc = 0x282384u;
    // CACHE instruction (ignored)
label_282388:
    // 0x282388: 0x0  nop
    ctx->pc = 0x282388u;
    // NOP
label_28238c:
    // 0x28238c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28238cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_282390:
    // 0x282390: 0x0  nop
    ctx->pc = 0x282390u;
    // NOP
label_282394:
    // 0x282394: 0x0  nop
    ctx->pc = 0x282394u;
    // NOP
label_282398:
    // 0x282398: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282398u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_28239c:
    // 0x28239c: 0x0  nop
    ctx->pc = 0x28239cu;
    // NOP
label_2823a0:
    // 0x2823a0: 0x0  nop
    ctx->pc = 0x2823a0u;
    // NOP
label_2823a4:
    // 0x2823a4: 0x3eb5c28f  .word       0x3EB5C28F                   # lui         $s5, 0xC28F # 02A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2823a4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)49807 << 16));
label_2823a8:
    // 0x2823a8: 0x0  nop
    ctx->pc = 0x2823a8u;
    // NOP
label_2823ac:
    // 0x2823ac: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2823acu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_2823b0:
    // 0x2823b0: 0x0  nop
    ctx->pc = 0x2823b0u;
    // NOP
label_2823b4:
    // 0x2823b4: 0x0  nop
    ctx->pc = 0x2823b4u;
    // NOP
label_2823b8:
    // 0x2823b8: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2823b8u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_2823bc:
    // 0x2823bc: 0x0  nop
    ctx->pc = 0x2823bcu;
    // NOP
label_2823c0:
    // 0x2823c0: 0x0  nop
    ctx->pc = 0x2823c0u;
    // NOP
label_2823c4:
    // 0x2823c4: 0x3eb5c28f  .word       0x3EB5C28F                   # lui         $s5, 0xC28F # 02A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2823c4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)49807 << 16));
label_2823c8:
    // 0x2823c8: 0xc293f021  ll          $s3, -0xFDF($s4)
    ctx->pc = 0x2823c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 4294963233); SET_GPR_S32(ctx, 19, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2823cc:
    // 0x2823cc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2823ccu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_2823d0:
    // 0x2823d0: 0x0  nop
    ctx->pc = 0x2823d0u;
    // NOP
label_2823d4:
    // 0x2823d4: 0x0  nop
    ctx->pc = 0x2823d4u;
    // NOP
label_2823d8:
    // 0x2823d8: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2823d8u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_2823dc:
    // 0x2823dc: 0x0  nop
    ctx->pc = 0x2823dcu;
    // NOP
label_2823e0:
    // 0x2823e0: 0x3e9db22d  .word       0x3E9DB22D                   # lui         $sp, 0xB22D # 02800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2823e0u;
    SET_GPR_S32(ctx, 29, (int32_t)((uint32_t)45613 << 16));
label_2823e4:
    // 0x2823e4: 0xbe3645a2  cache       0x16, 0x45A2($s1)
    ctx->pc = 0x2823e4u;
    // CACHE instruction (ignored)
label_2823e8:
    // 0x2823e8: 0x0  nop
    ctx->pc = 0x2823e8u;
    // NOP
label_2823ec:
    // 0x2823ec: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2823ecu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_2823f0:
    // 0x2823f0: 0x0  nop
    ctx->pc = 0x2823f0u;
    // NOP
label_2823f4:
    // 0x2823f4: 0x0  nop
    ctx->pc = 0x2823f4u;
    // NOP
label_2823f8:
    // 0x2823f8: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2823f8u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_2823fc:
    // 0x2823fc: 0x0  nop
    ctx->pc = 0x2823fcu;
    // NOP
label_282400:
    // 0x282400: 0x0  nop
    ctx->pc = 0x282400u;
    // NOP
label_282404:
    // 0x282404: 0x3eb5c28f  .word       0x3EB5C28F                   # lui         $s5, 0xC28F # 02A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282404u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)49807 << 16));
label_282408:
    // 0x282408: 0xc293f021  ll          $s3, -0xFDF($s4)
    ctx->pc = 0x282408u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 4294963233); SET_GPR_S32(ctx, 19, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28240c:
    // 0x28240c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28240cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_282410:
    // 0x282410: 0x0  nop
    ctx->pc = 0x282410u;
    // NOP
label_282414:
    // 0x282414: 0x0  nop
    ctx->pc = 0x282414u;
    // NOP
label_282418:
    // 0x282418: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282418u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_28241c:
    // 0x28241c: 0x0  nop
    ctx->pc = 0x28241cu;
    // NOP
label_282420:
    // 0x282420: 0x3e9db22d  .word       0x3E9DB22D                   # lui         $sp, 0xB22D # 02800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282420u;
    SET_GPR_S32(ctx, 29, (int32_t)((uint32_t)45613 << 16));
label_282424:
    // 0x282424: 0xbe3645a2  cache       0x16, 0x45A2($s1)
    ctx->pc = 0x282424u;
    // CACHE instruction (ignored)
label_282428:
    // 0x282428: 0xc293f021  ll          $s3, -0xFDF($s4)
    ctx->pc = 0x282428u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 4294963233); SET_GPR_S32(ctx, 19, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28242c:
    // 0x28242c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28242cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_282430:
    // 0x282430: 0x0  nop
    ctx->pc = 0x282430u;
    // NOP
label_282434:
    // 0x282434: 0x0  nop
    ctx->pc = 0x282434u;
    // NOP
label_282438:
    // 0x282438: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282438u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_28243c:
    // 0x28243c: 0x0  nop
    ctx->pc = 0x28243cu;
    // NOP
label_282440:
    // 0x282440: 0x0  nop
    ctx->pc = 0x282440u;
    // NOP
label_282444:
    // 0x282444: 0x3eb5c28f  .word       0x3EB5C28F                   # lui         $s5, 0xC28F # 02A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282444u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)49807 << 16));
label_282448:
    // 0x282448: 0xc293f021  ll          $s3, -0xFDF($s4)
    ctx->pc = 0x282448u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 4294963233); SET_GPR_S32(ctx, 19, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28244c:
    // 0x28244c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28244cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_282450:
    // 0x282450: 0x0  nop
    ctx->pc = 0x282450u;
    // NOP
label_282454:
    // 0x282454: 0x0  nop
    ctx->pc = 0x282454u;
    // NOP
label_282458:
    // 0x282458: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282458u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_28245c:
    // 0x28245c: 0x0  nop
    ctx->pc = 0x28245cu;
    // NOP
label_282460:
    // 0x282460: 0xbe9db22d  cache       0x1D, -0x4DD3($s4)
    ctx->pc = 0x282460u;
    // CACHE instruction (ignored)
label_282464:
    // 0x282464: 0xbe3645a2  cache       0x16, 0x45A2($s1)
    ctx->pc = 0x282464u;
    // CACHE instruction (ignored)
label_282468:
    // 0x282468: 0xc293f021  ll          $s3, -0xFDF($s4)
    ctx->pc = 0x282468u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 4294963233); SET_GPR_S32(ctx, 19, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28246c:
    // 0x28246c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28246cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_282470:
    // 0x282470: 0x0  nop
    ctx->pc = 0x282470u;
    // NOP
label_282474:
    // 0x282474: 0x0  nop
    ctx->pc = 0x282474u;
    // NOP
label_282478:
    // 0x282478: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282478u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_28247c:
    // 0x28247c: 0x0  nop
    ctx->pc = 0x28247cu;
    // NOP
label_282480:
    // 0x282480: 0x3e9db22d  .word       0x3E9DB22D                   # lui         $sp, 0xB22D # 02800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282480u;
    SET_GPR_S32(ctx, 29, (int32_t)((uint32_t)45613 << 16));
label_282484:
    // 0x282484: 0xbe3645a2  cache       0x16, 0x45A2($s1)
    ctx->pc = 0x282484u;
    // CACHE instruction (ignored)
label_282488:
    // 0x282488: 0xc293f021  ll          $s3, -0xFDF($s4)
    ctx->pc = 0x282488u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 4294963233); SET_GPR_S32(ctx, 19, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28248c:
    // 0x28248c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28248cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_282490:
    // 0x282490: 0x0  nop
    ctx->pc = 0x282490u;
    // NOP
label_282494:
    // 0x282494: 0x0  nop
    ctx->pc = 0x282494u;
    // NOP
label_282498:
    // 0x282498: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282498u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_28249c:
    // 0x28249c: 0x0  nop
    ctx->pc = 0x28249cu;
    // NOP
label_2824a0:
    // 0x2824a0: 0x3cac0831  .word       0x3CAC0831                   # lui         $t4, 0x831 # 00A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2824a0u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)2097 << 16));
label_2824a4:
    // 0x2824a4: 0xbf251eb8  cache       0x05, 0x1EB8($t9)
    ctx->pc = 0x2824a4u;
    // CACHE instruction (ignored)
label_2824a8:
    // 0x2824a8: 0xc294cccd  ll          $s4, -0x3333($s4)
    ctx->pc = 0x2824a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 4294954189); SET_GPR_S32(ctx, 20, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2824ac:
    // 0x2824ac: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2824acu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_2824b0:
    // 0x2824b0: 0x0  nop
    ctx->pc = 0x2824b0u;
    // NOP
label_2824b4:
    // 0x2824b4: 0x0  nop
    ctx->pc = 0x2824b4u;
    // NOP
label_2824b8:
    // 0x2824b8: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2824b8u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_2824bc:
    // 0x2824bc: 0x0  nop
    ctx->pc = 0x2824bcu;
    // NOP
label_2824c0:
    // 0x2824c0: 0x3d03126f  .word       0x3D03126F                   # lui         $v1, 0x126F # 01000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2824c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4719 << 16));
label_2824c4:
    // 0x2824c4: 0xbe1db22d  cache       0x1D, -0x4DD3($s0)
    ctx->pc = 0x2824c4u;
    // CACHE instruction (ignored)
label_2824c8:
    // 0x2824c8: 0xc294126f  ll          $s4, 0x126F($s4)
    ctx->pc = 0x2824c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 4719); SET_GPR_S32(ctx, 20, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2824cc:
    // 0x2824cc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2824ccu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_2824d0:
    // 0x2824d0: 0x0  nop
    ctx->pc = 0x2824d0u;
    // NOP
label_2824d4:
    // 0x2824d4: 0x0  nop
    ctx->pc = 0x2824d4u;
    // NOP
label_2824d8:
    // 0x2824d8: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2824d8u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_2824dc:
    // 0x2824dc: 0x0  nop
    ctx->pc = 0x2824dcu;
    // NOP
label_2824e0:
    // 0x2824e0: 0x3d0f5c29  .word       0x3D0F5C29                   # lui         $t7, 0x5C29 # 01000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2824e0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)23593 << 16));
label_2824e4:
    // 0x2824e4: 0xbe1db22d  cache       0x1D, -0x4DD3($s0)
    ctx->pc = 0x2824e4u;
    // CACHE instruction (ignored)
label_2824e8:
    // 0x2824e8: 0xc275a7f0  ll          $s5, -0x5810($s3)
    ctx->pc = 0x2824e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 4294944752); SET_GPR_S32(ctx, 21, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2824ec:
    // 0x2824ec: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2824ecu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_2824f0:
    // 0x2824f0: 0x0  nop
    ctx->pc = 0x2824f0u;
    // NOP
label_2824f4:
    // 0x2824f4: 0x0  nop
    ctx->pc = 0x2824f4u;
    // NOP
label_2824f8:
    // 0x2824f8: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2824f8u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_2824fc:
    // 0x2824fc: 0x0  nop
    ctx->pc = 0x2824fcu;
    // NOP
label_282500:
    // 0x282500: 0x3cac0831  .word       0x3CAC0831                   # lui         $t4, 0x831 # 00A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282500u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)2097 << 16));
label_282504:
    // 0x282504: 0xbf251eb8  cache       0x05, 0x1EB8($t9)
    ctx->pc = 0x282504u;
    // CACHE instruction (ignored)
label_282508:
    // 0x282508: 0xc294cccd  ll          $s4, -0x3333($s4)
    ctx->pc = 0x282508u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 4294954189); SET_GPR_S32(ctx, 20, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28250c:
    // 0x28250c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28250cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_282510:
    // 0x282510: 0x0  nop
    ctx->pc = 0x282510u;
    // NOP
label_282514:
    // 0x282514: 0x0  nop
    ctx->pc = 0x282514u;
    // NOP
label_282518:
    // 0x282518: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282518u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_28251c:
    // 0x28251c: 0x0  nop
    ctx->pc = 0x28251cu;
    // NOP
label_282520:
    // 0x282520: 0x3d0f5c29  .word       0x3D0F5C29                   # lui         $t7, 0x5C29 # 01000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282520u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)23593 << 16));
label_282524:
    // 0x282524: 0xbe1db22d  cache       0x1D, -0x4DD3($s0)
    ctx->pc = 0x282524u;
    // CACHE instruction (ignored)
label_282528:
    // 0x282528: 0xc275a7f0  ll          $s5, -0x5810($s3)
    ctx->pc = 0x282528u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 4294944752); SET_GPR_S32(ctx, 21, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28252c:
    // 0x28252c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28252cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_282530:
    // 0x282530: 0x0  nop
    ctx->pc = 0x282530u;
    // NOP
label_282534:
    // 0x282534: 0x0  nop
    ctx->pc = 0x282534u;
    // NOP
label_282538:
    // 0x282538: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282538u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_28253c:
    // 0x28253c: 0x0  nop
    ctx->pc = 0x28253cu;
    // NOP
label_282540:
    // 0x282540: 0x3cb43958  .word       0x3CB43958                   # lui         $s4, 0x3958 # 00A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282540u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)14680 << 16));
label_282544:
    // 0x282544: 0xbf24dd2f  cache       0x04, -0x22D1($t9)
    ctx->pc = 0x282544u;
    // CACHE instruction (ignored)
label_282548:
    // 0x282548: 0xc28012f2  ll          $zero, 0x12F2($s4)
    ctx->pc = 0x282548u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 4850); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28254c:
    // 0x28254c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28254cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_282550:
    // 0x282550: 0x0  nop
    ctx->pc = 0x282550u;
    // NOP
label_282554:
    // 0x282554: 0x0  nop
    ctx->pc = 0x282554u;
    // NOP
label_282558:
    // 0x282558: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282558u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_28255c:
    // 0x28255c: 0x0  nop
    ctx->pc = 0x28255cu;
    // NOP
label_282560:
    // 0x282560: 0x3f133333  .word       0x3F133333                   # lui         $s3, 0x3333 # 03000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282560u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)13107 << 16));
label_282564:
    // 0x282564: 0x3ea5e354  .word       0x3EA5E354                   # lui         $a1, 0xE354 # 02A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282564u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58196 << 16));
label_282568:
    // 0x282568: 0xc294cc4a  ll          $s4, -0x33B6($s4)
    ctx->pc = 0x282568u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 4294954058); SET_GPR_S32(ctx, 20, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28256c:
    // 0x28256c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28256cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_282570:
    // 0x282570: 0x0  nop
    ctx->pc = 0x282570u;
    // NOP
label_282574:
    // 0x282574: 0x0  nop
    ctx->pc = 0x282574u;
    // NOP
label_282578:
    // 0x282578: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282578u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_28257c:
    // 0x28257c: 0x0  nop
    ctx->pc = 0x28257cu;
    // NOP
    ctx->pc = 0x282580u;
    return;
}

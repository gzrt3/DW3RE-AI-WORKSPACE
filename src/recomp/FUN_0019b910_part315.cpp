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


void FUN_0019b910_part315(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x234e30u: goto label_234e30;
        case 0x234e34u: goto label_234e34;
        case 0x234e38u: goto label_234e38;
        case 0x234e3cu: goto label_234e3c;
        case 0x234e40u: goto label_234e40;
        case 0x234e44u: goto label_234e44;
        case 0x234e48u: goto label_234e48;
        case 0x234e4cu: goto label_234e4c;
        case 0x234e50u: goto label_234e50;
        case 0x234e54u: goto label_234e54;
        case 0x234e58u: goto label_234e58;
        case 0x234e5cu: goto label_234e5c;
        case 0x234e60u: goto label_234e60;
        case 0x234e64u: goto label_234e64;
        case 0x234e68u: goto label_234e68;
        case 0x234e6cu: goto label_234e6c;
        case 0x234e70u: goto label_234e70;
        case 0x234e74u: goto label_234e74;
        case 0x234e78u: goto label_234e78;
        case 0x234e7cu: goto label_234e7c;
        case 0x234e80u: goto label_234e80;
        case 0x234e84u: goto label_234e84;
        case 0x234e88u: goto label_234e88;
        case 0x234e8cu: goto label_234e8c;
        case 0x234e90u: goto label_234e90;
        case 0x234e94u: goto label_234e94;
        case 0x234e98u: goto label_234e98;
        case 0x234e9cu: goto label_234e9c;
        case 0x234ea0u: goto label_234ea0;
        case 0x234ea4u: goto label_234ea4;
        case 0x234ea8u: goto label_234ea8;
        case 0x234eacu: goto label_234eac;
        case 0x234eb0u: goto label_234eb0;
        case 0x234eb4u: goto label_234eb4;
        case 0x234eb8u: goto label_234eb8;
        case 0x234ebcu: goto label_234ebc;
        case 0x234ec0u: goto label_234ec0;
        case 0x234ec4u: goto label_234ec4;
        case 0x234ec8u: goto label_234ec8;
        case 0x234eccu: goto label_234ecc;
        case 0x234ed0u: goto label_234ed0;
        case 0x234ed4u: goto label_234ed4;
        case 0x234ed8u: goto label_234ed8;
        case 0x234edcu: goto label_234edc;
        case 0x234ee0u: goto label_234ee0;
        case 0x234ee4u: goto label_234ee4;
        case 0x234ee8u: goto label_234ee8;
        case 0x234eecu: goto label_234eec;
        case 0x234ef0u: goto label_234ef0;
        case 0x234ef4u: goto label_234ef4;
        case 0x234ef8u: goto label_234ef8;
        case 0x234efcu: goto label_234efc;
        case 0x234f00u: goto label_234f00;
        case 0x234f04u: goto label_234f04;
        case 0x234f08u: goto label_234f08;
        case 0x234f0cu: goto label_234f0c;
        case 0x234f10u: goto label_234f10;
        case 0x234f14u: goto label_234f14;
        case 0x234f18u: goto label_234f18;
        case 0x234f1cu: goto label_234f1c;
        case 0x234f20u: goto label_234f20;
        case 0x234f24u: goto label_234f24;
        case 0x234f28u: goto label_234f28;
        case 0x234f2cu: goto label_234f2c;
        case 0x234f30u: goto label_234f30;
        case 0x234f34u: goto label_234f34;
        case 0x234f38u: goto label_234f38;
        case 0x234f3cu: goto label_234f3c;
        case 0x234f40u: goto label_234f40;
        case 0x234f44u: goto label_234f44;
        case 0x234f48u: goto label_234f48;
        case 0x234f4cu: goto label_234f4c;
        case 0x234f50u: goto label_234f50;
        case 0x234f54u: goto label_234f54;
        case 0x234f58u: goto label_234f58;
        case 0x234f5cu: goto label_234f5c;
        case 0x234f60u: goto label_234f60;
        case 0x234f64u: goto label_234f64;
        case 0x234f68u: goto label_234f68;
        case 0x234f6cu: goto label_234f6c;
        case 0x234f70u: goto label_234f70;
        case 0x234f74u: goto label_234f74;
        case 0x234f78u: goto label_234f78;
        case 0x234f7cu: goto label_234f7c;
        case 0x234f80u: goto label_234f80;
        case 0x234f84u: goto label_234f84;
        case 0x234f88u: goto label_234f88;
        case 0x234f8cu: goto label_234f8c;
        case 0x234f90u: goto label_234f90;
        case 0x234f94u: goto label_234f94;
        case 0x234f98u: goto label_234f98;
        case 0x234f9cu: goto label_234f9c;
        case 0x234fa0u: goto label_234fa0;
        case 0x234fa4u: goto label_234fa4;
        case 0x234fa8u: goto label_234fa8;
        case 0x234facu: goto label_234fac;
        case 0x234fb0u: goto label_234fb0;
        case 0x234fb4u: goto label_234fb4;
        case 0x234fb8u: goto label_234fb8;
        case 0x234fbcu: goto label_234fbc;
        case 0x234fc0u: goto label_234fc0;
        case 0x234fc4u: goto label_234fc4;
        case 0x234fc8u: goto label_234fc8;
        case 0x234fccu: goto label_234fcc;
        case 0x234fd0u: goto label_234fd0;
        case 0x234fd4u: goto label_234fd4;
        case 0x234fd8u: goto label_234fd8;
        case 0x234fdcu: goto label_234fdc;
        case 0x234fe0u: goto label_234fe0;
        case 0x234fe4u: goto label_234fe4;
        case 0x234fe8u: goto label_234fe8;
        case 0x234fecu: goto label_234fec;
        case 0x234ff0u: goto label_234ff0;
        case 0x234ff4u: goto label_234ff4;
        case 0x234ff8u: goto label_234ff8;
        case 0x234ffcu: goto label_234ffc;
        case 0x235000u: goto label_235000;
        case 0x235004u: goto label_235004;
        case 0x235008u: goto label_235008;
        case 0x23500cu: goto label_23500c;
        case 0x235010u: goto label_235010;
        case 0x235014u: goto label_235014;
        case 0x235018u: goto label_235018;
        case 0x23501cu: goto label_23501c;
        case 0x235020u: goto label_235020;
        case 0x235024u: goto label_235024;
        case 0x235028u: goto label_235028;
        case 0x23502cu: goto label_23502c;
        case 0x235030u: goto label_235030;
        case 0x235034u: goto label_235034;
        case 0x235038u: goto label_235038;
        case 0x23503cu: goto label_23503c;
        case 0x235040u: goto label_235040;
        case 0x235044u: goto label_235044;
        case 0x235048u: goto label_235048;
        case 0x23504cu: goto label_23504c;
        case 0x235050u: goto label_235050;
        case 0x235054u: goto label_235054;
        case 0x235058u: goto label_235058;
        case 0x23505cu: goto label_23505c;
        case 0x235060u: goto label_235060;
        case 0x235064u: goto label_235064;
        case 0x235068u: goto label_235068;
        case 0x23506cu: goto label_23506c;
        case 0x235070u: goto label_235070;
        case 0x235074u: goto label_235074;
        case 0x235078u: goto label_235078;
        case 0x23507cu: goto label_23507c;
        case 0x235080u: goto label_235080;
        case 0x235084u: goto label_235084;
        case 0x235088u: goto label_235088;
        case 0x23508cu: goto label_23508c;
        case 0x235090u: goto label_235090;
        case 0x235094u: goto label_235094;
        case 0x235098u: goto label_235098;
        case 0x23509cu: goto label_23509c;
        case 0x2350a0u: goto label_2350a0;
        case 0x2350a4u: goto label_2350a4;
        case 0x2350a8u: goto label_2350a8;
        case 0x2350acu: goto label_2350ac;
        case 0x2350b0u: goto label_2350b0;
        case 0x2350b4u: goto label_2350b4;
        case 0x2350b8u: goto label_2350b8;
        case 0x2350bcu: goto label_2350bc;
        case 0x2350c0u: goto label_2350c0;
        case 0x2350c4u: goto label_2350c4;
        case 0x2350c8u: goto label_2350c8;
        case 0x2350ccu: goto label_2350cc;
        case 0x2350d0u: goto label_2350d0;
        case 0x2350d4u: goto label_2350d4;
        case 0x2350d8u: goto label_2350d8;
        case 0x2350dcu: goto label_2350dc;
        case 0x2350e0u: goto label_2350e0;
        case 0x2350e4u: goto label_2350e4;
        case 0x2350e8u: goto label_2350e8;
        case 0x2350ecu: goto label_2350ec;
        case 0x2350f0u: goto label_2350f0;
        case 0x2350f4u: goto label_2350f4;
        case 0x2350f8u: goto label_2350f8;
        case 0x2350fcu: goto label_2350fc;
        case 0x235100u: goto label_235100;
        case 0x235104u: goto label_235104;
        case 0x235108u: goto label_235108;
        case 0x23510cu: goto label_23510c;
        case 0x235110u: goto label_235110;
        case 0x235114u: goto label_235114;
        case 0x235118u: goto label_235118;
        case 0x23511cu: goto label_23511c;
        case 0x235120u: goto label_235120;
        case 0x235124u: goto label_235124;
        case 0x235128u: goto label_235128;
        case 0x23512cu: goto label_23512c;
        case 0x235130u: goto label_235130;
        case 0x235134u: goto label_235134;
        case 0x235138u: goto label_235138;
        case 0x23513cu: goto label_23513c;
        case 0x235140u: goto label_235140;
        case 0x235144u: goto label_235144;
        case 0x235148u: goto label_235148;
        case 0x23514cu: goto label_23514c;
        case 0x235150u: goto label_235150;
        case 0x235154u: goto label_235154;
        case 0x235158u: goto label_235158;
        case 0x23515cu: goto label_23515c;
        case 0x235160u: goto label_235160;
        case 0x235164u: goto label_235164;
        case 0x235168u: goto label_235168;
        case 0x23516cu: goto label_23516c;
        case 0x235170u: goto label_235170;
        case 0x235174u: goto label_235174;
        case 0x235178u: goto label_235178;
        case 0x23517cu: goto label_23517c;
        case 0x235180u: goto label_235180;
        case 0x235184u: goto label_235184;
        case 0x235188u: goto label_235188;
        case 0x23518cu: goto label_23518c;
        case 0x235190u: goto label_235190;
        case 0x235194u: goto label_235194;
        case 0x235198u: goto label_235198;
        case 0x23519cu: goto label_23519c;
        case 0x2351a0u: goto label_2351a0;
        case 0x2351a4u: goto label_2351a4;
        case 0x2351a8u: goto label_2351a8;
        case 0x2351acu: goto label_2351ac;
        case 0x2351b0u: goto label_2351b0;
        case 0x2351b4u: goto label_2351b4;
        case 0x2351b8u: goto label_2351b8;
        case 0x2351bcu: goto label_2351bc;
        case 0x2351c0u: goto label_2351c0;
        case 0x2351c4u: goto label_2351c4;
        case 0x2351c8u: goto label_2351c8;
        case 0x2351ccu: goto label_2351cc;
        case 0x2351d0u: goto label_2351d0;
        case 0x2351d4u: goto label_2351d4;
        case 0x2351d8u: goto label_2351d8;
        case 0x2351dcu: goto label_2351dc;
        case 0x2351e0u: goto label_2351e0;
        case 0x2351e4u: goto label_2351e4;
        case 0x2351e8u: goto label_2351e8;
        case 0x2351ecu: goto label_2351ec;
        case 0x2351f0u: goto label_2351f0;
        case 0x2351f4u: goto label_2351f4;
        case 0x2351f8u: goto label_2351f8;
        case 0x2351fcu: goto label_2351fc;
        case 0x235200u: goto label_235200;
        case 0x235204u: goto label_235204;
        case 0x235208u: goto label_235208;
        case 0x23520cu: goto label_23520c;
        case 0x235210u: goto label_235210;
        case 0x235214u: goto label_235214;
        case 0x235218u: goto label_235218;
        case 0x23521cu: goto label_23521c;
        case 0x235220u: goto label_235220;
        case 0x235224u: goto label_235224;
        case 0x235228u: goto label_235228;
        case 0x23522cu: goto label_23522c;
        case 0x235230u: goto label_235230;
        case 0x235234u: goto label_235234;
        case 0x235238u: goto label_235238;
        case 0x23523cu: goto label_23523c;
        case 0x235240u: goto label_235240;
        case 0x235244u: goto label_235244;
        case 0x235248u: goto label_235248;
        case 0x23524cu: goto label_23524c;
        case 0x235250u: goto label_235250;
        case 0x235254u: goto label_235254;
        case 0x235258u: goto label_235258;
        case 0x23525cu: goto label_23525c;
        case 0x235260u: goto label_235260;
        case 0x235264u: goto label_235264;
        case 0x235268u: goto label_235268;
        case 0x23526cu: goto label_23526c;
        case 0x235270u: goto label_235270;
        case 0x235274u: goto label_235274;
        case 0x235278u: goto label_235278;
        case 0x23527cu: goto label_23527c;
        case 0x235280u: goto label_235280;
        case 0x235284u: goto label_235284;
        case 0x235288u: goto label_235288;
        case 0x23528cu: goto label_23528c;
        case 0x235290u: goto label_235290;
        case 0x235294u: goto label_235294;
        case 0x235298u: goto label_235298;
        case 0x23529cu: goto label_23529c;
        case 0x2352a0u: goto label_2352a0;
        case 0x2352a4u: goto label_2352a4;
        case 0x2352a8u: goto label_2352a8;
        case 0x2352acu: goto label_2352ac;
        case 0x2352b0u: goto label_2352b0;
        case 0x2352b4u: goto label_2352b4;
        case 0x2352b8u: goto label_2352b8;
        case 0x2352bcu: goto label_2352bc;
        case 0x2352c0u: goto label_2352c0;
        case 0x2352c4u: goto label_2352c4;
        case 0x2352c8u: goto label_2352c8;
        case 0x2352ccu: goto label_2352cc;
        case 0x2352d0u: goto label_2352d0;
        case 0x2352d4u: goto label_2352d4;
        case 0x2352d8u: goto label_2352d8;
        case 0x2352dcu: goto label_2352dc;
        case 0x2352e0u: goto label_2352e0;
        case 0x2352e4u: goto label_2352e4;
        case 0x2352e8u: goto label_2352e8;
        case 0x2352ecu: goto label_2352ec;
        case 0x2352f0u: goto label_2352f0;
        case 0x2352f4u: goto label_2352f4;
        case 0x2352f8u: goto label_2352f8;
        case 0x2352fcu: goto label_2352fc;
        case 0x235300u: goto label_235300;
        case 0x235304u: goto label_235304;
        case 0x235308u: goto label_235308;
        case 0x23530cu: goto label_23530c;
        case 0x235310u: goto label_235310;
        case 0x235314u: goto label_235314;
        case 0x235318u: goto label_235318;
        case 0x23531cu: goto label_23531c;
        case 0x235320u: goto label_235320;
        case 0x235324u: goto label_235324;
        case 0x235328u: goto label_235328;
        case 0x23532cu: goto label_23532c;
        case 0x235330u: goto label_235330;
        case 0x235334u: goto label_235334;
        case 0x235338u: goto label_235338;
        case 0x23533cu: goto label_23533c;
        case 0x235340u: goto label_235340;
        case 0x235344u: goto label_235344;
        case 0x235348u: goto label_235348;
        case 0x23534cu: goto label_23534c;
        case 0x235350u: goto label_235350;
        case 0x235354u: goto label_235354;
        case 0x235358u: goto label_235358;
        case 0x23535cu: goto label_23535c;
        case 0x235360u: goto label_235360;
        case 0x235364u: goto label_235364;
        case 0x235368u: goto label_235368;
        case 0x23536cu: goto label_23536c;
        case 0x235370u: goto label_235370;
        case 0x235374u: goto label_235374;
        case 0x235378u: goto label_235378;
        case 0x23537cu: goto label_23537c;
        case 0x235380u: goto label_235380;
        case 0x235384u: goto label_235384;
        case 0x235388u: goto label_235388;
        case 0x23538cu: goto label_23538c;
        case 0x235390u: goto label_235390;
        case 0x235394u: goto label_235394;
        case 0x235398u: goto label_235398;
        case 0x23539cu: goto label_23539c;
        case 0x2353a0u: goto label_2353a0;
        case 0x2353a4u: goto label_2353a4;
        case 0x2353a8u: goto label_2353a8;
        case 0x2353acu: goto label_2353ac;
        case 0x2353b0u: goto label_2353b0;
        case 0x2353b4u: goto label_2353b4;
        case 0x2353b8u: goto label_2353b8;
        case 0x2353bcu: goto label_2353bc;
        case 0x2353c0u: goto label_2353c0;
        case 0x2353c4u: goto label_2353c4;
        case 0x2353c8u: goto label_2353c8;
        case 0x2353ccu: goto label_2353cc;
        case 0x2353d0u: goto label_2353d0;
        case 0x2353d4u: goto label_2353d4;
        case 0x2353d8u: goto label_2353d8;
        case 0x2353dcu: goto label_2353dc;
        case 0x2353e0u: goto label_2353e0;
        case 0x2353e4u: goto label_2353e4;
        case 0x2353e8u: goto label_2353e8;
        case 0x2353ecu: goto label_2353ec;
        case 0x2353f0u: goto label_2353f0;
        case 0x2353f4u: goto label_2353f4;
        case 0x2353f8u: goto label_2353f8;
        case 0x2353fcu: goto label_2353fc;
        case 0x235400u: goto label_235400;
        case 0x235404u: goto label_235404;
        case 0x235408u: goto label_235408;
        case 0x23540cu: goto label_23540c;
        case 0x235410u: goto label_235410;
        case 0x235414u: goto label_235414;
        case 0x235418u: goto label_235418;
        case 0x23541cu: goto label_23541c;
        case 0x235420u: goto label_235420;
        case 0x235424u: goto label_235424;
        case 0x235428u: goto label_235428;
        case 0x23542cu: goto label_23542c;
        case 0x235430u: goto label_235430;
        case 0x235434u: goto label_235434;
        case 0x235438u: goto label_235438;
        case 0x23543cu: goto label_23543c;
        case 0x235440u: goto label_235440;
        case 0x235444u: goto label_235444;
        case 0x235448u: goto label_235448;
        case 0x23544cu: goto label_23544c;
        case 0x235450u: goto label_235450;
        case 0x235454u: goto label_235454;
        case 0x235458u: goto label_235458;
        case 0x23545cu: goto label_23545c;
        case 0x235460u: goto label_235460;
        case 0x235464u: goto label_235464;
        case 0x235468u: goto label_235468;
        case 0x23546cu: goto label_23546c;
        case 0x235470u: goto label_235470;
        case 0x235474u: goto label_235474;
        case 0x235478u: goto label_235478;
        case 0x23547cu: goto label_23547c;
        case 0x235480u: goto label_235480;
        case 0x235484u: goto label_235484;
        case 0x235488u: goto label_235488;
        case 0x23548cu: goto label_23548c;
        case 0x235490u: goto label_235490;
        case 0x235494u: goto label_235494;
        case 0x235498u: goto label_235498;
        case 0x23549cu: goto label_23549c;
        case 0x2354a0u: goto label_2354a0;
        case 0x2354a4u: goto label_2354a4;
        case 0x2354a8u: goto label_2354a8;
        case 0x2354acu: goto label_2354ac;
        case 0x2354b0u: goto label_2354b0;
        case 0x2354b4u: goto label_2354b4;
        case 0x2354b8u: goto label_2354b8;
        case 0x2354bcu: goto label_2354bc;
        case 0x2354c0u: goto label_2354c0;
        case 0x2354c4u: goto label_2354c4;
        case 0x2354c8u: goto label_2354c8;
        case 0x2354ccu: goto label_2354cc;
        case 0x2354d0u: goto label_2354d0;
        case 0x2354d4u: goto label_2354d4;
        case 0x2354d8u: goto label_2354d8;
        case 0x2354dcu: goto label_2354dc;
        case 0x2354e0u: goto label_2354e0;
        case 0x2354e4u: goto label_2354e4;
        case 0x2354e8u: goto label_2354e8;
        case 0x2354ecu: goto label_2354ec;
        case 0x2354f0u: goto label_2354f0;
        case 0x2354f4u: goto label_2354f4;
        case 0x2354f8u: goto label_2354f8;
        case 0x2354fcu: goto label_2354fc;
        case 0x235500u: goto label_235500;
        case 0x235504u: goto label_235504;
        case 0x235508u: goto label_235508;
        case 0x23550cu: goto label_23550c;
        case 0x235510u: goto label_235510;
        case 0x235514u: goto label_235514;
        case 0x235518u: goto label_235518;
        case 0x23551cu: goto label_23551c;
        case 0x235520u: goto label_235520;
        case 0x235524u: goto label_235524;
        case 0x235528u: goto label_235528;
        case 0x23552cu: goto label_23552c;
        case 0x235530u: goto label_235530;
        case 0x235534u: goto label_235534;
        case 0x235538u: goto label_235538;
        case 0x23553cu: goto label_23553c;
        case 0x235540u: goto label_235540;
        case 0x235544u: goto label_235544;
        case 0x235548u: goto label_235548;
        case 0x23554cu: goto label_23554c;
        case 0x235550u: goto label_235550;
        case 0x235554u: goto label_235554;
        case 0x235558u: goto label_235558;
        case 0x23555cu: goto label_23555c;
        case 0x235560u: goto label_235560;
        case 0x235564u: goto label_235564;
        case 0x235568u: goto label_235568;
        case 0x23556cu: goto label_23556c;
        case 0x235570u: goto label_235570;
        case 0x235574u: goto label_235574;
        case 0x235578u: goto label_235578;
        case 0x23557cu: goto label_23557c;
        case 0x235580u: goto label_235580;
        case 0x235584u: goto label_235584;
        case 0x235588u: goto label_235588;
        case 0x23558cu: goto label_23558c;
        case 0x235590u: goto label_235590;
        case 0x235594u: goto label_235594;
        case 0x235598u: goto label_235598;
        case 0x23559cu: goto label_23559c;
        case 0x2355a0u: goto label_2355a0;
        case 0x2355a4u: goto label_2355a4;
        case 0x2355a8u: goto label_2355a8;
        case 0x2355acu: goto label_2355ac;
        case 0x2355b0u: goto label_2355b0;
        case 0x2355b4u: goto label_2355b4;
        case 0x2355b8u: goto label_2355b8;
        case 0x2355bcu: goto label_2355bc;
        case 0x2355c0u: goto label_2355c0;
        case 0x2355c4u: goto label_2355c4;
        case 0x2355c8u: goto label_2355c8;
        case 0x2355ccu: goto label_2355cc;
        case 0x2355d0u: goto label_2355d0;
        case 0x2355d4u: goto label_2355d4;
        case 0x2355d8u: goto label_2355d8;
        case 0x2355dcu: goto label_2355dc;
        case 0x2355e0u: goto label_2355e0;
        case 0x2355e4u: goto label_2355e4;
        case 0x2355e8u: goto label_2355e8;
        case 0x2355ecu: goto label_2355ec;
        case 0x2355f0u: goto label_2355f0;
        case 0x2355f4u: goto label_2355f4;
        case 0x2355f8u: goto label_2355f8;
        case 0x2355fcu: goto label_2355fc;
        default: return;
    }

label_234e30:
    // 0x234e30: 0xc08d192  jal         func_234648
label_234e34:
    if (ctx->pc == 0x234E34u) {
        ctx->pc = 0x234E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234E30u;
        // 0x234e34: 0xb5280010  sdr         $t0, 0x10($t1) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 9), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x234E38u;
        goto label_234e38;
    }
    ctx->pc = 0x234E30u;
    SET_GPR_U32(ctx, 31, 0x234E38u);
    ctx->pc = 0x234E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234E30u;
    // 0x234e34: 0xb5280010  sdr         $t0, 0x10($t1) (Delay Slot)
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x234648u;
    { ctx->pc = 0x234648; return; }
    ctx->pc = 0x234E38u;
label_234e38:
    // 0x234e38: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x234e38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_234e3c:
    // 0x234e3c: 0xc069210  jal         func_1A4840
label_234e40:
    if (ctx->pc == 0x234E40u) {
        ctx->pc = 0x234E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234E3Cu;
        // 0x234e40: 0x8f8482e4  lw          $a0, -0x7D1C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234E44u;
        goto label_234e44;
    }
    ctx->pc = 0x234E3Cu;
    SET_GPR_U32(ctx, 31, 0x234E44u);
    ctx->pc = 0x234E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234E3Cu;
    // 0x234e40: 0x8f8482e4  lw          $a0, -0x7D1C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x234E44u;
label_234e44:
    // 0x234e44: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x234e44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_234e48:
    // 0x234e48: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x234e48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_234e4c:
    // 0x234e4c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x234e4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_234e50:
    // 0x234e50: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x234e50u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_234e54:
    // 0x234e54: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x234e54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_234e58:
    // 0x234e58: 0x3e00008  jr          $ra
label_234e5c:
    if (ctx->pc == 0x234E5Cu) {
        ctx->pc = 0x234E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234E58u;
        // 0x234e5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234E60u;
        goto label_234e60;
    }
    ctx->pc = 0x234E58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x234E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234E58u;
        // 0x234e5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x234E58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x234E60u;
label_234e60:
    // 0x234e60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x234e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_234e64:
    // 0x234e64: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x234e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_234e68:
    // 0x234e68: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x234e68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_234e6c:
    // 0x234e6c: 0x8f8482e4  lw          $a0, -0x7D1C($gp)
    ctx->pc = 0x234e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935268)));
label_234e70:
    // 0x234e70: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x234e70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_234e74:
    // 0x234e74: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x234e74u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_234e78:
    // 0x234e78: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x234e78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_234e7c:
    // 0x234e7c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x234e7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_234e80:
    // 0x234e80: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x234e80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_234e84:
    // 0x234e84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x234e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_234e88:
    // 0x234e88: 0xc08dbf8  jal         func_236FE0
label_234e8c:
    if (ctx->pc == 0x234E8Cu) {
        ctx->pc = 0x234E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234E88u;
        // 0x234e8c: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234E90u;
        goto label_234e90;
    }
    ctx->pc = 0x234E88u;
    SET_GPR_U32(ctx, 31, 0x234E90u);
    ctx->pc = 0x234E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234E88u;
    // 0x234e8c: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FE0u;
    { ctx->pc = 0x236fe0; return; }
    ctx->pc = 0x234E90u;
label_234e90:
    // 0x234e90: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
label_234e94:
    if (ctx->pc == 0x234E94u) {
        ctx->pc = 0x234E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234E90u;
        // 0x234e94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234E98u;
        goto label_234e98;
    }
    ctx->pc = 0x234E90u;
    {
        const bool branch_taken_0x234e90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x234E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234E90u;
        // 0x234e94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234e90) {
            ctx->pc = 0x234ED8u;
            goto label_234ed8;
        }
    }
    ctx->pc = 0x234E98u;
label_234e98:
    // 0x234e98: 0xc08d17c  jal         func_2345F0
label_234e9c:
    if (ctx->pc == 0x234E9Cu) {
        ctx->pc = 0x234EA0u;
        goto label_234ea0;
    }
    ctx->pc = 0x234E98u;
    SET_GPR_U32(ctx, 31, 0x234EA0u);
    ctx->pc = 0x2345F0u;
    { ctx->pc = 0x2345f0; return; }
    ctx->pc = 0x234EA0u;
label_234ea0:
    // 0x234ea0: 0x24050026  addiu       $a1, $zero, 0x26
    ctx->pc = 0x234ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
label_234ea4:
    // 0x234ea4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x234ea4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_234ea8:
    // 0x234ea8: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x234ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_234eac:
    // 0x234eac: 0x2442ad00  addiu       $v0, $v0, -0x5300
    ctx->pc = 0x234eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946048));
label_234eb0:
    // 0x234eb0: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x234eb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_234eb4:
    // 0x234eb4: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
label_234eb8:
    if (ctx->pc == 0x234EB8u) {
        ctx->pc = 0x234EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234EB4u;
        // 0x234eb8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234EBCu;
        goto label_234ebc;
    }
    ctx->pc = 0x234EB4u;
    {
        const bool branch_taken_0x234eb4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x234EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234EB4u;
        // 0x234eb8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234eb4) {
            ctx->pc = 0x234ECCu;
            goto label_234ecc;
        }
    }
    ctx->pc = 0x234EBCu;
label_234ebc:
    // 0x234ebc: 0xac520004  sw          $s2, 0x4($v0)
    ctx->pc = 0x234ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 18));
label_234ec0:
    // 0x234ec0: 0xc08d192  jal         func_234648
label_234ec4:
    if (ctx->pc == 0x234EC4u) {
        ctx->pc = 0x234EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234EC0u;
        // 0x234ec4: 0xac530000  sw          $s3, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234EC8u;
        goto label_234ec8;
    }
    ctx->pc = 0x234EC0u;
    SET_GPR_U32(ctx, 31, 0x234EC8u);
    ctx->pc = 0x234EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234EC0u;
    // 0x234ec4: 0xac530000  sw          $s3, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x234648u;
    { ctx->pc = 0x234648; return; }
    ctx->pc = 0x234EC8u;
label_234ec8:
    // 0x234ec8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x234ec8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_234ecc:
    // 0x234ecc: 0xc069210  jal         func_1A4840
label_234ed0:
    if (ctx->pc == 0x234ED0u) {
        ctx->pc = 0x234ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234ECCu;
        // 0x234ed0: 0x8f8482e4  lw          $a0, -0x7D1C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234ED4u;
        goto label_234ed4;
    }
    ctx->pc = 0x234ECCu;
    SET_GPR_U32(ctx, 31, 0x234ED4u);
    ctx->pc = 0x234ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234ECCu;
    // 0x234ed0: 0x8f8482e4  lw          $a0, -0x7D1C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x234ED4u;
label_234ed4:
    // 0x234ed4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x234ed4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_234ed8:
    // 0x234ed8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x234ed8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_234edc:
    // 0x234edc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x234edcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_234ee0:
    // 0x234ee0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x234ee0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_234ee4:
    // 0x234ee4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x234ee4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_234ee8:
    // 0x234ee8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x234ee8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_234eec:
    // 0x234eec: 0x3e00008  jr          $ra
label_234ef0:
    if (ctx->pc == 0x234EF0u) {
        ctx->pc = 0x234EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234EECu;
        // 0x234ef0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234EF4u;
        goto label_234ef4;
    }
    ctx->pc = 0x234EECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x234EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234EECu;
        // 0x234ef0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x234EECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x234EF4u;
label_234ef4:
    // 0x234ef4: 0x0  nop
    ctx->pc = 0x234ef4u;
    // NOP
label_234ef8:
    // 0x234ef8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x234ef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_234efc:
    // 0x234efc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x234efcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_234f00:
    // 0x234f00: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x234f00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_234f04:
    // 0x234f04: 0x8f8482e4  lw          $a0, -0x7D1C($gp)
    ctx->pc = 0x234f04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935268)));
label_234f08:
    // 0x234f08: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x234f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_234f0c:
    // 0x234f0c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x234f0cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_234f10:
    // 0x234f10: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x234f10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_234f14:
    // 0x234f14: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x234f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_234f18:
    // 0x234f18: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x234f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_234f1c:
    // 0x234f1c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x234f1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_234f20:
    // 0x234f20: 0xc08dbf8  jal         func_236FE0
label_234f24:
    if (ctx->pc == 0x234F24u) {
        ctx->pc = 0x234F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234F20u;
        // 0x234f24: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234F28u;
        goto label_234f28;
    }
    ctx->pc = 0x234F20u;
    SET_GPR_U32(ctx, 31, 0x234F28u);
    ctx->pc = 0x234F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234F20u;
    // 0x234f24: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FE0u;
    { ctx->pc = 0x236fe0; return; }
    ctx->pc = 0x234F28u;
label_234f28:
    // 0x234f28: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
label_234f2c:
    if (ctx->pc == 0x234F2Cu) {
        ctx->pc = 0x234F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234F28u;
        // 0x234f2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234F30u;
        goto label_234f30;
    }
    ctx->pc = 0x234F28u;
    {
        const bool branch_taken_0x234f28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x234F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234F28u;
        // 0x234f2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234f28) {
            ctx->pc = 0x234F84u;
            goto label_234f84;
        }
    }
    ctx->pc = 0x234F30u;
label_234f30:
    // 0x234f30: 0xc08d17c  jal         func_2345F0
label_234f34:
    if (ctx->pc == 0x234F34u) {
        ctx->pc = 0x234F38u;
        goto label_234f38;
    }
    ctx->pc = 0x234F30u;
    SET_GPR_U32(ctx, 31, 0x234F38u);
    ctx->pc = 0x2345F0u;
    { ctx->pc = 0x2345f0; return; }
    ctx->pc = 0x234F38u;
label_234f38:
    // 0x234f38: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x234f38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
label_234f3c:
    // 0x234f3c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x234f3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_234f40:
    // 0x234f40: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x234f40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_234f44:
    // 0x234f44: 0x24470518  addiu       $a3, $v0, 0x518
    ctx->pc = 0x234f44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1304));
label_234f48:
    // 0x234f48: 0x2463af04  addiu       $v1, $v1, -0x50FC
    ctx->pc = 0x234f48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946564));
label_234f4c:
    // 0x234f4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x234f4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_234f50:
    // 0x234f50: 0x24050027  addiu       $a1, $zero, 0x27
    ctx->pc = 0x234f50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
label_234f54:
    // 0x234f54: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
label_234f58:
    if (ctx->pc == 0x234F58u) {
        ctx->pc = 0x234F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234F54u;
        // 0x234f58: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234F5Cu;
        goto label_234f5c;
    }
    ctx->pc = 0x234F54u;
    {
        const bool branch_taken_0x234f54 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x234F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234F54u;
        // 0x234f58: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234f54) {
            ctx->pc = 0x234F78u;
            goto label_234f78;
        }
    }
    ctx->pc = 0x234F5Cu;
label_234f5c:
    // 0x234f5c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x234f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_234f60:
    // 0x234f60: 0xacf20004  sw          $s2, 0x4($a3)
    ctx->pc = 0x234f60u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 18));
label_234f64:
    // 0x234f64: 0xac73fdfc  sw          $s3, -0x204($v1)
    ctx->pc = 0x234f64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294966780), GPR_U32(ctx, 19));
label_234f68:
    // 0x234f68: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x234f68u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
label_234f6c:
    // 0x234f6c: 0xc08d192  jal         func_234648
label_234f70:
    if (ctx->pc == 0x234F70u) {
        ctx->pc = 0x234F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234F6Cu;
        // 0x234f70: 0xace20008  sw          $v0, 0x8($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234F74u;
        goto label_234f74;
    }
    ctx->pc = 0x234F6Cu;
    SET_GPR_U32(ctx, 31, 0x234F74u);
    ctx->pc = 0x234F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234F6Cu;
    // 0x234f70: 0xace20008  sw          $v0, 0x8($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x234648u;
    { ctx->pc = 0x234648; return; }
    ctx->pc = 0x234F74u;
label_234f74:
    // 0x234f74: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x234f74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_234f78:
    // 0x234f78: 0xc069210  jal         func_1A4840
label_234f7c:
    if (ctx->pc == 0x234F7Cu) {
        ctx->pc = 0x234F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234F78u;
        // 0x234f7c: 0x8f8482e4  lw          $a0, -0x7D1C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234F80u;
        goto label_234f80;
    }
    ctx->pc = 0x234F78u;
    SET_GPR_U32(ctx, 31, 0x234F80u);
    ctx->pc = 0x234F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234F78u;
    // 0x234f7c: 0x8f8482e4  lw          $a0, -0x7D1C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x234F80u;
label_234f80:
    // 0x234f80: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x234f80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_234f84:
    // 0x234f84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x234f84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_234f88:
    // 0x234f88: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x234f88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_234f8c:
    // 0x234f8c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x234f8cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_234f90:
    // 0x234f90: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x234f90u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_234f94:
    // 0x234f94: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x234f94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_234f98:
    // 0x234f98: 0x3e00008  jr          $ra
label_234f9c:
    if (ctx->pc == 0x234F9Cu) {
        ctx->pc = 0x234F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234F98u;
        // 0x234f9c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234FA0u;
        goto label_234fa0;
    }
    ctx->pc = 0x234F98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x234F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234F98u;
        // 0x234f9c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x234F98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x234FA0u;
label_234fa0:
    // 0x234fa0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x234fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_234fa4:
    // 0x234fa4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x234fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_234fa8:
    // 0x234fa8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x234fa8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_234fac:
    // 0x234fac: 0x8f8482e4  lw          $a0, -0x7D1C($gp)
    ctx->pc = 0x234facu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935268)));
label_234fb0:
    // 0x234fb0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x234fb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_234fb4:
    // 0x234fb4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x234fb4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_234fb8:
    // 0x234fb8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x234fb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_234fbc:
    // 0x234fbc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x234fbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_234fc0:
    // 0x234fc0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x234fc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_234fc4:
    // 0x234fc4: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x234fc4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_234fc8:
    // 0x234fc8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x234fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_234fcc:
    // 0x234fcc: 0x30f500ff  andi        $s5, $a3, 0xFF
    ctx->pc = 0x234fccu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
label_234fd0:
    // 0x234fd0: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x234fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_234fd4:
    // 0x234fd4: 0x311600ff  andi        $s6, $t0, 0xFF
    ctx->pc = 0x234fd4u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
label_234fd8:
    // 0x234fd8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x234fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_234fdc:
    // 0x234fdc: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x234fdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
label_234fe0:
    // 0x234fe0: 0xc08dbf8  jal         func_236FE0
label_234fe4:
    if (ctx->pc == 0x234FE4u) {
        ctx->pc = 0x234FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234FE0u;
        // 0x234fe4: 0x313200ff  andi        $s2, $t1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x234FE8u;
        goto label_234fe8;
    }
    ctx->pc = 0x234FE0u;
    SET_GPR_U32(ctx, 31, 0x234FE8u);
    ctx->pc = 0x234FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234FE0u;
    // 0x234fe4: 0x313200ff  andi        $s2, $t1, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FE0u;
    { ctx->pc = 0x236fe0; return; }
    ctx->pc = 0x234FE8u;
label_234fe8:
    // 0x234fe8: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
label_234fec:
    if (ctx->pc == 0x234FECu) {
        ctx->pc = 0x234FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234FE8u;
        // 0x234fec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234FF0u;
        goto label_234ff0;
    }
    ctx->pc = 0x234FE8u;
    {
        const bool branch_taken_0x234fe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x234FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234FE8u;
        // 0x234fec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234fe8) {
            ctx->pc = 0x235038u;
            goto label_235038;
        }
    }
    ctx->pc = 0x234FF0u;
label_234ff0:
    // 0x234ff0: 0xc08d17c  jal         func_2345F0
label_234ff4:
    if (ctx->pc == 0x234FF4u) {
        ctx->pc = 0x234FF8u;
        goto label_234ff8;
    }
    ctx->pc = 0x234FF0u;
    SET_GPR_U32(ctx, 31, 0x234FF8u);
    ctx->pc = 0x2345F0u;
    { ctx->pc = 0x2345f0; return; }
    ctx->pc = 0x234FF8u;
label_234ff8:
    // 0x234ff8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x234ff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_234ffc:
    // 0x234ffc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x234ffcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_235000:
    // 0x235000: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x235000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_235004:
    // 0x235004: 0x2442ad00  addiu       $v0, $v0, -0x5300
    ctx->pc = 0x235004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946048));
label_235008:
    // 0x235008: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x235008u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_23500c:
    // 0x23500c: 0x16000007  bnez        $s0, . + 4 + (0x7 << 2)
label_235010:
    if (ctx->pc == 0x235010u) {
        ctx->pc = 0x235010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23500Cu;
        // 0x235010: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235014u;
        goto label_235014;
    }
    ctx->pc = 0x23500Cu;
    {
        const bool branch_taken_0x23500c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x235010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23500Cu;
        // 0x235010: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23500c) {
            ctx->pc = 0x23502Cu;
            goto label_23502c;
        }
    }
    ctx->pc = 0x235014u;
label_235014:
    // 0x235014: 0xac52000c  sw          $s2, 0xC($v0)
    ctx->pc = 0x235014u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 18));
label_235018:
    // 0x235018: 0xac540000  sw          $s4, 0x0($v0)
    ctx->pc = 0x235018u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 20));
label_23501c:
    // 0x23501c: 0xac550004  sw          $s5, 0x4($v0)
    ctx->pc = 0x23501cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 21));
label_235020:
    // 0x235020: 0xc08d192  jal         func_234648
label_235024:
    if (ctx->pc == 0x235024u) {
        ctx->pc = 0x235024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235020u;
        // 0x235024: 0xac560008  sw          $s6, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235028u;
        goto label_235028;
    }
    ctx->pc = 0x235020u;
    SET_GPR_U32(ctx, 31, 0x235028u);
    ctx->pc = 0x235024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235020u;
    // 0x235024: 0xac560008  sw          $s6, 0x8($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x234648u;
    { ctx->pc = 0x234648; return; }
    ctx->pc = 0x235028u;
label_235028:
    // 0x235028: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x235028u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23502c:
    // 0x23502c: 0xc069210  jal         func_1A4840
label_235030:
    if (ctx->pc == 0x235030u) {
        ctx->pc = 0x235030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23502Cu;
        // 0x235030: 0x8f8482e4  lw          $a0, -0x7D1C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235034u;
        goto label_235034;
    }
    ctx->pc = 0x23502Cu;
    SET_GPR_U32(ctx, 31, 0x235034u);
    ctx->pc = 0x235030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23502Cu;
    // 0x235030: 0x8f8482e4  lw          $a0, -0x7D1C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x235034u;
label_235034:
    // 0x235034: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x235034u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_235038:
    // 0x235038: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x235038u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23503c:
    // 0x23503c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23503cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_235040:
    // 0x235040: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x235040u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_235044:
    // 0x235044: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x235044u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_235048:
    // 0x235048: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x235048u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_23504c:
    // 0x23504c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x23504cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_235050:
    // 0x235050: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x235050u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_235054:
    // 0x235054: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x235054u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_235058:
    // 0x235058: 0x3e00008  jr          $ra
label_23505c:
    if (ctx->pc == 0x23505Cu) {
        ctx->pc = 0x23505Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235058u;
        // 0x23505c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235060u;
        goto label_235060;
    }
    ctx->pc = 0x235058u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23505Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235058u;
        // 0x23505c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x235058u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x235060u;
label_235060:
    // 0x235060: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x235060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_235064:
    // 0x235064: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x235064u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_235068:
    // 0x235068: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x235068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_23506c:
    // 0x23506c: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x23506cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_235070:
    // 0x235070: 0x30ea00ff  andi        $t2, $a3, 0xFF
    ctx->pc = 0x235070u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
label_235074:
    // 0x235074: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x235074u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_235078:
    // 0x235078: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x235078u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23507c:
    // 0x23507c: 0x310900ff  andi        $t1, $t0, 0xFF
    ctx->pc = 0x23507cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
label_235080:
    // 0x235080: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x235080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_235084:
    // 0x235084: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x235084u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_235088:
    // 0x235088: 0x140402d  daddu       $t0, $t2, $zero
    ctx->pc = 0x235088u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_23508c:
    // 0x23508c: 0x808d3e8  j           func_234FA0
label_235090:
    if (ctx->pc == 0x235090u) {
        ctx->pc = 0x235090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23508Cu;
        // 0x235090: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235094u;
        goto label_235094;
    }
    ctx->pc = 0x23508Cu;
    ctx->pc = 0x235090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23508Cu;
    // 0x235090: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x234FA0u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    goto label_234fa0;
    ctx->pc = 0x235094u;
label_235094:
    // 0x235094: 0x0  nop
    ctx->pc = 0x235094u;
    // NOP
label_235098:
    // 0x235098: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x235098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_23509c:
    // 0x23509c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x23509cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2350a0:
    // 0x2350a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2350a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2350a4:
    // 0x2350a4: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x2350a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_2350a8:
    // 0x2350a8: 0x30e800ff  andi        $t0, $a3, 0xFF
    ctx->pc = 0x2350a8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
label_2350ac:
    // 0x2350ac: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x2350acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2350b0:
    // 0x2350b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2350b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2350b4:
    // 0x2350b4: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x2350b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_2350b8:
    // 0x2350b8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2350b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2350bc:
    // 0x2350bc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2350bcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2350c0:
    // 0x2350c0: 0x808d3e8  j           func_234FA0
label_2350c4:
    if (ctx->pc == 0x2350C4u) {
        ctx->pc = 0x2350C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2350C0u;
        // 0x2350c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2350C8u;
        goto label_2350c8;
    }
    ctx->pc = 0x2350C0u;
    ctx->pc = 0x2350C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2350C0u;
    // 0x2350c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x234FA0u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    goto label_234fa0;
    ctx->pc = 0x2350C8u;
label_2350c8:
    // 0x2350c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2350c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2350cc:
    // 0x2350cc: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2350ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2350d0:
    // 0x2350d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2350d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2350d4:
    // 0x2350d4: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x2350d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_2350d8:
    // 0x2350d8: 0x30e800ff  andi        $t0, $a3, 0xFF
    ctx->pc = 0x2350d8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
label_2350dc:
    // 0x2350dc: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x2350dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2350e0:
    // 0x2350e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2350e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2350e4:
    // 0x2350e4: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x2350e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2350e8:
    // 0x2350e8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2350e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2350ec:
    // 0x2350ec: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2350ecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2350f0:
    // 0x2350f0: 0x808d3e8  j           func_234FA0
label_2350f4:
    if (ctx->pc == 0x2350F4u) {
        ctx->pc = 0x2350F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2350F0u;
        // 0x2350f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2350F8u;
        goto label_2350f8;
    }
    ctx->pc = 0x2350F0u;
    ctx->pc = 0x2350F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2350F0u;
    // 0x2350f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x234FA0u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    goto label_234fa0;
    ctx->pc = 0x2350F8u;
label_2350f8:
    // 0x2350f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2350f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2350fc:
    // 0x2350fc: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2350fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_235100:
    // 0x235100: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x235100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_235104:
    // 0x235104: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x235104u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_235108:
    // 0x235108: 0x30e800ff  andi        $t0, $a3, 0xFF
    ctx->pc = 0x235108u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
label_23510c:
    // 0x23510c: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x23510cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_235110:
    // 0x235110: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x235110u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_235114:
    // 0x235114: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x235114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_235118:
    // 0x235118: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x235118u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23511c:
    // 0x23511c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x23511cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_235120:
    // 0x235120: 0x808d3e8  j           func_234FA0
label_235124:
    if (ctx->pc == 0x235124u) {
        ctx->pc = 0x235124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235120u;
        // 0x235124: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235128u;
        goto label_235128;
    }
    ctx->pc = 0x235120u;
    ctx->pc = 0x235124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235120u;
    // 0x235124: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x234FA0u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    goto label_234fa0;
    ctx->pc = 0x235128u;
label_235128:
    // 0x235128: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x235128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_23512c:
    // 0x23512c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x23512cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_235130:
    // 0x235130: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x235130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_235134:
    // 0x235134: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x235134u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_235138:
    // 0x235138: 0x30e800ff  andi        $t0, $a3, 0xFF
    ctx->pc = 0x235138u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
label_23513c:
    // 0x23513c: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x23513cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_235140:
    // 0x235140: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x235140u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_235144:
    // 0x235144: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x235144u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_235148:
    // 0x235148: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x235148u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23514c:
    // 0x23514c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x23514cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_235150:
    // 0x235150: 0x808d3e8  j           func_234FA0
label_235154:
    if (ctx->pc == 0x235154u) {
        ctx->pc = 0x235154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235150u;
        // 0x235154: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235158u;
        goto label_235158;
    }
    ctx->pc = 0x235150u;
    ctx->pc = 0x235154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235150u;
    // 0x235154: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x234FA0u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    goto label_234fa0;
    ctx->pc = 0x235158u;
label_235158:
    // 0x235158: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x235158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_23515c:
    // 0x23515c: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x23515cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_235160:
    // 0x235160: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x235160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_235164:
    // 0x235164: 0x849c2  srl         $t1, $t0, 7
    ctx->pc = 0x235164u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 8), 7));
label_235168:
    // 0x235168: 0x30c700ff  andi        $a3, $a2, 0xFF
    ctx->pc = 0x235168u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_23516c:
    // 0x23516c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x23516cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_235170:
    // 0x235170: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x235170u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_235174:
    // 0x235174: 0x3108007f  andi        $t0, $t0, 0x7F
    ctx->pc = 0x235174u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)127);
label_235178:
    // 0x235178: 0x312900ff  andi        $t1, $t1, 0xFF
    ctx->pc = 0x235178u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
label_23517c:
    // 0x23517c: 0x24050017  addiu       $a1, $zero, 0x17
    ctx->pc = 0x23517cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_235180:
    // 0x235180: 0x808d3e8  j           func_234FA0
label_235184:
    if (ctx->pc == 0x235184u) {
        ctx->pc = 0x235184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235180u;
        // 0x235184: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235188u;
        goto label_235188;
    }
    ctx->pc = 0x235180u;
    ctx->pc = 0x235184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235180u;
    // 0x235184: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x234FA0u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    goto label_234fa0;
    ctx->pc = 0x235188u;
label_235188:
    // 0x235188: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x235188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_23518c:
    // 0x23518c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x23518cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_235190:
    // 0x235190: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x235190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_235194:
    // 0x235194: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x235194u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_235198:
    // 0x235198: 0x30e800ff  andi        $t0, $a3, 0xFF
    ctx->pc = 0x235198u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
label_23519c:
    // 0x23519c: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x23519cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2351a0:
    // 0x2351a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2351a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2351a4:
    // 0x2351a4: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x2351a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_2351a8:
    // 0x2351a8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2351a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2351ac:
    // 0x2351ac: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2351acu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2351b0:
    // 0x2351b0: 0x808d3e8  j           func_234FA0
label_2351b4:
    if (ctx->pc == 0x2351B4u) {
        ctx->pc = 0x2351B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2351B0u;
        // 0x2351b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2351B8u;
        goto label_2351b8;
    }
    ctx->pc = 0x2351B0u;
    ctx->pc = 0x2351B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2351B0u;
    // 0x2351b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x234FA0u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    goto label_234fa0;
    ctx->pc = 0x2351B8u;
label_2351b8:
    // 0x2351b8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2351b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2351bc:
    // 0x2351bc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2351bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2351c0:
    // 0x2351c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2351c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2351c4:
    // 0x2351c4: 0x8f8482e4  lw          $a0, -0x7D1C($gp)
    ctx->pc = 0x2351c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935268)));
label_2351c8:
    // 0x2351c8: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x2351c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_2351cc:
    // 0x2351cc: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x2351ccu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2351d0:
    // 0x2351d0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2351d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2351d4:
    // 0x2351d4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2351d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_2351d8:
    // 0x2351d8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2351d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_2351dc:
    // 0x2351dc: 0x30d300ff  andi        $s3, $a2, 0xFF
    ctx->pc = 0x2351dcu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_2351e0:
    // 0x2351e0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2351e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_2351e4:
    // 0x2351e4: 0x30f400ff  andi        $s4, $a3, 0xFF
    ctx->pc = 0x2351e4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
label_2351e8:
    // 0x2351e8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2351e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_2351ec:
    // 0x2351ec: 0x311500ff  andi        $s5, $t0, 0xFF
    ctx->pc = 0x2351ecu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
label_2351f0:
    // 0x2351f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2351f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2351f4:
    // 0x2351f4: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x2351f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
label_2351f8:
    // 0x2351f8: 0xc08dbf8  jal         func_236FE0
label_2351fc:
    if (ctx->pc == 0x2351FCu) {
        ctx->pc = 0x2351FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2351F8u;
        // 0x2351fc: 0x313200ff  andi        $s2, $t1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x235200u;
        goto label_235200;
    }
    ctx->pc = 0x2351F8u;
    SET_GPR_U32(ctx, 31, 0x235200u);
    ctx->pc = 0x2351FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2351F8u;
    // 0x2351fc: 0x313200ff  andi        $s2, $t1, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FE0u;
    { ctx->pc = 0x236fe0; return; }
    ctx->pc = 0x235200u;
label_235200:
    // 0x235200: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
label_235204:
    if (ctx->pc == 0x235204u) {
        ctx->pc = 0x235204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235200u;
        // 0x235204: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235208u;
        goto label_235208;
    }
    ctx->pc = 0x235200u;
    {
        const bool branch_taken_0x235200 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x235204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235200u;
        // 0x235204: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235200) {
            ctx->pc = 0x235254u;
            goto label_235254;
        }
    }
    ctx->pc = 0x235208u;
label_235208:
    // 0x235208: 0xc08d17c  jal         func_2345F0
label_23520c:
    if (ctx->pc == 0x23520Cu) {
        ctx->pc = 0x235210u;
        goto label_235210;
    }
    ctx->pc = 0x235208u;
    SET_GPR_U32(ctx, 31, 0x235210u);
    ctx->pc = 0x2345F0u;
    { ctx->pc = 0x2345f0; return; }
    ctx->pc = 0x235210u;
label_235210:
    // 0x235210: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x235210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_235214:
    // 0x235214: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x235214u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_235218:
    // 0x235218: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x235218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_23521c:
    // 0x23521c: 0x2442ad00  addiu       $v0, $v0, -0x5300
    ctx->pc = 0x23521cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946048));
label_235220:
    // 0x235220: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x235220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_235224:
    // 0x235224: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
label_235228:
    if (ctx->pc == 0x235228u) {
        ctx->pc = 0x235228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235224u;
        // 0x235228: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23522Cu;
        goto label_23522c;
    }
    ctx->pc = 0x235224u;
    {
        const bool branch_taken_0x235224 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x235228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235224u;
        // 0x235228: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235224) {
            ctx->pc = 0x235248u;
            goto label_235248;
        }
    }
    ctx->pc = 0x23522Cu;
label_23522c:
    // 0x23522c: 0xac520010  sw          $s2, 0x10($v0)
    ctx->pc = 0x23522cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 18));
label_235230:
    // 0x235230: 0xac560000  sw          $s6, 0x0($v0)
    ctx->pc = 0x235230u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 22));
label_235234:
    // 0x235234: 0xac530004  sw          $s3, 0x4($v0)
    ctx->pc = 0x235234u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 19));
label_235238:
    // 0x235238: 0xac540008  sw          $s4, 0x8($v0)
    ctx->pc = 0x235238u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 20));
label_23523c:
    // 0x23523c: 0xc08d192  jal         func_234648
label_235240:
    if (ctx->pc == 0x235240u) {
        ctx->pc = 0x235240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23523Cu;
        // 0x235240: 0xac55000c  sw          $s5, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235244u;
        goto label_235244;
    }
    ctx->pc = 0x23523Cu;
    SET_GPR_U32(ctx, 31, 0x235244u);
    ctx->pc = 0x235240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23523Cu;
    // 0x235240: 0xac55000c  sw          $s5, 0xC($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x234648u;
    { ctx->pc = 0x234648; return; }
    ctx->pc = 0x235244u;
label_235244:
    // 0x235244: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x235244u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_235248:
    // 0x235248: 0xc069210  jal         func_1A4840
label_23524c:
    if (ctx->pc == 0x23524Cu) {
        ctx->pc = 0x23524Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235248u;
        // 0x23524c: 0x8f8482e4  lw          $a0, -0x7D1C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235250u;
        goto label_235250;
    }
    ctx->pc = 0x235248u;
    SET_GPR_U32(ctx, 31, 0x235250u);
    ctx->pc = 0x23524Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235248u;
    // 0x23524c: 0x8f8482e4  lw          $a0, -0x7D1C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x235250u;
label_235250:
    // 0x235250: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x235250u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_235254:
    // 0x235254: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x235254u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_235258:
    // 0x235258: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x235258u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_23525c:
    // 0x23525c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x23525cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_235260:
    // 0x235260: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x235260u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_235264:
    // 0x235264: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x235264u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_235268:
    // 0x235268: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x235268u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_23526c:
    // 0x23526c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x23526cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_235270:
    // 0x235270: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x235270u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_235274:
    // 0x235274: 0x3e00008  jr          $ra
label_235278:
    if (ctx->pc == 0x235278u) {
        ctx->pc = 0x235278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235274u;
        // 0x235278: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23527Cu;
        goto label_23527c;
    }
    ctx->pc = 0x235274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x235278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235274u;
        // 0x235278: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x235274u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23527Cu;
label_23527c:
    // 0x23527c: 0x0  nop
    ctx->pc = 0x23527cu;
    // NOP
label_235280:
    // 0x235280: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x235280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_235284:
    // 0x235284: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x235284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_235288:
    // 0x235288: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x235288u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23528c:
    // 0x23528c: 0x8f8482e4  lw          $a0, -0x7D1C($gp)
    ctx->pc = 0x23528cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935268)));
label_235290:
    // 0x235290: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x235290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_235294:
    // 0x235294: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x235294u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_235298:
    // 0x235298: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x235298u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23529c:
    // 0x23529c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x23529cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_2352a0:
    // 0x2352a0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2352a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_2352a4:
    // 0x2352a4: 0x30d300ff  andi        $s3, $a2, 0xFF
    ctx->pc = 0x2352a4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_2352a8:
    // 0x2352a8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2352a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_2352ac:
    // 0x2352ac: 0x30f400ff  andi        $s4, $a3, 0xFF
    ctx->pc = 0x2352acu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
label_2352b0:
    // 0x2352b0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2352b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_2352b4:
    // 0x2352b4: 0x311500ff  andi        $s5, $t0, 0xFF
    ctx->pc = 0x2352b4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
label_2352b8:
    // 0x2352b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2352b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2352bc:
    // 0x2352bc: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x2352bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
label_2352c0:
    // 0x2352c0: 0xc08dbf8  jal         func_236FE0
label_2352c4:
    if (ctx->pc == 0x2352C4u) {
        ctx->pc = 0x2352C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2352C0u;
        // 0x2352c4: 0x313200ff  andi        $s2, $t1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2352C8u;
        goto label_2352c8;
    }
    ctx->pc = 0x2352C0u;
    SET_GPR_U32(ctx, 31, 0x2352C8u);
    ctx->pc = 0x2352C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2352C0u;
    // 0x2352c4: 0x313200ff  andi        $s2, $t1, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FE0u;
    { ctx->pc = 0x236fe0; return; }
    ctx->pc = 0x2352C8u;
label_2352c8:
    // 0x2352c8: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
label_2352cc:
    if (ctx->pc == 0x2352CCu) {
        ctx->pc = 0x2352CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2352C8u;
        // 0x2352cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2352D0u;
        goto label_2352d0;
    }
    ctx->pc = 0x2352C8u;
    {
        const bool branch_taken_0x2352c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2352CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2352C8u;
        // 0x2352cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2352c8) {
            ctx->pc = 0x23531Cu;
            goto label_23531c;
        }
    }
    ctx->pc = 0x2352D0u;
label_2352d0:
    // 0x2352d0: 0xc08d17c  jal         func_2345F0
label_2352d4:
    if (ctx->pc == 0x2352D4u) {
        ctx->pc = 0x2352D8u;
        goto label_2352d8;
    }
    ctx->pc = 0x2352D0u;
    SET_GPR_U32(ctx, 31, 0x2352D8u);
    ctx->pc = 0x2345F0u;
    { ctx->pc = 0x2345f0; return; }
    ctx->pc = 0x2352D8u;
label_2352d8:
    // 0x2352d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2352d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2352dc:
    // 0x2352dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2352dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2352e0:
    // 0x2352e0: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x2352e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_2352e4:
    // 0x2352e4: 0x2442ad00  addiu       $v0, $v0, -0x5300
    ctx->pc = 0x2352e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946048));
label_2352e8:
    // 0x2352e8: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x2352e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_2352ec:
    // 0x2352ec: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
label_2352f0:
    if (ctx->pc == 0x2352F0u) {
        ctx->pc = 0x2352F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2352ECu;
        // 0x2352f0: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2352F4u;
        goto label_2352f4;
    }
    ctx->pc = 0x2352ECu;
    {
        const bool branch_taken_0x2352ec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2352F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2352ECu;
        // 0x2352f0: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2352ec) {
            ctx->pc = 0x235310u;
            goto label_235310;
        }
    }
    ctx->pc = 0x2352F4u;
label_2352f4:
    // 0x2352f4: 0xac520010  sw          $s2, 0x10($v0)
    ctx->pc = 0x2352f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 18));
label_2352f8:
    // 0x2352f8: 0xac560000  sw          $s6, 0x0($v0)
    ctx->pc = 0x2352f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 22));
label_2352fc:
    // 0x2352fc: 0xac530004  sw          $s3, 0x4($v0)
    ctx->pc = 0x2352fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 19));
label_235300:
    // 0x235300: 0xac540008  sw          $s4, 0x8($v0)
    ctx->pc = 0x235300u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 20));
label_235304:
    // 0x235304: 0xc08d192  jal         func_234648
label_235308:
    if (ctx->pc == 0x235308u) {
        ctx->pc = 0x235308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235304u;
        // 0x235308: 0xac55000c  sw          $s5, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23530Cu;
        goto label_23530c;
    }
    ctx->pc = 0x235304u;
    SET_GPR_U32(ctx, 31, 0x23530Cu);
    ctx->pc = 0x235308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235304u;
    // 0x235308: 0xac55000c  sw          $s5, 0xC($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x234648u;
    { ctx->pc = 0x234648; return; }
    ctx->pc = 0x23530Cu;
label_23530c:
    // 0x23530c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23530cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_235310:
    // 0x235310: 0xc069210  jal         func_1A4840
label_235314:
    if (ctx->pc == 0x235314u) {
        ctx->pc = 0x235314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235310u;
        // 0x235314: 0x8f8482e4  lw          $a0, -0x7D1C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235318u;
        goto label_235318;
    }
    ctx->pc = 0x235310u;
    SET_GPR_U32(ctx, 31, 0x235318u);
    ctx->pc = 0x235314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235310u;
    // 0x235314: 0x8f8482e4  lw          $a0, -0x7D1C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x235318u;
label_235318:
    // 0x235318: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x235318u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23531c:
    // 0x23531c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23531cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_235320:
    // 0x235320: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x235320u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_235324:
    // 0x235324: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x235324u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_235328:
    // 0x235328: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x235328u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_23532c:
    // 0x23532c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x23532cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_235330:
    // 0x235330: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x235330u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_235334:
    // 0x235334: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x235334u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_235338:
    // 0x235338: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x235338u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_23533c:
    // 0x23533c: 0x3e00008  jr          $ra
label_235340:
    if (ctx->pc == 0x235340u) {
        ctx->pc = 0x235340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23533Cu;
        // 0x235340: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235344u;
        goto label_235344;
    }
    ctx->pc = 0x23533Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x235340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23533Cu;
        // 0x235340: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23533Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x235344u;
label_235344:
    // 0x235344: 0x0  nop
    ctx->pc = 0x235344u;
    // NOP
label_235348:
    // 0x235348: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x235348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_23534c:
    // 0x23534c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23534cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_235350:
    // 0x235350: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x235350u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_235354:
    // 0x235354: 0x8f8482e4  lw          $a0, -0x7D1C($gp)
    ctx->pc = 0x235354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935268)));
label_235358:
    // 0x235358: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x235358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_23535c:
    // 0x23535c: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x23535cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_235360:
    // 0x235360: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x235360u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_235364:
    // 0x235364: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x235364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_235368:
    // 0x235368: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x235368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_23536c:
    // 0x23536c: 0x30d300ff  andi        $s3, $a2, 0xFF
    ctx->pc = 0x23536cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_235370:
    // 0x235370: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x235370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_235374:
    // 0x235374: 0x30f400ff  andi        $s4, $a3, 0xFF
    ctx->pc = 0x235374u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
label_235378:
    // 0x235378: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x235378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_23537c:
    // 0x23537c: 0x311500ff  andi        $s5, $t0, 0xFF
    ctx->pc = 0x23537cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
label_235380:
    // 0x235380: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x235380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_235384:
    // 0x235384: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x235384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
label_235388:
    // 0x235388: 0xc08dbf8  jal         func_236FE0
label_23538c:
    if (ctx->pc == 0x23538Cu) {
        ctx->pc = 0x23538Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235388u;
        // 0x23538c: 0x313200ff  andi        $s2, $t1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x235390u;
        goto label_235390;
    }
    ctx->pc = 0x235388u;
    SET_GPR_U32(ctx, 31, 0x235390u);
    ctx->pc = 0x23538Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235388u;
    // 0x23538c: 0x313200ff  andi        $s2, $t1, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FE0u;
    { ctx->pc = 0x236fe0; return; }
    ctx->pc = 0x235390u;
label_235390:
    // 0x235390: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
label_235394:
    if (ctx->pc == 0x235394u) {
        ctx->pc = 0x235394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235390u;
        // 0x235394: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235398u;
        goto label_235398;
    }
    ctx->pc = 0x235390u;
    {
        const bool branch_taken_0x235390 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x235394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235390u;
        // 0x235394: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235390) {
            ctx->pc = 0x2353E4u;
            goto label_2353e4;
        }
    }
    ctx->pc = 0x235398u;
label_235398:
    // 0x235398: 0xc08d17c  jal         func_2345F0
label_23539c:
    if (ctx->pc == 0x23539Cu) {
        ctx->pc = 0x2353A0u;
        goto label_2353a0;
    }
    ctx->pc = 0x235398u;
    SET_GPR_U32(ctx, 31, 0x2353A0u);
    ctx->pc = 0x2345F0u;
    { ctx->pc = 0x2345f0; return; }
    ctx->pc = 0x2353A0u;
label_2353a0:
    // 0x2353a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2353a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2353a4:
    // 0x2353a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2353a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2353a8:
    // 0x2353a8: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x2353a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_2353ac:
    // 0x2353ac: 0x2442ad00  addiu       $v0, $v0, -0x5300
    ctx->pc = 0x2353acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946048));
label_2353b0:
    // 0x2353b0: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x2353b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_2353b4:
    // 0x2353b4: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
label_2353b8:
    if (ctx->pc == 0x2353B8u) {
        ctx->pc = 0x2353B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2353B4u;
        // 0x2353b8: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2353BCu;
        goto label_2353bc;
    }
    ctx->pc = 0x2353B4u;
    {
        const bool branch_taken_0x2353b4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2353B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2353B4u;
        // 0x2353b8: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2353b4) {
            ctx->pc = 0x2353D8u;
            goto label_2353d8;
        }
    }
    ctx->pc = 0x2353BCu;
label_2353bc:
    // 0x2353bc: 0xac520010  sw          $s2, 0x10($v0)
    ctx->pc = 0x2353bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 18));
label_2353c0:
    // 0x2353c0: 0xac560000  sw          $s6, 0x0($v0)
    ctx->pc = 0x2353c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 22));
label_2353c4:
    // 0x2353c4: 0xac530004  sw          $s3, 0x4($v0)
    ctx->pc = 0x2353c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 19));
label_2353c8:
    // 0x2353c8: 0xac540008  sw          $s4, 0x8($v0)
    ctx->pc = 0x2353c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 20));
label_2353cc:
    // 0x2353cc: 0xc08d192  jal         func_234648
label_2353d0:
    if (ctx->pc == 0x2353D0u) {
        ctx->pc = 0x2353D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2353CCu;
        // 0x2353d0: 0xac55000c  sw          $s5, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2353D4u;
        goto label_2353d4;
    }
    ctx->pc = 0x2353CCu;
    SET_GPR_U32(ctx, 31, 0x2353D4u);
    ctx->pc = 0x2353D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2353CCu;
    // 0x2353d0: 0xac55000c  sw          $s5, 0xC($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x234648u;
    { ctx->pc = 0x234648; return; }
    ctx->pc = 0x2353D4u;
label_2353d4:
    // 0x2353d4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2353d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2353d8:
    // 0x2353d8: 0xc069210  jal         func_1A4840
label_2353dc:
    if (ctx->pc == 0x2353DCu) {
        ctx->pc = 0x2353DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2353D8u;
        // 0x2353dc: 0x8f8482e4  lw          $a0, -0x7D1C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2353E0u;
        goto label_2353e0;
    }
    ctx->pc = 0x2353D8u;
    SET_GPR_U32(ctx, 31, 0x2353E0u);
    ctx->pc = 0x2353DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2353D8u;
    // 0x2353dc: 0x8f8482e4  lw          $a0, -0x7D1C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x2353E0u;
label_2353e0:
    // 0x2353e0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2353e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2353e4:
    // 0x2353e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2353e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2353e8:
    // 0x2353e8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2353e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2353ec:
    // 0x2353ec: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2353ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2353f0:
    // 0x2353f0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2353f0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2353f4:
    // 0x2353f4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2353f4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2353f8:
    // 0x2353f8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2353f8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2353fc:
    // 0x2353fc: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2353fcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_235400:
    // 0x235400: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x235400u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_235404:
    // 0x235404: 0x3e00008  jr          $ra
label_235408:
    if (ctx->pc == 0x235408u) {
        ctx->pc = 0x235408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235404u;
        // 0x235408: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23540Cu;
        goto label_23540c;
    }
    ctx->pc = 0x235404u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x235408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235404u;
        // 0x235408: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x235404u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23540Cu;
label_23540c:
    // 0x23540c: 0x0  nop
    ctx->pc = 0x23540cu;
    // NOP
label_235410:
    // 0x235410: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x235410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_235414:
    // 0x235414: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x235414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_235418:
    // 0x235418: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x235418u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23541c:
    // 0x23541c: 0x8f8482e4  lw          $a0, -0x7D1C($gp)
    ctx->pc = 0x23541cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935268)));
label_235420:
    // 0x235420: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x235420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_235424:
    // 0x235424: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x235424u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_235428:
    // 0x235428: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x235428u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23542c:
    // 0x23542c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x23542cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_235430:
    // 0x235430: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x235430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_235434:
    // 0x235434: 0x30d300ff  andi        $s3, $a2, 0xFF
    ctx->pc = 0x235434u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_235438:
    // 0x235438: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x235438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_23543c:
    // 0x23543c: 0x30f400ff  andi        $s4, $a3, 0xFF
    ctx->pc = 0x23543cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
label_235440:
    // 0x235440: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x235440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_235444:
    // 0x235444: 0x311500ff  andi        $s5, $t0, 0xFF
    ctx->pc = 0x235444u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
label_235448:
    // 0x235448: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x235448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_23544c:
    // 0x23544c: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x23544cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
label_235450:
    // 0x235450: 0xc08dbf8  jal         func_236FE0
label_235454:
    if (ctx->pc == 0x235454u) {
        ctx->pc = 0x235454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235450u;
        // 0x235454: 0x120902d  daddu       $s2, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235458u;
        goto label_235458;
    }
    ctx->pc = 0x235450u;
    SET_GPR_U32(ctx, 31, 0x235458u);
    ctx->pc = 0x235454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235450u;
    // 0x235454: 0x120902d  daddu       $s2, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FE0u;
    { ctx->pc = 0x236fe0; return; }
    ctx->pc = 0x235458u;
label_235458:
    // 0x235458: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
label_23545c:
    if (ctx->pc == 0x23545Cu) {
        ctx->pc = 0x23545Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235458u;
        // 0x23545c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235460u;
        goto label_235460;
    }
    ctx->pc = 0x235458u;
    {
        const bool branch_taken_0x235458 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23545Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235458u;
        // 0x23545c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235458) {
            ctx->pc = 0x2354B8u;
            goto label_2354b8;
        }
    }
    ctx->pc = 0x235460u;
label_235460:
    // 0x235460: 0xc08d17c  jal         func_2345F0
label_235464:
    if (ctx->pc == 0x235464u) {
        ctx->pc = 0x235468u;
        goto label_235468;
    }
    ctx->pc = 0x235460u;
    SET_GPR_U32(ctx, 31, 0x235468u);
    ctx->pc = 0x2345F0u;
    { ctx->pc = 0x2345f0; return; }
    ctx->pc = 0x235468u;
label_235468:
    // 0x235468: 0x1219c2  srl         $v1, $s2, 7
    ctx->pc = 0x235468u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 7));
label_23546c:
    // 0x23546c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23546cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_235470:
    // 0x235470: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x235470u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_235474:
    // 0x235474: 0x2442ad00  addiu       $v0, $v0, -0x5300
    ctx->pc = 0x235474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946048));
label_235478:
    // 0x235478: 0x3249007f  andi        $t1, $s2, 0x7F
    ctx->pc = 0x235478u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)127);
label_23547c:
    // 0x23547c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23547cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_235480:
    // 0x235480: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x235480u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_235484:
    // 0x235484: 0x16000009  bnez        $s0, . + 4 + (0x9 << 2)
label_235488:
    if (ctx->pc == 0x235488u) {
        ctx->pc = 0x235488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235484u;
        // 0x235488: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23548Cu;
        goto label_23548c;
    }
    ctx->pc = 0x235484u;
    {
        const bool branch_taken_0x235484 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x235488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235484u;
        // 0x235488: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235484) {
            ctx->pc = 0x2354ACu;
            goto label_2354ac;
        }
    }
    ctx->pc = 0x23548Cu;
label_23548c:
    // 0x23548c: 0xac430014  sw          $v1, 0x14($v0)
    ctx->pc = 0x23548cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
label_235490:
    // 0x235490: 0xac560000  sw          $s6, 0x0($v0)
    ctx->pc = 0x235490u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 22));
label_235494:
    // 0x235494: 0xac530004  sw          $s3, 0x4($v0)
    ctx->pc = 0x235494u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 19));
label_235498:
    // 0x235498: 0xac540008  sw          $s4, 0x8($v0)
    ctx->pc = 0x235498u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 20));
label_23549c:
    // 0x23549c: 0xac55000c  sw          $s5, 0xC($v0)
    ctx->pc = 0x23549cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 21));
label_2354a0:
    // 0x2354a0: 0xc08d192  jal         func_234648
label_2354a4:
    if (ctx->pc == 0x2354A4u) {
        ctx->pc = 0x2354A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2354A0u;
        // 0x2354a4: 0xac490010  sw          $t1, 0x10($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2354A8u;
        goto label_2354a8;
    }
    ctx->pc = 0x2354A0u;
    SET_GPR_U32(ctx, 31, 0x2354A8u);
    ctx->pc = 0x2354A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2354A0u;
    // 0x2354a4: 0xac490010  sw          $t1, 0x10($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x234648u;
    { ctx->pc = 0x234648; return; }
    ctx->pc = 0x2354A8u;
label_2354a8:
    // 0x2354a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2354a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2354ac:
    // 0x2354ac: 0xc069210  jal         func_1A4840
label_2354b0:
    if (ctx->pc == 0x2354B0u) {
        ctx->pc = 0x2354B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2354ACu;
        // 0x2354b0: 0x8f8482e4  lw          $a0, -0x7D1C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2354B4u;
        goto label_2354b4;
    }
    ctx->pc = 0x2354ACu;
    SET_GPR_U32(ctx, 31, 0x2354B4u);
    ctx->pc = 0x2354B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2354ACu;
    // 0x2354b0: 0x8f8482e4  lw          $a0, -0x7D1C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x2354B4u;
label_2354b4:
    // 0x2354b4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2354b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2354b8:
    // 0x2354b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2354b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2354bc:
    // 0x2354bc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2354bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2354c0:
    // 0x2354c0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2354c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2354c4:
    // 0x2354c4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2354c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2354c8:
    // 0x2354c8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2354c8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2354cc:
    // 0x2354cc: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2354ccu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2354d0:
    // 0x2354d0: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2354d0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2354d4:
    // 0x2354d4: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x2354d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_2354d8:
    // 0x2354d8: 0x3e00008  jr          $ra
label_2354dc:
    if (ctx->pc == 0x2354DCu) {
        ctx->pc = 0x2354DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2354D8u;
        // 0x2354dc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2354E0u;
        goto label_2354e0;
    }
    ctx->pc = 0x2354D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2354DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2354D8u;
        // 0x2354dc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2354D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2354E0u;
label_2354e0:
    // 0x2354e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2354e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2354e4:
    // 0x2354e4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2354e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2354e8:
    // 0x2354e8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2354e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2354ec:
    // 0x2354ec: 0x8f8482e4  lw          $a0, -0x7D1C($gp)
    ctx->pc = 0x2354ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935268)));
label_2354f0:
    // 0x2354f0: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x2354f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_2354f4:
    // 0x2354f4: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x2354f4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2354f8:
    // 0x2354f8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2354f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2354fc:
    // 0x2354fc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2354fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_235500:
    // 0x235500: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x235500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_235504:
    // 0x235504: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x235504u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_235508:
    // 0x235508: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x235508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_23550c:
    // 0x23550c: 0x30f400ff  andi        $s4, $a3, 0xFF
    ctx->pc = 0x23550cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
label_235510:
    // 0x235510: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x235510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_235514:
    // 0x235514: 0x311500ff  andi        $s5, $t0, 0xFF
    ctx->pc = 0x235514u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
label_235518:
    // 0x235518: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x235518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_23551c:
    // 0x23551c: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x23551cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
label_235520:
    // 0x235520: 0xc08dbf8  jal         func_236FE0
label_235524:
    if (ctx->pc == 0x235524u) {
        ctx->pc = 0x235524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235520u;
        // 0x235524: 0x313200ff  andi        $s2, $t1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x235528u;
        goto label_235528;
    }
    ctx->pc = 0x235520u;
    SET_GPR_U32(ctx, 31, 0x235528u);
    ctx->pc = 0x235524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235520u;
    // 0x235524: 0x313200ff  andi        $s2, $t1, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FE0u;
    { ctx->pc = 0x236fe0; return; }
    ctx->pc = 0x235528u;
label_235528:
    // 0x235528: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
label_23552c:
    if (ctx->pc == 0x23552Cu) {
        ctx->pc = 0x23552Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235528u;
        // 0x23552c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235530u;
        goto label_235530;
    }
    ctx->pc = 0x235528u;
    {
        const bool branch_taken_0x235528 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23552Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235528u;
        // 0x23552c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235528) {
            ctx->pc = 0x23557Cu;
            goto label_23557c;
        }
    }
    ctx->pc = 0x235530u;
label_235530:
    // 0x235530: 0xc08d17c  jal         func_2345F0
label_235534:
    if (ctx->pc == 0x235534u) {
        ctx->pc = 0x235538u;
        goto label_235538;
    }
    ctx->pc = 0x235530u;
    SET_GPR_U32(ctx, 31, 0x235538u);
    ctx->pc = 0x2345F0u;
    { ctx->pc = 0x2345f0; return; }
    ctx->pc = 0x235538u;
label_235538:
    // 0x235538: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x235538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23553c:
    // 0x23553c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23553cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_235540:
    // 0x235540: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x235540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_235544:
    // 0x235544: 0x2442ad00  addiu       $v0, $v0, -0x5300
    ctx->pc = 0x235544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946048));
label_235548:
    // 0x235548: 0x2405001d  addiu       $a1, $zero, 0x1D
    ctx->pc = 0x235548u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
label_23554c:
    // 0x23554c: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
label_235550:
    if (ctx->pc == 0x235550u) {
        ctx->pc = 0x235550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23554Cu;
        // 0x235550: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235554u;
        goto label_235554;
    }
    ctx->pc = 0x23554Cu;
    {
        const bool branch_taken_0x23554c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x235550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23554Cu;
        // 0x235550: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23554c) {
            ctx->pc = 0x235570u;
            goto label_235570;
        }
    }
    ctx->pc = 0x235554u;
label_235554:
    // 0x235554: 0xac520010  sw          $s2, 0x10($v0)
    ctx->pc = 0x235554u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 18));
label_235558:
    // 0x235558: 0xac560000  sw          $s6, 0x0($v0)
    ctx->pc = 0x235558u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 22));
label_23555c:
    // 0x23555c: 0xac530004  sw          $s3, 0x4($v0)
    ctx->pc = 0x23555cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 19));
label_235560:
    // 0x235560: 0xac540008  sw          $s4, 0x8($v0)
    ctx->pc = 0x235560u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 20));
label_235564:
    // 0x235564: 0xc08d192  jal         func_234648
label_235568:
    if (ctx->pc == 0x235568u) {
        ctx->pc = 0x235568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235564u;
        // 0x235568: 0xac55000c  sw          $s5, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23556Cu;
        goto label_23556c;
    }
    ctx->pc = 0x235564u;
    SET_GPR_U32(ctx, 31, 0x23556Cu);
    ctx->pc = 0x235568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235564u;
    // 0x235568: 0xac55000c  sw          $s5, 0xC($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x234648u;
    { ctx->pc = 0x234648; return; }
    ctx->pc = 0x23556Cu;
label_23556c:
    // 0x23556c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23556cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_235570:
    // 0x235570: 0xc069210  jal         func_1A4840
label_235574:
    if (ctx->pc == 0x235574u) {
        ctx->pc = 0x235574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235570u;
        // 0x235574: 0x8f8482e4  lw          $a0, -0x7D1C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235578u;
        goto label_235578;
    }
    ctx->pc = 0x235570u;
    SET_GPR_U32(ctx, 31, 0x235578u);
    ctx->pc = 0x235574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235570u;
    // 0x235574: 0x8f8482e4  lw          $a0, -0x7D1C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x235578u;
label_235578:
    // 0x235578: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x235578u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23557c:
    // 0x23557c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23557cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_235580:
    // 0x235580: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x235580u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_235584:
    // 0x235584: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x235584u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_235588:
    // 0x235588: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x235588u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_23558c:
    // 0x23558c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x23558cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_235590:
    // 0x235590: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x235590u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_235594:
    // 0x235594: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x235594u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_235598:
    // 0x235598: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x235598u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_23559c:
    // 0x23559c: 0x3e00008  jr          $ra
label_2355a0:
    if (ctx->pc == 0x2355A0u) {
        ctx->pc = 0x2355A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23559Cu;
        // 0x2355a0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2355A4u;
        goto label_2355a4;
    }
    ctx->pc = 0x23559Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2355A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23559Cu;
        // 0x2355a0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23559Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2355A4u;
label_2355a4:
    // 0x2355a4: 0x0  nop
    ctx->pc = 0x2355a4u;
    // NOP
label_2355a8:
    // 0x2355a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2355a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2355ac:
    // 0x2355ac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2355acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2355b0:
    // 0x2355b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2355b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2355b4:
    // 0x2355b4: 0x8f8482e4  lw          $a0, -0x7D1C($gp)
    ctx->pc = 0x2355b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935268)));
label_2355b8:
    // 0x2355b8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2355b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_2355bc:
    // 0x2355bc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2355bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2355c0:
    // 0x2355c0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2355c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2355c4:
    // 0x2355c4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2355c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_2355c8:
    // 0x2355c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2355c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2355cc:
    // 0x2355cc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2355ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2355d0:
    // 0x2355d0: 0xc08dbf8  jal         func_236FE0
label_2355d4:
    if (ctx->pc == 0x2355D4u) {
        ctx->pc = 0x2355D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2355D0u;
        // 0x2355d4: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2355D8u;
        goto label_2355d8;
    }
    ctx->pc = 0x2355D0u;
    SET_GPR_U32(ctx, 31, 0x2355D8u);
    ctx->pc = 0x2355D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2355D0u;
    // 0x2355d4: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FE0u;
    { ctx->pc = 0x236fe0; return; }
    ctx->pc = 0x2355D8u;
label_2355d8:
    // 0x2355d8: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
label_2355dc:
    if (ctx->pc == 0x2355DCu) {
        ctx->pc = 0x2355DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2355D8u;
        // 0x2355dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2355E0u;
        goto label_2355e0;
    }
    ctx->pc = 0x2355D8u;
    {
        const bool branch_taken_0x2355d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2355DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2355D8u;
        // 0x2355dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2355d8) {
            ctx->pc = 0x235620u;
            { ctx->pc = 0x235620; return; }
        }
    }
    ctx->pc = 0x2355E0u;
label_2355e0:
    // 0x2355e0: 0xc08d17c  jal         func_2345F0
label_2355e4:
    if (ctx->pc == 0x2355E4u) {
        ctx->pc = 0x2355E8u;
        goto label_2355e8;
    }
    ctx->pc = 0x2355E0u;
    SET_GPR_U32(ctx, 31, 0x2355E8u);
    ctx->pc = 0x2345F0u;
    { ctx->pc = 0x2345f0; return; }
    ctx->pc = 0x2355E8u;
label_2355e8:
    // 0x2355e8: 0x2405002d  addiu       $a1, $zero, 0x2D
    ctx->pc = 0x2355e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_2355ec:
    // 0x2355ec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2355ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2355f0:
    // 0x2355f0: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x2355f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_2355f4:
    // 0x2355f4: 0x2442ad00  addiu       $v0, $v0, -0x5300
    ctx->pc = 0x2355f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946048));
label_2355f8:
    // 0x2355f8: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x2355f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2355fc:
    // 0x2355fc: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x235600u;
    return;
}

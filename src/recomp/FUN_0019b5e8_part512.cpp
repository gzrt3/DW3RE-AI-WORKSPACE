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


void FUN_0019b5e8_part512(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x294e18u: goto label_294e18;
        case 0x294e1cu: goto label_294e1c;
        case 0x294e20u: goto label_294e20;
        case 0x294e24u: goto label_294e24;
        case 0x294e28u: goto label_294e28;
        case 0x294e2cu: goto label_294e2c;
        case 0x294e30u: goto label_294e30;
        case 0x294e34u: goto label_294e34;
        case 0x294e38u: goto label_294e38;
        case 0x294e3cu: goto label_294e3c;
        case 0x294e40u: goto label_294e40;
        case 0x294e44u: goto label_294e44;
        case 0x294e48u: goto label_294e48;
        case 0x294e4cu: goto label_294e4c;
        case 0x294e50u: goto label_294e50;
        case 0x294e54u: goto label_294e54;
        case 0x294e58u: goto label_294e58;
        case 0x294e5cu: goto label_294e5c;
        case 0x294e60u: goto label_294e60;
        case 0x294e64u: goto label_294e64;
        case 0x294e68u: goto label_294e68;
        case 0x294e6cu: goto label_294e6c;
        case 0x294e70u: goto label_294e70;
        case 0x294e74u: goto label_294e74;
        case 0x294e78u: goto label_294e78;
        case 0x294e7cu: goto label_294e7c;
        case 0x294e80u: goto label_294e80;
        case 0x294e84u: goto label_294e84;
        case 0x294e88u: goto label_294e88;
        case 0x294e8cu: goto label_294e8c;
        case 0x294e90u: goto label_294e90;
        case 0x294e94u: goto label_294e94;
        case 0x294e98u: goto label_294e98;
        case 0x294e9cu: goto label_294e9c;
        case 0x294ea0u: goto label_294ea0;
        case 0x294ea4u: goto label_294ea4;
        case 0x294ea8u: goto label_294ea8;
        case 0x294eacu: goto label_294eac;
        case 0x294eb0u: goto label_294eb0;
        case 0x294eb4u: goto label_294eb4;
        case 0x294eb8u: goto label_294eb8;
        case 0x294ebcu: goto label_294ebc;
        case 0x294ec0u: goto label_294ec0;
        case 0x294ec4u: goto label_294ec4;
        case 0x294ec8u: goto label_294ec8;
        case 0x294eccu: goto label_294ecc;
        case 0x294ed0u: goto label_294ed0;
        case 0x294ed4u: goto label_294ed4;
        case 0x294ed8u: goto label_294ed8;
        case 0x294edcu: goto label_294edc;
        case 0x294ee0u: goto label_294ee0;
        case 0x294ee4u: goto label_294ee4;
        case 0x294ee8u: goto label_294ee8;
        case 0x294eecu: goto label_294eec;
        case 0x294ef0u: goto label_294ef0;
        case 0x294ef4u: goto label_294ef4;
        case 0x294ef8u: goto label_294ef8;
        case 0x294efcu: goto label_294efc;
        case 0x294f00u: goto label_294f00;
        case 0x294f04u: goto label_294f04;
        case 0x294f08u: goto label_294f08;
        case 0x294f0cu: goto label_294f0c;
        case 0x294f10u: goto label_294f10;
        case 0x294f14u: goto label_294f14;
        case 0x294f18u: goto label_294f18;
        case 0x294f1cu: goto label_294f1c;
        case 0x294f20u: goto label_294f20;
        case 0x294f24u: goto label_294f24;
        case 0x294f28u: goto label_294f28;
        case 0x294f2cu: goto label_294f2c;
        case 0x294f30u: goto label_294f30;
        case 0x294f34u: goto label_294f34;
        case 0x294f38u: goto label_294f38;
        case 0x294f3cu: goto label_294f3c;
        case 0x294f40u: goto label_294f40;
        case 0x294f44u: goto label_294f44;
        case 0x294f48u: goto label_294f48;
        case 0x294f4cu: goto label_294f4c;
        case 0x294f50u: goto label_294f50;
        case 0x294f54u: goto label_294f54;
        case 0x294f58u: goto label_294f58;
        case 0x294f5cu: goto label_294f5c;
        case 0x294f60u: goto label_294f60;
        case 0x294f64u: goto label_294f64;
        case 0x294f68u: goto label_294f68;
        case 0x294f6cu: goto label_294f6c;
        case 0x294f70u: goto label_294f70;
        case 0x294f74u: goto label_294f74;
        case 0x294f78u: goto label_294f78;
        case 0x294f7cu: goto label_294f7c;
        case 0x294f80u: goto label_294f80;
        case 0x294f84u: goto label_294f84;
        case 0x294f88u: goto label_294f88;
        case 0x294f8cu: goto label_294f8c;
        case 0x294f90u: goto label_294f90;
        case 0x294f94u: goto label_294f94;
        case 0x294f98u: goto label_294f98;
        case 0x294f9cu: goto label_294f9c;
        case 0x294fa0u: goto label_294fa0;
        case 0x294fa4u: goto label_294fa4;
        case 0x294fa8u: goto label_294fa8;
        case 0x294facu: goto label_294fac;
        case 0x294fb0u: goto label_294fb0;
        case 0x294fb4u: goto label_294fb4;
        case 0x294fb8u: goto label_294fb8;
        case 0x294fbcu: goto label_294fbc;
        case 0x294fc0u: goto label_294fc0;
        case 0x294fc4u: goto label_294fc4;
        case 0x294fc8u: goto label_294fc8;
        case 0x294fccu: goto label_294fcc;
        case 0x294fd0u: goto label_294fd0;
        case 0x294fd4u: goto label_294fd4;
        case 0x294fd8u: goto label_294fd8;
        case 0x294fdcu: goto label_294fdc;
        case 0x294fe0u: goto label_294fe0;
        case 0x294fe4u: goto label_294fe4;
        case 0x294fe8u: goto label_294fe8;
        case 0x294fecu: goto label_294fec;
        case 0x294ff0u: goto label_294ff0;
        case 0x294ff4u: goto label_294ff4;
        case 0x294ff8u: goto label_294ff8;
        case 0x294ffcu: goto label_294ffc;
        case 0x295000u: goto label_295000;
        case 0x295004u: goto label_295004;
        case 0x295008u: goto label_295008;
        case 0x29500cu: goto label_29500c;
        case 0x295010u: goto label_295010;
        case 0x295014u: goto label_295014;
        case 0x295018u: goto label_295018;
        case 0x29501cu: goto label_29501c;
        case 0x295020u: goto label_295020;
        case 0x295024u: goto label_295024;
        case 0x295028u: goto label_295028;
        case 0x29502cu: goto label_29502c;
        case 0x295030u: goto label_295030;
        case 0x295034u: goto label_295034;
        case 0x295038u: goto label_295038;
        case 0x29503cu: goto label_29503c;
        case 0x295040u: goto label_295040;
        case 0x295044u: goto label_295044;
        case 0x295048u: goto label_295048;
        case 0x29504cu: goto label_29504c;
        case 0x295050u: goto label_295050;
        case 0x295054u: goto label_295054;
        case 0x295058u: goto label_295058;
        case 0x29505cu: goto label_29505c;
        case 0x295060u: goto label_295060;
        case 0x295064u: goto label_295064;
        case 0x295068u: goto label_295068;
        case 0x29506cu: goto label_29506c;
        case 0x295070u: goto label_295070;
        case 0x295074u: goto label_295074;
        case 0x295078u: goto label_295078;
        case 0x29507cu: goto label_29507c;
        case 0x295080u: goto label_295080;
        case 0x295084u: goto label_295084;
        case 0x295088u: goto label_295088;
        case 0x29508cu: goto label_29508c;
        case 0x295090u: goto label_295090;
        case 0x295094u: goto label_295094;
        case 0x295098u: goto label_295098;
        case 0x29509cu: goto label_29509c;
        case 0x2950a0u: goto label_2950a0;
        case 0x2950a4u: goto label_2950a4;
        case 0x2950a8u: goto label_2950a8;
        case 0x2950acu: goto label_2950ac;
        case 0x2950b0u: goto label_2950b0;
        case 0x2950b4u: goto label_2950b4;
        case 0x2950b8u: goto label_2950b8;
        case 0x2950bcu: goto label_2950bc;
        case 0x2950c0u: goto label_2950c0;
        case 0x2950c4u: goto label_2950c4;
        case 0x2950c8u: goto label_2950c8;
        case 0x2950ccu: goto label_2950cc;
        case 0x2950d0u: goto label_2950d0;
        case 0x2950d4u: goto label_2950d4;
        case 0x2950d8u: goto label_2950d8;
        case 0x2950dcu: goto label_2950dc;
        case 0x2950e0u: goto label_2950e0;
        case 0x2950e4u: goto label_2950e4;
        case 0x2950e8u: goto label_2950e8;
        case 0x2950ecu: goto label_2950ec;
        case 0x2950f0u: goto label_2950f0;
        case 0x2950f4u: goto label_2950f4;
        case 0x2950f8u: goto label_2950f8;
        case 0x2950fcu: goto label_2950fc;
        case 0x295100u: goto label_295100;
        case 0x295104u: goto label_295104;
        case 0x295108u: goto label_295108;
        case 0x29510cu: goto label_29510c;
        case 0x295110u: goto label_295110;
        case 0x295114u: goto label_295114;
        case 0x295118u: goto label_295118;
        case 0x29511cu: goto label_29511c;
        case 0x295120u: goto label_295120;
        case 0x295124u: goto label_295124;
        case 0x295128u: goto label_295128;
        case 0x29512cu: goto label_29512c;
        case 0x295130u: goto label_295130;
        case 0x295134u: goto label_295134;
        case 0x295138u: goto label_295138;
        case 0x29513cu: goto label_29513c;
        case 0x295140u: goto label_295140;
        case 0x295144u: goto label_295144;
        case 0x295148u: goto label_295148;
        case 0x29514cu: goto label_29514c;
        case 0x295150u: goto label_295150;
        case 0x295154u: goto label_295154;
        case 0x295158u: goto label_295158;
        case 0x29515cu: goto label_29515c;
        case 0x295160u: goto label_295160;
        case 0x295164u: goto label_295164;
        case 0x295168u: goto label_295168;
        case 0x29516cu: goto label_29516c;
        case 0x295170u: goto label_295170;
        case 0x295174u: goto label_295174;
        case 0x295178u: goto label_295178;
        case 0x29517cu: goto label_29517c;
        case 0x295180u: goto label_295180;
        case 0x295184u: goto label_295184;
        case 0x295188u: goto label_295188;
        case 0x29518cu: goto label_29518c;
        case 0x295190u: goto label_295190;
        case 0x295194u: goto label_295194;
        case 0x295198u: goto label_295198;
        case 0x29519cu: goto label_29519c;
        case 0x2951a0u: goto label_2951a0;
        case 0x2951a4u: goto label_2951a4;
        case 0x2951a8u: goto label_2951a8;
        case 0x2951acu: goto label_2951ac;
        case 0x2951b0u: goto label_2951b0;
        case 0x2951b4u: goto label_2951b4;
        case 0x2951b8u: goto label_2951b8;
        case 0x2951bcu: goto label_2951bc;
        case 0x2951c0u: goto label_2951c0;
        case 0x2951c4u: goto label_2951c4;
        case 0x2951c8u: goto label_2951c8;
        case 0x2951ccu: goto label_2951cc;
        case 0x2951d0u: goto label_2951d0;
        case 0x2951d4u: goto label_2951d4;
        case 0x2951d8u: goto label_2951d8;
        case 0x2951dcu: goto label_2951dc;
        case 0x2951e0u: goto label_2951e0;
        case 0x2951e4u: goto label_2951e4;
        case 0x2951e8u: goto label_2951e8;
        case 0x2951ecu: goto label_2951ec;
        case 0x2951f0u: goto label_2951f0;
        case 0x2951f4u: goto label_2951f4;
        case 0x2951f8u: goto label_2951f8;
        case 0x2951fcu: goto label_2951fc;
        case 0x295200u: goto label_295200;
        case 0x295204u: goto label_295204;
        case 0x295208u: goto label_295208;
        case 0x29520cu: goto label_29520c;
        case 0x295210u: goto label_295210;
        case 0x295214u: goto label_295214;
        case 0x295218u: goto label_295218;
        case 0x29521cu: goto label_29521c;
        case 0x295220u: goto label_295220;
        case 0x295224u: goto label_295224;
        case 0x295228u: goto label_295228;
        case 0x29522cu: goto label_29522c;
        case 0x295230u: goto label_295230;
        case 0x295234u: goto label_295234;
        case 0x295238u: goto label_295238;
        case 0x29523cu: goto label_29523c;
        case 0x295240u: goto label_295240;
        case 0x295244u: goto label_295244;
        case 0x295248u: goto label_295248;
        case 0x29524cu: goto label_29524c;
        case 0x295250u: goto label_295250;
        case 0x295254u: goto label_295254;
        case 0x295258u: goto label_295258;
        case 0x29525cu: goto label_29525c;
        case 0x295260u: goto label_295260;
        case 0x295264u: goto label_295264;
        case 0x295268u: goto label_295268;
        case 0x29526cu: goto label_29526c;
        case 0x295270u: goto label_295270;
        case 0x295274u: goto label_295274;
        case 0x295278u: goto label_295278;
        case 0x29527cu: goto label_29527c;
        case 0x295280u: goto label_295280;
        case 0x295284u: goto label_295284;
        case 0x295288u: goto label_295288;
        case 0x29528cu: goto label_29528c;
        case 0x295290u: goto label_295290;
        case 0x295294u: goto label_295294;
        case 0x295298u: goto label_295298;
        case 0x29529cu: goto label_29529c;
        case 0x2952a0u: goto label_2952a0;
        case 0x2952a4u: goto label_2952a4;
        case 0x2952a8u: goto label_2952a8;
        case 0x2952acu: goto label_2952ac;
        case 0x2952b0u: goto label_2952b0;
        case 0x2952b4u: goto label_2952b4;
        case 0x2952b8u: goto label_2952b8;
        case 0x2952bcu: goto label_2952bc;
        case 0x2952c0u: goto label_2952c0;
        case 0x2952c4u: goto label_2952c4;
        case 0x2952c8u: goto label_2952c8;
        case 0x2952ccu: goto label_2952cc;
        case 0x2952d0u: goto label_2952d0;
        case 0x2952d4u: goto label_2952d4;
        case 0x2952d8u: goto label_2952d8;
        case 0x2952dcu: goto label_2952dc;
        case 0x2952e0u: goto label_2952e0;
        case 0x2952e4u: goto label_2952e4;
        case 0x2952e8u: goto label_2952e8;
        case 0x2952ecu: goto label_2952ec;
        case 0x2952f0u: goto label_2952f0;
        case 0x2952f4u: goto label_2952f4;
        case 0x2952f8u: goto label_2952f8;
        case 0x2952fcu: goto label_2952fc;
        case 0x295300u: goto label_295300;
        case 0x295304u: goto label_295304;
        case 0x295308u: goto label_295308;
        case 0x29530cu: goto label_29530c;
        case 0x295310u: goto label_295310;
        case 0x295314u: goto label_295314;
        case 0x295318u: goto label_295318;
        case 0x29531cu: goto label_29531c;
        case 0x295320u: goto label_295320;
        case 0x295324u: goto label_295324;
        case 0x295328u: goto label_295328;
        case 0x29532cu: goto label_29532c;
        case 0x295330u: goto label_295330;
        case 0x295334u: goto label_295334;
        case 0x295338u: goto label_295338;
        case 0x29533cu: goto label_29533c;
        case 0x295340u: goto label_295340;
        case 0x295344u: goto label_295344;
        case 0x295348u: goto label_295348;
        case 0x29534cu: goto label_29534c;
        case 0x295350u: goto label_295350;
        case 0x295354u: goto label_295354;
        case 0x295358u: goto label_295358;
        case 0x29535cu: goto label_29535c;
        case 0x295360u: goto label_295360;
        case 0x295364u: goto label_295364;
        case 0x295368u: goto label_295368;
        case 0x29536cu: goto label_29536c;
        case 0x295370u: goto label_295370;
        case 0x295374u: goto label_295374;
        case 0x295378u: goto label_295378;
        case 0x29537cu: goto label_29537c;
        case 0x295380u: goto label_295380;
        case 0x295384u: goto label_295384;
        case 0x295388u: goto label_295388;
        case 0x29538cu: goto label_29538c;
        case 0x295390u: goto label_295390;
        case 0x295394u: goto label_295394;
        case 0x295398u: goto label_295398;
        case 0x29539cu: goto label_29539c;
        case 0x2953a0u: goto label_2953a0;
        case 0x2953a4u: goto label_2953a4;
        case 0x2953a8u: goto label_2953a8;
        case 0x2953acu: goto label_2953ac;
        case 0x2953b0u: goto label_2953b0;
        case 0x2953b4u: goto label_2953b4;
        case 0x2953b8u: goto label_2953b8;
        case 0x2953bcu: goto label_2953bc;
        case 0x2953c0u: goto label_2953c0;
        case 0x2953c4u: goto label_2953c4;
        case 0x2953c8u: goto label_2953c8;
        case 0x2953ccu: goto label_2953cc;
        case 0x2953d0u: goto label_2953d0;
        case 0x2953d4u: goto label_2953d4;
        case 0x2953d8u: goto label_2953d8;
        case 0x2953dcu: goto label_2953dc;
        case 0x2953e0u: goto label_2953e0;
        case 0x2953e4u: goto label_2953e4;
        case 0x2953e8u: goto label_2953e8;
        case 0x2953ecu: goto label_2953ec;
        case 0x2953f0u: goto label_2953f0;
        case 0x2953f4u: goto label_2953f4;
        case 0x2953f8u: goto label_2953f8;
        case 0x2953fcu: goto label_2953fc;
        case 0x295400u: goto label_295400;
        case 0x295404u: goto label_295404;
        case 0x295408u: goto label_295408;
        case 0x29540cu: goto label_29540c;
        case 0x295410u: goto label_295410;
        case 0x295414u: goto label_295414;
        case 0x295418u: goto label_295418;
        case 0x29541cu: goto label_29541c;
        case 0x295420u: goto label_295420;
        case 0x295424u: goto label_295424;
        case 0x295428u: goto label_295428;
        case 0x29542cu: goto label_29542c;
        case 0x295430u: goto label_295430;
        case 0x295434u: goto label_295434;
        case 0x295438u: goto label_295438;
        case 0x29543cu: goto label_29543c;
        case 0x295440u: goto label_295440;
        case 0x295444u: goto label_295444;
        case 0x295448u: goto label_295448;
        case 0x29544cu: goto label_29544c;
        case 0x295450u: goto label_295450;
        case 0x295454u: goto label_295454;
        case 0x295458u: goto label_295458;
        case 0x29545cu: goto label_29545c;
        case 0x295460u: goto label_295460;
        case 0x295464u: goto label_295464;
        case 0x295468u: goto label_295468;
        case 0x29546cu: goto label_29546c;
        case 0x295470u: goto label_295470;
        case 0x295474u: goto label_295474;
        case 0x295478u: goto label_295478;
        case 0x29547cu: goto label_29547c;
        case 0x295480u: goto label_295480;
        case 0x295484u: goto label_295484;
        case 0x295488u: goto label_295488;
        case 0x29548cu: goto label_29548c;
        case 0x295490u: goto label_295490;
        case 0x295494u: goto label_295494;
        case 0x295498u: goto label_295498;
        case 0x29549cu: goto label_29549c;
        case 0x2954a0u: goto label_2954a0;
        case 0x2954a4u: goto label_2954a4;
        case 0x2954a8u: goto label_2954a8;
        case 0x2954acu: goto label_2954ac;
        case 0x2954b0u: goto label_2954b0;
        case 0x2954b4u: goto label_2954b4;
        case 0x2954b8u: goto label_2954b8;
        case 0x2954bcu: goto label_2954bc;
        case 0x2954c0u: goto label_2954c0;
        case 0x2954c4u: goto label_2954c4;
        case 0x2954c8u: goto label_2954c8;
        case 0x2954ccu: goto label_2954cc;
        case 0x2954d0u: goto label_2954d0;
        case 0x2954d4u: goto label_2954d4;
        case 0x2954d8u: goto label_2954d8;
        case 0x2954dcu: goto label_2954dc;
        case 0x2954e0u: goto label_2954e0;
        case 0x2954e4u: goto label_2954e4;
        case 0x2954e8u: goto label_2954e8;
        case 0x2954ecu: goto label_2954ec;
        case 0x2954f0u: goto label_2954f0;
        case 0x2954f4u: goto label_2954f4;
        case 0x2954f8u: goto label_2954f8;
        case 0x2954fcu: goto label_2954fc;
        case 0x295500u: goto label_295500;
        case 0x295504u: goto label_295504;
        case 0x295508u: goto label_295508;
        case 0x29550cu: goto label_29550c;
        case 0x295510u: goto label_295510;
        case 0x295514u: goto label_295514;
        case 0x295518u: goto label_295518;
        case 0x29551cu: goto label_29551c;
        case 0x295520u: goto label_295520;
        case 0x295524u: goto label_295524;
        case 0x295528u: goto label_295528;
        case 0x29552cu: goto label_29552c;
        case 0x295530u: goto label_295530;
        case 0x295534u: goto label_295534;
        case 0x295538u: goto label_295538;
        case 0x29553cu: goto label_29553c;
        case 0x295540u: goto label_295540;
        case 0x295544u: goto label_295544;
        case 0x295548u: goto label_295548;
        case 0x29554cu: goto label_29554c;
        case 0x295550u: goto label_295550;
        case 0x295554u: goto label_295554;
        case 0x295558u: goto label_295558;
        case 0x29555cu: goto label_29555c;
        case 0x295560u: goto label_295560;
        case 0x295564u: goto label_295564;
        case 0x295568u: goto label_295568;
        case 0x29556cu: goto label_29556c;
        case 0x295570u: goto label_295570;
        case 0x295574u: goto label_295574;
        case 0x295578u: goto label_295578;
        case 0x29557cu: goto label_29557c;
        case 0x295580u: goto label_295580;
        case 0x295584u: goto label_295584;
        case 0x295588u: goto label_295588;
        case 0x29558cu: goto label_29558c;
        case 0x295590u: goto label_295590;
        case 0x295594u: goto label_295594;
        case 0x295598u: goto label_295598;
        case 0x29559cu: goto label_29559c;
        case 0x2955a0u: goto label_2955a0;
        case 0x2955a4u: goto label_2955a4;
        case 0x2955a8u: goto label_2955a8;
        case 0x2955acu: goto label_2955ac;
        case 0x2955b0u: goto label_2955b0;
        case 0x2955b4u: goto label_2955b4;
        case 0x2955b8u: goto label_2955b8;
        case 0x2955bcu: goto label_2955bc;
        case 0x2955c0u: goto label_2955c0;
        case 0x2955c4u: goto label_2955c4;
        case 0x2955c8u: goto label_2955c8;
        case 0x2955ccu: goto label_2955cc;
        case 0x2955d0u: goto label_2955d0;
        case 0x2955d4u: goto label_2955d4;
        case 0x2955d8u: goto label_2955d8;
        case 0x2955dcu: goto label_2955dc;
        case 0x2955e0u: goto label_2955e0;
        case 0x2955e4u: goto label_2955e4;
        default: return;
    }

label_294e18:
    // 0x294e18: 0x48044  .word       0x00048044                   # sllv        $s0, $a0, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294e18u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 0) & 0x1F));
label_294e1c:
    // 0x294e1c: 0x0  nop
    ctx->pc = 0x294e1cu;
    // NOP
label_294e20:
    // 0x294e20: 0x169e4  .word       0x000169E4                   # and         $t5, $zero, $at # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294e20u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) & GPR_U64(ctx, 1));
label_294e24:
    // 0x294e24: 0x91  .word       0x00000091                   # mthi        $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294e24u;
    ctx->hi = GPR_U64(ctx, 0);
label_294e28:
    // 0x294e28: 0x48154  .word       0x00048154                   # dsllv       $s0, $a0, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294e28u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) << (GPR_U32(ctx, 0) & 0x3F));
label_294e2c:
    // 0x294e2c: 0x0  nop
    ctx->pc = 0x294e2cu;
    // NOP
label_294e30:
    // 0x294e30: 0x16a75  .word       0x00016A75                   # INVALID     $zero, $at, 0x6A75 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294e30u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x294E30 raw=0x00016A75"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294e34:
    // 0x294e34: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294e34u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x294E34 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294e38:
    // 0x294e38: 0x60  .word       0x00000060                   # add         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294e38u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_294e3c:
    // 0x294e3c: 0x0  nop
    ctx->pc = 0x294e3cu;
    // NOP
label_294e40:
    // 0x294e40: 0x16a76  tne         $zero, $at, 425
    ctx->pc = 0x294e40u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_294e44:
    // 0x294e44: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294e44u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x294E44 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294e48:
    // 0x294e48: 0x4c  syscall     1
    ctx->pc = 0x294e48u;
    ctx->pc = 0x294E4Cu;
runtime->handleSyscall(rdram, ctx, 0x1u);
label_294e4c:
    // 0x294e4c: 0x0  nop
    ctx->pc = 0x294e4cu;
    // NOP
label_294e50:
    // 0x294e50: 0x16a77  .word       0x00016A77                   # INVALID     $zero, $at, 0x6A77 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294e50u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x294E50 raw=0x00016A77"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294e54:
    // 0x294e54: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294e54u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x294E54 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294e58:
    // 0x294e58: 0xf0  tge         $zero, $zero, 3
    ctx->pc = 0x294e58u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_294e5c:
    // 0x294e5c: 0x0  nop
    ctx->pc = 0x294e5cu;
    // NOP
label_294e60:
    // 0x294e60: 0x16a78  dsll        $t5, $at, 9
    ctx->pc = 0x294e60u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 1) << 9);
label_294e64:
    // 0x294e64: 0x21  addu        $zero, $zero, $zero
    ctx->pc = 0x294e64u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_294e68:
    // 0x294e68: 0x10460  .word       0x00010460                   # add         $zero, $zero, $at # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294e68u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_294e6c:
    // 0x294e6c: 0x0  nop
    ctx->pc = 0x294e6cu;
    // NOP
label_294e70:
    // 0x294e70: 0x16a99  .word       0x00016A99                   # multu       $zero, $at # 00006A80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294e70u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
label_294e74:
    // 0x294e74: 0xc  syscall     0
    ctx->pc = 0x294e74u;
    ctx->pc = 0x294E78u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_294e78:
    // 0x294e78: 0x5c50  .word       0x00005C50                   # mfhi        $t3 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294e78u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_294e7c:
    // 0x294e7c: 0x0  nop
    ctx->pc = 0x294e7cu;
    // NOP
label_294e80:
    // 0x294e80: 0x16aa5  .word       0x00016AA5                   # or          $t5, $zero, $at # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294e80u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) | GPR_U64(ctx, 1));
label_294e84:
    // 0x294e84: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294e84u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x294E84 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294e88:
    // 0x294e88: 0x4a0  .word       0x000004A0                   # add         $zero, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294e88u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_294e8c:
    // 0x294e8c: 0x0  nop
    ctx->pc = 0x294e8cu;
    // NOP
label_294e90:
    // 0x294e90: 0x16aa6  .word       0x00016AA6                   # xor         $t5, $zero, $at # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294e90u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 1));
label_294e94:
    // 0x294e94: 0x2e  dsub        $zero, $zero, $zero
    ctx->pc = 0x294e94u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_294e98:
    // 0x294e98: 0x16bb0  tge         $zero, $at, 430
    ctx->pc = 0x294e98u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_294e9c:
    // 0x294e9c: 0x0  nop
    ctx->pc = 0x294e9cu;
    // NOP
label_294ea0:
    // 0x294ea0: 0x16ad4  .word       0x00016AD4                   # dsllv       $t5, $at, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294ea0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 1) << (GPR_U32(ctx, 0) & 0x3F));
label_294ea4:
    // 0x294ea4: 0x1e  ddiv        $zero, $zero, $zero
    ctx->pc = 0x294ea4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x294EA4 raw=0x0000001E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294ea8:
    // 0x294ea8: 0xed24  .word       0x0000ED24                   # and         $sp, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294ea8u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_294eac:
    // 0x294eac: 0x0  nop
    ctx->pc = 0x294eacu;
    // NOP
label_294eb0:
    // 0x294eb0: 0x16af2  tlt         $zero, $at, 427
    ctx->pc = 0x294eb0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_294eb4:
    // 0x294eb4: 0x23  negu        $zero, $zero
    ctx->pc = 0x294eb4u;
    SET_GPR_S32(ctx, 0, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_294eb8:
    // 0x294eb8: 0x114f0  tge         $zero, $at, 83
    ctx->pc = 0x294eb8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_294ebc:
    // 0x294ebc: 0x0  nop
    ctx->pc = 0x294ebcu;
    // NOP
label_294ec0:
    // 0x294ec0: 0x16b15  .word       0x00016B15                   # INVALID     $zero, $at, 0x6B15 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294ec0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x294EC0 raw=0x00016B15"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294ec4:
    // 0x294ec4: 0xf  sync
    ctx->pc = 0x294ec4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_294ec8:
    // 0x294ec8: 0x72c0  sll         $t6, $zero, 11
    ctx->pc = 0x294ec8u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_294ecc:
    // 0x294ecc: 0x0  nop
    ctx->pc = 0x294eccu;
    // NOP
label_294ed0:
    // 0x294ed0: 0x16b24  .word       0x00016B24                   # and         $t5, $zero, $at # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294ed0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) & GPR_U64(ctx, 1));
label_294ed4:
    // 0x294ed4: 0x11  mthi        $zero
    ctx->pc = 0x294ed4u;
    ctx->hi = GPR_U64(ctx, 0);
label_294ed8:
    // 0x294ed8: 0x83f0  tge         $zero, $zero, 527
    ctx->pc = 0x294ed8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_294edc:
    // 0x294edc: 0x0  nop
    ctx->pc = 0x294edcu;
    // NOP
label_294ee0:
    // 0x294ee0: 0x16b35  .word       0x00016B35                   # INVALID     $zero, $at, 0x6B35 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294ee0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x294EE0 raw=0x00016B35"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294ee4:
    // 0x294ee4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x294ee4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_294ee8:
    // 0x294ee8: 0x1900  sll         $v1, $zero, 4
    ctx->pc = 0x294ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_294eec:
    // 0x294eec: 0x0  nop
    ctx->pc = 0x294eecu;
    // NOP
label_294ef0:
    // 0x294ef0: 0x16b39  .word       0x00016B39                   # INVALID     $zero, $at, 0x6B39 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294ef0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x294EF0 raw=0x00016B39"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294ef4:
    // 0x294ef4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294ef4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x294EF4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294ef8:
    // 0x294ef8: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x294ef8u;
    
label_294efc:
    // 0x294efc: 0x0  nop
    ctx->pc = 0x294efcu;
    // NOP
label_294f00:
    // 0x294f00: 0x16b3a  dsrl        $t5, $at, 12
    ctx->pc = 0x294f00u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 1) >> 12);
label_294f04:
    // 0x294f04: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x294f04u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_294f08:
    // 0x294f08: 0x11d0  .word       0x000011D0                   # mfhi        $v0 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294f08u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_294f0c:
    // 0x294f0c: 0x0  nop
    ctx->pc = 0x294f0cu;
    // NOP
label_294f10:
    // 0x294f10: 0x16b3d  .word       0x00016B3D                   # INVALID     $zero, $at, 0x6B3D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294f10u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x294F10 raw=0x00016B3D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294f14:
    // 0x294f14: 0x181  .word       0x00000181                   # INVALID     $zero, $zero, 0x181 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294f14u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x294F14 raw=0x00000181"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294f18:
    // 0x294f18: 0xc02c0  sll         $zero, $t4, 11
    ctx->pc = 0x294f18u;
    
label_294f1c:
    // 0x294f1c: 0x0  nop
    ctx->pc = 0x294f1cu;
    // NOP
label_294f20:
    // 0x294f20: 0x16cbe  dsrl32      $t5, $at, 18
    ctx->pc = 0x294f20u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 1) >> (32 + 18));
label_294f24:
    // 0x294f24: 0xad  .word       0x000000AD                   # daddu       $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294f24u;
    SET_GPR_U64(ctx, 0, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_294f28:
    // 0x294f28: 0x561c0  sll         $t4, $a1, 7
    ctx->pc = 0x294f28u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 5), 7));
label_294f2c:
    // 0x294f2c: 0x0  nop
    ctx->pc = 0x294f2cu;
    // NOP
label_294f30:
    // 0x294f30: 0x16d6b  .word       0x00016D6B                   # sltu        $t5, $zero, $at # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294f30u;
    SET_GPR_U64(ctx, 13, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
label_294f34:
    // 0x294f34: 0x8d  break       0, 2
    ctx->pc = 0x294f34u;
    runtime->handleBreak(rdram, ctx);
label_294f38:
    // 0x294f38: 0x46774  teq         $zero, $a0, 413
    ctx->pc = 0x294f38u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 4)) { runtime->handleTrap(rdram, ctx); }
label_294f3c:
    // 0x294f3c: 0x0  nop
    ctx->pc = 0x294f3cu;
    // NOP
label_294f40:
    // 0x294f40: 0x16df8  dsll        $t5, $at, 23
    ctx->pc = 0x294f40u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 1) << 23);
label_294f44:
    // 0x294f44: 0x9d  .word       0x0000009D                   # dmultu      $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294f44u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x294F44 raw=0x0000009D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294f48:
    // 0x294f48: 0x4e240  sll         $gp, $a0, 9
    ctx->pc = 0x294f48u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 4), 9));
label_294f4c:
    // 0x294f4c: 0x0  nop
    ctx->pc = 0x294f4cu;
    // NOP
label_294f50:
    // 0x294f50: 0x16e95  .word       0x00016E95                   # INVALID     $zero, $at, 0x6E95 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294f50u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x294F50 raw=0x00016E95"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294f54:
    // 0x294f54: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294f54u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x294F54 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294f58:
    // 0x294f58: 0x60  .word       0x00000060                   # add         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294f58u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_294f5c:
    // 0x294f5c: 0x0  nop
    ctx->pc = 0x294f5cu;
    // NOP
label_294f60:
    // 0x294f60: 0x16e96  .word       0x00016E96                   # dsrlv       $t5, $at, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294f60u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_294f64:
    // 0x294f64: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294f64u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x294F64 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294f68:
    // 0x294f68: 0x4c  syscall     1
    ctx->pc = 0x294f68u;
    ctx->pc = 0x294F6Cu;
runtime->handleSyscall(rdram, ctx, 0x1u);
label_294f6c:
    // 0x294f6c: 0x0  nop
    ctx->pc = 0x294f6cu;
    // NOP
label_294f70:
    // 0x294f70: 0x16e97  .word       0x00016E97                   # dsrav       $t5, $at, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294f70u;
    SET_GPR_S64(ctx, 13, GPR_S64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_294f74:
    // 0x294f74: 0x9d  .word       0x0000009D                   # dmultu      $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294f74u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x294F74 raw=0x0000009D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294f78:
    // 0x294f78: 0x4e180  sll         $gp, $a0, 6
    ctx->pc = 0x294f78u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
label_294f7c:
    // 0x294f7c: 0x0  nop
    ctx->pc = 0x294f7cu;
    // NOP
label_294f80:
    // 0x294f80: 0x16f34  teq         $zero, $at, 444
    ctx->pc = 0x294f80u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_294f84:
    // 0x294f84: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294f84u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x294F84 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294f88:
    // 0x294f88: 0x140  sll         $zero, $zero, 5
    ctx->pc = 0x294f88u;
    
label_294f8c:
    // 0x294f8c: 0x0  nop
    ctx->pc = 0x294f8cu;
    // NOP
label_294f90:
    // 0x294f90: 0x16f35  .word       0x00016F35                   # INVALID     $zero, $at, 0x6F35 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294f90u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x294F90 raw=0x00016F35"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294f94:
    // 0x294f94: 0x21  addu        $zero, $zero, $zero
    ctx->pc = 0x294f94u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_294f98:
    // 0x294f98: 0x10460  .word       0x00010460                   # add         $zero, $zero, $at # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294f98u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_294f9c:
    // 0x294f9c: 0x0  nop
    ctx->pc = 0x294f9cu;
    // NOP
label_294fa0:
    // 0x294fa0: 0x16f56  .word       0x00016F56                   # dsrlv       $t5, $at, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294fa0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_294fa4:
    // 0x294fa4: 0x15  .word       0x00000015                   # INVALID     $zero, $zero, 0x15 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294fa4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x294FA4 raw=0x00000015"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294fa8:
    // 0x294fa8: 0xa680  sll         $s4, $zero, 26
    ctx->pc = 0x294fa8u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
label_294fac:
    // 0x294fac: 0x0  nop
    ctx->pc = 0x294facu;
    // NOP
label_294fb0:
    // 0x294fb0: 0x16f6b  .word       0x00016F6B                   # sltu        $t5, $zero, $at # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294fb0u;
    SET_GPR_U64(ctx, 13, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
label_294fb4:
    // 0x294fb4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294fb4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x294FB4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294fb8:
    // 0x294fb8: 0x7f8  dsll        $zero, $zero, 31
    ctx->pc = 0x294fb8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 31);
label_294fbc:
    // 0x294fbc: 0x0  nop
    ctx->pc = 0x294fbcu;
    // NOP
label_294fc0:
    // 0x294fc0: 0x16f6c  .word       0x00016F6C                   # dadd        $t5, $zero, $at # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294fc0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 13, r); }
label_294fc4:
    // 0x294fc4: 0x12  mflo        $zero
    ctx->pc = 0x294fc4u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_294fc8:
    // 0x294fc8: 0x8fa0  .word       0x00008FA0                   # add         $s1, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294fc8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_294fcc:
    // 0x294fcc: 0x0  nop
    ctx->pc = 0x294fccu;
    // NOP
label_294fd0:
    // 0x294fd0: 0x16f7e  dsrl32      $t5, $at, 29
    ctx->pc = 0x294fd0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 1) >> (32 + 29));
label_294fd4:
    // 0x294fd4: 0x7f  dsra32      $zero, $zero, 1
    ctx->pc = 0x294fd4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 1));
label_294fd8:
    // 0x294fd8: 0x3f538  dsll        $fp, $v1, 20
    ctx->pc = 0x294fd8u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 3) << 20);
label_294fdc:
    // 0x294fdc: 0x0  nop
    ctx->pc = 0x294fdcu;
    // NOP
label_294fe0:
    // 0x294fe0: 0x16ffd  .word       0x00016FFD                   # INVALID     $zero, $at, 0x6FFD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294fe0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x294FE0 raw=0x00016FFD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294fe4:
    // 0x294fe4: 0x50  .word       0x00000050                   # mfhi        $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294fe4u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_294fe8:
    // 0x294fe8: 0x279d0  .word       0x000279D0                   # mfhi        $t7 # 000201C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294fe8u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_294fec:
    // 0x294fec: 0x0  nop
    ctx->pc = 0x294fecu;
    // NOP
label_294ff0:
    // 0x294ff0: 0x1704d  break       1, 449
    ctx->pc = 0x294ff0u;
    runtime->handleBreak(rdram, ctx);
label_294ff4:
    // 0x294ff4: 0xb  movn        $zero, $zero, $zero
    ctx->pc = 0x294ff4u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_294ff8:
    // 0x294ff8: 0x57e0  .word       0x000057E0                   # add         $t2, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294ff8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_294ffc:
    // 0x294ffc: 0x0  nop
    ctx->pc = 0x294ffcu;
    // NOP
label_295000:
    // 0x295000: 0x17058  .word       0x00017058                   # mult        $t6, $zero, $at # 00000040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x295000u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
label_295004:
    // 0x295004: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x295004u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x295004 raw=0x0000001D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_295008:
    // 0x295008: 0xe560  .word       0x0000E560                   # add         $gp, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295008u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 28, (int32_t)result);     } }
label_29500c:
    // 0x29500c: 0x0  nop
    ctx->pc = 0x29500cu;
    // NOP
label_295010:
    // 0x295010: 0x17075  .word       0x00017075                   # INVALID     $zero, $at, 0x7075 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295010u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x295010 raw=0x00017075"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_295014:
    // 0x295014: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x295014u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_295018:
    // 0x295018: 0x1900  sll         $v1, $zero, 4
    ctx->pc = 0x295018u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_29501c:
    // 0x29501c: 0x0  nop
    ctx->pc = 0x29501cu;
    // NOP
label_295020:
    // 0x295020: 0x17079  .word       0x00017079                   # INVALID     $zero, $at, 0x7079 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295020u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x295020 raw=0x00017079"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_295024:
    // 0x295024: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295024u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x295024 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_295028:
    // 0x295028: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x295028u;
    
label_29502c:
    // 0x29502c: 0x0  nop
    ctx->pc = 0x29502cu;
    // NOP
label_295030:
    // 0x295030: 0x1707a  dsrl        $t6, $at, 1
    ctx->pc = 0x295030u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 1) >> 1);
label_295034:
    // 0x295034: 0x9  jalr        $zero, $zero
label_295038:
    if (ctx->pc == 0x295038u) {
        ctx->pc = 0x295038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295034u;
        // 0x295038: 0x46a0  .word       0x000046A0                   # add         $t0, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x29503Cu;
        goto label_29503c;
    }
    ctx->pc = 0x295034u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x295038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295034u;
        // 0x295038: 0x46a0  .word       0x000046A0                   # add         $t0, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x295034u, 0x29503Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29503Cu;
label_29503c:
    // 0x29503c: 0x0  nop
    ctx->pc = 0x29503cu;
    // NOP
label_295040:
    // 0x295040: 0x17083  sra         $t6, $at, 2
    ctx->pc = 0x295040u;
    SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 1), 2));
label_295044:
    // 0x295044: 0x79  .word       0x00000079                   # INVALID     $zero, $zero, 0x79 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295044u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x295044 raw=0x00000079"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_295048:
    // 0x295048: 0x3c7e8  .word       0x0003C7E8                   # mfsa        $t8 # 000307C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x295048u;
    SET_GPR_U32(ctx, 24, ctx->sa);
label_29504c:
    // 0x29504c: 0x0  nop
    ctx->pc = 0x29504cu;
    // NOP
label_295050:
    // 0x295050: 0x170fc  dsll32      $t6, $at, 3
    ctx->pc = 0x295050u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 1) << (32 + 3));
label_295054:
    // 0x295054: 0x4c  syscall     1
    ctx->pc = 0x295054u;
    ctx->pc = 0x295058u;
runtime->handleSyscall(rdram, ctx, 0x1u);
label_295058:
    // 0x295058: 0x25f90  .word       0x00025F90                   # mfhi        $t3 # 00020780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295058u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_29505c:
    // 0x29505c: 0x0  nop
    ctx->pc = 0x29505cu;
    // NOP
label_295060:
    // 0x295060: 0x17148  .word       0x00017148                   # jr          $zero # 00017140 <InstrIdType: CPU_SPECIAL>
label_295064:
    if (ctx->pc == 0x295064u) {
        ctx->pc = 0x295064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295060u;
        // 0x295064: 0x3  sra         $zero, $zero, 0 (Delay Slot)
        SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x295068u;
        goto label_295068;
    }
    ctx->pc = 0x295060u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x295064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295060u;
        // 0x295064: 0x3  sra         $zero, $zero, 0 (Delay Slot)
        SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x295060u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x295068u;
label_295068:
    // 0x295068: 0x1310  .word       0x00001310                   # mfhi        $v0 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295068u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_29506c:
    // 0x29506c: 0x0  nop
    ctx->pc = 0x29506cu;
    // NOP
label_295070:
    // 0x295070: 0x1714b  .word       0x0001714B                   # movn        $t6, $zero, $at # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295070u;
    if (GPR_U64(ctx, 1) != 0) SET_GPR_VEC(ctx, 14, GPR_VEC(ctx, 0));
label_295074:
    // 0x295074: 0xc2  srl         $zero, $zero, 3
    ctx->pc = 0x295074u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 3));
label_295078:
    // 0x295078: 0x60c10  .word       0x00060C10                   # mfhi        $at # 00060400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295078u;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_29507c:
    // 0x29507c: 0x0  nop
    ctx->pc = 0x29507cu;
    // NOP
label_295080:
    // 0x295080: 0x1720d  break       1, 456
    ctx->pc = 0x295080u;
    runtime->handleBreak(rdram, ctx);
label_295084:
    // 0x295084: 0x1b5  .word       0x000001B5                   # INVALID     $zero, $zero, 0x1B5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295084u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x295084 raw=0x000001B5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_295088:
    // 0x295088: 0xda250  .word       0x000DA250                   # mfhi        $s4 # 000D0240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295088u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_29508c:
    // 0x29508c: 0x0  nop
    ctx->pc = 0x29508cu;
    // NOP
label_295090:
    // 0x295090: 0x173c2  srl         $t6, $at, 15
    ctx->pc = 0x295090u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 1), 15));
label_295094:
    // 0x295094: 0x60  .word       0x00000060                   # add         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295094u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_295098:
    // 0x295098: 0x2ff84  .word       0x0002FF84                   # sllv        $ra, $v0, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295098u;
    SET_GPR_S32(ctx, 31, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 0) & 0x1F));
label_29509c:
    // 0x29509c: 0x0  nop
    ctx->pc = 0x29509cu;
    // NOP
label_2950a0:
    // 0x2950a0: 0x17422  .word       0x00017422                   # neg         $t6, $at # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2950a0u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 1), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 14, (int32_t)tmp); }
label_2950a4:
    // 0x2950a4: 0x16a  .word       0x0000016A                   # slt         $zero, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2950a4u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_2950a8:
    // 0x2950a8: 0xb4f3c  dsll32      $t1, $t3, 28
    ctx->pc = 0x2950a8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 11) << (32 + 28));
label_2950ac:
    // 0x2950ac: 0x0  nop
    ctx->pc = 0x2950acu;
    // NOP
label_2950b0:
    // 0x2950b0: 0x1758c  .word       0x0001758C                   # syscall     470 # 00010000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2950b0u;
    ctx->pc = 0x2950B4u;
runtime->handleSyscall(rdram, ctx, 0x5D6u);
label_2950b4:
    // 0x2950b4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2950b4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2950B4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2950b8:
    // 0x2950b8: 0x60  .word       0x00000060                   # add         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2950b8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_2950bc:
    // 0x2950bc: 0x0  nop
    ctx->pc = 0x2950bcu;
    // NOP
label_2950c0:
    // 0x2950c0: 0x1758d  break       1, 470
    ctx->pc = 0x2950c0u;
    runtime->handleBreak(rdram, ctx);
label_2950c4:
    // 0x2950c4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2950c4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2950C4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2950c8:
    // 0x2950c8: 0x4c  syscall     1
    ctx->pc = 0x2950c8u;
    ctx->pc = 0x2950CCu;
runtime->handleSyscall(rdram, ctx, 0x1u);
label_2950cc:
    // 0x2950cc: 0x0  nop
    ctx->pc = 0x2950ccu;
    // NOP
label_2950d0:
    // 0x2950d0: 0x1758e  .word       0x0001758E                   # INVALID     $zero, $at, 0x758E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2950d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x2950D0 raw=0x0001758E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2950d4:
    // 0x2950d4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2950d4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2950D4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2950d8:
    // 0x2950d8: 0x140  sll         $zero, $zero, 5
    ctx->pc = 0x2950d8u;
    
label_2950dc:
    // 0x2950dc: 0x0  nop
    ctx->pc = 0x2950dcu;
    // NOP
label_2950e0:
    // 0x2950e0: 0x1758f  .word       0x0001758F                   # sync.p # 00017000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2950e0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_2950e4:
    // 0x2950e4: 0x21  addu        $zero, $zero, $zero
    ctx->pc = 0x2950e4u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2950e8:
    // 0x2950e8: 0x10460  .word       0x00010460                   # add         $zero, $zero, $at # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2950e8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_2950ec:
    // 0x2950ec: 0x0  nop
    ctx->pc = 0x2950ecu;
    // NOP
label_2950f0:
    // 0x2950f0: 0x175b0  tge         $zero, $at, 470
    ctx->pc = 0x2950f0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_2950f4:
    // 0x2950f4: 0x18  mult        $zero, $zero, $zero
    ctx->pc = 0x2950f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_2950f8:
    // 0x2950f8: 0xb8a0  .word       0x0000B8A0                   # add         $s7, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2950f8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_2950fc:
    // 0x2950fc: 0x0  nop
    ctx->pc = 0x2950fcu;
    // NOP
label_295100:
    // 0x295100: 0x175c8  .word       0x000175C8                   # jr          $zero # 000175C0 <InstrIdType: CPU_SPECIAL>
label_295104:
    if (ctx->pc == 0x295104u) {
        ctx->pc = 0x295104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295100u;
        // 0x295104: 0x2  srl         $zero, $zero, 0 (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x295108u;
        goto label_295108;
    }
    ctx->pc = 0x295100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x295104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295100u;
        // 0x295104: 0x2  srl         $zero, $zero, 0 (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x295100u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x295108u;
label_295108:
    // 0x295108: 0x950  .word       0x00000950                   # mfhi        $at # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295108u;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_29510c:
    // 0x29510c: 0x0  nop
    ctx->pc = 0x29510cu;
    // NOP
label_295110:
    // 0x295110: 0x175ca  .word       0x000175CA                   # movz        $t6, $zero, $at # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295110u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 14, GPR_VEC(ctx, 0));
label_295114:
    // 0x295114: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x295114u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_295118:
    // 0x295118: 0x1920  .word       0x00001920                   # add         $v1, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295118u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29511c:
    // 0x29511c: 0x0  nop
    ctx->pc = 0x29511cu;
    // NOP
label_295120:
    // 0x295120: 0x175ce  .word       0x000175CE                   # INVALID     $zero, $at, 0x75CE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295120u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x295120 raw=0x000175CE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_295124:
    // 0x295124: 0xb1  tgeu        $zero, $zero, 2
    ctx->pc = 0x295124u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_295128:
    // 0x295128: 0x5840c  .word       0x0005840C                   # syscall     528 # 00050000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295128u;
    ctx->pc = 0x29512Cu;
runtime->handleSyscall(rdram, ctx, 0x1610u);
label_29512c:
    // 0x29512c: 0x0  nop
    ctx->pc = 0x29512cu;
    // NOP
label_295130:
    // 0x295130: 0x1767f  dsra32      $t6, $at, 25
    ctx->pc = 0x295130u;
    SET_GPR_S64(ctx, 14, GPR_S64(ctx, 1) >> (32 + 25));
label_295134:
    // 0x295134: 0x2b  sltu        $zero, $zero, $zero
    ctx->pc = 0x295134u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_295138:
    // 0x295138: 0x15730  tge         $zero, $at, 348
    ctx->pc = 0x295138u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_29513c:
    // 0x29513c: 0x0  nop
    ctx->pc = 0x29513cu;
    // NOP
label_295140:
    // 0x295140: 0x176aa  .word       0x000176AA                   # slt         $t6, $zero, $at # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295140u;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_295144:
    // 0x295144: 0x2d  daddu       $zero, $zero, $zero
    ctx->pc = 0x295144u;
    SET_GPR_U64(ctx, 0, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_295148:
    // 0x295148: 0x16540  sll         $t4, $at, 21
    ctx->pc = 0x295148u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 1), 21));
label_29514c:
    // 0x29514c: 0x0  nop
    ctx->pc = 0x29514cu;
    // NOP
label_295150:
    // 0x295150: 0x176d7  .word       0x000176D7                   # dsrav       $t6, $at, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295150u;
    SET_GPR_S64(ctx, 14, GPR_S64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_295154:
    // 0x295154: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x295154u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_295158:
    // 0x295158: 0x1900  sll         $v1, $zero, 4
    ctx->pc = 0x295158u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_29515c:
    // 0x29515c: 0x0  nop
    ctx->pc = 0x29515cu;
    // NOP
label_295160:
    // 0x295160: 0x176db  .word       0x000176DB                   # divu        $t6, $zero, $at # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295160u;
    { uint32_t divisor = GPR_U32(ctx, 1); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_295164:
    // 0x295164: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295164u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x295164 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_295168:
    // 0x295168: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x295168u;
    
label_29516c:
    // 0x29516c: 0x0  nop
    ctx->pc = 0x29516cu;
    // NOP
label_295170:
    // 0x295170: 0x176dc  .word       0x000176DC                   # dmult       $zero, $at # 000076C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295170u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x295170 raw=0x000176DC"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_295174:
    // 0x295174: 0x34  teq         $zero, $zero, 0
    ctx->pc = 0x295174u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_295178:
    // 0x295178: 0x19f30  tge         $zero, $at, 636
    ctx->pc = 0x295178u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_29517c:
    // 0x29517c: 0x0  nop
    ctx->pc = 0x29517cu;
    // NOP
label_295180:
    // 0x295180: 0x17710  .word       0x00017710                   # mfhi        $t6 # 00010700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295180u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_295184:
    // 0x295184: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x295184u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_295188:
    // 0x295188: 0x940  sll         $at, $zero, 5
    ctx->pc = 0x295188u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 5));
label_29518c:
    // 0x29518c: 0x0  nop
    ctx->pc = 0x29518cu;
    // NOP
label_295190:
    // 0x295190: 0x17712  .word       0x00017712                   # mflo        $t6 # 00010700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295190u;
    SET_GPR_U64(ctx, 14, ctx->lo);
label_295194:
    // 0x295194: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295194u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x295194 raw=0x00000005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_295198:
    // 0x295198: 0x2060  .word       0x00002060                   # add         $a0, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295198u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
label_29519c:
    // 0x29519c: 0x0  nop
    ctx->pc = 0x29519cu;
    // NOP
label_2951a0:
    // 0x2951a0: 0x17717  .word       0x00017717                   # dsrav       $t6, $at, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2951a0u;
    SET_GPR_S64(ctx, 14, GPR_S64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_2951a4:
    // 0x2951a4: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x2951a4u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_2951a8:
    // 0x2951a8: 0x12d0  .word       0x000012D0                   # mfhi        $v0 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2951a8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_2951ac:
    // 0x2951ac: 0x0  nop
    ctx->pc = 0x2951acu;
    // NOP
label_2951b0:
    // 0x2951b0: 0x1771a  .word       0x0001771A                   # div         $t6, $zero, $at # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2951b0u;
    { int32_t divisor = GPR_S32(ctx, 1);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_2951b4:
    // 0x2951b4: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2951b4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2951B4 raw=0x00000005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2951b8:
    // 0x2951b8: 0x2560  .word       0x00002560                   # add         $a0, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2951b8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
label_2951bc:
    // 0x2951bc: 0x0  nop
    ctx->pc = 0x2951bcu;
    // NOP
label_2951c0:
    // 0x2951c0: 0x1771f  .word       0x0001771F                   # ddivu       $t6, $zero, $at # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2951c0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2951C0 raw=0x0001771F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2951c4:
    // 0x2951c4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2951c4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2951C4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2951c8:
    // 0x2951c8: 0x330  tge         $zero, $zero, 12
    ctx->pc = 0x2951c8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2951cc:
    // 0x2951cc: 0x0  nop
    ctx->pc = 0x2951ccu;
    // NOP
label_2951d0:
    // 0x2951d0: 0x17720  .word       0x00017720                   # add         $t6, $zero, $at # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2951d0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_2951d4:
    // 0x2951d4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2951d4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2951D4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2951d8:
    // 0x2951d8: 0x120  .word       0x00000120                   # add         $zero, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2951d8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_2951dc:
    // 0x2951dc: 0x0  nop
    ctx->pc = 0x2951dcu;
    // NOP
label_2951e0:
    // 0x2951e0: 0x17721  .word       0x00017721                   # addu        $t6, $zero, $at # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2951e0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_2951e4:
    // 0x2951e4: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x2951e4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_2951e8:
    // 0x2951e8: 0xb70  tge         $zero, $zero, 45
    ctx->pc = 0x2951e8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2951ec:
    // 0x2951ec: 0x0  nop
    ctx->pc = 0x2951ecu;
    // NOP
label_2951f0:
    // 0x2951f0: 0x17723  .word       0x00017723                   # negu        $t6, $at # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2951f0u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_2951f4:
    // 0x2951f4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2951f4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2951F4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2951f8:
    // 0x2951f8: 0x3f0  tge         $zero, $zero, 15
    ctx->pc = 0x2951f8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2951fc:
    // 0x2951fc: 0x0  nop
    ctx->pc = 0x2951fcu;
    // NOP
label_295200:
    // 0x295200: 0x17724  .word       0x00017724                   # and         $t6, $zero, $at # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295200u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) & GPR_U64(ctx, 1));
label_295204:
    // 0x295204: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295204u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x295204 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_295208:
    // 0x295208: 0x440  sll         $zero, $zero, 17
    ctx->pc = 0x295208u;
    
label_29520c:
    // 0x29520c: 0x0  nop
    ctx->pc = 0x29520cu;
    // NOP
label_295210:
    // 0x295210: 0x17725  .word       0x00017725                   # or          $t6, $zero, $at # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295210u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | GPR_U64(ctx, 1));
label_295214:
    // 0x295214: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295214u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x295214 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_295218:
    // 0x295218: 0x440  sll         $zero, $zero, 17
    ctx->pc = 0x295218u;
    
label_29521c:
    // 0x29521c: 0x0  nop
    ctx->pc = 0x29521cu;
    // NOP
label_295220:
    // 0x295220: 0x17726  .word       0x00017726                   # xor         $t6, $zero, $at # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295220u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 1));
label_295224:
    // 0x295224: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295224u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x295224 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_295228:
    // 0x295228: 0x440  sll         $zero, $zero, 17
    ctx->pc = 0x295228u;
    
label_29522c:
    // 0x29522c: 0x0  nop
    ctx->pc = 0x29522cu;
    // NOP
label_295230:
    // 0x295230: 0x17727  .word       0x00017727                   # nor         $t6, $zero, $at # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295230u;
    SET_GPR_U64(ctx, 14, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 1)));
label_295234:
    // 0x295234: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295234u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x295234 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_295238:
    // 0x295238: 0x440  sll         $zero, $zero, 17
    ctx->pc = 0x295238u;
    
label_29523c:
    // 0x29523c: 0x0  nop
    ctx->pc = 0x29523cu;
    // NOP
label_295240:
    // 0x295240: 0x17728  .word       0x00017728                   # mfsa        $t6 # 00010700 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x295240u;
    SET_GPR_U32(ctx, 14, ctx->sa);
label_295244:
    // 0x295244: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295244u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x295244 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_295248:
    // 0x295248: 0x440  sll         $zero, $zero, 17
    ctx->pc = 0x295248u;
    
label_29524c:
    // 0x29524c: 0x0  nop
    ctx->pc = 0x29524cu;
    // NOP
label_295250:
    // 0x295250: 0x17729  .word       0x00017729                   # mtsa        $zero # 00017700 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x295250u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_295254:
    // 0x295254: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295254u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x295254 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_295258:
    // 0x295258: 0x440  sll         $zero, $zero, 17
    ctx->pc = 0x295258u;
    
label_29525c:
    // 0x29525c: 0x0  nop
    ctx->pc = 0x29525cu;
    // NOP
label_295260:
    // 0x295260: 0x1772a  .word       0x0001772A                   # slt         $t6, $zero, $at # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295260u;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_295264:
    // 0x295264: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295264u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x295264 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_295268:
    // 0x295268: 0x440  sll         $zero, $zero, 17
    ctx->pc = 0x295268u;
    
label_29526c:
    // 0x29526c: 0x0  nop
    ctx->pc = 0x29526cu;
    // NOP
label_295270:
    // 0x295270: 0x1772b  .word       0x0001772B                   # sltu        $t6, $zero, $at # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295270u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
label_295274:
    // 0x295274: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295274u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x295274 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_295278:
    // 0x295278: 0x440  sll         $zero, $zero, 17
    ctx->pc = 0x295278u;
    
label_29527c:
    // 0x29527c: 0x0  nop
    ctx->pc = 0x29527cu;
    // NOP
label_295280:
    // 0x295280: 0x1772c  .word       0x0001772C                   # dadd        $t6, $zero, $at # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295280u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, r); }
label_295284:
    // 0x295284: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295284u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x295284 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_295288:
    // 0x295288: 0x440  sll         $zero, $zero, 17
    ctx->pc = 0x295288u;
    
label_29528c:
    // 0x29528c: 0x0  nop
    ctx->pc = 0x29528cu;
    // NOP
label_295290:
    // 0x295290: 0x1772d  .word       0x0001772D                   # daddu       $t6, $zero, $at # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295290u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 1));
label_295294:
    // 0x295294: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295294u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x295294 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_295298:
    // 0x295298: 0x440  sll         $zero, $zero, 17
    ctx->pc = 0x295298u;
    
label_29529c:
    // 0x29529c: 0x0  nop
    ctx->pc = 0x29529cu;
    // NOP
label_2952a0:
    // 0x2952a0: 0x1772e  .word       0x0001772E                   # dsub        $t6, $zero, $at # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2952a0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, r); }
label_2952a4:
    // 0x2952a4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2952a4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2952A4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2952a8:
    // 0x2952a8: 0x440  sll         $zero, $zero, 17
    ctx->pc = 0x2952a8u;
    
label_2952ac:
    // 0x2952ac: 0x0  nop
    ctx->pc = 0x2952acu;
    // NOP
label_2952b0:
    // 0x2952b0: 0x1772f  .word       0x0001772F                   # dsubu       $t6, $zero, $at # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2952b0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) - GPR_U64(ctx, 1));
label_2952b4:
    // 0x2952b4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2952b4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2952B4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2952b8:
    // 0x2952b8: 0x440  sll         $zero, $zero, 17
    ctx->pc = 0x2952b8u;
    
label_2952bc:
    // 0x2952bc: 0x0  nop
    ctx->pc = 0x2952bcu;
    // NOP
label_2952c0:
    // 0x2952c0: 0x17730  tge         $zero, $at, 476
    ctx->pc = 0x2952c0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_2952c4:
    // 0x2952c4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2952c4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2952C4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2952c8:
    // 0x2952c8: 0x440  sll         $zero, $zero, 17
    ctx->pc = 0x2952c8u;
    
label_2952cc:
    // 0x2952cc: 0x0  nop
    ctx->pc = 0x2952ccu;
    // NOP
label_2952d0:
    // 0x2952d0: 0x17731  tgeu        $zero, $at, 476
    ctx->pc = 0x2952d0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_2952d4:
    // 0x2952d4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2952d4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2952D4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2952d8:
    // 0x2952d8: 0x440  sll         $zero, $zero, 17
    ctx->pc = 0x2952d8u;
    
label_2952dc:
    // 0x2952dc: 0x0  nop
    ctx->pc = 0x2952dcu;
    // NOP
label_2952e0:
    // 0x2952e0: 0x17732  tlt         $zero, $at, 476
    ctx->pc = 0x2952e0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_2952e4:
    // 0x2952e4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2952e4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2952E4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2952e8:
    // 0x2952e8: 0x440  sll         $zero, $zero, 17
    ctx->pc = 0x2952e8u;
    
label_2952ec:
    // 0x2952ec: 0x0  nop
    ctx->pc = 0x2952ecu;
    // NOP
label_2952f0:
    // 0x2952f0: 0x17733  tltu        $zero, $at, 476
    ctx->pc = 0x2952f0u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_2952f4:
    // 0x2952f4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2952f4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2952F4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2952f8:
    // 0x2952f8: 0x440  sll         $zero, $zero, 17
    ctx->pc = 0x2952f8u;
    
label_2952fc:
    // 0x2952fc: 0x0  nop
    ctx->pc = 0x2952fcu;
    // NOP
label_295300:
    // 0x295300: 0x17734  teq         $zero, $at, 476
    ctx->pc = 0x295300u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_295304:
    // 0x295304: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295304u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x295304 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_295308:
    // 0x295308: 0x440  sll         $zero, $zero, 17
    ctx->pc = 0x295308u;
    
label_29530c:
    // 0x29530c: 0x0  nop
    ctx->pc = 0x29530cu;
    // NOP
label_295310:
    // 0x295310: 0x17735  .word       0x00017735                   # INVALID     $zero, $at, 0x7735 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295310u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x295310 raw=0x00017735"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_295314:
    // 0x295314: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295314u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x295314 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_295318:
    // 0x295318: 0x440  sll         $zero, $zero, 17
    ctx->pc = 0x295318u;
    
label_29531c:
    // 0x29531c: 0x0  nop
    ctx->pc = 0x29531cu;
    // NOP
label_295320:
    // 0x295320: 0x17736  tne         $zero, $at, 476
    ctx->pc = 0x295320u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_295324:
    // 0x295324: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295324u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x295324 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_295328:
    // 0x295328: 0x440  sll         $zero, $zero, 17
    ctx->pc = 0x295328u;
    
label_29532c:
    // 0x29532c: 0x0  nop
    ctx->pc = 0x29532cu;
    // NOP
label_295330:
    // 0x295330: 0x17737  .word       0x00017737                   # INVALID     $zero, $at, 0x7737 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295330u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x295330 raw=0x00017737"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_295334:
    // 0x295334: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295334u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x295334 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_295338:
    // 0x295338: 0x440  sll         $zero, $zero, 17
    ctx->pc = 0x295338u;
    
label_29533c:
    // 0x29533c: 0x0  nop
    ctx->pc = 0x29533cu;
    // NOP
label_295340:
    // 0x295340: 0x17738  dsll        $t6, $at, 28
    ctx->pc = 0x295340u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 1) << 28);
label_295344:
    // 0x295344: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295344u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x295344 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_295348:
    // 0x295348: 0x440  sll         $zero, $zero, 17
    ctx->pc = 0x295348u;
    
label_29534c:
    // 0x29534c: 0x0  nop
    ctx->pc = 0x29534cu;
    // NOP
label_295350:
    // 0x295350: 0x17739  .word       0x00017739                   # INVALID     $zero, $at, 0x7739 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295350u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x295350 raw=0x00017739"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_295354:
    // 0x295354: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295354u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x295354 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_295358:
    // 0x295358: 0x440  sll         $zero, $zero, 17
    ctx->pc = 0x295358u;
    
label_29535c:
    // 0x29535c: 0x0  nop
    ctx->pc = 0x29535cu;
    // NOP
label_295360:
    // 0x295360: 0x1773a  dsrl        $t6, $at, 28
    ctx->pc = 0x295360u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 1) >> 28);
label_295364:
    // 0x295364: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295364u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x295364 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_295368:
    // 0x295368: 0x440  sll         $zero, $zero, 17
    ctx->pc = 0x295368u;
    
label_29536c:
    // 0x29536c: 0x0  nop
    ctx->pc = 0x29536cu;
    // NOP
label_295370:
    // 0x295370: 0x1773b  dsra        $t6, $at, 28
    ctx->pc = 0x295370u;
    SET_GPR_S64(ctx, 14, GPR_S64(ctx, 1) >> 28);
label_295374:
    // 0x295374: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295374u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x295374 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_295378:
    // 0x295378: 0x440  sll         $zero, $zero, 17
    ctx->pc = 0x295378u;
    
label_29537c:
    // 0x29537c: 0x0  nop
    ctx->pc = 0x29537cu;
    // NOP
label_295380:
    // 0x295380: 0x1773c  dsll32      $t6, $at, 28
    ctx->pc = 0x295380u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 1) << (32 + 28));
label_295384:
    // 0x295384: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295384u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x295384 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_295388:
    // 0x295388: 0x440  sll         $zero, $zero, 17
    ctx->pc = 0x295388u;
    
label_29538c:
    // 0x29538c: 0x0  nop
    ctx->pc = 0x29538cu;
    // NOP
label_295390:
    // 0x295390: 0x1773d  .word       0x0001773D                   # INVALID     $zero, $at, 0x773D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295390u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x295390 raw=0x0001773D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_295394:
    // 0x295394: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295394u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x295394 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_295398:
    // 0x295398: 0x440  sll         $zero, $zero, 17
    ctx->pc = 0x295398u;
    
label_29539c:
    // 0x29539c: 0x0  nop
    ctx->pc = 0x29539cu;
    // NOP
label_2953a0:
    // 0x2953a0: 0x1773e  dsrl32      $t6, $at, 28
    ctx->pc = 0x2953a0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 1) >> (32 + 28));
label_2953a4:
    // 0x2953a4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2953a4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2953A4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2953a8:
    // 0x2953a8: 0x440  sll         $zero, $zero, 17
    ctx->pc = 0x2953a8u;
    
label_2953ac:
    // 0x2953ac: 0x0  nop
    ctx->pc = 0x2953acu;
    // NOP
label_2953b0:
    // 0x2953b0: 0x1773f  dsra32      $t6, $at, 28
    ctx->pc = 0x2953b0u;
    SET_GPR_S64(ctx, 14, GPR_S64(ctx, 1) >> (32 + 28));
label_2953b4:
    // 0x2953b4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2953b4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2953B4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2953b8:
    // 0x2953b8: 0x440  sll         $zero, $zero, 17
    ctx->pc = 0x2953b8u;
    
label_2953bc:
    // 0x2953bc: 0x0  nop
    ctx->pc = 0x2953bcu;
    // NOP
label_2953c0:
    // 0x2953c0: 0x17740  sll         $t6, $at, 29
    ctx->pc = 0x2953c0u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 1), 29));
label_2953c4:
    // 0x2953c4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2953c4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2953C4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2953c8:
    // 0x2953c8: 0x440  sll         $zero, $zero, 17
    ctx->pc = 0x2953c8u;
    
label_2953cc:
    // 0x2953cc: 0x0  nop
    ctx->pc = 0x2953ccu;
    // NOP
label_2953d0:
    // 0x2953d0: 0x17741  .word       0x00017741                   # INVALID     $zero, $at, 0x7741 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2953d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2953D0 raw=0x00017741"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2953d4:
    // 0x2953d4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2953d4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2953D4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2953d8:
    // 0x2953d8: 0x440  sll         $zero, $zero, 17
    ctx->pc = 0x2953d8u;
    
label_2953dc:
    // 0x2953dc: 0x0  nop
    ctx->pc = 0x2953dcu;
    // NOP
label_2953e0:
    // 0x2953e0: 0x17742  srl         $t6, $at, 29
    ctx->pc = 0x2953e0u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 1), 29));
label_2953e4:
    // 0x2953e4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2953e4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2953E4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2953e8:
    // 0x2953e8: 0x440  sll         $zero, $zero, 17
    ctx->pc = 0x2953e8u;
    
label_2953ec:
    // 0x2953ec: 0x0  nop
    ctx->pc = 0x2953ecu;
    // NOP
label_2953f0:
    // 0x2953f0: 0x17743  sra         $t6, $at, 29
    ctx->pc = 0x2953f0u;
    SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 1), 29));
label_2953f4:
    // 0x2953f4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2953f4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2953F4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2953f8:
    // 0x2953f8: 0x440  sll         $zero, $zero, 17
    ctx->pc = 0x2953f8u;
    
label_2953fc:
    // 0x2953fc: 0x0  nop
    ctx->pc = 0x2953fcu;
    // NOP
label_295400:
    // 0x295400: 0x17744  .word       0x00017744                   # sllv        $t6, $at, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295400u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_295404:
    // 0x295404: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295404u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x295404 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_295408:
    // 0x295408: 0x440  sll         $zero, $zero, 17
    ctx->pc = 0x295408u;
    
label_29540c:
    // 0x29540c: 0x0  nop
    ctx->pc = 0x29540cu;
    // NOP
label_295410:
    // 0x295410: 0x17745  .word       0x00017745                   # INVALID     $zero, $at, 0x7745 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295410u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x295410 raw=0x00017745"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_295414:
    // 0x295414: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295414u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x295414 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_295418:
    // 0x295418: 0x440  sll         $zero, $zero, 17
    ctx->pc = 0x295418u;
    
label_29541c:
    // 0x29541c: 0x0  nop
    ctx->pc = 0x29541cu;
    // NOP
label_295420:
    // 0x295420: 0x17746  .word       0x00017746                   # srlv        $t6, $at, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295420u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_295424:
    // 0x295424: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295424u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x295424 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_295428:
    // 0x295428: 0x440  sll         $zero, $zero, 17
    ctx->pc = 0x295428u;
    
label_29542c:
    // 0x29542c: 0x0  nop
    ctx->pc = 0x29542cu;
    // NOP
label_295430:
    // 0x295430: 0x17747  .word       0x00017747                   # srav        $t6, $at, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295430u;
    SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_295434:
    // 0x295434: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295434u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x295434 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_295438:
    // 0x295438: 0x440  sll         $zero, $zero, 17
    ctx->pc = 0x295438u;
    
label_29543c:
    // 0x29543c: 0x0  nop
    ctx->pc = 0x29543cu;
    // NOP
label_295440:
    // 0x295440: 0x17748  .word       0x00017748                   # jr          $zero # 00017740 <InstrIdType: CPU_SPECIAL>
label_295444:
    if (ctx->pc == 0x295444u) {
        ctx->pc = 0x295444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295440u;
        // 0x295444: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x295444 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x295448u;
        goto label_295448;
    }
    ctx->pc = 0x295440u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x295444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295440u;
        // 0x295444: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x295444 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x295440u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x295448u;
label_295448:
    // 0x295448: 0x440  sll         $zero, $zero, 17
    ctx->pc = 0x295448u;
    
label_29544c:
    // 0x29544c: 0x0  nop
    ctx->pc = 0x29544cu;
    // NOP
label_295450:
    // 0x295450: 0x17749  .word       0x00017749                   # jalr        $t6, $zero # 00010740 <InstrIdType: CPU_SPECIAL>
label_295454:
    if (ctx->pc == 0x295454u) {
        ctx->pc = 0x295454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295450u;
        // 0x295454: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x295454 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x295458u;
        goto label_295458;
    }
    ctx->pc = 0x295450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 14, 0x295458u);
        ctx->pc = 0x295454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295450u;
        // 0x295454: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x295454 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x295450u, 0x295458u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x295458u;
label_295458:
    // 0x295458: 0x440  sll         $zero, $zero, 17
    ctx->pc = 0x295458u;
    
label_29545c:
    // 0x29545c: 0x0  nop
    ctx->pc = 0x29545cu;
    // NOP
label_295460:
    // 0x295460: 0x1774a  .word       0x0001774A                   # movz        $t6, $zero, $at # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295460u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 14, GPR_VEC(ctx, 0));
label_295464:
    // 0x295464: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295464u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x295464 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_295468:
    // 0x295468: 0x440  sll         $zero, $zero, 17
    ctx->pc = 0x295468u;
    
label_29546c:
    // 0x29546c: 0x0  nop
    ctx->pc = 0x29546cu;
    // NOP
label_295470:
    // 0x295470: 0x1774b  .word       0x0001774B                   # movn        $t6, $zero, $at # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295470u;
    if (GPR_U64(ctx, 1) != 0) SET_GPR_VEC(ctx, 14, GPR_VEC(ctx, 0));
label_295474:
    // 0x295474: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295474u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x295474 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_295478:
    // 0x295478: 0x440  sll         $zero, $zero, 17
    ctx->pc = 0x295478u;
    
label_29547c:
    // 0x29547c: 0x0  nop
    ctx->pc = 0x29547cu;
    // NOP
label_295480:
    // 0x295480: 0x1774c  .word       0x0001774C                   # syscall     477 # 00010000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295480u;
    ctx->pc = 0x295484u;
runtime->handleSyscall(rdram, ctx, 0x5DDu);
label_295484:
    // 0x295484: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295484u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x295484 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_295488:
    // 0x295488: 0x440  sll         $zero, $zero, 17
    ctx->pc = 0x295488u;
    
label_29548c:
    // 0x29548c: 0x0  nop
    ctx->pc = 0x29548cu;
    // NOP
label_295490:
    // 0x295490: 0x1774d  break       1, 477
    ctx->pc = 0x295490u;
    runtime->handleBreak(rdram, ctx);
label_295494:
    // 0x295494: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295494u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x295494 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_295498:
    // 0x295498: 0x570  tge         $zero, $zero, 21
    ctx->pc = 0x295498u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29549c:
    // 0x29549c: 0x0  nop
    ctx->pc = 0x29549cu;
    // NOP
label_2954a0:
    // 0x2954a0: 0x1774e  .word       0x0001774E                   # INVALID     $zero, $at, 0x774E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2954a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x2954A0 raw=0x0001774E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2954a4:
    // 0x2954a4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2954a4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2954A4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2954a8:
    // 0x2954a8: 0x380  sll         $zero, $zero, 14
    ctx->pc = 0x2954a8u;
    
label_2954ac:
    // 0x2954ac: 0x0  nop
    ctx->pc = 0x2954acu;
    // NOP
label_2954b0:
    // 0x2954b0: 0x1774f  .word       0x0001774F                   # sync.p # 00017000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2954b0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_2954b4:
    // 0x2954b4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2954b4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2954B4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2954b8:
    // 0x2954b8: 0x450  .word       0x00000450                   # mfhi        $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2954b8u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_2954bc:
    // 0x2954bc: 0x0  nop
    ctx->pc = 0x2954bcu;
    // NOP
label_2954c0:
    // 0x2954c0: 0x17750  .word       0x00017750                   # mfhi        $t6 # 00010740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2954c0u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_2954c4:
    // 0x2954c4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2954c4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2954C4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2954c8:
    // 0x2954c8: 0x240  sll         $zero, $zero, 9
    ctx->pc = 0x2954c8u;
    
label_2954cc:
    // 0x2954cc: 0x0  nop
    ctx->pc = 0x2954ccu;
    // NOP
label_2954d0:
    // 0x2954d0: 0x17751  .word       0x00017751                   # mthi        $zero # 00017740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2954d0u;
    ctx->hi = GPR_U64(ctx, 0);
label_2954d4:
    // 0x2954d4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2954d4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2954D4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2954d8:
    // 0x2954d8: 0x500  sll         $zero, $zero, 20
    ctx->pc = 0x2954d8u;
    
label_2954dc:
    // 0x2954dc: 0x0  nop
    ctx->pc = 0x2954dcu;
    // NOP
label_2954e0:
    // 0x2954e0: 0x17752  .word       0x00017752                   # mflo        $t6 # 00010740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2954e0u;
    SET_GPR_U64(ctx, 14, ctx->lo);
label_2954e4:
    // 0x2954e4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2954e4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2954E4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2954e8:
    // 0x2954e8: 0x570  tge         $zero, $zero, 21
    ctx->pc = 0x2954e8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2954ec:
    // 0x2954ec: 0x0  nop
    ctx->pc = 0x2954ecu;
    // NOP
label_2954f0:
    // 0x2954f0: 0x17753  .word       0x00017753                   # mtlo        $zero # 00017740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2954f0u;
    ctx->lo = GPR_U64(ctx, 0);
label_2954f4:
    // 0x2954f4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2954f4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2954F4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2954f8:
    // 0x2954f8: 0x670  tge         $zero, $zero, 25
    ctx->pc = 0x2954f8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2954fc:
    // 0x2954fc: 0x0  nop
    ctx->pc = 0x2954fcu;
    // NOP
label_295500:
    // 0x295500: 0x17754  .word       0x00017754                   # dsllv       $t6, $at, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295500u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 1) << (GPR_U32(ctx, 0) & 0x3F));
label_295504:
    // 0x295504: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295504u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x295504 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_295508:
    // 0x295508: 0x490  .word       0x00000490                   # mfhi        $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295508u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29550c:
    // 0x29550c: 0x0  nop
    ctx->pc = 0x29550cu;
    // NOP
label_295510:
    // 0x295510: 0x17755  .word       0x00017755                   # INVALID     $zero, $at, 0x7755 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295510u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x295510 raw=0x00017755"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_295514:
    // 0x295514: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295514u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x295514 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_295518:
    // 0x295518: 0x3d0  .word       0x000003D0                   # mfhi        $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295518u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29551c:
    // 0x29551c: 0x0  nop
    ctx->pc = 0x29551cu;
    // NOP
label_295520:
    // 0x295520: 0x17756  .word       0x00017756                   # dsrlv       $t6, $at, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295520u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_295524:
    // 0x295524: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295524u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x295524 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_295528:
    // 0x295528: 0x260  .word       0x00000260                   # add         $zero, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295528u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_29552c:
    // 0x29552c: 0x0  nop
    ctx->pc = 0x29552cu;
    // NOP
label_295530:
    // 0x295530: 0x17757  .word       0x00017757                   # dsrav       $t6, $at, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295530u;
    SET_GPR_S64(ctx, 14, GPR_S64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_295534:
    // 0x295534: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295534u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x295534 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_295538:
    // 0x295538: 0x2c0  sll         $zero, $zero, 11
    ctx->pc = 0x295538u;
    
label_29553c:
    // 0x29553c: 0x0  nop
    ctx->pc = 0x29553cu;
    // NOP
label_295540:
    // 0x295540: 0x17758  .word       0x00017758                   # mult        $t6, $zero, $at # 00000740 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x295540u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
label_295544:
    // 0x295544: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295544u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x295544 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_295548:
    // 0x295548: 0x360  .word       0x00000360                   # add         $zero, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295548u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_29554c:
    // 0x29554c: 0x0  nop
    ctx->pc = 0x29554cu;
    // NOP
label_295550:
    // 0x295550: 0x17759  .word       0x00017759                   # multu       $zero, $at # 00007740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295550u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
label_295554:
    // 0x295554: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295554u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x295554 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_295558:
    // 0x295558: 0x420  .word       0x00000420                   # add         $zero, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295558u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_29555c:
    // 0x29555c: 0x0  nop
    ctx->pc = 0x29555cu;
    // NOP
label_295560:
    // 0x295560: 0x1775a  .word       0x0001775A                   # div         $t6, $zero, $at # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295560u;
    { int32_t divisor = GPR_S32(ctx, 1);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_295564:
    // 0x295564: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295564u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x295564 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_295568:
    // 0x295568: 0x240  sll         $zero, $zero, 9
    ctx->pc = 0x295568u;
    
label_29556c:
    // 0x29556c: 0x0  nop
    ctx->pc = 0x29556cu;
    // NOP
label_295570:
    // 0x295570: 0x1775b  .word       0x0001775B                   # divu        $t6, $zero, $at # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295570u;
    { uint32_t divisor = GPR_U32(ctx, 1); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_295574:
    // 0x295574: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295574u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x295574 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_295578:
    // 0x295578: 0x3f0  tge         $zero, $zero, 15
    ctx->pc = 0x295578u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29557c:
    // 0x29557c: 0x0  nop
    ctx->pc = 0x29557cu;
    // NOP
label_295580:
    // 0x295580: 0x1775c  .word       0x0001775C                   # dmult       $zero, $at # 00007740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295580u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x295580 raw=0x0001775C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_295584:
    // 0x295584: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295584u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x295584 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_295588:
    // 0x295588: 0x580  sll         $zero, $zero, 22
    ctx->pc = 0x295588u;
    
label_29558c:
    // 0x29558c: 0x0  nop
    ctx->pc = 0x29558cu;
    // NOP
label_295590:
    // 0x295590: 0x1775d  .word       0x0001775D                   # dmultu      $zero, $at # 00007740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295590u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x295590 raw=0x0001775D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_295594:
    // 0x295594: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295594u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x295594 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_295598:
    // 0x295598: 0x260  .word       0x00000260                   # add         $zero, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x295598u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_29559c:
    // 0x29559c: 0x0  nop
    ctx->pc = 0x29559cu;
    // NOP
label_2955a0:
    // 0x2955a0: 0x1775e  .word       0x0001775E                   # ddiv        $t6, $zero, $at # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2955a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x2955A0 raw=0x0001775E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2955a4:
    // 0x2955a4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2955a4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2955A4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2955a8:
    // 0x2955a8: 0x310  .word       0x00000310                   # mfhi        $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2955a8u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_2955ac:
    // 0x2955ac: 0x0  nop
    ctx->pc = 0x2955acu;
    // NOP
label_2955b0:
    // 0x2955b0: 0x1775f  .word       0x0001775F                   # ddivu       $t6, $zero, $at # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2955b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2955B0 raw=0x0001775F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2955b4:
    // 0x2955b4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2955b4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2955B4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2955b8:
    // 0x2955b8: 0x490  .word       0x00000490                   # mfhi        $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2955b8u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_2955bc:
    // 0x2955bc: 0x0  nop
    ctx->pc = 0x2955bcu;
    // NOP
label_2955c0:
    // 0x2955c0: 0x17760  .word       0x00017760                   # add         $t6, $zero, $at # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2955c0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_2955c4:
    // 0x2955c4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2955c4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2955C4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2955c8:
    // 0x2955c8: 0x380  sll         $zero, $zero, 14
    ctx->pc = 0x2955c8u;
    
label_2955cc:
    // 0x2955cc: 0x0  nop
    ctx->pc = 0x2955ccu;
    // NOP
label_2955d0:
    // 0x2955d0: 0x17761  .word       0x00017761                   # addu        $t6, $zero, $at # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2955d0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_2955d4:
    // 0x2955d4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2955d4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2955D4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2955d8:
    // 0x2955d8: 0x2f0  tge         $zero, $zero, 11
    ctx->pc = 0x2955d8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2955dc:
    // 0x2955dc: 0x0  nop
    ctx->pc = 0x2955dcu;
    // NOP
label_2955e0:
    // 0x2955e0: 0x17762  .word       0x00017762                   # neg         $t6, $at # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2955e0u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 1), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 14, (int32_t)tmp); }
label_2955e4:
    // 0x2955e4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2955e4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2955E4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
    ctx->pc = 0x2955e8u;
    return;
}

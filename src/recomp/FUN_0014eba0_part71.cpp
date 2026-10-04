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


void FUN_0014eba0_part71(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x170e80u: goto label_170e80;
        case 0x170e84u: goto label_170e84;
        case 0x170e88u: goto label_170e88;
        case 0x170e8cu: goto label_170e8c;
        case 0x170e90u: goto label_170e90;
        case 0x170e94u: goto label_170e94;
        case 0x170e98u: goto label_170e98;
        case 0x170e9cu: goto label_170e9c;
        case 0x170ea0u: goto label_170ea0;
        case 0x170ea4u: goto label_170ea4;
        case 0x170ea8u: goto label_170ea8;
        case 0x170eacu: goto label_170eac;
        case 0x170eb0u: goto label_170eb0;
        case 0x170eb4u: goto label_170eb4;
        case 0x170eb8u: goto label_170eb8;
        case 0x170ebcu: goto label_170ebc;
        case 0x170ec0u: goto label_170ec0;
        case 0x170ec4u: goto label_170ec4;
        case 0x170ec8u: goto label_170ec8;
        case 0x170eccu: goto label_170ecc;
        case 0x170ed0u: goto label_170ed0;
        case 0x170ed4u: goto label_170ed4;
        case 0x170ed8u: goto label_170ed8;
        case 0x170edcu: goto label_170edc;
        case 0x170ee0u: goto label_170ee0;
        case 0x170ee4u: goto label_170ee4;
        case 0x170ee8u: goto label_170ee8;
        case 0x170eecu: goto label_170eec;
        case 0x170ef0u: goto label_170ef0;
        case 0x170ef4u: goto label_170ef4;
        case 0x170ef8u: goto label_170ef8;
        case 0x170efcu: goto label_170efc;
        case 0x170f00u: goto label_170f00;
        case 0x170f04u: goto label_170f04;
        case 0x170f08u: goto label_170f08;
        case 0x170f0cu: goto label_170f0c;
        case 0x170f10u: goto label_170f10;
        case 0x170f14u: goto label_170f14;
        case 0x170f18u: goto label_170f18;
        case 0x170f1cu: goto label_170f1c;
        case 0x170f20u: goto label_170f20;
        case 0x170f24u: goto label_170f24;
        case 0x170f28u: goto label_170f28;
        case 0x170f2cu: goto label_170f2c;
        case 0x170f30u: goto label_170f30;
        case 0x170f34u: goto label_170f34;
        case 0x170f38u: goto label_170f38;
        case 0x170f3cu: goto label_170f3c;
        case 0x170f40u: goto label_170f40;
        case 0x170f44u: goto label_170f44;
        case 0x170f48u: goto label_170f48;
        case 0x170f4cu: goto label_170f4c;
        case 0x170f50u: goto label_170f50;
        case 0x170f54u: goto label_170f54;
        case 0x170f58u: goto label_170f58;
        case 0x170f5cu: goto label_170f5c;
        case 0x170f60u: goto label_170f60;
        case 0x170f64u: goto label_170f64;
        case 0x170f68u: goto label_170f68;
        case 0x170f6cu: goto label_170f6c;
        case 0x170f70u: goto label_170f70;
        case 0x170f74u: goto label_170f74;
        case 0x170f78u: goto label_170f78;
        case 0x170f7cu: goto label_170f7c;
        case 0x170f80u: goto label_170f80;
        case 0x170f84u: goto label_170f84;
        case 0x170f88u: goto label_170f88;
        case 0x170f8cu: goto label_170f8c;
        case 0x170f90u: goto label_170f90;
        case 0x170f94u: goto label_170f94;
        case 0x170f98u: goto label_170f98;
        case 0x170f9cu: goto label_170f9c;
        case 0x170fa0u: goto label_170fa0;
        case 0x170fa4u: goto label_170fa4;
        case 0x170fa8u: goto label_170fa8;
        case 0x170facu: goto label_170fac;
        case 0x170fb0u: goto label_170fb0;
        case 0x170fb4u: goto label_170fb4;
        case 0x170fb8u: goto label_170fb8;
        case 0x170fbcu: goto label_170fbc;
        case 0x170fc0u: goto label_170fc0;
        case 0x170fc4u: goto label_170fc4;
        case 0x170fc8u: goto label_170fc8;
        case 0x170fccu: goto label_170fcc;
        case 0x170fd0u: goto label_170fd0;
        case 0x170fd4u: goto label_170fd4;
        case 0x170fd8u: goto label_170fd8;
        case 0x170fdcu: goto label_170fdc;
        case 0x170fe0u: goto label_170fe0;
        case 0x170fe4u: goto label_170fe4;
        case 0x170fe8u: goto label_170fe8;
        case 0x170fecu: goto label_170fec;
        case 0x170ff0u: goto label_170ff0;
        case 0x170ff4u: goto label_170ff4;
        case 0x170ff8u: goto label_170ff8;
        case 0x170ffcu: goto label_170ffc;
        case 0x171000u: goto label_171000;
        case 0x171004u: goto label_171004;
        case 0x171008u: goto label_171008;
        case 0x17100cu: goto label_17100c;
        case 0x171010u: goto label_171010;
        case 0x171014u: goto label_171014;
        case 0x171018u: goto label_171018;
        case 0x17101cu: goto label_17101c;
        case 0x171020u: goto label_171020;
        case 0x171024u: goto label_171024;
        case 0x171028u: goto label_171028;
        case 0x17102cu: goto label_17102c;
        case 0x171030u: goto label_171030;
        case 0x171034u: goto label_171034;
        case 0x171038u: goto label_171038;
        case 0x17103cu: goto label_17103c;
        case 0x171040u: goto label_171040;
        case 0x171044u: goto label_171044;
        case 0x171048u: goto label_171048;
        case 0x17104cu: goto label_17104c;
        case 0x171050u: goto label_171050;
        case 0x171054u: goto label_171054;
        case 0x171058u: goto label_171058;
        case 0x17105cu: goto label_17105c;
        case 0x171060u: goto label_171060;
        case 0x171064u: goto label_171064;
        case 0x171068u: goto label_171068;
        case 0x17106cu: goto label_17106c;
        case 0x171070u: goto label_171070;
        case 0x171074u: goto label_171074;
        case 0x171078u: goto label_171078;
        case 0x17107cu: goto label_17107c;
        case 0x171080u: goto label_171080;
        case 0x171084u: goto label_171084;
        case 0x171088u: goto label_171088;
        case 0x17108cu: goto label_17108c;
        case 0x171090u: goto label_171090;
        case 0x171094u: goto label_171094;
        case 0x171098u: goto label_171098;
        case 0x17109cu: goto label_17109c;
        case 0x1710a0u: goto label_1710a0;
        case 0x1710a4u: goto label_1710a4;
        case 0x1710a8u: goto label_1710a8;
        case 0x1710acu: goto label_1710ac;
        case 0x1710b0u: goto label_1710b0;
        case 0x1710b4u: goto label_1710b4;
        case 0x1710b8u: goto label_1710b8;
        case 0x1710bcu: goto label_1710bc;
        case 0x1710c0u: goto label_1710c0;
        case 0x1710c4u: goto label_1710c4;
        case 0x1710c8u: goto label_1710c8;
        case 0x1710ccu: goto label_1710cc;
        case 0x1710d0u: goto label_1710d0;
        case 0x1710d4u: goto label_1710d4;
        case 0x1710d8u: goto label_1710d8;
        case 0x1710dcu: goto label_1710dc;
        case 0x1710e0u: goto label_1710e0;
        case 0x1710e4u: goto label_1710e4;
        case 0x1710e8u: goto label_1710e8;
        case 0x1710ecu: goto label_1710ec;
        case 0x1710f0u: goto label_1710f0;
        case 0x1710f4u: goto label_1710f4;
        case 0x1710f8u: goto label_1710f8;
        case 0x1710fcu: goto label_1710fc;
        case 0x171100u: goto label_171100;
        case 0x171104u: goto label_171104;
        case 0x171108u: goto label_171108;
        case 0x17110cu: goto label_17110c;
        case 0x171110u: goto label_171110;
        case 0x171114u: goto label_171114;
        case 0x171118u: goto label_171118;
        case 0x17111cu: goto label_17111c;
        case 0x171120u: goto label_171120;
        case 0x171124u: goto label_171124;
        case 0x171128u: goto label_171128;
        case 0x17112cu: goto label_17112c;
        case 0x171130u: goto label_171130;
        case 0x171134u: goto label_171134;
        case 0x171138u: goto label_171138;
        case 0x17113cu: goto label_17113c;
        case 0x171140u: goto label_171140;
        case 0x171144u: goto label_171144;
        case 0x171148u: goto label_171148;
        case 0x17114cu: goto label_17114c;
        case 0x171150u: goto label_171150;
        case 0x171154u: goto label_171154;
        case 0x171158u: goto label_171158;
        case 0x17115cu: goto label_17115c;
        case 0x171160u: goto label_171160;
        case 0x171164u: goto label_171164;
        case 0x171168u: goto label_171168;
        case 0x17116cu: goto label_17116c;
        case 0x171170u: goto label_171170;
        case 0x171174u: goto label_171174;
        case 0x171178u: goto label_171178;
        case 0x17117cu: goto label_17117c;
        case 0x171180u: goto label_171180;
        case 0x171184u: goto label_171184;
        case 0x171188u: goto label_171188;
        case 0x17118cu: goto label_17118c;
        case 0x171190u: goto label_171190;
        case 0x171194u: goto label_171194;
        case 0x171198u: goto label_171198;
        case 0x17119cu: goto label_17119c;
        case 0x1711a0u: goto label_1711a0;
        case 0x1711a4u: goto label_1711a4;
        case 0x1711a8u: goto label_1711a8;
        case 0x1711acu: goto label_1711ac;
        case 0x1711b0u: goto label_1711b0;
        case 0x1711b4u: goto label_1711b4;
        case 0x1711b8u: goto label_1711b8;
        case 0x1711bcu: goto label_1711bc;
        case 0x1711c0u: goto label_1711c0;
        case 0x1711c4u: goto label_1711c4;
        case 0x1711c8u: goto label_1711c8;
        case 0x1711ccu: goto label_1711cc;
        case 0x1711d0u: goto label_1711d0;
        case 0x1711d4u: goto label_1711d4;
        case 0x1711d8u: goto label_1711d8;
        case 0x1711dcu: goto label_1711dc;
        case 0x1711e0u: goto label_1711e0;
        case 0x1711e4u: goto label_1711e4;
        case 0x1711e8u: goto label_1711e8;
        case 0x1711ecu: goto label_1711ec;
        case 0x1711f0u: goto label_1711f0;
        case 0x1711f4u: goto label_1711f4;
        case 0x1711f8u: goto label_1711f8;
        case 0x1711fcu: goto label_1711fc;
        case 0x171200u: goto label_171200;
        case 0x171204u: goto label_171204;
        case 0x171208u: goto label_171208;
        case 0x17120cu: goto label_17120c;
        case 0x171210u: goto label_171210;
        case 0x171214u: goto label_171214;
        case 0x171218u: goto label_171218;
        case 0x17121cu: goto label_17121c;
        case 0x171220u: goto label_171220;
        case 0x171224u: goto label_171224;
        case 0x171228u: goto label_171228;
        case 0x17122cu: goto label_17122c;
        case 0x171230u: goto label_171230;
        case 0x171234u: goto label_171234;
        case 0x171238u: goto label_171238;
        case 0x17123cu: goto label_17123c;
        case 0x171240u: goto label_171240;
        case 0x171244u: goto label_171244;
        case 0x171248u: goto label_171248;
        case 0x17124cu: goto label_17124c;
        case 0x171250u: goto label_171250;
        case 0x171254u: goto label_171254;
        case 0x171258u: goto label_171258;
        case 0x17125cu: goto label_17125c;
        case 0x171260u: goto label_171260;
        case 0x171264u: goto label_171264;
        case 0x171268u: goto label_171268;
        case 0x17126cu: goto label_17126c;
        case 0x171270u: goto label_171270;
        case 0x171274u: goto label_171274;
        case 0x171278u: goto label_171278;
        case 0x17127cu: goto label_17127c;
        case 0x171280u: goto label_171280;
        case 0x171284u: goto label_171284;
        case 0x171288u: goto label_171288;
        case 0x17128cu: goto label_17128c;
        case 0x171290u: goto label_171290;
        case 0x171294u: goto label_171294;
        case 0x171298u: goto label_171298;
        case 0x17129cu: goto label_17129c;
        case 0x1712a0u: goto label_1712a0;
        case 0x1712a4u: goto label_1712a4;
        case 0x1712a8u: goto label_1712a8;
        case 0x1712acu: goto label_1712ac;
        case 0x1712b0u: goto label_1712b0;
        case 0x1712b4u: goto label_1712b4;
        case 0x1712b8u: goto label_1712b8;
        case 0x1712bcu: goto label_1712bc;
        case 0x1712c0u: goto label_1712c0;
        case 0x1712c4u: goto label_1712c4;
        case 0x1712c8u: goto label_1712c8;
        case 0x1712ccu: goto label_1712cc;
        case 0x1712d0u: goto label_1712d0;
        case 0x1712d4u: goto label_1712d4;
        case 0x1712d8u: goto label_1712d8;
        case 0x1712dcu: goto label_1712dc;
        case 0x1712e0u: goto label_1712e0;
        case 0x1712e4u: goto label_1712e4;
        case 0x1712e8u: goto label_1712e8;
        case 0x1712ecu: goto label_1712ec;
        case 0x1712f0u: goto label_1712f0;
        case 0x1712f4u: goto label_1712f4;
        case 0x1712f8u: goto label_1712f8;
        case 0x1712fcu: goto label_1712fc;
        case 0x171300u: goto label_171300;
        case 0x171304u: goto label_171304;
        case 0x171308u: goto label_171308;
        case 0x17130cu: goto label_17130c;
        case 0x171310u: goto label_171310;
        case 0x171314u: goto label_171314;
        case 0x171318u: goto label_171318;
        case 0x17131cu: goto label_17131c;
        case 0x171320u: goto label_171320;
        case 0x171324u: goto label_171324;
        case 0x171328u: goto label_171328;
        case 0x17132cu: goto label_17132c;
        case 0x171330u: goto label_171330;
        case 0x171334u: goto label_171334;
        case 0x171338u: goto label_171338;
        case 0x17133cu: goto label_17133c;
        case 0x171340u: goto label_171340;
        case 0x171344u: goto label_171344;
        case 0x171348u: goto label_171348;
        case 0x17134cu: goto label_17134c;
        case 0x171350u: goto label_171350;
        case 0x171354u: goto label_171354;
        case 0x171358u: goto label_171358;
        case 0x17135cu: goto label_17135c;
        case 0x171360u: goto label_171360;
        case 0x171364u: goto label_171364;
        case 0x171368u: goto label_171368;
        case 0x17136cu: goto label_17136c;
        case 0x171370u: goto label_171370;
        case 0x171374u: goto label_171374;
        case 0x171378u: goto label_171378;
        case 0x17137cu: goto label_17137c;
        case 0x171380u: goto label_171380;
        case 0x171384u: goto label_171384;
        case 0x171388u: goto label_171388;
        case 0x17138cu: goto label_17138c;
        case 0x171390u: goto label_171390;
        case 0x171394u: goto label_171394;
        case 0x171398u: goto label_171398;
        case 0x17139cu: goto label_17139c;
        case 0x1713a0u: goto label_1713a0;
        case 0x1713a4u: goto label_1713a4;
        case 0x1713a8u: goto label_1713a8;
        case 0x1713acu: goto label_1713ac;
        case 0x1713b0u: goto label_1713b0;
        case 0x1713b4u: goto label_1713b4;
        case 0x1713b8u: goto label_1713b8;
        case 0x1713bcu: goto label_1713bc;
        case 0x1713c0u: goto label_1713c0;
        case 0x1713c4u: goto label_1713c4;
        case 0x1713c8u: goto label_1713c8;
        case 0x1713ccu: goto label_1713cc;
        case 0x1713d0u: goto label_1713d0;
        case 0x1713d4u: goto label_1713d4;
        case 0x1713d8u: goto label_1713d8;
        case 0x1713dcu: goto label_1713dc;
        case 0x1713e0u: goto label_1713e0;
        case 0x1713e4u: goto label_1713e4;
        case 0x1713e8u: goto label_1713e8;
        case 0x1713ecu: goto label_1713ec;
        case 0x1713f0u: goto label_1713f0;
        case 0x1713f4u: goto label_1713f4;
        case 0x1713f8u: goto label_1713f8;
        case 0x1713fcu: goto label_1713fc;
        case 0x171400u: goto label_171400;
        case 0x171404u: goto label_171404;
        case 0x171408u: goto label_171408;
        case 0x17140cu: goto label_17140c;
        case 0x171410u: goto label_171410;
        case 0x171414u: goto label_171414;
        case 0x171418u: goto label_171418;
        case 0x17141cu: goto label_17141c;
        case 0x171420u: goto label_171420;
        case 0x171424u: goto label_171424;
        case 0x171428u: goto label_171428;
        case 0x17142cu: goto label_17142c;
        case 0x171430u: goto label_171430;
        case 0x171434u: goto label_171434;
        case 0x171438u: goto label_171438;
        case 0x17143cu: goto label_17143c;
        case 0x171440u: goto label_171440;
        case 0x171444u: goto label_171444;
        case 0x171448u: goto label_171448;
        case 0x17144cu: goto label_17144c;
        case 0x171450u: goto label_171450;
        case 0x171454u: goto label_171454;
        case 0x171458u: goto label_171458;
        case 0x17145cu: goto label_17145c;
        case 0x171460u: goto label_171460;
        case 0x171464u: goto label_171464;
        case 0x171468u: goto label_171468;
        case 0x17146cu: goto label_17146c;
        case 0x171470u: goto label_171470;
        case 0x171474u: goto label_171474;
        case 0x171478u: goto label_171478;
        case 0x17147cu: goto label_17147c;
        case 0x171480u: goto label_171480;
        case 0x171484u: goto label_171484;
        case 0x171488u: goto label_171488;
        case 0x17148cu: goto label_17148c;
        case 0x171490u: goto label_171490;
        case 0x171494u: goto label_171494;
        case 0x171498u: goto label_171498;
        case 0x17149cu: goto label_17149c;
        case 0x1714a0u: goto label_1714a0;
        case 0x1714a4u: goto label_1714a4;
        case 0x1714a8u: goto label_1714a8;
        case 0x1714acu: goto label_1714ac;
        case 0x1714b0u: goto label_1714b0;
        case 0x1714b4u: goto label_1714b4;
        case 0x1714b8u: goto label_1714b8;
        case 0x1714bcu: goto label_1714bc;
        case 0x1714c0u: goto label_1714c0;
        case 0x1714c4u: goto label_1714c4;
        case 0x1714c8u: goto label_1714c8;
        case 0x1714ccu: goto label_1714cc;
        case 0x1714d0u: goto label_1714d0;
        case 0x1714d4u: goto label_1714d4;
        case 0x1714d8u: goto label_1714d8;
        case 0x1714dcu: goto label_1714dc;
        case 0x1714e0u: goto label_1714e0;
        case 0x1714e4u: goto label_1714e4;
        case 0x1714e8u: goto label_1714e8;
        case 0x1714ecu: goto label_1714ec;
        case 0x1714f0u: goto label_1714f0;
        case 0x1714f4u: goto label_1714f4;
        case 0x1714f8u: goto label_1714f8;
        case 0x1714fcu: goto label_1714fc;
        case 0x171500u: goto label_171500;
        case 0x171504u: goto label_171504;
        case 0x171508u: goto label_171508;
        case 0x17150cu: goto label_17150c;
        case 0x171510u: goto label_171510;
        case 0x171514u: goto label_171514;
        case 0x171518u: goto label_171518;
        case 0x17151cu: goto label_17151c;
        case 0x171520u: goto label_171520;
        case 0x171524u: goto label_171524;
        case 0x171528u: goto label_171528;
        case 0x17152cu: goto label_17152c;
        case 0x171530u: goto label_171530;
        case 0x171534u: goto label_171534;
        case 0x171538u: goto label_171538;
        case 0x17153cu: goto label_17153c;
        case 0x171540u: goto label_171540;
        case 0x171544u: goto label_171544;
        case 0x171548u: goto label_171548;
        case 0x17154cu: goto label_17154c;
        case 0x171550u: goto label_171550;
        case 0x171554u: goto label_171554;
        case 0x171558u: goto label_171558;
        case 0x17155cu: goto label_17155c;
        case 0x171560u: goto label_171560;
        case 0x171564u: goto label_171564;
        case 0x171568u: goto label_171568;
        case 0x17156cu: goto label_17156c;
        case 0x171570u: goto label_171570;
        case 0x171574u: goto label_171574;
        case 0x171578u: goto label_171578;
        case 0x17157cu: goto label_17157c;
        case 0x171580u: goto label_171580;
        case 0x171584u: goto label_171584;
        case 0x171588u: goto label_171588;
        case 0x17158cu: goto label_17158c;
        case 0x171590u: goto label_171590;
        case 0x171594u: goto label_171594;
        case 0x171598u: goto label_171598;
        case 0x17159cu: goto label_17159c;
        case 0x1715a0u: goto label_1715a0;
        case 0x1715a4u: goto label_1715a4;
        case 0x1715a8u: goto label_1715a8;
        case 0x1715acu: goto label_1715ac;
        case 0x1715b0u: goto label_1715b0;
        case 0x1715b4u: goto label_1715b4;
        case 0x1715b8u: goto label_1715b8;
        case 0x1715bcu: goto label_1715bc;
        case 0x1715c0u: goto label_1715c0;
        case 0x1715c4u: goto label_1715c4;
        case 0x1715c8u: goto label_1715c8;
        case 0x1715ccu: goto label_1715cc;
        case 0x1715d0u: goto label_1715d0;
        case 0x1715d4u: goto label_1715d4;
        case 0x1715d8u: goto label_1715d8;
        case 0x1715dcu: goto label_1715dc;
        case 0x1715e0u: goto label_1715e0;
        case 0x1715e4u: goto label_1715e4;
        case 0x1715e8u: goto label_1715e8;
        case 0x1715ecu: goto label_1715ec;
        case 0x1715f0u: goto label_1715f0;
        case 0x1715f4u: goto label_1715f4;
        case 0x1715f8u: goto label_1715f8;
        case 0x1715fcu: goto label_1715fc;
        case 0x171600u: goto label_171600;
        case 0x171604u: goto label_171604;
        case 0x171608u: goto label_171608;
        case 0x17160cu: goto label_17160c;
        case 0x171610u: goto label_171610;
        case 0x171614u: goto label_171614;
        case 0x171618u: goto label_171618;
        case 0x17161cu: goto label_17161c;
        case 0x171620u: goto label_171620;
        case 0x171624u: goto label_171624;
        case 0x171628u: goto label_171628;
        case 0x17162cu: goto label_17162c;
        case 0x171630u: goto label_171630;
        case 0x171634u: goto label_171634;
        case 0x171638u: goto label_171638;
        case 0x17163cu: goto label_17163c;
        case 0x171640u: goto label_171640;
        case 0x171644u: goto label_171644;
        case 0x171648u: goto label_171648;
        case 0x17164cu: goto label_17164c;
        default: return;
    }

label_170e80:
    if (ctx->pc == 0x170E80u) {
        ctx->pc = 0x170E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170E7Cu;
        // 0x170e80: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170E84u;
        goto label_170e84;
    }
    ctx->pc = 0x170E7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170E7Cu;
        // 0x170e80: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x170E7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x170E84u;
label_170e84:
    // 0x170e84: 0x0  nop
    ctx->pc = 0x170e84u;
    // NOP
label_170e88:
    // 0x170e88: 0x0  nop
    ctx->pc = 0x170e88u;
    // NOP
label_170e8c:
    // 0x170e8c: 0x0  nop
    ctx->pc = 0x170e8cu;
    // NOP
label_170e90:
    // 0x170e90: 0x28810002  slti        $at, $a0, 0x2
    ctx->pc = 0x170e90u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
label_170e94:
    // 0x170e94: 0x10200022  beqz        $at, . + 4 + (0x22 << 2)
label_170e98:
    if (ctx->pc == 0x170E98u) {
        ctx->pc = 0x170E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170E94u;
        // 0x170e98: 0x42880  sll         $a1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170E9Cu;
        goto label_170e9c;
    }
    ctx->pc = 0x170E94u;
    {
        const bool branch_taken_0x170e94 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x170E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170E94u;
        // 0x170e98: 0x42880  sll         $a1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170e94) {
            ctx->pc = 0x170F20u;
            goto label_170f20;
        }
    }
    ctx->pc = 0x170E9Cu;
label_170e9c:
    // 0x170e9c: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x170e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
label_170ea0:
    // 0x170ea0: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x170ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_170ea4:
    // 0x170ea4: 0x24634480  addiu       $v1, $v1, 0x4480
    ctx->pc = 0x170ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17536));
label_170ea8:
    // 0x170ea8: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x170ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_170eac:
    // 0x170eac: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x170eacu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_170eb0:
    // 0x170eb0: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x170eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_170eb4:
    // 0x170eb4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x170eb4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_170eb8:
    // 0x170eb8: 0x538c0  sll         $a3, $a1, 3
    ctx->pc = 0x170eb8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_170ebc:
    // 0x170ebc: 0x278681cb  addiu       $a2, $gp, -0x7E35
    ctx->pc = 0x170ebcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934987));
label_170ec0:
    // 0x170ec0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x170ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_170ec4:
    // 0x170ec4: 0x10000012  b           . + 4 + (0x12 << 2)
label_170ec8:
    if (ctx->pc == 0x170EC8u) {
        ctx->pc = 0x170EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170EC4u;
        // 0x170ec8: 0x674821  addu        $t1, $v1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170ECCu;
        goto label_170ecc;
    }
    ctx->pc = 0x170EC4u;
    {
        const bool branch_taken_0x170ec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x170EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170EC4u;
        // 0x170ec8: 0x674821  addu        $t1, $v1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170ec4) {
            ctx->pc = 0x170F10u;
            goto label_170f10;
        }
    }
    ctx->pc = 0x170ECCu;
label_170ecc:
    // 0x170ecc: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
label_170ed0:
    if (ctx->pc == 0x170ED0u) {
        ctx->pc = 0x170ED4u;
        goto label_170ed4;
    }
    ctx->pc = 0x170ECCu;
    {
        const bool branch_taken_0x170ecc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x170ecc) {
            ctx->pc = 0x170F04u;
            goto label_170f04;
        }
    }
    ctx->pc = 0x170ED4u;
label_170ed4:
    // 0x170ed4: 0x8d230018  lw          $v1, 0x18($t1)
    ctx->pc = 0x170ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 24)));
label_170ed8:
    // 0x170ed8: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_170edc:
    if (ctx->pc == 0x170EDCu) {
        ctx->pc = 0x170EE0u;
        goto label_170ee0;
    }
    ctx->pc = 0x170ED8u;
    {
        const bool branch_taken_0x170ed8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x170ed8) {
            ctx->pc = 0x170F04u;
            goto label_170f04;
        }
    }
    ctx->pc = 0x170EE0u;
label_170ee0:
    // 0x170ee0: 0x8d230020  lw          $v1, 0x20($t1)
    ctx->pc = 0x170ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 32)));
label_170ee4:
    // 0x170ee4: 0x143082b  sltu        $at, $t2, $v1
    ctx->pc = 0x170ee4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_170ee8:
    // 0x170ee8: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
label_170eec:
    if (ctx->pc == 0x170EECu) {
        ctx->pc = 0x170EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170EE8u;
        // 0x170eec: 0x1283821  addu        $a3, $t1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170EF0u;
        goto label_170ef0;
    }
    ctx->pc = 0x170EE8u;
    {
        const bool branch_taken_0x170ee8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x170EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170EE8u;
        // 0x170eec: 0x1283821  addu        $a3, $t1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170ee8) {
            ctx->pc = 0x170F04u;
            goto label_170f04;
        }
    }
    ctx->pc = 0x170EF0u;
label_170ef0:
    // 0x170ef0: 0xace60040  sw          $a2, 0x40($a3)
    ctx->pc = 0x170ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 64), GPR_U32(ctx, 6));
label_170ef4:
    // 0x170ef4: 0xace00034  sw          $zero, 0x34($a3)
    ctx->pc = 0x170ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 52), GPR_U32(ctx, 0));
label_170ef8:
    // 0x170ef8: 0x8f838738  lw          $v1, -0x78C8($gp)
    ctx->pc = 0x170ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936376)));
label_170efc:
    // 0x170efc: 0xace30038  sw          $v1, 0x38($a3)
    ctx->pc = 0x170efcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 56), GPR_U32(ctx, 3));
label_170f00:
    // 0x170f00: 0xace50030  sw          $a1, 0x30($a3)
    ctx->pc = 0x170f00u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 48), GPR_U32(ctx, 5));
label_170f04:
    // 0x170f04: 0x0  nop
    ctx->pc = 0x170f04u;
    // NOP
label_170f08:
    // 0x170f08: 0x25080014  addiu       $t0, $t0, 0x14
    ctx->pc = 0x170f08u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 20));
label_170f0c:
    // 0x170f0c: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x170f0cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_170f10:
    // 0x170f10: 0x8d230020  lw          $v1, 0x20($t1)
    ctx->pc = 0x170f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 32)));
label_170f14:
    // 0x170f14: 0x143182b  sltu        $v1, $t2, $v1
    ctx->pc = 0x170f14u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_170f18:
    // 0x170f18: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
label_170f1c:
    if (ctx->pc == 0x170F1Cu) {
        ctx->pc = 0x170F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170F18u;
        // 0x170f1c: 0x28810002  slti        $at, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x170F20u;
        goto label_170f20;
    }
    ctx->pc = 0x170F18u;
    {
        const bool branch_taken_0x170f18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x170F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170F18u;
        // 0x170f1c: 0x28810002  slti        $at, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x170f18) {
            ctx->pc = 0x170ECCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_170ecc;
        }
    }
    ctx->pc = 0x170F20u;
label_170f20:
    // 0x170f20: 0x3e00008  jr          $ra
label_170f24:
    if (ctx->pc == 0x170F24u) {
        ctx->pc = 0x170F28u;
        goto label_170f28;
    }
    ctx->pc = 0x170F20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x170F20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x170F28u;
label_170f28:
    // 0x170f28: 0x0  nop
    ctx->pc = 0x170f28u;
    // NOP
label_170f2c:
    // 0x170f2c: 0x0  nop
    ctx->pc = 0x170f2cu;
    // NOP
label_170f30:
    // 0x170f30: 0x28810002  slti        $at, $a0, 0x2
    ctx->pc = 0x170f30u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
label_170f34:
    // 0x170f34: 0x10200019  beqz        $at, . + 4 + (0x19 << 2)
label_170f38:
    if (ctx->pc == 0x170F38u) {
        ctx->pc = 0x170F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170F34u;
        // 0x170f38: 0x43880  sll         $a3, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170F3Cu;
        goto label_170f3c;
    }
    ctx->pc = 0x170F34u;
    {
        const bool branch_taken_0x170f34 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x170F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170F34u;
        // 0x170f38: 0x43880  sll         $a3, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170f34) {
            ctx->pc = 0x170F9Cu;
            goto label_170f9c;
        }
    }
    ctx->pc = 0x170F3Cu;
label_170f3c:
    // 0x170f3c: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x170f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
label_170f40:
    // 0x170f40: 0xe43821  addu        $a3, $a3, $a0
    ctx->pc = 0x170f40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_170f44:
    // 0x170f44: 0x24634480  addiu       $v1, $v1, 0x4480
    ctx->pc = 0x170f44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17536));
label_170f48:
    // 0x170f48: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x170f48u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_170f4c:
    // 0x170f4c: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x170f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_170f50:
    // 0x170f50: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x170f50u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_170f54:
    // 0x170f54: 0x643821  addu        $a3, $v1, $a0
    ctx->pc = 0x170f54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_170f58:
    // 0x170f58: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x170f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
label_170f5c:
    // 0x170f5c: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
label_170f60:
    if (ctx->pc == 0x170F60u) {
        ctx->pc = 0x170F64u;
        goto label_170f64;
    }
    ctx->pc = 0x170F5Cu;
    {
        const bool branch_taken_0x170f5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x170f5c) {
            ctx->pc = 0x170F9Cu;
            goto label_170f9c;
        }
    }
    ctx->pc = 0x170F64u;
label_170f64:
    // 0x170f64: 0x8ce30020  lw          $v1, 0x20($a3)
    ctx->pc = 0x170f64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
label_170f68:
    // 0x170f68: 0xa3082b  sltu        $at, $a1, $v1
    ctx->pc = 0x170f68u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_170f6c:
    // 0x170f6c: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
label_170f70:
    if (ctx->pc == 0x170F70u) {
        ctx->pc = 0x170F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170F6Cu;
        // 0x170f70: 0x51880  sll         $v1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170F74u;
        goto label_170f74;
    }
    ctx->pc = 0x170F6Cu;
    {
        const bool branch_taken_0x170f6c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x170F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170F6Cu;
        // 0x170f70: 0x51880  sll         $v1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170f6c) {
            ctx->pc = 0x170F9Cu;
            goto label_170f9c;
        }
    }
    ctx->pc = 0x170F74u;
label_170f74:
    // 0x170f74: 0x24c4ffff  addiu       $a0, $a2, -0x1
    ctx->pc = 0x170f74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_170f78:
    // 0x170f78: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x170f78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_170f7c:
    // 0x170f7c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x170f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_170f80:
    // 0x170f80: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x170f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_170f84:
    // 0x170f84: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x170f84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_170f88:
    // 0x170f88: 0xaca40040  sw          $a0, 0x40($a1)
    ctx->pc = 0x170f88u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 4));
label_170f8c:
    // 0x170f8c: 0xaca00034  sw          $zero, 0x34($a1)
    ctx->pc = 0x170f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 0));
label_170f90:
    // 0x170f90: 0x8f848738  lw          $a0, -0x78C8($gp)
    ctx->pc = 0x170f90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936376)));
label_170f94:
    // 0x170f94: 0xaca40038  sw          $a0, 0x38($a1)
    ctx->pc = 0x170f94u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 56), GPR_U32(ctx, 4));
label_170f98:
    // 0x170f98: 0xaca30030  sw          $v1, 0x30($a1)
    ctx->pc = 0x170f98u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 3));
label_170f9c:
    // 0x170f9c: 0x3e00008  jr          $ra
label_170fa0:
    if (ctx->pc == 0x170FA0u) {
        ctx->pc = 0x170FA4u;
        goto label_170fa4;
    }
    ctx->pc = 0x170F9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x170F9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x170FA4u;
label_170fa4:
    // 0x170fa4: 0x0  nop
    ctx->pc = 0x170fa4u;
    // NOP
label_170fa8:
    // 0x170fa8: 0x0  nop
    ctx->pc = 0x170fa8u;
    // NOP
label_170fac:
    // 0x170fac: 0x0  nop
    ctx->pc = 0x170facu;
    // NOP
label_170fb0:
    // 0x170fb0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x170fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_170fb4:
    // 0x170fb4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x170fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_170fb8:
    // 0x170fb8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x170fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_170fbc:
    // 0x170fbc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x170fbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_170fc0:
    // 0x170fc0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x170fc0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_170fc4:
    // 0x170fc4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x170fc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_170fc8:
    // 0x170fc8: 0x2a610002  slti        $at, $s3, 0x2
    ctx->pc = 0x170fc8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
label_170fcc:
    // 0x170fcc: 0x1020003e  beqz        $at, . + 4 + (0x3E << 2)
label_170fd0:
    if (ctx->pc == 0x170FD0u) {
        ctx->pc = 0x170FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170FCCu;
        // 0x170fd0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170FD4u;
        goto label_170fd4;
    }
    ctx->pc = 0x170FCCu;
    {
        const bool branch_taken_0x170fcc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x170FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170FCCu;
        // 0x170fd0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170fcc) {
            ctx->pc = 0x1710C8u;
            goto label_1710c8;
        }
    }
    ctx->pc = 0x170FD4u;
label_170fd4:
    // 0x170fd4: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x170fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_170fd8:
    // 0x170fd8: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x170fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
label_170fdc:
    // 0x170fdc: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x170fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_170fe0:
    // 0x170fe0: 0x24424480  addiu       $v0, $v0, 0x4480
    ctx->pc = 0x170fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17536));
label_170fe4:
    // 0x170fe4: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x170fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_170fe8:
    // 0x170fe8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x170fe8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_170fec:
    // 0x170fec: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x170fecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_170ff0:
    // 0x170ff0: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x170ff0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_170ff4:
    // 0x170ff4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x170ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_170ff8:
    // 0x170ff8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x170ff8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_170ffc:
    // 0x170ffc: 0xc06b95c  jal         func_1AE570
label_171000:
    if (ctx->pc == 0x171000u) {
        ctx->pc = 0x171000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170FFCu;
        // 0x171000: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x171004u;
        goto label_171004;
    }
    ctx->pc = 0x170FFCu;
    SET_GPR_U32(ctx, 31, 0x171004u);
    ctx->pc = 0x171000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170FFCu;
    // 0x171000: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE570u;
    { ctx->pc = 0x1ae570; return; }
    ctx->pc = 0x171004u;
label_171004:
    // 0x171004: 0x28410003  slti        $at, $v0, 0x3
    ctx->pc = 0x171004u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
label_171008:
    // 0x171008: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_17100c:
    if (ctx->pc == 0x17100Cu) {
        ctx->pc = 0x17100Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171008u;
        // 0x17100c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x171010u;
        goto label_171010;
    }
    ctx->pc = 0x171008u;
    {
        const bool branch_taken_0x171008 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x17100Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171008u;
        // 0x17100c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171008) {
            ctx->pc = 0x171018u;
            goto label_171018;
        }
    }
    ctx->pc = 0x171010u;
label_171010:
    // 0x171010: 0x10000006  b           . + 4 + (0x6 << 2)
label_171014:
    if (ctx->pc == 0x171014u) {
        ctx->pc = 0x171014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171010u;
        // 0x171014: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x171018u;
        goto label_171018;
    }
    ctx->pc = 0x171010u;
    {
        const bool branch_taken_0x171010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171010u;
        // 0x171014: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171010) {
            ctx->pc = 0x17102Cu;
            goto label_17102c;
        }
    }
    ctx->pc = 0x171018u;
label_171018:
    // 0x171018: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x171018u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17101c:
    // 0x17101c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x17101cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_171020:
    // 0x171020: 0xc06b95c  jal         func_1AE570
label_171024:
    if (ctx->pc == 0x171024u) {
        ctx->pc = 0x171024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171020u;
        // 0x171024: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x171028u;
        goto label_171028;
    }
    ctx->pc = 0x171020u;
    SET_GPR_U32(ctx, 31, 0x171028u);
    ctx->pc = 0x171024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171020u;
    // 0x171024: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE570u;
    { ctx->pc = 0x1ae570; return; }
    ctx->pc = 0x171028u;
label_171028:
    // 0x171028: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x171028u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17102c:
    // 0x17102c: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x17102cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
label_171030:
    // 0x171030: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x171030u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_171034:
    // 0x171034: 0x1000000f  b           . + 4 + (0xF << 2)
label_171038:
    if (ctx->pc == 0x171038u) {
        ctx->pc = 0x171038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171034u;
        // 0x171038: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17103Cu;
        goto label_17103c;
    }
    ctx->pc = 0x171034u;
    {
        const bool branch_taken_0x171034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171034u;
        // 0x171038: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171034) {
            ctx->pc = 0x171074u;
            goto label_171074;
        }
    }
    ctx->pc = 0x17103Cu;
label_17103c:
    // 0x17103c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17103cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_171040:
    // 0x171040: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x171040u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_171044:
    // 0x171044: 0xc06b95c  jal         func_1AE570
label_171048:
    if (ctx->pc == 0x171048u) {
        ctx->pc = 0x171048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171044u;
        // 0x171048: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17104Cu;
        goto label_17104c;
    }
    ctx->pc = 0x171044u;
    SET_GPR_U32(ctx, 31, 0x17104Cu);
    ctx->pc = 0x171048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171044u;
    // 0x171048: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE570u;
    { ctx->pc = 0x1ae570; return; }
    ctx->pc = 0x17104Cu;
label_17104c:
    // 0x17104c: 0x2122021  addu        $a0, $s0, $s2
    ctx->pc = 0x17104cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_171050:
    // 0x171050: 0x2112821  addu        $a1, $s0, $s1
    ctx->pc = 0x171050u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_171054:
    // 0x171054: 0xa082003c  sb          $v0, 0x3C($a0)
    ctx->pc = 0x171054u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 60), (uint8_t)GPR_U32(ctx, 2));
label_171058:
    // 0x171058: 0x26520014  addiu       $s2, $s2, 0x14
    ctx->pc = 0x171058u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
label_17105c:
    // 0x17105c: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x17105cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
label_171060:
    // 0x171060: 0x8f838738  lw          $v1, -0x78C8($gp)
    ctx->pc = 0x171060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936376)));
label_171064:
    // 0x171064: 0xac830038  sw          $v1, 0x38($a0)
    ctx->pc = 0x171064u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 3));
label_171068:
    // 0x171068: 0xa0b10024  sb          $s1, 0x24($a1)
    ctx->pc = 0x171068u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 36), (uint8_t)GPR_U32(ctx, 17));
label_17106c:
    // 0x17106c: 0xa0a0002a  sb          $zero, 0x2A($a1)
    ctx->pc = 0x17106cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 42), (uint8_t)GPR_U32(ctx, 0));
label_171070:
    // 0x171070: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x171070u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_171074:
    // 0x171074: 0x0  nop
    ctx->pc = 0x171074u;
    // NOP
label_171078:
    // 0x171078: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x171078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_17107c:
    // 0x17107c: 0x223182b  sltu        $v1, $s1, $v1
    ctx->pc = 0x17107cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_171080:
    // 0x171080: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
label_171084:
    if (ctx->pc == 0x171084u) {
        ctx->pc = 0x171084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171080u;
        // 0x171084: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x171088u;
        goto label_171088;
    }
    ctx->pc = 0x171080u;
    {
        const bool branch_taken_0x171080 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x171084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171080u;
        // 0x171084: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171080) {
            ctx->pc = 0x17103Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17103c;
        }
    }
    ctx->pc = 0x171088u;
label_171088:
    // 0x171088: 0x2a210006  slti        $at, $s1, 0x6
    ctx->pc = 0x171088u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)6) ? 1 : 0);
label_17108c:
    // 0x17108c: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
label_171090:
    if (ctx->pc == 0x171090u) {
        ctx->pc = 0x171090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17108Cu;
        // 0x171090: 0x240400ff  addiu       $a0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x171094u;
        goto label_171094;
    }
    ctx->pc = 0x17108Cu;
    {
        const bool branch_taken_0x17108c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x171090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17108Cu;
        // 0x171090: 0x240400ff  addiu       $a0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17108c) {
            ctx->pc = 0x1710B4u;
            goto label_1710b4;
        }
    }
    ctx->pc = 0x171094u;
label_171094:
    // 0x171094: 0x2111821  addu        $v1, $s0, $s1
    ctx->pc = 0x171094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_171098:
    // 0x171098: 0xa0640024  sb          $a0, 0x24($v1)
    ctx->pc = 0x171098u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 36), (uint8_t)GPR_U32(ctx, 4));
label_17109c:
    // 0x17109c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x17109cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1710a0:
    // 0x1710a0: 0xa064002a  sb          $a0, 0x2A($v1)
    ctx->pc = 0x1710a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 42), (uint8_t)GPR_U32(ctx, 4));
label_1710a4:
    // 0x1710a4: 0x2a230006  slti        $v1, $s1, 0x6
    ctx->pc = 0x1710a4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)6) ? 1 : 0);
label_1710a8:
    // 0x1710a8: 0x0  nop
    ctx->pc = 0x1710a8u;
    // NOP
label_1710ac:
    // 0x1710ac: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_1710b0:
    if (ctx->pc == 0x1710B0u) {
        ctx->pc = 0x1710B4u;
        goto label_1710b4;
    }
    ctx->pc = 0x1710ACu;
    {
        const bool branch_taken_0x1710ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1710ac) {
            ctx->pc = 0x171094u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_171094;
        }
    }
    ctx->pc = 0x1710B4u;
label_1710b4:
    // 0x1710b4: 0x0  nop
    ctx->pc = 0x1710b4u;
    // NOP
label_1710b8:
    // 0x1710b8: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1710b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1710bc:
    // 0x1710bc: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_1710c0:
    if (ctx->pc == 0x1710C0u) {
        ctx->pc = 0x1710C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1710BCu;
        // 0x1710c0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1710C4u;
        goto label_1710c4;
    }
    ctx->pc = 0x1710BCu;
    {
        const bool branch_taken_0x1710bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1710C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1710BCu;
        // 0x1710c0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1710bc) {
            ctx->pc = 0x1710C8u;
            goto label_1710c8;
        }
    }
    ctx->pc = 0x1710C4u;
label_1710c4:
    // 0x1710c4: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x1710c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
label_1710c8:
    // 0x1710c8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1710c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1710cc:
    // 0x1710cc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1710ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1710d0:
    // 0x1710d0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1710d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1710d4:
    // 0x1710d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1710d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1710d8:
    // 0x1710d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1710d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1710dc:
    // 0x1710dc: 0x3e00008  jr          $ra
label_1710e0:
    if (ctx->pc == 0x1710E0u) {
        ctx->pc = 0x1710E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1710DCu;
        // 0x1710e0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1710E4u;
        goto label_1710e4;
    }
    ctx->pc = 0x1710DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1710E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1710DCu;
        // 0x1710e0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1710DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1710E4u;
label_1710e4:
    // 0x1710e4: 0x0  nop
    ctx->pc = 0x1710e4u;
    // NOP
label_1710e8:
    // 0x1710e8: 0x0  nop
    ctx->pc = 0x1710e8u;
    // NOP
label_1710ec:
    // 0x1710ec: 0x0  nop
    ctx->pc = 0x1710ecu;
    // NOP
label_1710f0:
    // 0x1710f0: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1710f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1710f4:
    // 0x1710f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1710f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1710f8:
    // 0x1710f8: 0x24a54480  addiu       $a1, $a1, 0x4480
    ctx->pc = 0x1710f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17536));
label_1710fc:
    // 0x1710fc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1710fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_171100:
    // 0x171100: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x171100u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_171104:
    // 0x171104: 0xaca4000c  sw          $a0, 0xC($a1)
    ctx->pc = 0x171104u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 4));
label_171108:
    // 0x171108: 0x2cc30002  sltiu       $v1, $a2, 0x2
    ctx->pc = 0x171108u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_17110c:
    // 0x17110c: 0x24a50058  addiu       $a1, $a1, 0x58
    ctx->pc = 0x17110cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 88));
label_171110:
    // 0x171110: 0x0  nop
    ctx->pc = 0x171110u;
    // NOP
label_171114:
    // 0x171114: 0x0  nop
    ctx->pc = 0x171114u;
    // NOP
label_171118:
    // 0x171118: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_17111c:
    if (ctx->pc == 0x17111Cu) {
        ctx->pc = 0x171120u;
        goto label_171120;
    }
    ctx->pc = 0x171118u;
    {
        const bool branch_taken_0x171118 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x171118) {
            ctx->pc = 0x171100u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_171100;
        }
    }
    ctx->pc = 0x171120u;
label_171120:
    // 0x171120: 0x3e00008  jr          $ra
label_171124:
    if (ctx->pc == 0x171124u) {
        ctx->pc = 0x171128u;
        goto label_171128;
    }
    ctx->pc = 0x171120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x171120u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x171128u;
label_171128:
    // 0x171128: 0x0  nop
    ctx->pc = 0x171128u;
    // NOP
label_17112c:
    // 0x17112c: 0x0  nop
    ctx->pc = 0x17112cu;
    // NOP
label_171130:
    // 0x171130: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x171130u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_171134:
    // 0x171134: 0x853021  addu        $a2, $a0, $a1
    ctx->pc = 0x171134u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_171138:
    // 0x171138: 0xa0c00100  sb          $zero, 0x100($a2)
    ctx->pc = 0x171138u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 256), (uint8_t)GPR_U32(ctx, 0));
label_17113c:
    // 0x17113c: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x17113cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_171140:
    // 0x171140: 0xa0c00110  sb          $zero, 0x110($a2)
    ctx->pc = 0x171140u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 272), (uint8_t)GPR_U32(ctx, 0));
label_171144:
    // 0x171144: 0x2ca30010  sltiu       $v1, $a1, 0x10
    ctx->pc = 0x171144u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_171148:
    // 0x171148: 0xa0c00101  sb          $zero, 0x101($a2)
    ctx->pc = 0x171148u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 257), (uint8_t)GPR_U32(ctx, 0));
label_17114c:
    // 0x17114c: 0xa0c00111  sb          $zero, 0x111($a2)
    ctx->pc = 0x17114cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 273), (uint8_t)GPR_U32(ctx, 0));
label_171150:
    // 0x171150: 0xa0c00102  sb          $zero, 0x102($a2)
    ctx->pc = 0x171150u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 258), (uint8_t)GPR_U32(ctx, 0));
label_171154:
    // 0x171154: 0xa0c00112  sb          $zero, 0x112($a2)
    ctx->pc = 0x171154u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 274), (uint8_t)GPR_U32(ctx, 0));
label_171158:
    // 0x171158: 0xa0c00103  sb          $zero, 0x103($a2)
    ctx->pc = 0x171158u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 259), (uint8_t)GPR_U32(ctx, 0));
label_17115c:
    // 0x17115c: 0xa0c00113  sb          $zero, 0x113($a2)
    ctx->pc = 0x17115cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 275), (uint8_t)GPR_U32(ctx, 0));
label_171160:
    // 0x171160: 0xa0c00104  sb          $zero, 0x104($a2)
    ctx->pc = 0x171160u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 260), (uint8_t)GPR_U32(ctx, 0));
label_171164:
    // 0x171164: 0xa0c00114  sb          $zero, 0x114($a2)
    ctx->pc = 0x171164u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 276), (uint8_t)GPR_U32(ctx, 0));
label_171168:
    // 0x171168: 0xa0c00105  sb          $zero, 0x105($a2)
    ctx->pc = 0x171168u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 261), (uint8_t)GPR_U32(ctx, 0));
label_17116c:
    // 0x17116c: 0xa0c00115  sb          $zero, 0x115($a2)
    ctx->pc = 0x17116cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 277), (uint8_t)GPR_U32(ctx, 0));
label_171170:
    // 0x171170: 0xa0c00106  sb          $zero, 0x106($a2)
    ctx->pc = 0x171170u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 262), (uint8_t)GPR_U32(ctx, 0));
label_171174:
    // 0x171174: 0xa0c00116  sb          $zero, 0x116($a2)
    ctx->pc = 0x171174u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 278), (uint8_t)GPR_U32(ctx, 0));
label_171178:
    // 0x171178: 0xa0c00107  sb          $zero, 0x107($a2)
    ctx->pc = 0x171178u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 263), (uint8_t)GPR_U32(ctx, 0));
label_17117c:
    // 0x17117c: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
label_171180:
    if (ctx->pc == 0x171180u) {
        ctx->pc = 0x171180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17117Cu;
        // 0x171180: 0xa0c00117  sb          $zero, 0x117($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 279), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x171184u;
        goto label_171184;
    }
    ctx->pc = 0x17117Cu;
    {
        const bool branch_taken_0x17117c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x171180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17117Cu;
        // 0x171180: 0xa0c00117  sb          $zero, 0x117($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 279), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17117c) {
            ctx->pc = 0x171134u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_171134;
        }
    }
    ctx->pc = 0x171184u;
label_171184:
    // 0x171184: 0xa0800120  sb          $zero, 0x120($a0)
    ctx->pc = 0x171184u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 288), (uint8_t)GPR_U32(ctx, 0));
label_171188:
    // 0x171188: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x171188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_17118c:
    // 0x17118c: 0xa0800128  sb          $zero, 0x128($a0)
    ctx->pc = 0x17118cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 296), (uint8_t)GPR_U32(ctx, 0));
label_171190:
    // 0x171190: 0xa0800121  sb          $zero, 0x121($a0)
    ctx->pc = 0x171190u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 289), (uint8_t)GPR_U32(ctx, 0));
label_171194:
    // 0x171194: 0xa0800129  sb          $zero, 0x129($a0)
    ctx->pc = 0x171194u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 297), (uint8_t)GPR_U32(ctx, 0));
label_171198:
    // 0x171198: 0xa0800122  sb          $zero, 0x122($a0)
    ctx->pc = 0x171198u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 290), (uint8_t)GPR_U32(ctx, 0));
label_17119c:
    // 0x17119c: 0xa080012a  sb          $zero, 0x12A($a0)
    ctx->pc = 0x17119cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 298), (uint8_t)GPR_U32(ctx, 0));
label_1711a0:
    // 0x1711a0: 0xa0800123  sb          $zero, 0x123($a0)
    ctx->pc = 0x1711a0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 291), (uint8_t)GPR_U32(ctx, 0));
label_1711a4:
    // 0x1711a4: 0xa080012b  sb          $zero, 0x12B($a0)
    ctx->pc = 0x1711a4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 299), (uint8_t)GPR_U32(ctx, 0));
label_1711a8:
    // 0x1711a8: 0xa0800124  sb          $zero, 0x124($a0)
    ctx->pc = 0x1711a8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 292), (uint8_t)GPR_U32(ctx, 0));
label_1711ac:
    // 0x1711ac: 0xa080012c  sb          $zero, 0x12C($a0)
    ctx->pc = 0x1711acu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 300), (uint8_t)GPR_U32(ctx, 0));
label_1711b0:
    // 0x1711b0: 0xa0800125  sb          $zero, 0x125($a0)
    ctx->pc = 0x1711b0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 293), (uint8_t)GPR_U32(ctx, 0));
label_1711b4:
    // 0x1711b4: 0xa080012d  sb          $zero, 0x12D($a0)
    ctx->pc = 0x1711b4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 301), (uint8_t)GPR_U32(ctx, 0));
label_1711b8:
    // 0x1711b8: 0xa0800126  sb          $zero, 0x126($a0)
    ctx->pc = 0x1711b8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 294), (uint8_t)GPR_U32(ctx, 0));
label_1711bc:
    // 0x1711bc: 0xa080012e  sb          $zero, 0x12E($a0)
    ctx->pc = 0x1711bcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 302), (uint8_t)GPR_U32(ctx, 0));
label_1711c0:
    // 0x1711c0: 0xa0800127  sb          $zero, 0x127($a0)
    ctx->pc = 0x1711c0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 295), (uint8_t)GPR_U32(ctx, 0));
label_1711c4:
    // 0x1711c4: 0xa080012f  sb          $zero, 0x12F($a0)
    ctx->pc = 0x1711c4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 303), (uint8_t)GPR_U32(ctx, 0));
label_1711c8:
    // 0x1711c8: 0xa0830130  sb          $v1, 0x130($a0)
    ctx->pc = 0x1711c8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 304), (uint8_t)GPR_U32(ctx, 3));
label_1711cc:
    // 0x1711cc: 0xa0830150  sb          $v1, 0x150($a0)
    ctx->pc = 0x1711ccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 336), (uint8_t)GPR_U32(ctx, 3));
label_1711d0:
    // 0x1711d0: 0xa0830170  sb          $v1, 0x170($a0)
    ctx->pc = 0x1711d0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 368), (uint8_t)GPR_U32(ctx, 3));
label_1711d4:
    // 0x1711d4: 0x3e00008  jr          $ra
label_1711d8:
    if (ctx->pc == 0x1711D8u) {
        ctx->pc = 0x1711D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1711D4u;
        // 0x1711d8: 0xa0830190  sb          $v1, 0x190($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 400), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1711DCu;
        goto label_1711dc;
    }
    ctx->pc = 0x1711D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1711D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1711D4u;
        // 0x1711d8: 0xa0830190  sb          $v1, 0x190($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 400), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1711D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1711DCu;
label_1711dc:
    // 0x1711dc: 0x0  nop
    ctx->pc = 0x1711dcu;
    // NOP
label_1711e0:
    // 0x1711e0: 0xa4800000  sh          $zero, 0x0($a0)
    ctx->pc = 0x1711e0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 0));
label_1711e4:
    // 0x1711e4: 0x2403007f  addiu       $v1, $zero, 0x7F
    ctx->pc = 0x1711e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_1711e8:
    // 0x1711e8: 0xa4800002  sh          $zero, 0x2($a0)
    ctx->pc = 0x1711e8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 0));
label_1711ec:
    // 0x1711ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1711ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1711f0:
    // 0x1711f0: 0xa4800004  sh          $zero, 0x4($a0)
    ctx->pc = 0x1711f0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 0));
label_1711f4:
    // 0x1711f4: 0xa0800006  sb          $zero, 0x6($a0)
    ctx->pc = 0x1711f4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6), (uint8_t)GPR_U32(ctx, 0));
label_1711f8:
    // 0x1711f8: 0xa0800007  sb          $zero, 0x7($a0)
    ctx->pc = 0x1711f8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 7), (uint8_t)GPR_U32(ctx, 0));
label_1711fc:
    // 0x1711fc: 0xa0800008  sb          $zero, 0x8($a0)
    ctx->pc = 0x1711fcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 8), (uint8_t)GPR_U32(ctx, 0));
label_171200:
    // 0x171200: 0xa0800009  sb          $zero, 0x9($a0)
    ctx->pc = 0x171200u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 9), (uint8_t)GPR_U32(ctx, 0));
label_171204:
    // 0x171204: 0xa080000a  sb          $zero, 0xA($a0)
    ctx->pc = 0x171204u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 10), (uint8_t)GPR_U32(ctx, 0));
label_171208:
    // 0x171208: 0xa080000b  sb          $zero, 0xB($a0)
    ctx->pc = 0x171208u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11), (uint8_t)GPR_U32(ctx, 0));
label_17120c:
    // 0x17120c: 0xa080000c  sb          $zero, 0xC($a0)
    ctx->pc = 0x17120cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 0));
label_171210:
    // 0x171210: 0xa080000d  sb          $zero, 0xD($a0)
    ctx->pc = 0x171210u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 13), (uint8_t)GPR_U32(ctx, 0));
label_171214:
    // 0x171214: 0xa080000e  sb          $zero, 0xE($a0)
    ctx->pc = 0x171214u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 14), (uint8_t)GPR_U32(ctx, 0));
label_171218:
    // 0x171218: 0xa080000f  sb          $zero, 0xF($a0)
    ctx->pc = 0x171218u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 15), (uint8_t)GPR_U32(ctx, 0));
label_17121c:
    // 0x17121c: 0xa0800010  sb          $zero, 0x10($a0)
    ctx->pc = 0x17121cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 0));
label_171220:
    // 0x171220: 0xa0830011  sb          $v1, 0x11($a0)
    ctx->pc = 0x171220u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 17), (uint8_t)GPR_U32(ctx, 3));
label_171224:
    // 0x171224: 0xa0830012  sb          $v1, 0x12($a0)
    ctx->pc = 0x171224u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 18), (uint8_t)GPR_U32(ctx, 3));
label_171228:
    // 0x171228: 0xa0830013  sb          $v1, 0x13($a0)
    ctx->pc = 0x171228u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 19), (uint8_t)GPR_U32(ctx, 3));
label_17122c:
    // 0x17122c: 0xa0830014  sb          $v1, 0x14($a0)
    ctx->pc = 0x17122cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 20), (uint8_t)GPR_U32(ctx, 3));
label_171230:
    // 0x171230: 0x862821  addu        $a1, $a0, $a2
    ctx->pc = 0x171230u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_171234:
    // 0x171234: 0xa0a00015  sb          $zero, 0x15($a1)
    ctx->pc = 0x171234u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 21), (uint8_t)GPR_U32(ctx, 0));
label_171238:
    // 0x171238: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x171238u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_17123c:
    // 0x17123c: 0xa0a00016  sb          $zero, 0x16($a1)
    ctx->pc = 0x17123cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 22), (uint8_t)GPR_U32(ctx, 0));
label_171240:
    // 0x171240: 0x28c30004  slti        $v1, $a2, 0x4
    ctx->pc = 0x171240u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
label_171244:
    // 0x171244: 0xa0a00017  sb          $zero, 0x17($a1)
    ctx->pc = 0x171244u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 23), (uint8_t)GPR_U32(ctx, 0));
label_171248:
    // 0x171248: 0xa0a00018  sb          $zero, 0x18($a1)
    ctx->pc = 0x171248u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 24), (uint8_t)GPR_U32(ctx, 0));
label_17124c:
    // 0x17124c: 0xa0a00019  sb          $zero, 0x19($a1)
    ctx->pc = 0x17124cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 25), (uint8_t)GPR_U32(ctx, 0));
label_171250:
    // 0x171250: 0xa0a0001a  sb          $zero, 0x1A($a1)
    ctx->pc = 0x171250u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 26), (uint8_t)GPR_U32(ctx, 0));
label_171254:
    // 0x171254: 0xa0a0001b  sb          $zero, 0x1B($a1)
    ctx->pc = 0x171254u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 27), (uint8_t)GPR_U32(ctx, 0));
label_171258:
    // 0x171258: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
label_17125c:
    if (ctx->pc == 0x17125Cu) {
        ctx->pc = 0x17125Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171258u;
        // 0x17125c: 0xa0a0001c  sb          $zero, 0x1C($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 28), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x171260u;
        goto label_171260;
    }
    ctx->pc = 0x171258u;
    {
        const bool branch_taken_0x171258 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17125Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171258u;
        // 0x17125c: 0xa0a0001c  sb          $zero, 0x1C($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 28), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171258) {
            ctx->pc = 0x171230u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_171230;
        }
    }
    ctx->pc = 0x171260u;
label_171260:
    // 0x171260: 0x28c1000c  slti        $at, $a2, 0xC
    ctx->pc = 0x171260u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)12) ? 1 : 0);
label_171264:
    // 0x171264: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
label_171268:
    if (ctx->pc == 0x171268u) {
        ctx->pc = 0x17126Cu;
        goto label_17126c;
    }
    ctx->pc = 0x171264u;
    {
        const bool branch_taken_0x171264 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x171264) {
            ctx->pc = 0x17128Cu;
            goto label_17128c;
        }
    }
    ctx->pc = 0x17126Cu;
label_17126c:
    // 0x17126c: 0x861821  addu        $v1, $a0, $a2
    ctx->pc = 0x17126cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_171270:
    // 0x171270: 0xa0600015  sb          $zero, 0x15($v1)
    ctx->pc = 0x171270u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 21), (uint8_t)GPR_U32(ctx, 0));
label_171274:
    // 0x171274: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x171274u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_171278:
    // 0x171278: 0x28c3000c  slti        $v1, $a2, 0xC
    ctx->pc = 0x171278u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)12) ? 1 : 0);
label_17127c:
    // 0x17127c: 0x0  nop
    ctx->pc = 0x17127cu;
    // NOP
label_171280:
    // 0x171280: 0x0  nop
    ctx->pc = 0x171280u;
    // NOP
label_171284:
    // 0x171284: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_171288:
    if (ctx->pc == 0x171288u) {
        ctx->pc = 0x17128Cu;
        goto label_17128c;
    }
    ctx->pc = 0x171284u;
    {
        const bool branch_taken_0x171284 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x171284) {
            ctx->pc = 0x17126Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17126c;
        }
    }
    ctx->pc = 0x17128Cu;
label_17128c:
    // 0x17128c: 0x0  nop
    ctx->pc = 0x17128cu;
    // NOP
label_171290:
    // 0x171290: 0x3e00008  jr          $ra
label_171294:
    if (ctx->pc == 0x171294u) {
        ctx->pc = 0x171298u;
        goto label_171298;
    }
    ctx->pc = 0x171290u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x171290u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x171298u;
label_171298:
    // 0x171298: 0x0  nop
    ctx->pc = 0x171298u;
    // NOP
label_17129c:
    // 0x17129c: 0x0  nop
    ctx->pc = 0x17129cu;
    // NOP
label_1712a0:
    // 0x1712a0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1712a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_1712a4:
    // 0x1712a4: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1712a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_1712a8:
    // 0x1712a8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1712a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1712ac:
    // 0x1712ac: 0x24421fc0  addiu       $v0, $v0, 0x1FC0
    ctx->pc = 0x1712acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8128));
label_1712b0:
    // 0x1712b0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1712b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_1712b4:
    // 0x1712b4: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x1712b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1712b8:
    // 0x1712b8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1712b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1712bc:
    // 0x1712bc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1712bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1712c0:
    // 0x1712c0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1712c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1712c4:
    // 0x1712c4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1712c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1712c8:
    // 0x1712c8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1712c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1712cc:
    // 0x1712cc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1712ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1712d0:
    // 0x1712d0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1712d0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1712d4:
    // 0x1712d4: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x1712d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1712d8:
    // 0x1712d8: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1712d8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1712dc:
    // 0x1712dc: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1712dcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_1712e0:
    // 0x1712e0: 0xc0590dc  jal         func_164370
label_1712e4:
    if (ctx->pc == 0x1712E4u) {
        ctx->pc = 0x1712E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1712E0u;
        // 0x1712e4: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1712E8u;
        goto label_1712e8;
    }
    ctx->pc = 0x1712E0u;
    SET_GPR_U32(ctx, 31, 0x1712E8u);
    ctx->pc = 0x1712E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1712E0u;
    // 0x1712e4: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164370u;
    { ctx->pc = 0x164370; return; }
    ctx->pc = 0x1712E8u;
label_1712e8:
    // 0x1712e8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1712e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1712ec:
    // 0x1712ec: 0x12000022  beqz        $s0, . + 4 + (0x22 << 2)
label_1712f0:
    if (ctx->pc == 0x1712F0u) {
        ctx->pc = 0x1712F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1712ECu;
        // 0x1712f0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1712F4u;
        goto label_1712f4;
    }
    ctx->pc = 0x1712ECu;
    {
        const bool branch_taken_0x1712ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1712F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1712ECu;
        // 0x1712f0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1712ec) {
            ctx->pc = 0x171378u;
            goto label_171378;
        }
    }
    ctx->pc = 0x1712F4u;
label_1712f4:
    // 0x1712f4: 0xc066e26  jal         func_19B898
label_1712f8:
    if (ctx->pc == 0x1712F8u) {
        ctx->pc = 0x1712F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1712F4u;
        // 0x1712f8: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1712FCu;
        goto label_1712fc;
    }
    ctx->pc = 0x1712F4u;
    SET_GPR_U32(ctx, 31, 0x1712FCu);
    ctx->pc = 0x1712F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1712F4u;
    // 0x1712f8: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x1712FCu;
label_1712fc:
    // 0x1712fc: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x1712fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_171300:
    // 0x171300: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x171300u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_171304:
    // 0x171304: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x171304u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_171308:
    // 0x171308: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x171308u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17130c:
    // 0x17130c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x17130cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_171310:
    // 0x171310: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x171310u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_171314:
    // 0x171314: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x171314u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_171318:
    // 0x171318: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x171318u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_17131c:
    // 0x17131c: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x17131cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_171320:
    // 0x171320: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x171320u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_171324:
    // 0x171324: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x171324u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_171328:
    // 0x171328: 0xc05c810  jal         func_172040
label_17132c:
    if (ctx->pc == 0x17132Cu) {
        ctx->pc = 0x17132Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171328u;
        // 0x17132c: 0xe7a00064  swc1        $f0, 0x64($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x171330u;
        goto label_171330;
    }
    ctx->pc = 0x171328u;
    SET_GPR_U32(ctx, 31, 0x171330u);
    ctx->pc = 0x17132Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171328u;
    // 0x17132c: 0xe7a00064  swc1        $f0, 0x64($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x172040u;
    { ctx->pc = 0x172040; return; }
    ctx->pc = 0x171330u;
label_171330:
    // 0x171330: 0xe614113c  swc1        $f20, 0x113C($s0)
    ctx->pc = 0x171330u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4412), bits); }
label_171334:
    // 0x171334: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x171334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
label_171338:
    // 0x171338: 0x244213a0  addiu       $v0, $v0, 0x13A0
    ctx->pc = 0x171338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5024));
label_17133c:
    // 0x17133c: 0x3c030017  lui         $v1, 0x17
    ctx->pc = 0x17133cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)23 << 16));
label_171340:
    // 0x171340: 0xe6141140  swc1        $f20, 0x1140($s0)
    ctx->pc = 0x171340u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4416), bits); }
label_171344:
    // 0x171344: 0x24631e80  addiu       $v1, $v1, 0x1E80
    ctx->pc = 0x171344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7808));
label_171348:
    // 0x171348: 0xae021998  sw          $v0, 0x1998($s0)
    ctx->pc = 0x171348u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6552), GPR_U32(ctx, 2));
label_17134c:
    // 0x17134c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17134cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_171350:
    // 0x171350: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x171350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_171354:
    // 0x171354: 0xae03199c  sw          $v1, 0x199C($s0)
    ctx->pc = 0x171354u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6556), GPR_U32(ctx, 3));
label_171358:
    // 0x171358: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x171358u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_17135c:
    // 0x17135c: 0x3c023f7d  lui         $v0, 0x3F7D
    ctx->pc = 0x17135cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16253 << 16));
label_171360:
    // 0x171360: 0x344370a4  ori         $v1, $v0, 0x70A4
    ctx->pc = 0x171360u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28836);
label_171364:
    // 0x171364: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x171364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_171368:
    // 0x171368: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x171368u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_17136c:
    // 0x17136c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x17136cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_171370:
    // 0x171370: 0xc05c678  jal         func_1719E0
label_171374:
    if (ctx->pc == 0x171374u) {
        ctx->pc = 0x171374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171370u;
        // 0x171374: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x171378u;
        goto label_171378;
    }
    ctx->pc = 0x171370u;
    SET_GPR_U32(ctx, 31, 0x171378u);
    ctx->pc = 0x171374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171370u;
    // 0x171374: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1719E0u;
    { ctx->pc = 0x1719e0; return; }
    ctx->pc = 0x171378u;
label_171378:
    // 0x171378: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x171378u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_17137c:
    // 0x17137c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x17137cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_171380:
    // 0x171380: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x171380u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_171384:
    // 0x171384: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x171384u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_171388:
    // 0x171388: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x171388u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_17138c:
    // 0x17138c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x17138cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_171390:
    // 0x171390: 0x3e00008  jr          $ra
label_171394:
    if (ctx->pc == 0x171394u) {
        ctx->pc = 0x171394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171390u;
        // 0x171394: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x171398u;
        goto label_171398;
    }
    ctx->pc = 0x171390u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171390u;
        // 0x171394: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x171390u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x171398u;
label_171398:
    // 0x171398: 0x0  nop
    ctx->pc = 0x171398u;
    // NOP
label_17139c:
    // 0x17139c: 0x0  nop
    ctx->pc = 0x17139cu;
    // NOP
label_1713a0:
    // 0x1713a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1713a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1713a4:
    // 0x1713a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1713a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1713a8:
    // 0x1713a8: 0x94851130  lhu         $a1, 0x1130($a0)
    ctx->pc = 0x1713a8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4400)));
label_1713ac:
    // 0x1713ac: 0x1ca00005  bgtz        $a1, . + 4 + (0x5 << 2)
label_1713b0:
    if (ctx->pc == 0x1713B0u) {
        ctx->pc = 0x1713B4u;
        goto label_1713b4;
    }
    ctx->pc = 0x1713ACu;
    {
        const bool branch_taken_0x1713ac = (GPR_S32(ctx, 5) > 0);
        if (branch_taken_0x1713ac) {
            ctx->pc = 0x1713C4u;
            goto label_1713c4;
        }
    }
    ctx->pc = 0x1713B4u;
label_1713b4:
    // 0x1713b4: 0xc0591f4  jal         func_1647D0
label_1713b8:
    if (ctx->pc == 0x1713B8u) {
        ctx->pc = 0x1713BCu;
        goto label_1713bc;
    }
    ctx->pc = 0x1713B4u;
    SET_GPR_U32(ctx, 31, 0x1713BCu);
    ctx->pc = 0x1647D0u;
    { ctx->pc = 0x1647d0; return; }
    ctx->pc = 0x1713BCu;
label_1713bc:
    // 0x1713bc: 0x10000047  b           . + 4 + (0x47 << 2)
label_1713c0:
    if (ctx->pc == 0x1713C0u) {
        ctx->pc = 0x1713C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1713BCu;
        // 0x1713c0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1713C4u;
        goto label_1713c4;
    }
    ctx->pc = 0x1713BCu;
    {
        const bool branch_taken_0x1713bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1713C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1713BCu;
        // 0x1713c0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1713bc) {
            ctx->pc = 0x1714DCu;
            goto label_1714dc;
        }
    }
    ctx->pc = 0x1713C4u;
label_1713c4:
    // 0x1713c4: 0x94831132  lhu         $v1, 0x1132($a0)
    ctx->pc = 0x1713c4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4402)));
label_1713c8:
    // 0x1713c8: 0x2861000b  slti        $at, $v1, 0xB
    ctx->pc = 0x1713c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)11) ? 1 : 0);
label_1713cc:
    // 0x1713cc: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
label_1713d0:
    if (ctx->pc == 0x1713D0u) {
        ctx->pc = 0x1713D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1713CCu;
        // 0x1713d0: 0x28a10004  slti        $at, $a1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1713D4u;
        goto label_1713d4;
    }
    ctx->pc = 0x1713CCu;
    {
        const bool branch_taken_0x1713cc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1713D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1713CCu;
        // 0x1713d0: 0x28a10004  slti        $at, $a1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1713cc) {
            ctx->pc = 0x1713E8u;
            goto label_1713e8;
        }
    }
    ctx->pc = 0x1713D4u;
label_1713d4:
    // 0x1713d4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1713d8:
    if (ctx->pc == 0x1713D8u) {
        ctx->pc = 0x1713D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1713D4u;
        // 0x1713d8: 0x24a3fffc  addiu       $v1, $a1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1713DCu;
        goto label_1713dc;
    }
    ctx->pc = 0x1713D4u;
    {
        const bool branch_taken_0x1713d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1713D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1713D4u;
        // 0x1713d8: 0x24a3fffc  addiu       $v1, $a1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1713d4) {
            ctx->pc = 0x1713E4u;
            goto label_1713e4;
        }
    }
    ctx->pc = 0x1713DCu;
label_1713dc:
    // 0x1713dc: 0x10000002  b           . + 4 + (0x2 << 2)
label_1713e0:
    if (ctx->pc == 0x1713E0u) {
        ctx->pc = 0x1713E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1713DCu;
        // 0x1713e0: 0xa4801130  sh          $zero, 0x1130($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 4400), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1713E4u;
        goto label_1713e4;
    }
    ctx->pc = 0x1713DCu;
    {
        const bool branch_taken_0x1713dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1713E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1713DCu;
        // 0x1713e0: 0xa4801130  sh          $zero, 0x1130($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 4400), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1713dc) {
            ctx->pc = 0x1713E8u;
            goto label_1713e8;
        }
    }
    ctx->pc = 0x1713E4u;
label_1713e4:
    // 0x1713e4: 0xa4831130  sh          $v1, 0x1130($a0)
    ctx->pc = 0x1713e4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4400), (uint16_t)GPR_U32(ctx, 3));
label_1713e8:
    // 0x1713e8: 0x94871132  lhu         $a3, 0x1132($a0)
    ctx->pc = 0x1713e8u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4402)));
label_1713ec:
    // 0x1713ec: 0x3c063ecc  lui         $a2, 0x3ECC
    ctx->pc = 0x1713ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16076 << 16));
label_1713f0:
    // 0x1713f0: 0x34c6cccd  ori         $a2, $a2, 0xCCCD
    ctx->pc = 0x1713f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)52429);
label_1713f4:
    // 0x1713f4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1713f4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1713f8:
    // 0x1713f8: 0x44861000  mtc1        $a2, $f2
    ctx->pc = 0x1713f8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1713fc:
    // 0x1713fc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1713fcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_171400:
    // 0x171400: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x171400u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_171404:
    // 0x171404: 0x24e60001  addiu       $a2, $a3, 0x1
    ctx->pc = 0x171404u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_171408:
    // 0x171408: 0x1000002e  b           . + 4 + (0x2E << 2)
label_17140c:
    if (ctx->pc == 0x17140Cu) {
        ctx->pc = 0x17140Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171408u;
        // 0x17140c: 0xa4861132  sh          $a2, 0x1132($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 4402), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x171410u;
        goto label_171410;
    }
    ctx->pc = 0x171408u;
    {
        const bool branch_taken_0x171408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17140Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171408u;
        // 0x17140c: 0xa4861132  sh          $a2, 0x1132($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 4402), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171408) {
            ctx->pc = 0x1714C4u;
            goto label_1714c4;
        }
    }
    ctx->pc = 0x171410u;
label_171410:
    // 0x171410: 0x853021  addu        $a2, $a0, $a1
    ctx->pc = 0x171410u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_171414:
    // 0x171414: 0x24c91150  addiu       $t1, $a2, 0x1150
    ctx->pc = 0x171414u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 4432));
label_171418:
    // 0x171418: 0x24e80090  addiu       $t0, $a3, 0x90
    ctx->pc = 0x171418u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 144));
label_17141c:
    // 0x17141c: 0x24ea00a0  addiu       $t2, $a3, 0xA0
    ctx->pc = 0x17141cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), 160));
label_171420:
    // 0x171420: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x171420u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_171424:
    // 0x171424: 0x0  nop
    ctx->pc = 0x171424u;
    // NOP
label_171428:
    // 0x171428: 0xc5200004  lwc1        $f0, 0x4($t1)
    ctx->pc = 0x171428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17142c:
    // 0x17142c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x17142cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_171430:
    // 0x171430: 0xe5200004  swc1        $f0, 0x4($t1)
    ctx->pc = 0x171430u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4), bits); }
label_171434:
    // 0x171434: 0xc5010000  lwc1        $f1, 0x0($t0)
    ctx->pc = 0x171434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_171438:
    // 0x171438: 0xc5200000  lwc1        $f0, 0x0($t1)
    ctx->pc = 0x171438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17143c:
    // 0x17143c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x17143cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_171440:
    // 0x171440: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x171440u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
label_171444:
    // 0x171444: 0xc5210004  lwc1        $f1, 0x4($t1)
    ctx->pc = 0x171444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_171448:
    // 0x171448: 0xc5000004  lwc1        $f0, 0x4($t0)
    ctx->pc = 0x171448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17144c:
    // 0x17144c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x17144cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_171450:
    // 0x171450: 0xe5000004  swc1        $f0, 0x4($t0)
    ctx->pc = 0x171450u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
label_171454:
    // 0x171454: 0xc5210008  lwc1        $f1, 0x8($t1)
    ctx->pc = 0x171454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_171458:
    // 0x171458: 0xc5000008  lwc1        $f0, 0x8($t0)
    ctx->pc = 0x171458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17145c:
    // 0x17145c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x17145cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_171460:
    // 0x171460: 0xe5000008  swc1        $f0, 0x8($t0)
    ctx->pc = 0x171460u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
label_171464:
    // 0x171464: 0x94861132  lhu         $a2, 0x1132($a0)
    ctx->pc = 0x171464u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4402)));
label_171468:
    // 0x171468: 0x28c1002e  slti        $at, $a2, 0x2E
    ctx->pc = 0x171468u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)46) ? 1 : 0);
label_17146c:
    // 0x17146c: 0x1420000a  bnez        $at, . + 4 + (0xA << 2)
label_171470:
    if (ctx->pc == 0x171470u) {
        ctx->pc = 0x171474u;
        goto label_171474;
    }
    ctx->pc = 0x17146Cu;
    {
        const bool branch_taken_0x17146c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x17146c) {
            ctx->pc = 0x171498u;
            goto label_171498;
        }
    }
    ctx->pc = 0x171474u;
label_171474:
    // 0x171474: 0x8d460000  lw          $a2, 0x0($t2)
    ctx->pc = 0x171474u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_171478:
    // 0x171478: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x171478u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_17147c:
    // 0x17147c: 0xad460000  sw          $a2, 0x0($t2)
    ctx->pc = 0x17147cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 6));
label_171480:
    // 0x171480: 0x8d460004  lw          $a2, 0x4($t2)
    ctx->pc = 0x171480u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
label_171484:
    // 0x171484: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x171484u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_171488:
    // 0x171488: 0xad460004  sw          $a2, 0x4($t2)
    ctx->pc = 0x171488u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 6));
label_17148c:
    // 0x17148c: 0x8d460008  lw          $a2, 0x8($t2)
    ctx->pc = 0x17148cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
label_171490:
    // 0x171490: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x171490u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_171494:
    // 0x171494: 0xad460008  sw          $a2, 0x8($t2)
    ctx->pc = 0x171494u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 6));
label_171498:
    // 0x171498: 0x94871130  lhu         $a3, 0x1130($a0)
    ctx->pc = 0x171498u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4400)));
label_17149c:
    // 0x17149c: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x17149cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
label_1714a0:
    // 0x1714a0: 0x25080020  addiu       $t0, $t0, 0x20
    ctx->pc = 0x1714a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
label_1714a4:
    // 0x1714a4: 0x29860040  slti        $a2, $t4, 0x40
    ctx->pc = 0x1714a4u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 12) < (int64_t)(int32_t)64) ? 1 : 0);
label_1714a8:
    // 0x1714a8: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x1714a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
label_1714ac:
    // 0x1714ac: 0xad47000c  sw          $a3, 0xC($t2)
    ctx->pc = 0x1714acu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 12), GPR_U32(ctx, 7));
label_1714b0:
    // 0x1714b0: 0x14c0ffdc  bnez        $a2, . + 4 + (-0x24 << 2)
label_1714b4:
    if (ctx->pc == 0x1714B4u) {
        ctx->pc = 0x1714B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1714B0u;
        // 0x1714b4: 0x254a0020  addiu       $t2, $t2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1714B8u;
        goto label_1714b8;
    }
    ctx->pc = 0x1714B0u;
    {
        const bool branch_taken_0x1714b0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1714B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1714B0u;
        // 0x1714b4: 0x254a0020  addiu       $t2, $t2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1714b0) {
            ctx->pc = 0x171424u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_171424;
        }
    }
    ctx->pc = 0x1714B8u;
label_1714b8:
    // 0x1714b8: 0x24630820  addiu       $v1, $v1, 0x820
    ctx->pc = 0x1714b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2080));
label_1714bc:
    // 0x1714bc: 0x24a50400  addiu       $a1, $a1, 0x400
    ctx->pc = 0x1714bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1024));
label_1714c0:
    // 0x1714c0: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x1714c0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_1714c4:
    // 0x1714c4: 0x0  nop
    ctx->pc = 0x1714c4u;
    // NOP
label_1714c8:
    // 0x1714c8: 0x94861138  lhu         $a2, 0x1138($a0)
    ctx->pc = 0x1714c8u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4408)));
label_1714cc:
    // 0x1714cc: 0x166302b  sltu        $a2, $t3, $a2
    ctx->pc = 0x1714ccu;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_1714d0:
    // 0x1714d0: 0x14c0ffcf  bnez        $a2, . + 4 + (-0x31 << 2)
label_1714d4:
    if (ctx->pc == 0x1714D4u) {
        ctx->pc = 0x1714D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1714D0u;
        // 0x1714d4: 0x833821  addu        $a3, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1714D8u;
        goto label_1714d8;
    }
    ctx->pc = 0x1714D0u;
    {
        const bool branch_taken_0x1714d0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1714D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1714D0u;
        // 0x1714d4: 0x833821  addu        $a3, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1714d0) {
            ctx->pc = 0x171410u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_171410;
        }
    }
    ctx->pc = 0x1714D8u;
label_1714d8:
    // 0x1714d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1714d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1714dc:
    // 0x1714dc: 0x3e00008  jr          $ra
label_1714e0:
    if (ctx->pc == 0x1714E0u) {
        ctx->pc = 0x1714E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1714DCu;
        // 0x1714e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1714E4u;
        goto label_1714e4;
    }
    ctx->pc = 0x1714DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1714E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1714DCu;
        // 0x1714e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1714DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1714E4u;
label_1714e4:
    // 0x1714e4: 0x0  nop
    ctx->pc = 0x1714e4u;
    // NOP
label_1714e8:
    // 0x1714e8: 0x0  nop
    ctx->pc = 0x1714e8u;
    // NOP
label_1714ec:
    // 0x1714ec: 0x0  nop
    ctx->pc = 0x1714ecu;
    // NOP
label_1714f0:
    // 0x1714f0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1714f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1714f4:
    // 0x1714f4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1714f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_1714f8:
    // 0x1714f8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1714f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_1714fc:
    // 0x1714fc: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1714fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_171500:
    // 0x171500: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x171500u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_171504:
    // 0x171504: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x171504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_171508:
    // 0x171508: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x171508u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_17150c:
    // 0x17150c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x17150cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_171510:
    // 0x171510: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x171510u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_171514:
    // 0x171514: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x171514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_171518:
    // 0x171518: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x171518u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_17151c:
    // 0x17151c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x17151cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_171520:
    // 0x171520: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x171520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_171524:
    // 0x171524: 0xc0590dc  jal         func_164370
label_171528:
    if (ctx->pc == 0x171528u) {
        ctx->pc = 0x171528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171524u;
        // 0x171528: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x17152Cu;
        goto label_17152c;
    }
    ctx->pc = 0x171524u;
    SET_GPR_U32(ctx, 31, 0x17152Cu);
    ctx->pc = 0x171528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171524u;
    // 0x171528: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x164370u;
    { ctx->pc = 0x164370; return; }
    ctx->pc = 0x17152Cu;
label_17152c:
    // 0x17152c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17152cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_171530:
    // 0x171530: 0x1200001d  beqz        $s0, . + 4 + (0x1D << 2)
label_171534:
    if (ctx->pc == 0x171534u) {
        ctx->pc = 0x171534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171530u;
        // 0x171534: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x171538u;
        goto label_171538;
    }
    ctx->pc = 0x171530u;
    {
        const bool branch_taken_0x171530 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x171534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171530u;
        // 0x171534: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171530) {
            ctx->pc = 0x1715A8u;
            goto label_1715a8;
        }
    }
    ctx->pc = 0x171538u;
label_171538:
    // 0x171538: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x171538u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_17153c:
    // 0x17153c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x17153cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_171540:
    // 0x171540: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x171540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_171544:
    // 0x171544: 0x240800ff  addiu       $t0, $zero, 0xFF
    ctx->pc = 0x171544u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_171548:
    // 0x171548: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x171548u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17154c:
    // 0x17154c: 0xc05c810  jal         func_172040
label_171550:
    if (ctx->pc == 0x171550u) {
        ctx->pc = 0x171550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17154Cu;
        // 0x171550: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x171554u;
        goto label_171554;
    }
    ctx->pc = 0x17154Cu;
    SET_GPR_U32(ctx, 31, 0x171554u);
    ctx->pc = 0x171550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17154Cu;
    // 0x171550: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x172040u;
    { ctx->pc = 0x172040; return; }
    ctx->pc = 0x171554u;
label_171554:
    // 0x171554: 0xe614113c  swc1        $f20, 0x113C($s0)
    ctx->pc = 0x171554u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4412), bits); }
label_171558:
    // 0x171558: 0x26041950  addiu       $a0, $s0, 0x1950
    ctx->pc = 0x171558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 6480));
label_17155c:
    // 0x17155c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x17155cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_171560:
    // 0x171560: 0xc066e26  jal         func_19B898
label_171564:
    if (ctx->pc == 0x171564u) {
        ctx->pc = 0x171564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171560u;
        // 0x171564: 0xe6141140  swc1        $f20, 0x1140($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4416), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x171568u;
        goto label_171568;
    }
    ctx->pc = 0x171560u;
    SET_GPR_U32(ctx, 31, 0x171568u);
    ctx->pc = 0x171564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171560u;
    // 0x171564: 0xe6141140  swc1        $f20, 0x1140($s0) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4416), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x171568u;
label_171568:
    // 0x171568: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x171568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
label_17156c:
    // 0x17156c: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x17156cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
label_171570:
    // 0x171570: 0x244215d0  addiu       $v0, $v0, 0x15D0
    ctx->pc = 0x171570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5584));
label_171574:
    // 0x171574: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x171574u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_171578:
    // 0x171578: 0xae021998  sw          $v0, 0x1998($s0)
    ctx->pc = 0x171578u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6552), GPR_U32(ctx, 2));
label_17157c:
    // 0x17157c: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x17157cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_171580:
    // 0x171580: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x171580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
label_171584:
    // 0x171584: 0x24421e80  addiu       $v0, $v0, 0x1E80
    ctx->pc = 0x171584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7808));
label_171588:
    // 0x171588: 0xae02199c  sw          $v0, 0x199C($s0)
    ctx->pc = 0x171588u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6556), GPR_U32(ctx, 2));
label_17158c:
    // 0x17158c: 0x3c023f7d  lui         $v0, 0x3F7D
    ctx->pc = 0x17158cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16253 << 16));
label_171590:
    // 0x171590: 0x344270a4  ori         $v0, $v0, 0x70A4
    ctx->pc = 0x171590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28836);
label_171594:
    // 0x171594: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x171594u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_171598:
    // 0x171598: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x171598u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_17159c:
    // 0x17159c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x17159cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_1715a0:
    // 0x1715a0: 0xc05c678  jal         func_1719E0
label_1715a4:
    if (ctx->pc == 0x1715A4u) {
        ctx->pc = 0x1715A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1715A0u;
        // 0x1715a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1715A8u;
        goto label_1715a8;
    }
    ctx->pc = 0x1715A0u;
    SET_GPR_U32(ctx, 31, 0x1715A8u);
    ctx->pc = 0x1715A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1715A0u;
    // 0x1715a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1719E0u;
    { ctx->pc = 0x1719e0; return; }
    ctx->pc = 0x1715A8u;
label_1715a8:
    // 0x1715a8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1715a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1715ac:
    // 0x1715ac: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1715acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1715b0:
    // 0x1715b0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1715b0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1715b4:
    // 0x1715b4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1715b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1715b8:
    // 0x1715b8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1715b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1715bc:
    // 0x1715bc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1715bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1715c0:
    // 0x1715c0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1715c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1715c4:
    // 0x1715c4: 0x3e00008  jr          $ra
label_1715c8:
    if (ctx->pc == 0x1715C8u) {
        ctx->pc = 0x1715C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1715C4u;
        // 0x1715c8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1715CCu;
        goto label_1715cc;
    }
    ctx->pc = 0x1715C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1715C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1715C4u;
        // 0x1715c8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1715C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1715CCu;
label_1715cc:
    // 0x1715cc: 0x0  nop
    ctx->pc = 0x1715ccu;
    // NOP
label_1715d0:
    // 0x1715d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1715d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1715d4:
    // 0x1715d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1715d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1715d8:
    // 0x1715d8: 0x94831132  lhu         $v1, 0x1132($a0)
    ctx->pc = 0x1715d8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4402)));
label_1715dc:
    // 0x1715dc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1715dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1715e0:
    // 0x1715e0: 0xa4831132  sh          $v1, 0x1132($a0)
    ctx->pc = 0x1715e0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4402), (uint16_t)GPR_U32(ctx, 3));
label_1715e4:
    // 0x1715e4: 0x94831132  lhu         $v1, 0x1132($a0)
    ctx->pc = 0x1715e4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4402)));
label_1715e8:
    // 0x1715e8: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x1715e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_1715ec:
    // 0x1715ec: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
label_1715f0:
    if (ctx->pc == 0x1715F0u) {
        ctx->pc = 0x1715F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1715ECu;
        // 0x1715f0: 0x3c034140  lui         $v1, 0x4140 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16704 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1715F4u;
        goto label_1715f4;
    }
    ctx->pc = 0x1715ECu;
    {
        const bool branch_taken_0x1715ec = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1715F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1715ECu;
        // 0x1715f0: 0x3c034140  lui         $v1, 0x4140 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16704 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1715ec) {
            ctx->pc = 0x171604u;
            goto label_171604;
        }
    }
    ctx->pc = 0x1715F4u;
label_1715f4:
    // 0x1715f4: 0xc0591f4  jal         func_1647D0
label_1715f8:
    if (ctx->pc == 0x1715F8u) {
        ctx->pc = 0x1715FCu;
        goto label_1715fc;
    }
    ctx->pc = 0x1715F4u;
    SET_GPR_U32(ctx, 31, 0x1715FCu);
    ctx->pc = 0x1647D0u;
    { ctx->pc = 0x1647d0; return; }
    ctx->pc = 0x1715FCu;
label_1715fc:
    // 0x1715fc: 0x10000057  b           . + 4 + (0x57 << 2)
label_171600:
    if (ctx->pc == 0x171600u) {
        ctx->pc = 0x171600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1715FCu;
        // 0x171600: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x171604u;
        goto label_171604;
    }
    ctx->pc = 0x1715FCu;
    {
        const bool branch_taken_0x1715fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1715FCu;
        // 0x171600: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1715fc) {
            ctx->pc = 0x17175Cu;
            { ctx->pc = 0x17175c; return; }
        }
    }
    ctx->pc = 0x171604u;
label_171604:
    // 0x171604: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x171604u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_171608:
    // 0x171608: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x171608u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_17160c:
    // 0x17160c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x17160cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_171610:
    // 0x171610: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x171610u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_171614:
    // 0x171614: 0x1000004c  b           . + 4 + (0x4C << 2)
label_171618:
    if (ctx->pc == 0x171618u) {
        ctx->pc = 0x171618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171614u;
        // 0x171618: 0x3c063f80  lui         $a2, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17161Cu;
        goto label_17161c;
    }
    ctx->pc = 0x171614u;
    {
        const bool branch_taken_0x171614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171614u;
        // 0x171618: 0x3c063f80  lui         $a2, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171614) {
            ctx->pc = 0x171748u;
            { ctx->pc = 0x171748; return; }
        }
    }
    ctx->pc = 0x17161Cu;
label_17161c:
    // 0x17161c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x17161cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_171620:
    // 0x171620: 0x24670090  addiu       $a3, $v1, 0x90
    ctx->pc = 0x171620u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 144));
label_171624:
    // 0x171624: 0x246800a0  addiu       $t0, $v1, 0xA0
    ctx->pc = 0x171624u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
label_171628:
    // 0x171628: 0x14c6821  addu        $t5, $t2, $t4
    ctx->pc = 0x171628u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 12)));
label_17162c:
    // 0x17162c: 0xc4801950  lwc1        $f0, 0x1950($a0)
    ctx->pc = 0x17162cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 6480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_171630:
    // 0x171630: 0x46020043  div.s       $f1, $f0, $f2
    ctx->pc = 0x171630u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[1] = ctx->f[0] / ctx->f[2];
label_171634:
    // 0x171634: 0x0  nop
    ctx->pc = 0x171634u;
    // NOP
label_171638:
    // 0x171638: 0x0  nop
    ctx->pc = 0x171638u;
    // NOP
label_17163c:
    // 0x17163c: 0x5a00004  bltz        $t5, . + 4 + (0x4 << 2)
label_171640:
    if (ctx->pc == 0x171640u) {
        ctx->pc = 0x171644u;
        goto label_171644;
    }
    ctx->pc = 0x17163Cu;
    {
        const bool branch_taken_0x17163c = (GPR_S32(ctx, 13) < 0);
        if (branch_taken_0x17163c) {
            ctx->pc = 0x171650u;
            { ctx->pc = 0x171650; return; }
        }
    }
    ctx->pc = 0x171644u;
label_171644:
    // 0x171644: 0x448d0000  mtc1        $t5, $f0
    ctx->pc = 0x171644u;
    { uint32_t bits = GPR_U32(ctx, 13); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_171648:
    // 0x171648: 0x10000008  b           . + 4 + (0x8 << 2)
label_17164c:
    if (ctx->pc == 0x17164Cu) {
        ctx->pc = 0x17164Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171648u;
        // 0x17164c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x171650u;
        { ctx->pc = 0x171650; return; }
    }
    ctx->pc = 0x171648u;
    {
        const bool branch_taken_0x171648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17164Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171648u;
        // 0x17164c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x171648) {
            ctx->pc = 0x17166Cu;
            { ctx->pc = 0x17166c; return; }
        }
    }
    ctx->pc = 0x171650u;
    ctx->pc = 0x171650u;
    return;
}

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

// Function: FUN_0019b850
// Address: 0x19b850 - 0x29b858
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b850_part481(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x285e50u: goto label_285e50;
        case 0x285e54u: goto label_285e54;
        case 0x285e58u: goto label_285e58;
        case 0x285e5cu: goto label_285e5c;
        case 0x285e60u: goto label_285e60;
        case 0x285e64u: goto label_285e64;
        case 0x285e68u: goto label_285e68;
        case 0x285e6cu: goto label_285e6c;
        case 0x285e70u: goto label_285e70;
        case 0x285e74u: goto label_285e74;
        case 0x285e78u: goto label_285e78;
        case 0x285e7cu: goto label_285e7c;
        case 0x285e80u: goto label_285e80;
        case 0x285e84u: goto label_285e84;
        case 0x285e88u: goto label_285e88;
        case 0x285e8cu: goto label_285e8c;
        case 0x285e90u: goto label_285e90;
        case 0x285e94u: goto label_285e94;
        case 0x285e98u: goto label_285e98;
        case 0x285e9cu: goto label_285e9c;
        case 0x285ea0u: goto label_285ea0;
        case 0x285ea4u: goto label_285ea4;
        case 0x285ea8u: goto label_285ea8;
        case 0x285eacu: goto label_285eac;
        case 0x285eb0u: goto label_285eb0;
        case 0x285eb4u: goto label_285eb4;
        case 0x285eb8u: goto label_285eb8;
        case 0x285ebcu: goto label_285ebc;
        case 0x285ec0u: goto label_285ec0;
        case 0x285ec4u: goto label_285ec4;
        case 0x285ec8u: goto label_285ec8;
        case 0x285eccu: goto label_285ecc;
        case 0x285ed0u: goto label_285ed0;
        case 0x285ed4u: goto label_285ed4;
        case 0x285ed8u: goto label_285ed8;
        case 0x285edcu: goto label_285edc;
        case 0x285ee0u: goto label_285ee0;
        case 0x285ee4u: goto label_285ee4;
        case 0x285ee8u: goto label_285ee8;
        case 0x285eecu: goto label_285eec;
        case 0x285ef0u: goto label_285ef0;
        case 0x285ef4u: goto label_285ef4;
        case 0x285ef8u: goto label_285ef8;
        case 0x285efcu: goto label_285efc;
        case 0x285f00u: goto label_285f00;
        case 0x285f04u: goto label_285f04;
        case 0x285f08u: goto label_285f08;
        case 0x285f0cu: goto label_285f0c;
        case 0x285f10u: goto label_285f10;
        case 0x285f14u: goto label_285f14;
        case 0x285f18u: goto label_285f18;
        case 0x285f1cu: goto label_285f1c;
        case 0x285f20u: goto label_285f20;
        case 0x285f24u: goto label_285f24;
        case 0x285f28u: goto label_285f28;
        case 0x285f2cu: goto label_285f2c;
        case 0x285f30u: goto label_285f30;
        case 0x285f34u: goto label_285f34;
        case 0x285f38u: goto label_285f38;
        case 0x285f3cu: goto label_285f3c;
        case 0x285f40u: goto label_285f40;
        case 0x285f44u: goto label_285f44;
        case 0x285f48u: goto label_285f48;
        case 0x285f4cu: goto label_285f4c;
        case 0x285f50u: goto label_285f50;
        case 0x285f54u: goto label_285f54;
        case 0x285f58u: goto label_285f58;
        case 0x285f5cu: goto label_285f5c;
        case 0x285f60u: goto label_285f60;
        case 0x285f64u: goto label_285f64;
        case 0x285f68u: goto label_285f68;
        case 0x285f6cu: goto label_285f6c;
        case 0x285f70u: goto label_285f70;
        case 0x285f74u: goto label_285f74;
        case 0x285f78u: goto label_285f78;
        case 0x285f7cu: goto label_285f7c;
        case 0x285f80u: goto label_285f80;
        case 0x285f84u: goto label_285f84;
        case 0x285f88u: goto label_285f88;
        case 0x285f8cu: goto label_285f8c;
        case 0x285f90u: goto label_285f90;
        case 0x285f94u: goto label_285f94;
        case 0x285f98u: goto label_285f98;
        case 0x285f9cu: goto label_285f9c;
        case 0x285fa0u: goto label_285fa0;
        case 0x285fa4u: goto label_285fa4;
        case 0x285fa8u: goto label_285fa8;
        case 0x285facu: goto label_285fac;
        case 0x285fb0u: goto label_285fb0;
        case 0x285fb4u: goto label_285fb4;
        case 0x285fb8u: goto label_285fb8;
        case 0x285fbcu: goto label_285fbc;
        case 0x285fc0u: goto label_285fc0;
        case 0x285fc4u: goto label_285fc4;
        case 0x285fc8u: goto label_285fc8;
        case 0x285fccu: goto label_285fcc;
        case 0x285fd0u: goto label_285fd0;
        case 0x285fd4u: goto label_285fd4;
        case 0x285fd8u: goto label_285fd8;
        case 0x285fdcu: goto label_285fdc;
        case 0x285fe0u: goto label_285fe0;
        case 0x285fe4u: goto label_285fe4;
        case 0x285fe8u: goto label_285fe8;
        case 0x285fecu: goto label_285fec;
        case 0x285ff0u: goto label_285ff0;
        case 0x285ff4u: goto label_285ff4;
        case 0x285ff8u: goto label_285ff8;
        case 0x285ffcu: goto label_285ffc;
        case 0x286000u: goto label_286000;
        case 0x286004u: goto label_286004;
        case 0x286008u: goto label_286008;
        case 0x28600cu: goto label_28600c;
        case 0x286010u: goto label_286010;
        case 0x286014u: goto label_286014;
        case 0x286018u: goto label_286018;
        case 0x28601cu: goto label_28601c;
        case 0x286020u: goto label_286020;
        case 0x286024u: goto label_286024;
        case 0x286028u: goto label_286028;
        case 0x28602cu: goto label_28602c;
        case 0x286030u: goto label_286030;
        case 0x286034u: goto label_286034;
        case 0x286038u: goto label_286038;
        case 0x28603cu: goto label_28603c;
        case 0x286040u: goto label_286040;
        case 0x286044u: goto label_286044;
        case 0x286048u: goto label_286048;
        case 0x28604cu: goto label_28604c;
        case 0x286050u: goto label_286050;
        case 0x286054u: goto label_286054;
        case 0x286058u: goto label_286058;
        case 0x28605cu: goto label_28605c;
        case 0x286060u: goto label_286060;
        case 0x286064u: goto label_286064;
        case 0x286068u: goto label_286068;
        case 0x28606cu: goto label_28606c;
        case 0x286070u: goto label_286070;
        case 0x286074u: goto label_286074;
        case 0x286078u: goto label_286078;
        case 0x28607cu: goto label_28607c;
        case 0x286080u: goto label_286080;
        case 0x286084u: goto label_286084;
        case 0x286088u: goto label_286088;
        case 0x28608cu: goto label_28608c;
        case 0x286090u: goto label_286090;
        case 0x286094u: goto label_286094;
        case 0x286098u: goto label_286098;
        case 0x28609cu: goto label_28609c;
        case 0x2860a0u: goto label_2860a0;
        case 0x2860a4u: goto label_2860a4;
        case 0x2860a8u: goto label_2860a8;
        case 0x2860acu: goto label_2860ac;
        case 0x2860b0u: goto label_2860b0;
        case 0x2860b4u: goto label_2860b4;
        case 0x2860b8u: goto label_2860b8;
        case 0x2860bcu: goto label_2860bc;
        case 0x2860c0u: goto label_2860c0;
        case 0x2860c4u: goto label_2860c4;
        case 0x2860c8u: goto label_2860c8;
        case 0x2860ccu: goto label_2860cc;
        case 0x2860d0u: goto label_2860d0;
        case 0x2860d4u: goto label_2860d4;
        case 0x2860d8u: goto label_2860d8;
        case 0x2860dcu: goto label_2860dc;
        case 0x2860e0u: goto label_2860e0;
        case 0x2860e4u: goto label_2860e4;
        case 0x2860e8u: goto label_2860e8;
        case 0x2860ecu: goto label_2860ec;
        case 0x2860f0u: goto label_2860f0;
        case 0x2860f4u: goto label_2860f4;
        case 0x2860f8u: goto label_2860f8;
        case 0x2860fcu: goto label_2860fc;
        case 0x286100u: goto label_286100;
        case 0x286104u: goto label_286104;
        case 0x286108u: goto label_286108;
        case 0x28610cu: goto label_28610c;
        case 0x286110u: goto label_286110;
        case 0x286114u: goto label_286114;
        case 0x286118u: goto label_286118;
        case 0x28611cu: goto label_28611c;
        case 0x286120u: goto label_286120;
        case 0x286124u: goto label_286124;
        case 0x286128u: goto label_286128;
        case 0x28612cu: goto label_28612c;
        case 0x286130u: goto label_286130;
        case 0x286134u: goto label_286134;
        case 0x286138u: goto label_286138;
        case 0x28613cu: goto label_28613c;
        case 0x286140u: goto label_286140;
        case 0x286144u: goto label_286144;
        case 0x286148u: goto label_286148;
        case 0x28614cu: goto label_28614c;
        case 0x286150u: goto label_286150;
        case 0x286154u: goto label_286154;
        case 0x286158u: goto label_286158;
        case 0x28615cu: goto label_28615c;
        case 0x286160u: goto label_286160;
        case 0x286164u: goto label_286164;
        case 0x286168u: goto label_286168;
        case 0x28616cu: goto label_28616c;
        case 0x286170u: goto label_286170;
        case 0x286174u: goto label_286174;
        case 0x286178u: goto label_286178;
        case 0x28617cu: goto label_28617c;
        case 0x286180u: goto label_286180;
        case 0x286184u: goto label_286184;
        case 0x286188u: goto label_286188;
        case 0x28618cu: goto label_28618c;
        case 0x286190u: goto label_286190;
        case 0x286194u: goto label_286194;
        case 0x286198u: goto label_286198;
        case 0x28619cu: goto label_28619c;
        case 0x2861a0u: goto label_2861a0;
        case 0x2861a4u: goto label_2861a4;
        case 0x2861a8u: goto label_2861a8;
        case 0x2861acu: goto label_2861ac;
        case 0x2861b0u: goto label_2861b0;
        case 0x2861b4u: goto label_2861b4;
        case 0x2861b8u: goto label_2861b8;
        case 0x2861bcu: goto label_2861bc;
        case 0x2861c0u: goto label_2861c0;
        case 0x2861c4u: goto label_2861c4;
        case 0x2861c8u: goto label_2861c8;
        case 0x2861ccu: goto label_2861cc;
        case 0x2861d0u: goto label_2861d0;
        case 0x2861d4u: goto label_2861d4;
        case 0x2861d8u: goto label_2861d8;
        case 0x2861dcu: goto label_2861dc;
        case 0x2861e0u: goto label_2861e0;
        case 0x2861e4u: goto label_2861e4;
        case 0x2861e8u: goto label_2861e8;
        case 0x2861ecu: goto label_2861ec;
        case 0x2861f0u: goto label_2861f0;
        case 0x2861f4u: goto label_2861f4;
        case 0x2861f8u: goto label_2861f8;
        case 0x2861fcu: goto label_2861fc;
        case 0x286200u: goto label_286200;
        case 0x286204u: goto label_286204;
        case 0x286208u: goto label_286208;
        case 0x28620cu: goto label_28620c;
        case 0x286210u: goto label_286210;
        case 0x286214u: goto label_286214;
        case 0x286218u: goto label_286218;
        case 0x28621cu: goto label_28621c;
        case 0x286220u: goto label_286220;
        case 0x286224u: goto label_286224;
        case 0x286228u: goto label_286228;
        case 0x28622cu: goto label_28622c;
        case 0x286230u: goto label_286230;
        case 0x286234u: goto label_286234;
        case 0x286238u: goto label_286238;
        case 0x28623cu: goto label_28623c;
        case 0x286240u: goto label_286240;
        case 0x286244u: goto label_286244;
        case 0x286248u: goto label_286248;
        case 0x28624cu: goto label_28624c;
        case 0x286250u: goto label_286250;
        case 0x286254u: goto label_286254;
        case 0x286258u: goto label_286258;
        case 0x28625cu: goto label_28625c;
        case 0x286260u: goto label_286260;
        case 0x286264u: goto label_286264;
        case 0x286268u: goto label_286268;
        case 0x28626cu: goto label_28626c;
        case 0x286270u: goto label_286270;
        case 0x286274u: goto label_286274;
        case 0x286278u: goto label_286278;
        case 0x28627cu: goto label_28627c;
        case 0x286280u: goto label_286280;
        case 0x286284u: goto label_286284;
        case 0x286288u: goto label_286288;
        case 0x28628cu: goto label_28628c;
        case 0x286290u: goto label_286290;
        case 0x286294u: goto label_286294;
        case 0x286298u: goto label_286298;
        case 0x28629cu: goto label_28629c;
        case 0x2862a0u: goto label_2862a0;
        case 0x2862a4u: goto label_2862a4;
        case 0x2862a8u: goto label_2862a8;
        case 0x2862acu: goto label_2862ac;
        case 0x2862b0u: goto label_2862b0;
        case 0x2862b4u: goto label_2862b4;
        case 0x2862b8u: goto label_2862b8;
        case 0x2862bcu: goto label_2862bc;
        case 0x2862c0u: goto label_2862c0;
        case 0x2862c4u: goto label_2862c4;
        case 0x2862c8u: goto label_2862c8;
        case 0x2862ccu: goto label_2862cc;
        case 0x2862d0u: goto label_2862d0;
        case 0x2862d4u: goto label_2862d4;
        case 0x2862d8u: goto label_2862d8;
        case 0x2862dcu: goto label_2862dc;
        case 0x2862e0u: goto label_2862e0;
        case 0x2862e4u: goto label_2862e4;
        case 0x2862e8u: goto label_2862e8;
        case 0x2862ecu: goto label_2862ec;
        case 0x2862f0u: goto label_2862f0;
        case 0x2862f4u: goto label_2862f4;
        case 0x2862f8u: goto label_2862f8;
        case 0x2862fcu: goto label_2862fc;
        case 0x286300u: goto label_286300;
        case 0x286304u: goto label_286304;
        case 0x286308u: goto label_286308;
        case 0x28630cu: goto label_28630c;
        case 0x286310u: goto label_286310;
        case 0x286314u: goto label_286314;
        case 0x286318u: goto label_286318;
        case 0x28631cu: goto label_28631c;
        case 0x286320u: goto label_286320;
        case 0x286324u: goto label_286324;
        case 0x286328u: goto label_286328;
        case 0x28632cu: goto label_28632c;
        case 0x286330u: goto label_286330;
        case 0x286334u: goto label_286334;
        case 0x286338u: goto label_286338;
        case 0x28633cu: goto label_28633c;
        case 0x286340u: goto label_286340;
        case 0x286344u: goto label_286344;
        case 0x286348u: goto label_286348;
        case 0x28634cu: goto label_28634c;
        case 0x286350u: goto label_286350;
        case 0x286354u: goto label_286354;
        case 0x286358u: goto label_286358;
        case 0x28635cu: goto label_28635c;
        case 0x286360u: goto label_286360;
        case 0x286364u: goto label_286364;
        case 0x286368u: goto label_286368;
        case 0x28636cu: goto label_28636c;
        case 0x286370u: goto label_286370;
        case 0x286374u: goto label_286374;
        case 0x286378u: goto label_286378;
        case 0x28637cu: goto label_28637c;
        case 0x286380u: goto label_286380;
        case 0x286384u: goto label_286384;
        case 0x286388u: goto label_286388;
        case 0x28638cu: goto label_28638c;
        case 0x286390u: goto label_286390;
        case 0x286394u: goto label_286394;
        case 0x286398u: goto label_286398;
        case 0x28639cu: goto label_28639c;
        case 0x2863a0u: goto label_2863a0;
        case 0x2863a4u: goto label_2863a4;
        case 0x2863a8u: goto label_2863a8;
        case 0x2863acu: goto label_2863ac;
        case 0x2863b0u: goto label_2863b0;
        case 0x2863b4u: goto label_2863b4;
        case 0x2863b8u: goto label_2863b8;
        case 0x2863bcu: goto label_2863bc;
        case 0x2863c0u: goto label_2863c0;
        case 0x2863c4u: goto label_2863c4;
        case 0x2863c8u: goto label_2863c8;
        case 0x2863ccu: goto label_2863cc;
        case 0x2863d0u: goto label_2863d0;
        case 0x2863d4u: goto label_2863d4;
        case 0x2863d8u: goto label_2863d8;
        case 0x2863dcu: goto label_2863dc;
        case 0x2863e0u: goto label_2863e0;
        case 0x2863e4u: goto label_2863e4;
        case 0x2863e8u: goto label_2863e8;
        case 0x2863ecu: goto label_2863ec;
        case 0x2863f0u: goto label_2863f0;
        case 0x2863f4u: goto label_2863f4;
        case 0x2863f8u: goto label_2863f8;
        case 0x2863fcu: goto label_2863fc;
        case 0x286400u: goto label_286400;
        case 0x286404u: goto label_286404;
        case 0x286408u: goto label_286408;
        case 0x28640cu: goto label_28640c;
        case 0x286410u: goto label_286410;
        case 0x286414u: goto label_286414;
        case 0x286418u: goto label_286418;
        case 0x28641cu: goto label_28641c;
        case 0x286420u: goto label_286420;
        case 0x286424u: goto label_286424;
        case 0x286428u: goto label_286428;
        case 0x28642cu: goto label_28642c;
        case 0x286430u: goto label_286430;
        case 0x286434u: goto label_286434;
        case 0x286438u: goto label_286438;
        case 0x28643cu: goto label_28643c;
        case 0x286440u: goto label_286440;
        case 0x286444u: goto label_286444;
        case 0x286448u: goto label_286448;
        case 0x28644cu: goto label_28644c;
        case 0x286450u: goto label_286450;
        case 0x286454u: goto label_286454;
        case 0x286458u: goto label_286458;
        case 0x28645cu: goto label_28645c;
        case 0x286460u: goto label_286460;
        case 0x286464u: goto label_286464;
        case 0x286468u: goto label_286468;
        case 0x28646cu: goto label_28646c;
        case 0x286470u: goto label_286470;
        case 0x286474u: goto label_286474;
        case 0x286478u: goto label_286478;
        case 0x28647cu: goto label_28647c;
        case 0x286480u: goto label_286480;
        case 0x286484u: goto label_286484;
        case 0x286488u: goto label_286488;
        case 0x28648cu: goto label_28648c;
        case 0x286490u: goto label_286490;
        case 0x286494u: goto label_286494;
        case 0x286498u: goto label_286498;
        case 0x28649cu: goto label_28649c;
        case 0x2864a0u: goto label_2864a0;
        case 0x2864a4u: goto label_2864a4;
        case 0x2864a8u: goto label_2864a8;
        case 0x2864acu: goto label_2864ac;
        case 0x2864b0u: goto label_2864b0;
        case 0x2864b4u: goto label_2864b4;
        case 0x2864b8u: goto label_2864b8;
        case 0x2864bcu: goto label_2864bc;
        case 0x2864c0u: goto label_2864c0;
        case 0x2864c4u: goto label_2864c4;
        case 0x2864c8u: goto label_2864c8;
        case 0x2864ccu: goto label_2864cc;
        case 0x2864d0u: goto label_2864d0;
        case 0x2864d4u: goto label_2864d4;
        case 0x2864d8u: goto label_2864d8;
        case 0x2864dcu: goto label_2864dc;
        case 0x2864e0u: goto label_2864e0;
        case 0x2864e4u: goto label_2864e4;
        case 0x2864e8u: goto label_2864e8;
        case 0x2864ecu: goto label_2864ec;
        case 0x2864f0u: goto label_2864f0;
        case 0x2864f4u: goto label_2864f4;
        case 0x2864f8u: goto label_2864f8;
        case 0x2864fcu: goto label_2864fc;
        case 0x286500u: goto label_286500;
        case 0x286504u: goto label_286504;
        case 0x286508u: goto label_286508;
        case 0x28650cu: goto label_28650c;
        case 0x286510u: goto label_286510;
        case 0x286514u: goto label_286514;
        case 0x286518u: goto label_286518;
        case 0x28651cu: goto label_28651c;
        case 0x286520u: goto label_286520;
        case 0x286524u: goto label_286524;
        case 0x286528u: goto label_286528;
        case 0x28652cu: goto label_28652c;
        case 0x286530u: goto label_286530;
        case 0x286534u: goto label_286534;
        case 0x286538u: goto label_286538;
        case 0x28653cu: goto label_28653c;
        case 0x286540u: goto label_286540;
        case 0x286544u: goto label_286544;
        case 0x286548u: goto label_286548;
        case 0x28654cu: goto label_28654c;
        case 0x286550u: goto label_286550;
        case 0x286554u: goto label_286554;
        case 0x286558u: goto label_286558;
        case 0x28655cu: goto label_28655c;
        case 0x286560u: goto label_286560;
        case 0x286564u: goto label_286564;
        case 0x286568u: goto label_286568;
        case 0x28656cu: goto label_28656c;
        case 0x286570u: goto label_286570;
        case 0x286574u: goto label_286574;
        case 0x286578u: goto label_286578;
        case 0x28657cu: goto label_28657c;
        case 0x286580u: goto label_286580;
        case 0x286584u: goto label_286584;
        case 0x286588u: goto label_286588;
        case 0x28658cu: goto label_28658c;
        case 0x286590u: goto label_286590;
        case 0x286594u: goto label_286594;
        case 0x286598u: goto label_286598;
        case 0x28659cu: goto label_28659c;
        case 0x2865a0u: goto label_2865a0;
        case 0x2865a4u: goto label_2865a4;
        case 0x2865a8u: goto label_2865a8;
        case 0x2865acu: goto label_2865ac;
        case 0x2865b0u: goto label_2865b0;
        case 0x2865b4u: goto label_2865b4;
        case 0x2865b8u: goto label_2865b8;
        case 0x2865bcu: goto label_2865bc;
        case 0x2865c0u: goto label_2865c0;
        case 0x2865c4u: goto label_2865c4;
        case 0x2865c8u: goto label_2865c8;
        case 0x2865ccu: goto label_2865cc;
        case 0x2865d0u: goto label_2865d0;
        case 0x2865d4u: goto label_2865d4;
        case 0x2865d8u: goto label_2865d8;
        case 0x2865dcu: goto label_2865dc;
        case 0x2865e0u: goto label_2865e0;
        case 0x2865e4u: goto label_2865e4;
        case 0x2865e8u: goto label_2865e8;
        case 0x2865ecu: goto label_2865ec;
        case 0x2865f0u: goto label_2865f0;
        case 0x2865f4u: goto label_2865f4;
        case 0x2865f8u: goto label_2865f8;
        case 0x2865fcu: goto label_2865fc;
        case 0x286600u: goto label_286600;
        case 0x286604u: goto label_286604;
        case 0x286608u: goto label_286608;
        case 0x28660cu: goto label_28660c;
        case 0x286610u: goto label_286610;
        case 0x286614u: goto label_286614;
        case 0x286618u: goto label_286618;
        case 0x28661cu: goto label_28661c;
        default: return;
    }

label_285e50:
    // 0x285e50: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x285e50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_285e54:
    // 0x285e54: 0x40023000  mfc0        $v0, Wired
    ctx->pc = 0x285e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_wired);
label_285e58:
    // 0x285e58: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x285e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_285e5c:
    // 0x285e5c: 0x40823000  mtc0        $v0, Wired
    ctx->pc = 0x285e5cu;
    ctx->cop0_wired = GPR_U32(ctx, 2) & 0x3F; ctx->cop0_random = 47;
label_285e60:
    // 0x285e60: 0x40850000  mtc0        $a1, Index
    ctx->pc = 0x285e60u;
    ctx->cop0_index = GPR_U32(ctx, 5) & 0x3F;
label_285e64:
    // 0x285e64: 0x40802800  mtc0        $zero, PageMask
    ctx->pc = 0x285e64u;
    ctx->cop0_pagemask = GPR_U32(ctx, 0) & 0x01FFE000;
label_285e68:
    // 0x285e68: 0x40865000  mtc0        $a2, EntryHi
    ctx->pc = 0x285e68u;
    ctx->cop0_entryhi = GPR_U32(ctx, 6) & 0xC00000FF;
label_285e6c:
    // 0x285e6c: 0x40801000  mtc0        $zero, EntryLo0
    ctx->pc = 0x285e6cu;
    ctx->cop0_entrylo0 = GPR_U32(ctx, 0) & 0x3FFFFFFF;
label_285e70:
    // 0x285e70: 0x40801800  mtc0        $zero, EntryLo1
    ctx->pc = 0x285e70u;
    ctx->cop0_entrylo1 = GPR_U32(ctx, 0) & 0x3FFFFFFF;
label_285e74:
    // 0x285e74: 0x40f  sync.p
    ctx->pc = 0x285e74u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_285e78:
    // 0x285e78: 0x42000002  tlbwi
    ctx->pc = 0x285e78u;
    runtime->handleTLBWI(rdram, ctx);
label_285e7c:
    // 0x285e7c: 0x40f  sync.p
    ctx->pc = 0x285e7cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_285e80:
    // 0x285e80: 0x10000019  b           . + 4 + (0x19 << 2)
label_285e84:
    if (ctx->pc == 0x285E84u) {
        ctx->pc = 0x285E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285E80u;
        // 0x285e84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285E88u;
        goto label_285e88;
    }
    ctx->pc = 0x285E80u;
    {
        const bool branch_taken_0x285e80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285E80u;
        // 0x285e84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285e80) {
            ctx->pc = 0x285EE8u;
            goto label_285ee8;
        }
    }
    ctx->pc = 0x285E88u;
label_285e88:
    // 0x285e88: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x285e88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_285e8c:
    // 0x285e8c: 0x26041000  addiu       $a0, $s0, 0x1000
    ctx->pc = 0x285e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4096));
label_285e90:
    // 0x285e90: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x285e90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
label_285e94:
    // 0x285e94: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x285e94u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
label_285e98:
    // 0x285e98: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x285e98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_285e9c:
    // 0x285e9c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x285e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_285ea0:
    // 0x285ea0: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x285ea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
label_285ea4:
    // 0x285ea4: 0x42182  srl         $a0, $a0, 6
    ctx->pc = 0x285ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 6));
label_285ea8:
    // 0x285ea8: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x285ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
label_285eac:
    // 0x285eac: 0x3484001f  ori         $a0, $a0, 0x1F
    ctx->pc = 0x285eacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)31);
label_285eb0:
    // 0x285eb0: 0x3442001f  ori         $v0, $v0, 0x1F
    ctx->pc = 0x285eb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)31);
label_285eb4:
    // 0x285eb4: 0x34c64000  ori         $a2, $a2, 0x4000
    ctx->pc = 0x285eb4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)16384);
label_285eb8:
    // 0x285eb8: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x285eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_285ebc:
    // 0x285ebc: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x285ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
label_285ec0:
    // 0x285ec0: 0x40850000  mtc0        $a1, Index
    ctx->pc = 0x285ec0u;
    ctx->cop0_index = GPR_U32(ctx, 5) & 0x3F;
label_285ec4:
    // 0x285ec4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x285ec4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_285ec8:
    // 0x285ec8: 0x40832800  mtc0        $v1, PageMask
    ctx->pc = 0x285ec8u;
    ctx->cop0_pagemask = GPR_U32(ctx, 3) & 0x01FFE000;
label_285ecc:
    // 0x285ecc: 0x40865000  mtc0        $a2, EntryHi
    ctx->pc = 0x285eccu;
    ctx->cop0_entryhi = GPR_U32(ctx, 6) & 0xC00000FF;
label_285ed0:
    // 0x285ed0: 0x40821000  mtc0        $v0, EntryLo0
    ctx->pc = 0x285ed0u;
    ctx->cop0_entrylo0 = GPR_U32(ctx, 2) & 0x3FFFFFFF;
label_285ed4:
    // 0x285ed4: 0x40841800  mtc0        $a0, EntryLo1
    ctx->pc = 0x285ed4u;
    ctx->cop0_entrylo1 = GPR_U32(ctx, 4) & 0x3FFFFFFF;
label_285ed8:
    // 0x285ed8: 0x40f  sync.p
    ctx->pc = 0x285ed8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_285edc:
    // 0x285edc: 0x42000002  tlbwi
    ctx->pc = 0x285edcu;
    runtime->handleTLBWI(rdram, ctx);
label_285ee0:
    // 0x285ee0: 0x40f  sync.p
    ctx->pc = 0x285ee0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_285ee4:
    // 0x285ee4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x285ee4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_285ee8:
    // 0x285ee8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x285ee8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_285eec:
    // 0x285eec: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x285eecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_285ef0:
    // 0x285ef0: 0x3e00008  jr          $ra
label_285ef4:
    if (ctx->pc == 0x285EF4u) {
        ctx->pc = 0x285EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285EF0u;
        // 0x285ef4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285EF8u;
        goto label_285ef8;
    }
    ctx->pc = 0x285EF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x285EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285EF0u;
        // 0x285ef4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x285EF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x285EF8u;
label_285ef8:
    // 0x285ef8: 0x0  nop
    ctx->pc = 0x285ef8u;
    // NOP
label_285efc:
    // 0x285efc: 0x0  nop
    ctx->pc = 0x285efcu;
    // NOP
label_285f00:
    // 0x285f00: 0x0  nop
    ctx->pc = 0x285f00u;
    // NOP
label_285f04:
    // 0x285f04: 0x0  nop
    ctx->pc = 0x285f04u;
    // NOP
label_285f08:
    // 0x285f08: 0x0  nop
    ctx->pc = 0x285f08u;
    // NOP
label_285f0c:
    // 0x285f0c: 0x0  nop
    ctx->pc = 0x285f0cu;
    // NOP
label_285f10:
    // 0x285f10: 0x0  nop
    ctx->pc = 0x285f10u;
    // NOP
label_285f14:
    // 0x285f14: 0x0  nop
    ctx->pc = 0x285f14u;
    // NOP
label_285f18:
    // 0x285f18: 0x0  nop
    ctx->pc = 0x285f18u;
    // NOP
label_285f1c:
    // 0x285f1c: 0x0  nop
    ctx->pc = 0x285f1cu;
    // NOP
label_285f20:
    // 0x285f20: 0x55  .word       0x00000055                   # INVALID     $zero, $zero, 0x55 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x285f20u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x285F20 raw=0x00000055"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_285f24:
    // 0x285f24: 0x80075038  lb          $a3, 0x5038($zero)
    ctx->pc = 0x285f24u;
    SET_GPR_S32(ctx, 7, (int8_t)FAST_READ8(0x5038u));
label_285f28:
    // 0x285f28: 0x56  .word       0x00000056                   # dsrlv       $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x285f28u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_285f2c:
    // 0x285f2c: 0x800750c8  lb          $a3, 0x50C8($zero)
    ctx->pc = 0x285f2cu;
    SET_GPR_S32(ctx, 7, (int8_t)FAST_READ8(0x50C8u));
label_285f30:
    // 0x285f30: 0x57  .word       0x00000057                   # dsrav       $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x285f30u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_285f34:
    // 0x285f34: 0x80075108  lb          $a3, 0x5108($zero)
    ctx->pc = 0x285f34u;
    SET_GPR_S32(ctx, 7, (int8_t)FAST_READ8(0x5108u));
label_285f38:
    // 0x285f38: 0x58  .word       0x00000058                   # mult        $zero, $zero, $zero # 00000040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x285f38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_285f3c:
    // 0x285f3c: 0x80075158  lb          $a3, 0x5158($zero)
    ctx->pc = 0x285f3cu;
    SET_GPR_S32(ctx, 7, (int8_t)FAST_READ8(0x5158u));
label_285f40:
    // 0x285f40: 0x59  .word       0x00000059                   # multu       $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x285f40u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_285f44:
    // 0x285f44: 0x800751a8  lb          $a3, 0x51A8($zero)
    ctx->pc = 0x285f44u;
    SET_GPR_S32(ctx, 7, (int8_t)FAST_READ8(0x51A8u));
label_285f48:
    // 0x285f48: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x285f48u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_285f4c:
    // 0x285f4c: 0x80075330  lb          $a3, 0x5330($zero)
    ctx->pc = 0x285f4cu;
    SET_GPR_S32(ctx, 7, (int8_t)FAST_READ8(0x5330u));
label_285f50:
    // 0x285f50: 0x0  nop
    ctx->pc = 0x285f50u;
    // NOP
label_285f54:
    // 0x285f54: 0x0  nop
    ctx->pc = 0x285f54u;
    // NOP
label_285f58:
    // 0x285f58: 0x0  nop
    ctx->pc = 0x285f58u;
    // NOP
label_285f5c:
    // 0x285f5c: 0x0  nop
    ctx->pc = 0x285f5cu;
    // NOP
label_285f60:
    // 0x285f60: 0x0  nop
    ctx->pc = 0x285f60u;
    // NOP
label_285f64:
    // 0x285f64: 0x0  nop
    ctx->pc = 0x285f64u;
    // NOP
label_285f68:
    // 0x285f68: 0x0  nop
    ctx->pc = 0x285f68u;
    // NOP
label_285f6c:
    // 0x285f6c: 0x0  nop
    ctx->pc = 0x285f6cu;
    // NOP
label_285f70:
    // 0x285f70: 0x0  nop
    ctx->pc = 0x285f70u;
    // NOP
label_285f74:
    // 0x285f74: 0x0  nop
    ctx->pc = 0x285f74u;
    // NOP
label_285f78:
    // 0x285f78: 0x0  nop
    ctx->pc = 0x285f78u;
    // NOP
label_285f7c:
    // 0x285f7c: 0x0  nop
    ctx->pc = 0x285f7cu;
    // NOP
label_285f80:
    // 0x285f80: 0x0  nop
    ctx->pc = 0x285f80u;
    // NOP
label_285f84:
    // 0x285f84: 0x0  nop
    ctx->pc = 0x285f84u;
    // NOP
label_285f88:
    // 0x285f88: 0x0  nop
    ctx->pc = 0x285f88u;
    // NOP
label_285f8c:
    // 0x285f8c: 0x0  nop
    ctx->pc = 0x285f8cu;
    // NOP
label_285f90:
    // 0x285f90: 0x0  nop
    ctx->pc = 0x285f90u;
    // NOP
label_285f94:
    // 0x285f94: 0x0  nop
    ctx->pc = 0x285f94u;
    // NOP
label_285f98:
    // 0x285f98: 0x0  nop
    ctx->pc = 0x285f98u;
    // NOP
label_285f9c:
    // 0x285f9c: 0x0  nop
    ctx->pc = 0x285f9cu;
    // NOP
label_285fa0:
    // 0x285fa0: 0x5a  .word       0x0000005A                   # div         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x285fa0u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_285fa4:
    // 0x285fa4: 0x1accc8  .word       0x001ACCC8                   # jr          $zero # 001ACCC0 <InstrIdType: CPU_SPECIAL>
label_285fa8:
    if (ctx->pc == 0x285FA8u) {
        ctx->pc = 0x285FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285FA4u;
        // 0x285fa8: 0x5b  .word       0x0000005B                   # divu        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x285FACu;
        goto label_285fac;
    }
    ctx->pc = 0x285FA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x285FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285FA4u;
        // 0x285fa8: 0x5b  .word       0x0000005B                   # divu        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x285FA4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x285FACu;
label_285fac:
    // 0x285fac: 0x80075000  lb          $a3, 0x5000($zero)
    ctx->pc = 0x285facu;
    SET_GPR_S32(ctx, 7, (int8_t)FAST_READ8(0x5000u));
label_285fb0:
    // 0x285fb0: 0x54  .word       0x00000054                   # dsllv       $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x285fb0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_285fb4:
    // 0x285fb4: 0x1ad240  sll         $k0, $k0, 9
    ctx->pc = 0x285fb4u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 26), 9));
label_285fb8:
    // 0x285fb8: 0x55  .word       0x00000055                   # INVALID     $zero, $zero, 0x55 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x285fb8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x285FB8 raw=0x00000055"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_285fbc:
    // 0x285fbc: 0x0  nop
    ctx->pc = 0x285fbcu;
    // NOP
label_285fc0:
    // 0x285fc0: 0x56  .word       0x00000056                   # dsrlv       $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x285fc0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_285fc4:
    // 0x285fc4: 0x0  nop
    ctx->pc = 0x285fc4u;
    // NOP
label_285fc8:
    // 0x285fc8: 0x57  .word       0x00000057                   # dsrav       $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x285fc8u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_285fcc:
    // 0x285fcc: 0x0  nop
    ctx->pc = 0x285fccu;
    // NOP
label_285fd0:
    // 0x285fd0: 0x58  .word       0x00000058                   # mult        $zero, $zero, $zero # 00000040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x285fd0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_285fd4:
    // 0x285fd4: 0x0  nop
    ctx->pc = 0x285fd4u;
    // NOP
label_285fd8:
    // 0x285fd8: 0x59  .word       0x00000059                   # multu       $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x285fd8u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_285fdc:
    // 0x285fdc: 0x0  nop
    ctx->pc = 0x285fdcu;
    // NOP
label_285fe0:
    // 0x285fe0: 0x0  nop
    ctx->pc = 0x285fe0u;
    // NOP
label_285fe4:
    // 0x285fe4: 0x70000000  madd        $zero, $zero, $zero
    ctx->pc = 0x285fe4u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); }
label_285fe8:
    // 0x285fe8: 0x80000007  lb          $zero, 0x7($zero)
    ctx->pc = 0x285fe8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x7u));
label_285fec:
    // 0x285fec: 0x7  srav        $zero, $zero, $zero
    ctx->pc = 0x285fecu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_285ff0:
    // 0x285ff0: 0x6000  sll         $t4, $zero, 0
    ctx->pc = 0x285ff0u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_285ff4:
    // 0x285ff4: 0xffff8000  sd          $ra, -0x8000($ra)
    ctx->pc = 0x285ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294934528), GPR_U64(ctx, 31));
label_285ff8:
    // 0x285ff8: 0x1e1f  .word       0x00001E1F                   # ddivu       $v1, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x285ff8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x285FF8 raw=0x00001E1F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_285ffc:
    // 0x285ffc: 0x1f1f  .word       0x00001F1F                   # ddivu       $v1, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x285ffcu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x285FFC raw=0x00001F1F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_286000:
    // 0x286000: 0x0  nop
    ctx->pc = 0x286000u;
    // NOP
label_286004:
    // 0x286004: 0x10000000  b           . + 4 + (0x0 << 2)
label_286008:
    if (ctx->pc == 0x286008u) {
        ctx->pc = 0x286008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286004u;
        // 0x286008: 0x400017  dsrav       $zero, $zero, $v0 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 2) & 0x3F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28600Cu;
        goto label_28600c;
    }
    ctx->pc = 0x286004u;
    {
        const bool branch_taken_0x286004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286004u;
        // 0x286008: 0x400017  dsrav       $zero, $zero, $v0 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 2) & 0x3F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286004) {
            ctx->pc = 0x286008u;
            goto label_286008;
        }
    }
    ctx->pc = 0x28600Cu;
label_28600c:
    // 0x28600c: 0x400053  .word       0x00400053                   # mtlo        $v0 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28600cu;
    ctx->lo = GPR_U64(ctx, 2);
label_286010:
    // 0x286010: 0x0  nop
    ctx->pc = 0x286010u;
    // NOP
label_286014:
    // 0x286014: 0x10002000  b           . + 4 + (0x2000 << 2)
label_286018:
    if (ctx->pc == 0x286018u) {
        ctx->pc = 0x286018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286014u;
        // 0x286018: 0x400097  .word       0x00400097                   # dsrav       $zero, $zero, $v0 # 00000080 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 2) & 0x3F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28601Cu;
        goto label_28601c;
    }
    ctx->pc = 0x286014u;
    {
        const bool branch_taken_0x286014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286014u;
        // 0x286018: 0x400097  .word       0x00400097                   # dsrav       $zero, $zero, $v0 # 00000080 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 2) & 0x3F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286014) {
            ctx->pc = 0x28E018u;
            { ctx->pc = 0x28e018; return; }
        }
    }
    ctx->pc = 0x28601Cu;
label_28601c:
    // 0x28601c: 0x4000d7  .word       0x004000D7                   # dsrav       $zero, $zero, $v0 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28601cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 2) & 0x3F));
label_286020:
    // 0x286020: 0x0  nop
    ctx->pc = 0x286020u;
    // NOP
label_286024:
    // 0x286024: 0x10004000  b           . + 4 + (0x4000 << 2)
label_286028:
    if (ctx->pc == 0x286028u) {
        ctx->pc = 0x286028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286024u;
        // 0x286028: 0x400117  .word       0x00400117                   # dsrav       $zero, $zero, $v0 # 00000100 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 2) & 0x3F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28602Cu;
        goto label_28602c;
    }
    ctx->pc = 0x286024u;
    {
        const bool branch_taken_0x286024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286024u;
        // 0x286028: 0x400117  .word       0x00400117                   # dsrav       $zero, $zero, $v0 # 00000100 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 2) & 0x3F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286024) {
            ctx->pc = 0x296028u;
            { ctx->pc = 0x296028; return; }
        }
    }
    ctx->pc = 0x28602Cu;
label_28602c:
    // 0x28602c: 0x400157  .word       0x00400157                   # dsrav       $zero, $zero, $v0 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28602cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 2) & 0x3F));
label_286030:
    // 0x286030: 0x0  nop
    ctx->pc = 0x286030u;
    // NOP
label_286034:
    // 0x286034: 0x10006000  b           . + 4 + (0x6000 << 2)
label_286038:
    if (ctx->pc == 0x286038u) {
        ctx->pc = 0x286038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286034u;
        // 0x286038: 0x400197  .word       0x00400197                   # dsrav       $zero, $zero, $v0 # 00000180 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 2) & 0x3F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28603Cu;
        goto label_28603c;
    }
    ctx->pc = 0x286034u;
    {
        const bool branch_taken_0x286034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286034u;
        // 0x286038: 0x400197  .word       0x00400197                   # dsrav       $zero, $zero, $v0 # 00000180 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 2) & 0x3F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286034) {
            ctx->pc = 0x29E038u;
            return;
        }
    }
    ctx->pc = 0x28603Cu;
label_28603c:
    // 0x28603c: 0x4001d7  .word       0x004001D7                   # dsrav       $zero, $zero, $v0 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28603cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 2) & 0x3F));
label_286040:
    // 0x286040: 0x0  nop
    ctx->pc = 0x286040u;
    // NOP
label_286044:
    // 0x286044: 0x10008000  b           . + 4 + (-0x8000 << 2)
label_286048:
    if (ctx->pc == 0x286048u) {
        ctx->pc = 0x286048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286044u;
        // 0x286048: 0x400217  .word       0x00400217                   # dsrav       $zero, $zero, $v0 # 00000200 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 2) & 0x3F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28604Cu;
        goto label_28604c;
    }
    ctx->pc = 0x286044u;
    {
        const bool branch_taken_0x286044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286044u;
        // 0x286048: 0x400217  .word       0x00400217                   # dsrav       $zero, $zero, $v0 # 00000200 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 2) & 0x3F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286044) {
            ctx->pc = 0x266048u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x266048; return; }
        }
    }
    ctx->pc = 0x28604Cu;
label_28604c:
    // 0x28604c: 0x400257  .word       0x00400257                   # dsrav       $zero, $zero, $v0 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28604cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 2) & 0x3F));
label_286050:
    // 0x286050: 0x0  nop
    ctx->pc = 0x286050u;
    // NOP
label_286054:
    // 0x286054: 0x1000a000  b           . + 4 + (-0x6000 << 2)
label_286058:
    if (ctx->pc == 0x286058u) {
        ctx->pc = 0x286058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286054u;
        // 0x286058: 0x400297  .word       0x00400297                   # dsrav       $zero, $zero, $v0 # 00000280 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 2) & 0x3F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28605Cu;
        goto label_28605c;
    }
    ctx->pc = 0x286054u;
    {
        const bool branch_taken_0x286054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286054u;
        // 0x286058: 0x400297  .word       0x00400297                   # dsrav       $zero, $zero, $v0 # 00000280 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 2) & 0x3F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286054) {
            ctx->pc = 0x26E058u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x26e058; return; }
        }
    }
    ctx->pc = 0x28605Cu;
label_28605c:
    // 0x28605c: 0x4002d7  .word       0x004002D7                   # dsrav       $zero, $zero, $v0 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28605cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 2) & 0x3F));
label_286060:
    // 0x286060: 0x0  nop
    ctx->pc = 0x286060u;
    // NOP
label_286064:
    // 0x286064: 0x1000c000  b           . + 4 + (-0x4000 << 2)
label_286068:
    if (ctx->pc == 0x286068u) {
        ctx->pc = 0x286068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286064u;
        // 0x286068: 0x400313  .word       0x00400313                   # mtlo        $v0 # 00000300 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->lo = GPR_U64(ctx, 2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28606Cu;
        goto label_28606c;
    }
    ctx->pc = 0x286064u;
    {
        const bool branch_taken_0x286064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286064u;
        // 0x286068: 0x400313  .word       0x00400313                   # mtlo        $v0 # 00000300 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->lo = GPR_U64(ctx, 2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x286064) {
            ctx->pc = 0x276068u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x276068; return; }
        }
    }
    ctx->pc = 0x28606Cu;
label_28606c:
    // 0x28606c: 0x400357  .word       0x00400357                   # dsrav       $zero, $zero, $v0 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28606cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 2) & 0x3F));
label_286070:
    // 0x286070: 0x0  nop
    ctx->pc = 0x286070u;
    // NOP
label_286074:
    // 0x286074: 0x1000e000  b           . + 4 + (-0x2000 << 2)
label_286078:
    if (ctx->pc == 0x286078u) {
        ctx->pc = 0x286078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286074u;
        // 0x286078: 0x400397  .word       0x00400397                   # dsrav       $zero, $zero, $v0 # 00000380 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 2) & 0x3F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28607Cu;
        goto label_28607c;
    }
    ctx->pc = 0x286074u;
    {
        const bool branch_taken_0x286074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286074u;
        // 0x286078: 0x400397  .word       0x00400397                   # dsrav       $zero, $zero, $v0 # 00000380 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 2) & 0x3F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286074) {
            ctx->pc = 0x27E078u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x27e078; return; }
        }
    }
    ctx->pc = 0x28607Cu;
label_28607c:
    // 0x28607c: 0x4003d7  .word       0x004003D7                   # dsrav       $zero, $zero, $v0 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28607cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 2) & 0x3F));
label_286080:
    // 0x286080: 0x1e000  sll         $gp, $at, 0
    ctx->pc = 0x286080u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 1), 0));
label_286084:
    // 0x286084: 0x11000000  beqz        $t0, . + 4 + (0x0 << 2)
label_286088:
    if (ctx->pc == 0x286088u) {
        ctx->pc = 0x286088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286084u;
        // 0x286088: 0x440017  dsrav       $zero, $a0, $v0 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 4) >> (GPR_U32(ctx, 2) & 0x3F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28608Cu;
        goto label_28608c;
    }
    ctx->pc = 0x286084u;
    {
        const bool branch_taken_0x286084 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x286088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286084u;
        // 0x286088: 0x440017  dsrav       $zero, $a0, $v0 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 4) >> (GPR_U32(ctx, 2) & 0x3F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286084) {
            ctx->pc = 0x286088u;
            goto label_286088;
        }
    }
    ctx->pc = 0x28608Cu;
label_28608c:
    // 0x28608c: 0x440415  .word       0x00440415                   # INVALID     $v0, $a0, 0x415 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28608cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x28608C raw=0x00440415"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_286090:
    // 0x286090: 0x1e000  sll         $gp, $at, 0
    ctx->pc = 0x286090u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 1), 0));
label_286094:
    // 0x286094: 0x12000000  beqz        $s0, . + 4 + (0x0 << 2)
label_286098:
    if (ctx->pc == 0x286098u) {
        ctx->pc = 0x286098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286094u;
        // 0x286098: 0x480017  dsrav       $zero, $t0, $v0 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 8) >> (GPR_U32(ctx, 2) & 0x3F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28609Cu;
        goto label_28609c;
    }
    ctx->pc = 0x286094u;
    {
        const bool branch_taken_0x286094 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x286098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286094u;
        // 0x286098: 0x480017  dsrav       $zero, $t0, $v0 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 8) >> (GPR_U32(ctx, 2) & 0x3F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286094) {
            ctx->pc = 0x286098u;
            goto label_286098;
        }
    }
    ctx->pc = 0x28609Cu;
label_28609c:
    // 0x28609c: 0x480415  .word       0x00480415                   # INVALID     $v0, $t0, 0x415 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28609cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x28609C raw=0x00480415"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2860a0:
    // 0x2860a0: 0x1ffe000  .word       0x01FFE000                   # sll         $gp, $ra, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2860a0u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 31), 0));
label_2860a4:
    // 0x2860a4: 0x1e000000  bgtz        $s0, . + 4 + (0x0 << 2)
label_2860a8:
    if (ctx->pc == 0x2860A8u) {
        ctx->pc = 0x2860A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2860A4u;
        // 0x2860a8: 0x780017  dsrav       $zero, $t8, $v1 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 24) >> (GPR_U32(ctx, 3) & 0x3F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2860ACu;
        goto label_2860ac;
    }
    ctx->pc = 0x2860A4u;
    {
        const bool branch_taken_0x2860a4 = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x2860A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2860A4u;
        // 0x2860a8: 0x780017  dsrav       $zero, $t8, $v1 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 24) >> (GPR_U32(ctx, 3) & 0x3F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2860a4) {
            ctx->pc = 0x2860A8u;
            goto label_2860a8;
        }
    }
    ctx->pc = 0x2860ACu;
label_2860ac:
    // 0x2860ac: 0x7c0017  dsrav       $zero, $gp, $v1
    ctx->pc = 0x2860acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 28) >> (GPR_U32(ctx, 3) & 0x3F));
label_2860b0:
    // 0x2860b0: 0x7e000  sll         $gp, $a3, 0
    ctx->pc = 0x2860b0u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 7), 0));
label_2860b4:
    // 0x2860b4: 0x80000  sll         $zero, $t0, 0
    ctx->pc = 0x2860b4u;
    
label_2860b8:
    // 0x2860b8: 0x201f  ddivu       $a0, $zero, $zero
    ctx->pc = 0x2860b8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2860B8 raw=0x0000201F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2860bc:
    // 0x2860bc: 0x301f  ddivu       $a2, $zero, $zero
    ctx->pc = 0x2860bcu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2860BC raw=0x0000301F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2860c0:
    // 0x2860c0: 0x7e000  sll         $gp, $a3, 0
    ctx->pc = 0x2860c0u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 7), 0));
label_2860c4:
    // 0x2860c4: 0x100000  sll         $zero, $s0, 0
    ctx->pc = 0x2860c4u;
    
label_2860c8:
    // 0x2860c8: 0x401f  ddivu       $t0, $zero, $zero
    ctx->pc = 0x2860c8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2860C8 raw=0x0000401F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2860cc:
    // 0x2860cc: 0x501f  ddivu       $t2, $zero, $zero
    ctx->pc = 0x2860ccu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2860CC raw=0x0000501F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2860d0:
    // 0x2860d0: 0x7e000  sll         $gp, $a3, 0
    ctx->pc = 0x2860d0u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 7), 0));
label_2860d4:
    // 0x2860d4: 0x180000  sll         $zero, $t8, 0
    ctx->pc = 0x2860d4u;
    
label_2860d8:
    // 0x2860d8: 0x601f  ddivu       $t4, $zero, $zero
    ctx->pc = 0x2860d8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2860D8 raw=0x0000601F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2860dc:
    // 0x2860dc: 0x701f  ddivu       $t6, $zero, $zero
    ctx->pc = 0x2860dcu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2860DC raw=0x0000701F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2860e0:
    // 0x2860e0: 0x1fe000  sll         $gp, $ra, 0
    ctx->pc = 0x2860e0u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 31), 0));
label_2860e4:
    // 0x2860e4: 0x200000  .word       0x00200000                   # sll         $zero, $zero, 0 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2860e4u;
    // NOP
label_2860e8:
    // 0x2860e8: 0x801f  ddivu       $s0, $zero, $zero
    ctx->pc = 0x2860e8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2860E8 raw=0x0000801F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2860ec:
    // 0x2860ec: 0xc01f  ddivu       $t8, $zero, $zero
    ctx->pc = 0x2860ecu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2860EC raw=0x0000C01F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2860f0:
    // 0x2860f0: 0x1fe000  sll         $gp, $ra, 0
    ctx->pc = 0x2860f0u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 31), 0));
label_2860f4:
    // 0x2860f4: 0x400000  .word       0x00400000                   # sll         $zero, $zero, 0 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2860f4u;
    // NOP
label_2860f8:
    // 0x2860f8: 0x1001f  ddivu       $zero, $zero, $at
    ctx->pc = 0x2860f8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2860F8 raw=0x0001001F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2860fc:
    // 0x2860fc: 0x1401f  ddivu       $t0, $zero, $at
    ctx->pc = 0x2860fcu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2860FC raw=0x0001401F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_286100:
    // 0x286100: 0x1fe000  sll         $gp, $ra, 0
    ctx->pc = 0x286100u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 31), 0));
label_286104:
    // 0x286104: 0x600000  .word       0x00600000                   # sll         $zero, $zero, 0 # 00600000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x286104u;
    // NOP
label_286108:
    // 0x286108: 0x1801f  ddivu       $s0, $zero, $at
    ctx->pc = 0x286108u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x286108 raw=0x0001801F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28610c:
    // 0x28610c: 0x1c01f  ddivu       $t8, $zero, $at
    ctx->pc = 0x28610cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x28610C raw=0x0001C01F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_286110:
    // 0x286110: 0x7fe000  .word       0x007FE000                   # sll         $gp, $ra, 0 # 00600000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x286110u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 31), 0));
label_286114:
    // 0x286114: 0x800000  .word       0x00800000                   # sll         $zero, $zero, 0 # 00800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x286114u;
    // NOP
label_286118:
    // 0x286118: 0x2001f  ddivu       $zero, $zero, $v0
    ctx->pc = 0x286118u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x286118 raw=0x0002001F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28611c:
    // 0x28611c: 0x3001f  ddivu       $zero, $zero, $v1
    ctx->pc = 0x28611cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x28611C raw=0x0003001F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_286120:
    // 0x286120: 0x7fe000  .word       0x007FE000                   # sll         $gp, $ra, 0 # 00600000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x286120u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 31), 0));
label_286124:
    // 0x286124: 0x1000000  .word       0x01000000                   # sll         $zero, $zero, 0 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x286124u;
    // NOP
label_286128:
    // 0x286128: 0x4001f  ddivu       $zero, $zero, $a0
    ctx->pc = 0x286128u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x286128 raw=0x0004001F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28612c:
    // 0x28612c: 0x5001f  ddivu       $zero, $zero, $a1
    ctx->pc = 0x28612cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x28612C raw=0x0005001F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_286130:
    // 0x286130: 0x7fe000  .word       0x007FE000                   # sll         $gp, $ra, 0 # 00600000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x286130u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 31), 0));
label_286134:
    // 0x286134: 0x1800000  .word       0x01800000                   # sll         $zero, $zero, 0 # 01800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x286134u;
    // NOP
label_286138:
    // 0x286138: 0x6001f  ddivu       $zero, $zero, $a2
    ctx->pc = 0x286138u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x286138 raw=0x0006001F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28613c:
    // 0x28613c: 0x7001f  ddivu       $zero, $zero, $a3
    ctx->pc = 0x28613cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x28613C raw=0x0007001F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_286140:
    // 0x286140: 0x7e000  sll         $gp, $a3, 0
    ctx->pc = 0x286140u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 7), 0));
label_286144:
    // 0x286144: 0x20080000  addi        $t0, $zero, 0x0
    ctx->pc = 0x286144u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 0), (int32_t)0, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 8, (int32_t)tmp); }
label_286148:
    // 0x286148: 0x2017  dsrav       $a0, $zero, $zero
    ctx->pc = 0x286148u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_28614c:
    // 0x28614c: 0x3017  dsrav       $a2, $zero, $zero
    ctx->pc = 0x28614cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_286150:
    // 0x286150: 0x7e000  sll         $gp, $a3, 0
    ctx->pc = 0x286150u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 7), 0));
label_286154:
    // 0x286154: 0x20100000  addi        $s0, $zero, 0x0
    ctx->pc = 0x286154u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 0), (int32_t)0, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 16, (int32_t)tmp); }
label_286158:
    // 0x286158: 0x4017  dsrav       $t0, $zero, $zero
    ctx->pc = 0x286158u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_28615c:
    // 0x28615c: 0x5017  dsrav       $t2, $zero, $zero
    ctx->pc = 0x28615cu;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_286160:
    // 0x286160: 0x7e000  sll         $gp, $a3, 0
    ctx->pc = 0x286160u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 7), 0));
label_286164:
    // 0x286164: 0x20180000  addi        $t8, $zero, 0x0
    ctx->pc = 0x286164u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 0), (int32_t)0, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 24, (int32_t)tmp); }
label_286168:
    // 0x286168: 0x6017  dsrav       $t4, $zero, $zero
    ctx->pc = 0x286168u;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_28616c:
    // 0x28616c: 0x7017  dsrav       $t6, $zero, $zero
    ctx->pc = 0x28616cu;
    SET_GPR_S64(ctx, 14, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_286170:
    // 0x286170: 0x1fe000  sll         $gp, $ra, 0
    ctx->pc = 0x286170u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 31), 0));
label_286174:
    // 0x286174: 0x20200000  addi        $zero, $at, 0x0
    ctx->pc = 0x286174u;
    // NOP (addi to $zero)
label_286178:
    // 0x286178: 0x8017  dsrav       $s0, $zero, $zero
    ctx->pc = 0x286178u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_28617c:
    // 0x28617c: 0xc017  dsrav       $t8, $zero, $zero
    ctx->pc = 0x28617cu;
    SET_GPR_S64(ctx, 24, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_286180:
    // 0x286180: 0x1fe000  sll         $gp, $ra, 0
    ctx->pc = 0x286180u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 31), 0));
label_286184:
    // 0x286184: 0x20400000  addi        $zero, $v0, 0x0
    ctx->pc = 0x286184u;
    // NOP (addi to $zero)
label_286188:
    // 0x286188: 0x10017  dsrav       $zero, $at, $zero
    ctx->pc = 0x286188u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_28618c:
    // 0x28618c: 0x14017  dsrav       $t0, $at, $zero
    ctx->pc = 0x28618cu;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_286190:
    // 0x286190: 0x1fe000  sll         $gp, $ra, 0
    ctx->pc = 0x286190u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 31), 0));
label_286194:
    // 0x286194: 0x20600000  addi        $zero, $v1, 0x0
    ctx->pc = 0x286194u;
    // NOP (addi to $zero)
label_286198:
    // 0x286198: 0x18017  dsrav       $s0, $at, $zero
    ctx->pc = 0x286198u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_28619c:
    // 0x28619c: 0x1c017  dsrav       $t8, $at, $zero
    ctx->pc = 0x28619cu;
    SET_GPR_S64(ctx, 24, GPR_S64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_2861a0:
    // 0x2861a0: 0x7fe000  .word       0x007FE000                   # sll         $gp, $ra, 0 # 00600000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2861a0u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 31), 0));
label_2861a4:
    // 0x2861a4: 0x20800000  addi        $zero, $a0, 0x0
    ctx->pc = 0x2861a4u;
    // NOP (addi to $zero)
label_2861a8:
    // 0x2861a8: 0x20017  dsrav       $zero, $v0, $zero
    ctx->pc = 0x2861a8u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 2) >> (GPR_U32(ctx, 0) & 0x3F));
label_2861ac:
    // 0x2861ac: 0x30017  dsrav       $zero, $v1, $zero
    ctx->pc = 0x2861acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 3) >> (GPR_U32(ctx, 0) & 0x3F));
label_2861b0:
    // 0x2861b0: 0x7fe000  .word       0x007FE000                   # sll         $gp, $ra, 0 # 00600000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2861b0u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 31), 0));
label_2861b4:
    // 0x2861b4: 0x21000000  addi        $zero, $t0, 0x0
    ctx->pc = 0x2861b4u;
    // NOP (addi to $zero)
label_2861b8:
    // 0x2861b8: 0x40017  dsrav       $zero, $a0, $zero
    ctx->pc = 0x2861b8u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 4) >> (GPR_U32(ctx, 0) & 0x3F));
label_2861bc:
    // 0x2861bc: 0x50017  dsrav       $zero, $a1, $zero
    ctx->pc = 0x2861bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 5) >> (GPR_U32(ctx, 0) & 0x3F));
label_2861c0:
    // 0x2861c0: 0x7fe000  .word       0x007FE000                   # sll         $gp, $ra, 0 # 00600000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2861c0u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 31), 0));
label_2861c4:
    // 0x2861c4: 0x21800000  addi        $zero, $t4, 0x0
    ctx->pc = 0x2861c4u;
    // NOP (addi to $zero)
label_2861c8:
    // 0x2861c8: 0x60017  dsrav       $zero, $a2, $zero
    ctx->pc = 0x2861c8u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 6) >> (GPR_U32(ctx, 0) & 0x3F));
label_2861cc:
    // 0x2861cc: 0x70017  dsrav       $zero, $a3, $zero
    ctx->pc = 0x2861ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 7) >> (GPR_U32(ctx, 0) & 0x3F));
label_2861d0:
    // 0x2861d0: 0x7e000  sll         $gp, $a3, 0
    ctx->pc = 0x2861d0u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 7), 0));
label_2861d4:
    // 0x2861d4: 0x30100000  andi        $s0, $zero, 0x0
    ctx->pc = 0x2861d4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)0);
label_2861d8:
    // 0x2861d8: 0x403f  dsra32      $t0, $zero, 0
    ctx->pc = 0x2861d8u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 0) >> (32 + 0));
label_2861dc:
    // 0x2861dc: 0x503f  dsra32      $t2, $zero, 0
    ctx->pc = 0x2861dcu;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 0) >> (32 + 0));
label_2861e0:
    // 0x2861e0: 0x7e000  sll         $gp, $a3, 0
    ctx->pc = 0x2861e0u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 7), 0));
label_2861e4:
    // 0x2861e4: 0x30180000  andi        $t8, $zero, 0x0
    ctx->pc = 0x2861e4u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)0);
label_2861e8:
    // 0x2861e8: 0x603f  dsra32      $t4, $zero, 0
    ctx->pc = 0x2861e8u;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 0) >> (32 + 0));
label_2861ec:
    // 0x2861ec: 0x703f  dsra32      $t6, $zero, 0
    ctx->pc = 0x2861ecu;
    SET_GPR_S64(ctx, 14, GPR_S64(ctx, 0) >> (32 + 0));
label_2861f0:
    // 0x2861f0: 0x1fe000  sll         $gp, $ra, 0
    ctx->pc = 0x2861f0u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 31), 0));
label_2861f4:
    // 0x2861f4: 0x30200000  andi        $zero, $at, 0x0
    ctx->pc = 0x2861f4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)0);
label_2861f8:
    // 0x2861f8: 0x803f  dsra32      $s0, $zero, 0
    ctx->pc = 0x2861f8u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 0) >> (32 + 0));
label_2861fc:
    // 0x2861fc: 0xc03f  dsra32      $t8, $zero, 0
    ctx->pc = 0x2861fcu;
    SET_GPR_S64(ctx, 24, GPR_S64(ctx, 0) >> (32 + 0));
label_286200:
    // 0x286200: 0x1fe000  sll         $gp, $ra, 0
    ctx->pc = 0x286200u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 31), 0));
label_286204:
    // 0x286204: 0x30400000  andi        $zero, $v0, 0x0
    ctx->pc = 0x286204u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)0);
label_286208:
    // 0x286208: 0x1003f  dsra32      $zero, $at, 0
    ctx->pc = 0x286208u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 1) >> (32 + 0));
label_28620c:
    // 0x28620c: 0x1403f  dsra32      $t0, $at, 0
    ctx->pc = 0x28620cu;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 1) >> (32 + 0));
label_286210:
    // 0x286210: 0x1fe000  sll         $gp, $ra, 0
    ctx->pc = 0x286210u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 31), 0));
label_286214:
    // 0x286214: 0x30600000  andi        $zero, $v1, 0x0
    ctx->pc = 0x286214u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)0);
label_286218:
    // 0x286218: 0x1803f  dsra32      $s0, $at, 0
    ctx->pc = 0x286218u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 1) >> (32 + 0));
label_28621c:
    // 0x28621c: 0x1c03f  dsra32      $t8, $at, 0
    ctx->pc = 0x28621cu;
    SET_GPR_S64(ctx, 24, GPR_S64(ctx, 1) >> (32 + 0));
label_286220:
    // 0x286220: 0x7fe000  .word       0x007FE000                   # sll         $gp, $ra, 0 # 00600000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x286220u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 31), 0));
label_286224:
    // 0x286224: 0x30800000  andi        $zero, $a0, 0x0
    ctx->pc = 0x286224u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)0);
label_286228:
    // 0x286228: 0x2003f  dsra32      $zero, $v0, 0
    ctx->pc = 0x286228u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 2) >> (32 + 0));
label_28622c:
    // 0x28622c: 0x3003f  dsra32      $zero, $v1, 0
    ctx->pc = 0x28622cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 3) >> (32 + 0));
label_286230:
    // 0x286230: 0x7fe000  .word       0x007FE000                   # sll         $gp, $ra, 0 # 00600000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x286230u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 31), 0));
label_286234:
    // 0x286234: 0x31000000  andi        $zero, $t0, 0x0
    ctx->pc = 0x286234u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)0);
label_286238:
    // 0x286238: 0x4003f  dsra32      $zero, $a0, 0
    ctx->pc = 0x286238u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 4) >> (32 + 0));
label_28623c:
    // 0x28623c: 0x5003f  dsra32      $zero, $a1, 0
    ctx->pc = 0x28623cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 5) >> (32 + 0));
label_286240:
    // 0x286240: 0x7fe000  .word       0x007FE000                   # sll         $gp, $ra, 0 # 00600000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x286240u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 31), 0));
label_286244:
    // 0x286244: 0x31800000  andi        $zero, $t4, 0x0
    ctx->pc = 0x286244u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)0);
label_286248:
    // 0x286248: 0x6003f  dsra32      $zero, $a2, 0
    ctx->pc = 0x286248u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 6) >> (32 + 0));
label_28624c:
    // 0x28624c: 0x7003f  dsra32      $zero, $a3, 0
    ctx->pc = 0x28624cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 7) >> (32 + 0));
label_286250:
    // 0x286250: 0xd  break       0
    ctx->pc = 0x286250u;
    runtime->handleBreak(rdram, ctx);
label_286254:
    // 0x286254: 0x12  mflo        $zero
    ctx->pc = 0x286254u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_286258:
    // 0x286258: 0x8  jr          $zero
label_28625c:
    if (ctx->pc == 0x28625Cu) {
        ctx->pc = 0x286260u;
        goto label_286260;
    }
    ctx->pc = 0x286258u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x286258u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x286260u;
label_286260:
    // 0x286260: 0x285fe0  .word       0x00285FE0                   # add         $t3, $at, $t0 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x286260u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 8);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_286264:
    // 0x286264: 0x2860b0  tge         $at, $t0, 386
    ctx->pc = 0x286264u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 8)) { runtime->handleTrap(rdram, ctx); }
label_286268:
    // 0x286268: 0x2861d0  .word       0x002861D0                   # mfhi        $t4 # 002801C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x286268u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_28626c:
    // 0x28626c: 0x0  nop
    ctx->pc = 0x28626cu;
    // NOP
label_286270:
    // 0x286270: 0x0  nop
    ctx->pc = 0x286270u;
    // NOP
label_286274:
    // 0x286274: 0x0  nop
    ctx->pc = 0x286274u;
    // NOP
label_286278:
    // 0x286278: 0x83  sra         $zero, $zero, 2
    ctx->pc = 0x286278u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 2));
label_28627c:
    // 0x28627c: 0x1ad550  .word       0x001AD550                   # mfhi        $k0 # 001A0540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28627cu;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_286280:
    // 0x286280: 0x5a  .word       0x0000005A                   # div         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x286280u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_286284:
    // 0x286284: 0x1ad518  .word       0x001AD518                   # mult        $k0, $zero, $k0 # 00000500 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x286284u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 26); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 26, (int32_t)result); }
label_286288:
    // 0x286288: 0x0  nop
    ctx->pc = 0x286288u;
    // NOP
label_28628c:
    // 0x28628c: 0x0  nop
    ctx->pc = 0x28628cu;
    // NOP
label_286290:
    // 0x286290: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x286290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_286294:
    // 0x286294: 0x24050026  addiu       $a1, $zero, 0x26
    ctx->pc = 0x286294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
label_286298:
    // 0x286298: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x286298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_28629c:
    // 0x28629c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28629cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2862a0:
    // 0x2862a0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2862a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2862a4:
    // 0x2862a4: 0x3c048007  lui         $a0, 0x8007
    ctx->pc = 0x2862a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32775 << 16));
label_2862a8:
    // 0x2862a8: 0xc01d07a  jal         func_0741E8
label_2862ac:
    if (ctx->pc == 0x2862ACu) {
        ctx->pc = 0x2862ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2862A8u;
        // 0x2862ac: 0x24844700  addiu       $a0, $a0, 0x4700 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2862B0u;
        goto label_2862b0;
    }
    ctx->pc = 0x2862A8u;
    SET_GPR_U32(ctx, 31, 0x2862B0u);
    ctx->pc = 0x2862ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2862A8u;
    // 0x2862ac: 0x24844700  addiu       $a0, $a0, 0x4700 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x741E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x741E8u, 0x2862A8u, 0x2862B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2862B0u;
label_2862b0:
    // 0x2862b0: 0x3c028007  lui         $v0, 0x8007
    ctx->pc = 0x2862b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32775 << 16));
label_2862b4:
    // 0x2862b4: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x2862b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_2862b8:
    // 0x2862b8: 0x3c0603ff  lui         $a2, 0x3FF
    ctx->pc = 0x2862b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1023 << 16));
label_2862bc:
    // 0x2862bc: 0x3c070c00  lui         $a3, 0xC00
    ctx->pc = 0x2862bcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3072 << 16));
label_2862c0:
    // 0x2862c0: 0x24434780  addiu       $v1, $v0, 0x4780
    ctx->pc = 0x2862c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 18304));
label_2862c4:
    // 0x2862c4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2862c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2862c8:
    // 0x2862c8: 0x34a5c402  ori         $a1, $a1, 0xC402
    ctx->pc = 0x2862c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)50178);
label_2862cc:
    // 0x2862cc: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x2862ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_2862d0:
    // 0x2862d0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2862d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2862d4:
    // 0x2862d4: 0x56020007  bnel        $s0, $v0, . + 4 + (0x7 << 2)
label_2862d8:
    if (ctx->pc == 0x2862D8u) {
        ctx->pc = 0x2862D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2862D4u;
        // 0x2862d8: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2862DCu;
        goto label_2862dc;
    }
    ctx->pc = 0x2862D4u;
    {
        const bool branch_taken_0x2862d4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2862d4) {
            ctx->pc = 0x2862D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2862D4u;
            // 0x2862d8: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2862F4u;
            goto label_2862f4;
        }
    }
    ctx->pc = 0x2862DCu;
label_2862dc:
    // 0x2862dc: 0x16050009  bne         $s0, $a1, . + 4 + (0x9 << 2)
label_2862e0:
    if (ctx->pc == 0x2862E0u) {
        ctx->pc = 0x2862E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2862DCu;
        // 0x2862e0: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2862E4u;
        goto label_2862e4;
    }
    ctx->pc = 0x2862DCu;
    {
        const bool branch_taken_0x2862dc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 5));
        ctx->pc = 0x2862E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2862DCu;
        // 0x2862e0: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2862dc) {
            ctx->pc = 0x286304u;
            goto label_286304;
        }
    }
    ctx->pc = 0x2862E4u;
label_2862e4:
    // 0x2862e4: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x2862e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
label_2862e8:
    // 0x2862e8: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x2862e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
label_2862ec:
    // 0x2862ec: 0x10000005  b           . + 4 + (0x5 << 2)
label_2862f0:
    if (ctx->pc == 0x2862F0u) {
        ctx->pc = 0x2862F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2862ECu;
        // 0x2862f0: 0x471025  or          $v0, $v0, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2862F4u;
        goto label_2862f4;
    }
    ctx->pc = 0x2862ECu;
    {
        const bool branch_taken_0x2862ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2862F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2862ECu;
        // 0x2862f0: 0x471025  or          $v0, $v0, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2862ec) {
            ctx->pc = 0x286304u;
            goto label_286304;
        }
    }
    ctx->pc = 0x2862F4u;
label_2862f4:
    // 0x2862f4: 0x2c820005  sltiu       $v0, $a0, 0x5
    ctx->pc = 0x2862f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_2862f8:
    // 0x2862f8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_2862fc:
    if (ctx->pc == 0x2862FCu) {
        ctx->pc = 0x2862FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2862F8u;
        // 0x2862fc: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286300u;
        goto label_286300;
    }
    ctx->pc = 0x2862F8u;
    {
        const bool branch_taken_0x2862f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2862FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2862F8u;
        // 0x2862fc: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2862f8) {
            ctx->pc = 0x2862D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2862d0;
        }
    }
    ctx->pc = 0x286300u;
label_286300:
    // 0x286300: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x286300u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_286304:
    // 0x286304: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x286304u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_286308:
    // 0x286308: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x286308u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28630c:
    // 0x28630c: 0x3e00008  jr          $ra
label_286310:
    if (ctx->pc == 0x286310u) {
        ctx->pc = 0x286310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28630Cu;
        // 0x286310: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286314u;
        goto label_286314;
    }
    ctx->pc = 0x28630Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x286310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28630Cu;
        // 0x286310: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28630Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x286314u;
label_286314:
    // 0x286314: 0x0  nop
    ctx->pc = 0x286314u;
    // NOP
label_286318:
    // 0x286318: 0x3c058007  lui         $a1, 0x8007
    ctx->pc = 0x286318u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32775 << 16));
label_28631c:
    // 0x28631c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x28631cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_286320:
    // 0x286320: 0x8ca247a8  lw          $v0, 0x47A8($a1)
    ctx->pc = 0x286320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 18344)));
label_286324:
    // 0x286324: 0x2406fffe  addiu       $a2, $zero, -0x2
    ctx->pc = 0x286324u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_286328:
    // 0x286328: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x286328u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
label_28632c:
    // 0x28632c: 0x2407fff9  addiu       $a3, $zero, -0x7
    ctx->pc = 0x28632cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967289));
label_286330:
    // 0x286330: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x286330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_286334:
    // 0x286334: 0x2408fff7  addiu       $t0, $zero, -0x9
    ctx->pc = 0x286334u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
label_286338:
    // 0x286338: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x286338u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_28633c:
    // 0x28633c: 0x2409ffef  addiu       $t1, $zero, -0x11
    ctx->pc = 0x28633cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
label_286340:
    // 0x286340: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x286340u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_286344:
    // 0x286344: 0x240ae01f  addiu       $t2, $zero, -0x1FE1
    ctx->pc = 0x286344u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959135));
label_286348:
    // 0x286348: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x286348u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
label_28634c:
    // 0x28634c: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x28634cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
label_286350:
    // 0x286350: 0x8ca247a8  lw          $v0, 0x47A8($a1)
    ctx->pc = 0x286350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 18344)));
label_286354:
    // 0x286354: 0x34c61fff  ori         $a2, $a2, 0x1FFF
    ctx->pc = 0x286354u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8191);
label_286358:
    // 0x286358: 0x24a747a8  addiu       $a3, $a1, 0x47A8
    ctx->pc = 0x286358u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 18344));
label_28635c:
    // 0x28635c: 0x30420006  andi        $v0, $v0, 0x6
    ctx->pc = 0x28635cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)6);
label_286360:
    // 0x286360: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x286360u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_286364:
    // 0x286364: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x286364u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_286368:
    // 0x286368: 0x681824  and         $v1, $v1, $t0
    ctx->pc = 0x286368u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
label_28636c:
    // 0x28636c: 0x8ca247a8  lw          $v0, 0x47A8($a1)
    ctx->pc = 0x28636cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 18344)));
label_286370:
    // 0x286370: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x286370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_286374:
    // 0x286374: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x286374u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_286378:
    // 0x286378: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x286378u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_28637c:
    // 0x28637c: 0x691824  and         $v1, $v1, $t1
    ctx->pc = 0x28637cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 9));
label_286380:
    // 0x286380: 0x8ca247a8  lw          $v0, 0x47A8($a1)
    ctx->pc = 0x286380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 18344)));
label_286384:
    // 0x286384: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x286384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_286388:
    // 0x286388: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x286388u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_28638c:
    // 0x28638c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x28638cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_286390:
    // 0x286390: 0x6a1824  and         $v1, $v1, $t2
    ctx->pc = 0x286390u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 10));
label_286394:
    // 0x286394: 0x8ca247a8  lw          $v0, 0x47A8($a1)
    ctx->pc = 0x286394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 18344)));
label_286398:
    // 0x286398: 0x30421fe0  andi        $v0, $v0, 0x1FE0
    ctx->pc = 0x286398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8160);
label_28639c:
    // 0x28639c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x28639cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2863a0:
    // 0x2863a0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2863a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_2863a4:
    // 0x2863a4: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x2863a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
label_2863a8:
    // 0x2863a8: 0x8ca247a8  lw          $v0, 0x47A8($a1)
    ctx->pc = 0x2863a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 18344)));
label_2863ac:
    // 0x2863ac: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x2863acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
label_2863b0:
    // 0x2863b0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2863b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2863b4:
    // 0x2863b4: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2863b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_2863b8:
    // 0x2863b8: 0x94e20002  lhu         $v0, 0x2($a3)
    ctx->pc = 0x2863b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
label_2863bc:
    // 0x2863bc: 0x3e00008  jr          $ra
label_2863c0:
    if (ctx->pc == 0x2863C0u) {
        ctx->pc = 0x2863C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2863BCu;
        // 0x2863c0: 0xa4820002  sh          $v0, 0x2($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2863C4u;
        goto label_2863c4;
    }
    ctx->pc = 0x2863BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2863C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2863BCu;
        // 0x2863c0: 0xa4820002  sh          $v0, 0x2($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2863BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2863C4u;
label_2863c4:
    // 0x2863c4: 0x0  nop
    ctx->pc = 0x2863c4u;
    // NOP
label_2863c8:
    // 0x2863c8: 0x3c058007  lui         $a1, 0x8007
    ctx->pc = 0x2863c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32775 << 16));
label_2863cc:
    // 0x2863cc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2863ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2863d0:
    // 0x2863d0: 0x8ca347a8  lw          $v1, 0x47A8($a1)
    ctx->pc = 0x2863d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 18344)));
label_2863d4:
    // 0x2863d4: 0x2406fffe  addiu       $a2, $zero, -0x2
    ctx->pc = 0x2863d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_2863d8:
    // 0x2863d8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2863d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2863dc:
    // 0x2863dc: 0x2407fff9  addiu       $a3, $zero, -0x7
    ctx->pc = 0x2863dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967289));
label_2863e0:
    // 0x2863e0: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x2863e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
label_2863e4:
    // 0x2863e4: 0x2408fff7  addiu       $t0, $zero, -0x9
    ctx->pc = 0x2863e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
label_2863e8:
    // 0x2863e8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2863e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2863ec:
    // 0x2863ec: 0x2409ffef  addiu       $t1, $zero, -0x11
    ctx->pc = 0x2863ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
label_2863f0:
    // 0x2863f0: 0xaca347a8  sw          $v1, 0x47A8($a1)
    ctx->pc = 0x2863f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 18344), GPR_U32(ctx, 3));
label_2863f4:
    // 0x2863f4: 0x240ae01f  addiu       $t2, $zero, -0x1FE1
    ctx->pc = 0x2863f4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959135));
label_2863f8:
    // 0x2863f8: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x2863f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
label_2863fc:
    // 0x2863fc: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x2863fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
label_286400:
    // 0x286400: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x286400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_286404:
    // 0x286404: 0x34c61fff  ori         $a2, $a2, 0x1FFF
    ctx->pc = 0x286404u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8191);
label_286408:
    // 0x286408: 0x24a747a8  addiu       $a3, $a1, 0x47A8
    ctx->pc = 0x286408u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 18344));
label_28640c:
    // 0x28640c: 0x30420006  andi        $v0, $v0, 0x6
    ctx->pc = 0x28640cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)6);
label_286410:
    // 0x286410: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x286410u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_286414:
    // 0x286414: 0xaca347a8  sw          $v1, 0x47A8($a1)
    ctx->pc = 0x286414u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 18344), GPR_U32(ctx, 3));
label_286418:
    // 0x286418: 0x681824  and         $v1, $v1, $t0
    ctx->pc = 0x286418u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
label_28641c:
    // 0x28641c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x28641cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_286420:
    // 0x286420: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x286420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_286424:
    // 0x286424: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x286424u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_286428:
    // 0x286428: 0xaca347a8  sw          $v1, 0x47A8($a1)
    ctx->pc = 0x286428u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 18344), GPR_U32(ctx, 3));
label_28642c:
    // 0x28642c: 0x691824  and         $v1, $v1, $t1
    ctx->pc = 0x28642cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 9));
label_286430:
    // 0x286430: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x286430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_286434:
    // 0x286434: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x286434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_286438:
    // 0x286438: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x286438u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_28643c:
    // 0x28643c: 0xaca347a8  sw          $v1, 0x47A8($a1)
    ctx->pc = 0x28643cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 18344), GPR_U32(ctx, 3));
label_286440:
    // 0x286440: 0x6a1824  and         $v1, $v1, $t2
    ctx->pc = 0x286440u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 10));
label_286444:
    // 0x286444: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x286444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_286448:
    // 0x286448: 0x30421fe0  andi        $v0, $v0, 0x1FE0
    ctx->pc = 0x286448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8160);
label_28644c:
    // 0x28644c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x28644cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_286450:
    // 0x286450: 0xaca347a8  sw          $v1, 0x47A8($a1)
    ctx->pc = 0x286450u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 18344), GPR_U32(ctx, 3));
label_286454:
    // 0x286454: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x286454u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
label_286458:
    // 0x286458: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x286458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_28645c:
    // 0x28645c: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x28645cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
label_286460:
    // 0x286460: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x286460u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_286464:
    // 0x286464: 0xaca347a8  sw          $v1, 0x47A8($a1)
    ctx->pc = 0x286464u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 18344), GPR_U32(ctx, 3));
label_286468:
    // 0x286468: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x286468u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_28646c:
    // 0x28646c: 0x3e00008  jr          $ra
label_286470:
    if (ctx->pc == 0x286470u) {
        ctx->pc = 0x286470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28646Cu;
        // 0x286470: 0xa4e20002  sh          $v0, 0x2($a3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 7), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286474u;
        goto label_286474;
    }
    ctx->pc = 0x28646Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x286470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28646Cu;
        // 0x286470: 0xa4e20002  sh          $v0, 0x2($a3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 7), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28646Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x286474u;
label_286474:
    // 0x286474: 0x0  nop
    ctx->pc = 0x286474u;
    // NOP
label_286478:
    // 0x286478: 0x3c06bc00  lui         $a2, 0xBC00
    ctx->pc = 0x286478u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)48128 << 16));
label_28647c:
    // 0x28647c: 0x8cc603c0  lw          $a2, 0x3C0($a2)
    ctx->pc = 0x28647cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 960)));
label_286480:
    // 0x286480: 0x10c00011  beqz        $a2, . + 4 + (0x11 << 2)
label_286484:
    if (ctx->pc == 0x286484u) {
        ctx->pc = 0x286484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286480u;
        // 0x286484: 0x3c088007  lui         $t0, 0x8007 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32775 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286488u;
        goto label_286488;
    }
    ctx->pc = 0x286480u;
    {
        const bool branch_taken_0x286480 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x286484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286480u;
        // 0x286484: 0x3c088007  lui         $t0, 0x8007 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32775 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286480) {
            ctx->pc = 0x2864C8u;
            goto label_2864c8;
        }
    }
    ctx->pc = 0x286488u;
label_286488:
    // 0x286488: 0x3c02bc00  lui         $v0, 0xBC00
    ctx->pc = 0x286488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48128 << 16));
label_28648c:
    // 0x28648c: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x28648cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_286490:
    // 0x286490: 0x25074700  addiu       $a3, $t0, 0x4700
    ctx->pc = 0x286490u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 18176));
label_286494:
    // 0x286494: 0x24c6000f  addiu       $a2, $a2, 0xF
    ctx->pc = 0x286494u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15));
label_286498:
    // 0x286498: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x286498u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28649c:
    // 0x28649c: 0x0  nop
    ctx->pc = 0x28649cu;
    // NOP
label_2864a0:
    // 0x2864a0: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x2864a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_2864a4:
    // 0x2864a4: 0xe52021  addu        $a0, $a3, $a1
    ctx->pc = 0x2864a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_2864a8:
    // 0x2864a8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2864a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2864ac:
    // 0x2864ac: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2864acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_2864b0:
    // 0x2864b0: 0x28a20026  slti        $v0, $a1, 0x26
    ctx->pc = 0x2864b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)38) ? 1 : 0);
label_2864b4:
    // 0x2864b4: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x2864b4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_2864b8:
    // 0x2864b8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_2864bc:
    if (ctx->pc == 0x2864BCu) {
        ctx->pc = 0x2864C0u;
        goto label_2864c0;
    }
    ctx->pc = 0x2864B8u;
    {
        const bool branch_taken_0x2864b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2864b8) {
            ctx->pc = 0x2864A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2864a0;
        }
    }
    ctx->pc = 0x2864C0u;
label_2864c0:
    // 0x2864c0: 0x10000002  b           . + 4 + (0x2 << 2)
label_2864c4:
    if (ctx->pc == 0x2864C4u) {
        ctx->pc = 0x2864C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2864C0u;
        // 0x2864c4: 0xdd034700  ld          $v1, 0x4700($t0) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 8), 18176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2864C8u;
        goto label_2864c8;
    }
    ctx->pc = 0x2864C0u;
    {
        const bool branch_taken_0x2864c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2864C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2864C0u;
        // 0x2864c4: 0xdd034700  ld          $v1, 0x4700($t0) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 8), 18176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2864c0) {
            ctx->pc = 0x2864CCu;
            goto label_2864cc;
        }
    }
    ctx->pc = 0x2864C8u;
label_2864c8:
    // 0x2864c8: 0xdd034700  ld          $v1, 0x4700($t0)
    ctx->pc = 0x2864c8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 8), 18176)));
label_2864cc:
    // 0x2864cc: 0x316b8  dsll        $v0, $v1, 26
    ctx->pc = 0x2864ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 26);
label_2864d0:
    // 0x2864d0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2864d0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_2864d4:
    // 0x2864d4: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x2864d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_2864d8:
    // 0x2864d8: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
label_2864dc:
    if (ctx->pc == 0x2864DCu) {
        ctx->pc = 0x2864E0u;
        goto label_2864e0;
    }
    ctx->pc = 0x2864D8u;
    {
        const bool branch_taken_0x2864d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2864d8) {
            ctx->pc = 0x286530u;
            goto label_286530;
        }
    }
    ctx->pc = 0x2864E0u;
label_2864e0:
    // 0x2864e0: 0x2402feff  addiu       $v0, $zero, -0x101
    ctx->pc = 0x2864e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
label_2864e4:
    // 0x2864e4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2864e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_2864e8:
    // 0x2864e8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2864e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_2864ec:
    // 0x2864ec: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2864ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_2864f0:
    // 0x2864f0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2864f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_2864f4:
    // 0x2864f4: 0x2404f3ff  addiu       $a0, $zero, -0xC01
    ctx->pc = 0x2864f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294964223));
label_2864f8:
    // 0x2864f8: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x2864f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
label_2864fc:
    // 0x2864fc: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x2864fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_286500:
    // 0x286500: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x286500u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
label_286504:
    // 0x286504: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x286504u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_286508:
    // 0x286508: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x286508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_28650c:
    // 0x28650c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x28650cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_286510:
    // 0x286510: 0x34630fff  ori         $v1, $v1, 0xFFF
    ctx->pc = 0x286510u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4095);
label_286514:
    // 0x286514: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x286514u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_286518:
    // 0x286518: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x286518u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_28651c:
    // 0x28651c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x28651cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_286520:
    // 0x286520: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x286520u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_286524:
    // 0x286524: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x286524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_286528:
    // 0x286528: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x286528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_28652c:
    // 0x28652c: 0xfd024700  sd          $v0, 0x4700($t0)
    ctx->pc = 0x28652cu;
    WRITE64(ADD32(GPR_U32(ctx, 8), 18176), GPR_U64(ctx, 2));
label_286530:
    // 0x286530: 0x3e00008  jr          $ra
label_286534:
    if (ctx->pc == 0x286534u) {
        ctx->pc = 0x286538u;
        goto label_286538;
    }
    ctx->pc = 0x286530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x286530u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x286538u;
label_286538:
    // 0x286538: 0xa63821  addu        $a3, $a1, $a2
    ctx->pc = 0x286538u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_28653c:
    // 0x28653c: 0x2ce20081  sltiu       $v0, $a3, 0x81
    ctx->pc = 0x28653cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
label_286540:
    // 0x286540: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_286544:
    if (ctx->pc == 0x286544u) {
        ctx->pc = 0x286544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286540u;
        // 0x286544: 0x80502d  daddu       $t2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286548u;
        goto label_286548;
    }
    ctx->pc = 0x286540u;
    {
        const bool branch_taken_0x286540 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x286544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286540u;
        // 0x286544: 0x80502d  daddu       $t2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286540) {
            ctx->pc = 0x286564u;
            goto label_286564;
        }
    }
    ctx->pc = 0x286548u;
label_286548:
    // 0x286548: 0x2cc20080  sltiu       $v0, $a2, 0x80
    ctx->pc = 0x286548u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
label_28654c:
    // 0x28654c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_286550:
    if (ctx->pc == 0x286550u) {
        ctx->pc = 0x286550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28654Cu;
        // 0x286550: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286554u;
        goto label_286554;
    }
    ctx->pc = 0x28654Cu;
    {
        const bool branch_taken_0x28654c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x286550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28654Cu;
        // 0x286550: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28654c) {
            ctx->pc = 0x28655Cu;
            goto label_28655c;
        }
    }
    ctx->pc = 0x286554u;
label_286554:
    // 0x286554: 0x10000003  b           . + 4 + (0x3 << 2)
label_286558:
    if (ctx->pc == 0x286558u) {
        ctx->pc = 0x286558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286554u;
        // 0x286558: 0x462823  subu        $a1, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28655Cu;
        goto label_28655c;
    }
    ctx->pc = 0x286554u;
    {
        const bool branch_taken_0x286554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286554u;
        // 0x286558: 0x462823  subu        $a1, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286554) {
            ctx->pc = 0x286564u;
            goto label_286564;
        }
    }
    ctx->pc = 0x28655Cu;
label_28655c:
    // 0x28655c: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x28655cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_286560:
    // 0x286560: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x286560u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_286564:
    // 0x286564: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x286564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_286568:
    // 0x286568: 0xc5102b  sltu        $v0, $a2, $a1
    ctx->pc = 0x286568u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_28656c:
    // 0x28656c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_286570:
    if (ctx->pc == 0x286570u) {
        ctx->pc = 0x286570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28656Cu;
        // 0x286570: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286574u;
        goto label_286574;
    }
    ctx->pc = 0x28656Cu;
    {
        const bool branch_taken_0x28656c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x286570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28656Cu;
        // 0x286570: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28656c) {
            ctx->pc = 0x2865ACu;
            goto label_2865ac;
        }
    }
    ctx->pc = 0x286574u;
label_286574:
    // 0x286574: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x286574u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_286578:
    // 0x286578: 0x3c098007  lui         $t1, 0x8007
    ctx->pc = 0x286578u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)32775 << 16));
label_28657c:
    // 0x28657c: 0x3c058007  lui         $a1, 0x8007
    ctx->pc = 0x28657cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32775 << 16));
label_286580:
    // 0x286580: 0x24a247b0  addiu       $v0, $a1, 0x47B0
    ctx->pc = 0x286580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 18352));
label_286584:
    // 0x286584: 0x1482021  addu        $a0, $t2, $t0
    ctx->pc = 0x286584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
label_286588:
    // 0x286588: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x286588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_28658c:
    // 0x28658c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x28658cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_286590:
    // 0x286590: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x286590u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_286594:
    // 0x286594: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x286594u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_286598:
    // 0x286598: 0xc7102b  sltu        $v0, $a2, $a3
    ctx->pc = 0x286598u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_28659c:
    // 0x28659c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_2865a0:
    if (ctx->pc == 0x2865A0u) {
        ctx->pc = 0x2865A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28659Cu;
        // 0x2865a0: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2865A4u;
        goto label_2865a4;
    }
    ctx->pc = 0x28659Cu;
    {
        const bool branch_taken_0x28659c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2865A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28659Cu;
        // 0x2865a0: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28659c) {
            ctx->pc = 0x286580u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_286580;
        }
    }
    ctx->pc = 0x2865A4u;
label_2865a4:
    // 0x2865a4: 0x10000003  b           . + 4 + (0x3 << 2)
label_2865a8:
    if (ctx->pc == 0x2865A8u) {
        ctx->pc = 0x2865A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2865A4u;
        // 0x2865a8: 0xdd234700  ld          $v1, 0x4700($t1) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 9), 18176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2865ACu;
        goto label_2865ac;
    }
    ctx->pc = 0x2865A4u;
    {
        const bool branch_taken_0x2865a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2865A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2865A4u;
        // 0x2865a8: 0xdd234700  ld          $v1, 0x4700($t1) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 9), 18176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2865a4) {
            ctx->pc = 0x2865B4u;
            goto label_2865b4;
        }
    }
    ctx->pc = 0x2865ACu;
label_2865ac:
    // 0x2865ac: 0x3c098007  lui         $t1, 0x8007
    ctx->pc = 0x2865acu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)32775 << 16));
label_2865b0:
    // 0x2865b0: 0xdd234700  ld          $v1, 0x4700($t1)
    ctx->pc = 0x2865b0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 9), 18176)));
label_2865b4:
    // 0x2865b4: 0x316b8  dsll        $v0, $v1, 26
    ctx->pc = 0x2865b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 26);
label_2865b8:
    // 0x2865b8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2865b8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_2865bc:
    // 0x2865bc: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x2865bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_2865c0:
    // 0x2865c0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2865c4:
    if (ctx->pc == 0x2865C4u) {
        ctx->pc = 0x2865C8u;
        goto label_2865c8;
    }
    ctx->pc = 0x2865C0u;
    {
        const bool branch_taken_0x2865c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2865c0) {
            ctx->pc = 0x2865D0u;
            goto label_2865d0;
        }
    }
    ctx->pc = 0x2865C8u;
label_2865c8:
    // 0x2865c8: 0x3e00008  jr          $ra
label_2865cc:
    if (ctx->pc == 0x2865CCu) {
        ctx->pc = 0x2865CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2865C8u;
        // 0x2865cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2865D0u;
        goto label_2865d0;
    }
    ctx->pc = 0x2865C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2865CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2865C8u;
        // 0x2865cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2865C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2865D0u;
label_2865d0:
    // 0x2865d0: 0x3133e  dsrl32      $v0, $v1, 12
    ctx->pc = 0x2865d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) >> (32 + 12));
label_2865d4:
    // 0x2865d4: 0x3e00008  jr          $ra
label_2865d8:
    if (ctx->pc == 0x2865D8u) {
        ctx->pc = 0x2865D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2865D4u;
        // 0x2865d8: 0x3042000f  andi        $v0, $v0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2865DCu;
        goto label_2865dc;
    }
    ctx->pc = 0x2865D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2865D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2865D4u;
        // 0x2865d8: 0x3042000f  andi        $v0, $v0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2865D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2865DCu;
label_2865dc:
    // 0x2865dc: 0x0  nop
    ctx->pc = 0x2865dcu;
    // NOP
label_2865e0:
    // 0x2865e0: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x2865e0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2865e4:
    // 0x2865e4: 0x662821  addu        $a1, $v1, $a2
    ctx->pc = 0x2865e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_2865e8:
    // 0x2865e8: 0x2ca20081  sltiu       $v0, $a1, 0x81
    ctx->pc = 0x2865e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
label_2865ec:
    // 0x2865ec: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_2865f0:
    if (ctx->pc == 0x2865F0u) {
        ctx->pc = 0x2865F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2865ECu;
        // 0x2865f0: 0x80482d  daddu       $t1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2865F4u;
        goto label_2865f4;
    }
    ctx->pc = 0x2865ECu;
    {
        const bool branch_taken_0x2865ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2865F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2865ECu;
        // 0x2865f0: 0x80482d  daddu       $t1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2865ec) {
            ctx->pc = 0x286614u;
            goto label_286614;
        }
    }
    ctx->pc = 0x2865F4u;
label_2865f4:
    // 0x2865f4: 0x2cc20080  sltiu       $v0, $a2, 0x80
    ctx->pc = 0x2865f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
label_2865f8:
    // 0x2865f8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2865fc:
    if (ctx->pc == 0x2865FCu) {
        ctx->pc = 0x2865FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2865F8u;
        // 0x2865fc: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286600u;
        goto label_286600;
    }
    ctx->pc = 0x2865F8u;
    {
        const bool branch_taken_0x2865f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2865FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2865F8u;
        // 0x2865fc: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2865f8) {
            ctx->pc = 0x286608u;
            goto label_286608;
        }
    }
    ctx->pc = 0x286600u;
label_286600:
    // 0x286600: 0x10000003  b           . + 4 + (0x3 << 2)
label_286604:
    if (ctx->pc == 0x286604u) {
        ctx->pc = 0x286604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286600u;
        // 0x286604: 0x461823  subu        $v1, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286608u;
        goto label_286608;
    }
    ctx->pc = 0x286600u;
    {
        const bool branch_taken_0x286600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286600u;
        // 0x286604: 0x461823  subu        $v1, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286600) {
            ctx->pc = 0x286610u;
            goto label_286610;
        }
    }
    ctx->pc = 0x286608u;
label_286608:
    // 0x286608: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x286608u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_28660c:
    // 0x28660c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x28660cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_286610:
    // 0x286610: 0x662821  addu        $a1, $v1, $a2
    ctx->pc = 0x286610u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_286614:
    // 0x286614: 0xc5102b  sltu        $v0, $a2, $a1
    ctx->pc = 0x286614u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_286618:
    // 0x286618: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_28661c:
    if (ctx->pc == 0x28661Cu) {
        ctx->pc = 0x28661Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286618u;
        // 0x28661c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286620u;
        { ctx->pc = 0x286620; return; }
    }
    ctx->pc = 0x286618u;
    {
        const bool branch_taken_0x286618 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28661Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286618u;
        // 0x28661c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286618) {
            ctx->pc = 0x28664Cu;
            { ctx->pc = 0x28664c; return; }
        }
    }
    ctx->pc = 0x286620u;
    ctx->pc = 0x286620u;
    return;
}

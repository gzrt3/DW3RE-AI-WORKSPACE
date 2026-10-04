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

// Function: FUN_0019b8d0
// Address: 0x19b8d0 - 0x29b8d8
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b8d0_part106(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1ced20u: goto label_1ced20;
        case 0x1ced24u: goto label_1ced24;
        case 0x1ced28u: goto label_1ced28;
        case 0x1ced2cu: goto label_1ced2c;
        case 0x1ced30u: goto label_1ced30;
        case 0x1ced34u: goto label_1ced34;
        case 0x1ced38u: goto label_1ced38;
        case 0x1ced3cu: goto label_1ced3c;
        case 0x1ced40u: goto label_1ced40;
        case 0x1ced44u: goto label_1ced44;
        case 0x1ced48u: goto label_1ced48;
        case 0x1ced4cu: goto label_1ced4c;
        case 0x1ced50u: goto label_1ced50;
        case 0x1ced54u: goto label_1ced54;
        case 0x1ced58u: goto label_1ced58;
        case 0x1ced5cu: goto label_1ced5c;
        case 0x1ced60u: goto label_1ced60;
        case 0x1ced64u: goto label_1ced64;
        case 0x1ced68u: goto label_1ced68;
        case 0x1ced6cu: goto label_1ced6c;
        case 0x1ced70u: goto label_1ced70;
        case 0x1ced74u: goto label_1ced74;
        case 0x1ced78u: goto label_1ced78;
        case 0x1ced7cu: goto label_1ced7c;
        case 0x1ced80u: goto label_1ced80;
        case 0x1ced84u: goto label_1ced84;
        case 0x1ced88u: goto label_1ced88;
        case 0x1ced8cu: goto label_1ced8c;
        case 0x1ced90u: goto label_1ced90;
        case 0x1ced94u: goto label_1ced94;
        case 0x1ced98u: goto label_1ced98;
        case 0x1ced9cu: goto label_1ced9c;
        case 0x1ceda0u: goto label_1ceda0;
        case 0x1ceda4u: goto label_1ceda4;
        case 0x1ceda8u: goto label_1ceda8;
        case 0x1cedacu: goto label_1cedac;
        case 0x1cedb0u: goto label_1cedb0;
        case 0x1cedb4u: goto label_1cedb4;
        case 0x1cedb8u: goto label_1cedb8;
        case 0x1cedbcu: goto label_1cedbc;
        case 0x1cedc0u: goto label_1cedc0;
        case 0x1cedc4u: goto label_1cedc4;
        case 0x1cedc8u: goto label_1cedc8;
        case 0x1cedccu: goto label_1cedcc;
        case 0x1cedd0u: goto label_1cedd0;
        case 0x1cedd4u: goto label_1cedd4;
        case 0x1cedd8u: goto label_1cedd8;
        case 0x1ceddcu: goto label_1ceddc;
        case 0x1cede0u: goto label_1cede0;
        case 0x1cede4u: goto label_1cede4;
        case 0x1cede8u: goto label_1cede8;
        case 0x1cedecu: goto label_1cedec;
        case 0x1cedf0u: goto label_1cedf0;
        case 0x1cedf4u: goto label_1cedf4;
        case 0x1cedf8u: goto label_1cedf8;
        case 0x1cedfcu: goto label_1cedfc;
        case 0x1cee00u: goto label_1cee00;
        case 0x1cee04u: goto label_1cee04;
        case 0x1cee08u: goto label_1cee08;
        case 0x1cee0cu: goto label_1cee0c;
        case 0x1cee10u: goto label_1cee10;
        case 0x1cee14u: goto label_1cee14;
        case 0x1cee18u: goto label_1cee18;
        case 0x1cee1cu: goto label_1cee1c;
        case 0x1cee20u: goto label_1cee20;
        case 0x1cee24u: goto label_1cee24;
        case 0x1cee28u: goto label_1cee28;
        case 0x1cee2cu: goto label_1cee2c;
        case 0x1cee30u: goto label_1cee30;
        case 0x1cee34u: goto label_1cee34;
        case 0x1cee38u: goto label_1cee38;
        case 0x1cee3cu: goto label_1cee3c;
        case 0x1cee40u: goto label_1cee40;
        case 0x1cee44u: goto label_1cee44;
        case 0x1cee48u: goto label_1cee48;
        case 0x1cee4cu: goto label_1cee4c;
        case 0x1cee50u: goto label_1cee50;
        case 0x1cee54u: goto label_1cee54;
        case 0x1cee58u: goto label_1cee58;
        case 0x1cee5cu: goto label_1cee5c;
        case 0x1cee60u: goto label_1cee60;
        case 0x1cee64u: goto label_1cee64;
        case 0x1cee68u: goto label_1cee68;
        case 0x1cee6cu: goto label_1cee6c;
        case 0x1cee70u: goto label_1cee70;
        case 0x1cee74u: goto label_1cee74;
        case 0x1cee78u: goto label_1cee78;
        case 0x1cee7cu: goto label_1cee7c;
        case 0x1cee80u: goto label_1cee80;
        case 0x1cee84u: goto label_1cee84;
        case 0x1cee88u: goto label_1cee88;
        case 0x1cee8cu: goto label_1cee8c;
        case 0x1cee90u: goto label_1cee90;
        case 0x1cee94u: goto label_1cee94;
        case 0x1cee98u: goto label_1cee98;
        case 0x1cee9cu: goto label_1cee9c;
        case 0x1ceea0u: goto label_1ceea0;
        case 0x1ceea4u: goto label_1ceea4;
        case 0x1ceea8u: goto label_1ceea8;
        case 0x1ceeacu: goto label_1ceeac;
        case 0x1ceeb0u: goto label_1ceeb0;
        case 0x1ceeb4u: goto label_1ceeb4;
        case 0x1ceeb8u: goto label_1ceeb8;
        case 0x1ceebcu: goto label_1ceebc;
        case 0x1ceec0u: goto label_1ceec0;
        case 0x1ceec4u: goto label_1ceec4;
        case 0x1ceec8u: goto label_1ceec8;
        case 0x1ceeccu: goto label_1ceecc;
        case 0x1ceed0u: goto label_1ceed0;
        case 0x1ceed4u: goto label_1ceed4;
        case 0x1ceed8u: goto label_1ceed8;
        case 0x1ceedcu: goto label_1ceedc;
        case 0x1ceee0u: goto label_1ceee0;
        case 0x1ceee4u: goto label_1ceee4;
        case 0x1ceee8u: goto label_1ceee8;
        case 0x1ceeecu: goto label_1ceeec;
        case 0x1ceef0u: goto label_1ceef0;
        case 0x1ceef4u: goto label_1ceef4;
        case 0x1ceef8u: goto label_1ceef8;
        case 0x1ceefcu: goto label_1ceefc;
        case 0x1cef00u: goto label_1cef00;
        case 0x1cef04u: goto label_1cef04;
        case 0x1cef08u: goto label_1cef08;
        case 0x1cef0cu: goto label_1cef0c;
        case 0x1cef10u: goto label_1cef10;
        case 0x1cef14u: goto label_1cef14;
        case 0x1cef18u: goto label_1cef18;
        case 0x1cef1cu: goto label_1cef1c;
        case 0x1cef20u: goto label_1cef20;
        case 0x1cef24u: goto label_1cef24;
        case 0x1cef28u: goto label_1cef28;
        case 0x1cef2cu: goto label_1cef2c;
        case 0x1cef30u: goto label_1cef30;
        case 0x1cef34u: goto label_1cef34;
        case 0x1cef38u: goto label_1cef38;
        case 0x1cef3cu: goto label_1cef3c;
        case 0x1cef40u: goto label_1cef40;
        case 0x1cef44u: goto label_1cef44;
        case 0x1cef48u: goto label_1cef48;
        case 0x1cef4cu: goto label_1cef4c;
        case 0x1cef50u: goto label_1cef50;
        case 0x1cef54u: goto label_1cef54;
        case 0x1cef58u: goto label_1cef58;
        case 0x1cef5cu: goto label_1cef5c;
        case 0x1cef60u: goto label_1cef60;
        case 0x1cef64u: goto label_1cef64;
        case 0x1cef68u: goto label_1cef68;
        case 0x1cef6cu: goto label_1cef6c;
        case 0x1cef70u: goto label_1cef70;
        case 0x1cef74u: goto label_1cef74;
        case 0x1cef78u: goto label_1cef78;
        case 0x1cef7cu: goto label_1cef7c;
        case 0x1cef80u: goto label_1cef80;
        case 0x1cef84u: goto label_1cef84;
        case 0x1cef88u: goto label_1cef88;
        case 0x1cef8cu: goto label_1cef8c;
        case 0x1cef90u: goto label_1cef90;
        case 0x1cef94u: goto label_1cef94;
        case 0x1cef98u: goto label_1cef98;
        case 0x1cef9cu: goto label_1cef9c;
        case 0x1cefa0u: goto label_1cefa0;
        case 0x1cefa4u: goto label_1cefa4;
        case 0x1cefa8u: goto label_1cefa8;
        case 0x1cefacu: goto label_1cefac;
        case 0x1cefb0u: goto label_1cefb0;
        case 0x1cefb4u: goto label_1cefb4;
        case 0x1cefb8u: goto label_1cefb8;
        case 0x1cefbcu: goto label_1cefbc;
        case 0x1cefc0u: goto label_1cefc0;
        case 0x1cefc4u: goto label_1cefc4;
        case 0x1cefc8u: goto label_1cefc8;
        case 0x1cefccu: goto label_1cefcc;
        case 0x1cefd0u: goto label_1cefd0;
        case 0x1cefd4u: goto label_1cefd4;
        case 0x1cefd8u: goto label_1cefd8;
        case 0x1cefdcu: goto label_1cefdc;
        case 0x1cefe0u: goto label_1cefe0;
        case 0x1cefe4u: goto label_1cefe4;
        case 0x1cefe8u: goto label_1cefe8;
        case 0x1cefecu: goto label_1cefec;
        case 0x1ceff0u: goto label_1ceff0;
        case 0x1ceff4u: goto label_1ceff4;
        case 0x1ceff8u: goto label_1ceff8;
        case 0x1ceffcu: goto label_1ceffc;
        case 0x1cf000u: goto label_1cf000;
        case 0x1cf004u: goto label_1cf004;
        case 0x1cf008u: goto label_1cf008;
        case 0x1cf00cu: goto label_1cf00c;
        case 0x1cf010u: goto label_1cf010;
        case 0x1cf014u: goto label_1cf014;
        case 0x1cf018u: goto label_1cf018;
        case 0x1cf01cu: goto label_1cf01c;
        case 0x1cf020u: goto label_1cf020;
        case 0x1cf024u: goto label_1cf024;
        case 0x1cf028u: goto label_1cf028;
        case 0x1cf02cu: goto label_1cf02c;
        case 0x1cf030u: goto label_1cf030;
        case 0x1cf034u: goto label_1cf034;
        case 0x1cf038u: goto label_1cf038;
        case 0x1cf03cu: goto label_1cf03c;
        case 0x1cf040u: goto label_1cf040;
        case 0x1cf044u: goto label_1cf044;
        case 0x1cf048u: goto label_1cf048;
        case 0x1cf04cu: goto label_1cf04c;
        case 0x1cf050u: goto label_1cf050;
        case 0x1cf054u: goto label_1cf054;
        case 0x1cf058u: goto label_1cf058;
        case 0x1cf05cu: goto label_1cf05c;
        case 0x1cf060u: goto label_1cf060;
        case 0x1cf064u: goto label_1cf064;
        case 0x1cf068u: goto label_1cf068;
        case 0x1cf06cu: goto label_1cf06c;
        case 0x1cf070u: goto label_1cf070;
        case 0x1cf074u: goto label_1cf074;
        case 0x1cf078u: goto label_1cf078;
        case 0x1cf07cu: goto label_1cf07c;
        case 0x1cf080u: goto label_1cf080;
        case 0x1cf084u: goto label_1cf084;
        case 0x1cf088u: goto label_1cf088;
        case 0x1cf08cu: goto label_1cf08c;
        case 0x1cf090u: goto label_1cf090;
        case 0x1cf094u: goto label_1cf094;
        case 0x1cf098u: goto label_1cf098;
        case 0x1cf09cu: goto label_1cf09c;
        case 0x1cf0a0u: goto label_1cf0a0;
        case 0x1cf0a4u: goto label_1cf0a4;
        case 0x1cf0a8u: goto label_1cf0a8;
        case 0x1cf0acu: goto label_1cf0ac;
        case 0x1cf0b0u: goto label_1cf0b0;
        case 0x1cf0b4u: goto label_1cf0b4;
        case 0x1cf0b8u: goto label_1cf0b8;
        case 0x1cf0bcu: goto label_1cf0bc;
        case 0x1cf0c0u: goto label_1cf0c0;
        case 0x1cf0c4u: goto label_1cf0c4;
        case 0x1cf0c8u: goto label_1cf0c8;
        case 0x1cf0ccu: goto label_1cf0cc;
        case 0x1cf0d0u: goto label_1cf0d0;
        case 0x1cf0d4u: goto label_1cf0d4;
        case 0x1cf0d8u: goto label_1cf0d8;
        case 0x1cf0dcu: goto label_1cf0dc;
        case 0x1cf0e0u: goto label_1cf0e0;
        case 0x1cf0e4u: goto label_1cf0e4;
        case 0x1cf0e8u: goto label_1cf0e8;
        case 0x1cf0ecu: goto label_1cf0ec;
        case 0x1cf0f0u: goto label_1cf0f0;
        case 0x1cf0f4u: goto label_1cf0f4;
        case 0x1cf0f8u: goto label_1cf0f8;
        case 0x1cf0fcu: goto label_1cf0fc;
        case 0x1cf100u: goto label_1cf100;
        case 0x1cf104u: goto label_1cf104;
        case 0x1cf108u: goto label_1cf108;
        case 0x1cf10cu: goto label_1cf10c;
        case 0x1cf110u: goto label_1cf110;
        case 0x1cf114u: goto label_1cf114;
        case 0x1cf118u: goto label_1cf118;
        case 0x1cf11cu: goto label_1cf11c;
        case 0x1cf120u: goto label_1cf120;
        case 0x1cf124u: goto label_1cf124;
        case 0x1cf128u: goto label_1cf128;
        case 0x1cf12cu: goto label_1cf12c;
        case 0x1cf130u: goto label_1cf130;
        case 0x1cf134u: goto label_1cf134;
        case 0x1cf138u: goto label_1cf138;
        case 0x1cf13cu: goto label_1cf13c;
        case 0x1cf140u: goto label_1cf140;
        case 0x1cf144u: goto label_1cf144;
        case 0x1cf148u: goto label_1cf148;
        case 0x1cf14cu: goto label_1cf14c;
        case 0x1cf150u: goto label_1cf150;
        case 0x1cf154u: goto label_1cf154;
        case 0x1cf158u: goto label_1cf158;
        case 0x1cf15cu: goto label_1cf15c;
        case 0x1cf160u: goto label_1cf160;
        case 0x1cf164u: goto label_1cf164;
        case 0x1cf168u: goto label_1cf168;
        case 0x1cf16cu: goto label_1cf16c;
        case 0x1cf170u: goto label_1cf170;
        case 0x1cf174u: goto label_1cf174;
        case 0x1cf178u: goto label_1cf178;
        case 0x1cf17cu: goto label_1cf17c;
        case 0x1cf180u: goto label_1cf180;
        case 0x1cf184u: goto label_1cf184;
        case 0x1cf188u: goto label_1cf188;
        case 0x1cf18cu: goto label_1cf18c;
        case 0x1cf190u: goto label_1cf190;
        case 0x1cf194u: goto label_1cf194;
        case 0x1cf198u: goto label_1cf198;
        case 0x1cf19cu: goto label_1cf19c;
        case 0x1cf1a0u: goto label_1cf1a0;
        case 0x1cf1a4u: goto label_1cf1a4;
        case 0x1cf1a8u: goto label_1cf1a8;
        case 0x1cf1acu: goto label_1cf1ac;
        case 0x1cf1b0u: goto label_1cf1b0;
        case 0x1cf1b4u: goto label_1cf1b4;
        case 0x1cf1b8u: goto label_1cf1b8;
        case 0x1cf1bcu: goto label_1cf1bc;
        case 0x1cf1c0u: goto label_1cf1c0;
        case 0x1cf1c4u: goto label_1cf1c4;
        case 0x1cf1c8u: goto label_1cf1c8;
        case 0x1cf1ccu: goto label_1cf1cc;
        case 0x1cf1d0u: goto label_1cf1d0;
        case 0x1cf1d4u: goto label_1cf1d4;
        case 0x1cf1d8u: goto label_1cf1d8;
        case 0x1cf1dcu: goto label_1cf1dc;
        case 0x1cf1e0u: goto label_1cf1e0;
        case 0x1cf1e4u: goto label_1cf1e4;
        case 0x1cf1e8u: goto label_1cf1e8;
        case 0x1cf1ecu: goto label_1cf1ec;
        case 0x1cf1f0u: goto label_1cf1f0;
        case 0x1cf1f4u: goto label_1cf1f4;
        case 0x1cf1f8u: goto label_1cf1f8;
        case 0x1cf1fcu: goto label_1cf1fc;
        case 0x1cf200u: goto label_1cf200;
        case 0x1cf204u: goto label_1cf204;
        case 0x1cf208u: goto label_1cf208;
        case 0x1cf20cu: goto label_1cf20c;
        case 0x1cf210u: goto label_1cf210;
        case 0x1cf214u: goto label_1cf214;
        case 0x1cf218u: goto label_1cf218;
        case 0x1cf21cu: goto label_1cf21c;
        case 0x1cf220u: goto label_1cf220;
        case 0x1cf224u: goto label_1cf224;
        case 0x1cf228u: goto label_1cf228;
        case 0x1cf22cu: goto label_1cf22c;
        case 0x1cf230u: goto label_1cf230;
        case 0x1cf234u: goto label_1cf234;
        case 0x1cf238u: goto label_1cf238;
        case 0x1cf23cu: goto label_1cf23c;
        case 0x1cf240u: goto label_1cf240;
        case 0x1cf244u: goto label_1cf244;
        case 0x1cf248u: goto label_1cf248;
        case 0x1cf24cu: goto label_1cf24c;
        case 0x1cf250u: goto label_1cf250;
        case 0x1cf254u: goto label_1cf254;
        case 0x1cf258u: goto label_1cf258;
        case 0x1cf25cu: goto label_1cf25c;
        case 0x1cf260u: goto label_1cf260;
        case 0x1cf264u: goto label_1cf264;
        case 0x1cf268u: goto label_1cf268;
        case 0x1cf26cu: goto label_1cf26c;
        case 0x1cf270u: goto label_1cf270;
        case 0x1cf274u: goto label_1cf274;
        case 0x1cf278u: goto label_1cf278;
        case 0x1cf27cu: goto label_1cf27c;
        case 0x1cf280u: goto label_1cf280;
        case 0x1cf284u: goto label_1cf284;
        case 0x1cf288u: goto label_1cf288;
        case 0x1cf28cu: goto label_1cf28c;
        case 0x1cf290u: goto label_1cf290;
        case 0x1cf294u: goto label_1cf294;
        case 0x1cf298u: goto label_1cf298;
        case 0x1cf29cu: goto label_1cf29c;
        case 0x1cf2a0u: goto label_1cf2a0;
        case 0x1cf2a4u: goto label_1cf2a4;
        case 0x1cf2a8u: goto label_1cf2a8;
        case 0x1cf2acu: goto label_1cf2ac;
        case 0x1cf2b0u: goto label_1cf2b0;
        case 0x1cf2b4u: goto label_1cf2b4;
        case 0x1cf2b8u: goto label_1cf2b8;
        case 0x1cf2bcu: goto label_1cf2bc;
        case 0x1cf2c0u: goto label_1cf2c0;
        case 0x1cf2c4u: goto label_1cf2c4;
        case 0x1cf2c8u: goto label_1cf2c8;
        case 0x1cf2ccu: goto label_1cf2cc;
        case 0x1cf2d0u: goto label_1cf2d0;
        case 0x1cf2d4u: goto label_1cf2d4;
        case 0x1cf2d8u: goto label_1cf2d8;
        case 0x1cf2dcu: goto label_1cf2dc;
        case 0x1cf2e0u: goto label_1cf2e0;
        case 0x1cf2e4u: goto label_1cf2e4;
        case 0x1cf2e8u: goto label_1cf2e8;
        case 0x1cf2ecu: goto label_1cf2ec;
        case 0x1cf2f0u: goto label_1cf2f0;
        case 0x1cf2f4u: goto label_1cf2f4;
        case 0x1cf2f8u: goto label_1cf2f8;
        case 0x1cf2fcu: goto label_1cf2fc;
        case 0x1cf300u: goto label_1cf300;
        case 0x1cf304u: goto label_1cf304;
        case 0x1cf308u: goto label_1cf308;
        case 0x1cf30cu: goto label_1cf30c;
        case 0x1cf310u: goto label_1cf310;
        case 0x1cf314u: goto label_1cf314;
        case 0x1cf318u: goto label_1cf318;
        case 0x1cf31cu: goto label_1cf31c;
        case 0x1cf320u: goto label_1cf320;
        case 0x1cf324u: goto label_1cf324;
        case 0x1cf328u: goto label_1cf328;
        case 0x1cf32cu: goto label_1cf32c;
        case 0x1cf330u: goto label_1cf330;
        case 0x1cf334u: goto label_1cf334;
        case 0x1cf338u: goto label_1cf338;
        case 0x1cf33cu: goto label_1cf33c;
        case 0x1cf340u: goto label_1cf340;
        case 0x1cf344u: goto label_1cf344;
        case 0x1cf348u: goto label_1cf348;
        case 0x1cf34cu: goto label_1cf34c;
        case 0x1cf350u: goto label_1cf350;
        case 0x1cf354u: goto label_1cf354;
        case 0x1cf358u: goto label_1cf358;
        case 0x1cf35cu: goto label_1cf35c;
        case 0x1cf360u: goto label_1cf360;
        case 0x1cf364u: goto label_1cf364;
        case 0x1cf368u: goto label_1cf368;
        case 0x1cf36cu: goto label_1cf36c;
        case 0x1cf370u: goto label_1cf370;
        case 0x1cf374u: goto label_1cf374;
        case 0x1cf378u: goto label_1cf378;
        case 0x1cf37cu: goto label_1cf37c;
        case 0x1cf380u: goto label_1cf380;
        case 0x1cf384u: goto label_1cf384;
        case 0x1cf388u: goto label_1cf388;
        case 0x1cf38cu: goto label_1cf38c;
        case 0x1cf390u: goto label_1cf390;
        case 0x1cf394u: goto label_1cf394;
        case 0x1cf398u: goto label_1cf398;
        case 0x1cf39cu: goto label_1cf39c;
        case 0x1cf3a0u: goto label_1cf3a0;
        case 0x1cf3a4u: goto label_1cf3a4;
        case 0x1cf3a8u: goto label_1cf3a8;
        case 0x1cf3acu: goto label_1cf3ac;
        case 0x1cf3b0u: goto label_1cf3b0;
        case 0x1cf3b4u: goto label_1cf3b4;
        case 0x1cf3b8u: goto label_1cf3b8;
        case 0x1cf3bcu: goto label_1cf3bc;
        case 0x1cf3c0u: goto label_1cf3c0;
        case 0x1cf3c4u: goto label_1cf3c4;
        case 0x1cf3c8u: goto label_1cf3c8;
        case 0x1cf3ccu: goto label_1cf3cc;
        case 0x1cf3d0u: goto label_1cf3d0;
        case 0x1cf3d4u: goto label_1cf3d4;
        case 0x1cf3d8u: goto label_1cf3d8;
        case 0x1cf3dcu: goto label_1cf3dc;
        case 0x1cf3e0u: goto label_1cf3e0;
        case 0x1cf3e4u: goto label_1cf3e4;
        case 0x1cf3e8u: goto label_1cf3e8;
        case 0x1cf3ecu: goto label_1cf3ec;
        case 0x1cf3f0u: goto label_1cf3f0;
        case 0x1cf3f4u: goto label_1cf3f4;
        case 0x1cf3f8u: goto label_1cf3f8;
        case 0x1cf3fcu: goto label_1cf3fc;
        case 0x1cf400u: goto label_1cf400;
        case 0x1cf404u: goto label_1cf404;
        case 0x1cf408u: goto label_1cf408;
        case 0x1cf40cu: goto label_1cf40c;
        case 0x1cf410u: goto label_1cf410;
        case 0x1cf414u: goto label_1cf414;
        case 0x1cf418u: goto label_1cf418;
        case 0x1cf41cu: goto label_1cf41c;
        case 0x1cf420u: goto label_1cf420;
        case 0x1cf424u: goto label_1cf424;
        case 0x1cf428u: goto label_1cf428;
        case 0x1cf42cu: goto label_1cf42c;
        case 0x1cf430u: goto label_1cf430;
        case 0x1cf434u: goto label_1cf434;
        case 0x1cf438u: goto label_1cf438;
        case 0x1cf43cu: goto label_1cf43c;
        case 0x1cf440u: goto label_1cf440;
        case 0x1cf444u: goto label_1cf444;
        case 0x1cf448u: goto label_1cf448;
        case 0x1cf44cu: goto label_1cf44c;
        case 0x1cf450u: goto label_1cf450;
        case 0x1cf454u: goto label_1cf454;
        case 0x1cf458u: goto label_1cf458;
        case 0x1cf45cu: goto label_1cf45c;
        case 0x1cf460u: goto label_1cf460;
        case 0x1cf464u: goto label_1cf464;
        case 0x1cf468u: goto label_1cf468;
        case 0x1cf46cu: goto label_1cf46c;
        case 0x1cf470u: goto label_1cf470;
        case 0x1cf474u: goto label_1cf474;
        case 0x1cf478u: goto label_1cf478;
        case 0x1cf47cu: goto label_1cf47c;
        case 0x1cf480u: goto label_1cf480;
        case 0x1cf484u: goto label_1cf484;
        case 0x1cf488u: goto label_1cf488;
        case 0x1cf48cu: goto label_1cf48c;
        case 0x1cf490u: goto label_1cf490;
        case 0x1cf494u: goto label_1cf494;
        case 0x1cf498u: goto label_1cf498;
        case 0x1cf49cu: goto label_1cf49c;
        case 0x1cf4a0u: goto label_1cf4a0;
        case 0x1cf4a4u: goto label_1cf4a4;
        case 0x1cf4a8u: goto label_1cf4a8;
        case 0x1cf4acu: goto label_1cf4ac;
        case 0x1cf4b0u: goto label_1cf4b0;
        case 0x1cf4b4u: goto label_1cf4b4;
        case 0x1cf4b8u: goto label_1cf4b8;
        case 0x1cf4bcu: goto label_1cf4bc;
        case 0x1cf4c0u: goto label_1cf4c0;
        case 0x1cf4c4u: goto label_1cf4c4;
        case 0x1cf4c8u: goto label_1cf4c8;
        case 0x1cf4ccu: goto label_1cf4cc;
        case 0x1cf4d0u: goto label_1cf4d0;
        case 0x1cf4d4u: goto label_1cf4d4;
        case 0x1cf4d8u: goto label_1cf4d8;
        case 0x1cf4dcu: goto label_1cf4dc;
        case 0x1cf4e0u: goto label_1cf4e0;
        case 0x1cf4e4u: goto label_1cf4e4;
        case 0x1cf4e8u: goto label_1cf4e8;
        case 0x1cf4ecu: goto label_1cf4ec;
        default: return;
    }

label_1ced20:
    // 0x1ced20: 0x8423a050  lh          $v1, -0x5FB0($at)
    ctx->pc = 0x1ced20u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294942800)));
label_1ced24:
    // 0x1ced24: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1ced24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_1ced28:
    // 0x1ced28: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1ced28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_1ced2c:
    // 0x1ced2c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1ced2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1ced30:
    // 0x1ced30: 0x24636c00  addiu       $v1, $v1, 0x6C00
    ctx->pc = 0x1ced30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
label_1ced34:
    // 0x1ced34: 0xa4430080  sh          $v1, 0x80($v0)
    ctx->pc = 0x1ced34u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 128), (uint16_t)GPR_U32(ctx, 3));
label_1ced38:
    // 0x1ced38: 0x8423a050  lh          $v1, -0x5FB0($at)
    ctx->pc = 0x1ced38u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294942800)));
label_1ced3c:
    // 0x1ced3c: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1ced3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_1ced40:
    // 0x1ced40: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1ced40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_1ced44:
    // 0x1ced44: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1ced44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1ced48:
    // 0x1ced48: 0x24636c00  addiu       $v1, $v1, 0x6C00
    ctx->pc = 0x1ced48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
label_1ced4c:
    // 0x1ced4c: 0xa4430090  sh          $v1, 0x90($v0)
    ctx->pc = 0x1ced4cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 144), (uint16_t)GPR_U32(ctx, 3));
label_1ced50:
    // 0x1ced50: 0x86230010  lh          $v1, 0x10($s1)
    ctx->pc = 0x1ced50u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 16)));
label_1ced54:
    // 0x1ced54: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x1ced54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1ced58:
    // 0x1ced58: 0x86450300  lh          $a1, 0x300($s2)
    ctx->pc = 0x1ced58u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 768)));
label_1ced5c:
    // 0x1ced5c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1ced5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1ced60:
    // 0x1ced60: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1ced60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_1ced64:
    // 0x1ced64: 0xa6430348  sh          $v1, 0x348($s2)
    ctx->pc = 0x1ced64u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 840), (uint16_t)GPR_U32(ctx, 3));
label_1ced68:
    // 0x1ced68: 0xa6430318  sh          $v1, 0x318($s2)
    ctx->pc = 0x1ced68u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 792), (uint16_t)GPR_U32(ctx, 3));
label_1ced6c:
    // 0x1ced6c: 0x86230014  lh          $v1, 0x14($s1)
    ctx->pc = 0x1ced6cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 20)));
label_1ced70:
    // 0x1ced70: 0x864503d0  lh          $a1, 0x3D0($s2)
    ctx->pc = 0x1ced70u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 976)));
label_1ced74:
    // 0x1ced74: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1ced74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1ced78:
    // 0x1ced78: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1ced78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_1ced7c:
    // 0x1ced7c: 0xa6430418  sh          $v1, 0x418($s2)
    ctx->pc = 0x1ced7cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1048), (uint16_t)GPR_U32(ctx, 3));
label_1ced80:
    // 0x1ced80: 0xa64303e8  sh          $v1, 0x3E8($s2)
    ctx->pc = 0x1ced80u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1000), (uint16_t)GPR_U32(ctx, 3));
label_1ced84:
    // 0x1ced84: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x1ced84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_1ced88:
    // 0x1ced88: 0x64001a  div         $zero, $v1, $a0
    ctx->pc = 0x1ced88u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1ced8c:
    // 0x1ced8c: 0x0  nop
    ctx->pc = 0x1ced8cu;
    // NOP
label_1ced90:
    // 0x1ced90: 0x0  nop
    ctx->pc = 0x1ced90u;
    // NOP
label_1ced94:
    // 0x1ced94: 0x1810  mfhi        $v1
    ctx->pc = 0x1ced94u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_1ced98:
    // 0x1ced98: 0x28610007  slti        $at, $v1, 0x7
    ctx->pc = 0x1ced98u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)7) ? 1 : 0);
label_1ced9c:
    // 0x1ced9c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_1ceda0:
    if (ctx->pc == 0x1CEDA0u) {
        ctx->pc = 0x1CEDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CED9Cu;
        // 0x1ceda0: 0x26420350  addiu       $v0, $s2, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 848));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CEDA4u;
        goto label_1ceda4;
    }
    ctx->pc = 0x1CED9Cu;
    {
        const bool branch_taken_0x1ced9c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CEDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CED9Cu;
        // 0x1ceda0: 0x26420350  addiu       $v0, $s2, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 848));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ced9c) {
            ctx->pc = 0x1CEDA8u;
            goto label_1ceda8;
        }
    }
    ctx->pc = 0x1CEDA4u;
label_1ceda4:
    // 0x1ceda4: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x1ceda4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1ceda8:
    // 0x1ceda8: 0x8e250038  lw          $a1, 0x38($s1)
    ctx->pc = 0x1ceda8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_1cedac:
    // 0x1cedac: 0x28a40014  slti        $a0, $a1, 0x14
    ctx->pc = 0x1cedacu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)20) ? 1 : 0);
label_1cedb0:
    // 0x1cedb0: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
label_1cedb4:
    if (ctx->pc == 0x1CEDB4u) {
        ctx->pc = 0x1CEDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEDB0u;
        // 0x1cedb4: 0x28a40028  slti        $a0, $a1, 0x28 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)40) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CEDB8u;
        goto label_1cedb8;
    }
    ctx->pc = 0x1CEDB0u;
    {
        const bool branch_taken_0x1cedb0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CEDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEDB0u;
        // 0x1cedb4: 0x28a40028  slti        $a0, $a1, 0x28 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)40) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cedb0) {
            ctx->pc = 0x1CEDC0u;
            goto label_1cedc0;
        }
    }
    ctx->pc = 0x1CEDB8u;
label_1cedb8:
    // 0x1cedb8: 0x14800068  bnez        $a0, . + 4 + (0x68 << 2)
label_1cedbc:
    if (ctx->pc == 0x1CEDBCu) {
        ctx->pc = 0x1CEDC0u;
        goto label_1cedc0;
    }
    ctx->pc = 0x1CEDB8u;
    {
        const bool branch_taken_0x1cedb8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cedb8) {
            ctx->pc = 0x1CEF5Cu;
            goto label_1cef5c;
        }
    }
    ctx->pc = 0x1CEDC0u;
label_1cedc0:
    // 0x1cedc0: 0x14a00019  bnez        $a1, . + 4 + (0x19 << 2)
label_1cedc4:
    if (ctx->pc == 0x1CEDC4u) {
        ctx->pc = 0x1CEDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEDC0u;
        // 0x1cedc4: 0x28a10014  slti        $at, $a1, 0x14 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)20) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CEDC8u;
        goto label_1cedc8;
    }
    ctx->pc = 0x1CEDC0u;
    {
        const bool branch_taken_0x1cedc0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CEDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEDC0u;
        // 0x1cedc4: 0x28a10014  slti        $at, $a1, 0x14 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)20) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cedc0) {
            ctx->pc = 0x1CEE28u;
            goto label_1cee28;
        }
    }
    ctx->pc = 0x1CEDC8u;
label_1cedc8:
    // 0x1cedc8: 0x32023  negu        $a0, $v1
    ctx->pc = 0x1cedc8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
label_1cedcc:
    // 0x1cedcc: 0x2415007f  addiu       $s5, $zero, 0x7F
    ctx->pc = 0x1cedccu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_1cedd0:
    // 0x1cedd0: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x1cedd0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_1cedd4:
    // 0x1cedd4: 0xa32823  subu        $a1, $a1, $v1
    ctx->pc = 0x1cedd4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_1cedd8:
    // 0x1cedd8: 0x3c042aaa  lui         $a0, 0x2AAA
    ctx->pc = 0x1cedd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)10922 << 16));
label_1ceddc:
    // 0x1ceddc: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1ceddcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1cede0:
    // 0x1cede0: 0x3487aaab  ori         $a3, $a0, 0xAAAB
    ctx->pc = 0x1cede0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)43691);
label_1cede4:
    // 0x1cede4: 0xa32823  subu        $a1, $a1, $v1
    ctx->pc = 0x1cede4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_1cede8:
    // 0x1cede8: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x1cede8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1cedec:
    // 0x1cedec: 0xe50018  mult        $zero, $a3, $a1
    ctx->pc = 0x1cedecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1cedf0:
    // 0x1cedf0: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x1cedf0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1cedf4:
    // 0x1cedf4: 0x537c2  srl         $a2, $a1, 31
    ctx->pc = 0x1cedf4u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
label_1cedf8:
    // 0x1cedf8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1cedf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1cedfc:
    // 0x1cedfc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1cedfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1cee00:
    // 0x1cee00: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1cee00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1cee04:
    // 0x1cee04: 0x2810  mfhi        $a1
    ctx->pc = 0x1cee04u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_1cee08:
    // 0x1cee08: 0x327c2  srl         $a0, $v1, 31
    ctx->pc = 0x1cee08u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_1cee0c:
    // 0x1cee0c: 0xe30018  mult        $zero, $a3, $v1
    ctx->pc = 0x1cee0cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1cee10:
    // 0x1cee10: 0xa61821  addu        $v1, $a1, $a2
    ctx->pc = 0x1cee10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1cee14:
    // 0x1cee14: 0x24770078  addiu       $s7, $v1, 0x78
    ctx->pc = 0x1cee14u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 120));
label_1cee18:
    // 0x1cee18: 0x1810  mfhi        $v1
    ctx->pc = 0x1cee18u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_1cee1c:
    // 0x1cee1c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1cee1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1cee20:
    // 0x1cee20: 0x10000023  b           . + 4 + (0x23 << 2)
label_1cee24:
    if (ctx->pc == 0x1CEE24u) {
        ctx->pc = 0x1CEE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEE20u;
        // 0x1cee24: 0x24760020  addiu       $s6, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CEE28u;
        goto label_1cee28;
    }
    ctx->pc = 0x1CEE20u;
    {
        const bool branch_taken_0x1cee20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CEE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEE20u;
        // 0x1cee24: 0x24760020  addiu       $s6, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cee20) {
            ctx->pc = 0x1CEEB0u;
            goto label_1ceeb0;
        }
    }
    ctx->pc = 0x1CEE28u;
label_1cee28:
    // 0x1cee28: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
label_1cee2c:
    if (ctx->pc == 0x1CEE2Cu) {
        ctx->pc = 0x1CEE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEE28u;
        // 0x1cee2c: 0x32840  sll         $a1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CEE30u;
        goto label_1cee30;
    }
    ctx->pc = 0x1CEE28u;
    {
        const bool branch_taken_0x1cee28 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CEE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEE28u;
        // 0x1cee2c: 0x32840  sll         $a1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cee28) {
            ctx->pc = 0x1CEE7Cu;
            goto label_1cee7c;
        }
    }
    ctx->pc = 0x1CEE30u;
label_1cee30:
    // 0x1cee30: 0x32840  sll         $a1, $v1, 1
    ctx->pc = 0x1cee30u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1cee34:
    // 0x1cee34: 0x3c042aaa  lui         $a0, 0x2AAA
    ctx->pc = 0x1cee34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)10922 << 16));
label_1cee38:
    // 0x1cee38: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1cee38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_1cee3c:
    // 0x1cee3c: 0x3484aaab  ori         $a0, $a0, 0xAAAB
    ctx->pc = 0x1cee3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)43691);
label_1cee40:
    // 0x1cee40: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x1cee40u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_1cee44:
    // 0x1cee44: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x1cee44u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1cee48:
    // 0x1cee48: 0x830018  mult        $zero, $a0, $v1
    ctx->pc = 0x1cee48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1cee4c:
    // 0x1cee4c: 0x327c2  srl         $a0, $v1, 31
    ctx->pc = 0x1cee4cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_1cee50:
    // 0x1cee50: 0x0  nop
    ctx->pc = 0x1cee50u;
    // NOP
label_1cee54:
    // 0x1cee54: 0x1810  mfhi        $v1
    ctx->pc = 0x1cee54u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_1cee58:
    // 0x1cee58: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1cee58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1cee5c:
    // 0x1cee5c: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
label_1cee60:
    if (ctx->pc == 0x1CEE60u) {
        ctx->pc = 0x1CEE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEE5Cu;
        // 0x1cee60: 0x41843  sra         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CEE64u;
        goto label_1cee64;
    }
    ctx->pc = 0x1CEE5Cu;
    {
        const bool branch_taken_0x1cee5c = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1CEE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEE5Cu;
        // 0x1cee60: 0x41843  sra         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cee5c) {
            ctx->pc = 0x1CEE6Cu;
            goto label_1cee6c;
        }
    }
    ctx->pc = 0x1CEE64u;
label_1cee64:
    // 0x1cee64: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x1cee64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1cee68:
    // 0x1cee68: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x1cee68u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_1cee6c:
    // 0x1cee6c: 0x2475007f  addiu       $s5, $v1, 0x7F
    ctx->pc = 0x1cee6cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 127));
label_1cee70:
    // 0x1cee70: 0x24170078  addiu       $s7, $zero, 0x78
    ctx->pc = 0x1cee70u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_1cee74:
    // 0x1cee74: 0x1000000e  b           . + 4 + (0xE << 2)
label_1cee78:
    if (ctx->pc == 0x1CEE78u) {
        ctx->pc = 0x1CEE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEE74u;
        // 0x1cee78: 0x24160020  addiu       $s6, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CEE7Cu;
        goto label_1cee7c;
    }
    ctx->pc = 0x1CEE74u;
    {
        const bool branch_taken_0x1cee74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CEE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEE74u;
        // 0x1cee78: 0x24160020  addiu       $s6, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cee74) {
            ctx->pc = 0x1CEEB0u;
            goto label_1ceeb0;
        }
    }
    ctx->pc = 0x1CEE7Cu;
label_1cee7c:
    // 0x1cee7c: 0x3c042aaa  lui         $a0, 0x2AAA
    ctx->pc = 0x1cee7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)10922 << 16));
label_1cee80:
    // 0x1cee80: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1cee80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_1cee84:
    // 0x1cee84: 0x3484aaab  ori         $a0, $a0, 0xAAAB
    ctx->pc = 0x1cee84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)43691);
label_1cee88:
    // 0x1cee88: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x1cee88u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_1cee8c:
    // 0x1cee8c: 0x24170078  addiu       $s7, $zero, 0x78
    ctx->pc = 0x1cee8cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_1cee90:
    // 0x1cee90: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x1cee90u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1cee94:
    // 0x1cee94: 0x24160020  addiu       $s6, $zero, 0x20
    ctx->pc = 0x1cee94u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1cee98:
    // 0x1cee98: 0x830018  mult        $zero, $a0, $v1
    ctx->pc = 0x1cee98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1cee9c:
    // 0x1cee9c: 0x327c2  srl         $a0, $v1, 31
    ctx->pc = 0x1cee9cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_1ceea0:
    // 0x1ceea0: 0x0  nop
    ctx->pc = 0x1ceea0u;
    // NOP
label_1ceea4:
    // 0x1ceea4: 0x1810  mfhi        $v1
    ctx->pc = 0x1ceea4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_1ceea8:
    // 0x1ceea8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1ceea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1ceeac:
    // 0x1ceeac: 0x2475007f  addiu       $s5, $v1, 0x7F
    ctx->pc = 0x1ceeacu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 127));
label_1ceeb0:
    // 0x1ceeb0: 0xa0550070  sb          $s5, 0x70($v0)
    ctx->pc = 0x1ceeb0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 112), (uint8_t)GPR_U32(ctx, 21));
label_1ceeb4:
    // 0x1ceeb4: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x1ceeb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1ceeb8:
    // 0x1ceeb8: 0xa0570071  sb          $s7, 0x71($v0)
    ctx->pc = 0x1ceeb8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 113), (uint8_t)GPR_U32(ctx, 23));
label_1ceebc:
    // 0x1ceebc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1ceebcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_1ceec0:
    // 0x1ceec0: 0xa0560072  sb          $s6, 0x72($v0)
    ctx->pc = 0x1ceec0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 114), (uint8_t)GPR_U32(ctx, 22));
label_1ceec4:
    // 0x1ceec4: 0xa0440073  sb          $a0, 0x73($v0)
    ctx->pc = 0x1ceec4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 115), (uint8_t)GPR_U32(ctx, 4));
label_1ceec8:
    // 0x1ceec8: 0xac430074  sw          $v1, 0x74($v0)
    ctx->pc = 0x1ceec8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 116), GPR_U32(ctx, 3));
label_1ceecc:
    // 0x1ceecc: 0xa0550088  sb          $s5, 0x88($v0)
    ctx->pc = 0x1ceeccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 136), (uint8_t)GPR_U32(ctx, 21));
label_1ceed0:
    // 0x1ceed0: 0xa0570089  sb          $s7, 0x89($v0)
    ctx->pc = 0x1ceed0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 137), (uint8_t)GPR_U32(ctx, 23));
label_1ceed4:
    // 0x1ceed4: 0xa056008a  sb          $s6, 0x8A($v0)
    ctx->pc = 0x1ceed4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 138), (uint8_t)GPR_U32(ctx, 22));
label_1ceed8:
    // 0x1ceed8: 0xa044008b  sb          $a0, 0x8B($v0)
    ctx->pc = 0x1ceed8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 139), (uint8_t)GPR_U32(ctx, 4));
label_1ceedc:
    // 0x1ceedc: 0xac43008c  sw          $v1, 0x8C($v0)
    ctx->pc = 0x1ceedcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 140), GPR_U32(ctx, 3));
label_1ceee0:
    // 0x1ceee0: 0xa05500a0  sb          $s5, 0xA0($v0)
    ctx->pc = 0x1ceee0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 160), (uint8_t)GPR_U32(ctx, 21));
label_1ceee4:
    // 0x1ceee4: 0xa05700a1  sb          $s7, 0xA1($v0)
    ctx->pc = 0x1ceee4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 161), (uint8_t)GPR_U32(ctx, 23));
label_1ceee8:
    // 0x1ceee8: 0xa05600a2  sb          $s6, 0xA2($v0)
    ctx->pc = 0x1ceee8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 162), (uint8_t)GPR_U32(ctx, 22));
label_1ceeec:
    // 0x1ceeec: 0xa04400a3  sb          $a0, 0xA3($v0)
    ctx->pc = 0x1ceeecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 163), (uint8_t)GPR_U32(ctx, 4));
label_1ceef0:
    // 0x1ceef0: 0xac4300a4  sw          $v1, 0xA4($v0)
    ctx->pc = 0x1ceef0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 164), GPR_U32(ctx, 3));
label_1ceef4:
    // 0x1ceef4: 0xa05500b8  sb          $s5, 0xB8($v0)
    ctx->pc = 0x1ceef4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 184), (uint8_t)GPR_U32(ctx, 21));
label_1ceef8:
    // 0x1ceef8: 0xa05700b9  sb          $s7, 0xB9($v0)
    ctx->pc = 0x1ceef8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 185), (uint8_t)GPR_U32(ctx, 23));
label_1ceefc:
    // 0x1ceefc: 0xa05600ba  sb          $s6, 0xBA($v0)
    ctx->pc = 0x1ceefcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 186), (uint8_t)GPR_U32(ctx, 22));
label_1cef00:
    // 0x1cef00: 0xa04400bb  sb          $a0, 0xBB($v0)
    ctx->pc = 0x1cef00u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 187), (uint8_t)GPR_U32(ctx, 4));
label_1cef04:
    // 0x1cef04: 0xac4300bc  sw          $v1, 0xBC($v0)
    ctx->pc = 0x1cef04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 188), GPR_U32(ctx, 3));
label_1cef08:
    // 0x1cef08: 0xa2401340  sb          $zero, 0x1340($s2)
    ctx->pc = 0x1cef08u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 4928), (uint8_t)GPR_U32(ctx, 0));
label_1cef0c:
    // 0x1cef0c: 0xa2401341  sb          $zero, 0x1341($s2)
    ctx->pc = 0x1cef0cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 4929), (uint8_t)GPR_U32(ctx, 0));
label_1cef10:
    // 0x1cef10: 0xa2401342  sb          $zero, 0x1342($s2)
    ctx->pc = 0x1cef10u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 4930), (uint8_t)GPR_U32(ctx, 0));
label_1cef14:
    // 0x1cef14: 0xa2401343  sb          $zero, 0x1343($s2)
    ctx->pc = 0x1cef14u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 4931), (uint8_t)GPR_U32(ctx, 0));
label_1cef18:
    // 0x1cef18: 0xae431344  sw          $v1, 0x1344($s2)
    ctx->pc = 0x1cef18u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4932), GPR_U32(ctx, 3));
label_1cef1c:
    // 0x1cef1c: 0xa2401358  sb          $zero, 0x1358($s2)
    ctx->pc = 0x1cef1cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 4952), (uint8_t)GPR_U32(ctx, 0));
label_1cef20:
    // 0x1cef20: 0xa2401359  sb          $zero, 0x1359($s2)
    ctx->pc = 0x1cef20u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 4953), (uint8_t)GPR_U32(ctx, 0));
label_1cef24:
    // 0x1cef24: 0xa240135a  sb          $zero, 0x135A($s2)
    ctx->pc = 0x1cef24u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 4954), (uint8_t)GPR_U32(ctx, 0));
label_1cef28:
    // 0x1cef28: 0xa240135b  sb          $zero, 0x135B($s2)
    ctx->pc = 0x1cef28u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 4955), (uint8_t)GPR_U32(ctx, 0));
label_1cef2c:
    // 0x1cef2c: 0xae43135c  sw          $v1, 0x135C($s2)
    ctx->pc = 0x1cef2cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4956), GPR_U32(ctx, 3));
label_1cef30:
    // 0x1cef30: 0xa2401370  sb          $zero, 0x1370($s2)
    ctx->pc = 0x1cef30u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 4976), (uint8_t)GPR_U32(ctx, 0));
label_1cef34:
    // 0x1cef34: 0xa2401371  sb          $zero, 0x1371($s2)
    ctx->pc = 0x1cef34u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 4977), (uint8_t)GPR_U32(ctx, 0));
label_1cef38:
    // 0x1cef38: 0xa2401372  sb          $zero, 0x1372($s2)
    ctx->pc = 0x1cef38u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 4978), (uint8_t)GPR_U32(ctx, 0));
label_1cef3c:
    // 0x1cef3c: 0xa2401373  sb          $zero, 0x1373($s2)
    ctx->pc = 0x1cef3cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 4979), (uint8_t)GPR_U32(ctx, 0));
label_1cef40:
    // 0x1cef40: 0xae431374  sw          $v1, 0x1374($s2)
    ctx->pc = 0x1cef40u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4980), GPR_U32(ctx, 3));
label_1cef44:
    // 0x1cef44: 0xa2401388  sb          $zero, 0x1388($s2)
    ctx->pc = 0x1cef44u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 5000), (uint8_t)GPR_U32(ctx, 0));
label_1cef48:
    // 0x1cef48: 0xa2401389  sb          $zero, 0x1389($s2)
    ctx->pc = 0x1cef48u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 5001), (uint8_t)GPR_U32(ctx, 0));
label_1cef4c:
    // 0x1cef4c: 0xa240138a  sb          $zero, 0x138A($s2)
    ctx->pc = 0x1cef4cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 5002), (uint8_t)GPR_U32(ctx, 0));
label_1cef50:
    // 0x1cef50: 0xa240138b  sb          $zero, 0x138B($s2)
    ctx->pc = 0x1cef50u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 5003), (uint8_t)GPR_U32(ctx, 0));
label_1cef54:
    // 0x1cef54: 0x10000085  b           . + 4 + (0x85 << 2)
label_1cef58:
    if (ctx->pc == 0x1CEF58u) {
        ctx->pc = 0x1CEF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEF54u;
        // 0x1cef58: 0xae43138c  sw          $v1, 0x138C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 5004), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CEF5Cu;
        goto label_1cef5c;
    }
    ctx->pc = 0x1CEF54u;
    {
        const bool branch_taken_0x1cef54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CEF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEF54u;
        // 0x1cef58: 0xae43138c  sw          $v1, 0x138C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 5004), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cef54) {
            ctx->pc = 0x1CF16Cu;
            goto label_1cf16c;
        }
    }
    ctx->pc = 0x1CEF5Cu;
label_1cef5c:
    // 0x1cef5c: 0x32840  sll         $a1, $v1, 1
    ctx->pc = 0x1cef5cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1cef60:
    // 0x1cef60: 0x3c042aaa  lui         $a0, 0x2AAA
    ctx->pc = 0x1cef60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)10922 << 16));
label_1cef64:
    // 0x1cef64: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1cef64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_1cef68:
    // 0x1cef68: 0x3484aaab  ori         $a0, $a0, 0xAAAB
    ctx->pc = 0x1cef68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)43691);
label_1cef6c:
    // 0x1cef6c: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x1cef6cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_1cef70:
    // 0x1cef70: 0x24170078  addiu       $s7, $zero, 0x78
    ctx->pc = 0x1cef70u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_1cef74:
    // 0x1cef74: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x1cef74u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1cef78:
    // 0x1cef78: 0x24160020  addiu       $s6, $zero, 0x20
    ctx->pc = 0x1cef78u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1cef7c:
    // 0x1cef7c: 0x830018  mult        $zero, $a0, $v1
    ctx->pc = 0x1cef7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1cef80:
    // 0x1cef80: 0x327c2  srl         $a0, $v1, 31
    ctx->pc = 0x1cef80u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_1cef84:
    // 0x1cef84: 0x0  nop
    ctx->pc = 0x1cef84u;
    // NOP
label_1cef88:
    // 0x1cef88: 0x1810  mfhi        $v1
    ctx->pc = 0x1cef88u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_1cef8c:
    // 0x1cef8c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1cef8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1cef90:
    // 0x1cef90: 0x2475007f  addiu       $s5, $v1, 0x7F
    ctx->pc = 0x1cef90u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 127));
label_1cef94:
    // 0x1cef94: 0x6a10003  bgez        $s5, . + 4 + (0x3 << 2)
label_1cef98:
    if (ctx->pc == 0x1CEF98u) {
        ctx->pc = 0x1CEF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEF94u;
        // 0x1cef98: 0x153843  sra         $a3, $s5, 1 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CEF9Cu;
        goto label_1cef9c;
    }
    ctx->pc = 0x1CEF94u;
    {
        const bool branch_taken_0x1cef94 = (GPR_S32(ctx, 21) >= 0);
        ctx->pc = 0x1CEF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEF94u;
        // 0x1cef98: 0x153843  sra         $a3, $s5, 1 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cef94) {
            ctx->pc = 0x1CEFA4u;
            goto label_1cefa4;
        }
    }
    ctx->pc = 0x1CEF9Cu;
label_1cef9c:
    // 0x1cef9c: 0x26a30001  addiu       $v1, $s5, 0x1
    ctx->pc = 0x1cef9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_1cefa0:
    // 0x1cefa0: 0x33843  sra         $a3, $v1, 1
    ctx->pc = 0x1cefa0u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 3), 1));
label_1cefa4:
    // 0x1cefa4: 0xa0470070  sb          $a3, 0x70($v0)
    ctx->pc = 0x1cefa4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 112), (uint8_t)GPR_U32(ctx, 7));
label_1cefa8:
    // 0x1cefa8: 0x2406003c  addiu       $a2, $zero, 0x3C
    ctx->pc = 0x1cefa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_1cefac:
    // 0x1cefac: 0xa0460071  sb          $a2, 0x71($v0)
    ctx->pc = 0x1cefacu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 113), (uint8_t)GPR_U32(ctx, 6));
label_1cefb0:
    // 0x1cefb0: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1cefb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1cefb4:
    // 0x1cefb4: 0xa0450072  sb          $a1, 0x72($v0)
    ctx->pc = 0x1cefb4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 114), (uint8_t)GPR_U32(ctx, 5));
label_1cefb8:
    // 0x1cefb8: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x1cefb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1cefbc:
    // 0x1cefbc: 0xa0440073  sb          $a0, 0x73($v0)
    ctx->pc = 0x1cefbcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 115), (uint8_t)GPR_U32(ctx, 4));
label_1cefc0:
    // 0x1cefc0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1cefc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_1cefc4:
    // 0x1cefc4: 0xac430074  sw          $v1, 0x74($v0)
    ctx->pc = 0x1cefc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 116), GPR_U32(ctx, 3));
label_1cefc8:
    // 0x1cefc8: 0x265012d0  addiu       $s0, $s2, 0x12D0
    ctx->pc = 0x1cefc8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4816));
label_1cefcc:
    // 0x1cefcc: 0xa0470088  sb          $a3, 0x88($v0)
    ctx->pc = 0x1cefccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 136), (uint8_t)GPR_U32(ctx, 7));
label_1cefd0:
    // 0x1cefd0: 0xa0460089  sb          $a2, 0x89($v0)
    ctx->pc = 0x1cefd0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 137), (uint8_t)GPR_U32(ctx, 6));
label_1cefd4:
    // 0x1cefd4: 0xa045008a  sb          $a1, 0x8A($v0)
    ctx->pc = 0x1cefd4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 138), (uint8_t)GPR_U32(ctx, 5));
label_1cefd8:
    // 0x1cefd8: 0xa044008b  sb          $a0, 0x8B($v0)
    ctx->pc = 0x1cefd8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 139), (uint8_t)GPR_U32(ctx, 4));
label_1cefdc:
    // 0x1cefdc: 0xac43008c  sw          $v1, 0x8C($v0)
    ctx->pc = 0x1cefdcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 140), GPR_U32(ctx, 3));
label_1cefe0:
    // 0x1cefe0: 0xa04700a0  sb          $a3, 0xA0($v0)
    ctx->pc = 0x1cefe0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 160), (uint8_t)GPR_U32(ctx, 7));
label_1cefe4:
    // 0x1cefe4: 0xa04600a1  sb          $a2, 0xA1($v0)
    ctx->pc = 0x1cefe4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 161), (uint8_t)GPR_U32(ctx, 6));
label_1cefe8:
    // 0x1cefe8: 0xa04500a2  sb          $a1, 0xA2($v0)
    ctx->pc = 0x1cefe8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 162), (uint8_t)GPR_U32(ctx, 5));
label_1cefec:
    // 0x1cefec: 0xa04400a3  sb          $a0, 0xA3($v0)
    ctx->pc = 0x1cefecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 163), (uint8_t)GPR_U32(ctx, 4));
label_1ceff0:
    // 0x1ceff0: 0xac4300a4  sw          $v1, 0xA4($v0)
    ctx->pc = 0x1ceff0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 164), GPR_U32(ctx, 3));
label_1ceff4:
    // 0x1ceff4: 0xa04700b8  sb          $a3, 0xB8($v0)
    ctx->pc = 0x1ceff4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 184), (uint8_t)GPR_U32(ctx, 7));
label_1ceff8:
    // 0x1ceff8: 0xa04600b9  sb          $a2, 0xB9($v0)
    ctx->pc = 0x1ceff8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 185), (uint8_t)GPR_U32(ctx, 6));
label_1ceffc:
    // 0x1ceffc: 0xa04500ba  sb          $a1, 0xBA($v0)
    ctx->pc = 0x1ceffcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 186), (uint8_t)GPR_U32(ctx, 5));
label_1cf000:
    // 0x1cf000: 0xa04400bb  sb          $a0, 0xBB($v0)
    ctx->pc = 0x1cf000u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 187), (uint8_t)GPR_U32(ctx, 4));
label_1cf004:
    // 0x1cf004: 0xc08f0cc  jal         func_23C330
label_1cf008:
    if (ctx->pc == 0x1CF008u) {
        ctx->pc = 0x1CF008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF004u;
        // 0x1cf008: 0xac4300bc  sw          $v1, 0xBC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 188), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF00Cu;
        goto label_1cf00c;
    }
    ctx->pc = 0x1CF004u;
    SET_GPR_U32(ctx, 31, 0x1CF00Cu);
    ctx->pc = 0x1CF008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF004u;
    // 0x1cf008: 0xac4300bc  sw          $v1, 0xBC($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 188), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1CF00Cu;
label_1cf00c:
    // 0x1cf00c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1cf00cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1cf010:
    // 0x1cf010: 0x240b0008  addiu       $t3, $zero, 0x8
    ctx->pc = 0x1cf010u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1cf014:
    // 0x1cf014: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x1cf014u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1cf018:
    // 0x1cf018: 0xa60b0078  sh          $t3, 0x78($s0)
    ctx->pc = 0x1cf018u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 120), (uint16_t)GPR_U32(ctx, 11));
label_1cf01c:
    // 0x1cf01c: 0x240a0608  addiu       $t2, $zero, 0x608
    ctx->pc = 0x1cf01cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1544));
label_1cf020:
    // 0x1cf020: 0x240600c0  addiu       $a2, $zero, 0xC0
    ctx->pc = 0x1cf020u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_1cf024:
    // 0x1cf024: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x1cf024u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1cf028:
    // 0x1cf028: 0x240400a0  addiu       $a0, $zero, 0xA0
    ctx->pc = 0x1cf028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_1cf02c:
    // 0x1cf02c: 0x4010  mfhi        $t0
    ctx->pc = 0x1cf02cu;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_1cf030:
    // 0x1cf030: 0x3c020018  lui         $v0, 0x18
    ctx->pc = 0x1cf030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24 << 16));
label_1cf034:
    // 0x1cf034: 0x3447000a  ori         $a3, $v0, 0xA
    ctx->pc = 0x1cf034u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10);
label_1cf038:
    // 0x1cf038: 0x24030060  addiu       $v1, $zero, 0x60
    ctx->pc = 0x1cf038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_1cf03c:
    // 0x1cf03c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1cf03cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1cf040:
    // 0x1cf040: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x1cf040u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
label_1cf044:
    // 0x1cf044: 0x250d0060  addiu       $t5, $t0, 0x60
    ctx->pc = 0x1cf044u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 8), 96));
label_1cf048:
    // 0x1cf048: 0xd4100  sll         $t0, $t5, 4
    ctx->pc = 0x1cf048u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 13), 4));
label_1cf04c:
    // 0x1cf04c: 0x25a90008  addiu       $t1, $t5, 0x8
    ctx->pc = 0x1cf04cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 13), 8));
label_1cf050:
    // 0x1cf050: 0x250c0008  addiu       $t4, $t0, 0x8
    ctx->pc = 0x1cf050u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
label_1cf054:
    // 0x1cf054: 0xd403c  dsll32      $t0, $t5, 0
    ctx->pc = 0x1cf054u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 13) << (32 + 0));
label_1cf058:
    // 0x1cf058: 0xa60c007a  sh          $t4, 0x7A($s0)
    ctx->pc = 0x1cf058u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 122), (uint16_t)GPR_U32(ctx, 12));
label_1cf05c:
    // 0x1cf05c: 0x8403f  dsra32      $t0, $t0, 0
    ctx->pc = 0x1cf05cu;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 0));
label_1cf060:
    // 0x1cf060: 0xa60a0090  sh          $t2, 0x90($s0)
    ctx->pc = 0x1cf060u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 144), (uint16_t)GPR_U32(ctx, 10));
label_1cf064:
    // 0x1cf064: 0x84638  dsll        $t0, $t0, 24
    ctx->pc = 0x1cf064u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 24);
label_1cf068:
    // 0x1cf068: 0xa60c0092  sh          $t4, 0x92($s0)
    ctx->pc = 0x1cf068u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 146), (uint16_t)GPR_U32(ctx, 12));
label_1cf06c:
    // 0x1cf06c: 0x1074025  or          $t0, $t0, $a3
    ctx->pc = 0x1cf06cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
label_1cf070:
    // 0x1cf070: 0xa60b00a8  sh          $t3, 0xA8($s0)
    ctx->pc = 0x1cf070u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 168), (uint16_t)GPR_U32(ctx, 11));
label_1cf074:
    // 0x1cf074: 0x93900  sll         $a3, $t1, 4
    ctx->pc = 0x1cf074u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
label_1cf078:
    // 0x1cf078: 0x24eb0008  addiu       $t3, $a3, 0x8
    ctx->pc = 0x1cf078u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
label_1cf07c:
    // 0x1cf07c: 0x9383c  dsll32      $a3, $t1, 0
    ctx->pc = 0x1cf07cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) << (32 + 0));
label_1cf080:
    // 0x1cf080: 0xa60b00aa  sh          $t3, 0xAA($s0)
    ctx->pc = 0x1cf080u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 170), (uint16_t)GPR_U32(ctx, 11));
label_1cf084:
    // 0x1cf084: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x1cf084u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
label_1cf088:
    // 0x1cf088: 0xa60a00c0  sh          $t2, 0xC0($s0)
    ctx->pc = 0x1cf088u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 192), (uint16_t)GPR_U32(ctx, 10));
label_1cf08c:
    // 0x1cf08c: 0x738bc  dsll32      $a3, $a3, 2
    ctx->pc = 0x1cf08cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 2));
label_1cf090:
    // 0x1cf090: 0xa60b00c2  sh          $t3, 0xC2($s0)
    ctx->pc = 0x1cf090u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 194), (uint16_t)GPR_U32(ctx, 11));
label_1cf094:
    // 0x1cf094: 0x1073825  or          $a3, $t0, $a3
    ctx->pc = 0x1cf094u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
label_1cf098:
    // 0x1cf098: 0xfe070040  sd          $a3, 0x40($s0)
    ctx->pc = 0x1cf098u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 64), GPR_U64(ctx, 7));
label_1cf09c:
    // 0x1cf09c: 0xa2060070  sb          $a2, 0x70($s0)
    ctx->pc = 0x1cf09cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 112), (uint8_t)GPR_U32(ctx, 6));
label_1cf0a0:
    // 0x1cf0a0: 0xa2050071  sb          $a1, 0x71($s0)
    ctx->pc = 0x1cf0a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 113), (uint8_t)GPR_U32(ctx, 5));
label_1cf0a4:
    // 0x1cf0a4: 0xa2040072  sb          $a0, 0x72($s0)
    ctx->pc = 0x1cf0a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 114), (uint8_t)GPR_U32(ctx, 4));
label_1cf0a8:
    // 0x1cf0a8: 0xa2030073  sb          $v1, 0x73($s0)
    ctx->pc = 0x1cf0a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 115), (uint8_t)GPR_U32(ctx, 3));
label_1cf0ac:
    // 0x1cf0ac: 0xae020074  sw          $v0, 0x74($s0)
    ctx->pc = 0x1cf0acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
label_1cf0b0:
    // 0x1cf0b0: 0xa2060088  sb          $a2, 0x88($s0)
    ctx->pc = 0x1cf0b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 136), (uint8_t)GPR_U32(ctx, 6));
label_1cf0b4:
    // 0x1cf0b4: 0xa2050089  sb          $a1, 0x89($s0)
    ctx->pc = 0x1cf0b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 137), (uint8_t)GPR_U32(ctx, 5));
label_1cf0b8:
    // 0x1cf0b8: 0xa204008a  sb          $a0, 0x8A($s0)
    ctx->pc = 0x1cf0b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 138), (uint8_t)GPR_U32(ctx, 4));
label_1cf0bc:
    // 0x1cf0bc: 0xa203008b  sb          $v1, 0x8B($s0)
    ctx->pc = 0x1cf0bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 139), (uint8_t)GPR_U32(ctx, 3));
label_1cf0c0:
    // 0x1cf0c0: 0xae02008c  sw          $v0, 0x8C($s0)
    ctx->pc = 0x1cf0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 2));
label_1cf0c4:
    // 0x1cf0c4: 0xa20600a0  sb          $a2, 0xA0($s0)
    ctx->pc = 0x1cf0c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 160), (uint8_t)GPR_U32(ctx, 6));
label_1cf0c8:
    // 0x1cf0c8: 0xa20500a1  sb          $a1, 0xA1($s0)
    ctx->pc = 0x1cf0c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 161), (uint8_t)GPR_U32(ctx, 5));
label_1cf0cc:
    // 0x1cf0cc: 0xa20400a2  sb          $a0, 0xA2($s0)
    ctx->pc = 0x1cf0ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 162), (uint8_t)GPR_U32(ctx, 4));
label_1cf0d0:
    // 0x1cf0d0: 0xa20300a3  sb          $v1, 0xA3($s0)
    ctx->pc = 0x1cf0d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 163), (uint8_t)GPR_U32(ctx, 3));
label_1cf0d4:
    // 0x1cf0d4: 0xae0200a4  sw          $v0, 0xA4($s0)
    ctx->pc = 0x1cf0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 2));
label_1cf0d8:
    // 0x1cf0d8: 0xa20600b8  sb          $a2, 0xB8($s0)
    ctx->pc = 0x1cf0d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 184), (uint8_t)GPR_U32(ctx, 6));
label_1cf0dc:
    // 0x1cf0dc: 0xa20500b9  sb          $a1, 0xB9($s0)
    ctx->pc = 0x1cf0dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 185), (uint8_t)GPR_U32(ctx, 5));
label_1cf0e0:
    // 0x1cf0e0: 0xa20400ba  sb          $a0, 0xBA($s0)
    ctx->pc = 0x1cf0e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 186), (uint8_t)GPR_U32(ctx, 4));
label_1cf0e4:
    // 0x1cf0e4: 0xa20300bb  sb          $v1, 0xBB($s0)
    ctx->pc = 0x1cf0e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 187), (uint8_t)GPR_U32(ctx, 3));
label_1cf0e8:
    // 0x1cf0e8: 0xae0200bc  sw          $v0, 0xBC($s0)
    ctx->pc = 0x1cf0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 2));
label_1cf0ec:
    // 0x1cf0ec: 0x8e230038  lw          $v1, 0x38($s1)
    ctx->pc = 0x1cf0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_1cf0f0:
    // 0x1cf0f0: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1cf0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1cf0f4:
    // 0x1cf0f4: 0x2463fff2  addiu       $v1, $v1, -0xE
    ctx->pc = 0x1cf0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967282));
label_1cf0f8:
    // 0x1cf0f8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1cf0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1cf0fc:
    // 0x1cf0fc: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x1cf0fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1cf100:
    // 0x1cf100: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_1cf104:
    if (ctx->pc == 0x1CF104u) {
        ctx->pc = 0x1CF104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF100u;
        // 0x1cf104: 0x22903  sra         $a1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF108u;
        goto label_1cf108;
    }
    ctx->pc = 0x1CF100u;
    {
        const bool branch_taken_0x1cf100 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1CF104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF100u;
        // 0x1cf104: 0x22903  sra         $a1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf100) {
            ctx->pc = 0x1CF110u;
            goto label_1cf110;
        }
    }
    ctx->pc = 0x1CF108u;
label_1cf108:
    // 0x1cf108: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x1cf108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
label_1cf10c:
    // 0x1cf10c: 0x22903  sra         $a1, $v0, 4
    ctx->pc = 0x1cf10cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 4));
label_1cf110:
    // 0x1cf110: 0x24037140  addiu       $v1, $zero, 0x7140
    ctx->pc = 0x1cf110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28992));
label_1cf114:
    // 0x1cf114: 0x51043  sra         $v0, $a1, 1
    ctx->pc = 0x1cf114u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 5), 1));
label_1cf118:
    // 0x1cf118: 0xa6030080  sh          $v1, 0x80($s0)
    ctx->pc = 0x1cf118u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 128), (uint16_t)GPR_U32(ctx, 3));
label_1cf11c:
    // 0x1cf11c: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x1cf11cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1cf120:
    // 0x1cf120: 0x96040080  lhu         $a0, 0x80($s0)
    ctx->pc = 0x1cf120u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 128)));
label_1cf124:
    // 0x1cf124: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1cf124u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1cf128:
    // 0x1cf128: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
label_1cf12c:
    if (ctx->pc == 0x1CF12Cu) {
        ctx->pc = 0x1CF12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF128u;
        // 0x1cf12c: 0x831821  addu        $v1, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF130u;
        goto label_1cf130;
    }
    ctx->pc = 0x1CF128u;
    {
        const bool branch_taken_0x1cf128 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x1CF12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF128u;
        // 0x1cf12c: 0x831821  addu        $v1, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf128) {
            ctx->pc = 0x1CF138u;
            goto label_1cf138;
        }
    }
    ctx->pc = 0x1CF130u;
label_1cf130:
    // 0x1cf130: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x1cf130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1cf134:
    // 0x1cf134: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1cf134u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_1cf138:
    // 0x1cf138: 0x622023  subu        $a0, $v1, $v0
    ctx->pc = 0x1cf138u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1cf13c:
    // 0x1cf13c: 0xa60400b0  sh          $a0, 0xB0($s0)
    ctx->pc = 0x1cf13cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 176), (uint16_t)GPR_U32(ctx, 4));
label_1cf140:
    // 0x1cf140: 0x34038568  ori         $v1, $zero, 0x8568
    ctx->pc = 0x1cf140u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34152);
label_1cf144:
    // 0x1cf144: 0xa6040080  sh          $a0, 0x80($s0)
    ctx->pc = 0x1cf144u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 128), (uint16_t)GPR_U32(ctx, 4));
label_1cf148:
    // 0x1cf148: 0x340285b0  ori         $v0, $zero, 0x85B0
    ctx->pc = 0x1cf148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34224);
label_1cf14c:
    // 0x1cf14c: 0x86040080  lh          $a0, 0x80($s0)
    ctx->pc = 0x1cf14cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 128)));
label_1cf150:
    // 0x1cf150: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1cf150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1cf154:
    // 0x1cf154: 0xa60400c8  sh          $a0, 0xC8($s0)
    ctx->pc = 0x1cf154u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 200), (uint16_t)GPR_U32(ctx, 4));
label_1cf158:
    // 0x1cf158: 0xa6040098  sh          $a0, 0x98($s0)
    ctx->pc = 0x1cf158u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 152), (uint16_t)GPR_U32(ctx, 4));
label_1cf15c:
    // 0x1cf15c: 0xa603009a  sh          $v1, 0x9A($s0)
    ctx->pc = 0x1cf15cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 154), (uint16_t)GPR_U32(ctx, 3));
label_1cf160:
    // 0x1cf160: 0xa6030082  sh          $v1, 0x82($s0)
    ctx->pc = 0x1cf160u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 130), (uint16_t)GPR_U32(ctx, 3));
label_1cf164:
    // 0x1cf164: 0xa60200ca  sh          $v0, 0xCA($s0)
    ctx->pc = 0x1cf164u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 202), (uint16_t)GPR_U32(ctx, 2));
label_1cf168:
    // 0x1cf168: 0xa60200b2  sh          $v0, 0xB2($s0)
    ctx->pc = 0x1cf168u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 178), (uint16_t)GPR_U32(ctx, 2));
label_1cf16c:
    // 0x1cf16c: 0x2408000a  addiu       $t0, $zero, 0xA
    ctx->pc = 0x1cf16cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1cf170:
    // 0x1cf170: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cf170u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cf174:
    // 0x1cf174: 0x2409028c  addiu       $t1, $zero, 0x28C
    ctx->pc = 0x1cf174u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 652));
label_1cf178:
    // 0x1cf178: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1cf178u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cf17c:
    // 0x1cf17c: 0x9583c  dsll32      $t3, $t1, 0
    ctx->pc = 0x1cf17cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 9) << (32 + 0));
label_1cf180:
    // 0x1cf180: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x1cf180u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1cf184:
    // 0x1cf184: 0x34099000  ori         $t1, $zero, 0x9000
    ctx->pc = 0x1cf184u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36864);
label_1cf188:
    // 0x1cf188: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x1cf188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1cf18c:
    // 0x1cf18c: 0x95438  dsll        $t2, $t1, 16
    ctx->pc = 0x1cf18cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 9) << 16);
label_1cf190:
    // 0x1cf190: 0x24030908  addiu       $v1, $zero, 0x908
    ctx->pc = 0x1cf190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2312));
label_1cf194:
    // 0x1cf194: 0x3c096666  lui         $t1, 0x6666
    ctx->pc = 0x1cf194u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)26214 << 16));
label_1cf198:
    // 0x1cf198: 0x14b6025  or          $t4, $t2, $t3
    ctx->pc = 0x1cf198u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 10) | GPR_U64(ctx, 11));
label_1cf19c:
    // 0x1cf19c: 0x24020a48  addiu       $v0, $zero, 0xA48
    ctx->pc = 0x1cf19cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2632));
label_1cf1a0:
    // 0x1cf1a0: 0x352b6667  ori         $t3, $t1, 0x6667
    ctx->pc = 0x1cf1a0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)26215);
label_1cf1a4:
    // 0x1cf1a4: 0x8e2e001c  lw          $t6, 0x1C($s1)
    ctx->pc = 0x1cf1a4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_1cf1a8:
    // 0x1cf1a8: 0x24ed000a  addiu       $t5, $a3, 0xA
    ctx->pc = 0x1cf1a8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 7), 10));
label_1cf1ac:
    // 0x1cf1ac: 0xd5080  sll         $t2, $t5, 2
    ctx->pc = 0x1cf1acu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
label_1cf1b0:
    // 0x1cf1b0: 0x2509ffff  addiu       $t1, $t0, -0x1
    ctx->pc = 0x1cf1b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
label_1cf1b4:
    // 0x1cf1b4: 0x14d5021  addu        $t2, $t2, $t5
    ctx->pc = 0x1cf1b4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 13)));
label_1cf1b8:
    // 0x1cf1b8: 0xa5140  sll         $t2, $t2, 5
    ctx->pc = 0x1cf1b8u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 5));
label_1cf1bc:
    // 0x1cf1bc: 0x24a5021  addu        $t2, $s2, $t2
    ctx->pc = 0x1cf1bcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 10)));
label_1cf1c0:
    // 0x1cf1c0: 0x12e082a  slt         $at, $t1, $t6
    ctx->pc = 0x1cf1c0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 14)) ? 1 : 0);
label_1cf1c4:
    // 0x1cf1c4: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
label_1cf1c8:
    if (ctx->pc == 0x1CF1C8u) {
        ctx->pc = 0x1CF1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF1C4u;
        // 0x1cf1c8: 0x254a0690  addiu       $t2, $t2, 0x690 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1680));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF1CCu;
        goto label_1cf1cc;
    }
    ctx->pc = 0x1CF1C4u;
    {
        const bool branch_taken_0x1cf1c4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF1C4u;
        // 0x1cf1c8: 0x254a0690  addiu       $t2, $t2, 0x690 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1680));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf1c4) {
            ctx->pc = 0x1CF1F4u;
            goto label_1cf1f4;
        }
    }
    ctx->pc = 0x1CF1CCu;
label_1cf1cc:
    // 0x1cf1cc: 0x1c8001a  div         $zero, $t6, $t0
    ctx->pc = 0x1cf1ccu;
    { int32_t divisor = GPR_S32(ctx, 8);    int32_t dividend = GPR_S32(ctx, 14);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1cf1d0:
    // 0x1cf1d0: 0x0  nop
    ctx->pc = 0x1cf1d0u;
    // NOP
label_1cf1d4:
    // 0x1cf1d4: 0x0  nop
    ctx->pc = 0x1cf1d4u;
    // NOP
label_1cf1d8:
    // 0x1cf1d8: 0x4812  mflo        $t1
    ctx->pc = 0x1cf1d8u;
    SET_GPR_U64(ctx, 9, ctx->lo);
label_1cf1dc:
    // 0x1cf1dc: 0x126001a  div         $zero, $t1, $a2
    ctx->pc = 0x1cf1dcu;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 9);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1cf1e0:
    // 0x1cf1e0: 0x0  nop
    ctx->pc = 0x1cf1e0u;
    // NOP
label_1cf1e4:
    // 0x1cf1e4: 0x0  nop
    ctx->pc = 0x1cf1e4u;
    // NOP
label_1cf1e8:
    // 0x1cf1e8: 0x6810  mfhi        $t5
    ctx->pc = 0x1cf1e8u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_1cf1ec:
    // 0x1cf1ec: 0x10000005  b           . + 4 + (0x5 << 2)
label_1cf1f0:
    if (ctx->pc == 0x1CF1F0u) {
        ctx->pc = 0x1CF1F4u;
        goto label_1cf1f4;
    }
    ctx->pc = 0x1CF1ECu;
    {
        const bool branch_taken_0x1cf1ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf1ec) {
            ctx->pc = 0x1CF204u;
            goto label_1cf204;
        }
    }
    ctx->pc = 0x1CF1F4u;
label_1cf1f4:
    // 0x1cf1f4: 0x14e50003  bne         $a3, $a1, . + 4 + (0x3 << 2)
label_1cf1f8:
    if (ctx->pc == 0x1CF1F8u) {
        ctx->pc = 0x1CF1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF1F4u;
        // 0x1cf1f8: 0x240d000a  addiu       $t5, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF1FCu;
        goto label_1cf1fc;
    }
    ctx->pc = 0x1CF1F4u;
    {
        const bool branch_taken_0x1cf1f4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 5));
        ctx->pc = 0x1CF1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF1F4u;
        // 0x1cf1f8: 0x240d000a  addiu       $t5, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf1f4) {
            ctx->pc = 0x1CF204u;
            goto label_1cf204;
        }
    }
    ctx->pc = 0x1CF1FCu;
label_1cf1fc:
    // 0x1cf1fc: 0x10000001  b           . + 4 + (0x1 << 2)
label_1cf200:
    if (ctx->pc == 0x1CF200u) {
        ctx->pc = 0x1CF200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF1FCu;
        // 0x1cf200: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF204u;
        goto label_1cf204;
    }
    ctx->pc = 0x1CF1FCu;
    {
        const bool branch_taken_0x1cf1fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF1FCu;
        // 0x1cf200: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf1fc) {
            ctx->pc = 0x1CF204u;
            goto label_1cf204;
        }
    }
    ctx->pc = 0x1CF204u;
label_1cf204:
    // 0x1cf204: 0x15a40004  bne         $t5, $a0, . + 4 + (0x4 << 2)
label_1cf208:
    if (ctx->pc == 0x1CF208u) {
        ctx->pc = 0x1CF20Cu;
        goto label_1cf20c;
    }
    ctx->pc = 0x1CF204u;
    {
        const bool branch_taken_0x1cf204 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 4));
        if (branch_taken_0x1cf204) {
            ctx->pc = 0x1CF218u;
            goto label_1cf218;
        }
    }
    ctx->pc = 0x1CF20Cu;
label_1cf20c:
    // 0x1cf20c: 0x95490080  lhu         $t1, 0x80($t2)
    ctx->pc = 0x1cf20cu;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 128)));
label_1cf210:
    // 0x1cf210: 0x1000001c  b           . + 4 + (0x1C << 2)
label_1cf214:
    if (ctx->pc == 0x1CF214u) {
        ctx->pc = 0x1CF214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF210u;
        // 0x1cf214: 0xa5490090  sh          $t1, 0x90($t2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 10), 144), (uint16_t)GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF218u;
        goto label_1cf218;
    }
    ctx->pc = 0x1CF210u;
    {
        const bool branch_taken_0x1cf210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF210u;
        // 0x1cf214: 0xa5490090  sh          $t1, 0x90($t2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 10), 144), (uint16_t)GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf210) {
            ctx->pc = 0x1CF284u;
            goto label_1cf284;
        }
    }
    ctx->pc = 0x1CF218u;
label_1cf218:
    // 0x1cf218: 0x854e0080  lh          $t6, 0x80($t2)
    ctx->pc = 0x1cf218u;
    SET_GPR_S32(ctx, 14, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 128)));
label_1cf21c:
    // 0x1cf21c: 0xd4840  sll         $t1, $t5, 1
    ctx->pc = 0x1cf21cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 13), 1));
label_1cf220:
    // 0x1cf220: 0x12d4821  addu        $t1, $t1, $t5
    ctx->pc = 0x1cf220u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 13)));
label_1cf224:
    // 0x1cf224: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x1cf224u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_1cf228:
    // 0x1cf228: 0x25300100  addiu       $s0, $t1, 0x100
    ctx->pc = 0x1cf228u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 9), 256));
label_1cf22c:
    // 0x1cf22c: 0x106900  sll         $t5, $s0, 4
    ctx->pc = 0x1cf22cu;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_1cf230:
    // 0x1cf230: 0x2609000c  addiu       $t1, $s0, 0xC
    ctx->pc = 0x1cf230u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_1cf234:
    // 0x1cf234: 0x25cf00c0  addiu       $t7, $t6, 0xC0
    ctx->pc = 0x1cf234u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 14), 192));
label_1cf238:
    // 0x1cf238: 0x25ae0008  addiu       $t6, $t5, 0x8
    ctx->pc = 0x1cf238u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 13), 8));
label_1cf23c:
    // 0x1cf23c: 0xa54f0090  sh          $t7, 0x90($t2)
    ctx->pc = 0x1cf23cu;
    WRITE16(ADD32(GPR_U32(ctx, 10), 144), (uint16_t)GPR_U32(ctx, 15));
label_1cf240:
    // 0x1cf240: 0xa54e0078  sh          $t6, 0x78($t2)
    ctx->pc = 0x1cf240u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 120), (uint16_t)GPR_U32(ctx, 14));
label_1cf244:
    // 0x1cf244: 0x10683c  dsll32      $t5, $s0, 0
    ctx->pc = 0x1cf244u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 16) << (32 + 0));
label_1cf248:
    // 0x1cf248: 0x97100  sll         $t6, $t1, 4
    ctx->pc = 0x1cf248u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
label_1cf24c:
    // 0x1cf24c: 0xd683f  dsra32      $t5, $t5, 0
    ctx->pc = 0x1cf24cu;
    SET_GPR_S64(ctx, 13, GPR_S64(ctx, 13) >> (32 + 0));
label_1cf250:
    // 0x1cf250: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x1cf250u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
label_1cf254:
    // 0x1cf254: 0xd6938  dsll        $t5, $t5, 4
    ctx->pc = 0x1cf254u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << 4);
label_1cf258:
    // 0x1cf258: 0x9483c  dsll32      $t1, $t1, 0
    ctx->pc = 0x1cf258u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 0));
label_1cf25c:
    // 0x1cf25c: 0x35ad000a  ori         $t5, $t5, 0xA
    ctx->pc = 0x1cf25cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)10);
label_1cf260:
    // 0x1cf260: 0x9483f  dsra32      $t1, $t1, 0
    ctx->pc = 0x1cf260u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 0));
label_1cf264:
    // 0x1cf264: 0xa543007a  sh          $v1, 0x7A($t2)
    ctx->pc = 0x1cf264u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 122), (uint16_t)GPR_U32(ctx, 3));
label_1cf268:
    // 0x1cf268: 0x25ce0008  addiu       $t6, $t6, 0x8
    ctx->pc = 0x1cf268u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 8));
label_1cf26c:
    // 0x1cf26c: 0x94bb8  dsll        $t1, $t1, 14
    ctx->pc = 0x1cf26cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 14);
label_1cf270:
    // 0x1cf270: 0xa54e0088  sh          $t6, 0x88($t2)
    ctx->pc = 0x1cf270u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 136), (uint16_t)GPR_U32(ctx, 14));
label_1cf274:
    // 0x1cf274: 0x1a94825  or          $t1, $t5, $t1
    ctx->pc = 0x1cf274u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 13) | GPR_U64(ctx, 9));
label_1cf278:
    // 0x1cf278: 0xa542008a  sh          $v0, 0x8A($t2)
    ctx->pc = 0x1cf278u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 138), (uint16_t)GPR_U32(ctx, 2));
label_1cf27c:
    // 0x1cf27c: 0x12c4825  or          $t1, $t1, $t4
    ctx->pc = 0x1cf27cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 12));
label_1cf280:
    // 0x1cf280: 0xfd490040  sd          $t1, 0x40($t2)
    ctx->pc = 0x1cf280u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 64), GPR_U64(ctx, 9));
label_1cf284:
    // 0x1cf284: 0x0  nop
    ctx->pc = 0x1cf284u;
    // NOP
label_1cf288:
    // 0x1cf288: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1cf288u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_1cf28c:
    // 0x1cf28c: 0x1680018  mult        $zero, $t3, $t0
    ctx->pc = 0x1cf28cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1cf290:
    // 0x1cf290: 0x857c2  srl         $t2, $t0, 31
    ctx->pc = 0x1cf290u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
label_1cf294:
    // 0x1cf294: 0x28e90002  slti        $t1, $a3, 0x2
    ctx->pc = 0x1cf294u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
label_1cf298:
    // 0x1cf298: 0x4010  mfhi        $t0
    ctx->pc = 0x1cf298u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_1cf29c:
    // 0x1cf29c: 0x84083  sra         $t0, $t0, 2
    ctx->pc = 0x1cf29cu;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 2));
label_1cf2a0:
    // 0x1cf2a0: 0x1520ffc0  bnez        $t1, . + 4 + (-0x40 << 2)
label_1cf2a4:
    if (ctx->pc == 0x1CF2A4u) {
        ctx->pc = 0x1CF2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF2A0u;
        // 0x1cf2a4: 0x10a4021  addu        $t0, $t0, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF2A8u;
        goto label_1cf2a8;
    }
    ctx->pc = 0x1CF2A0u;
    {
        const bool branch_taken_0x1cf2a0 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CF2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF2A0u;
        // 0x1cf2a4: 0x10a4021  addu        $t0, $t0, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf2a0) {
            ctx->pc = 0x1CF1A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cf1a4;
        }
    }
    ctx->pc = 0x1CF2A8u;
label_1cf2a8:
    // 0x1cf2a8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1cf2a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cf2ac:
    // 0x1cf2ac: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x1cf2acu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cf2b0:
    // 0x1cf2b0: 0x0  nop
    ctx->pc = 0x1cf2b0u;
    // NOP
label_1cf2b4:
    // 0x1cf2b4: 0x23e9821  addu        $s3, $s1, $fp
    ctx->pc = 0x1cf2b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 30)));
label_1cf2b8:
    // 0x1cf2b8: 0x26620020  addiu       $v0, $s3, 0x20
    ctx->pc = 0x1cf2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
label_1cf2bc:
    // 0x1cf2bc: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x1cf2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
label_1cf2c0:
    // 0x1cf2c0: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x1cf2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_1cf2c4:
    // 0x1cf2c4: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
label_1cf2c8:
    if (ctx->pc == 0x1CF2C8u) {
        ctx->pc = 0x1CF2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF2C4u;
        // 0x1cf2c8: 0x2603000c  addiu       $v1, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF2CCu;
        goto label_1cf2cc;
    }
    ctx->pc = 0x1CF2C4u;
    {
        const bool branch_taken_0x1cf2c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CF2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF2C4u;
        // 0x1cf2c8: 0x2603000c  addiu       $v1, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf2c4) {
            ctx->pc = 0x1CF34Cu;
            goto label_1cf34c;
        }
    }
    ctx->pc = 0x1CF2CCu;
label_1cf2cc:
    // 0x1cf2cc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1cf2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1cf2d0:
    // 0x1cf2d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1cf2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1cf2d4:
    // 0x1cf2d4: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1cf2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_1cf2d8:
    // 0x1cf2d8: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1cf2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1cf2dc:
    // 0x1cf2dc: 0x24530690  addiu       $s3, $v0, 0x690
    ctx->pc = 0x1cf2dcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 1680));
label_1cf2e0:
    // 0x1cf2e0: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x1cf2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_1cf2e4:
    // 0x1cf2e4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1cf2e8:
    if (ctx->pc == 0x1CF2E8u) {
        ctx->pc = 0x1CF2ECu;
        goto label_1cf2ec;
    }
    ctx->pc = 0x1CF2E4u;
    {
        const bool branch_taken_0x1cf2e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf2e4) {
            ctx->pc = 0x1CF2F4u;
            goto label_1cf2f4;
        }
    }
    ctx->pc = 0x1CF2ECu;
label_1cf2ec:
    // 0x1cf2ec: 0x1000000c  b           . + 4 + (0xC << 2)
label_1cf2f0:
    if (ctx->pc == 0x1CF2F0u) {
        ctx->pc = 0x1CF2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF2ECu;
        // 0x1cf2f0: 0xa2600073  sb          $zero, 0x73($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 115), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF2F4u;
        goto label_1cf2f4;
    }
    ctx->pc = 0x1CF2ECu;
    {
        const bool branch_taken_0x1cf2ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF2ECu;
        // 0x1cf2f0: 0xa2600073  sb          $zero, 0x73($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 115), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf2ec) {
            ctx->pc = 0x1CF320u;
            goto label_1cf320;
        }
    }
    ctx->pc = 0x1CF2F4u;
label_1cf2f4:
    // 0x1cf2f4: 0x0  nop
    ctx->pc = 0x1cf2f4u;
    // NOP
label_1cf2f8:
    // 0x1cf2f8: 0xc070834  jal         func_1C20D0
label_1cf2fc:
    if (ctx->pc == 0x1CF2FCu) {
        ctx->pc = 0x1CF2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF2F8u;
        // 0x1cf2fc: 0x2404000e  addiu       $a0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF300u;
        goto label_1cf300;
    }
    ctx->pc = 0x1CF2F8u;
    SET_GPR_U32(ctx, 31, 0x1CF300u);
    ctx->pc = 0x1CF2FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF2F8u;
    // 0x1cf2fc: 0x2404000e  addiu       $a0, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20D0u;
    { ctx->pc = 0x1c20d0; return; }
    ctx->pc = 0x1CF300u;
label_1cf300:
    // 0x1cf300: 0xfe620060  sd          $v0, 0x60($s3)
    ctx->pc = 0x1cf300u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 96), GPR_U64(ctx, 2));
label_1cf304:
    // 0x1cf304: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1cf304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1cf308:
    // 0x1cf308: 0xa2630070  sb          $v1, 0x70($s3)
    ctx->pc = 0x1cf308u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 112), (uint8_t)GPR_U32(ctx, 3));
label_1cf30c:
    // 0x1cf30c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1cf30cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1cf310:
    // 0x1cf310: 0xa2630071  sb          $v1, 0x71($s3)
    ctx->pc = 0x1cf310u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 113), (uint8_t)GPR_U32(ctx, 3));
label_1cf314:
    // 0x1cf314: 0xa2630072  sb          $v1, 0x72($s3)
    ctx->pc = 0x1cf314u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 114), (uint8_t)GPR_U32(ctx, 3));
label_1cf318:
    // 0x1cf318: 0xa2630073  sb          $v1, 0x73($s3)
    ctx->pc = 0x1cf318u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 115), (uint8_t)GPR_U32(ctx, 3));
label_1cf31c:
    // 0x1cf31c: 0xae620074  sw          $v0, 0x74($s3)
    ctx->pc = 0x1cf31cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 2));
label_1cf320:
    // 0x1cf320: 0x26030005  addiu       $v1, $s0, 0x5
    ctx->pc = 0x1cf320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 5));
label_1cf324:
    // 0x1cf324: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1cf324u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1cf328:
    // 0x1cf328: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1cf328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1cf32c:
    // 0x1cf32c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cf32cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1cf330:
    // 0x1cf330: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1cf330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1cf334:
    // 0x1cf334: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1cf334u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1cf338:
    // 0x1cf338: 0x2421821  addu        $v1, $s2, $v0
    ctx->pc = 0x1cf338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1cf33c:
    // 0x1cf33c: 0x94620090  lhu         $v0, 0x90($v1)
    ctx->pc = 0x1cf33cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 144)));
label_1cf340:
    // 0x1cf340: 0xa46200d8  sh          $v0, 0xD8($v1)
    ctx->pc = 0x1cf340u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 216), (uint16_t)GPR_U32(ctx, 2));
label_1cf344:
    // 0x1cf344: 0x1000007b  b           . + 4 + (0x7B << 2)
label_1cf348:
    if (ctx->pc == 0x1CF348u) {
        ctx->pc = 0x1CF348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF344u;
        // 0x1cf348: 0xa46200a8  sh          $v0, 0xA8($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 168), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF34Cu;
        goto label_1cf34c;
    }
    ctx->pc = 0x1CF344u;
    {
        const bool branch_taken_0x1cf344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF344u;
        // 0x1cf348: 0xa46200a8  sh          $v0, 0xA8($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 168), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf344) {
            ctx->pc = 0x1CF534u;
            { ctx->pc = 0x1cf534; return; }
        }
    }
    ctx->pc = 0x1CF34Cu;
label_1cf34c:
    // 0x1cf34c: 0x0  nop
    ctx->pc = 0x1cf34cu;
    // NOP
label_1cf350:
    // 0x1cf350: 0x2603000c  addiu       $v1, $s0, 0xC
    ctx->pc = 0x1cf350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_1cf354:
    // 0x1cf354: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1cf354u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1cf358:
    // 0x1cf358: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x1cf358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1cf35c:
    // 0x1cf35c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1cf35cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1cf360:
    // 0x1cf360: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1cf360u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_1cf364:
    // 0x1cf364: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1cf364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1cf368:
    // 0x1cf368: 0xc070834  jal         func_1C20D0
label_1cf36c:
    if (ctx->pc == 0x1CF36Cu) {
        ctx->pc = 0x1CF36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF368u;
        // 0x1cf36c: 0x24540690  addiu       $s4, $v0, 0x690 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 1680));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF370u;
        goto label_1cf370;
    }
    ctx->pc = 0x1CF368u;
    SET_GPR_U32(ctx, 31, 0x1CF370u);
    ctx->pc = 0x1CF36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF368u;
    // 0x1cf36c: 0x24540690  addiu       $s4, $v0, 0x690 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 1680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20D0u;
    { ctx->pc = 0x1c20d0; return; }
    ctx->pc = 0x1CF370u;
label_1cf370:
    // 0x1cf370: 0xfe820060  sd          $v0, 0x60($s4)
    ctx->pc = 0x1cf370u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 96), GPR_U64(ctx, 2));
label_1cf374:
    // 0x1cf374: 0x8e63002c  lw          $v1, 0x2C($s3)
    ctx->pc = 0x1cf374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
label_1cf378:
    // 0x1cf378: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
label_1cf37c:
    if (ctx->pc == 0x1CF37Cu) {
        ctx->pc = 0x1CF37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF378u;
        // 0x1cf37c: 0x3062001f  andi        $v0, $v1, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF380u;
        goto label_1cf380;
    }
    ctx->pc = 0x1CF378u;
    {
        const bool branch_taken_0x1cf378 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1CF37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF378u;
        // 0x1cf37c: 0x3062001f  andi        $v0, $v1, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf378) {
            ctx->pc = 0x1CF38Cu;
            goto label_1cf38c;
        }
    }
    ctx->pc = 0x1CF380u;
label_1cf380:
    // 0x1cf380: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1cf384:
    if (ctx->pc == 0x1CF384u) {
        ctx->pc = 0x1CF384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF380u;
        // 0x1cf384: 0x28410011  slti        $at, $v0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF388u;
        goto label_1cf388;
    }
    ctx->pc = 0x1CF380u;
    {
        const bool branch_taken_0x1cf380 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF380u;
        // 0x1cf384: 0x28410011  slti        $at, $v0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf380) {
            ctx->pc = 0x1CF390u;
            goto label_1cf390;
        }
    }
    ctx->pc = 0x1CF388u;
label_1cf388:
    // 0x1cf388: 0x2442ffe0  addiu       $v0, $v0, -0x20
    ctx->pc = 0x1cf388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
label_1cf38c:
    // 0x1cf38c: 0x28410011  slti        $at, $v0, 0x11
    ctx->pc = 0x1cf38cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)17) ? 1 : 0);
label_1cf390:
    // 0x1cf390: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_1cf394:
    if (ctx->pc == 0x1CF394u) {
        ctx->pc = 0x1CF394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF390u;
        // 0x1cf394: 0x24030020  addiu       $v1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF398u;
        goto label_1cf398;
    }
    ctx->pc = 0x1CF390u;
    {
        const bool branch_taken_0x1cf390 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CF394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF390u;
        // 0x1cf394: 0x24030020  addiu       $v1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf390) {
            ctx->pc = 0x1CF39Cu;
            goto label_1cf39c;
        }
    }
    ctx->pc = 0x1CF398u;
label_1cf398:
    // 0x1cf398: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1cf398u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1cf39c:
    // 0x1cf39c: 0x0  nop
    ctx->pc = 0x1cf39cu;
    // NOP
label_1cf3a0:
    // 0x1cf3a0: 0x16000017  bnez        $s0, . + 4 + (0x17 << 2)
label_1cf3a4:
    if (ctx->pc == 0x1CF3A4u) {
        ctx->pc = 0x1CF3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF3A0u;
        // 0x1cf3a4: 0x22080  sll         $a0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF3A8u;
        goto label_1cf3a8;
    }
    ctx->pc = 0x1CF3A0u;
    {
        const bool branch_taken_0x1cf3a0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CF3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF3A0u;
        // 0x1cf3a4: 0x22080  sll         $a0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf3a0) {
            ctx->pc = 0x1CF400u;
            goto label_1cf400;
        }
    }
    ctx->pc = 0x1CF3A8u;
label_1cf3a8:
    // 0x1cf3a8: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
label_1cf3ac:
    if (ctx->pc == 0x1CF3ACu) {
        ctx->pc = 0x1CF3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF3A8u;
        // 0x1cf3ac: 0x41903  sra         $v1, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF3B0u;
        goto label_1cf3b0;
    }
    ctx->pc = 0x1CF3A8u;
    {
        const bool branch_taken_0x1cf3a8 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1CF3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF3A8u;
        // 0x1cf3ac: 0x41903  sra         $v1, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf3a8) {
            ctx->pc = 0x1CF3B8u;
            goto label_1cf3b8;
        }
    }
    ctx->pc = 0x1CF3B0u;
label_1cf3b0:
    // 0x1cf3b0: 0x2483000f  addiu       $v1, $a0, 0xF
    ctx->pc = 0x1cf3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
label_1cf3b4:
    // 0x1cf3b4: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x1cf3b4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
label_1cf3b8:
    // 0x1cf3b8: 0x2475007c  addiu       $s5, $v1, 0x7C
    ctx->pc = 0x1cf3b8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 124));
label_1cf3bc:
    // 0x1cf3bc: 0x22180  sll         $a0, $v0, 6
    ctx->pc = 0x1cf3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_1cf3c0:
    // 0x1cf3c0: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
label_1cf3c4:
    if (ctx->pc == 0x1CF3C4u) {
        ctx->pc = 0x1CF3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF3C0u;
        // 0x1cf3c4: 0x41903  sra         $v1, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF3C8u;
        goto label_1cf3c8;
    }
    ctx->pc = 0x1CF3C0u;
    {
        const bool branch_taken_0x1cf3c0 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1CF3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF3C0u;
        // 0x1cf3c4: 0x41903  sra         $v1, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf3c0) {
            ctx->pc = 0x1CF3D0u;
            goto label_1cf3d0;
        }
    }
    ctx->pc = 0x1CF3C8u;
label_1cf3c8:
    // 0x1cf3c8: 0x2483000f  addiu       $v1, $a0, 0xF
    ctx->pc = 0x1cf3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
label_1cf3cc:
    // 0x1cf3cc: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x1cf3ccu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
label_1cf3d0:
    // 0x1cf3d0: 0x24770040  addiu       $s7, $v1, 0x40
    ctx->pc = 0x1cf3d0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
label_1cf3d4:
    // 0x1cf3d4: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1cf3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1cf3d8:
    // 0x1cf3d8: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1cf3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1cf3dc:
    // 0x1cf3dc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1cf3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1cf3e0:
    // 0x1cf3e0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1cf3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1cf3e4:
    // 0x1cf3e4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1cf3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1cf3e8:
    // 0x1cf3e8: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_1cf3ec:
    if (ctx->pc == 0x1CF3ECu) {
        ctx->pc = 0x1CF3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF3E8u;
        // 0x1cf3ec: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF3F0u;
        goto label_1cf3f0;
    }
    ctx->pc = 0x1CF3E8u;
    {
        const bool branch_taken_0x1cf3e8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1CF3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF3E8u;
        // 0x1cf3ec: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf3e8) {
            ctx->pc = 0x1CF3F8u;
            goto label_1cf3f8;
        }
    }
    ctx->pc = 0x1CF3F0u;
label_1cf3f0:
    // 0x1cf3f0: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x1cf3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
label_1cf3f4:
    // 0x1cf3f4: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1cf3f4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_1cf3f8:
    // 0x1cf3f8: 0x10000039  b           . + 4 + (0x39 << 2)
label_1cf3fc:
    if (ctx->pc == 0x1CF3FCu) {
        ctx->pc = 0x1CF3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF3F8u;
        // 0x1cf3fc: 0x2456000c  addiu       $s6, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF400u;
        goto label_1cf400;
    }
    ctx->pc = 0x1CF3F8u;
    {
        const bool branch_taken_0x1cf3f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF3F8u;
        // 0x1cf3fc: 0x2456000c  addiu       $s6, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf3f8) {
            ctx->pc = 0x1CF4E0u;
            goto label_1cf4e0;
        }
    }
    ctx->pc = 0x1CF400u;
label_1cf400:
    // 0x1cf400: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1cf400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cf404:
    // 0x1cf404: 0x1603001b  bne         $s0, $v1, . + 4 + (0x1B << 2)
label_1cf408:
    if (ctx->pc == 0x1CF408u) {
        ctx->pc = 0x1CF408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF404u;
        // 0x1cf408: 0x21880  sll         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF40Cu;
        goto label_1cf40c;
    }
    ctx->pc = 0x1CF404u;
    {
        const bool branch_taken_0x1cf404 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x1CF408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF404u;
        // 0x1cf408: 0x21880  sll         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf404) {
            ctx->pc = 0x1CF474u;
            goto label_1cf474;
        }
    }
    ctx->pc = 0x1CF40Cu;
label_1cf40c:
    // 0x1cf40c: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x1cf40cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1cf410:
    // 0x1cf410: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1cf410u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1cf414:
    // 0x1cf414: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1cf414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1cf418:
    // 0x1cf418: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1cf418u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1cf41c:
    // 0x1cf41c: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
label_1cf420:
    if (ctx->pc == 0x1CF420u) {
        ctx->pc = 0x1CF420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF41Cu;
        // 0x1cf420: 0x41903  sra         $v1, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF424u;
        goto label_1cf424;
    }
    ctx->pc = 0x1CF41Cu;
    {
        const bool branch_taken_0x1cf41c = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1CF420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF41Cu;
        // 0x1cf420: 0x41903  sra         $v1, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf41c) {
            ctx->pc = 0x1CF42Cu;
            goto label_1cf42c;
        }
    }
    ctx->pc = 0x1CF424u;
label_1cf424:
    // 0x1cf424: 0x2483000f  addiu       $v1, $a0, 0xF
    ctx->pc = 0x1cf424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
label_1cf428:
    // 0x1cf428: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x1cf428u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
label_1cf42c:
    // 0x1cf42c: 0x2475001c  addiu       $s5, $v1, 0x1C
    ctx->pc = 0x1cf42cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 28));
label_1cf430:
    // 0x1cf430: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x1cf430u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1cf434:
    // 0x1cf434: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
label_1cf438:
    if (ctx->pc == 0x1CF438u) {
        ctx->pc = 0x1CF438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF434u;
        // 0x1cf438: 0x41903  sra         $v1, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF43Cu;
        goto label_1cf43c;
    }
    ctx->pc = 0x1CF434u;
    {
        const bool branch_taken_0x1cf434 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1CF438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF434u;
        // 0x1cf438: 0x41903  sra         $v1, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf434) {
            ctx->pc = 0x1CF444u;
            goto label_1cf444;
        }
    }
    ctx->pc = 0x1CF43Cu;
label_1cf43c:
    // 0x1cf43c: 0x2483000f  addiu       $v1, $a0, 0xF
    ctx->pc = 0x1cf43cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
label_1cf440:
    // 0x1cf440: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x1cf440u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
label_1cf444:
    // 0x1cf444: 0x24770078  addiu       $s7, $v1, 0x78
    ctx->pc = 0x1cf444u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 120));
label_1cf448:
    // 0x1cf448: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1cf448u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1cf44c:
    // 0x1cf44c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1cf44cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1cf450:
    // 0x1cf450: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1cf450u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1cf454:
    // 0x1cf454: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1cf454u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1cf458:
    // 0x1cf458: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1cf458u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1cf45c:
    // 0x1cf45c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_1cf460:
    if (ctx->pc == 0x1CF460u) {
        ctx->pc = 0x1CF460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF45Cu;
        // 0x1cf460: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF464u;
        goto label_1cf464;
    }
    ctx->pc = 0x1CF45Cu;
    {
        const bool branch_taken_0x1cf45c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1CF460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF45Cu;
        // 0x1cf460: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf45c) {
            ctx->pc = 0x1CF46Cu;
            goto label_1cf46c;
        }
    }
    ctx->pc = 0x1CF464u;
label_1cf464:
    // 0x1cf464: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x1cf464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
label_1cf468:
    // 0x1cf468: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1cf468u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_1cf46c:
    // 0x1cf46c: 0x1000001c  b           . + 4 + (0x1C << 2)
label_1cf470:
    if (ctx->pc == 0x1CF470u) {
        ctx->pc = 0x1CF470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF46Cu;
        // 0x1cf470: 0x24560014  addiu       $s6, $v0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF474u;
        goto label_1cf474;
    }
    ctx->pc = 0x1CF46Cu;
    {
        const bool branch_taken_0x1cf46c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF46Cu;
        // 0x1cf470: 0x24560014  addiu       $s6, $v0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf46c) {
            ctx->pc = 0x1CF4E0u;
            goto label_1cf4e0;
        }
    }
    ctx->pc = 0x1CF474u;
label_1cf474:
    // 0x1cf474: 0x0  nop
    ctx->pc = 0x1cf474u;
    // NOP
label_1cf478:
    // 0x1cf478: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1cf478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1cf47c:
    // 0x1cf47c: 0x16030018  bne         $s0, $v1, . + 4 + (0x18 << 2)
label_1cf480:
    if (ctx->pc == 0x1CF480u) {
        ctx->pc = 0x1CF480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF47Cu;
        // 0x1cf480: 0x220c0  sll         $a0, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF484u;
        goto label_1cf484;
    }
    ctx->pc = 0x1CF47Cu;
    {
        const bool branch_taken_0x1cf47c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x1CF480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF47Cu;
        // 0x1cf480: 0x220c0  sll         $a0, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf47c) {
            ctx->pc = 0x1CF4E0u;
            goto label_1cf4e0;
        }
    }
    ctx->pc = 0x1CF484u;
label_1cf484:
    // 0x1cf484: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
label_1cf488:
    if (ctx->pc == 0x1CF488u) {
        ctx->pc = 0x1CF488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF484u;
        // 0x1cf488: 0x41903  sra         $v1, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF48Cu;
        goto label_1cf48c;
    }
    ctx->pc = 0x1CF484u;
    {
        const bool branch_taken_0x1cf484 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1CF488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF484u;
        // 0x1cf488: 0x41903  sra         $v1, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf484) {
            ctx->pc = 0x1CF494u;
            goto label_1cf494;
        }
    }
    ctx->pc = 0x1CF48Cu;
label_1cf48c:
    // 0x1cf48c: 0x2483000f  addiu       $v1, $a0, 0xF
    ctx->pc = 0x1cf48cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
label_1cf490:
    // 0x1cf490: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x1cf490u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
label_1cf494:
    // 0x1cf494: 0x24750078  addiu       $s5, $v1, 0x78
    ctx->pc = 0x1cf494u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 120));
label_1cf498:
    // 0x1cf498: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1cf498u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1cf49c:
    // 0x1cf49c: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x1cf49cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1cf4a0:
    // 0x1cf4a0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1cf4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1cf4a4:
    // 0x1cf4a4: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1cf4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1cf4a8:
    // 0x1cf4a8: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1cf4a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1cf4ac:
    // 0x1cf4ac: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
label_1cf4b0:
    if (ctx->pc == 0x1CF4B0u) {
        ctx->pc = 0x1CF4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF4ACu;
        // 0x1cf4b0: 0x41903  sra         $v1, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF4B4u;
        goto label_1cf4b4;
    }
    ctx->pc = 0x1CF4ACu;
    {
        const bool branch_taken_0x1cf4ac = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1CF4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF4ACu;
        // 0x1cf4b0: 0x41903  sra         $v1, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf4ac) {
            ctx->pc = 0x1CF4BCu;
            goto label_1cf4bc;
        }
    }
    ctx->pc = 0x1CF4B4u;
label_1cf4b4:
    // 0x1cf4b4: 0x2483000f  addiu       $v1, $a0, 0xF
    ctx->pc = 0x1cf4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
label_1cf4b8:
    // 0x1cf4b8: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x1cf4b8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
label_1cf4bc:
    // 0x1cf4bc: 0x24770014  addiu       $s7, $v1, 0x14
    ctx->pc = 0x1cf4bcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
label_1cf4c0:
    // 0x1cf4c0: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1cf4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1cf4c4:
    // 0x1cf4c4: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1cf4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1cf4c8:
    // 0x1cf4c8: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1cf4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1cf4cc:
    // 0x1cf4cc: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_1cf4d0:
    if (ctx->pc == 0x1CF4D0u) {
        ctx->pc = 0x1CF4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF4CCu;
        // 0x1cf4d0: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF4D4u;
        goto label_1cf4d4;
    }
    ctx->pc = 0x1CF4CCu;
    {
        const bool branch_taken_0x1cf4cc = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1CF4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF4CCu;
        // 0x1cf4d0: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf4cc) {
            ctx->pc = 0x1CF4DCu;
            goto label_1cf4dc;
        }
    }
    ctx->pc = 0x1CF4D4u;
label_1cf4d4:
    // 0x1cf4d4: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x1cf4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
label_1cf4d8:
    // 0x1cf4d8: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1cf4d8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_1cf4dc:
    // 0x1cf4dc: 0x24560048  addiu       $s6, $v0, 0x48
    ctx->pc = 0x1cf4dcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
label_1cf4e0:
    // 0x1cf4e0: 0xa2950070  sb          $s5, 0x70($s4)
    ctx->pc = 0x1cf4e0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 112), (uint8_t)GPR_U32(ctx, 21));
label_1cf4e4:
    // 0x1cf4e4: 0xa2970071  sb          $s7, 0x71($s4)
    ctx->pc = 0x1cf4e4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 113), (uint8_t)GPR_U32(ctx, 23));
label_1cf4e8:
    // 0x1cf4e8: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1cf4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1cf4ec:
    // 0x1cf4ec: 0xa2960072  sb          $s6, 0x72($s4)
    ctx->pc = 0x1cf4ecu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 114), (uint8_t)GPR_U32(ctx, 22));
    ctx->pc = 0x1cf4f0u;
    return;
}

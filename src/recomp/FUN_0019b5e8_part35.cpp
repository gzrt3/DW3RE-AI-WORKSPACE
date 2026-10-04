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


void FUN_0019b5e8_part35(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1abf88u: goto label_1abf88;
        case 0x1abf8cu: goto label_1abf8c;
        case 0x1abf90u: goto label_1abf90;
        case 0x1abf94u: goto label_1abf94;
        case 0x1abf98u: goto label_1abf98;
        case 0x1abf9cu: goto label_1abf9c;
        case 0x1abfa0u: goto label_1abfa0;
        case 0x1abfa4u: goto label_1abfa4;
        case 0x1abfa8u: goto label_1abfa8;
        case 0x1abfacu: goto label_1abfac;
        case 0x1abfb0u: goto label_1abfb0;
        case 0x1abfb4u: goto label_1abfb4;
        case 0x1abfb8u: goto label_1abfb8;
        case 0x1abfbcu: goto label_1abfbc;
        case 0x1abfc0u: goto label_1abfc0;
        case 0x1abfc4u: goto label_1abfc4;
        case 0x1abfc8u: goto label_1abfc8;
        case 0x1abfccu: goto label_1abfcc;
        case 0x1abfd0u: goto label_1abfd0;
        case 0x1abfd4u: goto label_1abfd4;
        case 0x1abfd8u: goto label_1abfd8;
        case 0x1abfdcu: goto label_1abfdc;
        case 0x1abfe0u: goto label_1abfe0;
        case 0x1abfe4u: goto label_1abfe4;
        case 0x1abfe8u: goto label_1abfe8;
        case 0x1abfecu: goto label_1abfec;
        case 0x1abff0u: goto label_1abff0;
        case 0x1abff4u: goto label_1abff4;
        case 0x1abff8u: goto label_1abff8;
        case 0x1abffcu: goto label_1abffc;
        case 0x1ac000u: goto label_1ac000;
        case 0x1ac004u: goto label_1ac004;
        case 0x1ac008u: goto label_1ac008;
        case 0x1ac00cu: goto label_1ac00c;
        case 0x1ac010u: goto label_1ac010;
        case 0x1ac014u: goto label_1ac014;
        case 0x1ac018u: goto label_1ac018;
        case 0x1ac01cu: goto label_1ac01c;
        case 0x1ac020u: goto label_1ac020;
        case 0x1ac024u: goto label_1ac024;
        case 0x1ac028u: goto label_1ac028;
        case 0x1ac02cu: goto label_1ac02c;
        case 0x1ac030u: goto label_1ac030;
        case 0x1ac034u: goto label_1ac034;
        case 0x1ac038u: goto label_1ac038;
        case 0x1ac03cu: goto label_1ac03c;
        case 0x1ac040u: goto label_1ac040;
        case 0x1ac044u: goto label_1ac044;
        case 0x1ac048u: goto label_1ac048;
        case 0x1ac04cu: goto label_1ac04c;
        case 0x1ac050u: goto label_1ac050;
        case 0x1ac054u: goto label_1ac054;
        case 0x1ac058u: goto label_1ac058;
        case 0x1ac05cu: goto label_1ac05c;
        case 0x1ac060u: goto label_1ac060;
        case 0x1ac064u: goto label_1ac064;
        case 0x1ac068u: goto label_1ac068;
        case 0x1ac06cu: goto label_1ac06c;
        case 0x1ac070u: goto label_1ac070;
        case 0x1ac074u: goto label_1ac074;
        case 0x1ac078u: goto label_1ac078;
        case 0x1ac07cu: goto label_1ac07c;
        case 0x1ac080u: goto label_1ac080;
        case 0x1ac084u: goto label_1ac084;
        case 0x1ac088u: goto label_1ac088;
        case 0x1ac08cu: goto label_1ac08c;
        case 0x1ac090u: goto label_1ac090;
        case 0x1ac094u: goto label_1ac094;
        case 0x1ac098u: goto label_1ac098;
        case 0x1ac09cu: goto label_1ac09c;
        case 0x1ac0a0u: goto label_1ac0a0;
        case 0x1ac0a4u: goto label_1ac0a4;
        case 0x1ac0a8u: goto label_1ac0a8;
        case 0x1ac0acu: goto label_1ac0ac;
        case 0x1ac0b0u: goto label_1ac0b0;
        case 0x1ac0b4u: goto label_1ac0b4;
        case 0x1ac0b8u: goto label_1ac0b8;
        case 0x1ac0bcu: goto label_1ac0bc;
        case 0x1ac0c0u: goto label_1ac0c0;
        case 0x1ac0c4u: goto label_1ac0c4;
        case 0x1ac0c8u: goto label_1ac0c8;
        case 0x1ac0ccu: goto label_1ac0cc;
        case 0x1ac0d0u: goto label_1ac0d0;
        case 0x1ac0d4u: goto label_1ac0d4;
        case 0x1ac0d8u: goto label_1ac0d8;
        case 0x1ac0dcu: goto label_1ac0dc;
        case 0x1ac0e0u: goto label_1ac0e0;
        case 0x1ac0e4u: goto label_1ac0e4;
        case 0x1ac0e8u: goto label_1ac0e8;
        case 0x1ac0ecu: goto label_1ac0ec;
        case 0x1ac0f0u: goto label_1ac0f0;
        case 0x1ac0f4u: goto label_1ac0f4;
        case 0x1ac0f8u: goto label_1ac0f8;
        case 0x1ac0fcu: goto label_1ac0fc;
        case 0x1ac100u: goto label_1ac100;
        case 0x1ac104u: goto label_1ac104;
        case 0x1ac108u: goto label_1ac108;
        case 0x1ac10cu: goto label_1ac10c;
        case 0x1ac110u: goto label_1ac110;
        case 0x1ac114u: goto label_1ac114;
        case 0x1ac118u: goto label_1ac118;
        case 0x1ac11cu: goto label_1ac11c;
        case 0x1ac120u: goto label_1ac120;
        case 0x1ac124u: goto label_1ac124;
        case 0x1ac128u: goto label_1ac128;
        case 0x1ac12cu: goto label_1ac12c;
        case 0x1ac130u: goto label_1ac130;
        case 0x1ac134u: goto label_1ac134;
        case 0x1ac138u: goto label_1ac138;
        case 0x1ac13cu: goto label_1ac13c;
        case 0x1ac140u: goto label_1ac140;
        case 0x1ac144u: goto label_1ac144;
        case 0x1ac148u: goto label_1ac148;
        case 0x1ac14cu: goto label_1ac14c;
        case 0x1ac150u: goto label_1ac150;
        case 0x1ac154u: goto label_1ac154;
        case 0x1ac158u: goto label_1ac158;
        case 0x1ac15cu: goto label_1ac15c;
        case 0x1ac160u: goto label_1ac160;
        case 0x1ac164u: goto label_1ac164;
        case 0x1ac168u: goto label_1ac168;
        case 0x1ac16cu: goto label_1ac16c;
        case 0x1ac170u: goto label_1ac170;
        case 0x1ac174u: goto label_1ac174;
        case 0x1ac178u: goto label_1ac178;
        case 0x1ac17cu: goto label_1ac17c;
        case 0x1ac180u: goto label_1ac180;
        case 0x1ac184u: goto label_1ac184;
        case 0x1ac188u: goto label_1ac188;
        case 0x1ac18cu: goto label_1ac18c;
        case 0x1ac190u: goto label_1ac190;
        case 0x1ac194u: goto label_1ac194;
        case 0x1ac198u: goto label_1ac198;
        case 0x1ac19cu: goto label_1ac19c;
        case 0x1ac1a0u: goto label_1ac1a0;
        case 0x1ac1a4u: goto label_1ac1a4;
        case 0x1ac1a8u: goto label_1ac1a8;
        case 0x1ac1acu: goto label_1ac1ac;
        case 0x1ac1b0u: goto label_1ac1b0;
        case 0x1ac1b4u: goto label_1ac1b4;
        case 0x1ac1b8u: goto label_1ac1b8;
        case 0x1ac1bcu: goto label_1ac1bc;
        case 0x1ac1c0u: goto label_1ac1c0;
        case 0x1ac1c4u: goto label_1ac1c4;
        case 0x1ac1c8u: goto label_1ac1c8;
        case 0x1ac1ccu: goto label_1ac1cc;
        case 0x1ac1d0u: goto label_1ac1d0;
        case 0x1ac1d4u: goto label_1ac1d4;
        case 0x1ac1d8u: goto label_1ac1d8;
        case 0x1ac1dcu: goto label_1ac1dc;
        case 0x1ac1e0u: goto label_1ac1e0;
        case 0x1ac1e4u: goto label_1ac1e4;
        case 0x1ac1e8u: goto label_1ac1e8;
        case 0x1ac1ecu: goto label_1ac1ec;
        case 0x1ac1f0u: goto label_1ac1f0;
        case 0x1ac1f4u: goto label_1ac1f4;
        case 0x1ac1f8u: goto label_1ac1f8;
        case 0x1ac1fcu: goto label_1ac1fc;
        case 0x1ac200u: goto label_1ac200;
        case 0x1ac204u: goto label_1ac204;
        case 0x1ac208u: goto label_1ac208;
        case 0x1ac20cu: goto label_1ac20c;
        case 0x1ac210u: goto label_1ac210;
        case 0x1ac214u: goto label_1ac214;
        case 0x1ac218u: goto label_1ac218;
        case 0x1ac21cu: goto label_1ac21c;
        case 0x1ac220u: goto label_1ac220;
        case 0x1ac224u: goto label_1ac224;
        case 0x1ac228u: goto label_1ac228;
        case 0x1ac22cu: goto label_1ac22c;
        case 0x1ac230u: goto label_1ac230;
        case 0x1ac234u: goto label_1ac234;
        case 0x1ac238u: goto label_1ac238;
        case 0x1ac23cu: goto label_1ac23c;
        case 0x1ac240u: goto label_1ac240;
        case 0x1ac244u: goto label_1ac244;
        case 0x1ac248u: goto label_1ac248;
        case 0x1ac24cu: goto label_1ac24c;
        case 0x1ac250u: goto label_1ac250;
        case 0x1ac254u: goto label_1ac254;
        case 0x1ac258u: goto label_1ac258;
        case 0x1ac25cu: goto label_1ac25c;
        case 0x1ac260u: goto label_1ac260;
        case 0x1ac264u: goto label_1ac264;
        case 0x1ac268u: goto label_1ac268;
        case 0x1ac26cu: goto label_1ac26c;
        case 0x1ac270u: goto label_1ac270;
        case 0x1ac274u: goto label_1ac274;
        case 0x1ac278u: goto label_1ac278;
        case 0x1ac27cu: goto label_1ac27c;
        case 0x1ac280u: goto label_1ac280;
        case 0x1ac284u: goto label_1ac284;
        case 0x1ac288u: goto label_1ac288;
        case 0x1ac28cu: goto label_1ac28c;
        case 0x1ac290u: goto label_1ac290;
        case 0x1ac294u: goto label_1ac294;
        case 0x1ac298u: goto label_1ac298;
        case 0x1ac29cu: goto label_1ac29c;
        case 0x1ac2a0u: goto label_1ac2a0;
        case 0x1ac2a4u: goto label_1ac2a4;
        case 0x1ac2a8u: goto label_1ac2a8;
        case 0x1ac2acu: goto label_1ac2ac;
        case 0x1ac2b0u: goto label_1ac2b0;
        case 0x1ac2b4u: goto label_1ac2b4;
        case 0x1ac2b8u: goto label_1ac2b8;
        case 0x1ac2bcu: goto label_1ac2bc;
        case 0x1ac2c0u: goto label_1ac2c0;
        case 0x1ac2c4u: goto label_1ac2c4;
        case 0x1ac2c8u: goto label_1ac2c8;
        case 0x1ac2ccu: goto label_1ac2cc;
        case 0x1ac2d0u: goto label_1ac2d0;
        case 0x1ac2d4u: goto label_1ac2d4;
        case 0x1ac2d8u: goto label_1ac2d8;
        case 0x1ac2dcu: goto label_1ac2dc;
        case 0x1ac2e0u: goto label_1ac2e0;
        case 0x1ac2e4u: goto label_1ac2e4;
        case 0x1ac2e8u: goto label_1ac2e8;
        case 0x1ac2ecu: goto label_1ac2ec;
        case 0x1ac2f0u: goto label_1ac2f0;
        case 0x1ac2f4u: goto label_1ac2f4;
        case 0x1ac2f8u: goto label_1ac2f8;
        case 0x1ac2fcu: goto label_1ac2fc;
        case 0x1ac300u: goto label_1ac300;
        case 0x1ac304u: goto label_1ac304;
        case 0x1ac308u: goto label_1ac308;
        case 0x1ac30cu: goto label_1ac30c;
        case 0x1ac310u: goto label_1ac310;
        case 0x1ac314u: goto label_1ac314;
        case 0x1ac318u: goto label_1ac318;
        case 0x1ac31cu: goto label_1ac31c;
        case 0x1ac320u: goto label_1ac320;
        case 0x1ac324u: goto label_1ac324;
        case 0x1ac328u: goto label_1ac328;
        case 0x1ac32cu: goto label_1ac32c;
        case 0x1ac330u: goto label_1ac330;
        case 0x1ac334u: goto label_1ac334;
        case 0x1ac338u: goto label_1ac338;
        case 0x1ac33cu: goto label_1ac33c;
        case 0x1ac340u: goto label_1ac340;
        case 0x1ac344u: goto label_1ac344;
        case 0x1ac348u: goto label_1ac348;
        case 0x1ac34cu: goto label_1ac34c;
        case 0x1ac350u: goto label_1ac350;
        case 0x1ac354u: goto label_1ac354;
        case 0x1ac358u: goto label_1ac358;
        case 0x1ac35cu: goto label_1ac35c;
        case 0x1ac360u: goto label_1ac360;
        case 0x1ac364u: goto label_1ac364;
        case 0x1ac368u: goto label_1ac368;
        case 0x1ac36cu: goto label_1ac36c;
        case 0x1ac370u: goto label_1ac370;
        case 0x1ac374u: goto label_1ac374;
        case 0x1ac378u: goto label_1ac378;
        case 0x1ac37cu: goto label_1ac37c;
        case 0x1ac380u: goto label_1ac380;
        case 0x1ac384u: goto label_1ac384;
        case 0x1ac388u: goto label_1ac388;
        case 0x1ac38cu: goto label_1ac38c;
        case 0x1ac390u: goto label_1ac390;
        case 0x1ac394u: goto label_1ac394;
        case 0x1ac398u: goto label_1ac398;
        case 0x1ac39cu: goto label_1ac39c;
        case 0x1ac3a0u: goto label_1ac3a0;
        case 0x1ac3a4u: goto label_1ac3a4;
        case 0x1ac3a8u: goto label_1ac3a8;
        case 0x1ac3acu: goto label_1ac3ac;
        case 0x1ac3b0u: goto label_1ac3b0;
        case 0x1ac3b4u: goto label_1ac3b4;
        case 0x1ac3b8u: goto label_1ac3b8;
        case 0x1ac3bcu: goto label_1ac3bc;
        case 0x1ac3c0u: goto label_1ac3c0;
        case 0x1ac3c4u: goto label_1ac3c4;
        case 0x1ac3c8u: goto label_1ac3c8;
        case 0x1ac3ccu: goto label_1ac3cc;
        case 0x1ac3d0u: goto label_1ac3d0;
        case 0x1ac3d4u: goto label_1ac3d4;
        case 0x1ac3d8u: goto label_1ac3d8;
        case 0x1ac3dcu: goto label_1ac3dc;
        case 0x1ac3e0u: goto label_1ac3e0;
        case 0x1ac3e4u: goto label_1ac3e4;
        case 0x1ac3e8u: goto label_1ac3e8;
        case 0x1ac3ecu: goto label_1ac3ec;
        case 0x1ac3f0u: goto label_1ac3f0;
        case 0x1ac3f4u: goto label_1ac3f4;
        case 0x1ac3f8u: goto label_1ac3f8;
        case 0x1ac3fcu: goto label_1ac3fc;
        case 0x1ac400u: goto label_1ac400;
        case 0x1ac404u: goto label_1ac404;
        case 0x1ac408u: goto label_1ac408;
        case 0x1ac40cu: goto label_1ac40c;
        case 0x1ac410u: goto label_1ac410;
        case 0x1ac414u: goto label_1ac414;
        case 0x1ac418u: goto label_1ac418;
        case 0x1ac41cu: goto label_1ac41c;
        case 0x1ac420u: goto label_1ac420;
        case 0x1ac424u: goto label_1ac424;
        case 0x1ac428u: goto label_1ac428;
        case 0x1ac42cu: goto label_1ac42c;
        case 0x1ac430u: goto label_1ac430;
        case 0x1ac434u: goto label_1ac434;
        case 0x1ac438u: goto label_1ac438;
        case 0x1ac43cu: goto label_1ac43c;
        case 0x1ac440u: goto label_1ac440;
        case 0x1ac444u: goto label_1ac444;
        case 0x1ac448u: goto label_1ac448;
        case 0x1ac44cu: goto label_1ac44c;
        case 0x1ac450u: goto label_1ac450;
        case 0x1ac454u: goto label_1ac454;
        case 0x1ac458u: goto label_1ac458;
        case 0x1ac45cu: goto label_1ac45c;
        case 0x1ac460u: goto label_1ac460;
        case 0x1ac464u: goto label_1ac464;
        case 0x1ac468u: goto label_1ac468;
        case 0x1ac46cu: goto label_1ac46c;
        case 0x1ac470u: goto label_1ac470;
        case 0x1ac474u: goto label_1ac474;
        case 0x1ac478u: goto label_1ac478;
        case 0x1ac47cu: goto label_1ac47c;
        case 0x1ac480u: goto label_1ac480;
        case 0x1ac484u: goto label_1ac484;
        case 0x1ac488u: goto label_1ac488;
        case 0x1ac48cu: goto label_1ac48c;
        case 0x1ac490u: goto label_1ac490;
        case 0x1ac494u: goto label_1ac494;
        case 0x1ac498u: goto label_1ac498;
        case 0x1ac49cu: goto label_1ac49c;
        case 0x1ac4a0u: goto label_1ac4a0;
        case 0x1ac4a4u: goto label_1ac4a4;
        case 0x1ac4a8u: goto label_1ac4a8;
        case 0x1ac4acu: goto label_1ac4ac;
        case 0x1ac4b0u: goto label_1ac4b0;
        case 0x1ac4b4u: goto label_1ac4b4;
        case 0x1ac4b8u: goto label_1ac4b8;
        case 0x1ac4bcu: goto label_1ac4bc;
        case 0x1ac4c0u: goto label_1ac4c0;
        case 0x1ac4c4u: goto label_1ac4c4;
        case 0x1ac4c8u: goto label_1ac4c8;
        case 0x1ac4ccu: goto label_1ac4cc;
        case 0x1ac4d0u: goto label_1ac4d0;
        case 0x1ac4d4u: goto label_1ac4d4;
        case 0x1ac4d8u: goto label_1ac4d8;
        case 0x1ac4dcu: goto label_1ac4dc;
        case 0x1ac4e0u: goto label_1ac4e0;
        case 0x1ac4e4u: goto label_1ac4e4;
        case 0x1ac4e8u: goto label_1ac4e8;
        case 0x1ac4ecu: goto label_1ac4ec;
        case 0x1ac4f0u: goto label_1ac4f0;
        case 0x1ac4f4u: goto label_1ac4f4;
        case 0x1ac4f8u: goto label_1ac4f8;
        case 0x1ac4fcu: goto label_1ac4fc;
        case 0x1ac500u: goto label_1ac500;
        case 0x1ac504u: goto label_1ac504;
        case 0x1ac508u: goto label_1ac508;
        case 0x1ac50cu: goto label_1ac50c;
        case 0x1ac510u: goto label_1ac510;
        case 0x1ac514u: goto label_1ac514;
        case 0x1ac518u: goto label_1ac518;
        case 0x1ac51cu: goto label_1ac51c;
        case 0x1ac520u: goto label_1ac520;
        case 0x1ac524u: goto label_1ac524;
        case 0x1ac528u: goto label_1ac528;
        case 0x1ac52cu: goto label_1ac52c;
        case 0x1ac530u: goto label_1ac530;
        case 0x1ac534u: goto label_1ac534;
        case 0x1ac538u: goto label_1ac538;
        case 0x1ac53cu: goto label_1ac53c;
        case 0x1ac540u: goto label_1ac540;
        case 0x1ac544u: goto label_1ac544;
        case 0x1ac548u: goto label_1ac548;
        case 0x1ac54cu: goto label_1ac54c;
        case 0x1ac550u: goto label_1ac550;
        case 0x1ac554u: goto label_1ac554;
        case 0x1ac558u: goto label_1ac558;
        case 0x1ac55cu: goto label_1ac55c;
        case 0x1ac560u: goto label_1ac560;
        case 0x1ac564u: goto label_1ac564;
        case 0x1ac568u: goto label_1ac568;
        case 0x1ac56cu: goto label_1ac56c;
        case 0x1ac570u: goto label_1ac570;
        case 0x1ac574u: goto label_1ac574;
        case 0x1ac578u: goto label_1ac578;
        case 0x1ac57cu: goto label_1ac57c;
        case 0x1ac580u: goto label_1ac580;
        case 0x1ac584u: goto label_1ac584;
        case 0x1ac588u: goto label_1ac588;
        case 0x1ac58cu: goto label_1ac58c;
        case 0x1ac590u: goto label_1ac590;
        case 0x1ac594u: goto label_1ac594;
        case 0x1ac598u: goto label_1ac598;
        case 0x1ac59cu: goto label_1ac59c;
        case 0x1ac5a0u: goto label_1ac5a0;
        case 0x1ac5a4u: goto label_1ac5a4;
        case 0x1ac5a8u: goto label_1ac5a8;
        case 0x1ac5acu: goto label_1ac5ac;
        case 0x1ac5b0u: goto label_1ac5b0;
        case 0x1ac5b4u: goto label_1ac5b4;
        case 0x1ac5b8u: goto label_1ac5b8;
        case 0x1ac5bcu: goto label_1ac5bc;
        case 0x1ac5c0u: goto label_1ac5c0;
        case 0x1ac5c4u: goto label_1ac5c4;
        case 0x1ac5c8u: goto label_1ac5c8;
        case 0x1ac5ccu: goto label_1ac5cc;
        case 0x1ac5d0u: goto label_1ac5d0;
        case 0x1ac5d4u: goto label_1ac5d4;
        case 0x1ac5d8u: goto label_1ac5d8;
        case 0x1ac5dcu: goto label_1ac5dc;
        case 0x1ac5e0u: goto label_1ac5e0;
        case 0x1ac5e4u: goto label_1ac5e4;
        case 0x1ac5e8u: goto label_1ac5e8;
        case 0x1ac5ecu: goto label_1ac5ec;
        case 0x1ac5f0u: goto label_1ac5f0;
        case 0x1ac5f4u: goto label_1ac5f4;
        case 0x1ac5f8u: goto label_1ac5f8;
        case 0x1ac5fcu: goto label_1ac5fc;
        case 0x1ac600u: goto label_1ac600;
        case 0x1ac604u: goto label_1ac604;
        case 0x1ac608u: goto label_1ac608;
        case 0x1ac60cu: goto label_1ac60c;
        case 0x1ac610u: goto label_1ac610;
        case 0x1ac614u: goto label_1ac614;
        case 0x1ac618u: goto label_1ac618;
        case 0x1ac61cu: goto label_1ac61c;
        case 0x1ac620u: goto label_1ac620;
        case 0x1ac624u: goto label_1ac624;
        case 0x1ac628u: goto label_1ac628;
        case 0x1ac62cu: goto label_1ac62c;
        case 0x1ac630u: goto label_1ac630;
        case 0x1ac634u: goto label_1ac634;
        case 0x1ac638u: goto label_1ac638;
        case 0x1ac63cu: goto label_1ac63c;
        case 0x1ac640u: goto label_1ac640;
        case 0x1ac644u: goto label_1ac644;
        case 0x1ac648u: goto label_1ac648;
        case 0x1ac64cu: goto label_1ac64c;
        case 0x1ac650u: goto label_1ac650;
        case 0x1ac654u: goto label_1ac654;
        case 0x1ac658u: goto label_1ac658;
        case 0x1ac65cu: goto label_1ac65c;
        case 0x1ac660u: goto label_1ac660;
        case 0x1ac664u: goto label_1ac664;
        case 0x1ac668u: goto label_1ac668;
        case 0x1ac66cu: goto label_1ac66c;
        case 0x1ac670u: goto label_1ac670;
        case 0x1ac674u: goto label_1ac674;
        case 0x1ac678u: goto label_1ac678;
        case 0x1ac67cu: goto label_1ac67c;
        case 0x1ac680u: goto label_1ac680;
        case 0x1ac684u: goto label_1ac684;
        case 0x1ac688u: goto label_1ac688;
        case 0x1ac68cu: goto label_1ac68c;
        case 0x1ac690u: goto label_1ac690;
        case 0x1ac694u: goto label_1ac694;
        case 0x1ac698u: goto label_1ac698;
        case 0x1ac69cu: goto label_1ac69c;
        case 0x1ac6a0u: goto label_1ac6a0;
        case 0x1ac6a4u: goto label_1ac6a4;
        case 0x1ac6a8u: goto label_1ac6a8;
        case 0x1ac6acu: goto label_1ac6ac;
        case 0x1ac6b0u: goto label_1ac6b0;
        case 0x1ac6b4u: goto label_1ac6b4;
        case 0x1ac6b8u: goto label_1ac6b8;
        case 0x1ac6bcu: goto label_1ac6bc;
        case 0x1ac6c0u: goto label_1ac6c0;
        case 0x1ac6c4u: goto label_1ac6c4;
        case 0x1ac6c8u: goto label_1ac6c8;
        case 0x1ac6ccu: goto label_1ac6cc;
        case 0x1ac6d0u: goto label_1ac6d0;
        case 0x1ac6d4u: goto label_1ac6d4;
        case 0x1ac6d8u: goto label_1ac6d8;
        case 0x1ac6dcu: goto label_1ac6dc;
        case 0x1ac6e0u: goto label_1ac6e0;
        case 0x1ac6e4u: goto label_1ac6e4;
        case 0x1ac6e8u: goto label_1ac6e8;
        case 0x1ac6ecu: goto label_1ac6ec;
        case 0x1ac6f0u: goto label_1ac6f0;
        case 0x1ac6f4u: goto label_1ac6f4;
        case 0x1ac6f8u: goto label_1ac6f8;
        case 0x1ac6fcu: goto label_1ac6fc;
        case 0x1ac700u: goto label_1ac700;
        case 0x1ac704u: goto label_1ac704;
        case 0x1ac708u: goto label_1ac708;
        case 0x1ac70cu: goto label_1ac70c;
        case 0x1ac710u: goto label_1ac710;
        case 0x1ac714u: goto label_1ac714;
        case 0x1ac718u: goto label_1ac718;
        case 0x1ac71cu: goto label_1ac71c;
        case 0x1ac720u: goto label_1ac720;
        case 0x1ac724u: goto label_1ac724;
        case 0x1ac728u: goto label_1ac728;
        case 0x1ac72cu: goto label_1ac72c;
        case 0x1ac730u: goto label_1ac730;
        case 0x1ac734u: goto label_1ac734;
        case 0x1ac738u: goto label_1ac738;
        case 0x1ac73cu: goto label_1ac73c;
        case 0x1ac740u: goto label_1ac740;
        case 0x1ac744u: goto label_1ac744;
        case 0x1ac748u: goto label_1ac748;
        case 0x1ac74cu: goto label_1ac74c;
        case 0x1ac750u: goto label_1ac750;
        case 0x1ac754u: goto label_1ac754;
        default: return;
    }

label_1abf88:
    // 0x1abf88: 0x3e00008  jr          $ra
label_1abf8c:
    if (ctx->pc == 0x1ABF8Cu) {
        ctx->pc = 0x1ABF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABF88u;
        // 0x1abf8c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ABF90u;
        goto label_1abf90;
    }
    ctx->pc = 0x1ABF88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ABF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABF88u;
        // 0x1abf8c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ABF88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ABF90u;
label_1abf90:
    // 0x1abf90: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1abf90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_1abf94:
    // 0x1abf94: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x1abf94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
label_1abf98:
    // 0x1abf98: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x1abf98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_1abf9c:
    // 0x1abf9c: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x1abf9cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1abfa0:
    // 0x1abfa0: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1abfa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_1abfa4:
    // 0x1abfa4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1abfa4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1abfa8:
    // 0x1abfa8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1abfa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1abfac:
    // 0x1abfac: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1abfacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1abfb0:
    // 0x1abfb0: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1abfb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_1abfb4:
    // 0x1abfb4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1abfb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1abfb8:
    // 0x1abfb8: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x1abfb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
label_1abfbc:
    // 0x1abfbc: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1abfbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_1abfc0:
    // 0x1abfc0: 0xc06aef0  jal         func_1ABBC0
label_1abfc4:
    if (ctx->pc == 0x1ABFC4u) {
        ctx->pc = 0x1ABFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABFC0u;
        // 0x1abfc4: 0xffb20030  sd          $s2, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ABFC8u;
        goto label_1abfc8;
    }
    ctx->pc = 0x1ABFC0u;
    SET_GPR_U32(ctx, 31, 0x1ABFC8u);
    ctx->pc = 0x1ABFC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABFC0u;
    // 0x1abfc4: 0xffb20030  sd          $s2, 0x30($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ABBC0u;
    { ctx->pc = 0x1abbc0; return; }
    ctx->pc = 0x1ABFC8u;
label_1abfc8:
    // 0x1abfc8: 0x4400069  bltz        $v0, . + 4 + (0x69 << 2)
label_1abfcc:
    if (ctx->pc == 0x1ABFCCu) {
        ctx->pc = 0x1ABFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABFC8u;
        // 0x1abfcc: 0x3c02ffff  lui         $v0, 0xFFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ABFD0u;
        goto label_1abfd0;
    }
    ctx->pc = 0x1ABFC8u;
    {
        const bool branch_taken_0x1abfc8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1ABFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABFC8u;
        // 0x1abfcc: 0x3c02ffff  lui         $v0, 0xFFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abfc8) {
            ctx->pc = 0x1AC170u;
            goto label_1ac170;
        }
    }
    ctx->pc = 0x1ABFD0u;
label_1abfd0:
    // 0x1abfd0: 0xc06af30  jal         func_1ABCC0
label_1abfd4:
    if (ctx->pc == 0x1ABFD4u) {
        ctx->pc = 0x1ABFD8u;
        goto label_1abfd8;
    }
    ctx->pc = 0x1ABFD0u;
    SET_GPR_U32(ctx, 31, 0x1ABFD8u);
    ctx->pc = 0x1ABCC0u;
    { ctx->pc = 0x1abcc0; return; }
    ctx->pc = 0x1ABFD8u;
label_1abfd8:
    // 0x1abfd8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1abfdc:
    if (ctx->pc == 0x1ABFDCu) {
        ctx->pc = 0x1ABFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABFD8u;
        // 0x1abfdc: 0x3c140037  lui         $s4, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ABFE0u;
        goto label_1abfe0;
    }
    ctx->pc = 0x1ABFD8u;
    {
        const bool branch_taken_0x1abfd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABFD8u;
        // 0x1abfdc: 0x3c140037  lui         $s4, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abfd8) {
            ctx->pc = 0x1ABFECu;
            goto label_1abfec;
        }
    }
    ctx->pc = 0x1ABFE0u;
label_1abfe0:
    // 0x1abfe0: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x1abfe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
label_1abfe4:
    // 0x1abfe4: 0x10000062  b           . + 4 + (0x62 << 2)
label_1abfe8:
    if (ctx->pc == 0x1ABFE8u) {
        ctx->pc = 0x1ABFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABFE4u;
        // 0x1abfe8: 0x3442fffc  ori         $v0, $v0, 0xFFFC (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ABFECu;
        goto label_1abfec;
    }
    ctx->pc = 0x1ABFE4u;
    {
        const bool branch_taken_0x1abfe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABFE4u;
        // 0x1abfe8: 0x3442fffc  ori         $v0, $v0, 0xFFFC (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abfe4) {
            ctx->pc = 0x1AC170u;
            goto label_1ac170;
        }
    }
    ctx->pc = 0x1ABFECu;
label_1abfec:
    // 0x1abfec: 0x280a82d  daddu       $s5, $s4, $zero
    ctx->pc = 0x1abfecu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1abff0:
    // 0x1abff0: 0x26924780  addiu       $s2, $s4, 0x4780
    ctx->pc = 0x1abff0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 18304));
label_1abff4:
    // 0x1abff4: 0x1200004a  beqz        $s0, . + 4 + (0x4A << 2)
label_1abff8:
    if (ctx->pc == 0x1ABFF8u) {
        ctx->pc = 0x1ABFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABFF4u;
        // 0x1abff8: 0xae934780  sw          $s3, 0x4780($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 18304), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ABFFCu;
        goto label_1abffc;
    }
    ctx->pc = 0x1ABFF4u;
    {
        const bool branch_taken_0x1abff4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABFF4u;
        // 0x1abff8: 0xae934780  sw          $s3, 0x4780($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 18304), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abff4) {
            ctx->pc = 0x1AC120u;
            goto label_1ac120;
        }
    }
    ctx->pc = 0x1ABFFCu;
label_1abffc:
    // 0x1abffc: 0x2a2200fd  slti        $v0, $s1, 0xFD
    ctx->pc = 0x1abffcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)253) ? 1 : 0);
label_1ac000:
    // 0x1ac000: 0x14400042  bnez        $v0, . + 4 + (0x42 << 2)
label_1ac004:
    if (ctx->pc == 0x1AC004u) {
        ctx->pc = 0x1AC004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC000u;
        // 0x1ac004: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC008u;
        goto label_1ac008;
    }
    ctx->pc = 0x1AC000u;
    {
        const bool branch_taken_0x1ac000 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AC004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC000u;
        // 0x1ac004: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac000) {
            ctx->pc = 0x1AC10Cu;
            goto label_1ac10c;
        }
    }
    ctx->pc = 0x1AC008u;
label_1ac008:
    // 0x1ac008: 0x26440104  addiu       $a0, $s2, 0x104
    ctx->pc = 0x1ac008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 260));
label_1ac00c:
    // 0x1ac00c: 0x2041025  or          $v0, $s0, $a0
    ctx->pc = 0x1ac00cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 4));
label_1ac010:
    // 0x1ac010: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x1ac010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_1ac014:
    // 0x1ac014: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_1ac018:
    if (ctx->pc == 0x1AC018u) {
        ctx->pc = 0x1AC018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC014u;
        // 0x1ac018: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC01Cu;
        goto label_1ac01c;
    }
    ctx->pc = 0x1AC014u;
    {
        const bool branch_taken_0x1ac014 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC014u;
        // 0x1ac018: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac014) {
            ctx->pc = 0x1AC080u;
            goto label_1ac080;
        }
    }
    ctx->pc = 0x1AC01Cu;
label_1ac01c:
    // 0x1ac01c: 0x260200e0  addiu       $v0, $s0, 0xE0
    ctx->pc = 0x1ac01cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
label_1ac020:
    // 0x1ac020: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1ac020u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_1ac024:
    // 0x1ac024: 0x68e30007  ldl         $v1, 0x7($a3)
    ctx->pc = 0x1ac024u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_1ac028:
    // 0x1ac028: 0x6ce30000  ldr         $v1, 0x0($a3)
    ctx->pc = 0x1ac028u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_1ac02c:
    // 0x1ac02c: 0x68e6000f  ldl         $a2, 0xF($a3)
    ctx->pc = 0x1ac02cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_1ac030:
    // 0x1ac030: 0x6ce60008  ldr         $a2, 0x8($a3)
    ctx->pc = 0x1ac030u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_1ac034:
    // 0x1ac034: 0x68e80017  ldl         $t0, 0x17($a3)
    ctx->pc = 0x1ac034u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_1ac038:
    // 0x1ac038: 0x6ce80010  ldr         $t0, 0x10($a3)
    ctx->pc = 0x1ac038u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_1ac03c:
    // 0x1ac03c: 0x68e9001f  ldl         $t1, 0x1F($a3)
    ctx->pc = 0x1ac03cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
label_1ac040:
    // 0x1ac040: 0x6ce90018  ldr         $t1, 0x18($a3)
    ctx->pc = 0x1ac040u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_1ac044:
    // 0x1ac044: 0xb0830007  sdl         $v1, 0x7($a0)
    ctx->pc = 0x1ac044u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1ac048:
    // 0x1ac048: 0xb4830000  sdr         $v1, 0x0($a0)
    ctx->pc = 0x1ac048u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1ac04c:
    // 0x1ac04c: 0xb086000f  sdl         $a2, 0xF($a0)
    ctx->pc = 0x1ac04cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1ac050:
    // 0x1ac050: 0xb4860008  sdr         $a2, 0x8($a0)
    ctx->pc = 0x1ac050u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1ac054:
    // 0x1ac054: 0xb0880017  sdl         $t0, 0x17($a0)
    ctx->pc = 0x1ac054u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1ac058:
    // 0x1ac058: 0xb4880010  sdr         $t0, 0x10($a0)
    ctx->pc = 0x1ac058u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1ac05c:
    // 0x1ac05c: 0xb089001f  sdl         $t1, 0x1F($a0)
    ctx->pc = 0x1ac05cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1ac060:
    // 0x1ac060: 0xb4890018  sdr         $t1, 0x18($a0)
    ctx->pc = 0x1ac060u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1ac064:
    // 0x1ac064: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x1ac064u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
label_1ac068:
    // 0x1ac068: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1ac068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_1ac06c:
    // 0x1ac06c: 0x0  nop
    ctx->pc = 0x1ac06cu;
    // NOP
label_1ac070:
    // 0x1ac070: 0x14e2ffec  bne         $a3, $v0, . + 4 + (-0x14 << 2)
label_1ac074:
    if (ctx->pc == 0x1AC074u) {
        ctx->pc = 0x1AC078u;
        goto label_1ac078;
    }
    ctx->pc = 0x1AC070u;
    {
        const bool branch_taken_0x1ac070 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ac070) {
            ctx->pc = 0x1AC024u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ac024;
        }
    }
    ctx->pc = 0x1AC078u;
label_1ac078:
    // 0x1ac078: 0x10000010  b           . + 4 + (0x10 << 2)
label_1ac07c:
    if (ctx->pc == 0x1AC07Cu) {
        ctx->pc = 0x1AC080u;
        goto label_1ac080;
    }
    ctx->pc = 0x1AC078u;
    {
        const bool branch_taken_0x1ac078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ac078) {
            ctx->pc = 0x1AC0BCu;
            goto label_1ac0bc;
        }
    }
    ctx->pc = 0x1AC080u;
label_1ac080:
    // 0x1ac080: 0x260200e0  addiu       $v0, $s0, 0xE0
    ctx->pc = 0x1ac080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
label_1ac084:
    // 0x1ac084: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1ac084u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_1ac088:
    // 0x1ac088: 0xdcea0000  ld          $t2, 0x0($a3)
    ctx->pc = 0x1ac088u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 7), 0)));
label_1ac08c:
    // 0x1ac08c: 0xdce30008  ld          $v1, 0x8($a3)
    ctx->pc = 0x1ac08cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 8)));
label_1ac090:
    // 0x1ac090: 0xdce60010  ld          $a2, 0x10($a3)
    ctx->pc = 0x1ac090u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 7), 16)));
label_1ac094:
    // 0x1ac094: 0xdce80018  ld          $t0, 0x18($a3)
    ctx->pc = 0x1ac094u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 7), 24)));
label_1ac098:
    // 0x1ac098: 0xfc8a0000  sd          $t2, 0x0($a0)
    ctx->pc = 0x1ac098u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 10));
label_1ac09c:
    // 0x1ac09c: 0xfc830008  sd          $v1, 0x8($a0)
    ctx->pc = 0x1ac09cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 3));
label_1ac0a0:
    // 0x1ac0a0: 0xfc860010  sd          $a2, 0x10($a0)
    ctx->pc = 0x1ac0a0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 6));
label_1ac0a4:
    // 0x1ac0a4: 0xfc880018  sd          $t0, 0x18($a0)
    ctx->pc = 0x1ac0a4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 8));
label_1ac0a8:
    // 0x1ac0a8: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x1ac0a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
label_1ac0ac:
    // 0x1ac0ac: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1ac0acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_1ac0b0:
    // 0x1ac0b0: 0x0  nop
    ctx->pc = 0x1ac0b0u;
    // NOP
label_1ac0b4:
    // 0x1ac0b4: 0x14e2fff4  bne         $a3, $v0, . + 4 + (-0xC << 2)
label_1ac0b8:
    if (ctx->pc == 0x1AC0B8u) {
        ctx->pc = 0x1AC0BCu;
        goto label_1ac0bc;
    }
    ctx->pc = 0x1AC0B4u;
    {
        const bool branch_taken_0x1ac0b4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ac0b4) {
            ctx->pc = 0x1AC088u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ac088;
        }
    }
    ctx->pc = 0x1AC0BCu;
label_1ac0bc:
    // 0x1ac0bc: 0x68e90007  ldl         $t1, 0x7($a3)
    ctx->pc = 0x1ac0bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
label_1ac0c0:
    // 0x1ac0c0: 0x6ce90000  ldr         $t1, 0x0($a3)
    ctx->pc = 0x1ac0c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_1ac0c4:
    // 0x1ac0c4: 0x68ea000f  ldl         $t2, 0xF($a3)
    ctx->pc = 0x1ac0c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
label_1ac0c8:
    // 0x1ac0c8: 0x6cea0008  ldr         $t2, 0x8($a3)
    ctx->pc = 0x1ac0c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
label_1ac0cc:
    // 0x1ac0cc: 0x68e60017  ldl         $a2, 0x17($a3)
    ctx->pc = 0x1ac0ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_1ac0d0:
    // 0x1ac0d0: 0x6ce60010  ldr         $a2, 0x10($a3)
    ctx->pc = 0x1ac0d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_1ac0d4:
    // 0x1ac0d4: 0x88e8001b  lwl         $t0, 0x1B($a3)
    ctx->pc = 0x1ac0d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 27); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 8) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 8, (int32_t)merged); }
label_1ac0d8:
    // 0x1ac0d8: 0x98e80018  lwr         $t0, 0x18($a3)
    ctx->pc = 0x1ac0d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 8) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 8) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 8, merged64); }
label_1ac0dc:
    // 0x1ac0dc: 0xb0890007  sdl         $t1, 0x7($a0)
    ctx->pc = 0x1ac0dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1ac0e0:
    // 0x1ac0e0: 0xb4890000  sdr         $t1, 0x0($a0)
    ctx->pc = 0x1ac0e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1ac0e4:
    // 0x1ac0e4: 0xb08a000f  sdl         $t2, 0xF($a0)
    ctx->pc = 0x1ac0e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1ac0e8:
    // 0x1ac0e8: 0xb48a0008  sdr         $t2, 0x8($a0)
    ctx->pc = 0x1ac0e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1ac0ec:
    // 0x1ac0ec: 0xb0860017  sdl         $a2, 0x17($a0)
    ctx->pc = 0x1ac0ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1ac0f0:
    // 0x1ac0f0: 0xb4860010  sdr         $a2, 0x10($a0)
    ctx->pc = 0x1ac0f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1ac0f4:
    // 0x1ac0f4: 0xa888001b  swl         $t0, 0x1B($a0)
    ctx->pc = 0x1ac0f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 27); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 8); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_1ac0f8:
    // 0x1ac0f8: 0x26a34780  addiu       $v1, $s5, 0x4780
    ctx->pc = 0x1ac0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 18304));
label_1ac0fc:
    // 0x1ac0fc: 0x240200fc  addiu       $v0, $zero, 0xFC
    ctx->pc = 0x1ac0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
label_1ac100:
    // 0x1ac100: 0xb8880018  swr         $t0, 0x18($a0)
    ctx->pc = 0x1ac100u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 8); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_1ac104:
    // 0x1ac104: 0x10000008  b           . + 4 + (0x8 << 2)
label_1ac108:
    if (ctx->pc == 0x1AC108u) {
        ctx->pc = 0x1AC108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC104u;
        // 0x1ac108: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC10Cu;
        goto label_1ac10c;
    }
    ctx->pc = 0x1AC104u;
    {
        const bool branch_taken_0x1ac104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC104u;
        // 0x1ac108: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac104) {
            ctx->pc = 0x1AC128u;
            goto label_1ac128;
        }
    }
    ctx->pc = 0x1AC10Cu;
label_1ac10c:
    // 0x1ac10c: 0x26440104  addiu       $a0, $s2, 0x104
    ctx->pc = 0x1ac10cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 260));
label_1ac110:
    // 0x1ac110: 0xc08e93e  jal         func_23A4F8
label_1ac114:
    if (ctx->pc == 0x1AC114u) {
        ctx->pc = 0x1AC114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC110u;
        // 0x1ac114: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC118u;
        goto label_1ac118;
    }
    ctx->pc = 0x1AC110u;
    SET_GPR_U32(ctx, 31, 0x1AC118u);
    ctx->pc = 0x1AC114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC110u;
    // 0x1ac114: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    { ctx->pc = 0x23a4f8; return; }
    ctx->pc = 0x1AC118u;
label_1ac118:
    // 0x1ac118: 0x10000002  b           . + 4 + (0x2 << 2)
label_1ac11c:
    if (ctx->pc == 0x1AC11Cu) {
        ctx->pc = 0x1AC11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC118u;
        // 0x1ac11c: 0xae510004  sw          $s1, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC120u;
        goto label_1ac120;
    }
    ctx->pc = 0x1AC118u;
    {
        const bool branch_taken_0x1ac118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC118u;
        // 0x1ac11c: 0xae510004  sw          $s1, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac118) {
            ctx->pc = 0x1AC124u;
            goto label_1ac124;
        }
    }
    ctx->pc = 0x1AC120u;
label_1ac120:
    // 0x1ac120: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x1ac120u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_1ac124:
    // 0x1ac124: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1ac124u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_1ac128:
    // 0x1ac128: 0x26b04780  addiu       $s0, $s5, 0x4780
    ctx->pc = 0x1ac128u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 18304));
label_1ac12c:
    // 0x1ac12c: 0x24a44980  addiu       $a0, $a1, 0x4980
    ctx->pc = 0x1ac12cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 18816));
label_1ac130:
    // 0x1ac130: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1ac130u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1ac134:
    // 0x1ac134: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1ac134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1ac138:
    // 0x1ac138: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ac138u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ac13c:
    // 0x1ac13c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1ac13cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ac140:
    // 0x1ac140: 0x24080200  addiu       $t0, $zero, 0x200
    ctx->pc = 0x1ac140u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_1ac144:
    // 0x1ac144: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1ac144u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ac148:
    // 0x1ac148: 0x240a0008  addiu       $t2, $zero, 0x8
    ctx->pc = 0x1ac148u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1ac14c:
    // 0x1ac14c: 0xc069e2a  jal         func_1A78A8
label_1ac150:
    if (ctx->pc == 0x1AC150u) {
        ctx->pc = 0x1AC150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC14Cu;
        // 0x1ac150: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC154u;
        goto label_1ac154;
    }
    ctx->pc = 0x1AC14Cu;
    SET_GPR_U32(ctx, 31, 0x1AC154u);
    ctx->pc = 0x1AC150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC14Cu;
    // 0x1ac150: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    { ctx->pc = 0x1a78a8; return; }
    ctx->pc = 0x1AC154u;
label_1ac154:
    // 0x1ac154: 0x4430004  bgezl       $v0, . + 4 + (0x4 << 2)
label_1ac158:
    if (ctx->pc == 0x1AC158u) {
        ctx->pc = 0x1AC158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC154u;
        // 0x1ac158: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC15Cu;
        goto label_1ac15c;
    }
    ctx->pc = 0x1AC154u;
    {
        const bool branch_taken_0x1ac154 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1ac154) {
            ctx->pc = 0x1AC158u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AC154u;
            // 0x1ac158: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AC168u;
            goto label_1ac168;
        }
    }
    ctx->pc = 0x1AC15Cu;
label_1ac15c:
    // 0x1ac15c: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x1ac15cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
label_1ac160:
    // 0x1ac160: 0x10000003  b           . + 4 + (0x3 << 2)
label_1ac164:
    if (ctx->pc == 0x1AC164u) {
        ctx->pc = 0x1AC164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC160u;
        // 0x1ac164: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC168u;
        goto label_1ac168;
    }
    ctx->pc = 0x1AC160u;
    {
        const bool branch_taken_0x1ac160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC160u;
        // 0x1ac164: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac160) {
            ctx->pc = 0x1AC170u;
            goto label_1ac170;
        }
    }
    ctx->pc = 0x1AC168u;
label_1ac168:
    // 0x1ac168: 0x8e824780  lw          $v0, 0x4780($s4)
    ctx->pc = 0x1ac168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18304)));
label_1ac16c:
    // 0x1ac16c: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x1ac16cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
label_1ac170:
    // 0x1ac170: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1ac170u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1ac174:
    // 0x1ac174: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x1ac174u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1ac178:
    // 0x1ac178: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x1ac178u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1ac17c:
    // 0x1ac17c: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1ac17cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1ac180:
    // 0x1ac180: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x1ac180u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1ac184:
    // 0x1ac184: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1ac184u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1ac188:
    // 0x1ac188: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1ac188u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1ac18c:
    // 0x1ac18c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1ac18cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ac190:
    // 0x1ac190: 0x3e00008  jr          $ra
label_1ac194:
    if (ctx->pc == 0x1AC194u) {
        ctx->pc = 0x1AC194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC190u;
        // 0x1ac194: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC198u;
        goto label_1ac198;
    }
    ctx->pc = 0x1AC190u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AC194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC190u;
        // 0x1ac194: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AC190u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AC198u;
label_1ac198:
    // 0x1ac198: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ac198u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1ac19c:
    // 0x1ac19c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1ac19cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_1ac1a0:
    // 0x1ac1a0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1ac1a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1ac1a4:
    // 0x1ac1a4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ac1a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ac1a8:
    // 0x1ac1a8: 0xc06aef0  jal         func_1ABBC0
label_1ac1ac:
    if (ctx->pc == 0x1AC1ACu) {
        ctx->pc = 0x1AC1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC1A8u;
        // 0x1ac1ac: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC1B0u;
        goto label_1ac1b0;
    }
    ctx->pc = 0x1AC1A8u;
    SET_GPR_U32(ctx, 31, 0x1AC1B0u);
    ctx->pc = 0x1AC1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC1A8u;
    // 0x1ac1ac: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ABBC0u;
    { ctx->pc = 0x1abbc0; return; }
    ctx->pc = 0x1AC1B0u;
label_1ac1b0:
    // 0x1ac1b0: 0x4400018  bltz        $v0, . + 4 + (0x18 << 2)
label_1ac1b4:
    if (ctx->pc == 0x1AC1B4u) {
        ctx->pc = 0x1AC1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC1B0u;
        // 0x1ac1b4: 0x3c02ffff  lui         $v0, 0xFFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC1B8u;
        goto label_1ac1b8;
    }
    ctx->pc = 0x1AC1B0u;
    {
        const bool branch_taken_0x1ac1b0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1AC1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC1B0u;
        // 0x1ac1b4: 0x3c02ffff  lui         $v0, 0xFFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac1b0) {
            ctx->pc = 0x1AC214u;
            goto label_1ac214;
        }
    }
    ctx->pc = 0x1AC1B8u;
label_1ac1b8:
    // 0x1ac1b8: 0xc06af30  jal         func_1ABCC0
label_1ac1bc:
    if (ctx->pc == 0x1AC1BCu) {
        ctx->pc = 0x1AC1C0u;
        goto label_1ac1c0;
    }
    ctx->pc = 0x1AC1B8u;
    SET_GPR_U32(ctx, 31, 0x1AC1C0u);
    ctx->pc = 0x1ABCC0u;
    { ctx->pc = 0x1abcc0; return; }
    ctx->pc = 0x1AC1C0u;
label_1ac1c0:
    // 0x1ac1c0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1ac1c4:
    if (ctx->pc == 0x1AC1C4u) {
        ctx->pc = 0x1AC1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC1C0u;
        // 0x1ac1c4: 0x3c100037  lui         $s0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC1C8u;
        goto label_1ac1c8;
    }
    ctx->pc = 0x1AC1C0u;
    {
        const bool branch_taken_0x1ac1c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC1C0u;
        // 0x1ac1c4: 0x3c100037  lui         $s0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac1c0) {
            ctx->pc = 0x1AC1D4u;
            goto label_1ac1d4;
        }
    }
    ctx->pc = 0x1AC1C8u;
label_1ac1c8:
    // 0x1ac1c8: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x1ac1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
label_1ac1cc:
    // 0x1ac1cc: 0x10000011  b           . + 4 + (0x11 << 2)
label_1ac1d0:
    if (ctx->pc == 0x1AC1D0u) {
        ctx->pc = 0x1AC1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC1CCu;
        // 0x1ac1d0: 0x3442fffc  ori         $v0, $v0, 0xFFFC (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC1D4u;
        goto label_1ac1d4;
    }
    ctx->pc = 0x1AC1CCu;
    {
        const bool branch_taken_0x1ac1cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC1CCu;
        // 0x1ac1d0: 0x3442fffc  ori         $v0, $v0, 0xFFFC (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac1cc) {
            ctx->pc = 0x1AC214u;
            goto label_1ac214;
        }
    }
    ctx->pc = 0x1AC1D4u;
label_1ac1d4:
    // 0x1ac1d4: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1ac1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_1ac1d8:
    // 0x1ac1d8: 0x26074780  addiu       $a3, $s0, 0x4780
    ctx->pc = 0x1ac1d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 18304));
label_1ac1dc:
    // 0x1ac1dc: 0xae114780  sw          $s1, 0x4780($s0)
    ctx->pc = 0x1ac1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 18304), GPR_U32(ctx, 17));
label_1ac1e0:
    // 0x1ac1e0: 0x24844980  addiu       $a0, $a0, 0x4980
    ctx->pc = 0x1ac1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18816));
label_1ac1e4:
    // 0x1ac1e4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1ac1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1ac1e8:
    // 0x1ac1e8: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1ac1e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1ac1ec:
    // 0x1ac1ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ac1ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ac1f0:
    // 0x1ac1f0: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1ac1f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1ac1f4:
    // 0x1ac1f4: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x1ac1f4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1ac1f8:
    // 0x1ac1f8: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1ac1f8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1ac1fc:
    // 0x1ac1fc: 0xc069e2a  jal         func_1A78A8
label_1ac200:
    if (ctx->pc == 0x1AC200u) {
        ctx->pc = 0x1AC200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC1FCu;
        // 0x1ac200: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC204u;
        goto label_1ac204;
    }
    ctx->pc = 0x1AC1FCu;
    SET_GPR_U32(ctx, 31, 0x1AC204u);
    ctx->pc = 0x1AC200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC1FCu;
    // 0x1ac200: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    { ctx->pc = 0x1a78a8; return; }
    ctx->pc = 0x1AC204u;
label_1ac204:
    // 0x1ac204: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
label_1ac208:
    if (ctx->pc == 0x1AC208u) {
        ctx->pc = 0x1AC208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC204u;
        // 0x1ac208: 0x8e024780  lw          $v0, 0x4780($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18304)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC20Cu;
        goto label_1ac20c;
    }
    ctx->pc = 0x1AC204u;
    {
        const bool branch_taken_0x1ac204 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1ac204) {
            ctx->pc = 0x1AC208u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AC204u;
            // 0x1ac208: 0x8e024780  lw          $v0, 0x4780($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18304)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AC214u;
            goto label_1ac214;
        }
    }
    ctx->pc = 0x1AC20Cu;
label_1ac20c:
    // 0x1ac20c: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x1ac20cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
label_1ac210:
    // 0x1ac210: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1ac210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1ac214:
    // 0x1ac214: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1ac214u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1ac218:
    // 0x1ac218: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1ac218u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1ac21c:
    // 0x1ac21c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1ac21cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ac220:
    // 0x1ac220: 0x3e00008  jr          $ra
label_1ac224:
    if (ctx->pc == 0x1AC224u) {
        ctx->pc = 0x1AC224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC220u;
        // 0x1ac224: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC228u;
        goto label_1ac228;
    }
    ctx->pc = 0x1AC220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AC224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC220u;
        // 0x1ac224: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AC220u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AC228u;
label_1ac228:
    // 0x1ac228: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ac228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1ac22c:
    // 0x1ac22c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1ac22cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1ac230:
    // 0x1ac230: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ac230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1ac234:
    // 0x1ac234: 0xc06aef0  jal         func_1ABBC0
label_1ac238:
    if (ctx->pc == 0x1AC238u) {
        ctx->pc = 0x1AC238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC234u;
        // 0x1ac238: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC23Cu;
        goto label_1ac23c;
    }
    ctx->pc = 0x1AC234u;
    SET_GPR_U32(ctx, 31, 0x1AC23Cu);
    ctx->pc = 0x1AC238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC234u;
    // 0x1ac238: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ABBC0u;
    { ctx->pc = 0x1abbc0; return; }
    ctx->pc = 0x1AC23Cu;
label_1ac23c:
    // 0x1ac23c: 0x440001e  bltz        $v0, . + 4 + (0x1E << 2)
label_1ac240:
    if (ctx->pc == 0x1AC240u) {
        ctx->pc = 0x1AC240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC23Cu;
        // 0x1ac240: 0x3c02ffff  lui         $v0, 0xFFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC244u;
        goto label_1ac244;
    }
    ctx->pc = 0x1AC23Cu;
    {
        const bool branch_taken_0x1ac23c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1AC240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC23Cu;
        // 0x1ac240: 0x3c02ffff  lui         $v0, 0xFFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac23c) {
            ctx->pc = 0x1AC2B8u;
            goto label_1ac2b8;
        }
    }
    ctx->pc = 0x1AC244u;
label_1ac244:
    // 0x1ac244: 0xc06af30  jal         func_1ABCC0
label_1ac248:
    if (ctx->pc == 0x1AC248u) {
        ctx->pc = 0x1AC24Cu;
        goto label_1ac24c;
    }
    ctx->pc = 0x1AC244u;
    SET_GPR_U32(ctx, 31, 0x1AC24Cu);
    ctx->pc = 0x1ABCC0u;
    { ctx->pc = 0x1abcc0; return; }
    ctx->pc = 0x1AC24Cu;
label_1ac24c:
    // 0x1ac24c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_1ac250:
    if (ctx->pc == 0x1AC250u) {
        ctx->pc = 0x1AC250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC24Cu;
        // 0x1ac250: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC254u;
        goto label_1ac254;
    }
    ctx->pc = 0x1AC24Cu;
    {
        const bool branch_taken_0x1ac24c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ac24c) {
            ctx->pc = 0x1AC250u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AC24Cu;
            // 0x1ac250: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AC260u;
            goto label_1ac260;
        }
    }
    ctx->pc = 0x1AC254u;
label_1ac254:
    // 0x1ac254: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x1ac254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
label_1ac258:
    // 0x1ac258: 0x10000017  b           . + 4 + (0x17 << 2)
label_1ac25c:
    if (ctx->pc == 0x1AC25Cu) {
        ctx->pc = 0x1AC25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC258u;
        // 0x1ac25c: 0x3442fffc  ori         $v0, $v0, 0xFFFC (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC260u;
        goto label_1ac260;
    }
    ctx->pc = 0x1AC258u;
    {
        const bool branch_taken_0x1ac258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC258u;
        // 0x1ac25c: 0x3442fffc  ori         $v0, $v0, 0xFFFC (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac258) {
            ctx->pc = 0x1AC2B8u;
            goto label_1ac2b8;
        }
    }
    ctx->pc = 0x1AC260u;
label_1ac260:
    // 0x1ac260: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ac260u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ac264:
    // 0x1ac264: 0x24504788  addiu       $s0, $v0, 0x4788
    ctx->pc = 0x1ac264u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 18312));
label_1ac268:
    // 0x1ac268: 0x240600fc  addiu       $a2, $zero, 0xFC
    ctx->pc = 0x1ac268u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
label_1ac26c:
    // 0x1ac26c: 0xc08f4fe  jal         func_23D3F8
label_1ac270:
    if (ctx->pc == 0x1AC270u) {
        ctx->pc = 0x1AC270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC26Cu;
        // 0x1ac270: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC274u;
        goto label_1ac274;
    }
    ctx->pc = 0x1AC26Cu;
    SET_GPR_U32(ctx, 31, 0x1AC274u);
    ctx->pc = 0x1AC270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC26Cu;
    // 0x1ac270: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D3F8u;
    { ctx->pc = 0x23d3f8; return; }
    ctx->pc = 0x1AC274u;
label_1ac274:
    // 0x1ac274: 0x2603fff8  addiu       $v1, $s0, -0x8
    ctx->pc = 0x1ac274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
label_1ac278:
    // 0x1ac278: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1ac278u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_1ac27c:
    // 0x1ac27c: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x1ac27cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1ac280:
    // 0x1ac280: 0xa0600103  sb          $zero, 0x103($v1)
    ctx->pc = 0x1ac280u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 259), (uint8_t)GPR_U32(ctx, 0));
label_1ac284:
    // 0x1ac284: 0x24844980  addiu       $a0, $a0, 0x4980
    ctx->pc = 0x1ac284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18816));
label_1ac288:
    // 0x1ac288: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1ac288u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1ac28c:
    // 0x1ac28c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1ac28cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1ac290:
    // 0x1ac290: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ac290u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ac294:
    // 0x1ac294: 0x24080200  addiu       $t0, $zero, 0x200
    ctx->pc = 0x1ac294u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_1ac298:
    // 0x1ac298: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x1ac298u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1ac29c:
    // 0x1ac29c: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1ac29cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1ac2a0:
    // 0x1ac2a0: 0xc069e2a  jal         func_1A78A8
label_1ac2a4:
    if (ctx->pc == 0x1AC2A4u) {
        ctx->pc = 0x1AC2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC2A0u;
        // 0x1ac2a4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC2A8u;
        goto label_1ac2a8;
    }
    ctx->pc = 0x1AC2A0u;
    SET_GPR_U32(ctx, 31, 0x1AC2A8u);
    ctx->pc = 0x1AC2A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC2A0u;
    // 0x1ac2a4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    { ctx->pc = 0x1a78a8; return; }
    ctx->pc = 0x1AC2A8u;
label_1ac2a8:
    // 0x1ac2a8: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
label_1ac2ac:
    if (ctx->pc == 0x1AC2ACu) {
        ctx->pc = 0x1AC2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC2A8u;
        // 0x1ac2ac: 0x8e02fff8  lw          $v0, -0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC2B0u;
        goto label_1ac2b0;
    }
    ctx->pc = 0x1AC2A8u;
    {
        const bool branch_taken_0x1ac2a8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1ac2a8) {
            ctx->pc = 0x1AC2ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AC2A8u;
            // 0x1ac2ac: 0x8e02fff8  lw          $v0, -0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967288)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AC2B8u;
            goto label_1ac2b8;
        }
    }
    ctx->pc = 0x1AC2B0u;
label_1ac2b0:
    // 0x1ac2b0: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x1ac2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
label_1ac2b4:
    // 0x1ac2b4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1ac2b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1ac2b8:
    // 0x1ac2b8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ac2b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1ac2bc:
    // 0x1ac2bc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1ac2bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ac2c0:
    // 0x1ac2c0: 0x3e00008  jr          $ra
label_1ac2c4:
    if (ctx->pc == 0x1AC2C4u) {
        ctx->pc = 0x1AC2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC2C0u;
        // 0x1ac2c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC2C8u;
        goto label_1ac2c8;
    }
    ctx->pc = 0x1AC2C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AC2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC2C0u;
        // 0x1ac2c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AC2C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AC2C8u;
label_1ac2c8:
    // 0x1ac2c8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ac2c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1ac2cc:
    // 0x1ac2cc: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1ac2ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_1ac2d0:
    // 0x1ac2d0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1ac2d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1ac2d4:
    // 0x1ac2d4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ac2d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ac2d8:
    // 0x1ac2d8: 0xc06aef0  jal         func_1ABBC0
label_1ac2dc:
    if (ctx->pc == 0x1AC2DCu) {
        ctx->pc = 0x1AC2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC2D8u;
        // 0x1ac2dc: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC2E0u;
        goto label_1ac2e0;
    }
    ctx->pc = 0x1AC2D8u;
    SET_GPR_U32(ctx, 31, 0x1AC2E0u);
    ctx->pc = 0x1AC2DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC2D8u;
    // 0x1ac2dc: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ABBC0u;
    { ctx->pc = 0x1abbc0; return; }
    ctx->pc = 0x1AC2E0u;
label_1ac2e0:
    // 0x1ac2e0: 0x4400018  bltz        $v0, . + 4 + (0x18 << 2)
label_1ac2e4:
    if (ctx->pc == 0x1AC2E4u) {
        ctx->pc = 0x1AC2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC2E0u;
        // 0x1ac2e4: 0x3c02ffff  lui         $v0, 0xFFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC2E8u;
        goto label_1ac2e8;
    }
    ctx->pc = 0x1AC2E0u;
    {
        const bool branch_taken_0x1ac2e0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1AC2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC2E0u;
        // 0x1ac2e4: 0x3c02ffff  lui         $v0, 0xFFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac2e0) {
            ctx->pc = 0x1AC344u;
            goto label_1ac344;
        }
    }
    ctx->pc = 0x1AC2E8u;
label_1ac2e8:
    // 0x1ac2e8: 0xc06af30  jal         func_1ABCC0
label_1ac2ec:
    if (ctx->pc == 0x1AC2ECu) {
        ctx->pc = 0x1AC2F0u;
        goto label_1ac2f0;
    }
    ctx->pc = 0x1AC2E8u;
    SET_GPR_U32(ctx, 31, 0x1AC2F0u);
    ctx->pc = 0x1ABCC0u;
    { ctx->pc = 0x1abcc0; return; }
    ctx->pc = 0x1AC2F0u;
label_1ac2f0:
    // 0x1ac2f0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1ac2f4:
    if (ctx->pc == 0x1AC2F4u) {
        ctx->pc = 0x1AC2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC2F0u;
        // 0x1ac2f4: 0x3c100037  lui         $s0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC2F8u;
        goto label_1ac2f8;
    }
    ctx->pc = 0x1AC2F0u;
    {
        const bool branch_taken_0x1ac2f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC2F0u;
        // 0x1ac2f4: 0x3c100037  lui         $s0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac2f0) {
            ctx->pc = 0x1AC304u;
            goto label_1ac304;
        }
    }
    ctx->pc = 0x1AC2F8u;
label_1ac2f8:
    // 0x1ac2f8: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x1ac2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
label_1ac2fc:
    // 0x1ac2fc: 0x10000011  b           . + 4 + (0x11 << 2)
label_1ac300:
    if (ctx->pc == 0x1AC300u) {
        ctx->pc = 0x1AC300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC2FCu;
        // 0x1ac300: 0x3442fffc  ori         $v0, $v0, 0xFFFC (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC304u;
        goto label_1ac304;
    }
    ctx->pc = 0x1AC2FCu;
    {
        const bool branch_taken_0x1ac2fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC2FCu;
        // 0x1ac300: 0x3442fffc  ori         $v0, $v0, 0xFFFC (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac2fc) {
            ctx->pc = 0x1AC344u;
            goto label_1ac344;
        }
    }
    ctx->pc = 0x1AC304u;
label_1ac304:
    // 0x1ac304: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1ac304u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_1ac308:
    // 0x1ac308: 0x26074780  addiu       $a3, $s0, 0x4780
    ctx->pc = 0x1ac308u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 18304));
label_1ac30c:
    // 0x1ac30c: 0xae114780  sw          $s1, 0x4780($s0)
    ctx->pc = 0x1ac30cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 18304), GPR_U32(ctx, 17));
label_1ac310:
    // 0x1ac310: 0x24844980  addiu       $a0, $a0, 0x4980
    ctx->pc = 0x1ac310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18816));
label_1ac314:
    // 0x1ac314: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1ac314u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1ac318:
    // 0x1ac318: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1ac318u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1ac31c:
    // 0x1ac31c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ac31cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ac320:
    // 0x1ac320: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1ac320u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1ac324:
    // 0x1ac324: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x1ac324u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1ac328:
    // 0x1ac328: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1ac328u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1ac32c:
    // 0x1ac32c: 0xc069e2a  jal         func_1A78A8
label_1ac330:
    if (ctx->pc == 0x1AC330u) {
        ctx->pc = 0x1AC330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC32Cu;
        // 0x1ac330: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC334u;
        goto label_1ac334;
    }
    ctx->pc = 0x1AC32Cu;
    SET_GPR_U32(ctx, 31, 0x1AC334u);
    ctx->pc = 0x1AC330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC32Cu;
    // 0x1ac330: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    { ctx->pc = 0x1a78a8; return; }
    ctx->pc = 0x1AC334u;
label_1ac334:
    // 0x1ac334: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
label_1ac338:
    if (ctx->pc == 0x1AC338u) {
        ctx->pc = 0x1AC338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC334u;
        // 0x1ac338: 0x8e024780  lw          $v0, 0x4780($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18304)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC33Cu;
        goto label_1ac33c;
    }
    ctx->pc = 0x1AC334u;
    {
        const bool branch_taken_0x1ac334 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1ac334) {
            ctx->pc = 0x1AC338u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AC334u;
            // 0x1ac338: 0x8e024780  lw          $v0, 0x4780($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18304)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AC344u;
            goto label_1ac344;
        }
    }
    ctx->pc = 0x1AC33Cu;
label_1ac33c:
    // 0x1ac33c: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x1ac33cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
label_1ac340:
    // 0x1ac340: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1ac340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1ac344:
    // 0x1ac344: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1ac344u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1ac348:
    // 0x1ac348: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1ac348u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1ac34c:
    // 0x1ac34c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1ac34cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ac350:
    // 0x1ac350: 0x3e00008  jr          $ra
label_1ac354:
    if (ctx->pc == 0x1AC354u) {
        ctx->pc = 0x1AC354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC350u;
        // 0x1ac354: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC358u;
        goto label_1ac358;
    }
    ctx->pc = 0x1AC350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AC354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC350u;
        // 0x1ac354: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AC350u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AC358u;
label_1ac358:
    // 0x1ac358: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ac358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1ac35c:
    // 0x1ac35c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ac35cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1ac360:
    // 0x1ac360: 0xc06af62  jal         func_1ABD88
label_1ac364:
    if (ctx->pc == 0x1AC364u) {
        ctx->pc = 0x1AC364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC360u;
        // 0x1ac364: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC368u;
        goto label_1ac368;
    }
    ctx->pc = 0x1AC360u;
    SET_GPR_U32(ctx, 31, 0x1AC368u);
    ctx->pc = 0x1AC364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC360u;
    // 0x1ac364: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ABD88u;
    { ctx->pc = 0x1abd88; return; }
    ctx->pc = 0x1AC368u;
label_1ac368:
    // 0x1ac368: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ac368u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ac36c:
    // 0x1ac36c: 0x3e00008  jr          $ra
label_1ac370:
    if (ctx->pc == 0x1AC370u) {
        ctx->pc = 0x1AC370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC36Cu;
        // 0x1ac370: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC374u;
        goto label_1ac374;
    }
    ctx->pc = 0x1AC36Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AC370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC36Cu;
        // 0x1ac370: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AC36Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AC374u;
label_1ac374:
    // 0x1ac374: 0x0  nop
    ctx->pc = 0x1ac374u;
    // NOP
label_1ac378:
    // 0x1ac378: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ac378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1ac37c:
    // 0x1ac37c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ac37cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1ac380:
    // 0x1ac380: 0xc06af62  jal         func_1ABD88
label_1ac384:
    if (ctx->pc == 0x1AC384u) {
        ctx->pc = 0x1AC388u;
        goto label_1ac388;
    }
    ctx->pc = 0x1AC380u;
    SET_GPR_U32(ctx, 31, 0x1AC388u);
    ctx->pc = 0x1ABD88u;
    { ctx->pc = 0x1abd88; return; }
    ctx->pc = 0x1AC388u;
label_1ac388:
    // 0x1ac388: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ac388u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ac38c:
    // 0x1ac38c: 0x3e00008  jr          $ra
label_1ac390:
    if (ctx->pc == 0x1AC390u) {
        ctx->pc = 0x1AC390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC38Cu;
        // 0x1ac390: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC394u;
        goto label_1ac394;
    }
    ctx->pc = 0x1AC38Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AC390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC38Cu;
        // 0x1ac390: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AC38Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AC394u;
label_1ac394:
    // 0x1ac394: 0x0  nop
    ctx->pc = 0x1ac394u;
    // NOP
label_1ac398:
    // 0x1ac398: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1ac398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_1ac39c:
    // 0x1ac39c: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1ac39cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_1ac3a0:
    // 0x1ac3a0: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x1ac3a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_1ac3a4:
    // 0x1ac3a4: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1ac3a4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1ac3a8:
    // 0x1ac3a8: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1ac3a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_1ac3ac:
    // 0x1ac3ac: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x1ac3acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1ac3b0:
    // 0x1ac3b0: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1ac3b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_1ac3b4:
    // 0x1ac3b4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1ac3b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1ac3b8:
    // 0x1ac3b8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1ac3b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1ac3bc:
    // 0x1ac3bc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ac3bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ac3c0:
    // 0x1ac3c0: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1ac3c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_1ac3c4:
    // 0x1ac3c4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1ac3c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1ac3c8:
    // 0x1ac3c8: 0xc06aef0  jal         func_1ABBC0
label_1ac3cc:
    if (ctx->pc == 0x1AC3CCu) {
        ctx->pc = 0x1AC3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC3C8u;
        // 0x1ac3cc: 0xffb50060  sd          $s5, 0x60($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC3D0u;
        goto label_1ac3d0;
    }
    ctx->pc = 0x1AC3C8u;
    SET_GPR_U32(ctx, 31, 0x1AC3D0u);
    ctx->pc = 0x1AC3CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC3C8u;
    // 0x1ac3cc: 0xffb50060  sd          $s5, 0x60($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ABBC0u;
    { ctx->pc = 0x1abbc0; return; }
    ctx->pc = 0x1AC3D0u;
label_1ac3d0:
    // 0x1ac3d0: 0x4400071  bltz        $v0, . + 4 + (0x71 << 2)
label_1ac3d4:
    if (ctx->pc == 0x1AC3D4u) {
        ctx->pc = 0x1AC3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC3D0u;
        // 0x1ac3d4: 0x3c02ffff  lui         $v0, 0xFFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC3D8u;
        goto label_1ac3d8;
    }
    ctx->pc = 0x1AC3D0u;
    {
        const bool branch_taken_0x1ac3d0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1AC3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC3D0u;
        // 0x1ac3d4: 0x3c02ffff  lui         $v0, 0xFFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac3d0) {
            ctx->pc = 0x1AC598u;
            goto label_1ac598;
        }
    }
    ctx->pc = 0x1AC3D8u;
label_1ac3d8:
    // 0x1ac3d8: 0xc06af30  jal         func_1ABCC0
label_1ac3dc:
    if (ctx->pc == 0x1AC3DCu) {
        ctx->pc = 0x1AC3E0u;
        goto label_1ac3e0;
    }
    ctx->pc = 0x1AC3D8u;
    SET_GPR_U32(ctx, 31, 0x1AC3E0u);
    ctx->pc = 0x1ABCC0u;
    { ctx->pc = 0x1abcc0; return; }
    ctx->pc = 0x1AC3E0u;
label_1ac3e0:
    // 0x1ac3e0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_1ac3e4:
    if (ctx->pc == 0x1AC3E4u) {
        ctx->pc = 0x1AC3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC3E0u;
        // 0x1ac3e4: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC3E8u;
        goto label_1ac3e8;
    }
    ctx->pc = 0x1AC3E0u;
    {
        const bool branch_taken_0x1ac3e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ac3e0) {
            ctx->pc = 0x1AC3E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AC3E0u;
            // 0x1ac3e4: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AC3F4u;
            goto label_1ac3f4;
        }
    }
    ctx->pc = 0x1AC3E8u;
label_1ac3e8:
    // 0x1ac3e8: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x1ac3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
label_1ac3ec:
    // 0x1ac3ec: 0x1000006a  b           . + 4 + (0x6A << 2)
label_1ac3f0:
    if (ctx->pc == 0x1AC3F0u) {
        ctx->pc = 0x1AC3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC3ECu;
        // 0x1ac3f0: 0x3442fffc  ori         $v0, $v0, 0xFFFC (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC3F4u;
        goto label_1ac3f4;
    }
    ctx->pc = 0x1AC3ECu;
    {
        const bool branch_taken_0x1ac3ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC3ECu;
        // 0x1ac3f0: 0x3442fffc  ori         $v0, $v0, 0xFFFC (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac3ec) {
            ctx->pc = 0x1AC598u;
            goto label_1ac598;
        }
    }
    ctx->pc = 0x1AC3F4u;
label_1ac3f4:
    // 0x1ac3f4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1ac3f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ac3f8:
    // 0x1ac3f8: 0x24514788  addiu       $s1, $v0, 0x4788
    ctx->pc = 0x1ac3f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 18312));
label_1ac3fc:
    // 0x1ac3fc: 0x240600fc  addiu       $a2, $zero, 0xFC
    ctx->pc = 0x1ac3fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
label_1ac400:
    // 0x1ac400: 0xc08f4fe  jal         func_23D3F8
label_1ac404:
    if (ctx->pc == 0x1AC404u) {
        ctx->pc = 0x1AC404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC400u;
        // 0x1ac404: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC408u;
        goto label_1ac408;
    }
    ctx->pc = 0x1AC400u;
    SET_GPR_U32(ctx, 31, 0x1AC408u);
    ctx->pc = 0x1AC404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC400u;
    // 0x1ac404: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D3F8u;
    { ctx->pc = 0x23d3f8; return; }
    ctx->pc = 0x1AC408u;
label_1ac408:
    // 0x1ac408: 0x2622fff8  addiu       $v0, $s1, -0x8
    ctx->pc = 0x1ac408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967288));
label_1ac40c:
    // 0x1ac40c: 0x1200004c  beqz        $s0, . + 4 + (0x4C << 2)
label_1ac410:
    if (ctx->pc == 0x1AC410u) {
        ctx->pc = 0x1AC410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC40Cu;
        // 0x1ac410: 0xa0400103  sb          $zero, 0x103($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 259), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC414u;
        goto label_1ac414;
    }
    ctx->pc = 0x1AC40Cu;
    {
        const bool branch_taken_0x1ac40c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC40Cu;
        // 0x1ac410: 0xa0400103  sb          $zero, 0x103($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 259), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac40c) {
            ctx->pc = 0x1AC540u;
            goto label_1ac540;
        }
    }
    ctx->pc = 0x1AC414u;
label_1ac414:
    // 0x1ac414: 0x2a4200fd  slti        $v0, $s2, 0xFD
    ctx->pc = 0x1ac414u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)253) ? 1 : 0);
label_1ac418:
    // 0x1ac418: 0x14400043  bnez        $v0, . + 4 + (0x43 << 2)
label_1ac41c:
    if (ctx->pc == 0x1AC41Cu) {
        ctx->pc = 0x1AC41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC418u;
        // 0x1ac41c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC420u;
        goto label_1ac420;
    }
    ctx->pc = 0x1AC418u;
    {
        const bool branch_taken_0x1ac418 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AC41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC418u;
        // 0x1ac41c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac418) {
            ctx->pc = 0x1AC528u;
            goto label_1ac528;
        }
    }
    ctx->pc = 0x1AC420u;
label_1ac420:
    // 0x1ac420: 0x262400fc  addiu       $a0, $s1, 0xFC
    ctx->pc = 0x1ac420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 252));
label_1ac424:
    // 0x1ac424: 0x2041025  or          $v0, $s0, $a0
    ctx->pc = 0x1ac424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 4));
label_1ac428:
    // 0x1ac428: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x1ac428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_1ac42c:
    // 0x1ac42c: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_1ac430:
    if (ctx->pc == 0x1AC430u) {
        ctx->pc = 0x1AC430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC42Cu;
        // 0x1ac430: 0x200182d  daddu       $v1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC434u;
        goto label_1ac434;
    }
    ctx->pc = 0x1AC42Cu;
    {
        const bool branch_taken_0x1ac42c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC42Cu;
        // 0x1ac430: 0x200182d  daddu       $v1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac42c) {
            ctx->pc = 0x1AC49Cu;
            goto label_1ac49c;
        }
    }
    ctx->pc = 0x1AC434u;
label_1ac434:
    // 0x1ac434: 0x260200e0  addiu       $v0, $s0, 0xE0
    ctx->pc = 0x1ac434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
label_1ac438:
    // 0x1ac438: 0x3c150037  lui         $s5, 0x37
    ctx->pc = 0x1ac438u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)55 << 16));
label_1ac43c:
    // 0x1ac43c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1ac43cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_1ac440:
    // 0x1ac440: 0x68660007  ldl         $a2, 0x7($v1)
    ctx->pc = 0x1ac440u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_1ac444:
    // 0x1ac444: 0x6c660000  ldr         $a2, 0x0($v1)
    ctx->pc = 0x1ac444u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_1ac448:
    // 0x1ac448: 0x6867000f  ldl         $a3, 0xF($v1)
    ctx->pc = 0x1ac448u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_1ac44c:
    // 0x1ac44c: 0x6c670008  ldr         $a3, 0x8($v1)
    ctx->pc = 0x1ac44cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_1ac450:
    // 0x1ac450: 0x68680017  ldl         $t0, 0x17($v1)
    ctx->pc = 0x1ac450u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_1ac454:
    // 0x1ac454: 0x6c680010  ldr         $t0, 0x10($v1)
    ctx->pc = 0x1ac454u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_1ac458:
    // 0x1ac458: 0x6869001f  ldl         $t1, 0x1F($v1)
    ctx->pc = 0x1ac458u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
label_1ac45c:
    // 0x1ac45c: 0x6c690018  ldr         $t1, 0x18($v1)
    ctx->pc = 0x1ac45cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_1ac460:
    // 0x1ac460: 0xb0860007  sdl         $a2, 0x7($a0)
    ctx->pc = 0x1ac460u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1ac464:
    // 0x1ac464: 0xb4860000  sdr         $a2, 0x0($a0)
    ctx->pc = 0x1ac464u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1ac468:
    // 0x1ac468: 0xb087000f  sdl         $a3, 0xF($a0)
    ctx->pc = 0x1ac468u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1ac46c:
    // 0x1ac46c: 0xb4870008  sdr         $a3, 0x8($a0)
    ctx->pc = 0x1ac46cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1ac470:
    // 0x1ac470: 0xb0880017  sdl         $t0, 0x17($a0)
    ctx->pc = 0x1ac470u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1ac474:
    // 0x1ac474: 0xb4880010  sdr         $t0, 0x10($a0)
    ctx->pc = 0x1ac474u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1ac478:
    // 0x1ac478: 0xb089001f  sdl         $t1, 0x1F($a0)
    ctx->pc = 0x1ac478u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1ac47c:
    // 0x1ac47c: 0xb4890018  sdr         $t1, 0x18($a0)
    ctx->pc = 0x1ac47cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1ac480:
    // 0x1ac480: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x1ac480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_1ac484:
    // 0x1ac484: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1ac484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_1ac488:
    // 0x1ac488: 0x0  nop
    ctx->pc = 0x1ac488u;
    // NOP
label_1ac48c:
    // 0x1ac48c: 0x1462ffec  bne         $v1, $v0, . + 4 + (-0x14 << 2)
label_1ac490:
    if (ctx->pc == 0x1AC490u) {
        ctx->pc = 0x1AC494u;
        goto label_1ac494;
    }
    ctx->pc = 0x1AC48Cu;
    {
        const bool branch_taken_0x1ac48c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ac48c) {
            ctx->pc = 0x1AC440u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ac440;
        }
    }
    ctx->pc = 0x1AC494u;
label_1ac494:
    // 0x1ac494: 0x10000011  b           . + 4 + (0x11 << 2)
label_1ac498:
    if (ctx->pc == 0x1AC498u) {
        ctx->pc = 0x1AC49Cu;
        goto label_1ac49c;
    }
    ctx->pc = 0x1AC494u;
    {
        const bool branch_taken_0x1ac494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ac494) {
            ctx->pc = 0x1AC4DCu;
            goto label_1ac4dc;
        }
    }
    ctx->pc = 0x1AC49Cu;
label_1ac49c:
    // 0x1ac49c: 0x260200e0  addiu       $v0, $s0, 0xE0
    ctx->pc = 0x1ac49cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
label_1ac4a0:
    // 0x1ac4a0: 0x3c150037  lui         $s5, 0x37
    ctx->pc = 0x1ac4a0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)55 << 16));
label_1ac4a4:
    // 0x1ac4a4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1ac4a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_1ac4a8:
    // 0x1ac4a8: 0xdc660000  ld          $a2, 0x0($v1)
    ctx->pc = 0x1ac4a8u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 0)));
label_1ac4ac:
    // 0x1ac4ac: 0xdc670008  ld          $a3, 0x8($v1)
    ctx->pc = 0x1ac4acu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 8)));
label_1ac4b0:
    // 0x1ac4b0: 0xdc680010  ld          $t0, 0x10($v1)
    ctx->pc = 0x1ac4b0u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 16)));
label_1ac4b4:
    // 0x1ac4b4: 0xdc690018  ld          $t1, 0x18($v1)
    ctx->pc = 0x1ac4b4u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 3), 24)));
label_1ac4b8:
    // 0x1ac4b8: 0xfc860000  sd          $a2, 0x0($a0)
    ctx->pc = 0x1ac4b8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 6));
label_1ac4bc:
    // 0x1ac4bc: 0xfc870008  sd          $a3, 0x8($a0)
    ctx->pc = 0x1ac4bcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 7));
label_1ac4c0:
    // 0x1ac4c0: 0xfc880010  sd          $t0, 0x10($a0)
    ctx->pc = 0x1ac4c0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 8));
label_1ac4c4:
    // 0x1ac4c4: 0xfc890018  sd          $t1, 0x18($a0)
    ctx->pc = 0x1ac4c4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 9));
label_1ac4c8:
    // 0x1ac4c8: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x1ac4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_1ac4cc:
    // 0x1ac4cc: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1ac4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_1ac4d0:
    // 0x1ac4d0: 0x0  nop
    ctx->pc = 0x1ac4d0u;
    // NOP
label_1ac4d4:
    // 0x1ac4d4: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
label_1ac4d8:
    if (ctx->pc == 0x1AC4D8u) {
        ctx->pc = 0x1AC4DCu;
        goto label_1ac4dc;
    }
    ctx->pc = 0x1AC4D4u;
    {
        const bool branch_taken_0x1ac4d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ac4d4) {
            ctx->pc = 0x1AC4A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ac4a8;
        }
    }
    ctx->pc = 0x1AC4DCu;
label_1ac4dc:
    // 0x1ac4dc: 0x68660007  ldl         $a2, 0x7($v1)
    ctx->pc = 0x1ac4dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_1ac4e0:
    // 0x1ac4e0: 0x6c660000  ldr         $a2, 0x0($v1)
    ctx->pc = 0x1ac4e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_1ac4e4:
    // 0x1ac4e4: 0x6867000f  ldl         $a3, 0xF($v1)
    ctx->pc = 0x1ac4e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_1ac4e8:
    // 0x1ac4e8: 0x6c670008  ldr         $a3, 0x8($v1)
    ctx->pc = 0x1ac4e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_1ac4ec:
    // 0x1ac4ec: 0x68680017  ldl         $t0, 0x17($v1)
    ctx->pc = 0x1ac4ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_1ac4f0:
    // 0x1ac4f0: 0x6c680010  ldr         $t0, 0x10($v1)
    ctx->pc = 0x1ac4f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_1ac4f4:
    // 0x1ac4f4: 0x8869001b  lwl         $t1, 0x1B($v1)
    ctx->pc = 0x1ac4f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 27); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 9) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 9, (int32_t)merged); }
label_1ac4f8:
    // 0x1ac4f8: 0x98690018  lwr         $t1, 0x18($v1)
    ctx->pc = 0x1ac4f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 9) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 9) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 9, merged64); }
label_1ac4fc:
    // 0x1ac4fc: 0xb0860007  sdl         $a2, 0x7($a0)
    ctx->pc = 0x1ac4fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1ac500:
    // 0x1ac500: 0xb4860000  sdr         $a2, 0x0($a0)
    ctx->pc = 0x1ac500u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1ac504:
    // 0x1ac504: 0xb087000f  sdl         $a3, 0xF($a0)
    ctx->pc = 0x1ac504u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1ac508:
    // 0x1ac508: 0xb4870008  sdr         $a3, 0x8($a0)
    ctx->pc = 0x1ac508u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1ac50c:
    // 0x1ac50c: 0xb0880017  sdl         $t0, 0x17($a0)
    ctx->pc = 0x1ac50cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1ac510:
    // 0x1ac510: 0xb4880010  sdr         $t0, 0x10($a0)
    ctx->pc = 0x1ac510u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1ac514:
    // 0x1ac514: 0xa889001b  swl         $t1, 0x1B($a0)
    ctx->pc = 0x1ac514u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 27); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 9); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_1ac518:
    // 0x1ac518: 0x240200fc  addiu       $v0, $zero, 0xFC
    ctx->pc = 0x1ac518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
label_1ac51c:
    // 0x1ac51c: 0xb8890018  swr         $t1, 0x18($a0)
    ctx->pc = 0x1ac51cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 9); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_1ac520:
    // 0x1ac520: 0x1000000b  b           . + 4 + (0xB << 2)
label_1ac524:
    if (ctx->pc == 0x1AC524u) {
        ctx->pc = 0x1AC524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC520u;
        // 0x1ac524: 0xaea24780  sw          $v0, 0x4780($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 18304), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC528u;
        goto label_1ac528;
    }
    ctx->pc = 0x1AC520u;
    {
        const bool branch_taken_0x1ac520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC520u;
        // 0x1ac524: 0xaea24780  sw          $v0, 0x4780($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 18304), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac520) {
            ctx->pc = 0x1AC550u;
            goto label_1ac550;
        }
    }
    ctx->pc = 0x1AC528u;
label_1ac528:
    // 0x1ac528: 0x262400fc  addiu       $a0, $s1, 0xFC
    ctx->pc = 0x1ac528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 252));
label_1ac52c:
    // 0x1ac52c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1ac52cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1ac530:
    // 0x1ac530: 0xc08e93e  jal         func_23A4F8
label_1ac534:
    if (ctx->pc == 0x1AC534u) {
        ctx->pc = 0x1AC534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC530u;
        // 0x1ac534: 0x3c150037  lui         $s5, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC538u;
        goto label_1ac538;
    }
    ctx->pc = 0x1AC530u;
    SET_GPR_U32(ctx, 31, 0x1AC538u);
    ctx->pc = 0x1AC534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC530u;
    // 0x1ac534: 0x3c150037  lui         $s5, 0x37 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)55 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    { ctx->pc = 0x23a4f8; return; }
    ctx->pc = 0x1AC538u;
label_1ac538:
    // 0x1ac538: 0x10000004  b           . + 4 + (0x4 << 2)
label_1ac53c:
    if (ctx->pc == 0x1AC53Cu) {
        ctx->pc = 0x1AC53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC538u;
        // 0x1ac53c: 0xae32fff8  sw          $s2, -0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294967288), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC540u;
        goto label_1ac540;
    }
    ctx->pc = 0x1AC538u;
    {
        const bool branch_taken_0x1ac538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC538u;
        // 0x1ac53c: 0xae32fff8  sw          $s2, -0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294967288), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac538) {
            ctx->pc = 0x1AC54Cu;
            goto label_1ac54c;
        }
    }
    ctx->pc = 0x1AC540u;
label_1ac540:
    // 0x1ac540: 0xa0400104  sb          $zero, 0x104($v0)
    ctx->pc = 0x1ac540u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 260), (uint8_t)GPR_U32(ctx, 0));
label_1ac544:
    // 0x1ac544: 0x3c150037  lui         $s5, 0x37
    ctx->pc = 0x1ac544u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)55 << 16));
label_1ac548:
    // 0x1ac548: 0xae20fff8  sw          $zero, -0x8($s1)
    ctx->pc = 0x1ac548u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294967288), GPR_U32(ctx, 0));
label_1ac54c:
    // 0x1ac54c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1ac54cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_1ac550:
    // 0x1ac550: 0x26b04780  addiu       $s0, $s5, 0x4780
    ctx->pc = 0x1ac550u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 18304));
label_1ac554:
    // 0x1ac554: 0x24a44980  addiu       $a0, $a1, 0x4980
    ctx->pc = 0x1ac554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 18816));
label_1ac558:
    // 0x1ac558: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1ac558u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1ac55c:
    // 0x1ac55c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1ac55cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1ac560:
    // 0x1ac560: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ac560u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ac564:
    // 0x1ac564: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1ac564u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ac568:
    // 0x1ac568: 0x24080200  addiu       $t0, $zero, 0x200
    ctx->pc = 0x1ac568u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_1ac56c:
    // 0x1ac56c: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1ac56cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ac570:
    // 0x1ac570: 0x240a0008  addiu       $t2, $zero, 0x8
    ctx->pc = 0x1ac570u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1ac574:
    // 0x1ac574: 0xc069e2a  jal         func_1A78A8
label_1ac578:
    if (ctx->pc == 0x1AC578u) {
        ctx->pc = 0x1AC578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC574u;
        // 0x1ac578: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC57Cu;
        goto label_1ac57c;
    }
    ctx->pc = 0x1AC574u;
    SET_GPR_U32(ctx, 31, 0x1AC57Cu);
    ctx->pc = 0x1AC578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC574u;
    // 0x1ac578: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    { ctx->pc = 0x1a78a8; return; }
    ctx->pc = 0x1AC57Cu;
label_1ac57c:
    // 0x1ac57c: 0x4430004  bgezl       $v0, . + 4 + (0x4 << 2)
label_1ac580:
    if (ctx->pc == 0x1AC580u) {
        ctx->pc = 0x1AC580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC57Cu;
        // 0x1ac580: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC584u;
        goto label_1ac584;
    }
    ctx->pc = 0x1AC57Cu;
    {
        const bool branch_taken_0x1ac57c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1ac57c) {
            ctx->pc = 0x1AC580u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AC57Cu;
            // 0x1ac580: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AC590u;
            goto label_1ac590;
        }
    }
    ctx->pc = 0x1AC584u;
label_1ac584:
    // 0x1ac584: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x1ac584u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
label_1ac588:
    // 0x1ac588: 0x10000003  b           . + 4 + (0x3 << 2)
label_1ac58c:
    if (ctx->pc == 0x1AC58Cu) {
        ctx->pc = 0x1AC58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC588u;
        // 0x1ac58c: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC590u;
        goto label_1ac590;
    }
    ctx->pc = 0x1AC588u;
    {
        const bool branch_taken_0x1ac588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC588u;
        // 0x1ac58c: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac588) {
            ctx->pc = 0x1AC598u;
            goto label_1ac598;
        }
    }
    ctx->pc = 0x1AC590u;
label_1ac590:
    // 0x1ac590: 0x8ea24780  lw          $v0, 0x4780($s5)
    ctx->pc = 0x1ac590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 18304)));
label_1ac594:
    // 0x1ac594: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x1ac594u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
label_1ac598:
    // 0x1ac598: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1ac598u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1ac59c:
    // 0x1ac59c: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x1ac59cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1ac5a0:
    // 0x1ac5a0: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1ac5a0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1ac5a4:
    // 0x1ac5a4: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x1ac5a4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1ac5a8:
    // 0x1ac5a8: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1ac5a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1ac5ac:
    // 0x1ac5ac: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1ac5acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1ac5b0:
    // 0x1ac5b0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1ac5b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ac5b4:
    // 0x1ac5b4: 0x3e00008  jr          $ra
label_1ac5b8:
    if (ctx->pc == 0x1AC5B8u) {
        ctx->pc = 0x1AC5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC5B4u;
        // 0x1ac5b8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC5BCu;
        goto label_1ac5bc;
    }
    ctx->pc = 0x1AC5B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AC5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC5B4u;
        // 0x1ac5b8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AC5B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AC5BCu;
label_1ac5bc:
    // 0x1ac5bc: 0x0  nop
    ctx->pc = 0x1ac5bcu;
    // NOP
label_1ac5c0:
    // 0x1ac5c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ac5c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1ac5c4:
    // 0x1ac5c4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ac5c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ac5c8:
    // 0x1ac5c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ac5c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1ac5cc:
    // 0x1ac5cc: 0xc06b0e6  jal         func_1AC398
label_1ac5d0:
    if (ctx->pc == 0x1AC5D0u) {
        ctx->pc = 0x1AC5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC5CCu;
        // 0x1ac5d0: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC5D4u;
        goto label_1ac5d4;
    }
    ctx->pc = 0x1AC5CCu;
    SET_GPR_U32(ctx, 31, 0x1AC5D4u);
    ctx->pc = 0x1AC5D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC5CCu;
    // 0x1ac5d0: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AC398u;
    goto label_1ac398;
    ctx->pc = 0x1AC5D4u;
label_1ac5d4:
    // 0x1ac5d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ac5d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ac5d8:
    // 0x1ac5d8: 0x3e00008  jr          $ra
label_1ac5dc:
    if (ctx->pc == 0x1AC5DCu) {
        ctx->pc = 0x1AC5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC5D8u;
        // 0x1ac5dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC5E0u;
        goto label_1ac5e0;
    }
    ctx->pc = 0x1AC5D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AC5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC5D8u;
        // 0x1ac5dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AC5D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AC5E0u;
label_1ac5e0:
    // 0x1ac5e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ac5e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1ac5e4:
    // 0x1ac5e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ac5e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1ac5e8:
    // 0x1ac5e8: 0xc06b0e6  jal         func_1AC398
label_1ac5ec:
    if (ctx->pc == 0x1AC5ECu) {
        ctx->pc = 0x1AC5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC5E8u;
        // 0x1ac5ec: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC5F0u;
        goto label_1ac5f0;
    }
    ctx->pc = 0x1AC5E8u;
    SET_GPR_U32(ctx, 31, 0x1AC5F0u);
    ctx->pc = 0x1AC5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC5E8u;
    // 0x1ac5ec: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AC398u;
    goto label_1ac398;
    ctx->pc = 0x1AC5F0u;
label_1ac5f0:
    // 0x1ac5f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ac5f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ac5f4:
    // 0x1ac5f4: 0x3e00008  jr          $ra
label_1ac5f8:
    if (ctx->pc == 0x1AC5F8u) {
        ctx->pc = 0x1AC5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC5F4u;
        // 0x1ac5f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC5FCu;
        goto label_1ac5fc;
    }
    ctx->pc = 0x1AC5F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AC5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC5F4u;
        // 0x1ac5f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AC5F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AC5FCu;
label_1ac5fc:
    // 0x1ac5fc: 0x0  nop
    ctx->pc = 0x1ac5fcu;
    // NOP
label_1ac600:
    // 0x1ac600: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1ac600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1ac604:
    // 0x1ac604: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1ac604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_1ac608:
    // 0x1ac608: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x1ac608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_1ac60c:
    // 0x1ac60c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1ac60cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1ac610:
    // 0x1ac610: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1ac610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_1ac614:
    // 0x1ac614: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1ac614u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1ac618:
    // 0x1ac618: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1ac618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1ac61c:
    // 0x1ac61c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1ac61cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1ac620:
    // 0x1ac620: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1ac620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_1ac624:
    // 0x1ac624: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ac624u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ac628:
    // 0x1ac628: 0xc06aef0  jal         func_1ABBC0
label_1ac62c:
    if (ctx->pc == 0x1AC62Cu) {
        ctx->pc = 0x1AC62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC628u;
        // 0x1ac62c: 0xffb10020  sd          $s1, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC630u;
        goto label_1ac630;
    }
    ctx->pc = 0x1AC628u;
    SET_GPR_U32(ctx, 31, 0x1AC630u);
    ctx->pc = 0x1AC62Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC628u;
    // 0x1ac62c: 0xffb10020  sd          $s1, 0x20($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ABBC0u;
    { ctx->pc = 0x1abbc0; return; }
    ctx->pc = 0x1AC630u;
label_1ac630:
    // 0x1ac630: 0x440002c  bltz        $v0, . + 4 + (0x2C << 2)
label_1ac634:
    if (ctx->pc == 0x1AC634u) {
        ctx->pc = 0x1AC634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC630u;
        // 0x1ac634: 0x3c02ffff  lui         $v0, 0xFFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC638u;
        goto label_1ac638;
    }
    ctx->pc = 0x1AC630u;
    {
        const bool branch_taken_0x1ac630 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1AC634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC630u;
        // 0x1ac634: 0x3c02ffff  lui         $v0, 0xFFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac630) {
            ctx->pc = 0x1AC6E4u;
            goto label_1ac6e4;
        }
    }
    ctx->pc = 0x1AC638u;
label_1ac638:
    // 0x1ac638: 0xc06af30  jal         func_1ABCC0
label_1ac63c:
    if (ctx->pc == 0x1AC63Cu) {
        ctx->pc = 0x1AC640u;
        goto label_1ac640;
    }
    ctx->pc = 0x1AC638u;
    SET_GPR_U32(ctx, 31, 0x1AC640u);
    ctx->pc = 0x1ABCC0u;
    { ctx->pc = 0x1abcc0; return; }
    ctx->pc = 0x1AC640u;
label_1ac640:
    // 0x1ac640: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_1ac644:
    if (ctx->pc == 0x1AC644u) {
        ctx->pc = 0x1AC644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC640u;
        // 0x1ac644: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC648u;
        goto label_1ac648;
    }
    ctx->pc = 0x1AC640u;
    {
        const bool branch_taken_0x1ac640 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ac640) {
            ctx->pc = 0x1AC644u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AC640u;
            // 0x1ac644: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AC654u;
            goto label_1ac654;
        }
    }
    ctx->pc = 0x1AC648u;
label_1ac648:
    // 0x1ac648: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x1ac648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
label_1ac64c:
    // 0x1ac64c: 0x10000025  b           . + 4 + (0x25 << 2)
label_1ac650:
    if (ctx->pc == 0x1AC650u) {
        ctx->pc = 0x1AC650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC64Cu;
        // 0x1ac650: 0x3442fffc  ori         $v0, $v0, 0xFFFC (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC654u;
        goto label_1ac654;
    }
    ctx->pc = 0x1AC64Cu;
    {
        const bool branch_taken_0x1ac64c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC64Cu;
        // 0x1ac650: 0x3442fffc  ori         $v0, $v0, 0xFFFC (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac64c) {
            ctx->pc = 0x1AC6E4u;
            goto label_1ac6e4;
        }
    }
    ctx->pc = 0x1AC654u;
label_1ac654:
    // 0x1ac654: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ac654u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ac658:
    // 0x1ac658: 0x24514788  addiu       $s1, $v0, 0x4788
    ctx->pc = 0x1ac658u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 18312));
label_1ac65c:
    // 0x1ac65c: 0x240600fc  addiu       $a2, $zero, 0xFC
    ctx->pc = 0x1ac65cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
label_1ac660:
    // 0x1ac660: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ac660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ac664:
    // 0x1ac664: 0xc08f4fe  jal         func_23D3F8
label_1ac668:
    if (ctx->pc == 0x1AC668u) {
        ctx->pc = 0x1AC668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC664u;
        // 0x1ac668: 0x2630fff8  addiu       $s0, $s1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC66Cu;
        goto label_1ac66c;
    }
    ctx->pc = 0x1AC664u;
    SET_GPR_U32(ctx, 31, 0x1AC66Cu);
    ctx->pc = 0x1AC668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC664u;
    // 0x1ac668: 0x2630fff8  addiu       $s0, $s1, -0x8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D3F8u;
    { ctx->pc = 0x23d3f8; return; }
    ctx->pc = 0x1AC66Cu;
label_1ac66c:
    // 0x1ac66c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1ac66cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1ac670:
    // 0x1ac670: 0xa2000103  sb          $zero, 0x103($s0)
    ctx->pc = 0x1ac670u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 259), (uint8_t)GPR_U32(ctx, 0));
label_1ac674:
    // 0x1ac674: 0x262400fc  addiu       $a0, $s1, 0xFC
    ctx->pc = 0x1ac674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 252));
label_1ac678:
    // 0x1ac678: 0xc08f4fe  jal         func_23D3F8
label_1ac67c:
    if (ctx->pc == 0x1AC67Cu) {
        ctx->pc = 0x1AC67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC678u;
        // 0x1ac67c: 0x240600fc  addiu       $a2, $zero, 0xFC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC680u;
        goto label_1ac680;
    }
    ctx->pc = 0x1AC678u;
    SET_GPR_U32(ctx, 31, 0x1AC680u);
    ctx->pc = 0x1AC67Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC678u;
    // 0x1ac67c: 0x240600fc  addiu       $a2, $zero, 0xFC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D3F8u;
    { ctx->pc = 0x23d3f8; return; }
    ctx->pc = 0x1AC680u;
label_1ac680:
    // 0x1ac680: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1ac680u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_1ac684:
    // 0x1ac684: 0xa20001ff  sb          $zero, 0x1FF($s0)
    ctx->pc = 0x1ac684u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 511), (uint8_t)GPR_U32(ctx, 0));
label_1ac688:
    // 0x1ac688: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1ac688u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1ac68c:
    // 0x1ac68c: 0x24844980  addiu       $a0, $a0, 0x4980
    ctx->pc = 0x1ac68cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18816));
label_1ac690:
    // 0x1ac690: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1ac690u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1ac694:
    // 0x1ac694: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ac694u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ac698:
    // 0x1ac698: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1ac698u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ac69c:
    // 0x1ac69c: 0x24080200  addiu       $t0, $zero, 0x200
    ctx->pc = 0x1ac69cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_1ac6a0:
    // 0x1ac6a0: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1ac6a0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ac6a4:
    // 0x1ac6a4: 0x240a0010  addiu       $t2, $zero, 0x10
    ctx->pc = 0x1ac6a4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1ac6a8:
    // 0x1ac6a8: 0xc069e2a  jal         func_1A78A8
label_1ac6ac:
    if (ctx->pc == 0x1AC6ACu) {
        ctx->pc = 0x1AC6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC6A8u;
        // 0x1ac6ac: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC6B0u;
        goto label_1ac6b0;
    }
    ctx->pc = 0x1AC6A8u;
    SET_GPR_U32(ctx, 31, 0x1AC6B0u);
    ctx->pc = 0x1AC6ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC6A8u;
    // 0x1ac6ac: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    { ctx->pc = 0x1a78a8; return; }
    ctx->pc = 0x1AC6B0u;
label_1ac6b0:
    // 0x1ac6b0: 0x4430004  bgezl       $v0, . + 4 + (0x4 << 2)
label_1ac6b4:
    if (ctx->pc == 0x1AC6B4u) {
        ctx->pc = 0x1AC6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC6B0u;
        // 0x1ac6b4: 0x8e22fff8  lw          $v0, -0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294967288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC6B8u;
        goto label_1ac6b8;
    }
    ctx->pc = 0x1AC6B0u;
    {
        const bool branch_taken_0x1ac6b0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1ac6b0) {
            ctx->pc = 0x1AC6B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AC6B0u;
            // 0x1ac6b4: 0x8e22fff8  lw          $v0, -0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294967288)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AC6C4u;
            goto label_1ac6c4;
        }
    }
    ctx->pc = 0x1AC6B8u;
label_1ac6b8:
    // 0x1ac6b8: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x1ac6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
label_1ac6bc:
    // 0x1ac6bc: 0x10000009  b           . + 4 + (0x9 << 2)
label_1ac6c0:
    if (ctx->pc == 0x1AC6C0u) {
        ctx->pc = 0x1AC6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC6BCu;
        // 0x1ac6c0: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC6C4u;
        goto label_1ac6c4;
    }
    ctx->pc = 0x1AC6BCu;
    {
        const bool branch_taken_0x1ac6bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC6BCu;
        // 0x1ac6c0: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac6bc) {
            ctx->pc = 0x1AC6E4u;
            goto label_1ac6e4;
        }
    }
    ctx->pc = 0x1AC6C4u;
label_1ac6c4:
    // 0x1ac6c4: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_1ac6c8:
    if (ctx->pc == 0x1AC6C8u) {
        ctx->pc = 0x1AC6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC6C4u;
        // 0x1ac6c8: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC6CCu;
        goto label_1ac6cc;
    }
    ctx->pc = 0x1AC6C4u;
    {
        const bool branch_taken_0x1ac6c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ac6c4) {
            ctx->pc = 0x1AC6C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AC6C4u;
            // 0x1ac6c8: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AC6D8u;
            goto label_1ac6d8;
        }
    }
    ctx->pc = 0x1AC6CCu;
label_1ac6cc:
    // 0x1ac6cc: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x1ac6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
label_1ac6d0:
    // 0x1ac6d0: 0x10000004  b           . + 4 + (0x4 << 2)
label_1ac6d4:
    if (ctx->pc == 0x1AC6D4u) {
        ctx->pc = 0x1AC6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC6D0u;
        // 0x1ac6d4: 0x3442fffd  ori         $v0, $v0, 0xFFFD (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65533);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC6D8u;
        goto label_1ac6d8;
    }
    ctx->pc = 0x1AC6D0u;
    {
        const bool branch_taken_0x1ac6d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC6D0u;
        // 0x1ac6d4: 0x3442fffd  ori         $v0, $v0, 0xFFFD (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65533);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac6d0) {
            ctx->pc = 0x1AC6E4u;
            goto label_1ac6e4;
        }
    }
    ctx->pc = 0x1AC6D8u;
label_1ac6d8:
    // 0x1ac6d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ac6d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ac6dc:
    // 0x1ac6dc: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1ac6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1ac6e0:
    // 0x1ac6e0: 0xae830004  sw          $v1, 0x4($s4)
    ctx->pc = 0x1ac6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 3));
label_1ac6e4:
    // 0x1ac6e4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1ac6e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1ac6e8:
    // 0x1ac6e8: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1ac6e8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1ac6ec:
    // 0x1ac6ec: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x1ac6ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1ac6f0:
    // 0x1ac6f0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1ac6f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1ac6f4:
    // 0x1ac6f4: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1ac6f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1ac6f8:
    // 0x1ac6f8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1ac6f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ac6fc:
    // 0x1ac6fc: 0x3e00008  jr          $ra
label_1ac700:
    if (ctx->pc == 0x1AC700u) {
        ctx->pc = 0x1AC700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC6FCu;
        // 0x1ac700: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC704u;
        goto label_1ac704;
    }
    ctx->pc = 0x1AC6FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AC700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC6FCu;
        // 0x1ac700: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AC6FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AC704u;
label_1ac704:
    // 0x1ac704: 0x0  nop
    ctx->pc = 0x1ac704u;
    // NOP
label_1ac708:
    // 0x1ac708: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ac708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1ac70c:
    // 0x1ac70c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ac70cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1ac710:
    // 0x1ac710: 0xc06b180  jal         func_1AC600
label_1ac714:
    if (ctx->pc == 0x1AC714u) {
        ctx->pc = 0x1AC714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC710u;
        // 0x1ac714: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC718u;
        goto label_1ac718;
    }
    ctx->pc = 0x1AC710u;
    SET_GPR_U32(ctx, 31, 0x1AC718u);
    ctx->pc = 0x1AC714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC710u;
    // 0x1ac714: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AC600u;
    goto label_1ac600;
    ctx->pc = 0x1AC718u;
label_1ac718:
    // 0x1ac718: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ac718u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ac71c:
    // 0x1ac71c: 0x3e00008  jr          $ra
label_1ac720:
    if (ctx->pc == 0x1AC720u) {
        ctx->pc = 0x1AC720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC71Cu;
        // 0x1ac720: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC724u;
        goto label_1ac724;
    }
    ctx->pc = 0x1AC71Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AC720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC71Cu;
        // 0x1ac720: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AC71Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AC724u;
label_1ac724:
    // 0x1ac724: 0x0  nop
    ctx->pc = 0x1ac724u;
    // NOP
label_1ac728:
    // 0x1ac728: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1ac728u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1ac72c:
    // 0x1ac72c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ac72cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1ac730:
    // 0x1ac730: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x1ac730u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_1ac734:
    // 0x1ac734: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ac734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1ac738:
    // 0x1ac738: 0x24a5a738  addiu       $a1, $a1, -0x58C8
    ctx->pc = 0x1ac738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944568));
label_1ac73c:
    // 0x1ac73c: 0xc06b180  jal         func_1AC600
label_1ac740:
    if (ctx->pc == 0x1AC740u) {
        ctx->pc = 0x1AC740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC73Cu;
        // 0x1ac740: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC744u;
        goto label_1ac744;
    }
    ctx->pc = 0x1AC73Cu;
    SET_GPR_U32(ctx, 31, 0x1AC744u);
    ctx->pc = 0x1AC740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC73Cu;
    // 0x1ac740: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AC600u;
    goto label_1ac600;
    ctx->pc = 0x1AC744u;
label_1ac744:
    // 0x1ac744: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ac744u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ac748:
    // 0x1ac748: 0x3e00008  jr          $ra
label_1ac74c:
    if (ctx->pc == 0x1AC74Cu) {
        ctx->pc = 0x1AC74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC748u;
        // 0x1ac74c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC750u;
        goto label_1ac750;
    }
    ctx->pc = 0x1AC748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AC74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC748u;
        // 0x1ac74c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AC748u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AC750u;
label_1ac750:
    // 0x1ac750: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1ac750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1ac754:
    // 0x1ac754: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x1ac754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    ctx->pc = 0x1ac758u;
    return;
}

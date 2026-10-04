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

// Function: FUN_00238fc8
// Address: 0x238fc8 - 0x2393a0
void FUN_00238fc8_0x238fc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00238fc8_0x238fc8");
#endif

    switch (ctx->pc) {
        case 0x238fc8u: goto label_238fc8;
        case 0x238fccu: goto label_238fcc;
        case 0x238fd0u: goto label_238fd0;
        case 0x238fd4u: goto label_238fd4;
        case 0x238fd8u: goto label_238fd8;
        case 0x238fdcu: goto label_238fdc;
        case 0x238fe0u: goto label_238fe0;
        case 0x238fe4u: goto label_238fe4;
        case 0x238fe8u: goto label_238fe8;
        case 0x238fecu: goto label_238fec;
        case 0x238ff0u: goto label_238ff0;
        case 0x238ff4u: goto label_238ff4;
        case 0x238ff8u: goto label_238ff8;
        case 0x238ffcu: goto label_238ffc;
        case 0x239000u: goto label_239000;
        case 0x239004u: goto label_239004;
        case 0x239008u: goto label_239008;
        case 0x23900cu: goto label_23900c;
        case 0x239010u: goto label_239010;
        case 0x239014u: goto label_239014;
        case 0x239018u: goto label_239018;
        case 0x23901cu: goto label_23901c;
        case 0x239020u: goto label_239020;
        case 0x239024u: goto label_239024;
        case 0x239028u: goto label_239028;
        case 0x23902cu: goto label_23902c;
        case 0x239030u: goto label_239030;
        case 0x239034u: goto label_239034;
        case 0x239038u: goto label_239038;
        case 0x23903cu: goto label_23903c;
        case 0x239040u: goto label_239040;
        case 0x239044u: goto label_239044;
        case 0x239048u: goto label_239048;
        case 0x23904cu: goto label_23904c;
        case 0x239050u: goto label_239050;
        case 0x239054u: goto label_239054;
        case 0x239058u: goto label_239058;
        case 0x23905cu: goto label_23905c;
        case 0x239060u: goto label_239060;
        case 0x239064u: goto label_239064;
        case 0x239068u: goto label_239068;
        case 0x23906cu: goto label_23906c;
        case 0x239070u: goto label_239070;
        case 0x239074u: goto label_239074;
        case 0x239078u: goto label_239078;
        case 0x23907cu: goto label_23907c;
        case 0x239080u: goto label_239080;
        case 0x239084u: goto label_239084;
        case 0x239088u: goto label_239088;
        case 0x23908cu: goto label_23908c;
        case 0x239090u: goto label_239090;
        case 0x239094u: goto label_239094;
        case 0x239098u: goto label_239098;
        case 0x23909cu: goto label_23909c;
        case 0x2390a0u: goto label_2390a0;
        case 0x2390a4u: goto label_2390a4;
        case 0x2390a8u: goto label_2390a8;
        case 0x2390acu: goto label_2390ac;
        case 0x2390b0u: goto label_2390b0;
        case 0x2390b4u: goto label_2390b4;
        case 0x2390b8u: goto label_2390b8;
        case 0x2390bcu: goto label_2390bc;
        case 0x2390c0u: goto label_2390c0;
        case 0x2390c4u: goto label_2390c4;
        case 0x2390c8u: goto label_2390c8;
        case 0x2390ccu: goto label_2390cc;
        case 0x2390d0u: goto label_2390d0;
        case 0x2390d4u: goto label_2390d4;
        case 0x2390d8u: goto label_2390d8;
        case 0x2390dcu: goto label_2390dc;
        case 0x2390e0u: goto label_2390e0;
        case 0x2390e4u: goto label_2390e4;
        case 0x2390e8u: goto label_2390e8;
        case 0x2390ecu: goto label_2390ec;
        case 0x2390f0u: goto label_2390f0;
        case 0x2390f4u: goto label_2390f4;
        case 0x2390f8u: goto label_2390f8;
        case 0x2390fcu: goto label_2390fc;
        case 0x239100u: goto label_239100;
        case 0x239104u: goto label_239104;
        case 0x239108u: goto label_239108;
        case 0x23910cu: goto label_23910c;
        case 0x239110u: goto label_239110;
        case 0x239114u: goto label_239114;
        case 0x239118u: goto label_239118;
        case 0x23911cu: goto label_23911c;
        case 0x239120u: goto label_239120;
        case 0x239124u: goto label_239124;
        case 0x239128u: goto label_239128;
        case 0x23912cu: goto label_23912c;
        case 0x239130u: goto label_239130;
        case 0x239134u: goto label_239134;
        case 0x239138u: goto label_239138;
        case 0x23913cu: goto label_23913c;
        case 0x239140u: goto label_239140;
        case 0x239144u: goto label_239144;
        case 0x239148u: goto label_239148;
        case 0x23914cu: goto label_23914c;
        case 0x239150u: goto label_239150;
        case 0x239154u: goto label_239154;
        case 0x239158u: goto label_239158;
        case 0x23915cu: goto label_23915c;
        case 0x239160u: goto label_239160;
        case 0x239164u: goto label_239164;
        case 0x239168u: goto label_239168;
        case 0x23916cu: goto label_23916c;
        case 0x239170u: goto label_239170;
        case 0x239174u: goto label_239174;
        case 0x239178u: goto label_239178;
        case 0x23917cu: goto label_23917c;
        case 0x239180u: goto label_239180;
        case 0x239184u: goto label_239184;
        case 0x239188u: goto label_239188;
        case 0x23918cu: goto label_23918c;
        case 0x239190u: goto label_239190;
        case 0x239194u: goto label_239194;
        case 0x239198u: goto label_239198;
        case 0x23919cu: goto label_23919c;
        case 0x2391a0u: goto label_2391a0;
        case 0x2391a4u: goto label_2391a4;
        case 0x2391a8u: goto label_2391a8;
        case 0x2391acu: goto label_2391ac;
        case 0x2391b0u: goto label_2391b0;
        case 0x2391b4u: goto label_2391b4;
        case 0x2391b8u: goto label_2391b8;
        case 0x2391bcu: goto label_2391bc;
        case 0x2391c0u: goto label_2391c0;
        case 0x2391c4u: goto label_2391c4;
        case 0x2391c8u: goto label_2391c8;
        case 0x2391ccu: goto label_2391cc;
        case 0x2391d0u: goto label_2391d0;
        case 0x2391d4u: goto label_2391d4;
        case 0x2391d8u: goto label_2391d8;
        case 0x2391dcu: goto label_2391dc;
        case 0x2391e0u: goto label_2391e0;
        case 0x2391e4u: goto label_2391e4;
        case 0x2391e8u: goto label_2391e8;
        case 0x2391ecu: goto label_2391ec;
        case 0x2391f0u: goto label_2391f0;
        case 0x2391f4u: goto label_2391f4;
        case 0x2391f8u: goto label_2391f8;
        case 0x2391fcu: goto label_2391fc;
        case 0x239200u: goto label_239200;
        case 0x239204u: goto label_239204;
        case 0x239208u: goto label_239208;
        case 0x23920cu: goto label_23920c;
        case 0x239210u: goto label_239210;
        case 0x239214u: goto label_239214;
        case 0x239218u: goto label_239218;
        case 0x23921cu: goto label_23921c;
        case 0x239220u: goto label_239220;
        case 0x239224u: goto label_239224;
        case 0x239228u: goto label_239228;
        case 0x23922cu: goto label_23922c;
        case 0x239230u: goto label_239230;
        case 0x239234u: goto label_239234;
        case 0x239238u: goto label_239238;
        case 0x23923cu: goto label_23923c;
        case 0x239240u: goto label_239240;
        case 0x239244u: goto label_239244;
        case 0x239248u: goto label_239248;
        case 0x23924cu: goto label_23924c;
        case 0x239250u: goto label_239250;
        case 0x239254u: goto label_239254;
        case 0x239258u: goto label_239258;
        case 0x23925cu: goto label_23925c;
        case 0x239260u: goto label_239260;
        case 0x239264u: goto label_239264;
        case 0x239268u: goto label_239268;
        case 0x23926cu: goto label_23926c;
        case 0x239270u: goto label_239270;
        case 0x239274u: goto label_239274;
        case 0x239278u: goto label_239278;
        case 0x23927cu: goto label_23927c;
        case 0x239280u: goto label_239280;
        case 0x239284u: goto label_239284;
        case 0x239288u: goto label_239288;
        case 0x23928cu: goto label_23928c;
        case 0x239290u: goto label_239290;
        case 0x239294u: goto label_239294;
        case 0x239298u: goto label_239298;
        case 0x23929cu: goto label_23929c;
        case 0x2392a0u: goto label_2392a0;
        case 0x2392a4u: goto label_2392a4;
        case 0x2392a8u: goto label_2392a8;
        case 0x2392acu: goto label_2392ac;
        case 0x2392b0u: goto label_2392b0;
        case 0x2392b4u: goto label_2392b4;
        case 0x2392b8u: goto label_2392b8;
        case 0x2392bcu: goto label_2392bc;
        case 0x2392c0u: goto label_2392c0;
        case 0x2392c4u: goto label_2392c4;
        case 0x2392c8u: goto label_2392c8;
        case 0x2392ccu: goto label_2392cc;
        case 0x2392d0u: goto label_2392d0;
        case 0x2392d4u: goto label_2392d4;
        case 0x2392d8u: goto label_2392d8;
        case 0x2392dcu: goto label_2392dc;
        case 0x2392e0u: goto label_2392e0;
        case 0x2392e4u: goto label_2392e4;
        case 0x2392e8u: goto label_2392e8;
        case 0x2392ecu: goto label_2392ec;
        case 0x2392f0u: goto label_2392f0;
        case 0x2392f4u: goto label_2392f4;
        case 0x2392f8u: goto label_2392f8;
        case 0x2392fcu: goto label_2392fc;
        case 0x239300u: goto label_239300;
        case 0x239304u: goto label_239304;
        case 0x239308u: goto label_239308;
        case 0x23930cu: goto label_23930c;
        case 0x239310u: goto label_239310;
        case 0x239314u: goto label_239314;
        case 0x239318u: goto label_239318;
        case 0x23931cu: goto label_23931c;
        case 0x239320u: goto label_239320;
        case 0x239324u: goto label_239324;
        case 0x239328u: goto label_239328;
        case 0x23932cu: goto label_23932c;
        case 0x239330u: goto label_239330;
        case 0x239334u: goto label_239334;
        case 0x239338u: goto label_239338;
        case 0x23933cu: goto label_23933c;
        case 0x239340u: goto label_239340;
        case 0x239344u: goto label_239344;
        case 0x239348u: goto label_239348;
        case 0x23934cu: goto label_23934c;
        case 0x239350u: goto label_239350;
        case 0x239354u: goto label_239354;
        case 0x239358u: goto label_239358;
        case 0x23935cu: goto label_23935c;
        case 0x239360u: goto label_239360;
        case 0x239364u: goto label_239364;
        case 0x239368u: goto label_239368;
        case 0x23936cu: goto label_23936c;
        case 0x239370u: goto label_239370;
        case 0x239374u: goto label_239374;
        case 0x239378u: goto label_239378;
        case 0x23937cu: goto label_23937c;
        case 0x239380u: goto label_239380;
        case 0x239384u: goto label_239384;
        case 0x239388u: goto label_239388;
        case 0x23938cu: goto label_23938c;
        case 0x239390u: goto label_239390;
        case 0x239394u: goto label_239394;
        case 0x239398u: goto label_239398;
        case 0x23939cu: goto label_23939c;
        default: break;
    }

    ctx->pc = 0x238fc8u;

label_238fc8:
    // 0x238fc8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x238fc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_238fcc:
    // 0x238fcc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x238fccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_238fd0:
    // 0x238fd0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x238fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_238fd4:
    // 0x238fd4: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x238fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_238fd8:
    // 0x238fd8: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x238fd8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_238fdc:
    // 0x238fdc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x238fdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_238fe0:
    // 0x238fe0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x238fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_238fe4:
    // 0x238fe4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x238fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_238fe8:
    // 0x238fe8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x238fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_238fec:
    // 0x238fec: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x238fecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_238ff0:
    // 0x238ff0: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x238ff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
label_238ff4:
    // 0x238ff4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x238ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_238ff8:
    // 0x238ff8: 0x8ed20008  lw          $s2, 0x8($s6)
    ctx->pc = 0x238ff8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_238ffc:
    // 0x238ffc: 0x124000df  beqz        $s2, . + 4 + (0xDF << 2)
label_239000:
    if (ctx->pc == 0x239000u) {
        ctx->pc = 0x239000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238FFCu;
        // 0x239000: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239004u;
        goto label_239004;
    }
    ctx->pc = 0x238FFCu;
    {
        const bool branch_taken_0x238ffc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x239000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238FFCu;
        // 0x239000: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238ffc) {
            ctx->pc = 0x23937Cu;
            goto label_23937c;
        }
    }
    ctx->pc = 0x239004u;
label_239004:
    // 0x239004: 0x9623000c  lhu         $v1, 0xC($s1)
    ctx->pc = 0x239004u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_239008:
    // 0x239008: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x239008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_23900c:
    // 0x23900c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_239010:
    if (ctx->pc == 0x239010u) {
        ctx->pc = 0x239014u;
        goto label_239014;
    }
    ctx->pc = 0x23900Cu;
    {
        const bool branch_taken_0x23900c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23900c) {
            ctx->pc = 0x239020u;
            goto label_239020;
        }
    }
    ctx->pc = 0x239014u;
label_239014:
    // 0x239014: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x239014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_239018:
    // 0x239018: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_23901c:
    if (ctx->pc == 0x23901Cu) {
        ctx->pc = 0x23901Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239018u;
        // 0x23901c: 0x30620002  andi        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x239020u;
        goto label_239020;
    }
    ctx->pc = 0x239018u;
    {
        const bool branch_taken_0x239018 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23901Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239018u;
        // 0x23901c: 0x30620002  andi        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x239018) {
            ctx->pc = 0x239038u;
            goto label_239038;
        }
    }
    ctx->pc = 0x239020u;
label_239020:
    // 0x239020: 0xc08fcc6  jal         func_23F318
label_239024:
    if (ctx->pc == 0x239024u) {
        ctx->pc = 0x239028u;
        goto label_239028;
    }
    ctx->pc = 0x239020u;
    SET_GPR_U32(ctx, 31, 0x239028u);
    ctx->pc = 0x23F318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F318u, 0x239020u, 0x239028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239028u;
label_239028:
    // 0x239028: 0x144000d4  bnez        $v0, . + 4 + (0xD4 << 2)
label_23902c:
    if (ctx->pc == 0x23902Cu) {
        ctx->pc = 0x23902Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239028u;
        // 0x23902c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239030u;
        goto label_239030;
    }
    ctx->pc = 0x239028u;
    {
        const bool branch_taken_0x239028 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23902Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239028u;
        // 0x23902c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239028) {
            ctx->pc = 0x23937Cu;
            goto label_23937c;
        }
    }
    ctx->pc = 0x239030u;
label_239030:
    // 0x239030: 0x9623000c  lhu         $v1, 0xC($s1)
    ctx->pc = 0x239030u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_239034:
    // 0x239034: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x239034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_239038:
    // 0x239038: 0x8ed40000  lw          $s4, 0x0($s6)
    ctx->pc = 0x239038u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_23903c:
    // 0x23903c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_239040:
    if (ctx->pc == 0x239040u) {
        ctx->pc = 0x239040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23903Cu;
        // 0x239040: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239044u;
        goto label_239044;
    }
    ctx->pc = 0x23903Cu;
    {
        const bool branch_taken_0x23903c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x239040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23903Cu;
        // 0x239040: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23903c) {
            ctx->pc = 0x2390B8u;
            goto label_2390b8;
        }
    }
    ctx->pc = 0x239044u;
label_239044:
    // 0x239044: 0x24150400  addiu       $s5, $zero, 0x400
    ctx->pc = 0x239044u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_239048:
    // 0x239048: 0x56400009  bnel        $s2, $zero, . + 4 + (0x9 << 2)
label_23904c:
    if (ctx->pc == 0x23904Cu) {
        ctx->pc = 0x23904Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239048u;
        // 0x23904c: 0x2e430401  sltiu       $v1, $s2, 0x401 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)1025) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x239050u;
        goto label_239050;
    }
    ctx->pc = 0x239048u;
    {
        const bool branch_taken_0x239048 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x239048) {
            ctx->pc = 0x23904Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239048u;
            // 0x23904c: 0x2e430401  sltiu       $v1, $s2, 0x401 (Delay Slot)
            SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)1025) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x239070u;
            goto label_239070;
        }
    }
    ctx->pc = 0x239050u;
label_239050:
    // 0x239050: 0x8e920004  lw          $s2, 0x4($s4)
    ctx->pc = 0x239050u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_239054:
    // 0x239054: 0x8e930000  lw          $s3, 0x0($s4)
    ctx->pc = 0x239054u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_239058:
    // 0x239058: 0x0  nop
    ctx->pc = 0x239058u;
    // NOP
label_23905c:
    // 0x23905c: 0x0  nop
    ctx->pc = 0x23905cu;
    // NOP
label_239060:
    // 0x239060: 0x0  nop
    ctx->pc = 0x239060u;
    // NOP
label_239064:
    // 0x239064: 0x1240fffa  beqz        $s2, . + 4 + (-0x6 << 2)
label_239068:
    if (ctx->pc == 0x239068u) {
        ctx->pc = 0x239068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239064u;
        // 0x239068: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23906Cu;
        goto label_23906c;
    }
    ctx->pc = 0x239064u;
    {
        const bool branch_taken_0x239064 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x239068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239064u;
        // 0x239068: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239064) {
            ctx->pc = 0x239050u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_239050;
        }
    }
    ctx->pc = 0x23906Cu;
label_23906c:
    // 0x23906c: 0x2e430401  sltiu       $v1, $s2, 0x401
    ctx->pc = 0x23906cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)1025) ? 1 : 0);
label_239070:
    // 0x239070: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x239070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_239074:
    // 0x239074: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x239074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_239078:
    // 0x239078: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x239078u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_23907c:
    // 0x23907c: 0x243300b  movn        $a2, $s2, $v1
    ctx->pc = 0x23907cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 18));
label_239080:
    // 0x239080: 0x40f809  jalr        $v0
label_239084:
    if (ctx->pc == 0x239084u) {
        ctx->pc = 0x239084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239080u;
        // 0x239084: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239088u;
        goto label_239088;
    }
    ctx->pc = 0x239080u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x239088u);
        ctx->pc = 0x239084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239080u;
        // 0x239084: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x239080u, 0x239088u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x239088u;
label_239088:
    // 0x239088: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x239088u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23908c:
    // 0x23908c: 0x5a0000b8  blezl       $s0, . + 4 + (0xB8 << 2)
label_239090:
    if (ctx->pc == 0x239090u) {
        ctx->pc = 0x239090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23908Cu;
        // 0x239090: 0x9623000c  lhu         $v1, 0xC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239094u;
        goto label_239094;
    }
    ctx->pc = 0x23908Cu;
    {
        const bool branch_taken_0x23908c = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x23908c) {
            ctx->pc = 0x239090u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23908Cu;
            // 0x239090: 0x9623000c  lhu         $v1, 0xC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x239370u;
            goto label_239370;
        }
    }
    ctx->pc = 0x239094u;
label_239094:
    // 0x239094: 0x8ec20008  lw          $v0, 0x8($s6)
    ctx->pc = 0x239094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_239098:
    // 0x239098: 0x2709821  addu        $s3, $s3, $s0
    ctx->pc = 0x239098u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_23909c:
    // 0x23909c: 0x2509023  subu        $s2, $s2, $s0
    ctx->pc = 0x23909cu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_2390a0:
    // 0x2390a0: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x2390a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_2390a4:
    // 0x2390a4: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
label_2390a8:
    if (ctx->pc == 0x2390A8u) {
        ctx->pc = 0x2390A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2390A4u;
        // 0x2390a8: 0xaec20008  sw          $v0, 0x8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2390ACu;
        goto label_2390ac;
    }
    ctx->pc = 0x2390A4u;
    {
        const bool branch_taken_0x2390a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2390A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2390A4u;
        // 0x2390a8: 0xaec20008  sw          $v0, 0x8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2390a4) {
            ctx->pc = 0x239048u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_239048;
        }
    }
    ctx->pc = 0x2390ACu;
label_2390ac:
    // 0x2390ac: 0x100000b3  b           . + 4 + (0xB3 << 2)
label_2390b0:
    if (ctx->pc == 0x2390B0u) {
        ctx->pc = 0x2390B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2390ACu;
        // 0x2390b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2390B4u;
        goto label_2390b4;
    }
    ctx->pc = 0x2390ACu;
    {
        const bool branch_taken_0x2390ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2390B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2390ACu;
        // 0x2390b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2390ac) {
            ctx->pc = 0x23937Cu;
            goto label_23937c;
        }
    }
    ctx->pc = 0x2390B4u;
label_2390b4:
    // 0x2390b4: 0x0  nop
    ctx->pc = 0x2390b4u;
    // NOP
label_2390b8:
    // 0x2390b8: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x2390b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_2390bc:
    // 0x2390bc: 0x14400052  bnez        $v0, . + 4 + (0x52 << 2)
label_2390c0:
    if (ctx->pc == 0x2390C0u) {
        ctx->pc = 0x2390C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2390BCu;
        // 0x2390c0: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2390C4u;
        goto label_2390c4;
    }
    ctx->pc = 0x2390BCu;
    {
        const bool branch_taken_0x2390bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2390C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2390BCu;
        // 0x2390c0: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2390bc) {
            ctx->pc = 0x239208u;
            goto label_239208;
        }
    }
    ctx->pc = 0x2390C4u;
label_2390c4:
    // 0x2390c4: 0x10000004  b           . + 4 + (0x4 << 2)
label_2390c8:
    if (ctx->pc == 0x2390C8u) {
        ctx->pc = 0x2390CCu;
        goto label_2390cc;
    }
    ctx->pc = 0x2390C4u;
    {
        const bool branch_taken_0x2390c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2390c4) {
            ctx->pc = 0x2390D8u;
            goto label_2390d8;
        }
    }
    ctx->pc = 0x2390CCu;
label_2390cc:
    // 0x2390cc: 0x0  nop
    ctx->pc = 0x2390ccu;
    // NOP
label_2390d0:
    // 0x2390d0: 0x9623000c  lhu         $v1, 0xC($s1)
    ctx->pc = 0x2390d0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_2390d4:
    // 0x2390d4: 0x0  nop
    ctx->pc = 0x2390d4u;
    // NOP
label_2390d8:
    // 0x2390d8: 0x16400009  bnez        $s2, . + 4 + (0x9 << 2)
label_2390dc:
    if (ctx->pc == 0x2390DCu) {
        ctx->pc = 0x2390DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2390D8u;
        // 0x2390dc: 0x30620200  andi        $v0, $v1, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2390E0u;
        goto label_2390e0;
    }
    ctx->pc = 0x2390D8u;
    {
        const bool branch_taken_0x2390d8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2390DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2390D8u;
        // 0x2390dc: 0x30620200  andi        $v0, $v1, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2390d8) {
            ctx->pc = 0x239100u;
            goto label_239100;
        }
    }
    ctx->pc = 0x2390E0u;
label_2390e0:
    // 0x2390e0: 0x8e920004  lw          $s2, 0x4($s4)
    ctx->pc = 0x2390e0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_2390e4:
    // 0x2390e4: 0x8e930000  lw          $s3, 0x0($s4)
    ctx->pc = 0x2390e4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2390e8:
    // 0x2390e8: 0x0  nop
    ctx->pc = 0x2390e8u;
    // NOP
label_2390ec:
    // 0x2390ec: 0x0  nop
    ctx->pc = 0x2390ecu;
    // NOP
label_2390f0:
    // 0x2390f0: 0x0  nop
    ctx->pc = 0x2390f0u;
    // NOP
label_2390f4:
    // 0x2390f4: 0x1240fffa  beqz        $s2, . + 4 + (-0x6 << 2)
label_2390f8:
    if (ctx->pc == 0x2390F8u) {
        ctx->pc = 0x2390F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2390F4u;
        // 0x2390f8: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2390FCu;
        goto label_2390fc;
    }
    ctx->pc = 0x2390F4u;
    {
        const bool branch_taken_0x2390f4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2390F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2390F4u;
        // 0x2390f8: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2390f4) {
            ctx->pc = 0x2390E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2390e0;
        }
    }
    ctx->pc = 0x2390FCu;
label_2390fc:
    // 0x2390fc: 0x30620200  andi        $v0, $v1, 0x200
    ctx->pc = 0x2390fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
label_239100:
    // 0x239100: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_239104:
    if (ctx->pc == 0x239104u) {
        ctx->pc = 0x239104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239100u;
        // 0x239104: 0x8e300008  lw          $s0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239108u;
        goto label_239108;
    }
    ctx->pc = 0x239100u;
    {
        const bool branch_taken_0x239100 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x239104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239100u;
        // 0x239104: 0x8e300008  lw          $s0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239100) {
            ctx->pc = 0x239138u;
            goto label_239138;
        }
    }
    ctx->pc = 0x239108u;
label_239108:
    // 0x239108: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x239108u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_23910c:
    // 0x23910c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x23910cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_239110:
    // 0x239110: 0x242800b  movn        $s0, $s2, $v0
    ctx->pc = 0x239110u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 18));
label_239114:
    // 0x239114: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x239114u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_239118:
    // 0x239118: 0xc08e96a  jal         func_23A5A8
label_23911c:
    if (ctx->pc == 0x23911Cu) {
        ctx->pc = 0x23911Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239118u;
        // 0x23911c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239120u;
        goto label_239120;
    }
    ctx->pc = 0x239118u;
    SET_GPR_U32(ctx, 31, 0x239120u);
    ctx->pc = 0x23911Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239118u;
    // 0x23911c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A5A8u, 0x239118u, 0x239120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239120u;
label_239120:
    // 0x239120: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x239120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_239124:
    // 0x239124: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x239124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_239128:
    // 0x239128: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x239128u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_23912c:
    // 0x23912c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x23912cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_239130:
    // 0x239130: 0x1000002a  b           . + 4 + (0x2A << 2)
label_239134:
    if (ctx->pc == 0x239134u) {
        ctx->pc = 0x239134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239130u;
        // 0x239134: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239138u;
        goto label_239138;
    }
    ctx->pc = 0x239130u;
    {
        const bool branch_taken_0x239130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239130u;
        // 0x239134: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239130) {
            ctx->pc = 0x2391DCu;
            goto label_2391dc;
        }
    }
    ctx->pc = 0x239138u;
label_239138:
    // 0x239138: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x239138u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_23913c:
    // 0x23913c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x23913cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_239140:
    // 0x239140: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x239140u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_239144:
    // 0x239144: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_239148:
    if (ctx->pc == 0x239148u) {
        ctx->pc = 0x239148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239144u;
        // 0x239148: 0x8e300014  lw          $s0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23914Cu;
        goto label_23914c;
    }
    ctx->pc = 0x239144u;
    {
        const bool branch_taken_0x239144 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x239144) {
            ctx->pc = 0x239148u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239144u;
            // 0x239148: 0x8e300014  lw          $s0, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x239188u;
            goto label_239188;
        }
    }
    ctx->pc = 0x23914Cu;
label_23914c:
    // 0x23914c: 0x212102b  sltu        $v0, $s0, $s2
    ctx->pc = 0x23914cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_239150:
    // 0x239150: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
label_239154:
    if (ctx->pc == 0x239154u) {
        ctx->pc = 0x239154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239150u;
        // 0x239154: 0x8e300014  lw          $s0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239158u;
        goto label_239158;
    }
    ctx->pc = 0x239150u;
    {
        const bool branch_taken_0x239150 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x239150) {
            ctx->pc = 0x239154u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239150u;
            // 0x239154: 0x8e300014  lw          $s0, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x239188u;
            goto label_239188;
        }
    }
    ctx->pc = 0x239158u;
label_239158:
    // 0x239158: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x239158u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_23915c:
    // 0x23915c: 0xc08e96a  jal         func_23A5A8
label_239160:
    if (ctx->pc == 0x239160u) {
        ctx->pc = 0x239160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23915Cu;
        // 0x239160: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239164u;
        goto label_239164;
    }
    ctx->pc = 0x23915Cu;
    SET_GPR_U32(ctx, 31, 0x239164u);
    ctx->pc = 0x239160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23915Cu;
    // 0x239160: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A5A8u, 0x23915Cu, 0x239164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239164u;
label_239164:
    // 0x239164: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x239164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_239168:
    // 0x239168: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x239168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23916c:
    // 0x23916c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x23916cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_239170:
    // 0x239170: 0xc08e1d2  jal         func_238748
label_239174:
    if (ctx->pc == 0x239174u) {
        ctx->pc = 0x239174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239170u;
        // 0x239174: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239178u;
        goto label_239178;
    }
    ctx->pc = 0x239170u;
    SET_GPR_U32(ctx, 31, 0x239178u);
    ctx->pc = 0x239174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239170u;
    // 0x239174: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238748u, 0x239170u, 0x239178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239178u;
label_239178:
    // 0x239178: 0x5040001b  beql        $v0, $zero, . + 4 + (0x1B << 2)
label_23917c:
    if (ctx->pc == 0x23917Cu) {
        ctx->pc = 0x23917Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239178u;
        // 0x23917c: 0x8ec20008  lw          $v0, 0x8($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239180u;
        goto label_239180;
    }
    ctx->pc = 0x239178u;
    {
        const bool branch_taken_0x239178 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x239178) {
            ctx->pc = 0x23917Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239178u;
            // 0x23917c: 0x8ec20008  lw          $v0, 0x8($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2391E8u;
            goto label_2391e8;
        }
    }
    ctx->pc = 0x239180u;
label_239180:
    // 0x239180: 0x1000007b  b           . + 4 + (0x7B << 2)
label_239184:
    if (ctx->pc == 0x239184u) {
        ctx->pc = 0x239184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239180u;
        // 0x239184: 0x9623000c  lhu         $v1, 0xC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239188u;
        goto label_239188;
    }
    ctx->pc = 0x239180u;
    {
        const bool branch_taken_0x239180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239180u;
        // 0x239184: 0x9623000c  lhu         $v1, 0xC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239180) {
            ctx->pc = 0x239370u;
            goto label_239370;
        }
    }
    ctx->pc = 0x239188u;
label_239188:
    // 0x239188: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x239188u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_23918c:
    // 0x23918c: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
label_239190:
    if (ctx->pc == 0x239190u) {
        ctx->pc = 0x239190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23918Cu;
        // 0x239190: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239194u;
        goto label_239194;
    }
    ctx->pc = 0x23918Cu;
    {
        const bool branch_taken_0x23918c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23918c) {
            ctx->pc = 0x239190u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23918Cu;
            // 0x239190: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2391C0u;
            goto label_2391c0;
        }
    }
    ctx->pc = 0x239194u;
label_239194:
    // 0x239194: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x239194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_239198:
    // 0x239198: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x239198u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23919c:
    // 0x23919c: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x23919cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_2391a0:
    // 0x2391a0: 0x40f809  jalr        $v0
label_2391a4:
    if (ctx->pc == 0x2391A4u) {
        ctx->pc = 0x2391A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2391A0u;
        // 0x2391a4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2391A8u;
        goto label_2391a8;
    }
    ctx->pc = 0x2391A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2391A8u);
        ctx->pc = 0x2391A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2391A0u;
        // 0x2391a4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2391A0u, 0x2391A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2391A8u;
label_2391a8:
    // 0x2391a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2391a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2391ac:
    // 0x2391ac: 0x5e00000e  bgtzl       $s0, . + 4 + (0xE << 2)
label_2391b0:
    if (ctx->pc == 0x2391B0u) {
        ctx->pc = 0x2391B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2391ACu;
        // 0x2391b0: 0x8ec20008  lw          $v0, 0x8($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2391B4u;
        goto label_2391b4;
    }
    ctx->pc = 0x2391ACu;
    {
        const bool branch_taken_0x2391ac = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x2391ac) {
            ctx->pc = 0x2391B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2391ACu;
            // 0x2391b0: 0x8ec20008  lw          $v0, 0x8($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2391E8u;
            goto label_2391e8;
        }
    }
    ctx->pc = 0x2391B4u;
label_2391b4:
    // 0x2391b4: 0x1000006e  b           . + 4 + (0x6E << 2)
label_2391b8:
    if (ctx->pc == 0x2391B8u) {
        ctx->pc = 0x2391B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2391B4u;
        // 0x2391b8: 0x9623000c  lhu         $v1, 0xC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2391BCu;
        goto label_2391bc;
    }
    ctx->pc = 0x2391B4u;
    {
        const bool branch_taken_0x2391b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2391B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2391B4u;
        // 0x2391b8: 0x9623000c  lhu         $v1, 0xC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2391b4) {
            ctx->pc = 0x239370u;
            goto label_239370;
        }
    }
    ctx->pc = 0x2391BCu;
label_2391bc:
    // 0x2391bc: 0x0  nop
    ctx->pc = 0x2391bcu;
    // NOP
label_2391c0:
    // 0x2391c0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2391c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2391c4:
    // 0x2391c4: 0xc08e96a  jal         func_23A5A8
label_2391c8:
    if (ctx->pc == 0x2391C8u) {
        ctx->pc = 0x2391C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2391C4u;
        // 0x2391c8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2391CCu;
        goto label_2391cc;
    }
    ctx->pc = 0x2391C4u;
    SET_GPR_U32(ctx, 31, 0x2391CCu);
    ctx->pc = 0x2391C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2391C4u;
    // 0x2391c8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A5A8u, 0x2391C4u, 0x2391CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2391CCu;
label_2391cc:
    // 0x2391cc: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x2391ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2391d0:
    // 0x2391d0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2391d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2391d4:
    // 0x2391d4: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x2391d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_2391d8:
    // 0x2391d8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2391d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_2391dc:
    // 0x2391dc: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x2391dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_2391e0:
    // 0x2391e0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2391e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2391e4:
    // 0x2391e4: 0x8ec20008  lw          $v0, 0x8($s6)
    ctx->pc = 0x2391e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_2391e8:
    // 0x2391e8: 0x2709821  addu        $s3, $s3, $s0
    ctx->pc = 0x2391e8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_2391ec:
    // 0x2391ec: 0x2509023  subu        $s2, $s2, $s0
    ctx->pc = 0x2391ecu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_2391f0:
    // 0x2391f0: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x2391f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_2391f4:
    // 0x2391f4: 0x1440ffb6  bnez        $v0, . + 4 + (-0x4A << 2)
label_2391f8:
    if (ctx->pc == 0x2391F8u) {
        ctx->pc = 0x2391F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2391F4u;
        // 0x2391f8: 0xaec20008  sw          $v0, 0x8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2391FCu;
        goto label_2391fc;
    }
    ctx->pc = 0x2391F4u;
    {
        const bool branch_taken_0x2391f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2391F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2391F4u;
        // 0x2391f8: 0xaec20008  sw          $v0, 0x8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2391f4) {
            ctx->pc = 0x2390D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2390d0;
        }
    }
    ctx->pc = 0x2391FCu;
label_2391fc:
    // 0x2391fc: 0x1000005f  b           . + 4 + (0x5F << 2)
label_239200:
    if (ctx->pc == 0x239200u) {
        ctx->pc = 0x239200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2391FCu;
        // 0x239200: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239204u;
        goto label_239204;
    }
    ctx->pc = 0x2391FCu;
    {
        const bool branch_taken_0x2391fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2391FCu;
        // 0x239200: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2391fc) {
            ctx->pc = 0x23937Cu;
            goto label_23937c;
        }
    }
    ctx->pc = 0x239204u;
label_239204:
    // 0x239204: 0x0  nop
    ctx->pc = 0x239204u;
    // NOP
label_239208:
    // 0x239208: 0x1640000a  bnez        $s2, . + 4 + (0xA << 2)
label_23920c:
    if (ctx->pc == 0x23920Cu) {
        ctx->pc = 0x239210u;
        goto label_239210;
    }
    ctx->pc = 0x239208u;
    {
        const bool branch_taken_0x239208 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x239208) {
            ctx->pc = 0x239234u;
            goto label_239234;
        }
    }
    ctx->pc = 0x239210u;
label_239210:
    // 0x239210: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x239210u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_239214:
    // 0x239214: 0x0  nop
    ctx->pc = 0x239214u;
    // NOP
label_239218:
    // 0x239218: 0x8e920004  lw          $s2, 0x4($s4)
    ctx->pc = 0x239218u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_23921c:
    // 0x23921c: 0x8e930000  lw          $s3, 0x0($s4)
    ctx->pc = 0x23921cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_239220:
    // 0x239220: 0x0  nop
    ctx->pc = 0x239220u;
    // NOP
label_239224:
    // 0x239224: 0x0  nop
    ctx->pc = 0x239224u;
    // NOP
label_239228:
    // 0x239228: 0x0  nop
    ctx->pc = 0x239228u;
    // NOP
label_23922c:
    // 0x23922c: 0x1240fffa  beqz        $s2, . + 4 + (-0x6 << 2)
label_239230:
    if (ctx->pc == 0x239230u) {
        ctx->pc = 0x239230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23922Cu;
        // 0x239230: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239234u;
        goto label_239234;
    }
    ctx->pc = 0x23922Cu;
    {
        const bool branch_taken_0x23922c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x239230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23922Cu;
        // 0x239230: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23922c) {
            ctx->pc = 0x239218u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_239218;
        }
    }
    ctx->pc = 0x239234u;
label_239234:
    // 0x239234: 0x56e0000d  bnel        $s7, $zero, . + 4 + (0xD << 2)
label_239238:
    if (ctx->pc == 0x239238u) {
        ctx->pc = 0x239238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239234u;
        // 0x239238: 0x8e280000  lw          $t0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23923Cu;
        goto label_23923c;
    }
    ctx->pc = 0x239234u;
    {
        const bool branch_taken_0x239234 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x239234) {
            ctx->pc = 0x239238u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239234u;
            // 0x239238: 0x8e280000  lw          $t0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23926Cu;
            goto label_23926c;
        }
    }
    ctx->pc = 0x23923Cu;
label_23923c:
    // 0x23923c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x23923cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_239240:
    // 0x239240: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x239240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_239244:
    // 0x239244: 0xc08e8e0  jal         func_23A380
label_239248:
    if (ctx->pc == 0x239248u) {
        ctx->pc = 0x239248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239244u;
        // 0x239248: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23924Cu;
        goto label_23924c;
    }
    ctx->pc = 0x239244u;
    SET_GPR_U32(ctx, 31, 0x23924Cu);
    ctx->pc = 0x239248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239244u;
    // 0x239248: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A380u, 0x239244u, 0x23924Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23924Cu;
label_23924c:
    // 0x23924c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_239250:
    if (ctx->pc == 0x239250u) {
        ctx->pc = 0x239250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23924Cu;
        // 0x239250: 0x531023  subu        $v0, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239254u;
        goto label_239254;
    }
    ctx->pc = 0x23924Cu;
    {
        const bool branch_taken_0x23924c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x239250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23924Cu;
        // 0x239250: 0x531023  subu        $v0, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23924c) {
            ctx->pc = 0x239260u;
            goto label_239260;
        }
    }
    ctx->pc = 0x239254u;
label_239254:
    // 0x239254: 0x10000003  b           . + 4 + (0x3 << 2)
label_239258:
    if (ctx->pc == 0x239258u) {
        ctx->pc = 0x239258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239254u;
        // 0x239258: 0x24550001  addiu       $s5, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23925Cu;
        goto label_23925c;
    }
    ctx->pc = 0x239254u;
    {
        const bool branch_taken_0x239254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239254u;
        // 0x239258: 0x24550001  addiu       $s5, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239254) {
            ctx->pc = 0x239264u;
            goto label_239264;
        }
    }
    ctx->pc = 0x23925Cu;
label_23925c:
    // 0x23925c: 0x0  nop
    ctx->pc = 0x23925cu;
    // NOP
label_239260:
    // 0x239260: 0x26550001  addiu       $s5, $s2, 0x1
    ctx->pc = 0x239260u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_239264:
    // 0x239264: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x239264u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_239268:
    // 0x239268: 0x8e280000  lw          $t0, 0x0($s1)
    ctx->pc = 0x239268u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_23926c:
    // 0x23926c: 0x255102b  sltu        $v0, $s2, $s5
    ctx->pc = 0x23926cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
label_239270:
    // 0x239270: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x239270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_239274:
    // 0x239274: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x239274u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_239278:
    // 0x239278: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x239278u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_23927c:
    // 0x23927c: 0x2a2280a  movz        $a1, $s5, $v0
    ctx->pc = 0x23927cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 21));
label_239280:
    // 0x239280: 0x8e270014  lw          $a3, 0x14($s1)
    ctx->pc = 0x239280u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_239284:
    // 0x239284: 0x68182b  sltu        $v1, $v1, $t0
    ctx->pc = 0x239284u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_239288:
    // 0x239288: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
label_23928c:
    if (ctx->pc == 0x23928Cu) {
        ctx->pc = 0x23928Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239288u;
        // 0x23928c: 0x878021  addu        $s0, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239290u;
        goto label_239290;
    }
    ctx->pc = 0x239288u;
    {
        const bool branch_taken_0x239288 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23928Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239288u;
        // 0x23928c: 0x878021  addu        $s0, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239288) {
            ctx->pc = 0x2392D0u;
            goto label_2392d0;
        }
    }
    ctx->pc = 0x239290u;
label_239290:
    // 0x239290: 0x205102a  slt         $v0, $s0, $a1
    ctx->pc = 0x239290u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_239294:
    // 0x239294: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_239298:
    if (ctx->pc == 0x239298u) {
        ctx->pc = 0x239298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239294u;
        // 0x239298: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23929Cu;
        goto label_23929c;
    }
    ctx->pc = 0x239294u;
    {
        const bool branch_taken_0x239294 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x239294) {
            ctx->pc = 0x239298u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239294u;
            // 0x239298: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2392D4u;
            goto label_2392d4;
        }
    }
    ctx->pc = 0x23929Cu;
label_23929c:
    // 0x23929c: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x23929cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2392a0:
    // 0x2392a0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2392a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2392a4:
    // 0x2392a4: 0xc08e96a  jal         func_23A5A8
label_2392a8:
    if (ctx->pc == 0x2392A8u) {
        ctx->pc = 0x2392A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2392A4u;
        // 0x2392a8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2392ACu;
        goto label_2392ac;
    }
    ctx->pc = 0x2392A4u;
    SET_GPR_U32(ctx, 31, 0x2392ACu);
    ctx->pc = 0x2392A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2392A4u;
    // 0x2392a8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A5A8u, 0x2392A4u, 0x2392ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2392ACu;
label_2392ac:
    // 0x2392ac: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2392acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2392b0:
    // 0x2392b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2392b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2392b4:
    // 0x2392b4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2392b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_2392b8:
    // 0x2392b8: 0xc08e1d2  jal         func_238748
label_2392bc:
    if (ctx->pc == 0x2392BCu) {
        ctx->pc = 0x2392BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2392B8u;
        // 0x2392bc: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2392C0u;
        goto label_2392c0;
    }
    ctx->pc = 0x2392B8u;
    SET_GPR_U32(ctx, 31, 0x2392C0u);
    ctx->pc = 0x2392BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2392B8u;
    // 0x2392bc: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238748u, 0x2392B8u, 0x2392C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2392C0u;
label_2392c0:
    // 0x2392c0: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_2392c4:
    if (ctx->pc == 0x2392C4u) {
        ctx->pc = 0x2392C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2392C0u;
        // 0x2392c4: 0x2b0a823  subu        $s5, $s5, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2392C8u;
        goto label_2392c8;
    }
    ctx->pc = 0x2392C0u;
    {
        const bool branch_taken_0x2392c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2392C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2392C0u;
        // 0x2392c4: 0x2b0a823  subu        $s5, $s5, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2392c0) {
            ctx->pc = 0x239334u;
            goto label_239334;
        }
    }
    ctx->pc = 0x2392C8u;
label_2392c8:
    // 0x2392c8: 0x10000029  b           . + 4 + (0x29 << 2)
label_2392cc:
    if (ctx->pc == 0x2392CCu) {
        ctx->pc = 0x2392CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2392C8u;
        // 0x2392cc: 0x9623000c  lhu         $v1, 0xC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2392D0u;
        goto label_2392d0;
    }
    ctx->pc = 0x2392C8u;
    {
        const bool branch_taken_0x2392c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2392CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2392C8u;
        // 0x2392cc: 0x9623000c  lhu         $v1, 0xC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2392c8) {
            ctx->pc = 0x239370u;
            goto label_239370;
        }
    }
    ctx->pc = 0x2392D0u;
label_2392d0:
    // 0x2392d0: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x2392d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2392d4:
    // 0x2392d4: 0xb0102a  slt         $v0, $a1, $s0
    ctx->pc = 0x2392d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_2392d8:
    // 0x2392d8: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
label_2392dc:
    if (ctx->pc == 0x2392DCu) {
        ctx->pc = 0x2392DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2392D8u;
        // 0x2392dc: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2392E0u;
        goto label_2392e0;
    }
    ctx->pc = 0x2392D8u;
    {
        const bool branch_taken_0x2392d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2392d8) {
            ctx->pc = 0x2392DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2392D8u;
            // 0x2392dc: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x239308u;
            goto label_239308;
        }
    }
    ctx->pc = 0x2392E0u;
label_2392e0:
    // 0x2392e0: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x2392e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_2392e4:
    // 0x2392e4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2392e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2392e8:
    // 0x2392e8: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x2392e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_2392ec:
    // 0x2392ec: 0x40f809  jalr        $v0
label_2392f0:
    if (ctx->pc == 0x2392F0u) {
        ctx->pc = 0x2392F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2392ECu;
        // 0x2392f0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2392F4u;
        goto label_2392f4;
    }
    ctx->pc = 0x2392ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2392F4u);
        ctx->pc = 0x2392F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2392ECu;
        // 0x2392f0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2392ECu, 0x2392F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2392F4u;
label_2392f4:
    // 0x2392f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2392f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2392f8:
    // 0x2392f8: 0x1e00000e  bgtz        $s0, . + 4 + (0xE << 2)
label_2392fc:
    if (ctx->pc == 0x2392FCu) {
        ctx->pc = 0x2392FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2392F8u;
        // 0x2392fc: 0x2b0a823  subu        $s5, $s5, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239300u;
        goto label_239300;
    }
    ctx->pc = 0x2392F8u;
    {
        const bool branch_taken_0x2392f8 = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x2392FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2392F8u;
        // 0x2392fc: 0x2b0a823  subu        $s5, $s5, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2392f8) {
            ctx->pc = 0x239334u;
            goto label_239334;
        }
    }
    ctx->pc = 0x239300u;
label_239300:
    // 0x239300: 0x1000001b  b           . + 4 + (0x1B << 2)
label_239304:
    if (ctx->pc == 0x239304u) {
        ctx->pc = 0x239304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239300u;
        // 0x239304: 0x9623000c  lhu         $v1, 0xC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239308u;
        goto label_239308;
    }
    ctx->pc = 0x239300u;
    {
        const bool branch_taken_0x239300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239300u;
        // 0x239304: 0x9623000c  lhu         $v1, 0xC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239300) {
            ctx->pc = 0x239370u;
            goto label_239370;
        }
    }
    ctx->pc = 0x239308u;
label_239308:
    // 0x239308: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x239308u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_23930c:
    // 0x23930c: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x23930cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_239310:
    // 0x239310: 0xc08e96a  jal         func_23A5A8
label_239314:
    if (ctx->pc == 0x239314u) {
        ctx->pc = 0x239314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239310u;
        // 0x239314: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239318u;
        goto label_239318;
    }
    ctx->pc = 0x239310u;
    SET_GPR_U32(ctx, 31, 0x239318u);
    ctx->pc = 0x239314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239310u;
    // 0x239314: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A5A8u, 0x239310u, 0x239318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239318u;
label_239318:
    // 0x239318: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x239318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_23931c:
    // 0x23931c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x23931cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_239320:
    // 0x239320: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x239320u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_239324:
    // 0x239324: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x239324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_239328:
    // 0x239328: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x239328u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_23932c:
    // 0x23932c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x23932cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_239330:
    // 0x239330: 0x2b0a823  subu        $s5, $s5, $s0
    ctx->pc = 0x239330u;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
label_239334:
    // 0x239334: 0x56a00007  bnel        $s5, $zero, . + 4 + (0x7 << 2)
label_239338:
    if (ctx->pc == 0x239338u) {
        ctx->pc = 0x239338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239334u;
        // 0x239338: 0x8ec20008  lw          $v0, 0x8($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23933Cu;
        goto label_23933c;
    }
    ctx->pc = 0x239334u;
    {
        const bool branch_taken_0x239334 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x239334) {
            ctx->pc = 0x239338u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239334u;
            // 0x239338: 0x8ec20008  lw          $v0, 0x8($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x239354u;
            goto label_239354;
        }
    }
    ctx->pc = 0x23933Cu;
label_23933c:
    // 0x23933c: 0xc08e1d2  jal         func_238748
label_239340:
    if (ctx->pc == 0x239340u) {
        ctx->pc = 0x239340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23933Cu;
        // 0x239340: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239344u;
        goto label_239344;
    }
    ctx->pc = 0x23933Cu;
    SET_GPR_U32(ctx, 31, 0x239344u);
    ctx->pc = 0x239340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23933Cu;
    // 0x239340: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238748u, 0x23933Cu, 0x239344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239344u;
label_239344:
    // 0x239344: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_239348:
    if (ctx->pc == 0x239348u) {
        ctx->pc = 0x239348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239344u;
        // 0x239348: 0x9623000c  lhu         $v1, 0xC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23934Cu;
        goto label_23934c;
    }
    ctx->pc = 0x239344u;
    {
        const bool branch_taken_0x239344 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x239344) {
            ctx->pc = 0x239348u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239344u;
            // 0x239348: 0x9623000c  lhu         $v1, 0xC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x239370u;
            goto label_239370;
        }
    }
    ctx->pc = 0x23934Cu;
label_23934c:
    // 0x23934c: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x23934cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_239350:
    // 0x239350: 0x8ec20008  lw          $v0, 0x8($s6)
    ctx->pc = 0x239350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_239354:
    // 0x239354: 0x2709821  addu        $s3, $s3, $s0
    ctx->pc = 0x239354u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_239358:
    // 0x239358: 0x2509023  subu        $s2, $s2, $s0
    ctx->pc = 0x239358u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_23935c:
    // 0x23935c: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x23935cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_239360:
    // 0x239360: 0x1440ffa9  bnez        $v0, . + 4 + (-0x57 << 2)
label_239364:
    if (ctx->pc == 0x239364u) {
        ctx->pc = 0x239364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239360u;
        // 0x239364: 0xaec20008  sw          $v0, 0x8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239368u;
        goto label_239368;
    }
    ctx->pc = 0x239360u;
    {
        const bool branch_taken_0x239360 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x239364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239360u;
        // 0x239364: 0xaec20008  sw          $v0, 0x8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239360) {
            ctx->pc = 0x239208u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_239208;
        }
    }
    ctx->pc = 0x239368u;
label_239368:
    // 0x239368: 0x10000004  b           . + 4 + (0x4 << 2)
label_23936c:
    if (ctx->pc == 0x23936Cu) {
        ctx->pc = 0x23936Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239368u;
        // 0x23936c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239370u;
        goto label_239370;
    }
    ctx->pc = 0x239368u;
    {
        const bool branch_taken_0x239368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23936Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239368u;
        // 0x23936c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239368) {
            ctx->pc = 0x23937Cu;
            goto label_23937c;
        }
    }
    ctx->pc = 0x239370u;
label_239370:
    // 0x239370: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x239370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_239374:
    // 0x239374: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x239374u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
label_239378:
    // 0x239378: 0xa623000c  sh          $v1, 0xC($s1)
    ctx->pc = 0x239378u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 3));
label_23937c:
    // 0x23937c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23937cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_239380:
    // 0x239380: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x239380u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_239384:
    // 0x239384: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x239384u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_239388:
    // 0x239388: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x239388u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_23938c:
    // 0x23938c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x23938cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_239390:
    // 0x239390: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x239390u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_239394:
    // 0x239394: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x239394u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_239398:
    // 0x239398: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x239398u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_23939c:
    // 0x23939c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x23939cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    ctx->pc = 0x2393a0u;
}

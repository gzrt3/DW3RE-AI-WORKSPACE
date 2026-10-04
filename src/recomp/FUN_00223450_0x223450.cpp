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

// Function: FUN_00223450
// Address: 0x223450 - 0x223594
void FUN_00223450_0x223450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00223450_0x223450");
#endif

    switch (ctx->pc) {
        case 0x22349cu: goto label_22349c;
        case 0x2234b4u: goto label_2234b4;
        case 0x2234d0u: goto label_2234d0;
        case 0x2234ecu: goto label_2234ec;
        case 0x223508u: goto label_223508;
        case 0x223554u: goto label_223554;
        case 0x22356cu: goto label_22356c;
        case 0x223584u: goto label_223584;
        default: break;
    }

    ctx->pc = 0x223450u;

    // 0x223450: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x223450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x223454: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x223454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x223458: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x223458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22345c: 0x10830047  beq         $a0, $v1, . + 4 + (0x47 << 2)
    ctx->pc = 0x22345Cu;
    {
        const bool branch_taken_0x22345c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x223460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22345Cu;
        // 0x223460: 0xaf8092e0  sw          $zero, -0x6D20($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939360), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22345c) {
            ctx->pc = 0x22357Cu;
            goto label_22357c;
        }
    }
    ctx->pc = 0x223464u;
    // 0x223464: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x223464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x223468: 0x1083003e  beq         $a0, $v1, . + 4 + (0x3E << 2)
    ctx->pc = 0x223468u;
    {
        const bool branch_taken_0x223468 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x22346Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223468u;
        // 0x22346c: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223468) {
            ctx->pc = 0x223564u;
            goto label_223564;
        }
    }
    ctx->pc = 0x223470u;
    // 0x223470: 0x10830029  beq         $a0, $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x223470u;
    {
        const bool branch_taken_0x223470 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x223474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223470u;
        // 0x223474: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223470) {
            ctx->pc = 0x223518u;
            goto label_223518;
        }
    }
    ctx->pc = 0x223478u;
    // 0x223478: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x223478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x22347c: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x22347Cu;
    {
        const bool branch_taken_0x22347c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x223480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22347Cu;
        // 0x223480: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22347c) {
            ctx->pc = 0x2234ACu;
            goto label_2234ac;
        }
    }
    ctx->pc = 0x223484u;
    // 0x223484: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x223484u;
    {
        const bool branch_taken_0x223484 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x223484) {
            ctx->pc = 0x223494u;
            goto label_223494;
        }
    }
    ctx->pc = 0x22348Cu;
    // 0x22348c: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x22348Cu;
    {
        const bool branch_taken_0x22348c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22348Cu;
        // 0x223490: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22348c) {
            ctx->pc = 0x223594u;
            return;
        }
    }
    ctx->pc = 0x223494u;
label_223494:
    // 0x223494: 0xc059ec8  jal         func_167B20
    ctx->pc = 0x223494u;
    SET_GPR_U32(ctx, 31, 0x22349Cu);
    ctx->pc = 0x223498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223494u;
    // 0x223498: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x167B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167B20u, 0x223494u, 0x22349Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22349Cu;
label_22349c:
    // 0x22349c: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x22349Cu;
    {
        const bool branch_taken_0x22349c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2234A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22349Cu;
        // 0x2234a0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22349c) {
            ctx->pc = 0x223590u;
            goto label_223590;
        }
    }
    ctx->pc = 0x2234A4u;
    // 0x2234a4: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x2234A4u;
    {
        const bool branch_taken_0x2234a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2234A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2234A4u;
        // 0x2234a8: 0xaf8392e0  sw          $v1, -0x6D20($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939360), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2234a4) {
            ctx->pc = 0x223590u;
            goto label_223590;
        }
    }
    ctx->pc = 0x2234ACu;
label_2234ac:
    // 0x2234ac: 0xc059ec8  jal         func_167B20
    ctx->pc = 0x2234ACu;
    SET_GPR_U32(ctx, 31, 0x2234B4u);
    ctx->pc = 0x2234B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2234ACu;
    // 0x2234b0: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x167B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167B20u, 0x2234ACu, 0x2234B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2234B4u;
label_2234b4:
    // 0x2234b4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2234B4u;
    {
        const bool branch_taken_0x2234b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2234B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2234B4u;
        // 0x2234b8: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2234b4) {
            ctx->pc = 0x2234C8u;
            goto label_2234c8;
        }
    }
    ctx->pc = 0x2234BCu;
    // 0x2234bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2234bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2234c0: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x2234C0u;
    {
        const bool branch_taken_0x2234c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2234C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2234C0u;
        // 0x2234c4: 0xaf8392e0  sw          $v1, -0x6D20($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939360), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2234c0) {
            ctx->pc = 0x223590u;
            goto label_223590;
        }
    }
    ctx->pc = 0x2234C8u;
label_2234c8:
    // 0x2234c8: 0xc059ec8  jal         func_167B20
    ctx->pc = 0x2234C8u;
    SET_GPR_U32(ctx, 31, 0x2234D0u);
    ctx->pc = 0x167B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167B20u, 0x2234C8u, 0x2234D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2234D0u;
label_2234d0:
    // 0x2234d0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2234D0u;
    {
        const bool branch_taken_0x2234d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2234D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2234D0u;
        // 0x2234d4: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2234d0) {
            ctx->pc = 0x2234E4u;
            goto label_2234e4;
        }
    }
    ctx->pc = 0x2234D8u;
    // 0x2234d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2234d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2234dc: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x2234DCu;
    {
        const bool branch_taken_0x2234dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2234E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2234DCu;
        // 0x2234e0: 0xaf8392e0  sw          $v1, -0x6D20($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939360), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2234dc) {
            ctx->pc = 0x223590u;
            goto label_223590;
        }
    }
    ctx->pc = 0x2234E4u;
label_2234e4:
    // 0x2234e4: 0xc059ec8  jal         func_167B20
    ctx->pc = 0x2234E4u;
    SET_GPR_U32(ctx, 31, 0x2234ECu);
    ctx->pc = 0x167B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167B20u, 0x2234E4u, 0x2234ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2234ECu;
label_2234ec:
    // 0x2234ec: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2234ECu;
    {
        const bool branch_taken_0x2234ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2234F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2234ECu;
        // 0x2234f0: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2234ec) {
            ctx->pc = 0x223500u;
            goto label_223500;
        }
    }
    ctx->pc = 0x2234F4u;
    // 0x2234f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2234f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2234f8: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x2234F8u;
    {
        const bool branch_taken_0x2234f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2234FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2234F8u;
        // 0x2234fc: 0xaf8392e0  sw          $v1, -0x6D20($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939360), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2234f8) {
            ctx->pc = 0x223590u;
            goto label_223590;
        }
    }
    ctx->pc = 0x223500u;
label_223500:
    // 0x223500: 0xc059ec8  jal         func_167B20
    ctx->pc = 0x223500u;
    SET_GPR_U32(ctx, 31, 0x223508u);
    ctx->pc = 0x167B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167B20u, 0x223500u, 0x223508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223508u;
label_223508:
    // 0x223508: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x223508u;
    {
        const bool branch_taken_0x223508 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22350Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223508u;
        // 0x22350c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223508) {
            ctx->pc = 0x223590u;
            goto label_223590;
        }
    }
    ctx->pc = 0x223510u;
    // 0x223510: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x223510u;
    {
        const bool branch_taken_0x223510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223510u;
        // 0x223514: 0xaf8392e0  sw          $v1, -0x6D20($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939360), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223510) {
            ctx->pc = 0x223590u;
            goto label_223590;
        }
    }
    ctx->pc = 0x223518u;
label_223518:
    // 0x223518: 0x24030049  addiu       $v1, $zero, 0x49
    ctx->pc = 0x223518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
    // 0x22351c: 0x9024490c  lbu         $a0, 0x490C($at)
    ctx->pc = 0x22351cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18700)));
    // 0x223520: 0x14830007  bne         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x223520u;
    {
        const bool branch_taken_0x223520 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x223520) {
            ctx->pc = 0x223540u;
            goto label_223540;
        }
    }
    ctx->pc = 0x223528u;
    // 0x223528: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x223528u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x22352c: 0x902350b2  lbu         $v1, 0x50B2($at)
    ctx->pc = 0x22352cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x3650B2u));
    // 0x223530: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x223530u;
    {
        const bool branch_taken_0x223530 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x223534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223530u;
        // 0x223534: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223530) {
            ctx->pc = 0x223590u;
            goto label_223590;
        }
    }
    ctx->pc = 0x223538u;
    // 0x223538: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x223538u;
    {
        const bool branch_taken_0x223538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22353Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223538u;
        // 0x22353c: 0xaf8392e0  sw          $v1, -0x6D20($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939360), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223538) {
            ctx->pc = 0x223590u;
            goto label_223590;
        }
    }
    ctx->pc = 0x223540u;
label_223540:
    // 0x223540: 0x8f83863c  lw          $v1, -0x79C4($gp)
    ctx->pc = 0x223540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936124)));
    // 0x223544: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x223544u;
    {
        const bool branch_taken_0x223544 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x223548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223544u;
        // 0x223548: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223544) {
            ctx->pc = 0x223590u;
            goto label_223590;
        }
    }
    ctx->pc = 0x22354Cu;
    // 0x22354c: 0xc059ec8  jal         func_167B20
    ctx->pc = 0x22354Cu;
    SET_GPR_U32(ctx, 31, 0x223554u);
    ctx->pc = 0x167B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167B20u, 0x22354Cu, 0x223554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223554u;
label_223554:
    // 0x223554: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x223554u;
    {
        const bool branch_taken_0x223554 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x223558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223554u;
        // 0x223558: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223554) {
            ctx->pc = 0x223590u;
            goto label_223590;
        }
    }
    ctx->pc = 0x22355Cu;
    // 0x22355c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x22355Cu;
    {
        const bool branch_taken_0x22355c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22355Cu;
        // 0x223560: 0xaf8392e0  sw          $v1, -0x6D20($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939360), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22355c) {
            ctx->pc = 0x223590u;
            goto label_223590;
        }
    }
    ctx->pc = 0x223564u;
label_223564:
    // 0x223564: 0xc059ec8  jal         func_167B20
    ctx->pc = 0x223564u;
    SET_GPR_U32(ctx, 31, 0x22356Cu);
    ctx->pc = 0x223568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223564u;
    // 0x223568: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x167B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167B20u, 0x223564u, 0x22356Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22356Cu;
label_22356c:
    // 0x22356c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x22356Cu;
    {
        const bool branch_taken_0x22356c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x223570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22356Cu;
        // 0x223570: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22356c) {
            ctx->pc = 0x223590u;
            goto label_223590;
        }
    }
    ctx->pc = 0x223574u;
    // 0x223574: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x223574u;
    {
        const bool branch_taken_0x223574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223574u;
        // 0x223578: 0xaf8392e0  sw          $v1, -0x6D20($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939360), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223574) {
            ctx->pc = 0x223590u;
            goto label_223590;
        }
    }
    ctx->pc = 0x22357Cu;
label_22357c:
    // 0x22357c: 0xc059ec8  jal         func_167B20
    ctx->pc = 0x22357Cu;
    SET_GPR_U32(ctx, 31, 0x223584u);
    ctx->pc = 0x223580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22357Cu;
    // 0x223580: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x167B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167B20u, 0x22357Cu, 0x223584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223584u;
label_223584:
    // 0x223584: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x223584u;
    {
        const bool branch_taken_0x223584 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x223588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223584u;
        // 0x223588: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223584) {
            ctx->pc = 0x223590u;
            goto label_223590;
        }
    }
    ctx->pc = 0x22358Cu;
    // 0x22358c: 0xaf8392e0  sw          $v1, -0x6D20($gp)
    ctx->pc = 0x22358cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939360), GPR_U32(ctx, 3));
label_223590:
    // 0x223590: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x223590u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x223594u;
}

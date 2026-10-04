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

// Function: FUN_00138700
// Address: 0x138700 - 0x138790
void FUN_00138700_0x138700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00138700_0x138700");
#endif

    ctx->pc = 0x138700u;

    // 0x138700: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x138700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x138704: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x138704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x138708: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x138708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13870c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x13870cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x138710: 0x8c273ffc  lw          $a3, 0x3FFC($at)
    ctx->pc = 0x138710u;
    SET_GPR_S32(ctx, 7, (int32_t)runtime->Load32(rdram, ctx, 0x70003FFCu));
    // 0x138714: 0x24421e00  addiu       $v0, $v0, 0x1E00
    ctx->pc = 0x138714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7680));
    // 0x138718: 0x71940  sll         $v1, $a3, 5
    ctx->pc = 0x138718u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
    // 0x13871c: 0x28810002  slti        $at, $a0, 0x2
    ctx->pc = 0x13871cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x138720: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x138720u;
    {
        const bool branch_taken_0x138720 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x138724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138720u;
        // 0x138724: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138720) {
            ctx->pc = 0x138758u;
            goto label_138758;
        }
    }
    ctx->pc = 0x138728u;
    // 0x138728: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x138728u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x13872c: 0x3c030031  lui         $v1, 0x31
    ctx->pc = 0x13872cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49 << 16));
    // 0x138730: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x138730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x138734: 0x24635690  addiu       $v1, $v1, 0x5690
    ctx->pc = 0x138734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22160));
    // 0x138738: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x138738u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x13873c: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x13873cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x138740: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x138740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x138744: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x138744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x138748: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x138748u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x13874c: 0x24820000  addiu       $v0, $a0, 0x0
    ctx->pc = 0x13874cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 0));
    // 0x138750: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x138750u;
    {
        const bool branch_taken_0x138750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138750u;
        // 0x138754: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138750) {
            ctx->pc = 0x138770u;
            goto label_138770;
        }
    }
    ctx->pc = 0x138758u;
label_138758:
    // 0x138758: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x138758u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x13875c: 0x3c020031  lui         $v0, 0x31
    ctx->pc = 0x13875cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49 << 16));
    // 0x138760: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x138760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x138764: 0x244258d0  addiu       $v0, $v0, 0x58D0
    ctx->pc = 0x138764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22736));
    // 0x138768: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x138768u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x13876c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13876cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_138770:
    // 0x138770: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x138770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138774: 0xa045007b  sb          $a1, 0x7B($v0)
    ctx->pc = 0x138774u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 123), (uint8_t)GPR_U32(ctx, 5));
    // 0x138778: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x138778u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13877c: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x13877cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x138780: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x138780u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138784: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x138784u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138788: 0xc066c72  jal         func_19B1C8
    ctx->pc = 0x138788u;
    SET_GPR_U32(ctx, 31, 0x138790u);
    ctx->pc = 0x13878Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138788u;
    // 0x13878c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x138788u, 0x138790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138790u;
}

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

// Function: FUN_0023f430
// Address: 0x23f430 - 0x23f4b0
void FUN_0023f430_0x23f430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0023f430_0x23f430");
#endif

    switch (ctx->pc) {
        case 0x23f498u: goto label_23f498;
        case 0x23f4acu: goto label_23f4ac;
        default: break;
    }

    ctx->pc = 0x23f430u;

    // 0x23f430: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23f430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23f434: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23f434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23f438: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23F438u;
    {
        const bool branch_taken_0x23f438 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F438u;
        // 0x23f43c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f438) {
            ctx->pc = 0x23F454u;
            goto label_23f454;
        }
    }
    ctx->pc = 0x23F440u;
    // 0x23f440: 0x2c810005  sltiu       $at, $a0, 0x5
    ctx->pc = 0x23f440u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x23f444: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x23F444u;
    {
        const bool branch_taken_0x23f444 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F444u;
        // 0x23f448: 0x2c830005  sltiu       $v1, $a0, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f444) {
            ctx->pc = 0x23F458u;
            goto label_23f458;
        }
    }
    ctx->pc = 0x23F44Cu;
    // 0x23f44c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x23F44Cu;
    {
        const bool branch_taken_0x23f44c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F44Cu;
        // 0x23f450: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f44c) {
            ctx->pc = 0x23F470u;
            goto label_23f470;
        }
    }
    ctx->pc = 0x23F454u;
label_23f454:
    // 0x23f454: 0x2c830005  sltiu       $v1, $a0, 0x5
    ctx->pc = 0x23f454u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_23f458:
    // 0x23f458: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x23F458u;
    {
        const bool branch_taken_0x23f458 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23F45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F458u;
        // 0x23f45c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f458) {
            ctx->pc = 0x23F470u;
            goto label_23f470;
        }
    }
    ctx->pc = 0x23F460u;
    // 0x23f460: 0x2c810006  sltiu       $at, $a0, 0x6
    ctx->pc = 0x23f460u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x23f464: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x23F464u;
    {
        const bool branch_taken_0x23f464 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x23f464) {
            ctx->pc = 0x23F470u;
            goto label_23f470;
        }
    }
    ctx->pc = 0x23F46Cu;
    // 0x23f46c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x23f46cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_23f470:
    // 0x23f470: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x23f470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x23f474: 0x10a3000d  beq         $a1, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x23F474u;
    {
        const bool branch_taken_0x23f474 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x23f474) {
            ctx->pc = 0x23F4ACu;
            goto label_23f4ac;
        }
    }
    ctx->pc = 0x23F47Cu;
    // 0x23f47c: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x23f47cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
    // 0x23f480: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x23f480u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x23f484: 0x24420140  addiu       $v0, $v0, 0x140
    ctx->pc = 0x23f484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 320));
    // 0x23f488: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23f488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23f48c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x23f48cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23f490: 0xc041424  jal         func_105090
    ctx->pc = 0x23F490u;
    SET_GPR_U32(ctx, 31, 0x23F498u);
    ctx->pc = 0x23F494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F490u;
    // 0x23f494: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105090u, 0x23F490u, 0x23F498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F498u;
label_23f498:
    // 0x23f498: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x23f498u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f49c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x23F49Cu;
    {
        const bool branch_taken_0x23f49c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F49Cu;
        // 0x23f4a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f49c) {
            ctx->pc = 0x23F4ACu;
            goto label_23f4ac;
        }
    }
    ctx->pc = 0x23F4A4u;
    // 0x23f4a4: 0xc0660bc  jal         func_1982F0
    ctx->pc = 0x23F4A4u;
    SET_GPR_U32(ctx, 31, 0x23F4ACu);
    ctx->pc = 0x1982F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1982F0u, 0x23F4A4u, 0x23F4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F4ACu;
label_23f4ac:
    // 0x23f4ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23f4acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x23f4b0u;
}

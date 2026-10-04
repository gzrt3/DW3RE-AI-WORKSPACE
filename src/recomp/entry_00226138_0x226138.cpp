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

// Function: entry_00226138
// Address: 0x226138 - 0x22616c
void entry_00226138_0x226138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00226138_0x226138");
#endif

    ctx->pc = 0x226138u;

    // 0x226138: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x226138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x22613c: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x22613Cu;
    {
        const bool branch_taken_0x22613c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x226140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22613Cu;
        // 0x226140: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22613c) {
            ctx->pc = 0x226170u;
            return;
        }
    }
    ctx->pc = 0x226144u;
    // 0x226144: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x226144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x226148: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x226148u;
    {
        const bool branch_taken_0x226148 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x22614Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226148u;
        // 0x22614c: 0x24020023  addiu       $v0, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226148) {
            ctx->pc = 0x22616Cu;
            return;
        }
    }
    ctx->pc = 0x226150u;
    // 0x226150: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x226150u;
    {
        const bool branch_taken_0x226150 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x226150) {
            ctx->pc = 0x22616Cu;
            return;
        }
    }
    ctx->pc = 0x226158u;
    // 0x226158: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x226158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x22615c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22615Cu;
    {
        const bool branch_taken_0x22615c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x226160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22615Cu;
        // 0x226160: 0x24020024  addiu       $v0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22615c) {
            ctx->pc = 0x22616Cu;
            return;
        }
    }
    ctx->pc = 0x226164u;
    // 0x226164: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x226164u;
    {
        const bool branch_taken_0x226164 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x226164) {
            ctx->pc = 0x226178u;
            return;
        }
    }
    ctx->pc = 0x22616Cu;
}

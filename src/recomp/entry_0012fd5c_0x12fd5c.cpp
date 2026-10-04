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

// Function: entry_0012fd5c
// Address: 0x12fd5c - 0x12fd98
void entry_0012fd5c_0x12fd5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012fd5c_0x12fd5c");
#endif

    ctx->pc = 0x12fd5cu;

    // 0x12fd5c: 0x24030048  addiu       $v1, $zero, 0x48
    ctx->pc = 0x12fd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x12fd60: 0x9024490c  lbu         $a0, 0x490C($at)
    ctx->pc = 0x12fd60u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18700)));
    // 0x12fd64: 0x1083004a  beq         $a0, $v1, . + 4 + (0x4A << 2)
    ctx->pc = 0x12FD64u;
    {
        const bool branch_taken_0x12fd64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x12FD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FD64u;
        // 0x12fd68: 0x2483ffb6  addiu       $v1, $a0, -0x4A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967222));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fd64) {
            ctx->pc = 0x12FE90u;
            return;
        }
    }
    ctx->pc = 0x12FD6Cu;
    // 0x12fd6c: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x12fd6cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x12fd70: 0x14200047  bnez        $at, . + 4 + (0x47 << 2)
    ctx->pc = 0x12FD70u;
    {
        const bool branch_taken_0x12fd70 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x12fd70) {
            ctx->pc = 0x12FE90u;
            return;
        }
    }
    ctx->pc = 0x12FD78u;
    // 0x12fd78: 0x24030049  addiu       $v1, $zero, 0x49
    ctx->pc = 0x12fd78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
    // 0x12fd7c: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x12FD7Cu;
    {
        const bool branch_taken_0x12fd7c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x12FD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FD7Cu;
        // 0x12fd80: 0x3c010036  lui         $at, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fd7c) {
            ctx->pc = 0x12FD98u;
            return;
        }
    }
    ctx->pc = 0x12FD84u;
    // 0x12fd84: 0x902350b2  lbu         $v1, 0x50B2($at)
    ctx->pc = 0x12fd84u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 20658)));
    // 0x12fd88: 0x10600041  beqz        $v1, . + 4 + (0x41 << 2)
    ctx->pc = 0x12FD88u;
    {
        const bool branch_taken_0x12fd88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12fd88) {
            ctx->pc = 0x12FE90u;
            return;
        }
    }
    ctx->pc = 0x12FD90u;
    // 0x12fd90: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x12FD90u;
    {
        const bool branch_taken_0x12fd90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FD90u;
        // 0x12fd94: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fd90) {
            ctx->pc = 0x12FDACu;
            return;
        }
    }
    ctx->pc = 0x12FD98u;
}

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

// Function: entry_00167c1c
// Address: 0x167c1c - 0x167c58
void entry_00167c1c_0x167c1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00167c1c_0x167c1c");
#endif

    ctx->pc = 0x167c1cu;

    // 0x167c1c: 0x0  nop
    ctx->pc = 0x167c1cu;
    // NOP
    // 0x167c20: 0x9203004e  lbu         $v1, 0x4E($s0)
    ctx->pc = 0x167c20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 78)));
    // 0x167c24: 0x10600058  beqz        $v1, . + 4 + (0x58 << 2)
    ctx->pc = 0x167C24u;
    {
        const bool branch_taken_0x167c24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x167C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167C24u;
        // 0x167c28: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167c24) {
            ctx->pc = 0x167D88u;
            return;
        }
    }
    ctx->pc = 0x167C2Cu;
    // 0x167c2c: 0x10620056  beq         $v1, $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x167C2Cu;
    {
        const bool branch_taken_0x167c2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x167C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167C2Cu;
        // 0x167c30: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167c2c) {
            ctx->pc = 0x167D88u;
            return;
        }
    }
    ctx->pc = 0x167C34u;
    // 0x167c34: 0x10640011  beq         $v1, $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x167C34u;
    {
        const bool branch_taken_0x167c34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x167C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167C34u;
        // 0x167c38: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167c34) {
            ctx->pc = 0x167C7Cu;
            return;
        }
    }
    ctx->pc = 0x167C3Cu;
    // 0x167c3c: 0x10620052  beq         $v1, $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x167C3Cu;
    {
        const bool branch_taken_0x167c3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x167c3c) {
            ctx->pc = 0x167D88u;
            return;
        }
    }
    ctx->pc = 0x167C44u;
    // 0x167c44: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x167c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x167c48: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x167C48u;
    {
        const bool branch_taken_0x167c48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x167c48) {
            ctx->pc = 0x167C58u;
            return;
        }
    }
    ctx->pc = 0x167C50u;
    // 0x167c50: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x167C50u;
    {
        const bool branch_taken_0x167c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x167c50) {
            ctx->pc = 0x167D88u;
            return;
        }
    }
    ctx->pc = 0x167C58u;
}

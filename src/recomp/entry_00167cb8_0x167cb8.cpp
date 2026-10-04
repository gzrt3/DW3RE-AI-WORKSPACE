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

// Function: entry_00167cb8
// Address: 0x167cb8 - 0x167cf4
void entry_00167cb8_0x167cb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00167cb8_0x167cb8");
#endif

    ctx->pc = 0x167cb8u;

    // 0x167cb8: 0x9203004e  lbu         $v1, 0x4E($s0)
    ctx->pc = 0x167cb8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 78)));
    // 0x167cbc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x167cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x167cc0: 0x10620031  beq         $v1, $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x167CC0u;
    {
        const bool branch_taken_0x167cc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x167CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167CC0u;
        // 0x167cc4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167cc0) {
            ctx->pc = 0x167D88u;
            return;
        }
    }
    ctx->pc = 0x167CC8u;
    // 0x167cc8: 0x1062002f  beq         $v1, $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x167CC8u;
    {
        const bool branch_taken_0x167cc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x167cc8) {
            ctx->pc = 0x167D88u;
            return;
        }
    }
    ctx->pc = 0x167CD0u;
    // 0x167cd0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x167cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x167cd4: 0x1062001f  beq         $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x167CD4u;
    {
        const bool branch_taken_0x167cd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x167CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167CD4u;
        // 0x167cd8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167cd4) {
            ctx->pc = 0x167D54u;
            return;
        }
    }
    ctx->pc = 0x167CDCu;
    // 0x167cdc: 0x1064000f  beq         $v1, $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x167CDCu;
    {
        const bool branch_taken_0x167cdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x167cdc) {
            ctx->pc = 0x167D1Cu;
            return;
        }
    }
    ctx->pc = 0x167CE4u;
    // 0x167ce4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x167CE4u;
    {
        const bool branch_taken_0x167ce4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x167ce4) {
            ctx->pc = 0x167CF4u;
            return;
        }
    }
    ctx->pc = 0x167CECu;
    // 0x167cec: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x167CECu;
    {
        const bool branch_taken_0x167cec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x167cec) {
            ctx->pc = 0x167D88u;
            return;
        }
    }
    ctx->pc = 0x167CF4u;
}

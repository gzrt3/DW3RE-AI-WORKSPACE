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

// Function: entry_001ef6a8
// Address: 0x1ef6a8 - 0x1ef6cc
void entry_001ef6a8_0x1ef6a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ef6a8_0x1ef6a8");
#endif

    ctx->pc = 0x1ef6a8u;

    // 0x1ef6a8: 0x1483000c  bne         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1EF6A8u;
    {
        const bool branch_taken_0x1ef6a8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1ef6a8) {
            ctx->pc = 0x1EF6DCu;
            return;
        }
    }
    ctx->pc = 0x1EF6B0u;
    // 0x1ef6b0: 0x8f848f54  lw          $a0, -0x70AC($gp)
    ctx->pc = 0x1ef6b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938452)));
    // 0x1ef6b4: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x1ef6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1ef6b8: 0x4082a  slt         $at, $zero, $a0
    ctx->pc = 0x1ef6b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1ef6bc: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EF6BCu;
    {
        const bool branch_taken_0x1ef6bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF6BCu;
        // 0x1ef6c0: 0xaf838f54  sw          $v1, -0x70AC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938452), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef6bc) {
            ctx->pc = 0x1EF6CCu;
            return;
        }
    }
    ctx->pc = 0x1EF6C4u;
    // 0x1ef6c4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1EF6C4u;
    {
        const bool branch_taken_0x1ef6c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF6C4u;
        // 0x1ef6c8: 0x8f838f54  lw          $v1, -0x70AC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938452)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef6c4) {
            ctx->pc = 0x1EF6D0u;
            return;
        }
    }
    ctx->pc = 0x1EF6CCu;
}

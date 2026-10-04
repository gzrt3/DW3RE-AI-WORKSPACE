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

// Function: entry_001122a8
// Address: 0x1122a8 - 0x1122d8
void entry_001122a8_0x1122a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001122a8_0x1122a8");
#endif

    ctx->pc = 0x1122a8u;

    // 0x1122a8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1122A8u;
    {
        const bool branch_taken_0x1122a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1122a8) {
            ctx->pc = 0x1122DCu;
            return;
        }
    }
    ctx->pc = 0x1122B0u;
    // 0x1122b0: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1122b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1122b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1122b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1122b8: 0x90840015  lbu         $a0, 0x15($a0)
    ctx->pc = 0x1122b8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 21)));
    // 0x1122bc: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1122BCu;
    {
        const bool branch_taken_0x1122bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1122C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1122BCu;
        // 0x1122c0: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1122bc) {
            ctx->pc = 0x1122D8u;
            return;
        }
    }
    ctx->pc = 0x1122C4u;
    // 0x1122c4: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1122C4u;
    {
        const bool branch_taken_0x1122c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1122c4) {
            ctx->pc = 0x1122D8u;
            return;
        }
    }
    ctx->pc = 0x1122CCu;
    // 0x1122cc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1122ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1122d0: 0x14830002  bne         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1122D0u;
    {
        const bool branch_taken_0x1122d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1122d0) {
            ctx->pc = 0x1122DCu;
            return;
        }
    }
    ctx->pc = 0x1122D8u;
}

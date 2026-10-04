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

// Function: entry_001807ac
// Address: 0x1807ac - 0x1807d8
void entry_001807ac_0x1807ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001807ac_0x1807ac");
#endif

    ctx->pc = 0x1807acu;

    // 0x1807ac: 0xdf838810  ld          $v1, -0x77F0($gp)
    ctx->pc = 0x1807acu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294936592)));
    // 0x1807b0: 0x8f8287b0  lw          $v0, -0x7850($gp)
    ctx->pc = 0x1807b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936496)));
    // 0x1807b4: 0xfc430180  sd          $v1, 0x180($v0)
    ctx->pc = 0x1807b4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 384), GPR_U64(ctx, 3));
    // 0x1807b8: 0xdf838810  ld          $v1, -0x77F0($gp)
    ctx->pc = 0x1807b8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294936592)));
    // 0x1807bc: 0x8f8287b0  lw          $v0, -0x7850($gp)
    ctx->pc = 0x1807bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936496)));
    // 0x1807c0: 0xfc4302f0  sd          $v1, 0x2F0($v0)
    ctx->pc = 0x1807c0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 752), GPR_U64(ctx, 3));
    // 0x1807c4: 0x8f8287a0  lw          $v0, -0x7860($gp)
    ctx->pc = 0x1807c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936480)));
    // 0x1807c8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1807c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1807cc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1807CCu;
    {
        const bool branch_taken_0x1807cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1807D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1807CCu;
        // 0x1807d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1807cc) {
            ctx->pc = 0x1807D8u;
            return;
        }
    }
    ctx->pc = 0x1807D4u;
    // 0x1807d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1807d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1807d8u;
}

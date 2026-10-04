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

// Function: entry_00116324
// Address: 0x116324 - 0x116340
void entry_00116324_0x116324(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116324_0x116324");
#endif

    ctx->pc = 0x116324u;

    // 0x116324: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x116324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x116328: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x116328u;
    {
        const bool branch_taken_0x116328 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x11632Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116328u;
        // 0x11632c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116328) {
            ctx->pc = 0x116340u;
            return;
        }
    }
    ctx->pc = 0x116330u;
    // 0x116330: 0x3c100031  lui         $s0, 0x31
    ctx->pc = 0x116330u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)49 << 16));
    // 0x116334: 0xa22001a1  sb          $zero, 0x1A1($s1)
    ctx->pc = 0x116334u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 417), (uint8_t)GPR_U32(ctx, 0));
    // 0x116338: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x116338u;
    {
        const bool branch_taken_0x116338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11633Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116338u;
        // 0x11633c: 0x2610a4a0  addiu       $s0, $s0, -0x5B60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294943904));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116338) {
            ctx->pc = 0x1163F0u;
            return;
        }
    }
    ctx->pc = 0x116340u;
}

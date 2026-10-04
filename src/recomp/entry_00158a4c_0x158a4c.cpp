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

// Function: entry_00158a4c
// Address: 0x158a4c - 0x158a64
void entry_00158a4c_0x158a4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00158a4c_0x158a4c");
#endif

    ctx->pc = 0x158a4cu;

    // 0x158a4c: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x158a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x158a50: 0x84244af4  lh          $a0, 0x4AF4($at)
    ctx->pc = 0x158a50u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19188)));
    // 0x158a54: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x158A54u;
    {
        const bool branch_taken_0x158a54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x158a54) {
            ctx->pc = 0x158A64u;
            return;
        }
    }
    ctx->pc = 0x158A5Cu;
    // 0x158a5c: 0x14850011  bne         $a0, $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x158A5Cu;
    {
        const bool branch_taken_0x158a5c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x158A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158A5Cu;
        // 0x158a60: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158a5c) {
            ctx->pc = 0x158AA4u;
            return;
        }
    }
    ctx->pc = 0x158A64u;
}

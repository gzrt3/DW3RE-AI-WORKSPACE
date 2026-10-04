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

// Function: entry_0021ac70
// Address: 0x21ac70 - 0x21ac94
void entry_0021ac70_0x21ac70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021ac70_0x21ac70");
#endif

    ctx->pc = 0x21ac70u;

    // 0x21ac70: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x21ac70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21ac74: 0x14c2000b  bne         $a2, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x21AC74u;
    {
        const bool branch_taken_0x21ac74 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x21AC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AC74u;
        // 0x21ac78: 0x8f8392a8  lw          $v1, -0x6D58($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ac74) {
            ctx->pc = 0x21ACA4u;
            return;
        }
    }
    ctx->pc = 0x21AC7Cu;
    // 0x21ac7c: 0x14e00005  bnez        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x21AC7Cu;
    {
        const bool branch_taken_0x21ac7c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x21ac7c) {
            ctx->pc = 0x21AC94u;
            return;
        }
    }
    ctx->pc = 0x21AC84u;
    // 0x21ac84: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x21ac84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x21ac88: 0xdc228ce8  ld          $v0, -0x7318($at)
    ctx->pc = 0x21ac88u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x588CE8u));
    // 0x21ac8c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x21AC8Cu;
    {
        const bool branch_taken_0x21ac8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21AC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AC8Cu;
        // 0x21ac90: 0xfca20110  sd          $v0, 0x110($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 272), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ac8c) {
            ctx->pc = 0x21ACA4u;
            return;
        }
    }
    ctx->pc = 0x21AC94u;
}

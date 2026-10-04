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

// Function: entry_0021cc9c
// Address: 0x21cc9c - 0x21ccb4
void entry_0021cc9c_0x21cc9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021cc9c_0x21cc9c");
#endif

    ctx->pc = 0x21cc9cu;

    // 0x21cc9c: 0x8fa4004c  lw          $a0, 0x4C($sp)
    ctx->pc = 0x21cc9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x21cca0: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x21cca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x21cca4: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21CCA4u;
    {
        const bool branch_taken_0x21cca4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x21CCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CCA4u;
        // 0x21cca8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cca4) {
            ctx->pc = 0x21CCB4u;
            return;
        }
    }
    ctx->pc = 0x21CCACu;
    // 0x21ccac: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x21CCACu;
    {
        const bool branch_taken_0x21ccac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21ccac) {
            ctx->pc = 0x21CD70u;
            return;
        }
    }
    ctx->pc = 0x21CCB4u;
}

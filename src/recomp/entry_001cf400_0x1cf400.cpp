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

// Function: entry_001cf400
// Address: 0x1cf400 - 0x1cf42c
void entry_001cf400_0x1cf400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cf400_0x1cf400");
#endif

    ctx->pc = 0x1cf400u;

    // 0x1cf400: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1cf400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cf404: 0x1603001b  bne         $s0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x1CF404u;
    {
        const bool branch_taken_0x1cf404 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x1CF408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF404u;
        // 0x1cf408: 0x21880  sll         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf404) {
            ctx->pc = 0x1CF474u;
            return;
        }
    }
    ctx->pc = 0x1CF40Cu;
    // 0x1cf40c: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x1cf40cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1cf410: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1cf410u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1cf414: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1cf414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1cf418: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1cf418u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1cf41c: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CF41Cu;
    {
        const bool branch_taken_0x1cf41c = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1CF420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF41Cu;
        // 0x1cf420: 0x41903  sra         $v1, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf41c) {
            ctx->pc = 0x1CF42Cu;
            return;
        }
    }
    ctx->pc = 0x1CF424u;
    // 0x1cf424: 0x2483000f  addiu       $v1, $a0, 0xF
    ctx->pc = 0x1cf424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x1cf428: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x1cf428u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    ctx->pc = 0x1cf42cu;
}

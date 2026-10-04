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

// Function: entry_001cf4bc
// Address: 0x1cf4bc - 0x1cf4dc
void entry_001cf4bc_0x1cf4bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cf4bc_0x1cf4bc");
#endif

    ctx->pc = 0x1cf4bcu;

    // 0x1cf4bc: 0x24770014  addiu       $s7, $v1, 0x14
    ctx->pc = 0x1cf4bcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1cf4c0: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1cf4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1cf4c4: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1cf4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1cf4c8: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1cf4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1cf4cc: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CF4CCu;
    {
        const bool branch_taken_0x1cf4cc = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1CF4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF4CCu;
        // 0x1cf4d0: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf4cc) {
            ctx->pc = 0x1CF4DCu;
            return;
        }
    }
    ctx->pc = 0x1CF4D4u;
    // 0x1cf4d4: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x1cf4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x1cf4d8: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1cf4d8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    ctx->pc = 0x1cf4dcu;
}
